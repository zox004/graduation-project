
classdef Biotac < ros.Message
    %Biotac MATLAB implementation of sr_robot_msgs/Biotac
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'sr_robot_msgs/Biotac' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '45887a982dc5cee83be90c94c9db9f12' % The MD5 Checksum of the message definition
        PropertyList = { 'Pac0' 'Pac1' 'Pdc' 'Tac' 'Tdc' 'Electrodes' } % List of non-constant message properties
        ROSPropertyList = { 'pac0' 'pac1' 'pdc' 'tac' 'tdc' 'electrodes' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Pac0
        Pac1
        Pdc
        Tac
        Tdc
        Electrodes
    end
    methods
        function set.Pac0(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Biotac', 'Pac0');
            obj.Pac0 = int16(val);
        end
        function set.Pac1(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Biotac', 'Pac1');
            obj.Pac1 = int16(val);
        end
        function set.Pdc(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Biotac', 'Pdc');
            obj.Pdc = int16(val);
        end
        function set.Tac(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Biotac', 'Tac');
            obj.Tac = int16(val);
        end
        function set.Tdc(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Biotac', 'Tdc');
            obj.Tdc = int16(val);
        end
        function set.Electrodes(obj, val)
            validClasses = {'numeric'};
            val = val(:);
            validAttributes = {'vector', 'numel', 19};
            validateattributes(val, validClasses, validAttributes, 'Biotac', 'Electrodes');
            obj.Electrodes = int16(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.sr_robot_msgs.Biotac.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.sr_robot_msgs.Biotac(strObj);
        end
    end
end
