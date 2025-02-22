
classdef navdata_vision_detect < ros.Message
    %navdata_vision_detect MATLAB implementation of ardrone_autonomy/navdata_vision_detect
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'ardrone_autonomy/navdata_vision_detect' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'ab5f6b8c66aead58358d45a7c2dce7f6' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Rotation' 'Translation' 'DroneTime' 'Tag' 'Size' 'NbDetected' 'Type' 'Xc' 'Yc' 'Width' 'Height' 'Dist' 'OrientationAngle' 'CameraSource' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'rotation' 'translation' 'drone_time' 'tag' 'size' 'nb_detected' 'type' 'xc' 'yc' 'width' 'height' 'dist' 'orientation_angle' 'camera_source' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.ardrone_autonomy.matrix33' ...
            'ros.msggen.ardrone_autonomy.vector31' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
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
        Header
        Rotation
        Translation
        DroneTime
        Tag
        Size
        NbDetected
        Type
        Xc
        Yc
        Width
        Height
        Dist
        OrientationAngle
        CameraSource
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Header')
            obj.Header = val;
        end
        function set.Rotation(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.ardrone_autonomy.matrix33.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.ardrone_autonomy.matrix33'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Rotation')
            obj.Rotation = val;
        end
        function set.Translation(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.ardrone_autonomy.vector31.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.ardrone_autonomy.vector31'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Translation')
            obj.Translation = val;
        end
        function set.DroneTime(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'DroneTime');
            obj.DroneTime = double(val);
        end
        function set.Tag(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Tag');
            obj.Tag = uint16(val);
        end
        function set.Size(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Size');
            obj.Size = uint16(val);
        end
        function set.NbDetected(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'NbDetected');
            obj.NbDetected = uint32(val);
        end
        function set.Type(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Type');
            obj.Type = uint32(val);
        end
        function set.Xc(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Xc');
            obj.Xc = uint32(val);
        end
        function set.Yc(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Yc');
            obj.Yc = uint32(val);
        end
        function set.Width(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Width');
            obj.Width = uint32(val);
        end
        function set.Height(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Height');
            obj.Height = uint32(val);
        end
        function set.Dist(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'Dist');
            obj.Dist = uint32(val);
        end
        function set.OrientationAngle(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'OrientationAngle');
            obj.OrientationAngle = single(val);
        end
        function set.CameraSource(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'navdata_vision_detect', 'CameraSource');
            obj.CameraSource = uint32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.ardrone_autonomy.navdata_vision_detect.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.ardrone_autonomy.navdata_vision_detect(strObj);
        end
    end
end
