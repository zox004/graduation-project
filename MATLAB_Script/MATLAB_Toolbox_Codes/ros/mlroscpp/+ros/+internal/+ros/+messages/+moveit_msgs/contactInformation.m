function [data, info] = contactInformation
%ContactInformation gives an empty data for moveit_msgs/ContactInformation

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'moveit_msgs/ContactInformation';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Position, info.Position] = ros.internal.ros.messages.geometry_msgs.point;
info.Position.MLdataType = 'struct';
[data.Normal, info.Normal] = ros.internal.ros.messages.geometry_msgs.vector3;
info.Normal.MLdataType = 'struct';
[data.Depth, info.Depth] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ContactBody1, info.ContactBody1] = ros.internal.ros.messages.ros.char('string',0);
[data.BodyType1, info.BodyType1] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.ContactBody2, info.ContactBody2] = ros.internal.ros.messages.ros.char('string',0);
[data.BodyType2, info.BodyType2] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.ROBOTLINK, info.ROBOTLINK] = ros.internal.ros.messages.ros.default_type('uint32',1, 0);
[data.WORLDOBJECT, info.WORLDOBJECT] = ros.internal.ros.messages.ros.default_type('uint32',1, 1);
[data.ROBOTATTACHED, info.ROBOTATTACHED] = ros.internal.ros.messages.ros.default_type('uint32',1, 2);
info.MessageType = 'moveit_msgs/ContactInformation';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,22);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'position';
info.MatPath{8} = 'position.x';
info.MatPath{9} = 'position.y';
info.MatPath{10} = 'position.z';
info.MatPath{11} = 'normal';
info.MatPath{12} = 'normal.x';
info.MatPath{13} = 'normal.y';
info.MatPath{14} = 'normal.z';
info.MatPath{15} = 'depth';
info.MatPath{16} = 'contact_body_1';
info.MatPath{17} = 'body_type_1';
info.MatPath{18} = 'contact_body_2';
info.MatPath{19} = 'body_type_2';
info.MatPath{20} = 'ROBOT_LINK';
info.MatPath{21} = 'WORLD_OBJECT';
info.MatPath{22} = 'ROBOT_ATTACHED';
