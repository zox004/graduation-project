function [data, info] = getSnapshotAction
%GetSnapshotAction gives an empty data for pr2_tilt_laser_interface/GetSnapshotAction

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'pr2_tilt_laser_interface/GetSnapshotAction';
[data.ActionGoal, info.ActionGoal] = ros.internal.ros.messages.pr2_tilt_laser_interface.getSnapshotActionGoal;
info.ActionGoal.MLdataType = 'struct';
[data.ActionResult, info.ActionResult] = ros.internal.ros.messages.pr2_tilt_laser_interface.getSnapshotActionResult;
info.ActionResult.MLdataType = 'struct';
[data.ActionFeedback, info.ActionFeedback] = ros.internal.ros.messages.pr2_tilt_laser_interface.getSnapshotActionFeedback;
info.ActionFeedback.MLdataType = 'struct';
info.MessageType = 'pr2_tilt_laser_interface/GetSnapshotAction';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,124);
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
info.MatPath{14} = 'action_goal.goal.start_angle';
info.MatPath{15} = 'action_goal.goal.end_angle';
info.MatPath{16} = 'action_goal.goal.speed';
info.MatPath{17} = 'action_goal.goal.hi_fidelity';
info.MatPath{18} = 'action_goal.goal.continuous';
info.MatPath{19} = 'action_result';
info.MatPath{20} = 'action_result.header';
info.MatPath{21} = 'action_result.header.seq';
info.MatPath{22} = 'action_result.header.stamp';
info.MatPath{23} = 'action_result.header.stamp.sec';
info.MatPath{24} = 'action_result.header.stamp.nsec';
info.MatPath{25} = 'action_result.header.frame_id';
info.MatPath{26} = 'action_result.status';
info.MatPath{27} = 'action_result.status.goal_id';
info.MatPath{28} = 'action_result.status.goal_id.stamp';
info.MatPath{29} = 'action_result.status.goal_id.stamp.sec';
info.MatPath{30} = 'action_result.status.goal_id.stamp.nsec';
info.MatPath{31} = 'action_result.status.goal_id.id';
info.MatPath{32} = 'action_result.status.status';
info.MatPath{33} = 'action_result.status.PENDING';
info.MatPath{34} = 'action_result.status.ACTIVE';
info.MatPath{35} = 'action_result.status.PREEMPTED';
info.MatPath{36} = 'action_result.status.SUCCEEDED';
info.MatPath{37} = 'action_result.status.ABORTED';
info.MatPath{38} = 'action_result.status.REJECTED';
info.MatPath{39} = 'action_result.status.PREEMPTING';
info.MatPath{40} = 'action_result.status.RECALLING';
info.MatPath{41} = 'action_result.status.RECALLED';
info.MatPath{42} = 'action_result.status.LOST';
info.MatPath{43} = 'action_result.status.text';
info.MatPath{44} = 'action_result.result';
info.MatPath{45} = 'action_result.result.cloud';
info.MatPath{46} = 'action_result.result.cloud.header';
info.MatPath{47} = 'action_result.result.cloud.header.seq';
info.MatPath{48} = 'action_result.result.cloud.header.stamp';
info.MatPath{49} = 'action_result.result.cloud.header.stamp.sec';
info.MatPath{50} = 'action_result.result.cloud.header.stamp.nsec';
info.MatPath{51} = 'action_result.result.cloud.header.frame_id';
info.MatPath{52} = 'action_result.result.cloud.height';
info.MatPath{53} = 'action_result.result.cloud.width';
info.MatPath{54} = 'action_result.result.cloud.fields';
info.MatPath{55} = 'action_result.result.cloud.fields.INT8';
info.MatPath{56} = 'action_result.result.cloud.fields.UINT8';
info.MatPath{57} = 'action_result.result.cloud.fields.INT16';
info.MatPath{58} = 'action_result.result.cloud.fields.UINT16';
info.MatPath{59} = 'action_result.result.cloud.fields.INT32';
info.MatPath{60} = 'action_result.result.cloud.fields.UINT32';
info.MatPath{61} = 'action_result.result.cloud.fields.FLOAT32';
info.MatPath{62} = 'action_result.result.cloud.fields.FLOAT64';
info.MatPath{63} = 'action_result.result.cloud.fields.name';
info.MatPath{64} = 'action_result.result.cloud.fields.offset';
info.MatPath{65} = 'action_result.result.cloud.fields.datatype';
info.MatPath{66} = 'action_result.result.cloud.fields.count';
info.MatPath{67} = 'action_result.result.cloud.is_bigendian';
info.MatPath{68} = 'action_result.result.cloud.point_step';
info.MatPath{69} = 'action_result.result.cloud.row_step';
info.MatPath{70} = 'action_result.result.cloud.data';
info.MatPath{71} = 'action_result.result.cloud.is_dense';
info.MatPath{72} = 'action_feedback';
info.MatPath{73} = 'action_feedback.header';
info.MatPath{74} = 'action_feedback.header.seq';
info.MatPath{75} = 'action_feedback.header.stamp';
info.MatPath{76} = 'action_feedback.header.stamp.sec';
info.MatPath{77} = 'action_feedback.header.stamp.nsec';
info.MatPath{78} = 'action_feedback.header.frame_id';
info.MatPath{79} = 'action_feedback.status';
info.MatPath{80} = 'action_feedback.status.goal_id';
info.MatPath{81} = 'action_feedback.status.goal_id.stamp';
info.MatPath{82} = 'action_feedback.status.goal_id.stamp.sec';
info.MatPath{83} = 'action_feedback.status.goal_id.stamp.nsec';
info.MatPath{84} = 'action_feedback.status.goal_id.id';
info.MatPath{85} = 'action_feedback.status.status';
info.MatPath{86} = 'action_feedback.status.PENDING';
info.MatPath{87} = 'action_feedback.status.ACTIVE';
info.MatPath{88} = 'action_feedback.status.PREEMPTED';
info.MatPath{89} = 'action_feedback.status.SUCCEEDED';
info.MatPath{90} = 'action_feedback.status.ABORTED';
info.MatPath{91} = 'action_feedback.status.REJECTED';
info.MatPath{92} = 'action_feedback.status.PREEMPTING';
info.MatPath{93} = 'action_feedback.status.RECALLING';
info.MatPath{94} = 'action_feedback.status.RECALLED';
info.MatPath{95} = 'action_feedback.status.LOST';
info.MatPath{96} = 'action_feedback.status.text';
info.MatPath{97} = 'action_feedback.feedback';
info.MatPath{98} = 'action_feedback.feedback.cloud';
info.MatPath{99} = 'action_feedback.feedback.cloud.header';
info.MatPath{100} = 'action_feedback.feedback.cloud.header.seq';
info.MatPath{101} = 'action_feedback.feedback.cloud.header.stamp';
info.MatPath{102} = 'action_feedback.feedback.cloud.header.stamp.sec';
info.MatPath{103} = 'action_feedback.feedback.cloud.header.stamp.nsec';
info.MatPath{104} = 'action_feedback.feedback.cloud.header.frame_id';
info.MatPath{105} = 'action_feedback.feedback.cloud.height';
info.MatPath{106} = 'action_feedback.feedback.cloud.width';
info.MatPath{107} = 'action_feedback.feedback.cloud.fields';
info.MatPath{108} = 'action_feedback.feedback.cloud.fields.INT8';
info.MatPath{109} = 'action_feedback.feedback.cloud.fields.UINT8';
info.MatPath{110} = 'action_feedback.feedback.cloud.fields.INT16';
info.MatPath{111} = 'action_feedback.feedback.cloud.fields.UINT16';
info.MatPath{112} = 'action_feedback.feedback.cloud.fields.INT32';
info.MatPath{113} = 'action_feedback.feedback.cloud.fields.UINT32';
info.MatPath{114} = 'action_feedback.feedback.cloud.fields.FLOAT32';
info.MatPath{115} = 'action_feedback.feedback.cloud.fields.FLOAT64';
info.MatPath{116} = 'action_feedback.feedback.cloud.fields.name';
info.MatPath{117} = 'action_feedback.feedback.cloud.fields.offset';
info.MatPath{118} = 'action_feedback.feedback.cloud.fields.datatype';
info.MatPath{119} = 'action_feedback.feedback.cloud.fields.count';
info.MatPath{120} = 'action_feedback.feedback.cloud.is_bigendian';
info.MatPath{121} = 'action_feedback.feedback.cloud.point_step';
info.MatPath{122} = 'action_feedback.feedback.cloud.row_step';
info.MatPath{123} = 'action_feedback.feedback.cloud.data';
info.MatPath{124} = 'action_feedback.feedback.cloud.is_dense';
