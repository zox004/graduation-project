
classdef ListCamerasResponse < ros.Message
    %ListCamerasResponse MATLAB implementation of baxter_core_msgs/ListCamerasResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'baxter_core_msgs/ListCamerasResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '855b31192ab61744e7deb992d94db7ff' % The MD5 Checksum of the message definition
        PropertyList = { 'Cameras' } % List of non-constant message properties
        ROSPropertyList = { 'cameras' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Cameras
    end
    methods
        function set.Cameras(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'cell', 'string'};
            if isempty(val)
                % Allow empty [] input
                val = cell.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'ListCamerasResponse', 'Cameras');
            obj.Cameras = cell(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.baxter_core_msgs.ListCamerasResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.baxter_core_msgs.ListCamerasResponse(strObj);
        end
    end
end
