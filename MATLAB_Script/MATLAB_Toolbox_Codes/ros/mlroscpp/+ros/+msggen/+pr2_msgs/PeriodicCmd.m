
classdef PeriodicCmd < ros.Message
    %PeriodicCmd MATLAB implementation of pr2_msgs/PeriodicCmd
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'pr2_msgs/PeriodicCmd' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '95ab7e548e3d4274f83393129dd96c2e' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Profile' 'Period' 'Amplitude' 'Offset' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'profile' 'period' 'amplitude' 'offset' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
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
        Profile
        Period
        Amplitude
        Offset
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'PeriodicCmd', 'Header')
            obj.Header = val;
        end
        function set.Profile(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'PeriodicCmd', 'Profile');
            obj.Profile = char(val);
        end
        function set.Period(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PeriodicCmd', 'Period');
            obj.Period = double(val);
        end
        function set.Amplitude(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PeriodicCmd', 'Amplitude');
            obj.Amplitude = double(val);
        end
        function set.Offset(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PeriodicCmd', 'Offset');
            obj.Offset = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.pr2_msgs.PeriodicCmd.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.pr2_msgs.PeriodicCmd(strObj);
        end
    end
end
