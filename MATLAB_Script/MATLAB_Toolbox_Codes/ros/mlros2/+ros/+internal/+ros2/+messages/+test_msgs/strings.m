function [data, info] = strings
%Strings gives an empty data for test_msgs/Strings

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'test_msgs/Strings';
[data.string_value, info.string_value] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
[data.string_value_default1, info.string_value_default1] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0,NaN, 'Hello world!');
[data.string_value_default2, info.string_value_default2] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0,NaN, 'Hello''world!');
[data.string_value_default3, info.string_value_default3] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0,NaN, 'Hello"world!');
[data.string_value_default4, info.string_value_default4] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0,NaN, 'Hello''world!');
[data.string_value_default5, info.string_value_default5] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0,NaN, 'Hello"world!');
[data.STRING_CONST, info.STRING_CONST] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0,'Hello world!',NaN);
[data.bounded_string_value, info.bounded_string_value] = ros.internal.ros2.messages.ros2.char('string',1,22,0);
[data.bounded_string_value_default1, info.bounded_string_value_default1] = ros.internal.ros2.messages.ros2.char('string',1,22,0,NaN, 'Hello world!');
[data.bounded_string_value_default2, info.bounded_string_value_default2] = ros.internal.ros2.messages.ros2.char('string',1,22,0,NaN, 'Hello''world!');
[data.bounded_string_value_default3, info.bounded_string_value_default3] = ros.internal.ros2.messages.ros2.char('string',1,22,0,NaN, 'Hello"world!');
[data.bounded_string_value_default4, info.bounded_string_value_default4] = ros.internal.ros2.messages.ros2.char('string',1,22,0,NaN, 'Hello''world!');
[data.bounded_string_value_default5, info.bounded_string_value_default5] = ros.internal.ros2.messages.ros2.char('string',1,22,0,NaN, 'Hello"world!');
info.MessageType = 'test_msgs/Strings';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,13);
info.MatPath{1} = 'string_value';
info.MatPath{2} = 'string_value_default1';
info.MatPath{3} = 'string_value_default2';
info.MatPath{4} = 'string_value_default3';
info.MatPath{5} = 'string_value_default4';
info.MatPath{6} = 'string_value_default5';
info.MatPath{7} = 'STRING_CONST';
info.MatPath{8} = 'bounded_string_value';
info.MatPath{9} = 'bounded_string_value_default1';
info.MatPath{10} = 'bounded_string_value_default2';
info.MatPath{11} = 'bounded_string_value_default3';
info.MatPath{12} = 'bounded_string_value_default4';
info.MatPath{13} = 'bounded_string_value_default5';
