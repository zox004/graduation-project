
classdef ChangeControlTypeRequest < ros.Message
    %ChangeControlTypeRequest MATLAB implementation of sr_robot_msgs/ChangeControlTypeRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'sr_robot_msgs/ChangeControlTypeRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '36741247c0d6032654e8e0ef56e7670f' % The MD5 Checksum of the message definition
        PropertyList = { 'ControlType' } % List of non-constant message properties
        ROSPropertyList = { 'control_type' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.sr_robot_msgs.ControlType' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        ControlType
    end
    methods
        function set.ControlType(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.sr_robot_msgs.ControlType'};
            validateattributes(val, validClasses, validAttributes, 'ChangeControlTypeRequest', 'ControlType')
            obj.ControlType = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.sr_robot_msgs.ChangeControlTypeRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.sr_robot_msgs.ChangeControlTypeRequest(strObj);
        end
    end
end
