
classdef CameraInfo < ros.Message
    %CameraInfo MATLAB implementation of sensor_msgs/CameraInfo
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'sensor_msgs/CameraInfo' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c9a58c1b0b154e0e6da7578cb991d214' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Roi' 'Height' 'Width' 'DistortionModel' 'D' 'K' 'R' 'P' 'BinningX' 'BinningY' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'roi' 'height' 'width' 'distortion_model' 'D' 'K' 'R' 'P' 'binning_x' 'binning_y' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.sensor_msgs.RegionOfInterest' ...
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
        Roi
        Height
        Width
        DistortionModel
        D
        K
        R
        P
        BinningX
        BinningY
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'Header')
            obj.Header = val;
        end
        function set.Roi(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.sensor_msgs.RegionOfInterest'};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'Roi')
            obj.Roi = val;
        end
        function set.Height(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'Height');
            obj.Height = uint32(val);
        end
        function set.Width(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'Width');
            obj.Width = uint32(val);
        end
        function set.DistortionModel(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'DistortionModel');
            obj.DistortionModel = char(val);
        end
        function set.D(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'D');
            obj.D = double(val);
        end
        function set.K(obj, val)
            validClasses = {'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 9};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'K');
            obj.K = double(val);
        end
        function set.R(obj, val)
            validClasses = {'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 9};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'R');
            obj.R = double(val);
        end
        function set.P(obj, val)
            validClasses = {'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 12};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'P');
            obj.P = double(val);
        end
        function set.BinningX(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'BinningX');
            obj.BinningX = uint32(val);
        end
        function set.BinningY(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CameraInfo', 'BinningY');
            obj.BinningY = uint32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.sensor_msgs.CameraInfo.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.sensor_msgs.CameraInfo(strObj);
        end
    end
end
