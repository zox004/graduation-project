function [data, info] = scriptState
%ScriptState gives an empty data for cob_script_server/ScriptState

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'cob_script_server/ScriptState';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.FunctionName, info.FunctionName] = ros.internal.ros.messages.ros.char('string',0);
[data.ComponentName, info.ComponentName] = ros.internal.ros.messages.ros.char('string',0);
[data.ParameterName, info.ParameterName] = ros.internal.ros.messages.ros.char('string',0);
[data.FullGraphName, info.FullGraphName] = ros.internal.ros.messages.ros.char('string',0);
[data.UNKNOWN, info.UNKNOWN] = ros.internal.ros.messages.ros.default_type('int8',1, 0);
[data.ACTIVE, info.ACTIVE] = ros.internal.ros.messages.ros.default_type('int8',1, 1);
[data.SUCCEEDED, info.SUCCEEDED] = ros.internal.ros.messages.ros.default_type('int8',1, 2);
[data.FAILED, info.FAILED] = ros.internal.ros.messages.ros.default_type('int8',1, 3);
[data.PAUSED, info.PAUSED] = ros.internal.ros.messages.ros.default_type('int8',1, 4);
[data.State, info.State] = ros.internal.ros.messages.ros.default_type('int8',1);
[data.ErrorCode, info.ErrorCode] = ros.internal.ros.messages.ros.default_type('int16',1);
info.MessageType = 'cob_script_server/ScriptState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,17);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'function_name';
info.MatPath{8} = 'component_name';
info.MatPath{9} = 'parameter_name';
info.MatPath{10} = 'full_graph_name';
info.MatPath{11} = 'UNKNOWN';
info.MatPath{12} = 'ACTIVE';
info.MatPath{13} = 'SUCCEEDED';
info.MatPath{14} = 'FAILED';
info.MatPath{15} = 'PAUSED';
info.MatPath{16} = 'state';
info.MatPath{17} = 'error_code';
