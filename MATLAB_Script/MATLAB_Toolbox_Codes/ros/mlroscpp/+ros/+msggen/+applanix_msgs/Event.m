
classdef Event < ros.Message
    %Event MATLAB implementation of applanix_msgs/Event
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'applanix_msgs/Event' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '2d96e1facadb782cdf8ef56d7e874213' % The MD5 Checksum of the message definition
        PropertyList = { 'Td' 'PulseNumber' } % List of non-constant message properties
        ROSPropertyList = { 'td' 'pulse_number' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.applanix_msgs.TimeDistance' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Td
        PulseNumber
    end
    methods
        function set.Td(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.applanix_msgs.TimeDistance'};
            validateattributes(val, validClasses, validAttributes, 'Event', 'Td')
            obj.Td = val;
        end
        function set.PulseNumber(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Event', 'PulseNumber');
            obj.PulseNumber = uint32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.applanix_msgs.Event.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.applanix_msgs.Event(strObj);
        end
    end
end
