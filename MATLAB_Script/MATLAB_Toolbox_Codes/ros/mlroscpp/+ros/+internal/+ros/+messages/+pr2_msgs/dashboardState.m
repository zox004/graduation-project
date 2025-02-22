function [data, info] = dashboardState
%DashboardState gives an empty data for pr2_msgs/DashboardState

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'pr2_msgs/DashboardState';
[data.MotorsHalted, info.MotorsHalted] = ros.internal.ros.messages.std_msgs.bool;
info.MotorsHalted.MLdataType = 'struct';
[data.MotorsHaltedValid, info.MotorsHaltedValid] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.PowerBoardState, info.PowerBoardState] = ros.internal.ros.messages.pr2_msgs.powerBoardState;
info.PowerBoardState.MLdataType = 'struct';
[data.PowerBoardStateValid, info.PowerBoardStateValid] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.PowerState, info.PowerState] = ros.internal.ros.messages.pr2_msgs.powerState;
info.PowerState.MLdataType = 'struct';
[data.PowerStateValid, info.PowerStateValid] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.AccessPoint, info.AccessPoint] = ros.internal.ros.messages.pr2_msgs.accessPoint;
info.AccessPoint.MLdataType = 'struct';
[data.AccessPointValid, info.AccessPointValid] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'pr2_msgs/DashboardState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,62);
info.MatPath{1} = 'motors_halted';
info.MatPath{2} = 'motors_halted.data';
info.MatPath{3} = 'motors_halted_valid';
info.MatPath{4} = 'power_board_state';
info.MatPath{5} = 'power_board_state.STATE_NOPOWER';
info.MatPath{6} = 'power_board_state.STATE_STANDBY';
info.MatPath{7} = 'power_board_state.STATE_PUMPING';
info.MatPath{8} = 'power_board_state.STATE_ON';
info.MatPath{9} = 'power_board_state.STATE_ENABLED';
info.MatPath{10} = 'power_board_state.STATE_DISABLED';
info.MatPath{11} = 'power_board_state.MASTER_NOPOWER';
info.MatPath{12} = 'power_board_state.MASTER_STANDBY';
info.MatPath{13} = 'power_board_state.MASTER_ON';
info.MatPath{14} = 'power_board_state.MASTER_OFF';
info.MatPath{15} = 'power_board_state.MASTER_SHUTDOWN';
info.MatPath{16} = 'power_board_state.header';
info.MatPath{17} = 'power_board_state.header.seq';
info.MatPath{18} = 'power_board_state.header.stamp';
info.MatPath{19} = 'power_board_state.header.stamp.sec';
info.MatPath{20} = 'power_board_state.header.stamp.nsec';
info.MatPath{21} = 'power_board_state.header.frame_id';
info.MatPath{22} = 'power_board_state.name';
info.MatPath{23} = 'power_board_state.serial_num';
info.MatPath{24} = 'power_board_state.input_voltage';
info.MatPath{25} = 'power_board_state.master_state';
info.MatPath{26} = 'power_board_state.circuit_state';
info.MatPath{27} = 'power_board_state.circuit_voltage';
info.MatPath{28} = 'power_board_state.run_stop';
info.MatPath{29} = 'power_board_state.wireless_stop';
info.MatPath{30} = 'power_board_state_valid';
info.MatPath{31} = 'power_state';
info.MatPath{32} = 'power_state.header';
info.MatPath{33} = 'power_state.header.seq';
info.MatPath{34} = 'power_state.header.stamp';
info.MatPath{35} = 'power_state.header.stamp.sec';
info.MatPath{36} = 'power_state.header.stamp.nsec';
info.MatPath{37} = 'power_state.header.frame_id';
info.MatPath{38} = 'power_state.power_consumption';
info.MatPath{39} = 'power_state.time_remaining';
info.MatPath{40} = 'power_state.time_remaining.sec';
info.MatPath{41} = 'power_state.time_remaining.nsec';
info.MatPath{42} = 'power_state.prediction_method';
info.MatPath{43} = 'power_state.relative_capacity';
info.MatPath{44} = 'power_state.AC_present';
info.MatPath{45} = 'power_state_valid';
info.MatPath{46} = 'access_point';
info.MatPath{47} = 'access_point.header';
info.MatPath{48} = 'access_point.header.seq';
info.MatPath{49} = 'access_point.header.stamp';
info.MatPath{50} = 'access_point.header.stamp.sec';
info.MatPath{51} = 'access_point.header.stamp.nsec';
info.MatPath{52} = 'access_point.header.frame_id';
info.MatPath{53} = 'access_point.essid';
info.MatPath{54} = 'access_point.macaddr';
info.MatPath{55} = 'access_point.signal';
info.MatPath{56} = 'access_point.noise';
info.MatPath{57} = 'access_point.snr';
info.MatPath{58} = 'access_point.channel';
info.MatPath{59} = 'access_point.rate';
info.MatPath{60} = 'access_point.tx_power';
info.MatPath{61} = 'access_point.quality';
info.MatPath{62} = 'access_point_valid';
