
classdef MoveSequenceGoal < ros.Message
    %MoveSequenceGoal MATLAB implementation of pr2_precise_trajectory/MoveSequenceGoal
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_precise_trajectory/MoveSequenceGoal' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '973bb148ba385e78971e34ca777c5ab7' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Poses' 'Times' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'poses' 'times' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.geometry_msgs.Pose' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Poses
        Times
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'MoveSequenceGoal', 'Header')
            obj.Header = val;
        end
        function set.Poses(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.geometry_msgs.Pose.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.geometry_msgs.Pose'};
            validateattributes(val, validClasses, validAttributes, 'MoveSequenceGoal', 'Poses')
            obj.Poses = val;
        end
        function set.Times(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'MoveSequenceGoal', 'Times');
            obj.Times = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_precise_trajectory.MoveSequenceGoal.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_precise_trajectory.MoveSequenceGoal(strObj);
        end
    end
end
