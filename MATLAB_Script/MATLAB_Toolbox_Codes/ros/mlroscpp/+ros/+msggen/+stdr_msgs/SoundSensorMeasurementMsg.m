
classdef SoundSensorMeasurementMsg < ros.Message
    %SoundSensorMeasurementMsg MATLAB implementation of stdr_msgs/SoundSensorMeasurementMsg
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'stdr_msgs/SoundSensorMeasurementMsg' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1f73a234937f6d19824ea2a78f157d78' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'SoundDbs' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'sound_dbs' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        SoundDbs
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'SoundSensorMeasurementMsg', 'Header')
            obj.Header = val;
        end
        function set.SoundDbs(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SoundSensorMeasurementMsg', 'SoundDbs');
            obj.SoundDbs = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.stdr_msgs.SoundSensorMeasurementMsg.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.stdr_msgs.SoundSensorMeasurementMsg(strObj);
        end
    end
end
