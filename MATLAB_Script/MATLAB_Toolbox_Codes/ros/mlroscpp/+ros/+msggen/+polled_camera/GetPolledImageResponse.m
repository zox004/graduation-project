
classdef GetPolledImageResponse < ros.Message
    %GetPolledImageResponse MATLAB implementation of polled_camera/GetPolledImageResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'polled_camera/GetPolledImageResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'dbf1f851bc511800e6129ccd5a3542ab' % The MD5 Checksum of the message definition
        PropertyList = { 'Stamp' 'Success' 'StatusMessage' } % List of non-constant message properties
        ROSPropertyList = { 'stamp' 'success' 'status_message' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msg.Time' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Stamp
        Success
        StatusMessage
    end
    methods
        function set.Stamp(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msg.Time'};
            validateattributes(val, validClasses, validAttributes, 'GetPolledImageResponse', 'Stamp')
            obj.Stamp = val;
        end
        function set.Success(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GetPolledImageResponse', 'Success');
            obj.Success = logical(val);
        end
        function set.StatusMessage(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'GetPolledImageResponse', 'StatusMessage');
            obj.StatusMessage = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.polled_camera.GetPolledImageResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.polled_camera.GetPolledImageResponse(strObj);
        end
    end
end
