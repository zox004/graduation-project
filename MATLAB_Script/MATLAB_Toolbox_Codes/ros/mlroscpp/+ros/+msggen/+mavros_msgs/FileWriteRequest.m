
classdef FileWriteRequest < ros.Message
    %FileWriteRequest MATLAB implementation of mavros_msgs/FileWriteRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/FileWriteRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'cf1a270aa1398f3f1fac1649fe2275ef' % The MD5 Checksum of the message definition
        PropertyList = { 'FilePath' 'Offset' 'Data' } % List of non-constant message properties
        ROSPropertyList = { 'file_path' 'offset' 'data' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        FilePath
        Offset
        Data
    end
    methods
        function set.FilePath(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'FileWriteRequest', 'FilePath');
            obj.FilePath = char(val);
        end
        function set.Offset(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FileWriteRequest', 'Offset');
            obj.Offset = uint64(val);
        end
        function set.Data(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint8.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'FileWriteRequest', 'Data');
            obj.Data = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.FileWriteRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.FileWriteRequest(strObj);
        end
    end
end
