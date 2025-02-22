
classdef ListControllersResponse < ros.Message
    %ListControllersResponse MATLAB implementation of controller_manager_msgs/ListControllersResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'controller_manager_msgs/ListControllersResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1341feb2e63fa791f855565d0da950d8' % The MD5 Checksum of the message definition
        PropertyList = { 'Controller' } % List of non-constant message properties
        ROSPropertyList = { 'controller' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.controller_manager_msgs.ControllerState' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Controller
    end
    methods
        function set.Controller(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.controller_manager_msgs.ControllerState.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.controller_manager_msgs.ControllerState'};
            validateattributes(val, validClasses, validAttributes, 'ListControllersResponse', 'Controller')
            obj.Controller = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.controller_manager_msgs.ListControllersResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.controller_manager_msgs.ListControllersResponse(strObj);
        end
    end
end
