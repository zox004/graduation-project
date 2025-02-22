function [data, info] = batteryServer2
%BatteryServer2 gives an empty data for pr2_msgs/BatteryServer2

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'pr2_msgs/BatteryServer2';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.MAXBATCOUNT, info.MAXBATCOUNT] = ros.internal.ros.messages.ros.default_type('int32',1, 4);
[data.MAXBATREG, info.MAXBATREG] = ros.internal.ros.messages.ros.default_type('int32',1, 48);
[data.Id, info.Id] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.LastSystemUpdate, info.LastSystemUpdate] = ros.internal.ros.messages.ros.time;
info.LastSystemUpdate.MLdataType = 'struct';
[data.TimeLeft, info.TimeLeft] = ros.internal.ros.messages.ros.duration;
info.TimeLeft.MLdataType = 'struct';
[data.AverageCharge, info.AverageCharge] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.Message, info.Message] = ros.internal.ros.messages.ros.char('string',0);
[data.LastControllerUpdate, info.LastControllerUpdate] = ros.internal.ros.messages.ros.time;
info.LastControllerUpdate.MLdataType = 'struct';
[data.Battery, info.Battery] = ros.internal.ros.messages.pr2_msgs.batteryState2;
info.Battery.MLdataType = 'struct';
info.Battery.MaxLen = NaN;
info.Battery.MinLen = 0;
data.Battery = data.Battery([],1);
info.MessageType = 'pr2_msgs/BatteryServer2';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,35);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'MAX_BAT_COUNT';
info.MatPath{8} = 'MAX_BAT_REG';
info.MatPath{9} = 'id';
info.MatPath{10} = 'last_system_update';
info.MatPath{11} = 'last_system_update.sec';
info.MatPath{12} = 'last_system_update.nsec';
info.MatPath{13} = 'time_left';
info.MatPath{14} = 'time_left.sec';
info.MatPath{15} = 'time_left.nsec';
info.MatPath{16} = 'average_charge';
info.MatPath{17} = 'message';
info.MatPath{18} = 'last_controller_update';
info.MatPath{19} = 'last_controller_update.sec';
info.MatPath{20} = 'last_controller_update.nsec';
info.MatPath{21} = 'battery';
info.MatPath{22} = 'battery.present';
info.MatPath{23} = 'battery.charging';
info.MatPath{24} = 'battery.discharging';
info.MatPath{25} = 'battery.power_present';
info.MatPath{26} = 'battery.power_no_good';
info.MatPath{27} = 'battery.inhibited';
info.MatPath{28} = 'battery.last_battery_update';
info.MatPath{29} = 'battery.last_battery_update.sec';
info.MatPath{30} = 'battery.last_battery_update.nsec';
info.MatPath{31} = 'battery.battery_register';
info.MatPath{32} = 'battery.battery_update_flag';
info.MatPath{33} = 'battery.battery_register_update';
info.MatPath{34} = 'battery.battery_register_update.sec';
info.MatPath{35} = 'battery.battery_register_update.nsec';
