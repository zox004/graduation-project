
classdef RoombaSensorState < ros.Message
    %RoombaSensorState MATLAB implementation of create_node/RoombaSensorState
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'create_node/RoombaSensorState' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '9e8632c0937537603a670e96e85cd991' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'BumpsWheeldrops' 'Wall' 'CliffLeft' 'CliffFrontLeft' 'CliffFrontRight' 'CliffRight' 'VirtualWall' 'MotorOvercurrents' 'DirtDetectorLeft' 'DirtDetectorRight' 'RemoteOpcode' 'Buttons' 'Distance' 'Angle' 'ChargingState' 'Voltage' 'Current' 'Temperature' 'Charge' 'Capacity' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'bumps_wheeldrops' 'wall' 'cliff_left' 'cliff_front_left' 'cliff_front_right' 'cliff_right' 'virtual_wall' 'motor_overcurrents' 'dirt_detector_left' 'dirt_detector_right' 'remote_opcode' 'buttons' 'distance' 'angle' 'charging_state' 'voltage' 'current' 'temperature' 'charge' 'capacity' } % List of non-constant ROS message properties
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
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        CHARGINGNOTCHARGING = uint8(0)
        CHARGINGCHARGINGRECOVERY = uint8(1)
        CHARGINGCHARGING = uint8(2)
        CHARGINGTRICKLECHARGING = uint8(3)
        CHARGINGWAITING = uint8(4)
        CHARGINGCHARGINGERROR = uint8(5)
    end
    properties
        Header
        BumpsWheeldrops
        Wall
        CliffLeft
        CliffFrontLeft
        CliffFrontRight
        CliffRight
        VirtualWall
        MotorOvercurrents
        DirtDetectorLeft
        DirtDetectorRight
        RemoteOpcode
        Buttons
        Distance
        Angle
        ChargingState
        Voltage
        Current
        Temperature
        Charge
        Capacity
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Header')
            obj.Header = val;
        end
        function set.BumpsWheeldrops(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'BumpsWheeldrops');
            obj.BumpsWheeldrops = uint8(val);
        end
        function set.Wall(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Wall');
            obj.Wall = logical(val);
        end
        function set.CliffLeft(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'CliffLeft');
            obj.CliffLeft = logical(val);
        end
        function set.CliffFrontLeft(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'CliffFrontLeft');
            obj.CliffFrontLeft = logical(val);
        end
        function set.CliffFrontRight(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'CliffFrontRight');
            obj.CliffFrontRight = logical(val);
        end
        function set.CliffRight(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'CliffRight');
            obj.CliffRight = logical(val);
        end
        function set.VirtualWall(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'VirtualWall');
            obj.VirtualWall = logical(val);
        end
        function set.MotorOvercurrents(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'MotorOvercurrents');
            obj.MotorOvercurrents = uint8(val);
        end
        function set.DirtDetectorLeft(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'DirtDetectorLeft');
            obj.DirtDetectorLeft = uint8(val);
        end
        function set.DirtDetectorRight(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'DirtDetectorRight');
            obj.DirtDetectorRight = uint8(val);
        end
        function set.RemoteOpcode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'RemoteOpcode');
            obj.RemoteOpcode = uint8(val);
        end
        function set.Buttons(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Buttons');
            obj.Buttons = uint8(val);
        end
        function set.Distance(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Distance');
            obj.Distance = int16(val);
        end
        function set.Angle(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Angle');
            obj.Angle = int16(val);
        end
        function set.ChargingState(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'ChargingState');
            obj.ChargingState = uint8(val);
        end
        function set.Voltage(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Voltage');
            obj.Voltage = uint16(val);
        end
        function set.Current(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Current');
            obj.Current = int16(val);
        end
        function set.Temperature(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Temperature');
            obj.Temperature = int8(val);
        end
        function set.Charge(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Charge');
            obj.Charge = uint16(val);
        end
        function set.Capacity(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RoombaSensorState', 'Capacity');
            obj.Capacity = uint16(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.create_node.RoombaSensorState.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.create_node.RoombaSensorState(strObj);
        end
    end
end
