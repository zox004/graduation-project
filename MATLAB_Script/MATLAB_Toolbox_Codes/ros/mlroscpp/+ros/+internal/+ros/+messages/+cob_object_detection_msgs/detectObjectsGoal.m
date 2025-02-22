function [data, info] = detectObjectsGoal
%DetectObjectsGoal gives an empty data for cob_object_detection_msgs/DetectObjectsGoal

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'cob_object_detection_msgs/DetectObjectsGoal';
[data.ObjectName, info.ObjectName] = ros.internal.ros.messages.std_msgs.string;
info.ObjectName.MLdataType = 'struct';
info.MessageType = 'cob_object_detection_msgs/DetectObjectsGoal';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'object_name';
info.MatPath{2} = 'object_name.data';
