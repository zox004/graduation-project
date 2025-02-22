
classdef DigitalOutput < ros.Message
    %DigitalOutput MATLAB implementation of kobuki_msgs/DigitalOutput
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'kobuki_msgs/DigitalOutput' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1e97cd7f196a0270516b506e8bf29ca2' % The MD5 Checksum of the message definition
        PropertyList = { 'Values' 'Mask' } % List of non-constant message properties
        ROSPropertyList = { 'values' 'mask' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Values
        Mask
    end
    methods
        function set.Values(obj, val)
            validClasses = {'logical', 'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 4};
            validateattributes(val, validClasses, validAttributes, 'DigitalOutput', 'Values');
            obj.Values = logical(val);
        end
        function set.Mask(obj, val)
            validClasses = {'logical', 'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 4};
            validateattributes(val, validClasses, validAttributes, 'DigitalOutput', 'Mask');
            obj.Mask = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.kobuki_msgs.DigitalOutput.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.kobuki_msgs.DigitalOutput(strObj);
        end
    end
end
