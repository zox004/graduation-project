
classdef ConnectionType < ros.Message
    %ConnectionType MATLAB implementation of gateway_msgs/ConnectionType
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'gateway_msgs/ConnectionType' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '65d75f1bb32566bfec48966db2073c81' % The MD5 Checksum of the message definition
        PropertyList = {} % List of non-constant message properties
        ROSPropertyList = {} % List of non-constant ROS message properties
        PropertyMessageTypes = {} % Types of contained nested messages
    end
    properties (Constant)
        PUBLISHER = 'publisher';
        SUBSCRIBER = 'subscriber';
        SERVICE = 'service';
        ACTIONCLIENT = 'action_client';
        ACTIONSERVER = 'action_server';
        INVALID = 'invalid';
    end
    properties
    end
    methods
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.gateway_msgs.ConnectionType.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.gateway_msgs.ConnectionType(strObj);
        end
    end
end
