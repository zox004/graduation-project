
classdef TaskTree < ros.Message
    %TaskTree MATLAB implementation of data_vis_msgs/TaskTree
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'data_vis_msgs/TaskTree' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'a4447319272190b864fdbc5675f1daae' % The MD5 Checksum of the message definition
        PropertyList = { 'Tree' 'Height' 'Width' } % List of non-constant message properties
        ROSPropertyList = { 'tree' 'height' 'width' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.data_vis_msgs.Task' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Tree
        Height
        Width
    end
    methods
        function set.Tree(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.data_vis_msgs.Task.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.data_vis_msgs.Task'};
            validateattributes(val, validClasses, validAttributes, 'TaskTree', 'Tree')
            obj.Tree = val;
        end
        function set.Height(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'TaskTree', 'Height');
            obj.Height = int32(val);
        end
        function set.Width(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'TaskTree', 'Width');
            obj.Width = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.data_vis_msgs.TaskTree.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.data_vis_msgs.TaskTree(strObj);
        end
    end
end
