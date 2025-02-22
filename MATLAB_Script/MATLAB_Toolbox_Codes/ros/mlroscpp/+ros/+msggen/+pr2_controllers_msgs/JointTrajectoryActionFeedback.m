
classdef JointTrajectoryActionFeedback < ros.Message
    %JointTrajectoryActionFeedback MATLAB implementation of pr2_controllers_msgs/JointTrajectoryActionFeedback
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_controllers_msgs/JointTrajectoryActionFeedback' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'aae20e09065c3809e8a8e87c4c8953fd' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Status' 'Feedback' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'status' 'feedback' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.actionlib_msgs.GoalStatus' ...
            'ros.msggen.pr2_controllers_msgs.JointTrajectoryFeedback' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Status
        Feedback
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'JointTrajectoryActionFeedback', 'Header')
            obj.Header = val;
        end
        function set.Status(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.actionlib_msgs.GoalStatus'};
            validateattributes(val, validClasses, validAttributes, 'JointTrajectoryActionFeedback', 'Status')
            obj.Status = val;
        end
        function set.Feedback(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.pr2_controllers_msgs.JointTrajectoryFeedback'};
            validateattributes(val, validClasses, validAttributes, 'JointTrajectoryActionFeedback', 'Feedback')
            obj.Feedback = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_controllers_msgs.JointTrajectoryActionFeedback.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_controllers_msgs.JointTrajectoryActionFeedback(strObj);
        end
    end
end
