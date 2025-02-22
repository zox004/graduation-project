
classdef AdvertiseResponse < ros.Message
    %AdvertiseResponse MATLAB implementation of gateway_msgs/AdvertiseResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'gateway_msgs/AdvertiseResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c389af2721ca403446acba93862aff4f' % The MD5 Checksum of the message definition
        PropertyList = { 'Watchlist' 'Result' 'ErrorMessage' } % List of non-constant message properties
        ROSPropertyList = { 'watchlist' 'result' 'error_message' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.gateway_msgs.Rule' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Watchlist
        Result
        ErrorMessage
    end
    methods
        function set.Watchlist(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.gateway_msgs.Rule.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.gateway_msgs.Rule'};
            validateattributes(val, validClasses, validAttributes, 'AdvertiseResponse', 'Watchlist')
            obj.Watchlist = val;
        end
        function set.Result(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'AdvertiseResponse', 'Result');
            obj.Result = int8(val);
        end
        function set.ErrorMessage(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'AdvertiseResponse', 'ErrorMessage');
            obj.ErrorMessage = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.gateway_msgs.AdvertiseResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.gateway_msgs.AdvertiseResponse(strObj);
        end
    end
end
