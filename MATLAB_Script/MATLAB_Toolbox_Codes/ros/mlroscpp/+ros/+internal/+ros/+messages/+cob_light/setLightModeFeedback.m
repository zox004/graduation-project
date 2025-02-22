function [data, info] = setLightModeFeedback
%SetLightModeFeedback gives an empty data for cob_light/SetLightModeFeedback

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'cob_light/SetLightModeFeedback';
[data.ActiveMode, info.ActiveMode] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.ActivePriority, info.ActivePriority] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'cob_light/SetLightModeFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'active_mode';
info.MatPath{2} = 'active_priority';
