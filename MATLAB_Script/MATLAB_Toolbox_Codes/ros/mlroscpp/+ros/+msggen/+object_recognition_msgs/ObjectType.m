
classdef ObjectType < ros.Message
    %ObjectType MATLAB implementation of object_recognition_msgs/ObjectType
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'object_recognition_msgs/ObjectType' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'ac757ec5be1998b0167e7efcda79e3cf' % The MD5 Checksum of the message definition
        PropertyList = { 'Key' 'Db' } % List of non-constant message properties
        ROSPropertyList = { 'key' 'db' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Key
        Db
    end
    methods
        function set.Key(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ObjectType', 'Key');
            obj.Key = char(val);
        end
        function set.Db(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ObjectType', 'Db');
            obj.Db = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.object_recognition_msgs.ObjectType.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.object_recognition_msgs.ObjectType(strObj);
        end
    end
end
