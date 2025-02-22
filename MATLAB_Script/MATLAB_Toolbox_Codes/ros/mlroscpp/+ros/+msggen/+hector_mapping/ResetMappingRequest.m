
classdef ResetMappingRequest < ros.Message
    %ResetMappingRequest MATLAB implementation of hector_mapping/ResetMappingRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'hector_mapping/ResetMappingRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '3423647d14c6c84592eef8b1184a5974' % The MD5 Checksum of the message definition
        PropertyList = { 'InitialPose' } % List of non-constant message properties
        ROSPropertyList = { 'initial_pose' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.geometry_msgs.Pose' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        InitialPose
    end
    methods
        function set.InitialPose(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Pose'};
            validateattributes(val, validClasses, validAttributes, 'ResetMappingRequest', 'InitialPose')
            obj.InitialPose = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.hector_mapping.ResetMappingRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.hector_mapping.ResetMappingRequest(strObj);
        end
    end
end
