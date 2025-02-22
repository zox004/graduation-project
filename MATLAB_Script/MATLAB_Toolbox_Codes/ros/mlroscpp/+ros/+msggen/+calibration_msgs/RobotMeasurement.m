
classdef RobotMeasurement < ros.Message
    %RobotMeasurement MATLAB implementation of calibration_msgs/RobotMeasurement
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'calibration_msgs/RobotMeasurement' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'fe22486c078efbf7892430dd0b99305c' % The MD5 Checksum of the message definition
        PropertyList = { 'MCam' 'MLaser' 'MChain' 'SampleId' 'TargetId' 'ChainId' } % List of non-constant message properties
        ROSPropertyList = { 'M_cam' 'M_laser' 'M_chain' 'sample_id' 'target_id' 'chain_id' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.calibration_msgs.CameraMeasurement' ...
            'ros.msggen.calibration_msgs.LaserMeasurement' ...
            'ros.msggen.calibration_msgs.ChainMeasurement' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        MCam
        MLaser
        MChain
        SampleId
        TargetId
        ChainId
    end
    methods
        function set.MCam(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.calibration_msgs.CameraMeasurement.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.calibration_msgs.CameraMeasurement'};
            validateattributes(val, validClasses, validAttributes, 'RobotMeasurement', 'MCam')
            obj.MCam = val;
        end
        function set.MLaser(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.calibration_msgs.LaserMeasurement.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.calibration_msgs.LaserMeasurement'};
            validateattributes(val, validClasses, validAttributes, 'RobotMeasurement', 'MLaser')
            obj.MLaser = val;
        end
        function set.MChain(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.calibration_msgs.ChainMeasurement.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.calibration_msgs.ChainMeasurement'};
            validateattributes(val, validClasses, validAttributes, 'RobotMeasurement', 'MChain')
            obj.MChain = val;
        end
        function set.SampleId(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'RobotMeasurement', 'SampleId');
            obj.SampleId = char(val);
        end
        function set.TargetId(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'RobotMeasurement', 'TargetId');
            obj.TargetId = char(val);
        end
        function set.ChainId(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'RobotMeasurement', 'ChainId');
            obj.ChainId = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.calibration_msgs.RobotMeasurement.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.calibration_msgs.RobotMeasurement(strObj);
        end
    end
end
