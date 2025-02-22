
classdef SmachContainerStatus < ros.Message
    %SmachContainerStatus MATLAB implementation of smach_msgs/SmachContainerStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'smach_msgs/SmachContainerStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '5ba2bb79ac19e3842d562a191f2a675b' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Path' 'InitialStates' 'ActiveStates' 'LocalData' 'Info' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'path' 'initial_states' 'active_states' 'local_data' 'info' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
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
        Header
        Path
        InitialStates
        ActiveStates
        LocalData
        Info
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'SmachContainerStatus', 'Header')
            obj.Header = val;
        end
        function set.Path(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'SmachContainerStatus', 'Path');
            obj.Path = char(val);
        end
        function set.InitialStates(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'cell', 'string'};
            if isempty(val)
                % Allow empty [] input
                val = cell.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'SmachContainerStatus', 'InitialStates');
            obj.InitialStates = cell(val);
        end
        function set.ActiveStates(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'cell', 'string'};
            if isempty(val)
                % Allow empty [] input
                val = cell.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'SmachContainerStatus', 'ActiveStates');
            obj.ActiveStates = cell(val);
        end
        function set.LocalData(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'SmachContainerStatus', 'LocalData');
            obj.LocalData = char(val);
        end
        function set.Info(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'SmachContainerStatus', 'Info');
            obj.Info = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.smach_msgs.SmachContainerStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.smach_msgs.SmachContainerStatus(strObj);
        end
    end
end
