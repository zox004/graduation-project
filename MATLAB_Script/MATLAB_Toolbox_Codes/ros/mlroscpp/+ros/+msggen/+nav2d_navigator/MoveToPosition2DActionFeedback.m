
classdef MoveToPosition2DActionFeedback < ros.Message
    %MoveToPosition2DActionFeedback MATLAB implementation of nav2d_navigator/MoveToPosition2DActionFeedback
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'nav2d_navigator/MoveToPosition2DActionFeedback' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'e63058c3827d4bb2ecc233eb98442965' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Status' 'Feedback' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'status' 'feedback' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.actionlib_msgs.GoalStatus' ...
            'ros.msggen.nav2d_navigator.MoveToPosition2DFeedback' ...
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
            validateattributes(val, validClasses, validAttributes, 'MoveToPosition2DActionFeedback', 'Header')
            obj.Header = val;
        end
        function set.Status(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.actionlib_msgs.GoalStatus'};
            validateattributes(val, validClasses, validAttributes, 'MoveToPosition2DActionFeedback', 'Status')
            obj.Status = val;
        end
        function set.Feedback(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.nav2d_navigator.MoveToPosition2DFeedback'};
            validateattributes(val, validClasses, validAttributes, 'MoveToPosition2DActionFeedback', 'Feedback')
            obj.Feedback = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.nav2d_navigator.MoveToPosition2DActionFeedback.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.nav2d_navigator.MoveToPosition2DActionFeedback(strObj);
        end
    end
end
