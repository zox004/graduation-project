function [data, info] = state
%State gives an empty data for lifecycle_msgs/State

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'lifecycle_msgs/State';
[data.PRIMARY_STATE_UNKNOWN, info.PRIMARY_STATE_UNKNOWN] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 0, [NaN]);
[data.PRIMARY_STATE_UNCONFIGURED, info.PRIMARY_STATE_UNCONFIGURED] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 1, [NaN]);
[data.PRIMARY_STATE_INACTIVE, info.PRIMARY_STATE_INACTIVE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 2, [NaN]);
[data.PRIMARY_STATE_ACTIVE, info.PRIMARY_STATE_ACTIVE] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 3, [NaN]);
[data.PRIMARY_STATE_FINALIZED, info.PRIMARY_STATE_FINALIZED] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 4, [NaN]);
[data.TRANSITION_STATE_CONFIGURING, info.TRANSITION_STATE_CONFIGURING] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 10, [NaN]);
[data.TRANSITION_STATE_CLEANINGUP, info.TRANSITION_STATE_CLEANINGUP] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 11, [NaN]);
[data.TRANSITION_STATE_SHUTTINGDOWN, info.TRANSITION_STATE_SHUTTINGDOWN] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 12, [NaN]);
[data.TRANSITION_STATE_ACTIVATING, info.TRANSITION_STATE_ACTIVATING] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 13, [NaN]);
[data.TRANSITION_STATE_DEACTIVATING, info.TRANSITION_STATE_DEACTIVATING] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 14, [NaN]);
[data.TRANSITION_STATE_ERRORPROCESSING, info.TRANSITION_STATE_ERRORPROCESSING] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0, 15, [NaN]);
[data.id, info.id] = ros.internal.ros2.messages.ros2.default_type('uint8',1,0);
[data.label, info.label] = ros.internal.ros2.messages.ros2.char('string',1,NaN,0);
info.MessageType = 'lifecycle_msgs/State';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,13);
info.MatPath{1} = 'PRIMARY_STATE_UNKNOWN';
info.MatPath{2} = 'PRIMARY_STATE_UNCONFIGURED';
info.MatPath{3} = 'PRIMARY_STATE_INACTIVE';
info.MatPath{4} = 'PRIMARY_STATE_ACTIVE';
info.MatPath{5} = 'PRIMARY_STATE_FINALIZED';
info.MatPath{6} = 'TRANSITION_STATE_CONFIGURING';
info.MatPath{7} = 'TRANSITION_STATE_CLEANINGUP';
info.MatPath{8} = 'TRANSITION_STATE_SHUTTINGDOWN';
info.MatPath{9} = 'TRANSITION_STATE_ACTIVATING';
info.MatPath{10} = 'TRANSITION_STATE_DEACTIVATING';
info.MatPath{11} = 'TRANSITION_STATE_ERRORPROCESSING';
info.MatPath{12} = 'id';
info.MatPath{13} = 'label';
