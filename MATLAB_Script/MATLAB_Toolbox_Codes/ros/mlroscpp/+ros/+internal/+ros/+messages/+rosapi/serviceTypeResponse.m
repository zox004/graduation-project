function [data, info] = serviceTypeResponse
%ServiceType gives an empty data for rosapi/ServiceTypeResponse

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'rosapi/ServiceTypeResponse';
[data.Type, info.Type] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'rosapi/ServiceTypeResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'type';
