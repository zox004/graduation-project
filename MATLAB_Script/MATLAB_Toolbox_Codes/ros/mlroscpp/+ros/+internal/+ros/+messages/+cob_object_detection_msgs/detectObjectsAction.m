function [data, info] = detectObjectsAction
%DetectObjectsAction gives an empty data for cob_object_detection_msgs/DetectObjectsAction

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'cob_object_detection_msgs/DetectObjectsAction';
[data.ActionGoal, info.ActionGoal] = ros.internal.ros.messages.cob_object_detection_msgs.detectObjectsActionGoal;
info.ActionGoal.MLdataType = 'struct';
[data.ActionResult, info.ActionResult] = ros.internal.ros.messages.cob_object_detection_msgs.detectObjectsActionResult;
info.ActionResult.MLdataType = 'struct';
[data.ActionFeedback, info.ActionFeedback] = ros.internal.ros.messages.cob_object_detection_msgs.detectObjectsActionFeedback;
info.ActionFeedback.MLdataType = 'struct';
info.MessageType = 'cob_object_detection_msgs/DetectObjectsAction';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,126);
info.MatPath{1} = 'action_goal';
info.MatPath{2} = 'action_goal.header';
info.MatPath{3} = 'action_goal.header.seq';
info.MatPath{4} = 'action_goal.header.stamp';
info.MatPath{5} = 'action_goal.header.stamp.sec';
info.MatPath{6} = 'action_goal.header.stamp.nsec';
info.MatPath{7} = 'action_goal.header.frame_id';
info.MatPath{8} = 'action_goal.goal_id';
info.MatPath{9} = 'action_goal.goal_id.stamp';
info.MatPath{10} = 'action_goal.goal_id.stamp.sec';
info.MatPath{11} = 'action_goal.goal_id.stamp.nsec';
info.MatPath{12} = 'action_goal.goal_id.id';
info.MatPath{13} = 'action_goal.goal';
info.MatPath{14} = 'action_goal.goal.object_name';
info.MatPath{15} = 'action_goal.goal.object_name.data';
info.MatPath{16} = 'action_result';
info.MatPath{17} = 'action_result.header';
info.MatPath{18} = 'action_result.header.seq';
info.MatPath{19} = 'action_result.header.stamp';
info.MatPath{20} = 'action_result.header.stamp.sec';
info.MatPath{21} = 'action_result.header.stamp.nsec';
info.MatPath{22} = 'action_result.header.frame_id';
info.MatPath{23} = 'action_result.status';
info.MatPath{24} = 'action_result.status.goal_id';
info.MatPath{25} = 'action_result.status.goal_id.stamp';
info.MatPath{26} = 'action_result.status.goal_id.stamp.sec';
info.MatPath{27} = 'action_result.status.goal_id.stamp.nsec';
info.MatPath{28} = 'action_result.status.goal_id.id';
info.MatPath{29} = 'action_result.status.status';
info.MatPath{30} = 'action_result.status.PENDING';
info.MatPath{31} = 'action_result.status.ACTIVE';
info.MatPath{32} = 'action_result.status.PREEMPTED';
info.MatPath{33} = 'action_result.status.SUCCEEDED';
info.MatPath{34} = 'action_result.status.ABORTED';
info.MatPath{35} = 'action_result.status.REJECTED';
info.MatPath{36} = 'action_result.status.PREEMPTING';
info.MatPath{37} = 'action_result.status.RECALLING';
info.MatPath{38} = 'action_result.status.RECALLED';
info.MatPath{39} = 'action_result.status.LOST';
info.MatPath{40} = 'action_result.status.text';
info.MatPath{41} = 'action_result.result';
info.MatPath{42} = 'action_result.result.object_list';
info.MatPath{43} = 'action_result.result.object_list.header';
info.MatPath{44} = 'action_result.result.object_list.header.seq';
info.MatPath{45} = 'action_result.result.object_list.header.stamp';
info.MatPath{46} = 'action_result.result.object_list.header.stamp.sec';
info.MatPath{47} = 'action_result.result.object_list.header.stamp.nsec';
info.MatPath{48} = 'action_result.result.object_list.header.frame_id';
info.MatPath{49} = 'action_result.result.object_list.detections';
info.MatPath{50} = 'action_result.result.object_list.detections.header';
info.MatPath{51} = 'action_result.result.object_list.detections.header.seq';
info.MatPath{52} = 'action_result.result.object_list.detections.header.stamp';
info.MatPath{53} = 'action_result.result.object_list.detections.header.stamp.sec';
info.MatPath{54} = 'action_result.result.object_list.detections.header.stamp.nsec';
info.MatPath{55} = 'action_result.result.object_list.detections.header.frame_id';
info.MatPath{56} = 'action_result.result.object_list.detections.label';
info.MatPath{57} = 'action_result.result.object_list.detections.id';
info.MatPath{58} = 'action_result.result.object_list.detections.detector';
info.MatPath{59} = 'action_result.result.object_list.detections.score';
info.MatPath{60} = 'action_result.result.object_list.detections.mask';
info.MatPath{61} = 'action_result.result.object_list.detections.mask.roi';
info.MatPath{62} = 'action_result.result.object_list.detections.mask.roi.x';
info.MatPath{63} = 'action_result.result.object_list.detections.mask.roi.y';
info.MatPath{64} = 'action_result.result.object_list.detections.mask.roi.width';
info.MatPath{65} = 'action_result.result.object_list.detections.mask.roi.height';
info.MatPath{66} = 'action_result.result.object_list.detections.mask.mask';
info.MatPath{67} = 'action_result.result.object_list.detections.mask.mask.header';
info.MatPath{68} = 'action_result.result.object_list.detections.mask.mask.header.seq';
info.MatPath{69} = 'action_result.result.object_list.detections.mask.mask.header.stamp';
info.MatPath{70} = 'action_result.result.object_list.detections.mask.mask.header.stamp.sec';
info.MatPath{71} = 'action_result.result.object_list.detections.mask.mask.header.stamp.nsec';
info.MatPath{72} = 'action_result.result.object_list.detections.mask.mask.header.frame_id';
info.MatPath{73} = 'action_result.result.object_list.detections.mask.mask.height';
info.MatPath{74} = 'action_result.result.object_list.detections.mask.mask.width';
info.MatPath{75} = 'action_result.result.object_list.detections.mask.mask.encoding';
info.MatPath{76} = 'action_result.result.object_list.detections.mask.mask.is_bigendian';
info.MatPath{77} = 'action_result.result.object_list.detections.mask.mask.step';
info.MatPath{78} = 'action_result.result.object_list.detections.mask.mask.data';
info.MatPath{79} = 'action_result.result.object_list.detections.pose';
info.MatPath{80} = 'action_result.result.object_list.detections.pose.header';
info.MatPath{81} = 'action_result.result.object_list.detections.pose.header.seq';
info.MatPath{82} = 'action_result.result.object_list.detections.pose.header.stamp';
info.MatPath{83} = 'action_result.result.object_list.detections.pose.header.stamp.sec';
info.MatPath{84} = 'action_result.result.object_list.detections.pose.header.stamp.nsec';
info.MatPath{85} = 'action_result.result.object_list.detections.pose.header.frame_id';
info.MatPath{86} = 'action_result.result.object_list.detections.pose.pose';
info.MatPath{87} = 'action_result.result.object_list.detections.pose.pose.position';
info.MatPath{88} = 'action_result.result.object_list.detections.pose.pose.position.x';
info.MatPath{89} = 'action_result.result.object_list.detections.pose.pose.position.y';
info.MatPath{90} = 'action_result.result.object_list.detections.pose.pose.position.z';
info.MatPath{91} = 'action_result.result.object_list.detections.pose.pose.orientation';
info.MatPath{92} = 'action_result.result.object_list.detections.pose.pose.orientation.x';
info.MatPath{93} = 'action_result.result.object_list.detections.pose.pose.orientation.y';
info.MatPath{94} = 'action_result.result.object_list.detections.pose.pose.orientation.z';
info.MatPath{95} = 'action_result.result.object_list.detections.pose.pose.orientation.w';
info.MatPath{96} = 'action_result.result.object_list.detections.bounding_box_lwh';
info.MatPath{97} = 'action_result.result.object_list.detections.bounding_box_lwh.x';
info.MatPath{98} = 'action_result.result.object_list.detections.bounding_box_lwh.y';
info.MatPath{99} = 'action_result.result.object_list.detections.bounding_box_lwh.z';
info.MatPath{100} = 'action_feedback';
info.MatPath{101} = 'action_feedback.header';
info.MatPath{102} = 'action_feedback.header.seq';
info.MatPath{103} = 'action_feedback.header.stamp';
info.MatPath{104} = 'action_feedback.header.stamp.sec';
info.MatPath{105} = 'action_feedback.header.stamp.nsec';
info.MatPath{106} = 'action_feedback.header.frame_id';
info.MatPath{107} = 'action_feedback.status';
info.MatPath{108} = 'action_feedback.status.goal_id';
info.MatPath{109} = 'action_feedback.status.goal_id.stamp';
info.MatPath{110} = 'action_feedback.status.goal_id.stamp.sec';
info.MatPath{111} = 'action_feedback.status.goal_id.stamp.nsec';
info.MatPath{112} = 'action_feedback.status.goal_id.id';
info.MatPath{113} = 'action_feedback.status.status';
info.MatPath{114} = 'action_feedback.status.PENDING';
info.MatPath{115} = 'action_feedback.status.ACTIVE';
info.MatPath{116} = 'action_feedback.status.PREEMPTED';
info.MatPath{117} = 'action_feedback.status.SUCCEEDED';
info.MatPath{118} = 'action_feedback.status.ABORTED';
info.MatPath{119} = 'action_feedback.status.REJECTED';
info.MatPath{120} = 'action_feedback.status.PREEMPTING';
info.MatPath{121} = 'action_feedback.status.RECALLING';
info.MatPath{122} = 'action_feedback.status.RECALLED';
info.MatPath{123} = 'action_feedback.status.LOST';
info.MatPath{124} = 'action_feedback.status.text';
info.MatPath{125} = 'action_feedback.feedback';
info.MatPath{126} = 'action_feedback.feedback.percent_complete';
