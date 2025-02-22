function [data, info] = getSnapshotResult
%GetSnapshotResult gives an empty data for pr2_tilt_laser_interface/GetSnapshotResult

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'pr2_tilt_laser_interface/GetSnapshotResult';
[data.Cloud, info.Cloud] = ros.internal.ros.messages.sensor_msgs.pointCloud2;
info.Cloud.MLdataType = 'struct';
info.MessageType = 'pr2_tilt_laser_interface/GetSnapshotResult';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,27);
info.MatPath{1} = 'cloud';
info.MatPath{2} = 'cloud.header';
info.MatPath{3} = 'cloud.header.seq';
info.MatPath{4} = 'cloud.header.stamp';
info.MatPath{5} = 'cloud.header.stamp.sec';
info.MatPath{6} = 'cloud.header.stamp.nsec';
info.MatPath{7} = 'cloud.header.frame_id';
info.MatPath{8} = 'cloud.height';
info.MatPath{9} = 'cloud.width';
info.MatPath{10} = 'cloud.fields';
info.MatPath{11} = 'cloud.fields.INT8';
info.MatPath{12} = 'cloud.fields.UINT8';
info.MatPath{13} = 'cloud.fields.INT16';
info.MatPath{14} = 'cloud.fields.UINT16';
info.MatPath{15} = 'cloud.fields.INT32';
info.MatPath{16} = 'cloud.fields.UINT32';
info.MatPath{17} = 'cloud.fields.FLOAT32';
info.MatPath{18} = 'cloud.fields.FLOAT64';
info.MatPath{19} = 'cloud.fields.name';
info.MatPath{20} = 'cloud.fields.offset';
info.MatPath{21} = 'cloud.fields.datatype';
info.MatPath{22} = 'cloud.fields.count';
info.MatPath{23} = 'cloud.is_bigendian';
info.MatPath{24} = 'cloud.point_step';
info.MatPath{25} = 'cloud.row_step';
info.MatPath{26} = 'cloud.data';
info.MatPath{27} = 'cloud.is_dense';
