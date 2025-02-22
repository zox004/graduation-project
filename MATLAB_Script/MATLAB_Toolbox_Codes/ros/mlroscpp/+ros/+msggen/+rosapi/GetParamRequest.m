
classdef GetParamRequest < ros.Message
    %GetParamRequest MATLAB implementation of rosapi/GetParamRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'rosapi/GetParamRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1cc3f281ee24ba9406c3e498e4da686f' % The MD5 Checksum of the message definition
    end
    properties (Constant)
    end
    properties
        Name
        Default
    end
    properties (Constant, Hidden)
        PropertyList = { 'Name' 'Default' } % List of non-constant message properties
        ROSPropertyList = { 'name' 'default' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    methods
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'GetParamRequest', 'Name');
            obj.Name = char(val);
        end
        function set.Default(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'GetParamRequest', 'Default');
            obj.Default = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.rosapi.GetParamRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.rosapi.GetParamRequest;
            obj.reload(strObj);
        end
    end
end
