
classdef SpawnRobotActionResult < ros.Message
    %SpawnRobotActionResult MATLAB implementation of stdr_msgs/SpawnRobotActionResult
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'stdr_msgs/SpawnRobotActionResult' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'f95a810c7b5f2579dca2ec191de2a05c' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Status' 'Result' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'status' 'result' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.actionlib_msgs.GoalStatus' ...
            'ros.msggen.stdr_msgs.SpawnRobotResult' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Status
        Result
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'SpawnRobotActionResult', 'Header')
            obj.Header = val;
        end
        function set.Status(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.actionlib_msgs.GoalStatus'};
            validateattributes(val, validClasses, validAttributes, 'SpawnRobotActionResult', 'Status')
            obj.Status = val;
        end
        function set.Result(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.stdr_msgs.SpawnRobotResult'};
            validateattributes(val, validClasses, validAttributes, 'SpawnRobotActionResult', 'Result')
            obj.Result = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.stdr_msgs.SpawnRobotActionResult.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.stdr_msgs.SpawnRobotActionResult(strObj);
        end
    end
end
