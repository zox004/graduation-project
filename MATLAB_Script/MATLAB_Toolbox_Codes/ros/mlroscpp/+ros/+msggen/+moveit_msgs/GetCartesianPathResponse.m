
classdef GetCartesianPathResponse < ros.Message
    %GetCartesianPathResponse MATLAB implementation of moveit_msgs/GetCartesianPathResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'moveit_msgs/GetCartesianPathResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '15ee95715c86802ada727b6361c6f4d2' % The MD5 Checksum of the message definition
        PropertyList = { 'StartState' 'Solution' 'ErrorCode' 'Fraction' } % List of non-constant message properties
        ROSPropertyList = { 'start_state' 'solution' 'error_code' 'fraction' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.moveit_msgs.RobotState' ...
            'ros.msggen.moveit_msgs.RobotTrajectory' ...
            'ros.msggen.moveit_msgs.MoveItErrorCodes' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        StartState
        Solution
        ErrorCode
        Fraction
    end
    methods
        function set.StartState(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.moveit_msgs.RobotState'};
            validateattributes(val, validClasses, validAttributes, 'GetCartesianPathResponse', 'StartState')
            obj.StartState = val;
        end
        function set.Solution(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.moveit_msgs.RobotTrajectory'};
            validateattributes(val, validClasses, validAttributes, 'GetCartesianPathResponse', 'Solution')
            obj.Solution = val;
        end
        function set.ErrorCode(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.moveit_msgs.MoveItErrorCodes'};
            validateattributes(val, validClasses, validAttributes, 'GetCartesianPathResponse', 'ErrorCode')
            obj.ErrorCode = val;
        end
        function set.Fraction(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetCartesianPathResponse', 'Fraction');
            obj.Fraction = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.moveit_msgs.GetCartesianPathResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.moveit_msgs.GetCartesianPathResponse(strObj);
        end
    end
end
