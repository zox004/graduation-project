
classdef BodyRequestRequest < ros.Message
    %BodyRequestRequest MATLAB implementation of gazebo_msgs/BodyRequestRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'gazebo_msgs/BodyRequestRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '5eade9afe7f232d78005bd0cafeab755' % The MD5 Checksum of the message definition
        PropertyList = { 'BodyName' } % List of non-constant message properties
        ROSPropertyList = { 'body_name' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        BodyName
    end
    methods
        function set.BodyName(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'BodyRequestRequest', 'BodyName');
            obj.BodyName = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.gazebo_msgs.BodyRequestRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.gazebo_msgs.BodyRequestRequest(strObj);
        end
    end
end
