function [data, info] = estimatorStatus
%EstimatorStatus gives an empty data for mavros_msgs/EstimatorStatus

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'mavros_msgs/EstimatorStatus';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.AttitudeStatusFlag, info.AttitudeStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.VelocityHorizStatusFlag, info.VelocityHorizStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.VelocityVertStatusFlag, info.VelocityVertStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.PosHorizRelStatusFlag, info.PosHorizRelStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.PosHorizAbsStatusFlag, info.PosHorizAbsStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.PosVertAbsStatusFlag, info.PosVertAbsStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.PosVertAglStatusFlag, info.PosVertAglStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.ConstPosModeStatusFlag, info.ConstPosModeStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.PredPosHorizRelStatusFlag, info.PredPosHorizRelStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.PredPosHorizAbsStatusFlag, info.PredPosHorizAbsStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.GpsGlitchStatusFlag, info.GpsGlitchStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.AccelErrorStatusFlag, info.AccelErrorStatusFlag] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'mavros_msgs/EstimatorStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,18);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'attitude_status_flag';
info.MatPath{8} = 'velocity_horiz_status_flag';
info.MatPath{9} = 'velocity_vert_status_flag';
info.MatPath{10} = 'pos_horiz_rel_status_flag';
info.MatPath{11} = 'pos_horiz_abs_status_flag';
info.MatPath{12} = 'pos_vert_abs_status_flag';
info.MatPath{13} = 'pos_vert_agl_status_flag';
info.MatPath{14} = 'const_pos_mode_status_flag';
info.MatPath{15} = 'pred_pos_horiz_rel_status_flag';
info.MatPath{16} = 'pred_pos_horiz_abs_status_flag';
info.MatPath{17} = 'gps_glitch_status_flag';
info.MatPath{18} = 'accel_error_status_flag';
