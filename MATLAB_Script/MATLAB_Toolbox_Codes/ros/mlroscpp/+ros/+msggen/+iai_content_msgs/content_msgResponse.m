
classdef content_msgResponse < ros.Message
    %content_msgResponse MATLAB implementation of iai_content_msgs/content_msgResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'iai_content_msgs/content_msgResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c2e84951ee6d0addf437bfddd5b19734' % The MD5 Checksum of the message definition
        PropertyList = { 'Content' } % List of non-constant message properties
        ROSPropertyList = { 'content' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Content
    end
    methods
        function set.Content(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'content_msgResponse', 'Content');
            obj.Content = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.iai_content_msgs.content_msgResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.iai_content_msgs.content_msgResponse(strObj);
        end
    end
end
