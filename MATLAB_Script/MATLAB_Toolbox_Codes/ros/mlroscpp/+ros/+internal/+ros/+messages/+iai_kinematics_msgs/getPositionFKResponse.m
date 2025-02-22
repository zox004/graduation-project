function [data, info] = getPositionFKResponse
%GetPositionFK gives an empty data for iai_kinematics_msgs/GetPositionFKResponse

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'iai_kinematics_msgs/GetPositionFKResponse';
[data.PoseStamped, info.PoseStamped] = ros.internal.ros.messages.geometry_msgs.poseStamped;
info.PoseStamped.MLdataType = 'struct';
info.PoseStamped.MaxLen = NaN;
info.PoseStamped.MinLen = 0;
data.PoseStamped = data.PoseStamped([],1);
[data.FkLinkNames, info.FkLinkNames] = ros.internal.ros.messages.ros.char('string',NaN);
[data.ErrorCode, info.ErrorCode] = ros.internal.ros.messages.iai_kinematics_msgs.errorCodes;
info.ErrorCode.MLdataType = 'struct';
info.MessageType = 'iai_kinematics_msgs/GetPositionFKResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,57);
info.MatPath{1} = 'pose_stamped';
info.MatPath{2} = 'pose_stamped.header';
info.MatPath{3} = 'pose_stamped.header.seq';
info.MatPath{4} = 'pose_stamped.header.stamp';
info.MatPath{5} = 'pose_stamped.header.stamp.sec';
info.MatPath{6} = 'pose_stamped.header.stamp.nsec';
info.MatPath{7} = 'pose_stamped.header.frame_id';
info.MatPath{8} = 'pose_stamped.pose';
info.MatPath{9} = 'pose_stamped.pose.position';
info.MatPath{10} = 'pose_stamped.pose.position.x';
info.MatPath{11} = 'pose_stamped.pose.position.y';
info.MatPath{12} = 'pose_stamped.pose.position.z';
info.MatPath{13} = 'pose_stamped.pose.orientation';
info.MatPath{14} = 'pose_stamped.pose.orientation.x';
info.MatPath{15} = 'pose_stamped.pose.orientation.y';
info.MatPath{16} = 'pose_stamped.pose.orientation.z';
info.MatPath{17} = 'pose_stamped.pose.orientation.w';
info.MatPath{18} = 'fk_link_names';
info.MatPath{19} = 'error_code';
info.MatPath{20} = 'error_code.val';
info.MatPath{21} = 'error_code.PLANNING_FAILED';
info.MatPath{22} = 'error_code.SUCCESS';
info.MatPath{23} = 'error_code.TIMED_OUT';
info.MatPath{24} = 'error_code.START_STATE_IN_COLLISION';
info.MatPath{25} = 'error_code.START_STATE_VIOLATES_PATH_CONSTRAINTS';
info.MatPath{26} = 'error_code.GOAL_IN_COLLISION';
info.MatPath{27} = 'error_code.GOAL_VIOLATES_PATH_CONSTRAINTS';
info.MatPath{28} = 'error_code.INVALID_ROBOT_STATE';
info.MatPath{29} = 'error_code.INCOMPLETE_ROBOT_STATE';
info.MatPath{30} = 'error_code.INVALID_PLANNER_ID';
info.MatPath{31} = 'error_code.INVALID_NUM_PLANNING_ATTEMPTS';
info.MatPath{32} = 'error_code.INVALID_ALLOWED_PLANNING_TIME';
info.MatPath{33} = 'error_code.INVALID_GROUP_NAME';
info.MatPath{34} = 'error_code.INVALID_GOAL_JOINT_CONSTRAINTS';
info.MatPath{35} = 'error_code.INVALID_GOAL_POSITION_CONSTRAINTS';
info.MatPath{36} = 'error_code.INVALID_GOAL_ORIENTATION_CONSTRAINTS';
info.MatPath{37} = 'error_code.INVALID_PATH_JOINT_CONSTRAINTS';
info.MatPath{38} = 'error_code.INVALID_PATH_POSITION_CONSTRAINTS';
info.MatPath{39} = 'error_code.INVALID_PATH_ORIENTATION_CONSTRAINTS';
info.MatPath{40} = 'error_code.INVALID_TRAJECTORY';
info.MatPath{41} = 'error_code.INVALID_INDEX';
info.MatPath{42} = 'error_code.JOINT_LIMITS_VIOLATED';
info.MatPath{43} = 'error_code.PATH_CONSTRAINTS_VIOLATED';
info.MatPath{44} = 'error_code.COLLISION_CONSTRAINTS_VIOLATED';
info.MatPath{45} = 'error_code.GOAL_CONSTRAINTS_VIOLATED';
info.MatPath{46} = 'error_code.JOINTS_NOT_MOVING';
info.MatPath{47} = 'error_code.TRAJECTORY_CONTROLLER_FAILED';
info.MatPath{48} = 'error_code.FRAME_TRANSFORM_FAILURE';
info.MatPath{49} = 'error_code.COLLISION_CHECKING_UNAVAILABLE';
info.MatPath{50} = 'error_code.ROBOT_STATE_STALE';
info.MatPath{51} = 'error_code.SENSOR_INFO_STALE';
info.MatPath{52} = 'error_code.NO_IK_SOLUTION';
info.MatPath{53} = 'error_code.INVALID_LINK_NAME';
info.MatPath{54} = 'error_code.IK_LINK_IN_COLLISION';
info.MatPath{55} = 'error_code.NO_FK_SOLUTION';
info.MatPath{56} = 'error_code.KINEMATICS_STATE_IN_COLLISION';
info.MatPath{57} = 'error_code.INVALID_TIMEOUT';
