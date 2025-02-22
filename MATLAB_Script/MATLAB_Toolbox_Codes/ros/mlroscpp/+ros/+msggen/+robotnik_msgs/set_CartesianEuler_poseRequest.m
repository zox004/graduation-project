
classdef set_CartesianEuler_poseRequest < ros.Message
    %set_CartesianEuler_poseRequest MATLAB implementation of robotnik_msgs/set_CartesianEuler_poseRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'robotnik_msgs/set_CartesianEuler_poseRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'cdb2d75b0c143402ced22eff49c8aa05' % The MD5 Checksum of the message definition
        PropertyList = { 'X' 'Y' 'Z' 'A' 'B' 'C' } % List of non-constant message properties
        ROSPropertyList = { 'x' 'y' 'z' 'A' 'B' 'C' } % List of non-constant ROS message properties
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
        X
        Y
        Z
        A
        B
        C
    end
    methods
        function set.X(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'set_CartesianEuler_poseRequest', 'X');
            obj.X = single(val);
        end
        function set.Y(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'set_CartesianEuler_poseRequest', 'Y');
            obj.Y = single(val);
        end
        function set.Z(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'set_CartesianEuler_poseRequest', 'Z');
            obj.Z = single(val);
        end
        function set.A(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'set_CartesianEuler_poseRequest', 'A');
            obj.A = single(val);
        end
        function set.B(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'set_CartesianEuler_poseRequest', 'B');
            obj.B = single(val);
        end
        function set.C(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'set_CartesianEuler_poseRequest', 'C');
            obj.C = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.robotnik_msgs.set_CartesianEuler_poseRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.robotnik_msgs.set_CartesianEuler_poseRequest(strObj);
        end
    end
end
