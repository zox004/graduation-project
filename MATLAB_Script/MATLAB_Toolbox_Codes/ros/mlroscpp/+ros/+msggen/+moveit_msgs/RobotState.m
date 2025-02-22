
classdef RobotState < ros.Message
    %RobotState MATLAB implementation of moveit_msgs/RobotState
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'moveit_msgs/RobotState' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '968156f4aa4cb4018f1f2293eebcea8f' % The MD5 Checksum of the message definition
        PropertyList = { 'JointState' 'MultiDofJointState' 'AttachedCollisionObjects' 'IsDiff' } % List of non-constant message properties
        ROSPropertyList = { 'joint_state' 'multi_dof_joint_state' 'attached_collision_objects' 'is_diff' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.sensor_msgs.JointState' ...
            'ros.msggen.sensor_msgs.MultiDOFJointState' ...
            'ros.msggen.moveit_msgs.AttachedCollisionObject' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        JointState
        MultiDofJointState
        AttachedCollisionObjects
        IsDiff
    end
    methods
        function set.JointState(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.sensor_msgs.JointState'};
            validateattributes(val, validClasses, validAttributes, 'RobotState', 'JointState')
            obj.JointState = val;
        end
        function set.MultiDofJointState(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.sensor_msgs.MultiDOFJointState'};
            validateattributes(val, validClasses, validAttributes, 'RobotState', 'MultiDofJointState')
            obj.MultiDofJointState = val;
        end
        function set.AttachedCollisionObjects(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.moveit_msgs.AttachedCollisionObject.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.moveit_msgs.AttachedCollisionObject'};
            validateattributes(val, validClasses, validAttributes, 'RobotState', 'AttachedCollisionObjects')
            obj.AttachedCollisionObjects = val;
        end
        function set.IsDiff(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RobotState', 'IsDiff');
            obj.IsDiff = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.moveit_msgs.RobotState.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.moveit_msgs.RobotState(strObj);
        end
    end
end
