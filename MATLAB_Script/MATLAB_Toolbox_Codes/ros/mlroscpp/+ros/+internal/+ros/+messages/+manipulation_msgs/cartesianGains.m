function [data, info] = cartesianGains
%CartesianGains gives an empty data for manipulation_msgs/CartesianGains

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'manipulation_msgs/CartesianGains';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Gains, info.Gains] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.FixedFrame, info.FixedFrame] = ros.internal.ros.messages.ros.default_type('double',NaN);
info.MessageType = 'manipulation_msgs/CartesianGains';
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
info.MatPath{7} = 'gains';
info.MatPath{8} = 'fixed_frame';
