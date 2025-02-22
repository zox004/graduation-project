
classdef Distance < ros.Message
    %Distance MATLAB implementation of clearpath_base/Distance
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'clearpath_base/Distance' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '5cd97954696edc5d59dd80cb0218765a' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Distances' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'distances' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Distances
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'Distance', 'Header')
            obj.Header = val;
        end
        function set.Distances(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Distance', 'Distances');
            obj.Distances = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.clearpath_base.Distance.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.clearpath_base.Distance(strObj);
        end
    end
end
