function [Gred,info,GR] = reduce(G,varargin)
%REDUCE  Main interface to model approximation algorithms.
% This function groups all the Hankel SV based model reduction routines
% (for continuous/discrete, stable/unstable models).
%		
% [GRED,REDINFO,GR] = REDUCE(G,ORDER,KEY1,VALUE1,KEY2,VALUE2,...) returns
% a reduced order model GRED of LTI object G and a predetermined error bound 
% between the two models. An error bound is an indication of how "close" GRED 
% is to G and is computed based on 
%
%                additive error inf||G1-G2||, or 
%                multiplicative error inf||(G-GRED)/GRED|| or 
%                gap metrics (Ref.: ncfmr).
%
% Hankel singular values of a stable system indicate the "states energy" of 
% the system. Hence, reduced order can be directly determined by examining 
% the system Hankel sv's. Model reduction routines, which based on Hankel 
% sv's are grouped by their error bound types. In general, "additive" error 
% methods are sufficient to provide a good reduced order model. But 
% for systems with low damped poles and/or zeros, "multiplicative" error 
% method (BSTMR) will minimize the "relative" error between G and GRED and 
% produce a better fit on the low damped poles/zeros (see HANKELSV).
%
% Examples: 
%
%	[GRED,info]=reduce(G,5);  % default to BALANCMR
%	[GRED,info]=reduce(G,[5:10],'ErrorType','mult'); % select BSTMR
%	[GRED,info]=reduce(G,{5:10},'algorithm','schur');%select SCHURMR
%	[GRED,info]=reduce(G,'ErrorType','mult','MaxError',[0.8,0.5]);
%   [GRED,info]=reduce(G,'algorithm','hankel','maxerror',[0.8,0.6,0.3]);
%   [GRED,info]=reduce(G,'weight',{wt1,wt2},'order',[4:2:10]); % weighted
%   [GL,info,GR]=reduce(G,'ErrroType','ncf','order',[10:2:18]);
%
% Inputs:
%     G   - LTI system to be reduced (no other inputs will list/plot
%              Hankel sv's and prompt for reduced order)
%   
% Optional inputs:
%    ORDER - an integer array with desired order of reduced model. 
%		 A batch run of [m:n] can be specified for a pack of reduced 
% 		 order models to be generated. The unstable part is kept as
% 		 default.
%
%   KEY        |VALUE           | MEANING
%  --------------------------------------------------------------------------
%  'Algorithm' |'balance'       | Default for 'add' (balancmr.m)
%              |'schur'         | Option for 'add'  (schurmr.m)
%              |'hankel'        | Option for 'add'  (hankelmr.m)
%      	       |'bst'           | Default for 'mul' (bstmr.m)
%              |'ncf'	        | Default for 'ncf' (ncfmr.m)
%  --------------------------------------------------------------------------
%  'ErrorType' |'add'	        | Additive error (default)
%              |'mult'          | minimize multiplicative error at G output
%              |'ncf'           | NCF nugap error
%  --------------------------------------------------------------------------
%  'MaxError'  |real no. or     | Reduce to achieve H-infinity error
%              |vector          | If present, 'MaxError' overrides ORDER input.
%  --------------------------------------------------------------------------
%  'Weights'   |{Wout,Win} cell | Optional 1x2 cell array of LTI weights Wout
%              |                | (output)and Win(input); default is both 
%              |                | identity; used only with'ErrorType','add'.
%              |                | Weights have to be invertible.
%  --------------------------------------------------------------------------              
%  'Display'   |'off' or 'on'	| Display HANKELSV plots (default 'off');
%              |                | 'Display' overrides ORDER input, if present. 
%  ------------------------------------------------------------------------
%  'Order'     |integer/vector  | Order of reduced model
%              |or cell array   | use it if not specifying as 2nd argument
%  -----------------------------------------------------------------------
%
% A serial of reduced order models can be generated by specifying m = x:y. By 
% default, all the anti-stable part of a physical system is kept. Weights
% are used to emphasize or deemphasize some frequency range of interests
% for better reduced order model approximation of the original model. 
%
% 'MaxError' can be specified in the same fashion after an 'ErrorType' is 
% selected. In this case, reduced order will be determined when the sum of
% the tails of the Hankel sv's reaches the 'Max Error'.
%
%  Outputs:
%
%    GRED    - LTI reduced order system, 
%              or the left coprime for normalized coprime case 
%    REDINFO - a struct of REDINFO.ErrorBound, REDINFO.StabSV, and 
%    REDINFO.UnstabSV. For 'ncf' option, it becomes REDINFO.hsv, REDINFO.GL,
%    REDINFO.GR
%    
% G, GRED, and GR are LTI objects, either continuous or discrete time.
%
% See also	BALANCMR, SCHURMR, BSTMR, NCFMR, HANKELMR, WTBALREAL.

% R. Y. Chiang & M. G. Safonov 4/15/02
% Copyright 1988-2004 The MathWorks, Inc. 
% All Rights Reserved. 

% Defaults:
[varargin{:}] = convertStringsToChars(varargin{:});
erroval = 'add';
algoval = 'balancmr';
maxval = {};
ordval = {};
wtval = {};
dispval = 'off';
comp_counter = 1;    % checking compatibility 

method_varargin = {};

vvaagg = varargin;

% Checking the "order" case (2nd argument is not char string)

if ~isempty(vvaagg)
    if isnumeric(vvaagg{1,1})
         ordval = vvaagg{1,1};
        vvaagg = varargin(2:end);
    end 
end

if ~isempty(vvaagg)
   if mod(length(vvaagg),2)
       error(message('Robust:analysis:reduce1'));
   end
end

% Loop through varargin:

if ~isempty(vvaagg)
for i = 1:2:length(vvaagg)-1
    curarg0 = vvaagg{1,i};
    curarg = lower(curarg0(1:3));
    if ~isstr(curarg)
        error(message('Robust:analysis:reduce2'));
    end
    
    curarg10 = vvaagg{1,i+1};
    curarg1 = vvaagg{1,i+1};
    if isstr(curarg1)
       curarg1 = [curarg1 '    '];
       curarg1 = lower(curarg1(1:3));
    end
    
    switch curarg
        
    % Checking 'ErrorType'
    case 'err'
        switch curarg1
            case 'add'
                erroval = 'add';
                algoval = @balancmr;
                comp_counter = comp_counter*5;
            case 'mul'
                erroval = 'mul';
                algoval = @bstmr;
                comp_counter = comp_counter*6;
            case 'ncf'
                erroval = 'ncf';
                algoval = @ncfmr;
                comp_counter = comp_counter*7;
            otherwise                 
                error(message('Robust:analysis:reduce3',curarg10));
        end

    % Checking 'algorithm'
    case 'alg'
        switch curarg1
            case 'bal'
                algoval = @balancmr;
                comp_counter = comp_counter*2;
            case 'sch'
                algoval = @schurmr;
                comp_counter = comp_counter*2;
            case 'han'
                algoval = @hankelmr;
                comp_counter = comp_counter*2;
            case 'bst'
                algoval = @bstmr;
                comp_counter = comp_counter*3;
            case 'ncf'
                algoval = @ncfmr;
                comp_counter = comp_counter*4;
            otherwise                 
                error(message('Robust:analysis:reduce4',curarg10));
        end
    
    % Checking 'MaxError'
    case 'max'
        maxval = curarg1;
        method_varargin = [method_varargin, {'maxerror',maxval}];

    % Checking 'Weights'
    case 'wei'
        wtval = curarg1;
        method_varargin = [method_varargin, {'weights',wtval}];

    % Checking 'Display'
    case 'dis'
        dispval = curarg1;
        method_varargin = [method_varargin, {'display',dispval}];

    % Checking 'Order' 
    case 'ord'
        ordval = curarg1;
        method_varargin = [method_varargin, {'order',ordval}];
    otherwise
        error(message('Robust:analysis:reduce5',curarg0));
    end % curarg1 switch loop
end % for loop
end % if vvaagg is not empty

badcombo = [12 14 15 20 21 24];

if find(comp_counter == badcombo)   
   warning(message('Robust:analysis:reduce6'));
end

% ----- Start execution:

if isempty(ordval)
    method_varargin = [{algoval,G}, method_varargin];
else
    method_varargin = [{algoval,G}, {ordval}, method_varargin];
end

[Gred,info] = feval(method_varargin{:});

% ---------- End of REDUCE.M % 10/26/02
