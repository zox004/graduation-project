function [data, info] = sparseImage
%SparseImage gives an empty data for jsk_perception/SparseImage

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'jsk_perception/SparseImage';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Width, info.Width] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.Height, info.Height] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.Data16, info.Data16] = ros.internal.ros.messages.ros.default_type('uint16',NaN);
[data.Data32, info.Data32] = ros.internal.ros.messages.ros.default_type('uint32',NaN);
info.MessageType = 'jsk_perception/SparseImage';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,10);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'width';
info.MatPath{8} = 'height';
info.MatPath{9} = 'data16';
info.MatPath{10} = 'data32';
