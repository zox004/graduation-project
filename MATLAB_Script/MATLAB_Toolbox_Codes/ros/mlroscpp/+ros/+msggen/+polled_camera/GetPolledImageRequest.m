
classdef GetPolledImageRequest < ros.Message
    %GetPolledImageRequest MATLAB implementation of polled_camera/GetPolledImageRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'polled_camera/GetPolledImageRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c77ed43e530fd48e9e7a2a93845e154c' % The MD5 Checksum of the message definition
        PropertyList = { 'Timeout' 'Roi' 'ResponseNamespace' 'BinningX' 'BinningY' } % List of non-constant message properties
        ROSPropertyList = { 'timeout' 'roi' 'response_namespace' 'binning_x' 'binning_y' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msg.Duration' ...
            'ros.msggen.sensor_msgs.RegionOfInterest' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Timeout
        Roi
        ResponseNamespace
        BinningX
        BinningY
    end
    methods
        function set.Timeout(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.Duration'};
            validateattributes(val, validClasses, validAttributes, 'GetPolledImageRequest', 'Timeout')
            obj.Timeout = val;
        end
        function set.Roi(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.sensor_msgs.RegionOfInterest'};
            validateattributes(val, validClasses, validAttributes, 'GetPolledImageRequest', 'Roi')
            obj.Roi = val;
        end
        function set.ResponseNamespace(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'GetPolledImageRequest', 'ResponseNamespace');
            obj.ResponseNamespace = char(val);
        end
        function set.BinningX(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetPolledImageRequest', 'BinningX');
            obj.BinningX = uint32(val);
        end
        function set.BinningY(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetPolledImageRequest', 'BinningY');
            obj.BinningY = uint32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.polled_camera.GetPolledImageRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.polled_camera.GetPolledImageRequest(strObj);
        end
    end
end
