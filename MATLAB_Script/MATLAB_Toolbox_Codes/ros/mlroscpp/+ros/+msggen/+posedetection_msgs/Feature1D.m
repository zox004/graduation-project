
classdef Feature1D < ros.Message
    %Feature1D MATLAB implementation of posedetection_msgs/Feature1D
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'posedetection_msgs/Feature1D' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '4568f21f2dd0840ca2d658d4d1710f33' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Lines' 'Descriptors' 'Confidences' 'DescriptorDim' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'lines' 'descriptors' 'confidences' 'descriptor_dim' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.posedetection_msgs.Curve1D' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Lines
        Descriptors
        Confidences
        DescriptorDim
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'Feature1D', 'Header')
            obj.Header = val;
        end
        function set.Lines(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.posedetection_msgs.Curve1D.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.posedetection_msgs.Curve1D'};
            validateattributes(val, validClasses, validAttributes, 'Feature1D', 'Lines')
            obj.Lines = val;
        end
        function set.Descriptors(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Feature1D', 'Descriptors');
            obj.Descriptors = single(val);
        end
        function set.Confidences(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Feature1D', 'Confidences');
            obj.Confidences = single(val);
        end
        function set.DescriptorDim(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Feature1D', 'DescriptorDim');
            obj.DescriptorDim = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.posedetection_msgs.Feature1D.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.posedetection_msgs.Feature1D(strObj);
        end
    end
end
