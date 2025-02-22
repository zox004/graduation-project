
classdef TestParam < ros.Message
    %TestParam MATLAB implementation of pr2_self_test_msgs/TestParam
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_self_test_msgs/TestParam' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'cf57fdc6617a881a88c16e768132149c' % The MD5 Checksum of the message definition
        PropertyList = { 'Key' 'Value' } % List of non-constant message properties
        ROSPropertyList = { 'key' 'value' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Key
        Value
    end
    methods
        function set.Key(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'TestParam', 'Key');
            obj.Key = char(val);
        end
        function set.Value(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'TestParam', 'Value');
            obj.Value = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_self_test_msgs.TestParam.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_self_test_msgs.TestParam(strObj);
        end
    end
end
