
classdef NodeletLoadRequest < ros.Message
    %NodeletLoadRequest MATLAB implementation of nodelet/NodeletLoadRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'nodelet/NodeletLoadRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c6e28cc4d2e259249d96cfb50658fbec' % The MD5 Checksum of the message definition
        PropertyList = { 'Name' 'Type' 'RemapSourceArgs' 'RemapTargetArgs' 'MyArgv' 'BondId' } % List of non-constant message properties
        ROSPropertyList = { 'name' 'type' 'remap_source_args' 'remap_target_args' 'my_argv' 'bond_id' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Name
        Type
        RemapSourceArgs
        RemapTargetArgs
        MyArgv
        BondId
    end
    methods
        function set.Name(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'NodeletLoadRequest', 'Name');
            obj.Name = char(val);
        end
        function set.Type(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'NodeletLoadRequest', 'Type');
            obj.Type = char(val);
        end
        function set.RemapSourceArgs(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'cell', 'string'};
            if isempty(val)
                % Allow empty [] input
                val = cell.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'NodeletLoadRequest', 'RemapSourceArgs');
            obj.RemapSourceArgs = cell(val);
        end
        function set.RemapTargetArgs(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'cell', 'string'};
            if isempty(val)
                % Allow empty [] input
                val = cell.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'NodeletLoadRequest', 'RemapTargetArgs');
            obj.RemapTargetArgs = cell(val);
        end
        function set.MyArgv(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'cell', 'string'};
            if isempty(val)
                % Allow empty [] input
                val = cell.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'NodeletLoadRequest', 'MyArgv');
            obj.MyArgv = cell(val);
        end
        function set.BondId(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'NodeletLoadRequest', 'BondId');
            obj.BondId = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.nodelet.NodeletLoadRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.nodelet.NodeletLoadRequest(strObj);
        end
    end
end
