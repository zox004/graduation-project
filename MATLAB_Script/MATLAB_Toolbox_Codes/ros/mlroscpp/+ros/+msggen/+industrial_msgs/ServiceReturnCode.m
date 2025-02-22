
classdef ServiceReturnCode < ros.Message
    %ServiceReturnCode MATLAB implementation of industrial_msgs/ServiceReturnCode
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'industrial_msgs/ServiceReturnCode' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '85a4e241266be66b1e1426b03083a412' % The MD5 Checksum of the message definition
        PropertyList = { 'Val' } % List of non-constant message properties
        ROSPropertyList = { 'val' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        SUCCESS = int8(1)
        FAILURE = int8(-1)
    end
    properties
        Val
    end
    methods
        function set.Val(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'ServiceReturnCode', 'Val');
            obj.Val = int8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.industrial_msgs.ServiceReturnCode.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.industrial_msgs.ServiceReturnCode(strObj);
        end
    end
end
