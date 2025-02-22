
classdef TurtlebotMoveActionFeedback < ros.Message
    %TurtlebotMoveActionFeedback MATLAB implementation of turtlebot_actions/TurtlebotMoveActionFeedback
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'turtlebot_actions/TurtlebotMoveActionFeedback' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'e9922a08bd1a3f86961e5d45b275f533' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Status' 'Feedback' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'status' 'feedback' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.actionlib_msgs.GoalStatus' ...
            'ros.msggen.turtlebot_actions.TurtlebotMoveFeedback' ...
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
            validateattributes(val, validClasses, validAttributes, 'TurtlebotMoveActionFeedback', 'Header')
            obj.Header = val;
        end
        function set.Status(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.actionlib_msgs.GoalStatus'};
            validateattributes(val, validClasses, validAttributes, 'TurtlebotMoveActionFeedback', 'Status')
            obj.Status = val;
        end
        function set.Feedback(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.turtlebot_actions.TurtlebotMoveFeedback'};
            validateattributes(val, validClasses, validAttributes, 'TurtlebotMoveActionFeedback', 'Feedback')
            obj.Feedback = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.turtlebot_actions.TurtlebotMoveActionFeedback.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.turtlebot_actions.TurtlebotMoveActionFeedback(strObj);
        end
    end
end
