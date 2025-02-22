
classdef QueryGraspsGoal < ros.Message
    %QueryGraspsGoal MATLAB implementation of cob_grasp_generation/QueryGraspsGoal
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'cob_grasp_generation/QueryGraspsGoal' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '2aaeac295326ed87cc4e63f737837d1f' % The MD5 Checksum of the message definition
        PropertyList = { 'ObjectName' 'GripperType' 'GripperSide' 'GraspId' 'NumGrasps' 'Threshold' } % List of non-constant message properties
        ROSPropertyList = { 'object_name' 'gripper_type' 'gripper_side' 'grasp_id' 'num_grasps' 'threshold' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        ObjectName
        GripperType
        GripperSide
        GraspId
        NumGrasps
        Threshold
    end
    methods
        function set.ObjectName(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'QueryGraspsGoal', 'ObjectName');
            obj.ObjectName = char(val);
        end
        function set.GripperType(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'QueryGraspsGoal', 'GripperType');
            obj.GripperType = char(val);
        end
        function set.GripperSide(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'QueryGraspsGoal', 'GripperSide');
            obj.GripperSide = char(val);
        end
        function set.GraspId(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'QueryGraspsGoal', 'GraspId');
            obj.GraspId = uint32(val);
        end
        function set.NumGrasps(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'QueryGraspsGoal', 'NumGrasps');
            obj.NumGrasps = uint32(val);
        end
        function set.Threshold(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'QueryGraspsGoal', 'Threshold');
            obj.Threshold = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.cob_grasp_generation.QueryGraspsGoal.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.cob_grasp_generation.QueryGraspsGoal(strObj);
        end
    end
end
