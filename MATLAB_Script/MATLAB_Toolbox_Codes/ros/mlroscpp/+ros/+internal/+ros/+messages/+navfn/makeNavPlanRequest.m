function [data, info] = makeNavPlanRequest
%MakeNavPlan gives an empty data for navfn/MakeNavPlanRequest

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'navfn/MakeNavPlanRequest';
[data.Start, info.Start] = ros.internal.ros.messages.geometry_msgs.poseStamped;
info.Start.MLdataType = 'struct';
[data.Goal, info.Goal] = ros.internal.ros.messages.geometry_msgs.poseStamped;
info.Goal.MLdataType = 'struct';
info.MessageType = 'navfn/MakeNavPlanRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,34);
info.MatPath{1} = 'start';
info.MatPath{2} = 'start.header';
info.MatPath{3} = 'start.header.seq';
info.MatPath{4} = 'start.header.stamp';
info.MatPath{5} = 'start.header.stamp.sec';
info.MatPath{6} = 'start.header.stamp.nsec';
info.MatPath{7} = 'start.header.frame_id';
info.MatPath{8} = 'start.pose';
info.MatPath{9} = 'start.pose.position';
info.MatPath{10} = 'start.pose.position.x';
info.MatPath{11} = 'start.pose.position.y';
info.MatPath{12} = 'start.pose.position.z';
info.MatPath{13} = 'start.pose.orientation';
info.MatPath{14} = 'start.pose.orientation.x';
info.MatPath{15} = 'start.pose.orientation.y';
info.MatPath{16} = 'start.pose.orientation.z';
info.MatPath{17} = 'start.pose.orientation.w';
info.MatPath{18} = 'goal';
info.MatPath{19} = 'goal.header';
info.MatPath{20} = 'goal.header.seq';
info.MatPath{21} = 'goal.header.stamp';
info.MatPath{22} = 'goal.header.stamp.sec';
info.MatPath{23} = 'goal.header.stamp.nsec';
info.MatPath{24} = 'goal.header.frame_id';
info.MatPath{25} = 'goal.pose';
info.MatPath{26} = 'goal.pose.position';
info.MatPath{27} = 'goal.pose.position.x';
info.MatPath{28} = 'goal.pose.position.y';
info.MatPath{29} = 'goal.pose.position.z';
info.MatPath{30} = 'goal.pose.orientation';
info.MatPath{31} = 'goal.pose.orientation.x';
info.MatPath{32} = 'goal.pose.orientation.y';
info.MatPath{33} = 'goal.pose.orientation.z';
info.MatPath{34} = 'goal.pose.orientation.w';
