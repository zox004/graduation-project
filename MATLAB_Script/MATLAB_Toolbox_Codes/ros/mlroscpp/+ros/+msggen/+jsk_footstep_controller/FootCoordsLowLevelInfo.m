
classdef FootCoordsLowLevelInfo < ros.Message
    %FootCoordsLowLevelInfo MATLAB implementation of jsk_footstep_controller/FootCoordsLowLevelInfo
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'jsk_footstep_controller/FootCoordsLowLevelInfo' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'f03f7aaafde613e7d2247f1ee6314403' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'RawLlegForce' 'RawRlegForce' 'FilteredLlegForce' 'FilteredRlegForce' 'Threshold' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'raw_lleg_force' 'raw_rleg_force' 'filtered_lleg_force' 'filtered_rleg_force' 'threshold' } % List of non-constant ROS message properties
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
        RawLlegForce
        RawRlegForce
        FilteredLlegForce
        FilteredRlegForce
        Threshold
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'FootCoordsLowLevelInfo', 'Header')
            obj.Header = val;
        end
        function set.RawLlegForce(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FootCoordsLowLevelInfo', 'RawLlegForce');
            obj.RawLlegForce = double(val);
        end
        function set.RawRlegForce(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FootCoordsLowLevelInfo', 'RawRlegForce');
            obj.RawRlegForce = double(val);
        end
        function set.FilteredLlegForce(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FootCoordsLowLevelInfo', 'FilteredLlegForce');
            obj.FilteredLlegForce = double(val);
        end
        function set.FilteredRlegForce(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FootCoordsLowLevelInfo', 'FilteredRlegForce');
            obj.FilteredRlegForce = double(val);
        end
        function set.Threshold(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FootCoordsLowLevelInfo', 'Threshold');
            obj.Threshold = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.jsk_footstep_controller.FootCoordsLowLevelInfo.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.jsk_footstep_controller.FootCoordsLowLevelInfo(strObj);
        end
    end
end
