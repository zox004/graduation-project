
classdef MotionSequenceRequest < ros.Message
    %MotionSequenceRequest MATLAB implementation of moveit_msgs/MotionSequenceRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'moveit_msgs/MotionSequenceRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'd6e6d4da3bede363f50e4ffbac7629a0' % The MD5 Checksum of the message definition
        PropertyList = { 'Items' } % List of non-constant message properties
        ROSPropertyList = { 'items' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.moveit_msgs.MotionSequenceItem' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Items
    end
    methods
        function set.Items(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.moveit_msgs.MotionSequenceItem.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.moveit_msgs.MotionSequenceItem'};
            validateattributes(val, validClasses, validAttributes, 'MotionSequenceRequest', 'Items')
            obj.Items = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.moveit_msgs.MotionSequenceRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.moveit_msgs.MotionSequenceRequest(strObj);
        end
    end
end
