function [data, info] = executeTrajectoryGoal
%ExecuteTrajectoryGoal gives an empty data for moveit_msgs/ExecuteTrajectoryGoal

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'moveit_msgs/ExecuteTrajectoryGoal';
[data.Trajectory, info.Trajectory] = ros.internal.ros.messages.moveit_msgs.robotTrajectory;
info.Trajectory.MLdataType = 'struct';
info.MessageType = 'moveit_msgs/ExecuteTrajectoryGoal';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,57);
info.MatPath{1} = 'trajectory';
info.MatPath{2} = 'trajectory.joint_trajectory';
info.MatPath{3} = 'trajectory.joint_trajectory.header';
info.MatPath{4} = 'trajectory.joint_trajectory.header.seq';
info.MatPath{5} = 'trajectory.joint_trajectory.header.stamp';
info.MatPath{6} = 'trajectory.joint_trajectory.header.stamp.sec';
info.MatPath{7} = 'trajectory.joint_trajectory.header.stamp.nsec';
info.MatPath{8} = 'trajectory.joint_trajectory.header.frame_id';
info.MatPath{9} = 'trajectory.joint_trajectory.joint_names';
info.MatPath{10} = 'trajectory.joint_trajectory.points';
info.MatPath{11} = 'trajectory.joint_trajectory.points.positions';
info.MatPath{12} = 'trajectory.joint_trajectory.points.velocities';
info.MatPath{13} = 'trajectory.joint_trajectory.points.accelerations';
info.MatPath{14} = 'trajectory.joint_trajectory.points.effort';
info.MatPath{15} = 'trajectory.joint_trajectory.points.time_from_start';
info.MatPath{16} = 'trajectory.joint_trajectory.points.time_from_start.sec';
info.MatPath{17} = 'trajectory.joint_trajectory.points.time_from_start.nsec';
info.MatPath{18} = 'trajectory.multi_dof_joint_trajectory';
info.MatPath{19} = 'trajectory.multi_dof_joint_trajectory.header';
info.MatPath{20} = 'trajectory.multi_dof_joint_trajectory.header.seq';
info.MatPath{21} = 'trajectory.multi_dof_joint_trajectory.header.stamp';
info.MatPath{22} = 'trajectory.multi_dof_joint_trajectory.header.stamp.sec';
info.MatPath{23} = 'trajectory.multi_dof_joint_trajectory.header.stamp.nsec';
info.MatPath{24} = 'trajectory.multi_dof_joint_trajectory.header.frame_id';
info.MatPath{25} = 'trajectory.multi_dof_joint_trajectory.joint_names';
info.MatPath{26} = 'trajectory.multi_dof_joint_trajectory.points';
info.MatPath{27} = 'trajectory.multi_dof_joint_trajectory.points.transforms';
info.MatPath{28} = 'trajectory.multi_dof_joint_trajectory.points.transforms.translation';
info.MatPath{29} = 'trajectory.multi_dof_joint_trajectory.points.transforms.translation.x';
info.MatPath{30} = 'trajectory.multi_dof_joint_trajectory.points.transforms.translation.y';
info.MatPath{31} = 'trajectory.multi_dof_joint_trajectory.points.transforms.translation.z';
info.MatPath{32} = 'trajectory.multi_dof_joint_trajectory.points.transforms.rotation';
info.MatPath{33} = 'trajectory.multi_dof_joint_trajectory.points.transforms.rotation.x';
info.MatPath{34} = 'trajectory.multi_dof_joint_trajectory.points.transforms.rotation.y';
info.MatPath{35} = 'trajectory.multi_dof_joint_trajectory.points.transforms.rotation.z';
info.MatPath{36} = 'trajectory.multi_dof_joint_trajectory.points.transforms.rotation.w';
info.MatPath{37} = 'trajectory.multi_dof_joint_trajectory.points.velocities';
info.MatPath{38} = 'trajectory.multi_dof_joint_trajectory.points.velocities.linear';
info.MatPath{39} = 'trajectory.multi_dof_joint_trajectory.points.velocities.linear.x';
info.MatPath{40} = 'trajectory.multi_dof_joint_trajectory.points.velocities.linear.y';
info.MatPath{41} = 'trajectory.multi_dof_joint_trajectory.points.velocities.linear.z';
info.MatPath{42} = 'trajectory.multi_dof_joint_trajectory.points.velocities.angular';
info.MatPath{43} = 'trajectory.multi_dof_joint_trajectory.points.velocities.angular.x';
info.MatPath{44} = 'trajectory.multi_dof_joint_trajectory.points.velocities.angular.y';
info.MatPath{45} = 'trajectory.multi_dof_joint_trajectory.points.velocities.angular.z';
info.MatPath{46} = 'trajectory.multi_dof_joint_trajectory.points.accelerations';
info.MatPath{47} = 'trajectory.multi_dof_joint_trajectory.points.accelerations.linear';
info.MatPath{48} = 'trajectory.multi_dof_joint_trajectory.points.accelerations.linear.x';
info.MatPath{49} = 'trajectory.multi_dof_joint_trajectory.points.accelerations.linear.y';
info.MatPath{50} = 'trajectory.multi_dof_joint_trajectory.points.accelerations.linear.z';
info.MatPath{51} = 'trajectory.multi_dof_joint_trajectory.points.accelerations.angular';
info.MatPath{52} = 'trajectory.multi_dof_joint_trajectory.points.accelerations.angular.x';
info.MatPath{53} = 'trajectory.multi_dof_joint_trajectory.points.accelerations.angular.y';
info.MatPath{54} = 'trajectory.multi_dof_joint_trajectory.points.accelerations.angular.z';
info.MatPath{55} = 'trajectory.multi_dof_joint_trajectory.points.time_from_start';
info.MatPath{56} = 'trajectory.multi_dof_joint_trajectory.points.time_from_start.sec';
info.MatPath{57} = 'trajectory.multi_dof_joint_trajectory.points.time_from_start.nsec';
