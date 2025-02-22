
classdef PR2GripperReleaseAction < ros.Message
    %PR2GripperReleaseAction MATLAB implementation of pr2_gripper_sensor_msgs/PR2GripperReleaseAction
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_gripper_sensor_msgs/PR2GripperReleaseAction' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c3c9b6394f2bb7d0d9e5ed002d9a759a' % The MD5 Checksum of the message definition
        PropertyList = { 'ActionGoal' 'ActionResult' 'ActionFeedback' } % List of non-constant message properties
        ROSPropertyList = { 'action_goal' 'action_result' 'action_feedback' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseActionGoal' ...
            'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseActionResult' ...
            'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseActionFeedback' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        ActionGoal
        ActionResult
        ActionFeedback
    end
    methods
        function set.ActionGoal(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseActionGoal'};
            validateattributes(val, validClasses, validAttributes, 'PR2GripperReleaseAction', 'ActionGoal')
            obj.ActionGoal = val;
        end
        function set.ActionResult(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseActionResult'};
            validateattributes(val, validClasses, validAttributes, 'PR2GripperReleaseAction', 'ActionResult')
            obj.ActionResult = val;
        end
        function set.ActionFeedback(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseActionFeedback'};
            validateattributes(val, validClasses, validAttributes, 'PR2GripperReleaseAction', 'ActionFeedback')
            obj.ActionFeedback = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseAction.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_gripper_sensor_msgs.PR2GripperReleaseAction(strObj);
        end
    end
end
