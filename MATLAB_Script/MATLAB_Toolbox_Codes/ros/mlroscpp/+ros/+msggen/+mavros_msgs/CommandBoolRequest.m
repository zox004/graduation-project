
classdef CommandBoolRequest < ros.Message
    %CommandBoolRequest MATLAB implementation of mavros_msgs/CommandBoolRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/CommandBoolRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'e431d687bf4b2c65fbd94b12ae0cb5d9' % The MD5 Checksum of the message definition
        PropertyList = { 'Value' } % List of non-constant message properties
        ROSPropertyList = { 'value' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Value
    end
    methods
        function set.Value(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CommandBoolRequest', 'Value');
            obj.Value = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.CommandBoolRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.CommandBoolRequest(strObj);
        end
    end
end
