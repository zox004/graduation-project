
classdef ComposeTrajectoryRequest < ros.Message
    %ComposeTrajectoryRequest MATLAB implementation of cob_script_server/ComposeTrajectoryRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'cob_script_server/ComposeTrajectoryRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '76372377a1482b46491653676d8d40f4' % The MD5 Checksum of the message definition
        PropertyList = { 'ComponentName' 'ParameterName' } % List of non-constant message properties
        ROSPropertyList = { 'component_name' 'parameter_name' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        ComponentName
        ParameterName
    end
    methods
        function set.ComponentName(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ComposeTrajectoryRequest', 'ComponentName');
            obj.ComponentName = char(val);
        end
        function set.ParameterName(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ComposeTrajectoryRequest', 'ParameterName');
            obj.ParameterName = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.cob_script_server.ComposeTrajectoryRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.cob_script_server.ComposeTrajectoryRequest(strObj);
        end
    end
end
