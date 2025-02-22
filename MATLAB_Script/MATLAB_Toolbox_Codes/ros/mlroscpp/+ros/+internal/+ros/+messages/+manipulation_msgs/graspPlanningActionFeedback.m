function [data, info] = graspPlanningActionFeedback
%GraspPlanningActionFeedback gives an empty data for manipulation_msgs/GraspPlanningActionFeedback

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'manipulation_msgs/GraspPlanningActionFeedback';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Status, info.Status] = ros.internal.ros.messages.actionlib_msgs.goalStatus;
info.Status.MLdataType = 'struct';
[data.Feedback, info.Feedback] = ros.internal.ros.messages.manipulation_msgs.graspPlanningFeedback;
info.Feedback.MLdataType = 'struct';
info.MessageType = 'manipulation_msgs/GraspPlanningActionFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,97);
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
info.MatPath{25} = 'feedback';
info.MatPath{26} = 'feedback.grasps';
info.MatPath{27} = 'feedback.grasps.id';
info.MatPath{28} = 'feedback.grasps.pre_grasp_posture';
info.MatPath{29} = 'feedback.grasps.pre_grasp_posture.header';
info.MatPath{30} = 'feedback.grasps.pre_grasp_posture.header.seq';
info.MatPath{31} = 'feedback.grasps.pre_grasp_posture.header.stamp';
info.MatPath{32} = 'feedback.grasps.pre_grasp_posture.header.stamp.sec';
info.MatPath{33} = 'feedback.grasps.pre_grasp_posture.header.stamp.nsec';
info.MatPath{34} = 'feedback.grasps.pre_grasp_posture.header.frame_id';
info.MatPath{35} = 'feedback.grasps.pre_grasp_posture.name';
info.MatPath{36} = 'feedback.grasps.pre_grasp_posture.position';
info.MatPath{37} = 'feedback.grasps.pre_grasp_posture.velocity';
info.MatPath{38} = 'feedback.grasps.pre_grasp_posture.effort';
info.MatPath{39} = 'feedback.grasps.grasp_posture';
info.MatPath{40} = 'feedback.grasps.grasp_posture.header';
info.MatPath{41} = 'feedback.grasps.grasp_posture.header.seq';
info.MatPath{42} = 'feedback.grasps.grasp_posture.header.stamp';
info.MatPath{43} = 'feedback.grasps.grasp_posture.header.stamp.sec';
info.MatPath{44} = 'feedback.grasps.grasp_posture.header.stamp.nsec';
info.MatPath{45} = 'feedback.grasps.grasp_posture.header.frame_id';
info.MatPath{46} = 'feedback.grasps.grasp_posture.name';
info.MatPath{47} = 'feedback.grasps.grasp_posture.position';
info.MatPath{48} = 'feedback.grasps.grasp_posture.velocity';
info.MatPath{49} = 'feedback.grasps.grasp_posture.effort';
info.MatPath{50} = 'feedback.grasps.grasp_pose';
info.MatPath{51} = 'feedback.grasps.grasp_pose.header';
info.MatPath{52} = 'feedback.grasps.grasp_pose.header.seq';
info.MatPath{53} = 'feedback.grasps.grasp_pose.header.stamp';
info.MatPath{54} = 'feedback.grasps.grasp_pose.header.stamp.sec';
info.MatPath{55} = 'feedback.grasps.grasp_pose.header.stamp.nsec';
info.MatPath{56} = 'feedback.grasps.grasp_pose.header.frame_id';
info.MatPath{57} = 'feedback.grasps.grasp_pose.pose';
info.MatPath{58} = 'feedback.grasps.grasp_pose.pose.position';
info.MatPath{59} = 'feedback.grasps.grasp_pose.pose.position.x';
info.MatPath{60} = 'feedback.grasps.grasp_pose.pose.position.y';
info.MatPath{61} = 'feedback.grasps.grasp_pose.pose.position.z';
info.MatPath{62} = 'feedback.grasps.grasp_pose.pose.orientation';
info.MatPath{63} = 'feedback.grasps.grasp_pose.pose.orientation.x';
info.MatPath{64} = 'feedback.grasps.grasp_pose.pose.orientation.y';
info.MatPath{65} = 'feedback.grasps.grasp_pose.pose.orientation.z';
info.MatPath{66} = 'feedback.grasps.grasp_pose.pose.orientation.w';
info.MatPath{67} = 'feedback.grasps.grasp_quality';
info.MatPath{68} = 'feedback.grasps.approach';
info.MatPath{69} = 'feedback.grasps.approach.direction';
info.MatPath{70} = 'feedback.grasps.approach.direction.header';
info.MatPath{71} = 'feedback.grasps.approach.direction.header.seq';
info.MatPath{72} = 'feedback.grasps.approach.direction.header.stamp';
info.MatPath{73} = 'feedback.grasps.approach.direction.header.stamp.sec';
info.MatPath{74} = 'feedback.grasps.approach.direction.header.stamp.nsec';
info.MatPath{75} = 'feedback.grasps.approach.direction.header.frame_id';
info.MatPath{76} = 'feedback.grasps.approach.direction.vector';
info.MatPath{77} = 'feedback.grasps.approach.direction.vector.x';
info.MatPath{78} = 'feedback.grasps.approach.direction.vector.y';
info.MatPath{79} = 'feedback.grasps.approach.direction.vector.z';
info.MatPath{80} = 'feedback.grasps.approach.desired_distance';
info.MatPath{81} = 'feedback.grasps.approach.min_distance';
info.MatPath{82} = 'feedback.grasps.retreat';
info.MatPath{83} = 'feedback.grasps.retreat.direction';
info.MatPath{84} = 'feedback.grasps.retreat.direction.header';
info.MatPath{85} = 'feedback.grasps.retreat.direction.header.seq';
info.MatPath{86} = 'feedback.grasps.retreat.direction.header.stamp';
info.MatPath{87} = 'feedback.grasps.retreat.direction.header.stamp.sec';
info.MatPath{88} = 'feedback.grasps.retreat.direction.header.stamp.nsec';
info.MatPath{89} = 'feedback.grasps.retreat.direction.header.frame_id';
info.MatPath{90} = 'feedback.grasps.retreat.direction.vector';
info.MatPath{91} = 'feedback.grasps.retreat.direction.vector.x';
info.MatPath{92} = 'feedback.grasps.retreat.direction.vector.y';
info.MatPath{93} = 'feedback.grasps.retreat.direction.vector.z';
info.MatPath{94} = 'feedback.grasps.retreat.desired_distance';
info.MatPath{95} = 'feedback.grasps.retreat.min_distance';
info.MatPath{96} = 'feedback.grasps.max_contact_force';
info.MatPath{97} = 'feedback.grasps.allowed_touch_objects';
