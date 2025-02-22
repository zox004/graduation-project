
classdef SnapItRequest < ros.Message
    %SnapItRequest MATLAB implementation of jsk_pcl_ros/SnapItRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'jsk_pcl_ros/SnapItRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '5733f480694296678d81cff0483b399b' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'TargetPlane' 'Center' 'Direction' 'ModelType' 'Radius' 'Height' 'MaxDistance' 'EpsAngle' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'target_plane' 'center' 'direction' 'model_type' 'radius' 'height' 'max_distance' 'eps_angle' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.geometry_msgs.PolygonStamped' ...
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
        MODELPLANE = uint8(0)
        MODELCYLINDER = uint8(1)
    end
    properties
        Header
        TargetPlane
        Center
        Direction
        ModelType
        Radius
        Height
        MaxDistance
        EpsAngle
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'Header')
            obj.Header = val;
        end
        function set.TargetPlane(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.PolygonStamped'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'TargetPlane')
            obj.TargetPlane = val;
        end
        function set.Center(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.PointStamped'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'Center')
            obj.Center = val;
        end
        function set.Direction(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Vector3Stamped'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'Direction')
            obj.Direction = val;
        end
        function set.ModelType(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'ModelType');
            obj.ModelType = uint8(val);
        end
        function set.Radius(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'Radius');
            obj.Radius = double(val);
        end
        function set.Height(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'Height');
            obj.Height = double(val);
        end
        function set.MaxDistance(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'MaxDistance');
            obj.MaxDistance = double(val);
        end
        function set.EpsAngle(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SnapItRequest', 'EpsAngle');
            obj.EpsAngle = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.jsk_pcl_ros.SnapItRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.jsk_pcl_ros.SnapItRequest(strObj);
        end
    end
end
