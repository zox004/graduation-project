function [data, info] = discoveredService
%DiscoveredService gives an empty data for zeroconf_msgs/DiscoveredService

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'zeroconf_msgs/DiscoveredService';
[data.Name, info.Name] = ros.internal.ros.messages.ros.char('string',0);
[data.Type, info.Type] = ros.internal.ros.messages.ros.char('string',0);
[data.Domain, info.Domain] = ros.internal.ros.messages.ros.char('string',0);
[data.Description, info.Description] = ros.internal.ros.messages.ros.char('string',0);
[data.Hostname, info.Hostname] = ros.internal.ros.messages.ros.char('string',0);
[data.Ipv4Addresses, info.Ipv4Addresses] = ros.internal.ros.messages.ros.char('string',NaN);
[data.Ipv6Addresses, info.Ipv6Addresses] = ros.internal.ros.messages.ros.char('string',NaN);
[data.Port, info.Port] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.Cookie, info.Cookie] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.IsLocal, info.IsLocal] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.OurOwn, info.OurOwn] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.WideArea, info.WideArea] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.Multicast, info.Multicast] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.Cached, info.Cached] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'zeroconf_msgs/DiscoveredService';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,14);
info.MatPath{1} = 'name';
info.MatPath{2} = 'type';
info.MatPath{3} = 'domain';
info.MatPath{4} = 'description';
info.MatPath{5} = 'hostname';
info.MatPath{6} = 'ipv4_addresses';
info.MatPath{7} = 'ipv6_addresses';
info.MatPath{8} = 'port';
info.MatPath{9} = 'cookie';
info.MatPath{10} = 'is_local';
info.MatPath{11} = 'our_own';
info.MatPath{12} = 'wide_area';
info.MatPath{13} = 'multicast';
info.MatPath{14} = 'cached';
