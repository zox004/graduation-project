
classdef ADSBVehicle < ros.Message
    %ADSBVehicle MATLAB implementation of mavros_msgs/ADSBVehicle
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/ADSBVehicle' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'd532685113a66fcc6ba0e6363ace0244' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Tslc' 'ICAOAddress' 'Callsign' 'Latitude' 'Longitude' 'Altitude' 'Heading' 'HorVelocity' 'VerVelocity' 'AltitudeType' 'EmitterType' 'Flags' 'Squawk' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'tslc' 'ICAO_address' 'callsign' 'latitude' 'longitude' 'altitude' 'heading' 'hor_velocity' 'ver_velocity' 'altitude_type' 'emitter_type' 'flags' 'squawk' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msg.Duration' ...
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
        ALTPRESSUREQNH = uint8(0)
        ALTGEOMETRIC = uint8(1)
        EMITTERNOINFO = uint8(0)
        EMITTERLIGHT = uint8(1)
        EMITTERSMALL = uint8(2)
        EMITTERLARGE = uint8(3)
        EMITTERHIGHVORTEXLARGE = uint8(4)
        EMITTERHEAVY = uint8(5)
        EMITTERHIGHLYMANUV = uint8(6)
        EMITTERROTOCRAFT = uint8(7)
        EMITTERUNASSIGNED = uint8(8)
        EMITTERGLIDER = uint8(9)
        EMITTERLIGHTERAIR = uint8(10)
        EMITTERPARACHUTE = uint8(11)
        EMITTERULTRALIGHT = uint8(12)
        EMITTERUNASSIGNED2 = uint8(13)
        EMITTERUAV = uint8(14)
        EMITTERSPACE = uint8(15)
        EMITTERUNASSGINED3 = uint8(16)
        EMITTEREMERGENCYSURFACE = uint8(17)
        EMITTERSERVICESURFACE = uint8(18)
        EMITTERPOINTOBSTACLE = uint8(19)
        FLAGVALIDCOORDS = uint16(1)
        FLAGVALIDALTITUDE = uint16(2)
        FLAGVALIDHEADING = uint16(4)
        FLAGVALIDVELOCITY = uint16(8)
        FLAGVALIDCALLSIGN = uint16(16)
        FLAGVALIDSQUAWK = uint16(32)
        FLAGSIMULATED = uint16(64)
        FLAGVERTICALVELOCITYVALID = uint16(128)
        FLAGBAROVALID = uint16(256)
        FLAGSOURCEUAT = uint16(32768)
    end
    properties
        Header
        Tslc
        ICAOAddress
        Callsign
        Latitude
        Longitude
        Altitude
        Heading
        HorVelocity
        VerVelocity
        AltitudeType
        EmitterType
        Flags
        Squawk
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Header')
            obj.Header = val;
        end
        function set.Tslc(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.Duration'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Tslc')
            obj.Tslc = val;
        end
        function set.ICAOAddress(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'ICAOAddress');
            obj.ICAOAddress = uint32(val);
        end
        function set.Callsign(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Callsign');
            obj.Callsign = char(val);
        end
        function set.Latitude(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Latitude');
            obj.Latitude = double(val);
        end
        function set.Longitude(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Longitude');
            obj.Longitude = double(val);
        end
        function set.Altitude(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Altitude');
            obj.Altitude = single(val);
        end
        function set.Heading(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Heading');
            obj.Heading = single(val);
        end
        function set.HorVelocity(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'HorVelocity');
            obj.HorVelocity = single(val);
        end
        function set.VerVelocity(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'VerVelocity');
            obj.VerVelocity = single(val);
        end
        function set.AltitudeType(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'AltitudeType');
            obj.AltitudeType = uint8(val);
        end
        function set.EmitterType(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'EmitterType');
            obj.EmitterType = uint8(val);
        end
        function set.Flags(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Flags');
            obj.Flags = uint16(val);
        end
        function set.Squawk(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ADSBVehicle', 'Squawk');
            obj.Squawk = uint16(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.ADSBVehicle.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.ADSBVehicle(strObj);
        end
    end
end
