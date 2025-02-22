
classdef SetModeRequest < ros.Message
    %SetModeRequest MATLAB implementation of mavros_msgs/SetModeRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/SetModeRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'd770431847cad3a8f50a81ec70ddf0e2' % The MD5 Checksum of the message definition
        PropertyList = { 'BaseMode' 'CustomMode' } % List of non-constant message properties
        ROSPropertyList = { 'base_mode' 'custom_mode' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        MAVMODEPREFLIGHT = uint8(0)
        MAVMODESTABILIZEDISARMED = uint8(80)
        MAVMODESTABILIZEARMED = uint8(208)
        MAVMODEMANUALDISARMED = uint8(64)
        MAVMODEMANUALARMED = uint8(192)
        MAVMODEGUIDEDDISARMED = uint8(88)
        MAVMODEGUIDEDARMED = uint8(216)
        MAVMODEAUTODISARMED = uint8(92)
        MAVMODEAUTOARMED = uint8(220)
        MAVMODETESTDISARMED = uint8(66)
        MAVMODETESTARMED = uint8(194)
    end
    properties
        BaseMode
        CustomMode
    end
    methods
        function set.BaseMode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetModeRequest', 'BaseMode');
            obj.BaseMode = uint8(val);
        end
        function set.CustomMode(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'SetModeRequest', 'CustomMode');
            obj.CustomMode = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.SetModeRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.SetModeRequest(strObj);
        end
    end
end
