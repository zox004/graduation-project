function [data, info] = generateGraspsActionFeedback
%GenerateGraspsActionFeedback gives an empty data for moveit_simple_grasps/GenerateGraspsActionFeedback

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'moveit_simple_grasps/GenerateGraspsActionFeedback';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Status, info.Status] = ros.internal.ros.messages.actionlib_msgs.goalStatus;
info.Status.MLdataType = 'struct';
[data.Feedback, info.Feedback] = ros.internal.ros.messages.moveit_simple_grasps.generateGraspsFeedback;
info.Feedback.MLdataType = 'struct';
info.MessageType = 'moveit_simple_grasps/GenerateGraspsActionFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,121);
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
info.MatPath{35} = 'feedback.grasps.pre_grasp_posture.joint_names';
info.MatPath{36} = 'feedback.grasps.pre_grasp_posture.points';
info.MatPath{37} = 'feedback.grasps.pre_grasp_posture.points.positions';
info.MatPath{38} = 'feedback.grasps.pre_grasp_posture.points.velocities';
info.MatPath{39} = 'feedback.grasps.pre_grasp_posture.points.accelerations';
info.MatPath{40} = 'feedback.grasps.pre_grasp_posture.points.effort';
info.MatPath{41} = 'feedback.grasps.pre_grasp_posture.points.time_from_start';
info.MatPath{42} = 'feedback.grasps.pre_grasp_posture.points.time_from_start.sec';
info.MatPath{43} = 'feedback.grasps.pre_grasp_posture.points.time_from_start.nsec';
info.MatPath{44} = 'feedback.grasps.grasp_posture';
info.MatPath{45} = 'feedback.grasps.grasp_posture.header';
info.MatPath{46} = 'feedback.grasps.grasp_posture.header.seq';
info.MatPath{47} = 'feedback.grasps.grasp_posture.header.stamp';
info.MatPath{48} = 'feedback.grasps.grasp_posture.header.stamp.sec';
info.MatPath{49} = 'feedback.grasps.grasp_posture.header.stamp.nsec';
info.MatPath{50} = 'feedback.grasps.grasp_posture.header.frame_id';
info.MatPath{51} = 'feedback.grasps.grasp_posture.joint_names';
info.MatPath{52} = 'feedback.grasps.grasp_posture.points';
info.MatPath{53} = 'feedback.grasps.grasp_posture.points.positions';
info.MatPath{54} = 'feedback.grasps.grasp_posture.points.velocities';
info.MatPath{55} = 'feedback.grasps.grasp_posture.points.accelerations';
info.MatPath{56} = 'feedback.grasps.grasp_posture.points.effort';
info.MatPath{57} = 'feedback.grasps.grasp_posture.points.time_from_start';
info.MatPath{58} = 'feedback.grasps.grasp_posture.points.time_from_start.sec';
info.MatPath{59} = 'feedback.grasps.grasp_posture.points.time_from_start.nsec';
info.MatPath{60} = 'feedback.grasps.grasp_pose';
info.MatPath{61} = 'feedback.grasps.grasp_pose.header';
info.MatPath{62} = 'feedback.grasps.grasp_pose.header.seq';
info.MatPath{63} = 'feedback.grasps.grasp_pose.header.stamp';
info.MatPath{64} = 'feedback.grasps.grasp_pose.header.stamp.sec';
info.MatPath{65} = 'feedback.grasps.grasp_pose.header.stamp.nsec';
info.MatPath{66} = 'feedback.grasps.grasp_pose.header.frame_id';
info.MatPath{67} = 'feedback.grasps.grasp_pose.pose';
info.MatPath{68} = 'feedback.grasps.grasp_pose.pose.position';
info.MatPath{69} = 'feedback.grasps.grasp_pose.pose.position.x';
info.MatPath{70} = 'feedback.grasps.grasp_pose.pose.position.y';
info.MatPath{71} = 'feedback.grasps.grasp_pose.pose.position.z';
info.MatPath{72} = 'feedback.grasps.grasp_pose.pose.orientation';
info.MatPath{73} = 'feedback.grasps.grasp_pose.pose.orientation.x';
info.MatPath{74} = 'feedback.grasps.grasp_pose.pose.orientation.y';
info.MatPath{75} = 'feedback.grasps.grasp_pose.pose.orientation.z';
info.MatPath{76} = 'feedback.grasps.grasp_pose.pose.orientation.w';
info.MatPath{77} = 'feedback.grasps.grasp_quality';
info.MatPath{78} = 'feedback.grasps.pre_grasp_approach';
info.MatPath{79} = 'feedback.grasps.pre_grasp_approach.direction';
info.MatPath{80} = 'feedback.grasps.pre_grasp_approach.direction.header';
info.MatPath{81} = 'feedback.grasps.pre_grasp_approach.direction.header.seq';
info.MatPath{82} = 'feedback.grasps.pre_grasp_approach.direction.header.stamp';
info.MatPath{83} = 'feedback.grasps.pre_grasp_approach.direction.header.stamp.sec';
info.MatPath{84} = 'feedback.grasps.pre_grasp_approach.direction.header.stamp.nsec';
info.MatPath{85} = 'feedback.grasps.pre_grasp_approach.direction.header.frame_id';
info.MatPath{86} = 'feedback.grasps.pre_grasp_approach.direction.vector';
info.MatPath{87} = 'feedback.grasps.pre_grasp_approach.direction.vector.x';
info.MatPath{88} = 'feedback.grasps.pre_grasp_approach.direction.vector.y';
info.MatPath{89} = 'feedback.grasps.pre_grasp_approach.direction.vector.z';
info.MatPath{90} = 'feedback.grasps.pre_grasp_approach.desired_distance';
info.MatPath{91} = 'feedback.grasps.pre_grasp_approach.min_distance';
info.MatPath{92} = 'feedback.grasps.post_grasp_retreat';
info.MatPath{93} = 'feedback.grasps.post_grasp_retreat.direction';
info.MatPath{94} = 'feedback.grasps.post_grasp_retreat.direction.header';
info.MatPath{95} = 'feedback.grasps.post_grasp_retreat.direction.header.seq';
info.MatPath{96} = 'feedback.grasps.post_grasp_retreat.direction.header.stamp';
info.MatPath{97} = 'feedback.grasps.post_grasp_retreat.direction.header.stamp.sec';
info.MatPath{98} = 'feedback.grasps.post_grasp_retreat.direction.header.stamp.nsec';
info.MatPath{99} = 'feedback.grasps.post_grasp_retreat.direction.header.frame_id';
info.MatPath{100} = 'feedback.grasps.post_grasp_retreat.direction.vector';
info.MatPath{101} = 'feedback.grasps.post_grasp_retreat.direction.vector.x';
info.MatPath{102} = 'feedback.grasps.post_grasp_retreat.direction.vector.y';
info.MatPath{103} = 'feedback.grasps.post_grasp_retreat.direction.vector.z';
info.MatPath{104} = 'feedback.grasps.post_grasp_retreat.desired_distance';
info.MatPath{105} = 'feedback.grasps.post_grasp_retreat.min_distance';
info.MatPath{106} = 'feedback.grasps.post_place_retreat';
info.MatPath{107} = 'feedback.grasps.post_place_retreat.direction';
info.MatPath{108} = 'feedback.grasps.post_place_retreat.direction.header';
info.MatPath{109} = 'feedback.grasps.post_place_retreat.direction.header.seq';
info.MatPath{110} = 'feedback.grasps.post_place_retreat.direction.header.stamp';
info.MatPath{111} = 'feedback.grasps.post_place_retreat.direction.header.stamp.sec';
info.MatPath{112} = 'feedback.grasps.post_place_retreat.direction.header.stamp.nsec';
info.MatPath{113} = 'feedback.grasps.post_place_retreat.direction.header.frame_id';
info.MatPath{114} = 'feedback.grasps.post_place_retreat.direction.vector';
info.MatPath{115} = 'feedback.grasps.post_place_retreat.direction.vector.x';
info.MatPath{116} = 'feedback.grasps.post_place_retreat.direction.vector.y';
info.MatPath{117} = 'feedback.grasps.post_place_retreat.direction.vector.z';
info.MatPath{118} = 'feedback.grasps.post_place_retreat.desired_distance';
info.MatPath{119} = 'feedback.grasps.post_place_retreat.min_distance';
info.MatPath{120} = 'feedback.grasps.max_contact_force';
info.MatPath{121} = 'feedback.grasps.allowed_touch_objects';
