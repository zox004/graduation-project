
classdef RobotStatus < ros.Message
    %RobotStatus MATLAB implementation of industrial_msgs/RobotStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'industrial_msgs/RobotStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'b733cb45a38101840b75c4c0d6093d19' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Mode' 'EStopped' 'DrivesPowered' 'MotionPossible' 'InMotion' 'InError' 'ErrorCode' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'mode' 'e_stopped' 'drives_powered' 'motion_possible' 'in_motion' 'in_error' 'error_code' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.industrial_msgs.RobotMode' ...
            'ros.msggen.industrial_msgs.TriState' ...
            'ros.msggen.industrial_msgs.TriState' ...
            'ros.msggen.industrial_msgs.TriState' ...
            'ros.msggen.industrial_msgs.TriState' ...
            'ros.msggen.industrial_msgs.TriState' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Mode
        EStopped
        DrivesPowered
        MotionPossible
        InMotion
        InError
        ErrorCode
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'RobotStatus', 'Header')
            obj.Header = val;
        end
        function set.Mode(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.industrial_msgs.RobotMode'};
            validateattributes(val, validClasses, validAttributes, 'RobotStatus', 'Mode')
            obj.Mode = val;
        end
        function set.EStopped(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.industrial_msgs.TriState'};
            validateattributes(val, validClasses, validAttributes, 'RobotStatus', 'EStopped')
            obj.EStopped = val;
        end
        function set.DrivesPowered(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.industrial_msgs.TriState'};
            validateattributes(val, validClasses, validAttributes, 'RobotStatus', 'DrivesPowered')
            obj.DrivesPowered = val;
        end
        function set.MotionPossible(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.industrial_msgs.TriState'};
            validateattributes(val, validClasses, validAttributes, 'RobotStatus', 'MotionPossible')
            obj.MotionPossible = val;
        end
        function set.InMotion(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.industrial_msgs.TriState'};
            validateattributes(val, validClasses, validAttributes, 'RobotStatus', 'InMotion')
            obj.InMotion = val;
        end
        function set.InError(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.industrial_msgs.TriState'};
            validateattributes(val, validClasses, validAttributes, 'RobotStatus', 'InError')
            obj.InError = val;
        end
        function set.ErrorCode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RobotStatus', 'ErrorCode');
            obj.ErrorCode = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.industrial_msgs.RobotStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.industrial_msgs.RobotStatus(strObj);
        end
    end
end
