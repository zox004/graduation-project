function [data, info] = pointCloud2Update
%PointCloud2Update gives an empty data for map_msgs/PointCloud2Update

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'map_msgs/PointCloud2Update';
[data.ADD, info.ADD] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 0, [NaN]);
[data.DELETE, info.DELETE] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0, 1, [NaN]);
[data.header, info.header] = ros.internal.ros2.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.type, info.type] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.points, info.points] = ros.internal.ros2.messages.sensor_msgs.pointCloud2;
info.points.MLdataType = 'struct';
info.MessageType = 'map_msgs/PointCloud2Update';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,34);
info.MatPath{1} = 'ADD';
info.MatPath{2} = 'DELETE';
info.MatPath{3} = 'header';
info.MatPath{4} = 'header.stamp';
info.MatPath{5} = 'header.stamp.sec';
info.MatPath{6} = 'header.stamp.nanosec';
info.MatPath{7} = 'header.frame_id';
info.MatPath{8} = 'type';
info.MatPath{9} = 'points';
info.MatPath{10} = 'points.header';
info.MatPath{11} = 'points.header.stamp';
info.MatPath{12} = 'points.header.stamp.sec';
info.MatPath{13} = 'points.header.stamp.nanosec';
info.MatPath{14} = 'points.header.frame_id';
info.MatPath{15} = 'points.height';
info.MatPath{16} = 'points.width';
info.MatPath{17} = 'points.fields';
info.MatPath{18} = 'points.fields.INT8';
info.MatPath{19} = 'points.fields.UINT8';
info.MatPath{20} = 'points.fields.INT16';
info.MatPath{21} = 'points.fields.UINT16';
info.MatPath{22} = 'points.fields.INT32';
info.MatPath{23} = 'points.fields.UINT32';
info.MatPath{24} = 'points.fields.FLOAT32';
info.MatPath{25} = 'points.fields.FLOAT64';
info.MatPath{26} = 'points.fields.name';
info.MatPath{27} = 'points.fields.offset';
info.MatPath{28} = 'points.fields.datatype';
info.MatPath{29} = 'points.fields.count';
info.MatPath{30} = 'points.is_bigendian';
info.MatPath{31} = 'points.point_step';
info.MatPath{32} = 'points.row_step';
info.MatPath{33} = 'points.data';
info.MatPath{34} = 'points.is_dense';
