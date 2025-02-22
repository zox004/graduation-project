
classdef GetMotorsHeadingOffsetResponse < ros.Message
    %GetMotorsHeadingOffsetResponse MATLAB implementation of robotnik_msgs/GetMotorsHeadingOffsetResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'robotnik_msgs/GetMotorsHeadingOffsetResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '5893bfa41a37a6679598a2513e065848' % The MD5 Checksum of the message definition
        PropertyList = { 'Offsets' } % List of non-constant message properties
        ROSPropertyList = { 'offsets' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.robotnik_msgs.MotorHeadingOffset' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Offsets
    end
    methods
        function set.Offsets(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.robotnik_msgs.MotorHeadingOffset.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.robotnik_msgs.MotorHeadingOffset'};
            validateattributes(val, validClasses, validAttributes, 'GetMotorsHeadingOffsetResponse', 'Offsets')
            obj.Offsets = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.robotnik_msgs.GetMotorsHeadingOffsetResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.robotnik_msgs.GetMotorsHeadingOffsetResponse(strObj);
        end
    end
end
