
classdef GetRunningCapabilitiesResponse < ros.Message
    %GetRunningCapabilitiesResponse MATLAB implementation of capabilities/GetRunningCapabilitiesResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'capabilities/GetRunningCapabilitiesResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'e8e5cf68c34711ffaa719728f34ea7a3' % The MD5 Checksum of the message definition
        PropertyList = { 'RunningCapabilities' } % List of non-constant message properties
        ROSPropertyList = { 'running_capabilities' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.capabilities.RunningCapability' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        RunningCapabilities
    end
    methods
        function set.RunningCapabilities(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.capabilities.RunningCapability.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.capabilities.RunningCapability'};
            validateattributes(val, validClasses, validAttributes, 'GetRunningCapabilitiesResponse', 'RunningCapabilities')
            obj.RunningCapabilities = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.capabilities.GetRunningCapabilitiesResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.capabilities.GetRunningCapabilitiesResponse(strObj);
        end
    end
end
