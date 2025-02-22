
classdef Remapping < ros.Message
    %Remapping MATLAB implementation of rocon_std_msgs/Remapping
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'rocon_std_msgs/Remapping' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '26f16c667d483280bc5d040bf2c0cd8d' % The MD5 Checksum of the message definition
        PropertyList = { 'RemapFrom' 'RemapTo' } % List of non-constant message properties
        ROSPropertyList = { 'remap_from' 'remap_to' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        RemapFrom
        RemapTo
    end
    methods
        function set.RemapFrom(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Remapping', 'RemapFrom');
            obj.RemapFrom = char(val);
        end
        function set.RemapTo(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Remapping', 'RemapTo');
            obj.RemapTo = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.rocon_std_msgs.Remapping.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.rocon_std_msgs.Remapping(strObj);
        end
    end
end
