function [data, info] = navigationPerformance
%NavigationPerformance gives an empty data for applanix_msgs/NavigationPerformance

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'applanix_msgs/NavigationPerformance';
[data.Td, info.Td] = ros.internal.ros.messages.applanix_msgs.timeDistance;
info.Td.MLdataType = 'struct';
[data.NorthPosRmsErr, info.NorthPosRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.EastPosRmsErr, info.EastPosRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.DownPosRmsErr, info.DownPosRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.NorthVelRmsErr, info.NorthVelRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.EastVelRmsErr, info.EastVelRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.DownVelRmsErr, info.DownVelRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.RollRmsErr, info.RollRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.PitchRmsErr, info.PitchRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.HeadingRmsErr, info.HeadingRmsErr] = ros.internal.ros.messages.ros.default_type('single',1);
[data.ErrEllipsoidSemiMajor, info.ErrEllipsoidSemiMajor] = ros.internal.ros.messages.ros.default_type('single',1);
[data.ErrEllipsoidSemiMinor, info.ErrEllipsoidSemiMinor] = ros.internal.ros.messages.ros.default_type('single',1);
[data.ErrEllipsoidOrientation, info.ErrEllipsoidOrientation] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'applanix_msgs/NavigationPerformance';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,18);
info.MatPath{1} = 'td';
info.MatPath{2} = 'td.time1';
info.MatPath{3} = 'td.time2';
info.MatPath{4} = 'td.distance';
info.MatPath{5} = 'td.time_types';
info.MatPath{6} = 'td.distance_type';
info.MatPath{7} = 'north_pos_rms_err';
info.MatPath{8} = 'east_pos_rms_err';
info.MatPath{9} = 'down_pos_rms_err';
info.MatPath{10} = 'north_vel_rms_err';
info.MatPath{11} = 'east_vel_rms_err';
info.MatPath{12} = 'down_vel_rms_err';
info.MatPath{13} = 'roll_rms_err';
info.MatPath{14} = 'pitch_rms_err';
info.MatPath{15} = 'heading_rms_err';
info.MatPath{16} = 'err_ellipsoid_semi_major';
info.MatPath{17} = 'err_ellipsoid_semi_minor';
info.MatPath{18} = 'err_ellipsoid_orientation';
