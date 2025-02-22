
classdef PowerState < ros.Message
    %PowerState MATLAB implementation of pr2_msgs/PowerState
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_msgs/PowerState' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'e6fa46a387cad0b7a80959a21587a6c9' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'TimeRemaining' 'PowerConsumption' 'PredictionMethod' 'RelativeCapacity' 'ACPresent' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'time_remaining' 'power_consumption' 'prediction_method' 'relative_capacity' 'AC_present' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msg.Duration' ...
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
        TimeRemaining
        PowerConsumption
        PredictionMethod
        RelativeCapacity
        ACPresent
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'PowerState', 'Header')
            obj.Header = val;
        end
        function set.TimeRemaining(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.Duration'};
            validateattributes(val, validClasses, validAttributes, 'PowerState', 'TimeRemaining')
            obj.TimeRemaining = val;
        end
        function set.PowerConsumption(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PowerState', 'PowerConsumption');
            obj.PowerConsumption = double(val);
        end
        function set.PredictionMethod(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'PowerState', 'PredictionMethod');
            obj.PredictionMethod = char(val);
        end
        function set.RelativeCapacity(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PowerState', 'RelativeCapacity');
            obj.RelativeCapacity = int8(val);
        end
        function set.ACPresent(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PowerState', 'ACPresent');
            obj.ACPresent = int8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_msgs.PowerState.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_msgs.PowerState(strObj);
        end
    end
end
