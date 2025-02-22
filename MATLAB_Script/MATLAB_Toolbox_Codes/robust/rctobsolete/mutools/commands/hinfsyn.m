%HINFSYN  H-infinity controller synthesis.
%
%   [K,CL,GAM] = HINFSYN(P,NMEAS,NCON) calculates the Hoo-optimal
%   controller u = K y for the LTI plant P with state-space equations:
%
%       dx =  A x +  B1 w +  B2 u
%        z = C1 x + D11 w + D12 u
%        y = C2 x + D21 w + D22 u
%
%   NMEAS and NCON specify the numbers of measurements y and controls u
%   (u and y must be the last inputs and outputs of P). The controller K
%   minimizes the H-infinity norm of CL = LFT(P,K), the closed-loop
%   transfer function from disturbance signals w to error signals z.
%
%   [K,CL,GAM] = HINFSYN(P,NMEAS,NCON,GAMTRY) calculates the H-infinity
%   controller for the performance level GAMTRY. When GAMTRY is feasible,
%   GAM is the actual closed-loop performance obtained with this controller
%   (GAM<=GAMTRY). Otherwise GAM=Inf and K and CL are set to [].
%
%   [K,CL,GAM] = HINFSYN(P,NMEAS,NCON,[GMIN,GMAX]) searches the range
%   [GMIN,GMAX] for the best achievable performance GAM. HINFSYN returns
%   a controller K with performance
%      * GAM <= GMIN when GMIN is achievable
%      * GMIN < GAM <= GMAX when GMAX but not GMIN is achievable
%   If GMAX itself is not achievable, HINFSYN returns GAM=Inf and K=CL=[].
%
%   [K,...] = HINFSYN(P,NMEAS,NCON,...,OPT) specifies additional options.
%   Use hinfsynOptions to create the option set OPT.
%
%   [K,CL,GAM,INFO] = HINFSYN(P,NMEAS,NCON,...) also returns a structure
%   INFO with additional synthesis data. For Riccati-based synthesis,
%   this includes
%       gamma   Performance level used to compute K
%           X   Riccati solution Xoo for this performance level
%           Y   Riccati solution Yoo for this performance level
%       Ku,Kw   State-feedback gains
%       Lx,Lu   Observer gains
%        Preg   Regularized plant used to compute K
%          AS   All controllers with performance INFO.gamma are given by
%               K = lft(INFO.AS,Q) where Q is any stable transfer function
%               of size [NCON NMEAS] with peak gain less than INFO.gamma.
%   For LMI-based synthesis, INFO contains the best performance GAMMA and
%   the corresponding LMI solutions R and S.
%
%   The observer form of the controller K is
%       dxe = A xe + B1 we + B2 u + Lx e
%         u = Ku xe + Lu e
%        we = Kw xe
%   where we is an estimate of the worst-case perturbation and
%         e = y - C2 xe - D21 we - D22 u
%   plays the role of "innovation."
%
%   See also HINFSYNOPTIONS, HINFFI, HINFFC, HINFSTRUCT, H2SYN, LTRSYN.

% Pre-2018a help
%HINFSYN  H-infinity controller synthesis.
% [K,CL,GAM,INFO] = HINFSYN(P,NMEAS,NCON) or 
% [K,CL,GAM,INFO] = HINFSYN(P,NMEAS,NCON,KEY1,VALUE1,KEY2,VALUE2,...)
%    computes H-infinity controller K for partitioned plant P via the
%    gamma-iteration, computing the minimal cost GAM in [GMIN,GMAX] for
%    which the closed-loop system CL= LFT(P,K) satisfies 
%                 HINFNORM(CL) < GAM.
%    NMEAS is the number of measurement outputs from the plant and NCON is
%    the number of control inputs to the plant; these may be omitted if  
%    P=MKTITO(P,NMEAS,NCON) or P=AUGW(SYS,W1,W2,W3). 
% 
%       KEY     |VALUE   | MEANING
%     ----------------------------------------------------------------
%      'GMAX'   | real   | initial upper bound on GAM (Inf default)
%      'GMIN'   | real   | initial lower bound on GAM (0 default)
%      'TOLGAM' | real   | relative error tolerance for GAM (.01 default)
%      'METHOD' |        | H-infinity solution method: 
%   	        |'ric'   | - (default) standard 2-Riccati solution, DGKF1989
% 	            |'lmi'   | - LMI solution, Packard 1992, Gahinet 1994
%               |'maxe'  | - maximum entropy, HINFSYNE, Glover-Doyle 1988
%      'S0'     | real   |  (default=Inf) frequency S0 at which entropy is
%               |        |      evaluated, only applies to METHOD 'maxe'   	
%      'DISPLAY'|'on/off'| display synthesis information to screen,
%               |        |  (default = 'off')   
%        ----------------------------------------------------------------
%      outputs:
%        K     -  H-infinity controller
%        CL    -  lft(P,K) (closed-loop system)
%        GAM   -  H-infinity cost
%        INFO  -  Structure array containing possible additional information  
%                 depending on 'METHOD':
%                 INFO.AS  - all solutions controller, LTI two-port LFT
%                 INFO.KFI  - full information gain matrix (constant
%                             feedback U2 = KFI*[X; U1] )
%                 INFO.KFC  - full control gain matrix (constant 
%                             output-injection; KFC is the dual of KFI)
%                 INFO.GAMFI - H-infinity cost for full information KFI
%                 INFO.GAMFC - H-infinity cost for full control KFC
% 
%     See also: AUGW, H2SYN, LOOPSYN, MKTITO, NCFSYN, LTI/NORM 

% OLD HELP
% function [k,g,gfin,ax,ay,hamx,hamy] =
%                 hinfsyn(p,nmeas,ncon,gmin,gmax,tol,ricmethd,epr,epp,quiet)
%
%  This function computes the H-infinity (sub) optimal n-state
%  controller, using Glover's and Doyle's 1988 result, for a system P.
%  the system P is partitioned:
%                          | a   b1   b2   |
%              p    =      | c1  d11  d12  |
%                          | c2  d21  d22  |
%   where b2 has column size of the number of control inputs (NCON)
%   and c2 has row size of the number of measurements (NMEAS) being
%   provided to the controller.
%
%   inputs:
%      P        -   interconnection matrix for control design
%      NMEAS    -   # controller inputs (np2)
%      NCON     -   # controller outputs (nm2)
%      GMIN     -   lower bound on gamma
%      GMAX     -   upper bound on gamma
%      TOL      -   relative difference between final gamma values
%      RICMETHD -   Riccati solution via
%                     1 - eigenvalue reduction (balance)
%                    -1 - eigenvalue reduction (no balancing)
%                     2 - real schur decomposition  (balance,default)
%                    -2 - real schur decomposition  (no balancing)
%      EPR      -   measure of when real(eig) of Hamiltonian is zero
%                    (default EPR = 1e-10)
%      EPP      -  positive definite determination of xinf solution
%                    (default EPP = 1e-6)
%     QUIET   -   prints out information about H-infinity iteration
%                    0 - do not print results
%                    1 - print results to command window (default)
%
%    outputs:
%      K       -   H-infinity controller
%      G       -   closed-loop system
%      GFIN    -   final gamma value used in control design
%      AX      -   X-Riccati solution as a VARYING matrix with
%                     independent variable gamma (optional)
%      AY      -   Y-Riccati solution as a VARYING matrix with
%                      independent variable gamma (optional)
%      HAMX    -   X-Hamiltonian matrix as a VARYING matrix with
%                      independent variable gamma (optional)
%      HAMY    -   Y-Hamiltonian matrix as a VARYING matrix with
%                      independent variable gamma (optional)
%
%   See also: H2SYN, H2NORM, HINFFI, HINFNORM, RIC_EIG, and RIC_SCHR

%   Copyright 1991-2005 MUSYN Inc. and The MathWorks, Inc.

function [k,g,gfin,ax,ay,hamx,hamy] = ...
          hinfsyn(p,nmeas,ncon,gmin,gmax,tol,imethd,epr,epp,quiet)
%
%   the following assumptions are made:
%    (i)   (a,b2,c2) is stabilizable and detectable
%    (ii)  d12 and d21 have full rank
%     on return, the eigenvalues in egs must all be > 0
%     for the closed-loop system to be stable and to
%     have inf-norm less than GAM.
%     this program provides a gamma iteration using a
%     bisection method, it iterates on the value
%     of GAM to approach the H-inf optimal controller.
%                                    np  nm1  nm2
%   The system p is partitioned:   | a   b1   b2   | np
%                                  | c1  d11  d12  | np1
%                                  | c2  d21  d22  | np2
%
% Reference Paper:
%       'State-space formulae for all stabilizing controllers
%         that satisfy and h-infinity-norm bound and relations
%         to risk sensitivity,' by keith glover and john doyle,
%         systems & control letters 11, oct, 1988, pp 167-172.

storxinf = [];
storyinf = [];
storhx = [];
storhy = [];
gammavecxi = [];
gammavecyi = [];
gammavechx = [];
gammavechy = [];
rhopcond = 0;
rhofcond = 0;
rhogamdata = [];
minrat = 0.2;
maxrat = 0.8;
k=[]; g =[]; gfin = []; % GJB matlab v5 fix
if nargin == 0
 disp('usage: [k,g,gfin] = hinfsyn(p,nmeas,ncon,gmin,gmax,tol,ricmethd,epr,epp) ')
 return
end
if nargin <= 5
 disp('usage: [k,g,gfin] = hinfsyn(p,nmeas,ncon,gmin,gmax,tol,ricmethd,epr,epp) ')
 error('incorrect number of input arguments')
 return
end
% setup default cases
if nargin == 6
  imethd = 2;
  epr = 1e-10;
  epp = 1e-6;
  quiet = 1;
elseif nargin == 7
  epr = 1e-10;
  epp = 1e-6;
  quiet = 1;
elseif nargin == 8
  epp = 1e-6;
  quiet = 1;
elseif nargin == 9
  quiet = 1;
end

gam2=gmax;
gam0=gmax;
if gmin > gmax
  error(' gamma min is greater than gamma max')
  return
end
% save the input system to form the closed-loop system
pnom = p;
niter = 1;
npass = 0;
first_it = 1;
totaliter = 0;
% fprintf('checking rank conditions: ');
% [p,r12,r21,fail] = hinf_st(p,nmeas,ncon);
  [p,r12,r21,fail,gmin] = hinf_st(p,nmeas,ncon,gmin,gmax,quiet);
  if fail == 1,
    fprintf('\n')
    return
  end

%			gamma iteration

if quiet == 1
	fprintf('Test bounds:  %10.4f <  gamma  <=  %10.4f\n\n',gmin,gmax)
	fprintf('  gamma    hamx_eig  xinf_eig  hamy_eig   yinf_eig   nrho_xy   p/f\n')
end

 while niter==1
  totaliter = totaliter + 1;
  if first_it ==1		% first iteration checks gamma max
    gam = gmax;
  else
    if rhopcond >= 1 & rhofcond >= 1
      [gam,exc] = gpredict(rhogamdata,minrat,maxrat);
      if exc ~= 0
        disp('EXCEPTION')
        gam=((gam2+gam0)/2.);
      end
    else
      gam=((gam2+gam0)/2.);
    end
    gamall=[gam0 gam gam2];
  end
  if quiet == 1
  	if gam < 1000
    	  fprintf('%9.3f  ',gam)
  	else
    	  fprintf('%9.3e  ',gam)
  	end
  end
  [xinf,yinf,f,h,fail,hmx,hmy,hxmin,hymin] = ...
                        hinf_gam(p,nmeas,ncon,epr,gam,imethd);
  if nargout >= 4
    if isempty(xinf)
      % don't update the matrix
    else
      gammavecxi = [gammavecxi ; gam];
      storxinf = [storxinf ; xinf];
    end
    if nargout >= 5
      if isempty(yinf)
        % don't update the matrix
      else
        gammavecyi = [gammavecyi ; gam];
        storyinf = [storyinf ; yinf];
      end
      if nargout >= 6
        if isempty(hmx)
          % don't update the matrix
        else
          gammavechx = [gammavechx ; gam];
          storhx = [storhx ; hmx];
        end
        if nargout >= 7
          if isempty(hmy)
            % don't update the matrix
          else
           gammavechy = [gammavechy ; gam];
           storhy = [storhy ; hmy];
          end
        end
      end
    end
  end
%
% check the conditions for a solution to the h-infinity control problem
%
  if fail == 0
    xe = eig(xinf);
    ye = eig(yinf);
    xye = eig(xinf*yinf);
    xeig = min(real(xe));
    yeig = min(real(ye));
    xyinfe = max(abs(xye));
    if quiet == 1
      mprintf(hxmin,'%8.1e',' ');
    end
    if xeig < -epp | isnan(xeig)    % change to a stablility test
      if quiet == 1
      	mprintf(xeig,' %8.1e','#');
      end
      npass = 1;
    else
      if quiet == 1
      	mprintf(xeig,' %8.1e',' ');
      end
    end

    if quiet == 1
       mprintf(hymin,' %8.1e','  ');
    end
    if yeig < -epp | isnan(yeig) % change to a stablility test
      if quiet == 1
      	mprintf(yeig,' %8.1e','#');
      end
      npass = 1;
    else
      if quiet == 1
      	mprintf(yeig,' %8.1e',' ');
      end
    end
%   scaled rho(xy)
    if npass == 0
      rhogamdata = [rhogamdata;[xyinfe/gam/gam gam]];
    end
    if xyinfe/gam/gam > 1
      if quiet == 1
      	fprintf('  %7.4f#  ',xyinfe/gam/gam)
      end
      if npass == 0
        npass = 1;
        rhofcond = rhofcond+1;
      end
    else
      if quiet == 1
        fprintf('  %7.4f   ',xyinfe/gam/gam)
      end
      if npass == 0
        rhopcond = rhopcond+1;
      end
    end
  else
    if isempty(xinf)
        if quiet == 1
      		mprintf(hxmin,'%8.1e','#');
      		fprintf('  ******* ')
        end
      	if isempty(yinf)
      		if quiet == 1
        		mprintf(hymin,' %8.1e','# ');
        		fprintf('  ******* ')
        		fprintf('   ******   ')
		end
      	else
        	ye = eig(yinf);
        	yeig = min(real(ye));
		if quiet == 1
        		mprintf(hymin,' %8.1e ',' ');
        		if yeig < -epp | isnan(yeig)
          			mprintf(yeig,' %8.1e','#');
        		else
          			mprintf(yeig,' %8.1e',' ');
        		end
       		 	fprintf('   ******   ')
      		end
	end
    else
      xe = eig(xinf);
      xeig = min(real(xe));
      if quiet == 1
      		mprintf(hxmin,'%8.1e',' ');
      		if xeig < -epp | isnan(xeig)
       	 		mprintf(xeig,' %8.1e','#');
      		else
        		mprintf(xeig,' %8.1e',' ');
      		end
      		mprintf(hymin,' %8.1e ','#');
      		fprintf('  ******* ')
      		fprintf('   ******   ')
      end
    end
    npass = 1;
  end

  if quiet == 1
  	if npass == 1
   	  fprintf(' f \n')
  	else
    	  fprintf(' p \n')
  	end
  end
%
% check the gamma iteration
%
 if first_it == 1;
   if npass == 0;
     gam0 = gmin;
     gam2 = gmax;
     xinffin = xinf;
     yinffin = yinf;
     fsave = f;
     hsave = h;
     gfin = gmax;
     first_it = 0;
     if gmin == gmax
       niter = 0;           % stop since gmax = gmin
     end
  else
     niter = 0;
     if quiet == 1
     	fprintf('Gamma max, %10.4f, is too small !!\n',gmax);
     end
% save output data
     if nargout >= 4
       ax = vpck(storxinf,gammavecxi);
       if nargout >= 5
         ay = vpck(storyinf,gammavecyi);
         if nargout >= 6
           hamx = vpck(storhx,gammavechx);
           if nargout >= 7
             hamy = vpck(storhy,gammavechy);
        end
         end
       end
     end
     return
   end
 else
   if abs(gam - gam0) < tol
     niter = 0;
     if npass == 0
       gfin = gam;
       xinffin = xinf;
       yinffin = yinf;
     fsave = f;
     hsave = h;
     else
       gfin = gam2;
     end
   else
     if npass == 0;
       gam2 = gam;
       xinffin = xinf;
       yinffin = yinf;
     fsave = f;
     hsave = h;
     else
       gam0 = gam;
     end
   end
   npass = 0;
 end
end
xinf = xinffin;
yinf = yinffin;
%  finished with gamma iteration
if quiet == 1
	fprintf('\n Gamma value achieved: %10.4f\n',gfin)
end

[k] = hinf_c(p,nmeas,ncon,xinf,yinf,fsave,hsave,gfin,r12,r21);
[g] = starp(pnom,k,nmeas,ncon);

% save output data
  if nargout >= 4
    ax = vpck(storxinf,gammavecxi);
    if nargout >= 5
      ay = vpck(storyinf,gammavecyi);
      if nargout >= 6
        hamx = vpck(storhx,gammavechx);
        if nargout >= 7
          hamy = vpck(storhy,gammavechy);
        end
      end
    end
  end
%
%