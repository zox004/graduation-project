function [data, info] = setLightModeActionGoal
%SetLightModeActionGoal gives an empty data for cob_light/SetLightModeActionGoal

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'cob_light/SetLightModeActionGoal';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.GoalId, info.GoalId] = ros.internal.ros.messages.actionlib_msgs.goalID;
info.GoalId.MLdataType = 'struct';
[data.Goal, info.Goal] = ros.internal.ros.messages.cob_light.setLightModeGoal;
info.Goal.MLdataType = 'struct';
info.MessageType = 'cob_light/SetLightModeActionGoal';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,31);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'goal_id';
info.MatPath{8} = 'goal_id.stamp';
info.MatPath{9} = 'goal_id.stamp.sec';
info.MatPath{10} = 'goal_id.stamp.nsec';
info.MatPath{11} = 'goal_id.id';
info.MatPath{12} = 'goal';
info.MatPath{13} = 'goal.mode';
info.MatPath{14} = 'goal.mode.mode';
info.MatPath{15} = 'goal.mode.frequency';
info.MatPath{16} = 'goal.mode.timeout';
info.MatPath{17} = 'goal.mode.pulses';
info.MatPath{18} = 'goal.mode.priority';
info.MatPath{19} = 'goal.mode.colors';
info.MatPath{20} = 'goal.mode.colors.r';
info.MatPath{21} = 'goal.mode.colors.g';
info.MatPath{22} = 'goal.mode.colors.b';
info.MatPath{23} = 'goal.mode.colors.a';
info.MatPath{24} = 'goal.mode.sequences';
info.MatPath{25} = 'goal.mode.sequences.color';
info.MatPath{26} = 'goal.mode.sequences.color.r';
info.MatPath{27} = 'goal.mode.sequences.color.g';
info.MatPath{28} = 'goal.mode.sequences.color.b';
info.MatPath{29} = 'goal.mode.sequences.color.a';
info.MatPath{30} = 'goal.mode.sequences.hold_time';
info.MatPath{31} = 'goal.mode.sequences.cross_time';
