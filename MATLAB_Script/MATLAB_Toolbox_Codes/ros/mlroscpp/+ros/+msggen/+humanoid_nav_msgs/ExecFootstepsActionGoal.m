
classdef ExecFootstepsActionGoal < ros.Message
    %ExecFootstepsActionGoal MATLAB implementation of humanoid_nav_msgs/ExecFootstepsActionGoal
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'humanoid_nav_msgs/ExecFootstepsActionGoal' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c460c01f665b894cf2e45a340e1a98a9' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'GoalId' 'Goal' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'goal_id' 'goal' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.actionlib_msgs.GoalID' ...
            'ros.msggen.humanoid_nav_msgs.ExecFootstepsGoal' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        GoalId
        Goal
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'ExecFootstepsActionGoal', 'Header')
            obj.Header = val;
        end
        function set.GoalId(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.actionlib_msgs.GoalID'};
            validateattributes(val, validClasses, validAttributes, 'ExecFootstepsActionGoal', 'GoalId')
            obj.GoalId = val;
        end
        function set.Goal(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.humanoid_nav_msgs.ExecFootstepsGoal'};
            validateattributes(val, validClasses, validAttributes, 'ExecFootstepsActionGoal', 'Goal')
            obj.Goal = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.humanoid_nav_msgs.ExecFootstepsActionGoal.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.humanoid_nav_msgs.ExecFootstepsActionGoal(strObj);
        end
    end
end
