
classdef TestResponse < ros.Message
    %TestResponse MATLAB implementation of rosserial_arduino/TestResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'rosserial_arduino/TestResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '0825d95fdfa2c8f4bbb4e9c74bccd3fd' % The MD5 Checksum of the message definition
        PropertyList = { 'Output' } % List of non-constant message properties
        ROSPropertyList = { 'output' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Output
    end
    methods
        function set.Output(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'TestResponse', 'Output');
            obj.Output = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.rosserial_arduino.TestResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.rosserial_arduino.TestResponse(strObj);
        end
    end
end
