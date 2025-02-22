
classdef JointImpedances < ros.Message
    %JointImpedances MATLAB implementation of brics_actuator/JointImpedances
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'brics_actuator/JointImpedances' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '14fdbb76121290f17525acd99e7242c6' % The MD5 Checksum of the message definition
        PropertyList = { 'PoisonStamp' 'Dampings' 'Stiffnesses' } % List of non-constant message properties
        ROSPropertyList = { 'poisonStamp' 'dampings' 'stiffnesses' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.brics_actuator.Poison' ...
            'ros.msggen.brics_actuator.JointValue' ...
            'ros.msggen.brics_actuator.JointValue' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        PoisonStamp
        Dampings
        Stiffnesses
    end
    methods
        function set.PoisonStamp(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.brics_actuator.Poison'};
            validateattributes(val, validClasses, validAttributes, 'JointImpedances', 'PoisonStamp')
            obj.PoisonStamp = val;
        end
        function set.Dampings(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.brics_actuator.JointValue.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.brics_actuator.JointValue'};
            validateattributes(val, validClasses, validAttributes, 'JointImpedances', 'Dampings')
            obj.Dampings = val;
        end
        function set.Stiffnesses(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.brics_actuator.JointValue.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.brics_actuator.JointValue'};
            validateattributes(val, validClasses, validAttributes, 'JointImpedances', 'Stiffnesses')
            obj.Stiffnesses = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.brics_actuator.JointImpedances.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.brics_actuator.JointImpedances(strObj);
        end
    end
end
