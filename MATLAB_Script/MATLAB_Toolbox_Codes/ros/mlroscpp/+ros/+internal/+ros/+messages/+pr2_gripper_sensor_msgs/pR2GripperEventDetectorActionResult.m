function [data, info] = pR2GripperEventDetectorActionResult
%PR2GripperEventDetectorActionResult gives an empty data for pr2_gripper_sensor_msgs/PR2GripperEventDetectorActionResult

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'pr2_gripper_sensor_msgs/PR2GripperEventDetectorActionResult';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Status, info.Status] = ros.internal.ros.messages.actionlib_msgs.goalStatus;
info.Status.MLdataType = 'struct';
[data.Result, info.Result] = ros.internal.ros.messages.pr2_gripper_sensor_msgs.pR2GripperEventDetectorResult;
info.Result.MLdataType = 'struct';
info.MessageType = 'pr2_gripper_sensor_msgs/PR2GripperEventDetectorActionResult';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,33);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'status';
info.MatPath{8} = 'status.goal_id';
info.MatPath{9} = 'status.goal_id.stamp';
info.MatPath{10} = 'status.goal_id.stamp.sec';
info.MatPath{11} = 'status.goal_id.stamp.nsec';
info.MatPath{12} = 'status.goal_id.id';
info.MatPath{13} = 'status.status';
info.MatPath{14} = 'status.PENDING';
info.MatPath{15} = 'status.ACTIVE';
info.MatPath{16} = 'status.PREEMPTED';
info.MatPath{17} = 'status.SUCCEEDED';
info.MatPath{18} = 'status.ABORTED';
info.MatPath{19} = 'status.REJECTED';
info.MatPath{20} = 'status.PREEMPTING';
info.MatPath{21} = 'status.RECALLING';
info.MatPath{22} = 'status.RECALLED';
info.MatPath{23} = 'status.LOST';
info.MatPath{24} = 'status.text';
info.MatPath{25} = 'result';
info.MatPath{26} = 'result.data';
info.MatPath{27} = 'result.data.stamp';
info.MatPath{28} = 'result.data.stamp.sec';
info.MatPath{29} = 'result.data.stamp.nsec';
info.MatPath{30} = 'result.data.trigger_conditions_met';
info.MatPath{31} = 'result.data.slip_event';
info.MatPath{32} = 'result.data.acceleration_event';
info.MatPath{33} = 'result.data.acceleration_vector';
