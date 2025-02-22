
classdef PR2GripperReleaseCommand < ros.Message
    %PR2GripperReleaseCommand MATLAB implementation of pr2_gripper_sensor_msgs/PR2GripperReleaseCommand
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_gripper_sensor_msgs/PR2GripperReleaseCommand' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'e62b08129864bf301ed0a1335e6158dc' % The MD5 Checksum of the message definition
        PropertyList = { 'Event' } % List of non-constant message properties
        ROSPropertyList = { 'event' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperEventDetectorCommand' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Event
    end
    methods
        function set.Event(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperEventDetectorCommand'};
            validateattributes(val, validClasses, validAttributes, 'PR2GripperReleaseCommand', 'Event')
            obj.Event = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseCommand.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseCommand(strObj);
        end
    end
end
