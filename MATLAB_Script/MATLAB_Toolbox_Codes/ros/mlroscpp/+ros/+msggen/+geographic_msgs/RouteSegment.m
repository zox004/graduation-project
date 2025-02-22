
classdef RouteSegment < ros.Message
    %RouteSegment MATLAB implementation of geographic_msgs/RouteSegment
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'geographic_msgs/RouteSegment' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '8583d1e2ddf1891c3934a5d2ed9a799c' % The MD5 Checksum of the message definition
        PropertyList = { 'Id' 'Start' 'End' 'Props' } % List of non-constant message properties
        ROSPropertyList = { 'id' 'start' 'end' 'props' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.uuid_msgs.UniqueID' ...
            'ros.msggen.uuid_msgs.UniqueID' ...
            'ros.msggen.uuid_msgs.UniqueID' ...
            'ros.msggen.geographic_msgs.KeyValue' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Id
        Start
        End
        Props
    end
    methods
        function set.Id(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.uuid_msgs.UniqueID'};
            validateattributes(val, validClasses, validAttributes, 'RouteSegment', 'Id')
            obj.Id = val;
        end
        function set.Start(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.uuid_msgs.UniqueID'};
            validateattributes(val, validClasses, validAttributes, 'RouteSegment', 'Start')
            obj.Start = val;
        end
        function set.End(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.uuid_msgs.UniqueID'};
            validateattributes(val, validClasses, validAttributes, 'RouteSegment', 'End')
            obj.End = val;
        end
        function set.Props(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.geographic_msgs.KeyValue.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.geographic_msgs.KeyValue'};
            validateattributes(val, validClasses, validAttributes, 'RouteSegment', 'Props')
            obj.Props = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.geographic_msgs.RouteSegment.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.geographic_msgs.RouteSegment(strObj);
        end
    end
end
