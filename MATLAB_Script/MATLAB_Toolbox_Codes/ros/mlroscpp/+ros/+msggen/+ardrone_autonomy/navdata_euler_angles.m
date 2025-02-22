
classdef navdata_euler_angles < ros.Message
    %navdata_euler_angles MATLAB implementation of ardrone_autonomy/navdata_euler_angles
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'ardrone_autonomy/navdata_euler_angles' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'ce675f5dfa1b9c65f4844f2311d307aa' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'DroneTime' 'Tag' 'Size' 'ThetaA' 'PhiA' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'drone_time' 'tag' 'size' 'theta_a' 'phi_a' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
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
        Header
        DroneTime
        Tag
        Size
        ThetaA
        PhiA
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'navdata_euler_angles', 'Header')
            obj.Header = val;
        end
        function set.DroneTime(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_euler_angles', 'DroneTime');
            obj.DroneTime = double(val);
        end
        function set.Tag(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_euler_angles', 'Tag');
            obj.Tag = uint16(val);
        end
        function set.Size(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_euler_angles', 'Size');
            obj.Size = uint16(val);
        end
        function set.ThetaA(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_euler_angles', 'ThetaA');
            obj.ThetaA = single(val);
        end
        function set.PhiA(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'navdata_euler_angles', 'PhiA');
            obj.PhiA = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.ardrone_autonomy.navdata_euler_angles.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.ardrone_autonomy.navdata_euler_angles(strObj);
        end
    end
end
