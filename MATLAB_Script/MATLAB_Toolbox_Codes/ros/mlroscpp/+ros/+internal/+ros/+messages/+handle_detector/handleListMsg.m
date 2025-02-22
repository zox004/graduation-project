function [data, info] = handleListMsg
%HandleListMsg gives an empty data for handle_detector/HandleListMsg

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'handle_detector/HandleListMsg';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Handles, info.Handles] = ros.internal.ros.messages.handle_detector.cylinderArrayMsg;
info.Handles.MLdataType = 'struct';
info.Handles.MaxLen = NaN;
info.Handles.MinLen = 0;
data.Handles = data.Handles([],1);
info.MessageType = 'handle_detector/HandleListMsg';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,34);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'handles';
info.MatPath{8} = 'handles.header';
info.MatPath{9} = 'handles.header.seq';
info.MatPath{10} = 'handles.header.stamp';
info.MatPath{11} = 'handles.header.stamp.sec';
info.MatPath{12} = 'handles.header.stamp.nsec';
info.MatPath{13} = 'handles.header.frame_id';
info.MatPath{14} = 'handles.cylinders';
info.MatPath{15} = 'handles.cylinders.pose';
info.MatPath{16} = 'handles.cylinders.pose.position';
info.MatPath{17} = 'handles.cylinders.pose.position.x';
info.MatPath{18} = 'handles.cylinders.pose.position.y';
info.MatPath{19} = 'handles.cylinders.pose.position.z';
info.MatPath{20} = 'handles.cylinders.pose.orientation';
info.MatPath{21} = 'handles.cylinders.pose.orientation.x';
info.MatPath{22} = 'handles.cylinders.pose.orientation.y';
info.MatPath{23} = 'handles.cylinders.pose.orientation.z';
info.MatPath{24} = 'handles.cylinders.pose.orientation.w';
info.MatPath{25} = 'handles.cylinders.radius';
info.MatPath{26} = 'handles.cylinders.extent';
info.MatPath{27} = 'handles.cylinders.axis';
info.MatPath{28} = 'handles.cylinders.axis.x';
info.MatPath{29} = 'handles.cylinders.axis.y';
info.MatPath{30} = 'handles.cylinders.axis.z';
info.MatPath{31} = 'handles.cylinders.normal';
info.MatPath{32} = 'handles.cylinders.normal.x';
info.MatPath{33} = 'handles.cylinders.normal.y';
info.MatPath{34} = 'handles.cylinders.normal.z';
