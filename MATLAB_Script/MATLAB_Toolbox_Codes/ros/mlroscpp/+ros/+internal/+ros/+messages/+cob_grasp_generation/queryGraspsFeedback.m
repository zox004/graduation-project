function [data, info] = queryGraspsFeedback
%QueryGraspsFeedback gives an empty data for cob_grasp_generation/QueryGraspsFeedback

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'cob_grasp_generation/QueryGraspsFeedback';
[data.Status, info.Status] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'cob_grasp_generation/QueryGraspsFeedback';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'status';
