
classdef TakePanoramaResponse < ros.Message
    %TakePanoramaResponse MATLAB implementation of turtlebot_msgs/TakePanoramaResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'turtlebot_msgs/TakePanoramaResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1ebe3e03b034aa9578d367d7cf6ed627' % The MD5 Checksum of the message definition
        PropertyList = { 'Status' } % List of non-constant message properties
        ROSPropertyList = { 'status' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        STARTED = uint8(0)
        INPROGRESS = uint8(1)
        STOPPED = uint8(2)
    end
    properties
        Status
    end
    methods
        function set.Status(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'TakePanoramaResponse', 'Status');
            obj.Status = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.turtlebot_msgs.TakePanoramaResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.turtlebot_msgs.TakePanoramaResponse(strObj);
        end
    end
end
