
classdef PlatformInfo < ros.Message
    %PlatformInfo MATLAB implementation of clearpath_base/PlatformInfo
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'clearpath_base/PlatformInfo' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'ff95c25c6ef78f06bbb7ef85aad5735e' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Model' 'Revision' 'Serial' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'model' 'revision' 'serial' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Model
        Revision
        Serial
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'PlatformInfo', 'Header')
            obj.Header = val;
        end
        function set.Model(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'PlatformInfo', 'Model');
            obj.Model = char(val);
        end
        function set.Revision(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PlatformInfo', 'Revision');
            obj.Revision = int8(val);
        end
        function set.Serial(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PlatformInfo', 'Serial');
            obj.Serial = uint32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.clearpath_base.PlatformInfo.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.clearpath_base.PlatformInfo(strObj);
        end
    end
end
