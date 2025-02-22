
classdef JointControllerState < ros.Message
    %JointControllerState MATLAB implementation of sr_robot_msgs/JointControllerState
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'sr_robot_msgs/JointControllerState' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '6d5ccb5452fd11516b5e350fcf60090e' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'SetPoint' 'ProcessValue' 'ProcessValueDot' 'CommandedVelocity' 'Error' 'TimeStep' 'Command' 'MeasuredEffort' 'FrictionCompensation' 'PositionP' 'PositionI' 'PositionD' 'PositionIClamp' 'VelocityP' 'VelocityI' 'VelocityD' 'VelocityIClamp' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'set_point' 'process_value' 'process_value_dot' 'commanded_velocity' 'error' 'time_step' 'command' 'measured_effort' 'friction_compensation' 'position_p' 'position_i' 'position_d' 'position_i_clamp' 'velocity_p' 'velocity_i' 'velocity_d' 'velocity_i_clamp' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
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
    end
    properties
        Header
        SetPoint
        ProcessValue
        ProcessValueDot
        CommandedVelocity
        Error
        TimeStep
        Command
        MeasuredEffort
        FrictionCompensation
        PositionP
        PositionI
        PositionD
        PositionIClamp
        VelocityP
        VelocityI
        VelocityD
        VelocityIClamp
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'Header')
            obj.Header = val;
        end
        function set.SetPoint(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'SetPoint');
            obj.SetPoint = double(val);
        end
        function set.ProcessValue(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'ProcessValue');
            obj.ProcessValue = double(val);
        end
        function set.ProcessValueDot(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'ProcessValueDot');
            obj.ProcessValueDot = double(val);
        end
        function set.CommandedVelocity(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'CommandedVelocity');
            obj.CommandedVelocity = double(val);
        end
        function set.Error(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'Error');
            obj.Error = double(val);
        end
        function set.TimeStep(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'TimeStep');
            obj.TimeStep = double(val);
        end
        function set.Command(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'Command');
            obj.Command = double(val);
        end
        function set.MeasuredEffort(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'MeasuredEffort');
            obj.MeasuredEffort = double(val);
        end
        function set.FrictionCompensation(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'FrictionCompensation');
            obj.FrictionCompensation = double(val);
        end
        function set.PositionP(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'PositionP');
            obj.PositionP = double(val);
        end
        function set.PositionI(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'PositionI');
            obj.PositionI = double(val);
        end
        function set.PositionD(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'PositionD');
            obj.PositionD = double(val);
        end
        function set.PositionIClamp(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'PositionIClamp');
            obj.PositionIClamp = double(val);
        end
        function set.VelocityP(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'VelocityP');
            obj.VelocityP = double(val);
        end
        function set.VelocityI(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'VelocityI');
            obj.VelocityI = double(val);
        end
        function set.VelocityD(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'VelocityD');
            obj.VelocityD = double(val);
        end
        function set.VelocityIClamp(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'JointControllerState', 'VelocityIClamp');
            obj.VelocityIClamp = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.sr_robot_msgs.JointControllerState.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.sr_robot_msgs.JointControllerState(strObj);
        end
    end
end
