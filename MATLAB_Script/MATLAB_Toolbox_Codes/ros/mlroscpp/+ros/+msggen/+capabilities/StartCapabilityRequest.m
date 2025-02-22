
classdef StartCapabilityRequest < ros.Message
    %StartCapabilityRequest MATLAB implementation of capabilities/StartCapabilityRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'capabilities/StartCapabilityRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '2cc14acc01fae719c849d4ea89820c67' % The MD5 Checksum of the message definition
        PropertyList = { 'Capability' 'PreferredProvider' } % List of non-constant message properties
        ROSPropertyList = { 'capability' 'preferred_provider' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Capability
        PreferredProvider
    end
    methods
        function set.Capability(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'StartCapabilityRequest', 'Capability');
            obj.Capability = char(val);
        end
        function set.PreferredProvider(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'StartCapabilityRequest', 'PreferredProvider');
            obj.PreferredProvider = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.capabilities.StartCapabilityRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.capabilities.StartCapabilityRequest(strObj);
        end
    end
end
