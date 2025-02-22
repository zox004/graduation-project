
classdef QueryRequest < ros.Message
    %QueryRequest MATLAB implementation of jsk_gui_msgs/QueryRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'jsk_gui_msgs/QueryRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c5e4a7d59c68f74eabcec876a00216aa' % The MD5 Checksum of the message definition
        PropertyList = { 'Id' } % List of non-constant message properties
        ROSPropertyList = { 'id' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Id
    end
    methods
        function set.Id(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'QueryRequest', 'Id');
            obj.Id = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.jsk_gui_msgs.QueryRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.jsk_gui_msgs.QueryRequest(strObj);
        end
    end
end
