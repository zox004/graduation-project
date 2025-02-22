
classdef GetPlatformInfoResponse < ros.Message
    %GetPlatformInfoResponse MATLAB implementation of rocon_app_manager_msgs/GetPlatformInfoResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'rocon_app_manager_msgs/GetPlatformInfoResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'd3a75b8e8f07aea96f74c921f13e7d59' % The MD5 Checksum of the message definition
        PropertyList = { 'PlatformInfo' } % List of non-constant message properties
        ROSPropertyList = { 'platform_info' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.rocon_app_manager_msgs.PlatformInfo' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        PlatformInfo
    end
    methods
        function set.PlatformInfo(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.rocon_app_manager_msgs.PlatformInfo'};
            validateattributes(val, validClasses, validAttributes, 'GetPlatformInfoResponse', 'PlatformInfo')
            obj.PlatformInfo = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.rocon_app_manager_msgs.GetPlatformInfoResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.rocon_app_manager_msgs.GetPlatformInfoResponse(strObj);
        end
    end
end
