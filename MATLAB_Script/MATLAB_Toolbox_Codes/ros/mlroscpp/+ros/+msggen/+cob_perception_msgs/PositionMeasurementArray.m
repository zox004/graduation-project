
classdef PositionMeasurementArray < ros.Message
    %PositionMeasurementArray MATLAB implementation of cob_perception_msgs/PositionMeasurementArray
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'cob_perception_msgs/PositionMeasurementArray' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'f76f3d050aeed243c9f1fbf9cfa040ee' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'People' 'Cooccurrence' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'people' 'cooccurrence' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.cob_perception_msgs.PositionMeasurement' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        People
        Cooccurrence
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'PositionMeasurementArray', 'Header')
            obj.Header = val;
        end
        function set.People(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.cob_perception_msgs.PositionMeasurement.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.cob_perception_msgs.PositionMeasurement'};
            validateattributes(val, validClasses, validAttributes, 'PositionMeasurementArray', 'People')
            obj.People = val;
        end
        function set.Cooccurrence(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'PositionMeasurementArray', 'Cooccurrence');
            obj.Cooccurrence = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.cob_perception_msgs.PositionMeasurementArray.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.cob_perception_msgs.PositionMeasurementArray(strObj);
        end
    end
end
