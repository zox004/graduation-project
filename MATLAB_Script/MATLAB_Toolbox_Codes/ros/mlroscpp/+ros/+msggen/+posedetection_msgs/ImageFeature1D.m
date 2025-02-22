
classdef ImageFeature1D < ros.Message
    %ImageFeature1D MATLAB implementation of posedetection_msgs/ImageFeature1D
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'posedetection_msgs/ImageFeature1D' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'bfd3a262e6342c55b7e11fccf00d8b2c' % The MD5 Checksum of the message definition
        PropertyList = { 'Image' 'Info' 'Features' } % List of non-constant message properties
        ROSPropertyList = { 'image' 'info' 'features' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msg.sensor_msgs.Image' ...
            'ros.msggen.sensor_msgs.CameraInfo' ...
            'ros.msggen.posedetection_msgs.Feature1D' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Image
        Info
        Features
    end
    methods
        function set.Image(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.sensor_msgs.Image'};
            validateattributes(val, validClasses, validAttributes, 'ImageFeature1D', 'Image')
            obj.Image = val;
        end
        function set.Info(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.sensor_msgs.CameraInfo'};
            validateattributes(val, validClasses, validAttributes, 'ImageFeature1D', 'Info')
            obj.Info = val;
        end
        function set.Features(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.posedetection_msgs.Feature1D'};
            validateattributes(val, validClasses, validAttributes, 'ImageFeature1D', 'Features')
            obj.Features = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.posedetection_msgs.ImageFeature1D.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.posedetection_msgs.ImageFeature1D(strObj);
        end
    end
end
