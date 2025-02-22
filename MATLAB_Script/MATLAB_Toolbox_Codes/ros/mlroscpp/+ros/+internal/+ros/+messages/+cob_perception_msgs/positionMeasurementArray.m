function [data, info] = positionMeasurementArray
%PositionMeasurementArray gives an empty data for cob_perception_msgs/PositionMeasurementArray

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'cob_perception_msgs/PositionMeasurementArray';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.People, info.People] = ros.internal.ros.messages.cob_perception_msgs.positionMeasurement;
info.People.MLdataType = 'struct';
info.People.MaxLen = NaN;
info.People.MinLen = 0;
data.People = data.People([],1);
[data.Cooccurrence, info.Cooccurrence] = ros.internal.ros.messages.ros.default_type('single',NaN);
info.MessageType = 'cob_perception_msgs/PositionMeasurementArray';
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
info.MatPath{7} = 'people';
info.MatPath{8} = 'people.header';
info.MatPath{9} = 'people.header.seq';
info.MatPath{10} = 'people.header.stamp';
info.MatPath{11} = 'people.header.stamp.sec';
info.MatPath{12} = 'people.header.stamp.nsec';
info.MatPath{13} = 'people.header.frame_id';
info.MatPath{14} = 'people.name';
info.MatPath{15} = 'people.object_id';
info.MatPath{16} = 'people.pos';
info.MatPath{17} = 'people.pos.x';
info.MatPath{18} = 'people.pos.y';
info.MatPath{19} = 'people.pos.z';
info.MatPath{20} = 'people.vel';
info.MatPath{21} = 'people.vel.x';
info.MatPath{22} = 'people.vel.y';
info.MatPath{23} = 'people.vel.z';
info.MatPath{24} = 'people.reliability';
info.MatPath{25} = 'people.covariance';
info.MatPath{26} = 'people.initialization';
info.MatPath{27} = 'cooccurrence';
