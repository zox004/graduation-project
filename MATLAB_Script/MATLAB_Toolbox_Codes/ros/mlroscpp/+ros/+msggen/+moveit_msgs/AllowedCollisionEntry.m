
classdef AllowedCollisionEntry < ros.Message
    %AllowedCollisionEntry MATLAB implementation of moveit_msgs/AllowedCollisionEntry
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'moveit_msgs/AllowedCollisionEntry' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '90d1ae1850840724bb043562fe3285fc' % The MD5 Checksum of the message definition
        PropertyList = { 'Enabled' } % List of non-constant message properties
        ROSPropertyList = { 'enabled' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Enabled
    end
    methods
        function set.Enabled(obj, val)
            validClasses = {'logical', 'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = logical.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'AllowedCollisionEntry', 'Enabled');
            obj.Enabled = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.moveit_msgs.AllowedCollisionEntry.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.moveit_msgs.AllowedCollisionEntry(strObj);
        end
    end
end
