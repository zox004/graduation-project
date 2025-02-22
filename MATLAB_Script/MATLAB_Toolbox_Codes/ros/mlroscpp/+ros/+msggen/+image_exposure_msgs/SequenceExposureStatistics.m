
classdef SequenceExposureStatistics < ros.Message
    %SequenceExposureStatistics MATLAB implementation of image_exposure_msgs/SequenceExposureStatistics
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'image_exposure_msgs/SequenceExposureStatistics' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '2a4f3187c50e7b3544984e9e28ce4328' % The MD5 Checksum of the message definition
        PropertyList = { 'Exposures' 'UnderExposed' 'OverExposed' 'MeanIrradiance' 'MinMeasurableIrradiance' 'MaxMeasurableIrradiance' 'MinObservedIrradiance' 'MaxObservedIrradiance' } % List of non-constant message properties
        ROSPropertyList = { 'exposures' 'underExposed' 'overExposed' 'meanIrradiance' 'minMeasurableIrradiance' 'maxMeasurableIrradiance' 'minObservedIrradiance' 'maxObservedIrradiance' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.image_exposure_msgs.ImageExposureStatistics' ...
            '' ...
            '' ...
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
        Exposures
        UnderExposed
        OverExposed
        MeanIrradiance
        MinMeasurableIrradiance
        MaxMeasurableIrradiance
        MinObservedIrradiance
        MaxObservedIrradiance
    end
    methods
        function set.Exposures(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.image_exposure_msgs.ImageExposureStatistics.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.image_exposure_msgs.ImageExposureStatistics'};
            validateattributes(val, validClasses, validAttributes, 'SequenceExposureStatistics', 'Exposures')
            obj.Exposures = val;
        end
        function set.UnderExposed(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SequenceExposureStatistics', 'UnderExposed');
            obj.UnderExposed = uint32(val);
        end
        function set.OverExposed(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SequenceExposureStatistics', 'OverExposed');
            obj.OverExposed = uint32(val);
        end
        function set.MeanIrradiance(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SequenceExposureStatistics', 'MeanIrradiance');
            obj.MeanIrradiance = double(val);
        end
        function set.MinMeasurableIrradiance(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SequenceExposureStatistics', 'MinMeasurableIrradiance');
            obj.MinMeasurableIrradiance = double(val);
        end
        function set.MaxMeasurableIrradiance(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SequenceExposureStatistics', 'MaxMeasurableIrradiance');
            obj.MaxMeasurableIrradiance = double(val);
        end
        function set.MinObservedIrradiance(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SequenceExposureStatistics', 'MinObservedIrradiance');
            obj.MinObservedIrradiance = double(val);
        end
        function set.MaxObservedIrradiance(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SequenceExposureStatistics', 'MaxObservedIrradiance');
            obj.MaxObservedIrradiance = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.image_exposure_msgs.SequenceExposureStatistics.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.image_exposure_msgs.SequenceExposureStatistics(strObj);
        end
    end
end
