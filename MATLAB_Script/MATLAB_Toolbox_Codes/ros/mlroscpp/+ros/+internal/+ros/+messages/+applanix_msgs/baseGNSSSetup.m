function [data, info] = baseGNSSSetup
%BaseGNSSSetup gives an empty data for applanix_msgs/BaseGNSSSetup

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'applanix_msgs/BaseGNSSSetup';
[data.Transaction, info.Transaction] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.TYPENONE, info.TYPENONE] = ros.internal.ros.messages.ros.default_type('uint16',1, 0);
[data.TYPERTCM1, info.TYPERTCM1] = ros.internal.ros.messages.ros.default_type('uint16',1, 1);
[data.TYPERTCM3, info.TYPERTCM3] = ros.internal.ros.messages.ros.default_type('uint16',1, 2);
[data.TYPECMR, info.TYPECMR] = ros.internal.ros.messages.ros.default_type('uint16',1, 3);
[data.BaseGnssInputType, info.BaseGnssInputType] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.LineControl, info.LineControl] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.ModemControl, info.ModemControl] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.ConnectionControl, info.ConnectionControl] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.PhoneNumber, info.PhoneNumber] = ros.internal.ros.messages.ros.default_type('uint8',32);
[data.NumRedials, info.NumRedials] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.ModemCommandString, info.ModemCommandString] = ros.internal.ros.messages.ros.default_type('uint8',64);
[data.ModemInitString, info.ModemInitString] = ros.internal.ros.messages.ros.default_type('uint8',128);
[data.DataTimeoutLength, info.DataTimeoutLength] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.DATUMWGS84, info.DATUMWGS84] = ros.internal.ros.messages.ros.default_type('uint16',1, 0);
[data.DATUMNAD83, info.DATUMNAD83] = ros.internal.ros.messages.ros.default_type('uint16',1, 1);
[data.Datum, info.Datum] = ros.internal.ros.messages.ros.default_type('uint16',1);
info.MessageType = 'applanix_msgs/BaseGNSSSetup';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,17);
info.MatPath{1} = 'transaction';
info.MatPath{2} = 'TYPE_NONE';
info.MatPath{3} = 'TYPE_RTCM_1';
info.MatPath{4} = 'TYPE_RTCM_3';
info.MatPath{5} = 'TYPE_CMR';
info.MatPath{6} = 'base_gnss_input_type';
info.MatPath{7} = 'line_control';
info.MatPath{8} = 'modem_control';
info.MatPath{9} = 'connection_control';
info.MatPath{10} = 'phone_number';
info.MatPath{11} = 'num_redials';
info.MatPath{12} = 'modem_command_string';
info.MatPath{13} = 'modem_init_string';
info.MatPath{14} = 'data_timeout_length';
info.MatPath{15} = 'DATUM_WGS84';
info.MatPath{16} = 'DATUM_NAD83';
info.MatPath{17} = 'datum';
