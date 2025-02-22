
classdef Edges < ros.Message
    %Edges MATLAB implementation of graph_msgs/Edges
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'graph_msgs/Edges' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1dcd54afd0b0c0fbebeb59dbdda4c026' % The MD5 Checksum of the message definition
        PropertyList = { 'NodeIds' 'Weights' } % List of non-constant message properties
        ROSPropertyList = { 'node_ids' 'weights' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        NodeIds
        Weights
    end
    methods
        function set.NodeIds(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Edges', 'NodeIds');
            obj.NodeIds = uint32(val);
        end
        function set.Weights(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = double.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Edges', 'Weights');
            obj.Weights = double(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.graph_msgs.Edges.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.graph_msgs.Edges(strObj);
        end
    end
end
