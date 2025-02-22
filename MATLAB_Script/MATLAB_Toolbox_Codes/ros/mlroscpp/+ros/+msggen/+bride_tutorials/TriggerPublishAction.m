
classdef TriggerPublishAction < ros.Message
    %TriggerPublishAction MATLAB implementation of bride_tutorials/TriggerPublishAction
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'bride_tutorials/TriggerPublishAction' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '125b6c5b3d3654bddadf2855b275822e' % The MD5 Checksum of the message definition
        PropertyList = { 'ActionGoal' 'ActionResult' 'ActionFeedback' } % List of non-constant message properties
        ROSPropertyList = { 'action_goal' 'action_result' 'action_feedback' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.bride_tutorials.TriggerPublishActionGoal' ...
            'ros.msggen.bride_tutorials.TriggerPublishActionResult' ...
            'ros.msggen.bride_tutorials.TriggerPublishActionFeedback' ...
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
            validClasses = {'ros.msggen.bride_tutorials.TriggerPublishActionGoal'};
            validateattributes(val, validClasses, validAttributes, 'TriggerPublishAction', 'ActionGoal')
            obj.ActionGoal = val;
        end
        function set.ActionResult(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.bride_tutorials.TriggerPublishActionResult'};
            validateattributes(val, validClasses, validAttributes, 'TriggerPublishAction', 'ActionResult')
            obj.ActionResult = val;
        end
        function set.ActionFeedback(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.bride_tutorials.TriggerPublishActionFeedback'};
            validateattributes(val, validClasses, validAttributes, 'TriggerPublishAction', 'ActionFeedback')
            obj.ActionFeedback = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.bride_tutorials.TriggerPublishAction.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.bride_tutorials.TriggerPublishAction(strObj);
        end
    end
end
