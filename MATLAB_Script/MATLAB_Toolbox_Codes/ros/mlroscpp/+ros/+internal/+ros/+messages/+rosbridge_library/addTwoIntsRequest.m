function [data, info] = addTwoIntsRequest
%AddTwoInts gives an empty data for rosbridge_library/AddTwoIntsRequest

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'rosbridge_library/AddTwoIntsRequest';
[data.A, info.A] = ros.internal.ros.messages.ros.default_type('int64',1);
[data.B, info.B] = ros.internal.ros.messages.ros.default_type('int64',1);
info.MessageType = 'rosbridge_library/AddTwoIntsRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'a';
info.MatPath{2} = 'b';
