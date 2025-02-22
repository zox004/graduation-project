
classdef StartAppResponse < ros.Message
    %StartAppResponse MATLAB implementation of rocon_app_manager_msgs/StartAppResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'rocon_app_manager_msgs/StartAppResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'd47dedd876ba5df1daf4654018d1329b' % The MD5 Checksum of the message definition
        PropertyList = { 'Started' 'ErrorCode' 'Message' 'AppNamespace' } % List of non-constant message properties
        ROSPropertyList = { 'started' 'error_code' 'message' 'app_namespace' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Started
        ErrorCode
        Message
        AppNamespace
    end
    methods
        function set.Started(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'StartAppResponse', 'Started');
            obj.Started = logical(val);
        end
        function set.ErrorCode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'StartAppResponse', 'ErrorCode');
            obj.ErrorCode = int32(val);
        end
        function set.Message(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'StartAppResponse', 'Message');
            obj.Message = char(val);
        end
        function set.AppNamespace(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'StartAppResponse', 'AppNamespace');
            obj.AppNamespace = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.rocon_app_manager_msgs.StartAppResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.rocon_app_manager_msgs.StartAppResponse(strObj);
        end
    end
end
