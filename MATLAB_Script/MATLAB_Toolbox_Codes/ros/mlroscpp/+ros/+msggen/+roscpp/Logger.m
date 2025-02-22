
classdef Logger < ros.Message
    %Logger MATLAB implementation of roscpp/Logger
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'roscpp/Logger' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'a6069a2ff40db7bd32143dd66e1f408e' % The MD5 Checksum of the message definition
        PropertyList = { 'Name' 'Level' } % List of non-constant message properties
        ROSPropertyList = { 'name' 'level' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Name
        Level
    end
    methods
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Logger', 'Name');
            obj.Name = char(val);
        end
        function set.Level(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Logger', 'Level');
            obj.Level = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.roscpp.Logger.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.roscpp.Logger(strObj);
        end
    end
end
