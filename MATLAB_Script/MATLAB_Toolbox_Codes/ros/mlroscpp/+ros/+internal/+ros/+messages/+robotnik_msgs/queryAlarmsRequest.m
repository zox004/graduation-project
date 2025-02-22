function [data, info] = queryAlarmsRequest
%QueryAlarms gives an empty data for robotnik_msgs/QueryAlarmsRequest

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'robotnik_msgs/QueryAlarmsRequest';
[data.TYPEQUERYALL, info.TYPEQUERYALL] = ros.internal.ros.messages.ros.char('string',0);
[data.TYPEQUERYALL, info.TYPEQUERYALL] = ros.internal.ros.messages.ros.char('string',1,'ALL');
[data.TYPEQUERYTOP, info.TYPEQUERYTOP] = ros.internal.ros.messages.ros.char('string',0);
[data.TYPEQUERYTOP, info.TYPEQUERYTOP] = ros.internal.ros.messages.ros.char('string',1,'TOP');
[data.TYPEBETWEENDATE, info.TYPEBETWEENDATE] = ros.internal.ros.messages.ros.char('string',0);
[data.TYPEBETWEENDATE, info.TYPEBETWEENDATE] = ros.internal.ros.messages.ros.char('string',1,'BETWEEN_DATE');
[data.TYPETOPBETWEENDATE, info.TYPETOPBETWEENDATE] = ros.internal.ros.messages.ros.char('string',0);
[data.TYPETOPBETWEENDATE, info.TYPETOPBETWEENDATE] = ros.internal.ros.messages.ros.char('string',1,'TOP_BETWEEN_DATE');
[data.FILTERTYPENOTHING, info.FILTERTYPENOTHING] = ros.internal.ros.messages.ros.char('string',0);
[data.FILTERTYPENOTHING, info.FILTERTYPENOTHING] = ros.internal.ros.messages.ros.char('string',1,'NOTHING');
[data.FILTERTYPEEVENT, info.FILTERTYPEEVENT] = ros.internal.ros.messages.ros.char('string',0);
[data.FILTERTYPEEVENT, info.FILTERTYPEEVENT] = ros.internal.ros.messages.ros.char('string',1,'EVENT');
[data.FILTERTYPEALARM, info.FILTERTYPEALARM] = ros.internal.ros.messages.ros.char('string',0);
[data.FILTERTYPEALARM, info.FILTERTYPEALARM] = ros.internal.ros.messages.ros.char('string',1,'ALARM');
[data.FILTERTYPEERROR, info.FILTERTYPEERROR] = ros.internal.ros.messages.ros.char('string',0);
[data.FILTERTYPEERROR, info.FILTERTYPEERROR] = ros.internal.ros.messages.ros.char('string',1,'ERROR');
[data.TypeQuery, info.TypeQuery] = ros.internal.ros.messages.ros.char('string',0);
[data.StartDate, info.StartDate] = ros.internal.ros.messages.ros.char('string',0);
[data.EndDate, info.EndDate] = ros.internal.ros.messages.ros.char('string',0);
[data.Top, info.Top] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.FilterType, info.FilterType] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'robotnik_msgs/QueryAlarmsRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,13);
info.MatPath{1} = 'TYPE_QUERY_ALL';
info.MatPath{2} = 'TYPE_QUERY_TOP';
info.MatPath{3} = 'TYPE_BETWEEN_DATE';
info.MatPath{4} = 'TYPE_TOP_BETWEEN_DATE';
info.MatPath{5} = 'FILTER_TYPE_NOTHING';
info.MatPath{6} = 'FILTER_TYPE_EVENT';
info.MatPath{7} = 'FILTER_TYPE_ALARM';
info.MatPath{8} = 'FILTER_TYPE_ERROR';
info.MatPath{9} = 'type_query';
info.MatPath{10} = 'start_date';
info.MatPath{11} = 'end_date';
info.MatPath{12} = 'top';
info.MatPath{13} = 'filter_type';
