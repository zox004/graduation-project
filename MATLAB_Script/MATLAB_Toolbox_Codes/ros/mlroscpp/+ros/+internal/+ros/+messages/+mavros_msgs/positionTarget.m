function [data, info] = positionTarget
%PositionTarget gives an empty data for mavros_msgs/PositionTarget

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'mavros_msgs/PositionTarget';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.CoordinateFrame, info.CoordinateFrame] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.FRAMELOCALNED, info.FRAMELOCALNED] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.FRAMELOCALOFFSETNED, info.FRAMELOCALOFFSETNED] = ros.internal.ros.messages.ros.default_type('uint8',1, 7);
[data.FRAMEBODYNED, info.FRAMEBODYNED] = ros.internal.ros.messages.ros.default_type('uint8',1, 8);
[data.FRAMEBODYOFFSETNED, info.FRAMEBODYOFFSETNED] = ros.internal.ros.messages.ros.default_type('uint8',1, 9);
[data.TypeMask, info.TypeMask] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.IGNOREPX, info.IGNOREPX] = ros.internal.ros.messages.ros.default_type('uint16',1, 1);
[data.IGNOREPY, info.IGNOREPY] = ros.internal.ros.messages.ros.default_type('uint16',1, 2);
[data.IGNOREPZ, info.IGNOREPZ] = ros.internal.ros.messages.ros.default_type('uint16',1, 4);
[data.IGNOREVX, info.IGNOREVX] = ros.internal.ros.messages.ros.default_type('uint16',1, 8);
[data.IGNOREVY, info.IGNOREVY] = ros.internal.ros.messages.ros.default_type('uint16',1, 16);
[data.IGNOREVZ, info.IGNOREVZ] = ros.internal.ros.messages.ros.default_type('uint16',1, 32);
[data.IGNOREAFX, info.IGNOREAFX] = ros.internal.ros.messages.ros.default_type('uint16',1, 64);
[data.IGNOREAFY, info.IGNOREAFY] = ros.internal.ros.messages.ros.default_type('uint16',1, 128);
[data.IGNOREAFZ, info.IGNOREAFZ] = ros.internal.ros.messages.ros.default_type('uint16',1, 256);
[data.FORCE, info.FORCE] = ros.internal.ros.messages.ros.default_type('uint16',1, 512);
[data.IGNOREYAW, info.IGNOREYAW] = ros.internal.ros.messages.ros.default_type('uint16',1, 1024);
[data.IGNOREYAWRATE, info.IGNOREYAWRATE] = ros.internal.ros.messages.ros.default_type('uint16',1, 2048);
[data.Position, info.Position] = ros.internal.ros.messages.geometry_msgs.point;
info.Position.MLdataType = 'struct';
[data.Velocity, info.Velocity] = ros.internal.ros.messages.geometry_msgs.vector3;
info.Velocity.MLdataType = 'struct';
[data.AccelerationOrForce, info.AccelerationOrForce] = ros.internal.ros.messages.geometry_msgs.vector3;
info.AccelerationOrForce.MLdataType = 'struct';
[data.Yaw, info.Yaw] = ros.internal.ros.messages.ros.default_type('single',1);
[data.YawRate, info.YawRate] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'mavros_msgs/PositionTarget';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,38);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'coordinate_frame';
info.MatPath{8} = 'FRAME_LOCAL_NED';
info.MatPath{9} = 'FRAME_LOCAL_OFFSET_NED';
info.MatPath{10} = 'FRAME_BODY_NED';
info.MatPath{11} = 'FRAME_BODY_OFFSET_NED';
info.MatPath{12} = 'type_mask';
info.MatPath{13} = 'IGNORE_PX';
info.MatPath{14} = 'IGNORE_PY';
info.MatPath{15} = 'IGNORE_PZ';
info.MatPath{16} = 'IGNORE_VX';
info.MatPath{17} = 'IGNORE_VY';
info.MatPath{18} = 'IGNORE_VZ';
info.MatPath{19} = 'IGNORE_AFX';
info.MatPath{20} = 'IGNORE_AFY';
info.MatPath{21} = 'IGNORE_AFZ';
info.MatPath{22} = 'FORCE';
info.MatPath{23} = 'IGNORE_YAW';
info.MatPath{24} = 'IGNORE_YAW_RATE';
info.MatPath{25} = 'position';
info.MatPath{26} = 'position.x';
info.MatPath{27} = 'position.y';
info.MatPath{28} = 'position.z';
info.MatPath{29} = 'velocity';
info.MatPath{30} = 'velocity.x';
info.MatPath{31} = 'velocity.y';
info.MatPath{32} = 'velocity.z';
info.MatPath{33} = 'acceleration_or_force';
info.MatPath{34} = 'acceleration_or_force.x';
info.MatPath{35} = 'acceleration_or_force.y';
info.MatPath{36} = 'acceleration_or_force.z';
info.MatPath{37} = 'yaw';
info.MatPath{38} = 'yaw_rate';
