function [data, info] = people
%People gives an empty data for cob_perception_msgs/People

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'cob_perception_msgs/People';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.People_, info.People_] = ros.internal.ros.messages.cob_perception_msgs.person;
info.People_.MLdataType = 'struct';
info.People_.MaxLen = NaN;
info.People_.MinLen = 0;
data.People_ = data.People_([],1);
info.MessageType = 'cob_perception_msgs/People';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,50);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'people';
info.MatPath{8} = 'people.name';
info.MatPath{9} = 'people.detector';
info.MatPath{10} = 'people.position';
info.MatPath{11} = 'people.position.position';
info.MatPath{12} = 'people.position.position.x';
info.MatPath{13} = 'people.position.position.y';
info.MatPath{14} = 'people.position.position.z';
info.MatPath{15} = 'people.position.orientation';
info.MatPath{16} = 'people.position.orientation.x';
info.MatPath{17} = 'people.position.orientation.y';
info.MatPath{18} = 'people.position.orientation.z';
info.MatPath{19} = 'people.position.orientation.w';
info.MatPath{20} = 'people.velocity';
info.MatPath{21} = 'people.velocity.x';
info.MatPath{22} = 'people.velocity.y';
info.MatPath{23} = 'people.velocity.z';
info.MatPath{24} = 'people.skeleton';
info.MatPath{25} = 'people.skeleton.JOINT_HEAD';
info.MatPath{26} = 'people.skeleton.JOINT_NECK';
info.MatPath{27} = 'people.skeleton.JOINT_LEFT_SHOULDER';
info.MatPath{28} = 'people.skeleton.JOINT_RIGHT_SHOULDER';
info.MatPath{29} = 'people.skeleton.JOINT_LEFT_ELBOW';
info.MatPath{30} = 'people.skeleton.JOINT_RIGHT_ELBOW';
info.MatPath{31} = 'people.skeleton.JOINT_LEFT_HAND';
info.MatPath{32} = 'people.skeleton.JOINT_RIGHT_HAND';
info.MatPath{33} = 'people.skeleton.JOINT_TORSO';
info.MatPath{34} = 'people.skeleton.JOINT_LEFT_HIP';
info.MatPath{35} = 'people.skeleton.JOINT_RIGHT_HIP';
info.MatPath{36} = 'people.skeleton.JOINT_LEFT_KNEE';
info.MatPath{37} = 'people.skeleton.JOINT_RIGHT_KNEE';
info.MatPath{38} = 'people.skeleton.JOINT_LEFT_FOOT';
info.MatPath{39} = 'people.skeleton.JOINT_RIGHT_FOOT';
info.MatPath{40} = 'people.skeleton.JOINT_NUMBER';
info.MatPath{41} = 'people.skeleton.joints';
info.MatPath{42} = 'people.skeleton.joints.position';
info.MatPath{43} = 'people.skeleton.joints.position.x';
info.MatPath{44} = 'people.skeleton.joints.position.y';
info.MatPath{45} = 'people.skeleton.joints.position.z';
info.MatPath{46} = 'people.skeleton.joints.orientation';
info.MatPath{47} = 'people.skeleton.joints.orientation.x';
info.MatPath{48} = 'people.skeleton.joints.orientation.y';
info.MatPath{49} = 'people.skeleton.joints.orientation.z';
info.MatPath{50} = 'people.skeleton.joints.orientation.w';
