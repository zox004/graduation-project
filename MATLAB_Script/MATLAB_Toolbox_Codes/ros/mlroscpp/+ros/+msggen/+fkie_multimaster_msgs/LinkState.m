
classdef LinkState < ros.Message
    %LinkState MATLAB implementation of fkie_multimaster_msgs/LinkState
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'fkie_multimaster_msgs/LinkState' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'fd2554dabc9a5d69f4842dd42dd3e0f3' % The MD5 Checksum of the message definition
        PropertyList = { 'LastHeartbeat' 'Destination' 'Quality' } % List of non-constant message properties
        ROSPropertyList = { 'last_heartbeat' 'destination' 'quality' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msg.Time' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        LastHeartbeat
        Destination
        Quality
    end
    methods
        function set.LastHeartbeat(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.Time'};
            validateattributes(val, validClasses, validAttributes, 'LinkState', 'LastHeartbeat')
            obj.LastHeartbeat = val;
        end
        function set.Destination(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'LinkState', 'Destination');
            obj.Destination = char(val);
        end
        function set.Quality(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'LinkState', 'Quality');
            obj.Quality = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.fkie_multimaster_msgs.LinkState.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.fkie_multimaster_msgs.LinkState(strObj);
        end
    end
end
