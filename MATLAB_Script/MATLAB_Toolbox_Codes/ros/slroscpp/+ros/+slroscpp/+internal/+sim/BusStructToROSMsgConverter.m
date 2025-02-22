classdef BusStructToROSMsgConverter < ros.slros.internal.sim.BusStructToROSMsgConverter
    %This class is for internal use only. It may be removed in the future.
    
    %  BusStructToROSMsgConverter(MSGTYPE, MODEL) creates an object that
    %  converts a Simulink bus struct, corresponding to a ROS2 message type
    %  MSGTYPE, to a MATLAB ROS message. This conversion uses the maximum
    %  sizes of variable-length properties that is specific to MODEL.
    %
    %  Example:
    %   msg2bus = ros.slroscpp.internal.sim.ROSMsgToBusStructConverter('nav_msgs/Path', modelName);
    %   bus2msg = ros.slroscpp.internal.sim.BusStructToROSMsgConverter('nav_msgs/Path', modelName);
    %   busstruct = msg2bus.convert(pathMsg);
    %   msg2 = bus2msg.convert(busstruct); % convert back
    %
    % See also: sim.ROSMsgToBusStructConverter
    
    %   Copyright 2019-2020 The MathWorks, Inc.
    methods
        function obj = BusStructToROSMsgConverter(msgtype, model)
            obj@ros.slros.internal.sim.BusStructToROSMsgConverter(msgtype, model, ...
                'BusUtilityObject', ros.slroscpp.internal.bus.Util);
        end
    end
end
