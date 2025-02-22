
classdef UInt16 < ros.Message
    %UInt16 MATLAB implementation of std_msgs/UInt16
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'std_msgs/UInt16' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1df79edf208b629fe6b81923a544552d' % The MD5 Checksum of the message definition
        PropertyList = { 'Data' } % List of non-constant message properties
        ROSPropertyList = { 'data' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Data
    end
    methods
        function set.Data(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'UInt16', 'Data');
            obj.Data = uint16(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.std_msgs.UInt16.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.std_msgs.UInt16(strObj);
        end
    end
end
