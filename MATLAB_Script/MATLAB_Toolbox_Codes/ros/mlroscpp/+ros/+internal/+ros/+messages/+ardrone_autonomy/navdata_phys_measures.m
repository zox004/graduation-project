function [data, info] = navdata_phys_measures
%navdata_phys_measures gives an empty data for ardrone_autonomy/navdata_phys_measures

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'ardrone_autonomy/navdata_phys_measures';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.DroneTime, info.DroneTime] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Tag, info.Tag] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.Size, info.Size] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.AccsTemp, info.AccsTemp] = ros.internal.ros.messages.ros.default_type('single',1);
[data.GyroTemp, info.GyroTemp] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.PhysAccs, info.PhysAccs] = ros.internal.ros.messages.ros.default_type('single',NaN);
[data.PhysGyros, info.PhysGyros] = ros.internal.ros.messages.ros.default_type('single',NaN);
[data.Alim3V3, info.Alim3V3] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.VrefEpson, info.VrefEpson] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.VrefIDG, info.VrefIDG] = ros.internal.ros.messages.ros.default_type('uint32',1);
info.MessageType = 'ardrone_autonomy/navdata_phys_measures';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,16);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'drone_time';
info.MatPath{8} = 'tag';
info.MatPath{9} = 'size';
info.MatPath{10} = 'accs_temp';
info.MatPath{11} = 'gyro_temp';
info.MatPath{12} = 'phys_accs';
info.MatPath{13} = 'phys_gyros';
info.MatPath{14} = 'alim3V3';
info.MatPath{15} = 'vrefEpson';
info.MatPath{16} = 'vrefIDG';
