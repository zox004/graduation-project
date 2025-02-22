
classdef SetLinkStateRequest < ros.Message
    %SetLinkStateRequest MATLAB implementation of gazebo_msgs/SetLinkStateRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'gazebo_msgs/SetLinkStateRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '22a2c757d56911b6f27868159e9a872d' % The MD5 Checksum of the message definition
        PropertyList = { 'LinkState' } % List of non-constant message properties
        ROSPropertyList = { 'link_state' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.gazebo_msgs.LinkState' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        LinkState
    end
    methods
        function set.LinkState(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.gazebo_msgs.LinkState'};
            validateattributes(val, validClasses, validAttributes, 'SetLinkStateRequest', 'LinkState')
            obj.LinkState = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.gazebo_msgs.SetLinkStateRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.gazebo_msgs.SetLinkStateRequest(strObj);
        end
    end
end
