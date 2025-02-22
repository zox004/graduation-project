% mkhimat

%   Copyright 1991-2004 MUSYN Inc. and The MathWorks, Inc.

echo off
himat = [ ...
   -0.0226  -36.6000  -18.9000  -32.1000         0         0    4.0000;
         0   -1.9000    0.9830         0   -0.4140         0         0;
    0.0123  -11.7000   -2.6300         0  -77.8000   22.4000         0;
         0         0    1.0000         0         0         0         0;
         0   57.3000         0         0         0         0         0;
         0         0         0   57.3000         0         0         0;
         0         0         0         0         0         0      -Inf];

wdel = nd2sys([50,5000],[1,10000]);
wp   = nd2sys([0.5,1.5],[1,0.03]);
wdel = daug(wdel,wdel);
wp   = daug(wp,wp);

%
%
echo on