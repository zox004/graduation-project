function [data, info] = mapMetaData
%MapMetaData gives an empty data for nav_msgs/MapMetaData

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'nav_msgs/MapMetaData';
[data.map_load_time, info.map_load_time] = ros.internal.ros2.messages.builtin_interfaces.time;
info.map_load_time.MLdataType = 'struct';
[data.resolution, info.resolution] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.width, info.width] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.height, info.height] = ros.internal.ros2.messages.ros2.default_type('uint32',1,0);
[data.origin, info.origin] = ros.internal.ros2.messages.geometry_msgs.pose;
info.origin.MLdataType = 'struct';
info.MessageType = 'nav_msgs/MapMetaData';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,16);
info.MatPath{1} = 'map_load_time';
info.MatPath{2} = 'map_load_time.sec';
info.MatPath{3} = 'map_load_time.nanosec';
info.MatPath{4} = 'resolution';
info.MatPath{5} = 'width';
info.MatPath{6} = 'height';
info.MatPath{7} = 'origin';
info.MatPath{8} = 'origin.position';
info.MatPath{9} = 'origin.position.x';
info.MatPath{10} = 'origin.position.y';
info.MatPath{11} = 'origin.position.z';
info.MatPath{12} = 'origin.orientation';
info.MatPath{13} = 'origin.orientation.x';
info.MatPath{14} = 'origin.orientation.y';
info.MatPath{15} = 'origin.orientation.z';
info.MatPath{16} = 'origin.orientation.w';
