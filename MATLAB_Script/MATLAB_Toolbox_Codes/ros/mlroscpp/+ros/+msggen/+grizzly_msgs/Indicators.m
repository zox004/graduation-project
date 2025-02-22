
classdef Indicators < ros.Message
    %Indicators MATLAB implementation of grizzly_msgs/Indicators
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'grizzly_msgs/Indicators' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '96722a571f0c36ed6a0c5468800be83f' % The MD5 Checksum of the message definition
        PropertyList = { 'PositionLight' 'AutopilotLight' 'BatteryLight' } % List of non-constant message properties
        ROSPropertyList = { 'position_light' 'autopilot_light' 'battery_light' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        INDICATORON = uint8(255)
        INDICATORFLASH = uint8(15)
        INDICATOROFF = uint8(0)
    end
    properties
        PositionLight
        AutopilotLight
        BatteryLight
    end
    methods
        function set.PositionLight(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Indicators', 'PositionLight');
            obj.PositionLight = uint8(val);
        end
        function set.AutopilotLight(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Indicators', 'AutopilotLight');
            obj.AutopilotLight = uint8(val);
        end
        function set.BatteryLight(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Indicators', 'BatteryLight');
            obj.BatteryLight = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.grizzly_msgs.Indicators.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.grizzly_msgs.Indicators(strObj);
        end
    end
end
