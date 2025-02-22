
classdef MongoUpdateResponse < ros.Message
    %MongoUpdateResponse MATLAB implementation of mongodb_store/MongoUpdateResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mongodb_store/MongoUpdateResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c22f2a1ed8654a0b365f1bb3f7ff2c0f' % The MD5 Checksum of the message definition
        PropertyList = { 'Result' } % List of non-constant message properties
        ROSPropertyList = { 'result' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Result
    end
    methods
        function set.Result(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'MongoUpdateResponse', 'Result');
            obj.Result = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mongodb_store.MongoUpdateResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mongodb_store.MongoUpdateResponse(strObj);
        end
    end
end
