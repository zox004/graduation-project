
classdef MotorPID < ros.Message
    %MotorPID MATLAB implementation of robotnik_msgs/MotorPID
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'robotnik_msgs/MotorPID' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'a4f1747645e7d598483fc2ed471a485d' % The MD5 Checksum of the message definition
        PropertyList = { 'CanId' 'Name' 'Kp' 'Ki' 'Kd' } % List of non-constant message properties
        ROSPropertyList = { 'can_id' 'name' 'kp' 'ki' 'kd' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        CanId
        Name
        Kp
        Ki
        Kd
    end
    methods
        function set.CanId(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = int32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'MotorPID', 'CanId');
            obj.CanId = int32(val);
        end
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'cell', 'string'};
            if isempty(val)
                % Allow empty [] input
                val = cell.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'MotorPID', 'Name');
            obj.Name = cell(val);
        end
        function set.Kp(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'MotorPID', 'Kp');
            obj.Kp = single(val);
        end
        function set.Ki(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'MotorPID', 'Ki');
            obj.Ki = single(val);
        end
        function set.Kd(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'MotorPID', 'Kd');
            obj.Kd = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.robotnik_msgs.MotorPID.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.robotnik_msgs.MotorPID(strObj);
        end
    end
end
