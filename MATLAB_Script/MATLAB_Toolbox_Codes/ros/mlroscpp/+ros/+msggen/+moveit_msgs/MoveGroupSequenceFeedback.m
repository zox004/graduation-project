
classdef MoveGroupSequenceFeedback < ros.Message
    %MoveGroupSequenceFeedback MATLAB implementation of moveit_msgs/MoveGroupSequenceFeedback
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'moveit_msgs/MoveGroupSequenceFeedback' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'af6d3a99f0fbeb66d3248fa4b3e675fb' % The MD5 Checksum of the message definition
        PropertyList = { 'State' } % List of non-constant message properties
        ROSPropertyList = { 'state' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        State
    end
    methods
        function set.State(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'MoveGroupSequenceFeedback', 'State');
            obj.State = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.moveit_msgs.MoveGroupSequenceFeedback.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.moveit_msgs.MoveGroupSequenceFeedback(strObj);
        end
    end
end
