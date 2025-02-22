function [data, info] = capabilityEvent
%CapabilityEvent gives an empty data for capabilities/CapabilityEvent

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'capabilities/CapabilityEvent';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Capability, info.Capability] = ros.internal.ros.messages.ros.char('string',0);
[data.Provider, info.Provider] = ros.internal.ros.messages.ros.char('string',0);
[data.LAUNCHED, info.LAUNCHED] = ros.internal.ros.messages.ros.char('string',0);
[data.LAUNCHED, info.LAUNCHED] = ros.internal.ros.messages.ros.char('string',1,'launched');
[data.STOPPED, info.STOPPED] = ros.internal.ros.messages.ros.char('string',0);
[data.STOPPED, info.STOPPED] = ros.internal.ros.messages.ros.char('string',1,'stopped');
[data.TERMINATED, info.TERMINATED] = ros.internal.ros.messages.ros.char('string',0);
[data.TERMINATED, info.TERMINATED] = ros.internal.ros.messages.ros.char('string',1,'terminated');
[data.SERVERREADY, info.SERVERREADY] = ros.internal.ros.messages.ros.char('string',0);
[data.SERVERREADY, info.SERVERREADY] = ros.internal.ros.messages.ros.char('string',1,'server_ready');
[data.Type, info.Type] = ros.internal.ros.messages.ros.char('string',0);
[data.Pid, info.Pid] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'capabilities/CapabilityEvent';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,14);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'capability';
info.MatPath{8} = 'provider';
info.MatPath{9} = 'LAUNCHED';
info.MatPath{10} = 'STOPPED';
info.MatPath{11} = 'TERMINATED';
info.MatPath{12} = 'SERVER_READY';
info.MatPath{13} = 'type';
info.MatPath{14} = 'pid';
