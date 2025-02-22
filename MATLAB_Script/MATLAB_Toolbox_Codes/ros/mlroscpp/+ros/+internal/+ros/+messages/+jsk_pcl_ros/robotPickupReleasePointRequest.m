function [data, info] = robotPickupReleasePointRequest
%RobotPickupReleasePoint gives an empty data for jsk_pcl_ros/RobotPickupReleasePointRequest

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'jsk_pcl_ros/RobotPickupReleasePointRequest';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.TargetPoint, info.TargetPoint] = ros.internal.ros.messages.geometry_msgs.point;
info.TargetPoint.MLdataType = 'struct';
[data.PickOrRelease, info.PickOrRelease] = ros.internal.ros.messages.ros.default_type('int8',1);
info.MessageType = 'jsk_pcl_ros/RobotPickupReleasePointRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'target_point';
info.MatPath{8} = 'target_point.x';
info.MatPath{9} = 'target_point.y';
info.MatPath{10} = 'target_point.z';
info.MatPath{11} = 'pick_or_release';
