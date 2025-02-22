function [data, info] = getMapAction
%GetMapAction gives an empty data for nav_msgs/GetMapAction

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'nav_msgs/GetMapAction';
[data.ActionGoal, info.ActionGoal] = ros.internal.ros.messages.nav_msgs.getMapActionGoal;
info.ActionGoal.MLdataType = 'struct';
[data.ActionResult, info.ActionResult] = ros.internal.ros.messages.nav_msgs.getMapActionResult;
info.ActionResult.MLdataType = 'struct';
[data.ActionFeedback, info.ActionFeedback] = ros.internal.ros.messages.nav_msgs.getMapActionFeedback;
info.ActionFeedback.MLdataType = 'struct';
info.MessageType = 'nav_msgs/GetMapAction';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,90);
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
info.MatPath{14} = 'action_result';
info.MatPath{15} = 'action_result.header';
info.MatPath{16} = 'action_result.header.seq';
info.MatPath{17} = 'action_result.header.stamp';
info.MatPath{18} = 'action_result.header.stamp.sec';
info.MatPath{19} = 'action_result.header.stamp.nsec';
info.MatPath{20} = 'action_result.header.frame_id';
info.MatPath{21} = 'action_result.status';
info.MatPath{22} = 'action_result.status.goal_id';
info.MatPath{23} = 'action_result.status.goal_id.stamp';
info.MatPath{24} = 'action_result.status.goal_id.stamp.sec';
info.MatPath{25} = 'action_result.status.goal_id.stamp.nsec';
info.MatPath{26} = 'action_result.status.goal_id.id';
info.MatPath{27} = 'action_result.status.status';
info.MatPath{28} = 'action_result.status.PENDING';
info.MatPath{29} = 'action_result.status.ACTIVE';
info.MatPath{30} = 'action_result.status.PREEMPTED';
info.MatPath{31} = 'action_result.status.SUCCEEDED';
info.MatPath{32} = 'action_result.status.ABORTED';
info.MatPath{33} = 'action_result.status.REJECTED';
info.MatPath{34} = 'action_result.status.PREEMPTING';
info.MatPath{35} = 'action_result.status.RECALLING';
info.MatPath{36} = 'action_result.status.RECALLED';
info.MatPath{37} = 'action_result.status.LOST';
info.MatPath{38} = 'action_result.status.text';
info.MatPath{39} = 'action_result.result';
info.MatPath{40} = 'action_result.result.map';
info.MatPath{41} = 'action_result.result.map.header';
info.MatPath{42} = 'action_result.result.map.header.seq';
info.MatPath{43} = 'action_result.result.map.header.stamp';
info.MatPath{44} = 'action_result.result.map.header.stamp.sec';
info.MatPath{45} = 'action_result.result.map.header.stamp.nsec';
info.MatPath{46} = 'action_result.result.map.header.frame_id';
info.MatPath{47} = 'action_result.result.map.info';
info.MatPath{48} = 'action_result.result.map.info.map_load_time';
info.MatPath{49} = 'action_result.result.map.info.map_load_time.sec';
info.MatPath{50} = 'action_result.result.map.info.map_load_time.nsec';
info.MatPath{51} = 'action_result.result.map.info.resolution';
info.MatPath{52} = 'action_result.result.map.info.width';
info.MatPath{53} = 'action_result.result.map.info.height';
info.MatPath{54} = 'action_result.result.map.info.origin';
info.MatPath{55} = 'action_result.result.map.info.origin.position';
info.MatPath{56} = 'action_result.result.map.info.origin.position.x';
info.MatPath{57} = 'action_result.result.map.info.origin.position.y';
info.MatPath{58} = 'action_result.result.map.info.origin.position.z';
info.MatPath{59} = 'action_result.result.map.info.origin.orientation';
info.MatPath{60} = 'action_result.result.map.info.origin.orientation.x';
info.MatPath{61} = 'action_result.result.map.info.origin.orientation.y';
info.MatPath{62} = 'action_result.result.map.info.origin.orientation.z';
info.MatPath{63} = 'action_result.result.map.info.origin.orientation.w';
info.MatPath{64} = 'action_result.result.map.data';
info.MatPath{65} = 'action_feedback';
info.MatPath{66} = 'action_feedback.header';
info.MatPath{67} = 'action_feedback.header.seq';
info.MatPath{68} = 'action_feedback.header.stamp';
info.MatPath{69} = 'action_feedback.header.stamp.sec';
info.MatPath{70} = 'action_feedback.header.stamp.nsec';
info.MatPath{71} = 'action_feedback.header.frame_id';
info.MatPath{72} = 'action_feedback.status';
info.MatPath{73} = 'action_feedback.status.goal_id';
info.MatPath{74} = 'action_feedback.status.goal_id.stamp';
info.MatPath{75} = 'action_feedback.status.goal_id.stamp.sec';
info.MatPath{76} = 'action_feedback.status.goal_id.stamp.nsec';
info.MatPath{77} = 'action_feedback.status.goal_id.id';
info.MatPath{78} = 'action_feedback.status.status';
info.MatPath{79} = 'action_feedback.status.PENDING';
info.MatPath{80} = 'action_feedback.status.ACTIVE';
info.MatPath{81} = 'action_feedback.status.PREEMPTED';
info.MatPath{82} = 'action_feedback.status.SUCCEEDED';
info.MatPath{83} = 'action_feedback.status.ABORTED';
info.MatPath{84} = 'action_feedback.status.REJECTED';
info.MatPath{85} = 'action_feedback.status.PREEMPTING';
info.MatPath{86} = 'action_feedback.status.RECALLING';
info.MatPath{87} = 'action_feedback.status.RECALLED';
info.MatPath{88} = 'action_feedback.status.LOST';
info.MatPath{89} = 'action_feedback.status.text';
info.MatPath{90} = 'action_feedback.feedback';
