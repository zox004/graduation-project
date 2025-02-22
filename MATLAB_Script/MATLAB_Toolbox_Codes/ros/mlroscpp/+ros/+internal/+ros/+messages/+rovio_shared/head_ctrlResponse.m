function [data, info] = head_ctrlResponse
%head_ctrl gives an empty data for rovio_shared/head_ctrlResponse

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'rovio_shared/head_ctrlResponse';
[data.SUCCESS, info.SUCCESS] = ros.internal.ros.messages.ros.default_type('int8',1, 0);
[data.FAILURE, info.FAILURE] = ros.internal.ros.messages.ros.default_type('int8',1, 1);
[data.ROBOTBUSY, info.ROBOTBUSY] = ros.internal.ros.messages.ros.default_type('int8',1, 2);
[data.FEATURENOTIMPLEMENTED, info.FEATURENOTIMPLEMENTED] = ros.internal.ros.messages.ros.default_type('int8',1, 3);
[data.UNKNOWNCGIACTION, info.UNKNOWNCGIACTION] = ros.internal.ros.messages.ros.default_type('int8',1, 4);
[data.NONSSIGNAL, info.NONSSIGNAL] = ros.internal.ros.messages.ros.default_type('int8',1, 5);
[data.NOEMPTYPATHAVAILABLE, info.NOEMPTYPATHAVAILABLE] = ros.internal.ros.messages.ros.default_type('int8',1, 6);
[data.FAILEDTOREADPATH, info.FAILEDTOREADPATH] = ros.internal.ros.messages.ros.default_type('int8',1, 7);
[data.PATHBASEADDRESSNOTINITIALIZED, info.PATHBASEADDRESSNOTINITIALIZED] = ros.internal.ros.messages.ros.default_type('int8',1, 8);
[data.PATHNOTFOUND, info.PATHNOTFOUND] = ros.internal.ros.messages.ros.default_type('int8',1, 9);
[data.PATHNAMENOTSPECIFIED, info.PATHNAMENOTSPECIFIED] = ros.internal.ros.messages.ros.default_type('int8',1, 10);
[data.NOTRECORDINGPATH, info.NOTRECORDINGPATH] = ros.internal.ros.messages.ros.default_type('int8',1, 11);
[data.FLASHNOTINITIALIZED, info.FLASHNOTINITIALIZED] = ros.internal.ros.messages.ros.default_type('int8',1, 12);
[data.FAILEDTODELETEPATH, info.FAILEDTODELETEPATH] = ros.internal.ros.messages.ros.default_type('int8',1, 13);
[data.FAILEDTOREADFROMFLASH, info.FAILEDTOREADFROMFLASH] = ros.internal.ros.messages.ros.default_type('int8',1, 14);
[data.FAILEDTOWRITETOFLASH, info.FAILEDTOWRITETOFLASH] = ros.internal.ros.messages.ros.default_type('int8',1, 15);
[data.FLASHNOTREADY, info.FLASHNOTREADY] = ros.internal.ros.messages.ros.default_type('int8',1, 16);
[data.NOMEMORYAVAILABLE, info.NOMEMORYAVAILABLE] = ros.internal.ros.messages.ros.default_type('int8',1, 17);
[data.NOMCUPORTAVAILABLE, info.NOMCUPORTAVAILABLE] = ros.internal.ros.messages.ros.default_type('int8',1, 18);
[data.NONSPORTAVAILABLE, info.NONSPORTAVAILABLE] = ros.internal.ros.messages.ros.default_type('int8',1, 19);
[data.NSPACKETCHECKSUMERROR, info.NSPACKETCHECKSUMERROR] = ros.internal.ros.messages.ros.default_type('int8',1, 20);
[data.NSUARTREADERROR, info.NSUARTREADERROR] = ros.internal.ros.messages.ros.default_type('int8',1, 21);
[data.PARAMETEROUTOFRANGE, info.PARAMETEROUTOFRANGE] = ros.internal.ros.messages.ros.default_type('int8',1, 22);
[data.NOPARAMETER, info.NOPARAMETER] = ros.internal.ros.messages.ros.default_type('int8',1, 23);
[data.Response, info.Response] = ros.internal.ros.messages.ros.default_type('int8',1);
info.MessageType = 'rovio_shared/head_ctrlResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,25);
info.MatPath{1} = 'SUCCESS';
info.MatPath{2} = 'FAILURE';
info.MatPath{3} = 'ROBOT_BUSY';
info.MatPath{4} = 'FEATURE_NOT_IMPLEMENTED';
info.MatPath{5} = 'UNKNOWN_CGI_ACTION';
info.MatPath{6} = 'NO_NS_SIGNAL';
info.MatPath{7} = 'NO_EMPTY_PATH_AVAILABLE';
info.MatPath{8} = 'FAILED_TO_READ_PATH';
info.MatPath{9} = 'PATH_BASEADDRESS_NOT_INITIALIZED';
info.MatPath{10} = 'PATH_NOT_FOUND';
info.MatPath{11} = 'PATH_NAME_NOT_SPECIFIED';
info.MatPath{12} = 'NOT_RECORDING_PATH';
info.MatPath{13} = 'FLASH_NOT_INITIALIZED';
info.MatPath{14} = 'FAILED_TO_DELETE_PATH';
info.MatPath{15} = 'FAILED_TO_READ_FROM_FLASH';
info.MatPath{16} = 'FAILED_TO_WRITE_TO_FLASH';
info.MatPath{17} = 'FLASH_NOT_READY';
info.MatPath{18} = 'NO_MEMORY_AVAILABLE';
info.MatPath{19} = 'NO_MCU_PORT_AVAILABLE';
info.MatPath{20} = 'NO_NS_PORT_AVAILABLE';
info.MatPath{21} = 'NS_PACKET_CHECKSUM_ERROR';
info.MatPath{22} = 'NS_UART_READ_ERROR';
info.MatPath{23} = 'PARAMETER_OUTOFRANGE';
info.MatPath{24} = 'NO_PARAMETER';
info.MatPath{25} = 'response';
