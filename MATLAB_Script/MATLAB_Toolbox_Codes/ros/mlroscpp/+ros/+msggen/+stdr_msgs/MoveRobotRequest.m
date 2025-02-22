
classdef MoveRobotRequest < ros.Message
    %MoveRobotRequest MATLAB implementation of stdr_msgs/MoveRobotRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'stdr_msgs/MoveRobotRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '3f8cb1536a8bfe7e956ece9331b2cd07' % The MD5 Checksum of the message definition
        PropertyList = { 'NewPose' } % List of non-constant message properties
        ROSPropertyList = { 'newPose' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.geometry_msgs.Pose2D' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        NewPose
    end
    methods
        function set.NewPose(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Pose2D'};
            validateattributes(val, validClasses, validAttributes, 'MoveRobotRequest', 'NewPose')
            obj.NewPose = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.stdr_msgs.MoveRobotRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.stdr_msgs.MoveRobotRequest(strObj);
        end
    end
end
