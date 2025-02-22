
classdef SetCostmapRequest < ros.Message
    %SetCostmapRequest MATLAB implementation of navfn/SetCostmapRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'navfn/SetCostmapRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '370ec969cdb71f9cde7c7cbe0d752308' % The MD5 Checksum of the message definition
        PropertyList = { 'Costs' 'Height' 'Width' } % List of non-constant message properties
        ROSPropertyList = { 'costs' 'height' 'width' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Costs
        Height
        Width
    end
    methods
        function set.Costs(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint8.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'SetCostmapRequest', 'Costs');
            obj.Costs = uint8(val);
        end
        function set.Height(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetCostmapRequest', 'Height');
            obj.Height = uint16(val);
        end
        function set.Width(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetCostmapRequest', 'Width');
            obj.Width = uint16(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.navfn.SetCostmapRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.navfn.SetCostmapRequest(strObj);
        end
    end
end
