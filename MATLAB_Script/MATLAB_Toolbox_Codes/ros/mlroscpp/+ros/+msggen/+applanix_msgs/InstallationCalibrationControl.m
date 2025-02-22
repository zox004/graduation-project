
classdef InstallationCalibrationControl < ros.Message
    %InstallationCalibrationControl MATLAB implementation of applanix_msgs/InstallationCalibrationControl
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'applanix_msgs/InstallationCalibrationControl' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '38570f4fc018a153e76cdbbb5df7679e' % The MD5 Checksum of the message definition
        PropertyList = { 'Transaction' 'Action' 'Select' } % List of non-constant message properties
        ROSPropertyList = { 'transaction' 'action' 'select' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        ACTIONNONE = uint8(0)
        ACTIONSTOP = uint8(1)
        ACTIONMANUALCALIBRATION = uint8(2)
        ACTIONAUTOCALIBRATION = uint8(3)
        ACTIONNORMALCALIBRATEDPARAMTRANSFER = uint8(4)
        ACTIONFORCEDCALIBRATEDPARAMTRANSFER = uint8(5)
        SELECTPRIMARYGNSSLEVERARM = uint8(1)
        SELECTAUX1GNSSLEVERARM = uint8(2)
        SELECTAUX2GNSSLEVERARM = uint8(4)
        SELECTDMILEVERARM = uint8(8)
        SELECTDMISCALEFACTOR = uint8(16)
        SELECTPOSITIONFIXLEVERARM = uint8(64)
    end
    properties
        Transaction
        Action
        Select
    end
    methods
        function set.Transaction(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'InstallationCalibrationControl', 'Transaction');
            obj.Transaction = uint16(val);
        end
        function set.Action(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'InstallationCalibrationControl', 'Action');
            obj.Action = uint8(val);
        end
        function set.Select(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'InstallationCalibrationControl', 'Select');
            obj.Select = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.applanix_msgs.InstallationCalibrationControl.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.applanix_msgs.InstallationCalibrationControl(strObj);
        end
    end
end
