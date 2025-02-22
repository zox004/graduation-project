function [data, info] = tableArray
%TableArray gives an empty data for object_recognition_msgs/TableArray

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'object_recognition_msgs/TableArray';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Tables, info.Tables] = ros.internal.ros.messages.object_recognition_msgs.table;
info.Tables.MLdataType = 'struct';
info.Tables.MaxLen = NaN;
info.Tables.MinLen = 0;
data.Tables = data.Tables([],1);
info.MessageType = 'object_recognition_msgs/TableArray';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,27);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'tables';
info.MatPath{8} = 'tables.header';
info.MatPath{9} = 'tables.header.seq';
info.MatPath{10} = 'tables.header.stamp';
info.MatPath{11} = 'tables.header.stamp.sec';
info.MatPath{12} = 'tables.header.stamp.nsec';
info.MatPath{13} = 'tables.header.frame_id';
info.MatPath{14} = 'tables.pose';
info.MatPath{15} = 'tables.pose.position';
info.MatPath{16} = 'tables.pose.position.x';
info.MatPath{17} = 'tables.pose.position.y';
info.MatPath{18} = 'tables.pose.position.z';
info.MatPath{19} = 'tables.pose.orientation';
info.MatPath{20} = 'tables.pose.orientation.x';
info.MatPath{21} = 'tables.pose.orientation.y';
info.MatPath{22} = 'tables.pose.orientation.z';
info.MatPath{23} = 'tables.pose.orientation.w';
info.MatPath{24} = 'tables.convex_hull';
info.MatPath{25} = 'tables.convex_hull.x';
info.MatPath{26} = 'tables.convex_hull.y';
info.MatPath{27} = 'tables.convex_hull.z';
