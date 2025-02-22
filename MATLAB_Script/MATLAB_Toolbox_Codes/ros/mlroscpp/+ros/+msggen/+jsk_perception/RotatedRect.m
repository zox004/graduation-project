
classdef RotatedRect < ros.Message
    %RotatedRect MATLAB implementation of jsk_perception/RotatedRect
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'jsk_perception/RotatedRect' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'e970c93bbd35a570f7d9acc8228e9280' % The MD5 Checksum of the message definition
        PropertyList = { 'X' 'Y' 'Width' 'Height' 'Angle' } % List of non-constant message properties
        ROSPropertyList = { 'x' 'y' 'width' 'height' 'angle' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        X
        Y
        Width
        Height
        Angle
    end
    methods
        function set.X(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RotatedRect', 'X');
            obj.X = double(val);
        end
        function set.Y(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RotatedRect', 'Y');
            obj.Y = double(val);
        end
        function set.Width(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RotatedRect', 'Width');
            obj.Width = double(val);
        end
        function set.Height(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RotatedRect', 'Height');
            obj.Height = double(val);
        end
        function set.Angle(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RotatedRect', 'Angle');
            obj.Angle = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.jsk_perception.RotatedRect.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.jsk_perception.RotatedRect(strObj);
        end
    end
end
