
classdef DetectObjectsResponse < ros.Message
    %DetectObjectsResponse MATLAB implementation of cob_object_detection_msgs/DetectObjectsResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'cob_object_detection_msgs/DetectObjectsResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '6da5c76956a10a2b2a7e649614ba9504' % The MD5 Checksum of the message definition
        PropertyList = { 'ObjectList' } % List of non-constant message properties
        ROSPropertyList = { 'object_list' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.cob_object_detection_msgs.DetectionArray' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        ObjectList
    end
    methods
        function set.ObjectList(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.cob_object_detection_msgs.DetectionArray'};
            validateattributes(val, validClasses, validAttributes, 'DetectObjectsResponse', 'ObjectList')
            obj.ObjectList = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.cob_object_detection_msgs.DetectObjectsResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.cob_object_detection_msgs.DetectObjectsResponse(strObj);
        end
    end
end
