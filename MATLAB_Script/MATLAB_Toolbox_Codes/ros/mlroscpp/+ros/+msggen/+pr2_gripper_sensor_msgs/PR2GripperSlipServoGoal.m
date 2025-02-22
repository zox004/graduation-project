
classdef PR2GripperSlipServoGoal < ros.Message
    %PR2GripperSlipServoGoal MATLAB implementation of pr2_gripper_sensor_msgs/PR2GripperSlipServoGoal
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_gripper_sensor_msgs/PR2GripperSlipServoGoal' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'bf76e656d304158c04ab279db7cefc85' % The MD5 Checksum of the message definition
        PropertyList = { 'Command' } % List of non-constant message properties
        ROSPropertyList = { 'command' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperSlipServoCommand' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Command
    end
    methods
        function set.Command(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperSlipServoCommand'};
            validateattributes(val, validClasses, validAttributes, 'PR2GripperSlipServoGoal', 'Command')
            obj.Command = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_gripper_sensor_msgs.PR2GripperSlipServoGoal.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_gripper_sensor_msgs.PR2GripperSlipServoGoal(strObj);
        end
    end
end
