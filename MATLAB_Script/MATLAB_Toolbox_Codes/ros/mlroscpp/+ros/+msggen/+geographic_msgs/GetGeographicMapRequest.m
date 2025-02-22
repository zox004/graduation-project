
classdef GetGeographicMapRequest < ros.Message
    %GetGeographicMapRequest MATLAB implementation of geographic_msgs/GetGeographicMapRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'geographic_msgs/GetGeographicMapRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '505cc89008cb1745810d2ee4ea646d6e' % The MD5 Checksum of the message definition
        PropertyList = { 'Bounds' 'Url' } % List of non-constant message properties
        ROSPropertyList = { 'bounds' 'url' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.geographic_msgs.BoundingBox' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Bounds
        Url
    end
    methods
        function set.Bounds(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geographic_msgs.BoundingBox'};
            validateattributes(val, validClasses, validAttributes, 'GetGeographicMapRequest', 'Bounds')
            obj.Bounds = val;
        end
        function set.Url(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'GetGeographicMapRequest', 'Url');
            obj.Url = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.geographic_msgs.GetGeographicMapRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.geographic_msgs.GetGeographicMapRequest(strObj);
        end
    end
end
