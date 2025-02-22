
classdef ProjectedMapsInfoRequest < ros.Message
    %ProjectedMapsInfoRequest MATLAB implementation of map_msgs/ProjectedMapsInfoRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'map_msgs/ProjectedMapsInfoRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'd7980a33202421c8cd74565e57a4d229' % The MD5 Checksum of the message definition
        PropertyList = { 'ProjectedMapsInfo' } % List of non-constant message properties
        ROSPropertyList = { 'projected_maps_info' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.map_msgs.ProjectedMapInfo' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        ProjectedMapsInfo
    end
    methods
        function set.ProjectedMapsInfo(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.map_msgs.ProjectedMapInfo.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.map_msgs.ProjectedMapInfo'};
            validateattributes(val, validClasses, validAttributes, 'ProjectedMapsInfoRequest', 'ProjectedMapsInfo')
            obj.ProjectedMapsInfo = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.map_msgs.ProjectedMapsInfoRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.map_msgs.ProjectedMapsInfoRequest(strObj);
        end
    end
end
