
classdef CompressedAngleVectorPR2 < ros.Message
    %CompressedAngleVectorPR2 MATLAB implementation of jsk_network_tools/CompressedAngleVectorPR2
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'jsk_network_tools/CompressedAngleVectorPR2' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '41a167b428fc98b1c378a7ba1bae8d54' % The MD5 Checksum of the message definition
        PropertyList = { 'Angles' } % List of non-constant message properties
        ROSPropertyList = { 'angles' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Angles
    end
    methods
        function set.Angles(obj, val)
            validClasses = {'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 17};
            validateattributes(val, validClasses, validAttributes, 'CompressedAngleVectorPR2', 'Angles');
            obj.Angles = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.jsk_network_tools.CompressedAngleVectorPR2.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.jsk_network_tools.CompressedAngleVectorPR2(strObj);
        end
    end
end
