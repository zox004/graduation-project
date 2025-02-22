
classdef FileOpenRequest < ros.Message
    %FileOpenRequest MATLAB implementation of mavros_msgs/FileOpenRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/FileOpenRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '5d3365f008508e7b1c9862cdbc4459de' % The MD5 Checksum of the message definition
        PropertyList = { 'FilePath' 'Mode' } % List of non-constant message properties
        ROSPropertyList = { 'file_path' 'mode' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        MODEREAD = uint8(0)
        MODEWRITE = uint8(1)
        MODECREATE = uint8(2)
    end
    properties
        FilePath
        Mode
    end
    methods
        function set.FilePath(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'FileOpenRequest', 'FilePath');
            obj.FilePath = char(val);
        end
        function set.Mode(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FileOpenRequest', 'Mode');
            obj.Mode = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.FileOpenRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.FileOpenRequest(strObj);
        end
    end
end
