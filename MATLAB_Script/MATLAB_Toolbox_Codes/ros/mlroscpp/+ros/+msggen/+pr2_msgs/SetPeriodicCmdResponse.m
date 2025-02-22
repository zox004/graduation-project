
classdef SetPeriodicCmdResponse < ros.Message
    %SetPeriodicCmdResponse MATLAB implementation of pr2_msgs/SetPeriodicCmdResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_msgs/SetPeriodicCmdResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '3888666920054f1ef39d2df7a5d94b02' % The MD5 Checksum of the message definition
        PropertyList = { 'StartTime' } % List of non-constant message properties
        ROSPropertyList = { 'start_time' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msg.Time' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        StartTime
    end
    methods
        function set.StartTime(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.Time'};
            validateattributes(val, validClasses, validAttributes, 'SetPeriodicCmdResponse', 'StartTime')
            obj.StartTime = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_msgs.SetPeriodicCmdResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_msgs.SetPeriodicCmdResponse(strObj);
        end
    end
end
