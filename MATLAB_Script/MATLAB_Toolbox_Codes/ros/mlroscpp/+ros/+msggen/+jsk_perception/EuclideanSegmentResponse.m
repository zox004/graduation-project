
classdef EuclideanSegmentResponse < ros.Message
    %EuclideanSegmentResponse MATLAB implementation of jsk_perception/EuclideanSegmentResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'jsk_perception/EuclideanSegmentResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '6db5ac8d8316fdb3e0c62197115f87cd' % The MD5 Checksum of the message definition
        PropertyList = { 'Output' } % List of non-constant message properties
        ROSPropertyList = { 'output' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msg.sensor_msgs.PointCloud2' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Output
    end
    methods
        function set.Output(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msg.sensor_msgs.PointCloud2.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msg.sensor_msgs.PointCloud2'};
            validateattributes(val, validClasses, validAttributes, 'EuclideanSegmentResponse', 'Output')
            obj.Output = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.jsk_perception.EuclideanSegmentResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.jsk_perception.EuclideanSegmentResponse(strObj);
        end
    end
end
