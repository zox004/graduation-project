function [data, info] = attitudeCommand
%AttitudeCommand gives an empty data for hector_uav_msgs/AttitudeCommand

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'hector_uav_msgs/AttitudeCommand';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Roll, info.Roll] = ros.internal.ros.messages.ros.default_type('single',1);
[data.Pitch, info.Pitch] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'hector_uav_msgs/AttitudeCommand';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'roll';
info.MatPath{8} = 'pitch';
