function [data, info] = hilActuatorControls
%HilActuatorControls gives an empty data for mavros_msgs/HilActuatorControls

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'mavros_msgs/HilActuatorControls';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Controls, info.Controls] = ros.internal.ros.messages.ros.default_type('single',16);
[data.Mode, info.Mode] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.Flags, info.Flags] = ros.internal.ros.messages.ros.default_type('uint64',1);
info.MessageType = 'mavros_msgs/HilActuatorControls';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'controls';
info.MatPath{8} = 'mode';
info.MatPath{9} = 'flags';
