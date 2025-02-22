function [data, info] = status
%Status gives an empty data for roboteq_msgs/Status

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'roboteq_msgs/Status';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.FAULTOVERHEAT, info.FAULTOVERHEAT] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.FAULTOVERVOLTAGE, info.FAULTOVERVOLTAGE] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.FAULTUNDERVOLTAGE, info.FAULTUNDERVOLTAGE] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.FAULTSHORTCIRCUIT, info.FAULTSHORTCIRCUIT] = ros.internal.ros.messages.ros.default_type('uint8',1, 8);
[data.FAULTEMERGENCYSTOP, info.FAULTEMERGENCYSTOP] = ros.internal.ros.messages.ros.default_type('uint8',1, 16);
[data.FAULTSEPEXEXCITATIONFAULT, info.FAULTSEPEXEXCITATIONFAULT] = ros.internal.ros.messages.ros.default_type('uint8',1, 32);
[data.FAULTMOSFETFAILURE, info.FAULTMOSFETFAILURE] = ros.internal.ros.messages.ros.default_type('uint8',1, 64);
[data.FAULTSTARTUPCONFIGFAULT, info.FAULTSTARTUPCONFIGFAULT] = ros.internal.ros.messages.ros.default_type('uint8',1, 128);
[data.Fault, info.Fault] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.STATUSSERIALMODE, info.STATUSSERIALMODE] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.STATUSPULSEMODE, info.STATUSPULSEMODE] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.STATUSANALOGMODE, info.STATUSANALOGMODE] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.STATUSPOWERSTAGEOFF, info.STATUSPOWERSTAGEOFF] = ros.internal.ros.messages.ros.default_type('uint8',1, 8);
[data.STATUSSTALLDETECTED, info.STATUSSTALLDETECTED] = ros.internal.ros.messages.ros.default_type('uint8',1, 16);
[data.STATUSATLIMIT, info.STATUSATLIMIT] = ros.internal.ros.messages.ros.default_type('uint8',1, 32);
[data.STATUSMICROBASICSCRIPTRUNNING, info.STATUSMICROBASICSCRIPTRUNNING] = ros.internal.ros.messages.ros.default_type('uint8',1, 128);
[data.Status_, info.Status_] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.IcTemperature, info.IcTemperature] = ros.internal.ros.messages.ros.default_type('single',1);
[data.InternalVoltage, info.InternalVoltage] = ros.internal.ros.messages.ros.default_type('single',1);
[data.AdcVoltage, info.AdcVoltage] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'roboteq_msgs/Status';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,26);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'FAULT_OVERHEAT';
info.MatPath{8} = 'FAULT_OVERVOLTAGE';
info.MatPath{9} = 'FAULT_UNDERVOLTAGE';
info.MatPath{10} = 'FAULT_SHORT_CIRCUIT';
info.MatPath{11} = 'FAULT_EMERGENCY_STOP';
info.MatPath{12} = 'FAULT_SEPEX_EXCITATION_FAULT';
info.MatPath{13} = 'FAULT_MOSFET_FAILURE';
info.MatPath{14} = 'FAULT_STARTUP_CONFIG_FAULT';
info.MatPath{15} = 'fault';
info.MatPath{16} = 'STATUS_SERIAL_MODE';
info.MatPath{17} = 'STATUS_PULSE_MODE';
info.MatPath{18} = 'STATUS_ANALOG_MODE';
info.MatPath{19} = 'STATUS_POWER_STAGE_OFF';
info.MatPath{20} = 'STATUS_STALL_DETECTED';
info.MatPath{21} = 'STATUS_AT_LIMIT';
info.MatPath{22} = 'STATUS_MICROBASIC_SCRIPT_RUNNING';
info.MatPath{23} = 'status';
info.MatPath{24} = 'ic_temperature';
info.MatPath{25} = 'internal_voltage';
info.MatPath{26} = 'adc_voltage';
