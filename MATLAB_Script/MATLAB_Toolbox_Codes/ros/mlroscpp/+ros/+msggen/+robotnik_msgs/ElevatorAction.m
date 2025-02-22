
classdef ElevatorAction < ros.Message
    %ElevatorAction MATLAB implementation of robotnik_msgs/ElevatorAction
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'robotnik_msgs/ElevatorAction' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '632c616886d6575f7d7145cd0384a359' % The MD5 Checksum of the message definition
        PropertyList = { 'Action' } % List of non-constant message properties
        ROSPropertyList = { 'action' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        RAISE = int32(1)
        LOWER = int32(-1)
        STOP = int32(0)
        NOACTION = int32(1000)
    end
    properties
        Action
    end
    methods
        function set.Action(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ElevatorAction', 'Action');
            obj.Action = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.robotnik_msgs.ElevatorAction.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.robotnik_msgs.ElevatorAction(strObj);
        end
    end
end
