function [data, info] = databaseModelPose
%DatabaseModelPose gives an empty data for household_objects_database_msgs/DatabaseModelPose

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'household_objects_database_msgs/DatabaseModelPose';
[data.ModelId, info.ModelId] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.Type, info.Type] = ros.internal.ros.messages.object_recognition_msgs.objectType;
info.Type.MLdataType = 'struct';
[data.Pose, info.Pose] = ros.internal.ros.messages.geometry_msgs.poseStamped;
info.Pose.MLdataType = 'struct';
[data.Confidence, info.Confidence] = ros.internal.ros.messages.ros.default_type('single',1);
[data.DetectorName, info.DetectorName] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'household_objects_database_msgs/DatabaseModelPose';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,23);
info.MatPath{1} = 'model_id';
info.MatPath{2} = 'type';
info.MatPath{3} = 'type.key';
info.MatPath{4} = 'type.db';
info.MatPath{5} = 'pose';
info.MatPath{6} = 'pose.header';
info.MatPath{7} = 'pose.header.seq';
info.MatPath{8} = 'pose.header.stamp';
info.MatPath{9} = 'pose.header.stamp.sec';
info.MatPath{10} = 'pose.header.stamp.nsec';
info.MatPath{11} = 'pose.header.frame_id';
info.MatPath{12} = 'pose.pose';
info.MatPath{13} = 'pose.pose.position';
info.MatPath{14} = 'pose.pose.position.x';
info.MatPath{15} = 'pose.pose.position.y';
info.MatPath{16} = 'pose.pose.position.z';
info.MatPath{17} = 'pose.pose.orientation';
info.MatPath{18} = 'pose.pose.orientation.x';
info.MatPath{19} = 'pose.pose.orientation.y';
info.MatPath{20} = 'pose.pose.orientation.z';
info.MatPath{21} = 'pose.pose.orientation.w';
info.MatPath{22} = 'confidence';
info.MatPath{23} = 'detector_name';
