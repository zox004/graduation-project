
classdef CollisionDetectionState < ros.Message
    %CollisionDetectionState MATLAB implementation of baxter_core_msgs/CollisionDetectionState
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'baxter_core_msgs/CollisionDetectionState' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '7bde38c182b4d08fdc0635b116f65d04' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'CollisionState' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'collision_state' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        CollisionState
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'CollisionDetectionState', 'Header')
            obj.Header = val;
        end
        function set.CollisionState(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'CollisionDetectionState', 'CollisionState');
            obj.CollisionState = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.baxter_core_msgs.CollisionDetectionState.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.baxter_core_msgs.CollisionDetectionState(strObj);
        end
    end
end
