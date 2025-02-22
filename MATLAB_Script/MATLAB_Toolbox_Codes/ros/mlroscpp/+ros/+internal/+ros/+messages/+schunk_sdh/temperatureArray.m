function [data, info] = temperatureArray
%TemperatureArray gives an empty data for schunk_sdh/TemperatureArray

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'schunk_sdh/TemperatureArray';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',NaN);
[data.Temperature, info.Temperature] = ros.internal.ros.messages.ros.default_type('double',NaN);
info.MessageType = 'schunk_sdh/TemperatureArray';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'name';
info.MatPath{8} = 'temperature';
