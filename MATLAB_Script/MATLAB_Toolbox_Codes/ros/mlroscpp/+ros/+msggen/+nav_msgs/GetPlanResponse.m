
classdef GetPlanResponse < ros.Message
    %GetPlanResponse MATLAB implementation of nav_msgs/GetPlanResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'nav_msgs/GetPlanResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '0002bc113c0259d71f6cf8cbc9430e18' % The MD5 Checksum of the message definition
        PropertyList = { 'Plan' } % List of non-constant message properties
        ROSPropertyList = { 'plan' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.nav_msgs.Path' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Plan
    end
    methods
        function set.Plan(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.nav_msgs.Path'};
            validateattributes(val, validClasses, validAttributes, 'GetPlanResponse', 'Plan')
            obj.Plan = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.nav_msgs.GetPlanResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.nav_msgs.GetPlanResponse(strObj);
        end
    end
end
