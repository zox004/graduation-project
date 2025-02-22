function [data, info] = controllerStatistics
%ControllerStatistics gives an empty data for controller_manager_msgs/ControllerStatistics

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'controller_manager_msgs/ControllerStatistics';
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',0);
[data.Type, info.Type] = ros.internal.ros.messages.ros.char('string',0);
[data.Timestamp, info.Timestamp] = ros.internal.ros.messages.ros.time;
info.Timestamp.MLdataType = 'struct';
[data.Running, info.Running] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.MaxTime, info.MaxTime] = ros.internal.ros.messages.ros.duration;
info.MaxTime.MLdataType = 'struct';
[data.MeanTime, info.MeanTime] = ros.internal.ros.messages.ros.duration;
info.MeanTime.MLdataType = 'struct';
[data.VarianceTime, info.VarianceTime] = ros.internal.ros.messages.ros.duration;
info.VarianceTime.MLdataType = 'struct';
[data.NumControlLoopOverruns, info.NumControlLoopOverruns] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.TimeLastControlLoopOverrun, info.TimeLastControlLoopOverrun] = ros.internal.ros.messages.ros.time;
info.TimeLastControlLoopOverrun.MLdataType = 'struct';
info.MessageType = 'controller_manager_msgs/ControllerStatistics';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,19);
info.MatPath{1} = 'name';
info.MatPath{2} = 'type';
info.MatPath{3} = 'timestamp';
info.MatPath{4} = 'timestamp.sec';
info.MatPath{5} = 'timestamp.nsec';
info.MatPath{6} = 'running';
info.MatPath{7} = 'max_time';
info.MatPath{8} = 'max_time.sec';
info.MatPath{9} = 'max_time.nsec';
info.MatPath{10} = 'mean_time';
info.MatPath{11} = 'mean_time.sec';
info.MatPath{12} = 'mean_time.nsec';
info.MatPath{13} = 'variance_time';
info.MatPath{14} = 'variance_time.sec';
info.MatPath{15} = 'variance_time.nsec';
info.MatPath{16} = 'num_control_loop_overruns';
info.MatPath{17} = 'time_last_control_loop_overrun';
info.MatPath{18} = 'time_last_control_loop_overrun.sec';
info.MatPath{19} = 'time_last_control_loop_overrun.nsec';
