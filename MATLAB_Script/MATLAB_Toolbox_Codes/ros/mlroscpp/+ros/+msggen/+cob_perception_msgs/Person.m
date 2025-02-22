
classdef Person < ros.Message
    %Person MATLAB implementation of cob_perception_msgs/Person
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'cob_perception_msgs/Person' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '0726793e65e7420b1c7d52ed8e449b17' % The MD5 Checksum of the message definition
        PropertyList = { 'Position' 'Velocity' 'Skeleton' 'Name' 'Detector' } % List of non-constant message properties
        ROSPropertyList = { 'position' 'velocity' 'skeleton' 'name' 'detector' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.geometry_msgs.Pose' ...
            'ros.msggen.geometry_msgs.Point' ...
            'ros.msggen.cob_perception_msgs.Skeleton' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Position
        Velocity
        Skeleton
        Name
        Detector
    end
    methods
        function set.Position(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Pose'};
            validateattributes(val, validClasses, validAttributes, 'Person', 'Position')
            obj.Position = val;
        end
        function set.Velocity(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Point'};
            validateattributes(val, validClasses, validAttributes, 'Person', 'Velocity')
            obj.Velocity = val;
        end
        function set.Skeleton(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.cob_perception_msgs.Skeleton'};
            validateattributes(val, validClasses, validAttributes, 'Person', 'Skeleton')
            obj.Skeleton = val;
        end
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Person', 'Name');
            obj.Name = char(val);
        end
        function set.Detector(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Person', 'Detector');
            obj.Detector = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.cob_perception_msgs.Person.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.cob_perception_msgs.Person(strObj);
        end
    end
end
