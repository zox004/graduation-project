function [data, info] = getMapActionResult
%GetMapActionResult gives an empty data for nav_msgs/GetMapActionResult

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'nav_msgs/GetMapActionResult';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Status, info.Status] = ros.internal.ros.messages.actionlib_msgs.goalStatus;
info.Status.MLdataType = 'struct';
[data.Result, info.Result] = ros.internal.ros.messages.nav_msgs.getMapResult;
info.Result.MLdataType = 'struct';
info.MessageType = 'nav_msgs/GetMapActionResult';
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
info.MatPath{7} = 'status';
info.MatPath{8} = 'status.goal_id';
info.MatPath{9} = 'status.goal_id.stamp';
info.MatPath{10} = 'status.goal_id.stamp.sec';
info.MatPath{11} = 'status.goal_id.stamp.nsec';
info.MatPath{12} = 'status.goal_id.id';
info.MatPath{13} = 'status.status';
info.MatPath{14} = 'status.PENDING';
info.MatPath{15} = 'status.ACTIVE';
info.MatPath{16} = 'status.PREEMPTED';
info.MatPath{17} = 'status.SUCCEEDED';
info.MatPath{18} = 'status.ABORTED';
info.MatPath{19} = 'status.REJECTED';
info.MatPath{20} = 'status.PREEMPTING';
info.MatPath{21} = 'status.RECALLING';
info.MatPath{22} = 'status.RECALLED';
info.MatPath{23} = 'status.LOST';
info.MatPath{24} = 'status.text';
info.MatPath{25} = 'result';
info.MatPath{26} = 'result.map';
info.MatPath{27} = 'result.map.header';
info.MatPath{28} = 'result.map.header.seq';
info.MatPath{29} = 'result.map.header.stamp';
info.MatPath{30} = 'result.map.header.stamp.sec';
info.MatPath{31} = 'result.map.header.stamp.nsec';
info.MatPath{32} = 'result.map.header.frame_id';
info.MatPath{33} = 'result.map.info';
info.MatPath{34} = 'result.map.info.map_load_time';
info.MatPath{35} = 'result.map.info.map_load_time.sec';
info.MatPath{36} = 'result.map.info.map_load_time.nsec';
info.MatPath{37} = 'result.map.info.resolution';
info.MatPath{38} = 'result.map.info.width';
info.MatPath{39} = 'result.map.info.height';
info.MatPath{40} = 'result.map.info.origin';
info.MatPath{41} = 'result.map.info.origin.position';
info.MatPath{42} = 'result.map.info.origin.position.x';
info.MatPath{43} = 'result.map.info.origin.position.y';
info.MatPath{44} = 'result.map.info.origin.position.z';
info.MatPath{45} = 'result.map.info.origin.orientation';
info.MatPath{46} = 'result.map.info.origin.orientation.x';
info.MatPath{47} = 'result.map.info.origin.orientation.y';
info.MatPath{48} = 'result.map.info.origin.orientation.z';
info.MatPath{49} = 'result.map.info.origin.orientation.w';
info.MatPath{50} = 'result.map.data';
