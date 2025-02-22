
classdef FibonacciResult < ros.Message
    %FibonacciResult MATLAB implementation of actionlib_tutorials/FibonacciResult
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'actionlib_tutorials/FibonacciResult' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'b81e37d2a31925a0e8ae261a8699cb79' % The MD5 Checksum of the message definition
        PropertyList = { 'Sequence' } % List of non-constant message properties
        ROSPropertyList = { 'sequence' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Sequence
    end
    methods
        function set.Sequence(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = int32.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FibonacciResult', 'Sequence');
            obj.Sequence = int32(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.actionlib_tutorials.FibonacciResult.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.actionlib_tutorials.FibonacciResult(strObj);
        end
    end
end
