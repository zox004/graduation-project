function [data, info] = execFootstepsGoal
%ExecFootstepsGoal gives an empty data for jsk_footstep_msgs/ExecFootstepsGoal

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'jsk_footstep_msgs/ExecFootstepsGoal';
[data.NEWTARGET, info.NEWTARGET] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.RESUME, info.RESUME] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.Footstep, info.Footstep] = ros.internal.ros.messages.jsk_footstep_msgs.footstepArray;
info.Footstep.MLdataType = 'struct';
[data.Strategy, info.Strategy] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'jsk_footstep_msgs/ExecFootstepsGoal';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,27);
info.MatPath{1} = 'NEW_TARGET';
info.MatPath{2} = 'RESUME';
info.MatPath{3} = 'footstep';
info.MatPath{4} = 'footstep.header';
info.MatPath{5} = 'footstep.header.seq';
info.MatPath{6} = 'footstep.header.stamp';
info.MatPath{7} = 'footstep.header.stamp.sec';
info.MatPath{8} = 'footstep.header.stamp.nsec';
info.MatPath{9} = 'footstep.header.frame_id';
info.MatPath{10} = 'footstep.footsteps';
info.MatPath{11} = 'footstep.footsteps.RIGHT';
info.MatPath{12} = 'footstep.footsteps.LEFT';
info.MatPath{13} = 'footstep.footsteps.leg';
info.MatPath{14} = 'footstep.footsteps.pose';
info.MatPath{15} = 'footstep.footsteps.pose.position';
info.MatPath{16} = 'footstep.footsteps.pose.position.x';
info.MatPath{17} = 'footstep.footsteps.pose.position.y';
info.MatPath{18} = 'footstep.footsteps.pose.position.z';
info.MatPath{19} = 'footstep.footsteps.pose.orientation';
info.MatPath{20} = 'footstep.footsteps.pose.orientation.x';
info.MatPath{21} = 'footstep.footsteps.pose.orientation.y';
info.MatPath{22} = 'footstep.footsteps.pose.orientation.z';
info.MatPath{23} = 'footstep.footsteps.pose.orientation.w';
info.MatPath{24} = 'footstep.footsteps.duration';
info.MatPath{25} = 'footstep.footsteps.duration.sec';
info.MatPath{26} = 'footstep.footsteps.duration.nsec';
info.MatPath{27} = 'strategy';
