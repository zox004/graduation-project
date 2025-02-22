
classdef ConnectHubRequest < ros.Message
    %ConnectHubRequest MATLAB implementation of gateway_msgs/ConnectHubRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'gateway_msgs/ConnectHubRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '636fe5e07550f026d28388e95c38a9f4' % The MD5 Checksum of the message definition
        PropertyList = { 'Uri' } % List of non-constant message properties
        ROSPropertyList = { 'uri' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Uri
    end
    methods
        function set.Uri(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ConnectHubRequest', 'Uri');
            obj.Uri = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.gateway_msgs.ConnectHubRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.gateway_msgs.ConnectHubRequest(strObj);
        end
    end
end
