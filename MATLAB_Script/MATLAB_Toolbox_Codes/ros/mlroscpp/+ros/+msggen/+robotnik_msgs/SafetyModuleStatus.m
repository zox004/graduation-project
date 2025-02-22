
classdef SafetyModuleStatus < ros.Message
    %SafetyModuleStatus MATLAB implementation of robotnik_msgs/SafetyModuleStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'robotnik_msgs/SafetyModuleStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '3cc2546ca0e4e9e66c091e756e7d22d7' % The MD5 Checksum of the message definition
        PropertyList = { 'LasersMode' 'LasersStatus' 'SafetyMode' 'Charging' 'EmergencyStop' 'SafetyStop' 'SafetyOverrided' 'LasersOnStandby' 'CurrentSpeed' 'SpeedAtSafetyStop' } % List of non-constant message properties
        ROSPropertyList = { 'lasers_mode' 'lasers_status' 'safety_mode' 'charging' 'emergency_stop' 'safety_stop' 'safety_overrided' 'lasers_on_standby' 'current_speed' 'speed_at_safety_stop' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.robotnik_msgs.LaserMode' ...
            'ros.msggen.robotnik_msgs.LaserStatus' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        SAFE = 'safe';
        OVERRIDABLE = 'overridable';
        EMERGENCY = 'emergency';
        LASERMUTE = 'laser_mute';
    end
    properties
        LasersMode
        LasersStatus
        SafetyMode
        Charging
        EmergencyStop
        SafetyStop
        SafetyOverrided
        LasersOnStandby
        CurrentSpeed
        SpeedAtSafetyStop
    end
    methods
        function set.LasersMode(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.robotnik_msgs.LaserMode'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'LasersMode')
            obj.LasersMode = val;
        end
        function set.LasersStatus(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.robotnik_msgs.LaserStatus.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.robotnik_msgs.LaserStatus'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'LasersStatus')
            obj.LasersStatus = val;
        end
        function set.SafetyMode(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'SafetyMode');
            obj.SafetyMode = char(val);
        end
        function set.Charging(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'Charging');
            obj.Charging = logical(val);
        end
        function set.EmergencyStop(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'EmergencyStop');
            obj.EmergencyStop = logical(val);
        end
        function set.SafetyStop(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'SafetyStop');
            obj.SafetyStop = logical(val);
        end
        function set.SafetyOverrided(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'SafetyOverrided');
            obj.SafetyOverrided = logical(val);
        end
        function set.LasersOnStandby(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'LasersOnStandby');
            obj.LasersOnStandby = logical(val);
        end
        function set.CurrentSpeed(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'CurrentSpeed');
            obj.CurrentSpeed = double(val);
        end
        function set.SpeedAtSafetyStop(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SafetyModuleStatus', 'SpeedAtSafetyStop');
            obj.SpeedAtSafetyStop = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.robotnik_msgs.SafetyModuleStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.robotnik_msgs.SafetyModuleStatus(strObj);
        end
    end
end
