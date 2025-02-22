
classdef CameraPlacement < ros.Message
    %CameraPlacement MATLAB implementation of view_controller_msgs/CameraPlacement
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'view_controller_msgs/CameraPlacement' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '38be6efe15caa86e2c835dd05ab88393' % The MD5 Checksum of the message definition
        PropertyList = { 'TimeFromStart' 'Eye' 'Focus' 'Up' 'InterpolationMode' 'TargetFrame' 'MouseInteractionMode' 'InteractionDisabled' 'AllowFreeYawAxis' } % List of non-constant message properties
        ROSPropertyList = { 'time_from_start' 'eye' 'focus' 'up' 'interpolation_mode' 'target_frame' 'mouse_interaction_mode' 'interaction_disabled' 'allow_free_yaw_axis' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msg.Duration' ...
            'ros.msggen.geometry_msgs.PointStamped' ...
            'ros.msggen.geometry_msgs.PointStamped' ...
            'ros.msggen.geometry_msgs.Vector3Stamped' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        LINEAR = uint8(0)
        SPHERICAL = uint8(1)
        NOCHANGE = uint8(0)
        ORBIT = uint8(1)
        FPS = uint8(2)
    end
    properties
        TimeFromStart
        Eye
        Focus
        Up
        InterpolationMode
        TargetFrame
        MouseInteractionMode
        InteractionDisabled
        AllowFreeYawAxis
    end
    methods
        function set.TimeFromStart(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.Duration'};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'TimeFromStart')
            obj.TimeFromStart = val;
        end
        function set.Eye(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.PointStamped'};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'Eye')
            obj.Eye = val;
        end
        function set.Focus(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.PointStamped'};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'Focus')
            obj.Focus = val;
        end
        function set.Up(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Vector3Stamped'};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'Up')
            obj.Up = val;
        end
        function set.InterpolationMode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'InterpolationMode');
            obj.InterpolationMode = uint8(val);
        end
        function set.TargetFrame(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'TargetFrame');
            obj.TargetFrame = char(val);
        end
        function set.MouseInteractionMode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'MouseInteractionMode');
            obj.MouseInteractionMode = uint8(val);
        end
        function set.InteractionDisabled(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'InteractionDisabled');
            obj.InteractionDisabled = logical(val);
        end
        function set.AllowFreeYawAxis(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CameraPlacement', 'AllowFreeYawAxis');
            obj.AllowFreeYawAxis = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.view_controller_msgs.CameraPlacement.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.view_controller_msgs.CameraPlacement(strObj);
        end
    end
end
