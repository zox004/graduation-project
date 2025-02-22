
classdef Drive < ros.Message
    %Drive MATLAB implementation of kingfisher_msgs/Drive
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'kingfisher_msgs/Drive' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '3a927990ab5d5c3d628e2d52b8533e52' % The MD5 Checksum of the message definition
        PropertyList = { 'Left' 'Right' } % List of non-constant message properties
        ROSPropertyList = { 'left' 'right' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Left
        Right
    end
    methods
        function set.Left(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Drive', 'Left');
            obj.Left = single(val);
        end
        function set.Right(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Drive', 'Right');
            obj.Right = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.kingfisher_msgs.Drive.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.kingfisher_msgs.Drive(strObj);
        end
    end
end
