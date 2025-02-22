
classdef RemoteAllRequest < ros.Message
    %RemoteAllRequest MATLAB implementation of gateway_msgs/RemoteAllRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'gateway_msgs/RemoteAllRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '036fdb1a9946cb6fec17ef2d907450d9' % The MD5 Checksum of the message definition
        PropertyList = { 'Blacklist' 'Gateway' 'Cancel' } % List of non-constant message properties
        ROSPropertyList = { 'blacklist' 'gateway' 'cancel' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.gateway_msgs.Rule' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Blacklist
        Gateway
        Cancel
    end
    methods
        function set.Blacklist(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.gateway_msgs.Rule.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.gateway_msgs.Rule'};
            validateattributes(val, validClasses, validAttributes, 'RemoteAllRequest', 'Blacklist')
            obj.Blacklist = val;
        end
        function set.Gateway(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'RemoteAllRequest', 'Gateway');
            obj.Gateway = char(val);
        end
        function set.Cancel(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RemoteAllRequest', 'Cancel');
            obj.Cancel = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.gateway_msgs.RemoteAllRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.gateway_msgs.RemoteAllRequest(strObj);
        end
    end
end
