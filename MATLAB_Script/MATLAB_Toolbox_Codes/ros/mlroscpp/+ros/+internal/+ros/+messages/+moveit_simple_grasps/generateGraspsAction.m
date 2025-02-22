function [data, info] = generateGraspsAction
%GenerateGraspsAction gives an empty data for moveit_simple_grasps/GenerateGraspsAction

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'moveit_simple_grasps/GenerateGraspsAction';
[data.ActionGoal, info.ActionGoal] = ros.internal.ros.messages.moveit_simple_grasps.generateGraspsActionGoal;
info.ActionGoal.MLdataType = 'struct';
[data.ActionResult, info.ActionResult] = ros.internal.ros.messages.moveit_simple_grasps.generateGraspsActionResult;
info.ActionResult.MLdataType = 'struct';
[data.ActionFeedback, info.ActionFeedback] = ros.internal.ros.messages.moveit_simple_grasps.generateGraspsActionFeedback;
info.ActionFeedback.MLdataType = 'struct';
info.MessageType = 'moveit_simple_grasps/GenerateGraspsAction';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,279);
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
info.MatPath{14} = 'action_goal.goal.pose';
info.MatPath{15} = 'action_goal.goal.pose.position';
info.MatPath{16} = 'action_goal.goal.pose.position.x';
info.MatPath{17} = 'action_goal.goal.pose.position.y';
info.MatPath{18} = 'action_goal.goal.pose.position.z';
info.MatPath{19} = 'action_goal.goal.pose.orientation';
info.MatPath{20} = 'action_goal.goal.pose.orientation.x';
info.MatPath{21} = 'action_goal.goal.pose.orientation.y';
info.MatPath{22} = 'action_goal.goal.pose.orientation.z';
info.MatPath{23} = 'action_goal.goal.pose.orientation.w';
info.MatPath{24} = 'action_goal.goal.width';
info.MatPath{25} = 'action_goal.goal.options';
info.MatPath{26} = 'action_goal.goal.options.grasp_axis';
info.MatPath{27} = 'action_goal.goal.options.GRASP_AXIS_X';
info.MatPath{28} = 'action_goal.goal.options.GRASP_AXIS_Y';
info.MatPath{29} = 'action_goal.goal.options.GRASP_AXIS_Z';
info.MatPath{30} = 'action_goal.goal.options.grasp_direction';
info.MatPath{31} = 'action_goal.goal.options.GRASP_DIRECTION_UP';
info.MatPath{32} = 'action_goal.goal.options.GRASP_DIRECTION_DOWN';
info.MatPath{33} = 'action_goal.goal.options.grasp_rotation';
info.MatPath{34} = 'action_goal.goal.options.GRASP_ROTATION_HALF';
info.MatPath{35} = 'action_goal.goal.options.GRASP_ROTATION_FULL';
info.MatPath{36} = 'action_result';
info.MatPath{37} = 'action_result.header';
info.MatPath{38} = 'action_result.header.seq';
info.MatPath{39} = 'action_result.header.stamp';
info.MatPath{40} = 'action_result.header.stamp.sec';
info.MatPath{41} = 'action_result.header.stamp.nsec';
info.MatPath{42} = 'action_result.header.frame_id';
info.MatPath{43} = 'action_result.status';
info.MatPath{44} = 'action_result.status.goal_id';
info.MatPath{45} = 'action_result.status.goal_id.stamp';
info.MatPath{46} = 'action_result.status.goal_id.stamp.sec';
info.MatPath{47} = 'action_result.status.goal_id.stamp.nsec';
info.MatPath{48} = 'action_result.status.goal_id.id';
info.MatPath{49} = 'action_result.status.status';
info.MatPath{50} = 'action_result.status.PENDING';
info.MatPath{51} = 'action_result.status.ACTIVE';
info.MatPath{52} = 'action_result.status.PREEMPTED';
info.MatPath{53} = 'action_result.status.SUCCEEDED';
info.MatPath{54} = 'action_result.status.ABORTED';
info.MatPath{55} = 'action_result.status.REJECTED';
info.MatPath{56} = 'action_result.status.PREEMPTING';
info.MatPath{57} = 'action_result.status.RECALLING';
info.MatPath{58} = 'action_result.status.RECALLED';
info.MatPath{59} = 'action_result.status.LOST';
info.MatPath{60} = 'action_result.status.text';
info.MatPath{61} = 'action_result.result';
info.MatPath{62} = 'action_result.result.grasps';
info.MatPath{63} = 'action_result.result.grasps.id';
info.MatPath{64} = 'action_result.result.grasps.pre_grasp_posture';
info.MatPath{65} = 'action_result.result.grasps.pre_grasp_posture.header';
info.MatPath{66} = 'action_result.result.grasps.pre_grasp_posture.header.seq';
info.MatPath{67} = 'action_result.result.grasps.pre_grasp_posture.header.stamp';
info.MatPath{68} = 'action_result.result.grasps.pre_grasp_posture.header.stamp.sec';
info.MatPath{69} = 'action_result.result.grasps.pre_grasp_posture.header.stamp.nsec';
info.MatPath{70} = 'action_result.result.grasps.pre_grasp_posture.header.frame_id';
info.MatPath{71} = 'action_result.result.grasps.pre_grasp_posture.joint_names';
info.MatPath{72} = 'action_result.result.grasps.pre_grasp_posture.points';
info.MatPath{73} = 'action_result.result.grasps.pre_grasp_posture.points.positions';
info.MatPath{74} = 'action_result.result.grasps.pre_grasp_posture.points.velocities';
info.MatPath{75} = 'action_result.result.grasps.pre_grasp_posture.points.accelerations';
info.MatPath{76} = 'action_result.result.grasps.pre_grasp_posture.points.effort';
info.MatPath{77} = 'action_result.result.grasps.pre_grasp_posture.points.time_from_start';
info.MatPath{78} = 'action_result.result.grasps.pre_grasp_posture.points.time_from_start.sec';
info.MatPath{79} = 'action_result.result.grasps.pre_grasp_posture.points.time_from_start.nsec';
info.MatPath{80} = 'action_result.result.grasps.grasp_posture';
info.MatPath{81} = 'action_result.result.grasps.grasp_posture.header';
info.MatPath{82} = 'action_result.result.grasps.grasp_posture.header.seq';
info.MatPath{83} = 'action_result.result.grasps.grasp_posture.header.stamp';
info.MatPath{84} = 'action_result.result.grasps.grasp_posture.header.stamp.sec';
info.MatPath{85} = 'action_result.result.grasps.grasp_posture.header.stamp.nsec';
info.MatPath{86} = 'action_result.result.grasps.grasp_posture.header.frame_id';
info.MatPath{87} = 'action_result.result.grasps.grasp_posture.joint_names';
info.MatPath{88} = 'action_result.result.grasps.grasp_posture.points';
info.MatPath{89} = 'action_result.result.grasps.grasp_posture.points.positions';
info.MatPath{90} = 'action_result.result.grasps.grasp_posture.points.velocities';
info.MatPath{91} = 'action_result.result.grasps.grasp_posture.points.accelerations';
info.MatPath{92} = 'action_result.result.grasps.grasp_posture.points.effort';
info.MatPath{93} = 'action_result.result.grasps.grasp_posture.points.time_from_start';
info.MatPath{94} = 'action_result.result.grasps.grasp_posture.points.time_from_start.sec';
info.MatPath{95} = 'action_result.result.grasps.grasp_posture.points.time_from_start.nsec';
info.MatPath{96} = 'action_result.result.grasps.grasp_pose';
info.MatPath{97} = 'action_result.result.grasps.grasp_pose.header';
info.MatPath{98} = 'action_result.result.grasps.grasp_pose.header.seq';
info.MatPath{99} = 'action_result.result.grasps.grasp_pose.header.stamp';
info.MatPath{100} = 'action_result.result.grasps.grasp_pose.header.stamp.sec';
info.MatPath{101} = 'action_result.result.grasps.grasp_pose.header.stamp.nsec';
info.MatPath{102} = 'action_result.result.grasps.grasp_pose.header.frame_id';
info.MatPath{103} = 'action_result.result.grasps.grasp_pose.pose';
info.MatPath{104} = 'action_result.result.grasps.grasp_pose.pose.position';
info.MatPath{105} = 'action_result.result.grasps.grasp_pose.pose.position.x';
info.MatPath{106} = 'action_result.result.grasps.grasp_pose.pose.position.y';
info.MatPath{107} = 'action_result.result.grasps.grasp_pose.pose.position.z';
info.MatPath{108} = 'action_result.result.grasps.grasp_pose.pose.orientation';
info.MatPath{109} = 'action_result.result.grasps.grasp_pose.pose.orientation.x';
info.MatPath{110} = 'action_result.result.grasps.grasp_pose.pose.orientation.y';
info.MatPath{111} = 'action_result.result.grasps.grasp_pose.pose.orientation.z';
info.MatPath{112} = 'action_result.result.grasps.grasp_pose.pose.orientation.w';
info.MatPath{113} = 'action_result.result.grasps.grasp_quality';
info.MatPath{114} = 'action_result.result.grasps.pre_grasp_approach';
info.MatPath{115} = 'action_result.result.grasps.pre_grasp_approach.direction';
info.MatPath{116} = 'action_result.result.grasps.pre_grasp_approach.direction.header';
info.MatPath{117} = 'action_result.result.grasps.pre_grasp_approach.direction.header.seq';
info.MatPath{118} = 'action_result.result.grasps.pre_grasp_approach.direction.header.stamp';
info.MatPath{119} = 'action_result.result.grasps.pre_grasp_approach.direction.header.stamp.sec';
info.MatPath{120} = 'action_result.result.grasps.pre_grasp_approach.direction.header.stamp.nsec';
info.MatPath{121} = 'action_result.result.grasps.pre_grasp_approach.direction.header.frame_id';
info.MatPath{122} = 'action_result.result.grasps.pre_grasp_approach.direction.vector';
info.MatPath{123} = 'action_result.result.grasps.pre_grasp_approach.direction.vector.x';
info.MatPath{124} = 'action_result.result.grasps.pre_grasp_approach.direction.vector.y';
info.MatPath{125} = 'action_result.result.grasps.pre_grasp_approach.direction.vector.z';
info.MatPath{126} = 'action_result.result.grasps.pre_grasp_approach.desired_distance';
info.MatPath{127} = 'action_result.result.grasps.pre_grasp_approach.min_distance';
info.MatPath{128} = 'action_result.result.grasps.post_grasp_retreat';
info.MatPath{129} = 'action_result.result.grasps.post_grasp_retreat.direction';
info.MatPath{130} = 'action_result.result.grasps.post_grasp_retreat.direction.header';
info.MatPath{131} = 'action_result.result.grasps.post_grasp_retreat.direction.header.seq';
info.MatPath{132} = 'action_result.result.grasps.post_grasp_retreat.direction.header.stamp';
info.MatPath{133} = 'action_result.result.grasps.post_grasp_retreat.direction.header.stamp.sec';
info.MatPath{134} = 'action_result.result.grasps.post_grasp_retreat.direction.header.stamp.nsec';
info.MatPath{135} = 'action_result.result.grasps.post_grasp_retreat.direction.header.frame_id';
info.MatPath{136} = 'action_result.result.grasps.post_grasp_retreat.direction.vector';
info.MatPath{137} = 'action_result.result.grasps.post_grasp_retreat.direction.vector.x';
info.MatPath{138} = 'action_result.result.grasps.post_grasp_retreat.direction.vector.y';
info.MatPath{139} = 'action_result.result.grasps.post_grasp_retreat.direction.vector.z';
info.MatPath{140} = 'action_result.result.grasps.post_grasp_retreat.desired_distance';
info.MatPath{141} = 'action_result.result.grasps.post_grasp_retreat.min_distance';
info.MatPath{142} = 'action_result.result.grasps.post_place_retreat';
info.MatPath{143} = 'action_result.result.grasps.post_place_retreat.direction';
info.MatPath{144} = 'action_result.result.grasps.post_place_retreat.direction.header';
info.MatPath{145} = 'action_result.result.grasps.post_place_retreat.direction.header.seq';
info.MatPath{146} = 'action_result.result.grasps.post_place_retreat.direction.header.stamp';
info.MatPath{147} = 'action_result.result.grasps.post_place_retreat.direction.header.stamp.sec';
info.MatPath{148} = 'action_result.result.grasps.post_place_retreat.direction.header.stamp.nsec';
info.MatPath{149} = 'action_result.result.grasps.post_place_retreat.direction.header.frame_id';
info.MatPath{150} = 'action_result.result.grasps.post_place_retreat.direction.vector';
info.MatPath{151} = 'action_result.result.grasps.post_place_retreat.direction.vector.x';
info.MatPath{152} = 'action_result.result.grasps.post_place_retreat.direction.vector.y';
info.MatPath{153} = 'action_result.result.grasps.post_place_retreat.direction.vector.z';
info.MatPath{154} = 'action_result.result.grasps.post_place_retreat.desired_distance';
info.MatPath{155} = 'action_result.result.grasps.post_place_retreat.min_distance';
info.MatPath{156} = 'action_result.result.grasps.max_contact_force';
info.MatPath{157} = 'action_result.result.grasps.allowed_touch_objects';
info.MatPath{158} = 'action_feedback';
info.MatPath{159} = 'action_feedback.header';
info.MatPath{160} = 'action_feedback.header.seq';
info.MatPath{161} = 'action_feedback.header.stamp';
info.MatPath{162} = 'action_feedback.header.stamp.sec';
info.MatPath{163} = 'action_feedback.header.stamp.nsec';
info.MatPath{164} = 'action_feedback.header.frame_id';
info.MatPath{165} = 'action_feedback.status';
info.MatPath{166} = 'action_feedback.status.goal_id';
info.MatPath{167} = 'action_feedback.status.goal_id.stamp';
info.MatPath{168} = 'action_feedback.status.goal_id.stamp.sec';
info.MatPath{169} = 'action_feedback.status.goal_id.stamp.nsec';
info.MatPath{170} = 'action_feedback.status.goal_id.id';
info.MatPath{171} = 'action_feedback.status.status';
info.MatPath{172} = 'action_feedback.status.PENDING';
info.MatPath{173} = 'action_feedback.status.ACTIVE';
info.MatPath{174} = 'action_feedback.status.PREEMPTED';
info.MatPath{175} = 'action_feedback.status.SUCCEEDED';
info.MatPath{176} = 'action_feedback.status.ABORTED';
info.MatPath{177} = 'action_feedback.status.REJECTED';
info.MatPath{178} = 'action_feedback.status.PREEMPTING';
info.MatPath{179} = 'action_feedback.status.RECALLING';
info.MatPath{180} = 'action_feedback.status.RECALLED';
info.MatPath{181} = 'action_feedback.status.LOST';
info.MatPath{182} = 'action_feedback.status.text';
info.MatPath{183} = 'action_feedback.feedback';
info.MatPath{184} = 'action_feedback.feedback.grasps';
info.MatPath{185} = 'action_feedback.feedback.grasps.id';
info.MatPath{186} = 'action_feedback.feedback.grasps.pre_grasp_posture';
info.MatPath{187} = 'action_feedback.feedback.grasps.pre_grasp_posture.header';
info.MatPath{188} = 'action_feedback.feedback.grasps.pre_grasp_posture.header.seq';
info.MatPath{189} = 'action_feedback.feedback.grasps.pre_grasp_posture.header.stamp';
info.MatPath{190} = 'action_feedback.feedback.grasps.pre_grasp_posture.header.stamp.sec';
info.MatPath{191} = 'action_feedback.feedback.grasps.pre_grasp_posture.header.stamp.nsec';
info.MatPath{192} = 'action_feedback.feedback.grasps.pre_grasp_posture.header.frame_id';
info.MatPath{193} = 'action_feedback.feedback.grasps.pre_grasp_posture.joint_names';
info.MatPath{194} = 'action_feedback.feedback.grasps.pre_grasp_posture.points';
info.MatPath{195} = 'action_feedback.feedback.grasps.pre_grasp_posture.points.positions';
info.MatPath{196} = 'action_feedback.feedback.grasps.pre_grasp_posture.points.velocities';
info.MatPath{197} = 'action_feedback.feedback.grasps.pre_grasp_posture.points.accelerations';
info.MatPath{198} = 'action_feedback.feedback.grasps.pre_grasp_posture.points.effort';
info.MatPath{199} = 'action_feedback.feedback.grasps.pre_grasp_posture.points.time_from_start';
info.MatPath{200} = 'action_feedback.feedback.grasps.pre_grasp_posture.points.time_from_start.sec';
info.MatPath{201} = 'action_feedback.feedback.grasps.pre_grasp_posture.points.time_from_start.nsec';
info.MatPath{202} = 'action_feedback.feedback.grasps.grasp_posture';
info.MatPath{203} = 'action_feedback.feedback.grasps.grasp_posture.header';
info.MatPath{204} = 'action_feedback.feedback.grasps.grasp_posture.header.seq';
info.MatPath{205} = 'action_feedback.feedback.grasps.grasp_posture.header.stamp';
info.MatPath{206} = 'action_feedback.feedback.grasps.grasp_posture.header.stamp.sec';
info.MatPath{207} = 'action_feedback.feedback.grasps.grasp_posture.header.stamp.nsec';
info.MatPath{208} = 'action_feedback.feedback.grasps.grasp_posture.header.frame_id';
info.MatPath{209} = 'action_feedback.feedback.grasps.grasp_posture.joint_names';
info.MatPath{210} = 'action_feedback.feedback.grasps.grasp_posture.points';
info.MatPath{211} = 'action_feedback.feedback.grasps.grasp_posture.points.positions';
info.MatPath{212} = 'action_feedback.feedback.grasps.grasp_posture.points.velocities';
info.MatPath{213} = 'action_feedback.feedback.grasps.grasp_posture.points.accelerations';
info.MatPath{214} = 'action_feedback.feedback.grasps.grasp_posture.points.effort';
info.MatPath{215} = 'action_feedback.feedback.grasps.grasp_posture.points.time_from_start';
info.MatPath{216} = 'action_feedback.feedback.grasps.grasp_posture.points.time_from_start.sec';
info.MatPath{217} = 'action_feedback.feedback.grasps.grasp_posture.points.time_from_start.nsec';
info.MatPath{218} = 'action_feedback.feedback.grasps.grasp_pose';
info.MatPath{219} = 'action_feedback.feedback.grasps.grasp_pose.header';
info.MatPath{220} = 'action_feedback.feedback.grasps.grasp_pose.header.seq';
info.MatPath{221} = 'action_feedback.feedback.grasps.grasp_pose.header.stamp';
info.MatPath{222} = 'action_feedback.feedback.grasps.grasp_pose.header.stamp.sec';
info.MatPath{223} = 'action_feedback.feedback.grasps.grasp_pose.header.stamp.nsec';
info.MatPath{224} = 'action_feedback.feedback.grasps.grasp_pose.header.frame_id';
info.MatPath{225} = 'action_feedback.feedback.grasps.grasp_pose.pose';
info.MatPath{226} = 'action_feedback.feedback.grasps.grasp_pose.pose.position';
info.MatPath{227} = 'action_feedback.feedback.grasps.grasp_pose.pose.position.x';
info.MatPath{228} = 'action_feedback.feedback.grasps.grasp_pose.pose.position.y';
info.MatPath{229} = 'action_feedback.feedback.grasps.grasp_pose.pose.position.z';
info.MatPath{230} = 'action_feedback.feedback.grasps.grasp_pose.pose.orientation';
info.MatPath{231} = 'action_feedback.feedback.grasps.grasp_pose.pose.orientation.x';
info.MatPath{232} = 'action_feedback.feedback.grasps.grasp_pose.pose.orientation.y';
info.MatPath{233} = 'action_feedback.feedback.grasps.grasp_pose.pose.orientation.z';
info.MatPath{234} = 'action_feedback.feedback.grasps.grasp_pose.pose.orientation.w';
info.MatPath{235} = 'action_feedback.feedback.grasps.grasp_quality';
info.MatPath{236} = 'action_feedback.feedback.grasps.pre_grasp_approach';
info.MatPath{237} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction';
info.MatPath{238} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.header';
info.MatPath{239} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.header.seq';
info.MatPath{240} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.header.stamp';
info.MatPath{241} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.header.stamp.sec';
info.MatPath{242} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.header.stamp.nsec';
info.MatPath{243} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.header.frame_id';
info.MatPath{244} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.vector';
info.MatPath{245} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.vector.x';
info.MatPath{246} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.vector.y';
info.MatPath{247} = 'action_feedback.feedback.grasps.pre_grasp_approach.direction.vector.z';
info.MatPath{248} = 'action_feedback.feedback.grasps.pre_grasp_approach.desired_distance';
info.MatPath{249} = 'action_feedback.feedback.grasps.pre_grasp_approach.min_distance';
info.MatPath{250} = 'action_feedback.feedback.grasps.post_grasp_retreat';
info.MatPath{251} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction';
info.MatPath{252} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.header';
info.MatPath{253} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.header.seq';
info.MatPath{254} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.header.stamp';
info.MatPath{255} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.header.stamp.sec';
info.MatPath{256} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.header.stamp.nsec';
info.MatPath{257} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.header.frame_id';
info.MatPath{258} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.vector';
info.MatPath{259} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.vector.x';
info.MatPath{260} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.vector.y';
info.MatPath{261} = 'action_feedback.feedback.grasps.post_grasp_retreat.direction.vector.z';
info.MatPath{262} = 'action_feedback.feedback.grasps.post_grasp_retreat.desired_distance';
info.MatPath{263} = 'action_feedback.feedback.grasps.post_grasp_retreat.min_distance';
info.MatPath{264} = 'action_feedback.feedback.grasps.post_place_retreat';
info.MatPath{265} = 'action_feedback.feedback.grasps.post_place_retreat.direction';
info.MatPath{266} = 'action_feedback.feedback.grasps.post_place_retreat.direction.header';
info.MatPath{267} = 'action_feedback.feedback.grasps.post_place_retreat.direction.header.seq';
info.MatPath{268} = 'action_feedback.feedback.grasps.post_place_retreat.direction.header.stamp';
info.MatPath{269} = 'action_feedback.feedback.grasps.post_place_retreat.direction.header.stamp.sec';
info.MatPath{270} = 'action_feedback.feedback.grasps.post_place_retreat.direction.header.stamp.nsec';
info.MatPath{271} = 'action_feedback.feedback.grasps.post_place_retreat.direction.header.frame_id';
info.MatPath{272} = 'action_feedback.feedback.grasps.post_place_retreat.direction.vector';
info.MatPath{273} = 'action_feedback.feedback.grasps.post_place_retreat.direction.vector.x';
info.MatPath{274} = 'action_feedback.feedback.grasps.post_place_retreat.direction.vector.y';
info.MatPath{275} = 'action_feedback.feedback.grasps.post_place_retreat.direction.vector.z';
info.MatPath{276} = 'action_feedback.feedback.grasps.post_place_retreat.desired_distance';
info.MatPath{277} = 'action_feedback.feedback.grasps.post_place_retreat.min_distance';
info.MatPath{278} = 'action_feedback.feedback.grasps.max_contact_force';
info.MatPath{279} = 'action_feedback.feedback.grasps.allowed_touch_objects';
