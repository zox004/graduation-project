function [data, info] = testRequestOnlyResponse
%TestRequestOnly gives an empty data for rosbridge_library/TestRequestOnlyResponse

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'rosbridge_library/TestRequestOnlyResponse';
info.MessageType = 'rosbridge_library/TestRequestOnlyResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,0);
