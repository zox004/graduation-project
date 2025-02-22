function [data, info] = sEAJointState
%SEAJointState gives an empty data for baxter_core_msgs/SEAJointState

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'baxter_core_msgs/SEAJointState';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',NaN);
[data.CommandedPosition, info.CommandedPosition] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.CommandedVelocity, info.CommandedVelocity] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.CommandedAcceleration, info.CommandedAcceleration] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.CommandedEffort, info.CommandedEffort] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.ActualPosition, info.ActualPosition] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.ActualVelocity, info.ActualVelocity] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.ActualEffort, info.ActualEffort] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.GravityModelEffort, info.GravityModelEffort] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.GravityOnly, info.GravityOnly] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.HysteresisModelEffort, info.HysteresisModelEffort] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.CrosstalkModelEffort, info.CrosstalkModelEffort] = ros.internal.ros.messages.ros.default_type('double',NaN);
[data.HystState, info.HystState] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'baxter_core_msgs/SEAJointState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,19);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'name';
info.MatPath{8} = 'commanded_position';
info.MatPath{9} = 'commanded_velocity';
info.MatPath{10} = 'commanded_acceleration';
info.MatPath{11} = 'commanded_effort';
info.MatPath{12} = 'actual_position';
info.MatPath{13} = 'actual_velocity';
info.MatPath{14} = 'actual_effort';
info.MatPath{15} = 'gravity_model_effort';
info.MatPath{16} = 'gravity_only';
info.MatPath{17} = 'hysteresis_model_effort';
info.MatPath{18} = 'crosstalk_model_effort';
info.MatPath{19} = 'hystState';
