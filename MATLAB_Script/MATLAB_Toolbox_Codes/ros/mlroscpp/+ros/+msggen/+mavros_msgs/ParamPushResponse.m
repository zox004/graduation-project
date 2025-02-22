
classdef ParamPushResponse < ros.Message
    %ParamPushResponse MATLAB implementation of mavros_msgs/ParamPushResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/ParamPushResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'd3fc4d8cefa193382985a92a041a2a3d' % The MD5 Checksum of the message definition
        PropertyList = { 'Success' 'ParamTransfered' } % List of non-constant message properties
        ROSPropertyList = { 'success' 'param_transfered' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Success
        ParamTransfered
    end
    methods
        function set.Success(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ParamPushResponse', 'Success');
            obj.Success = logical(val);
        end
        function set.ParamTransfered(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ParamPushResponse', 'ParamTransfered');
            obj.ParamTransfered = uint32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.ParamPushResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.ParamPushResponse(strObj);
        end
    end
end
