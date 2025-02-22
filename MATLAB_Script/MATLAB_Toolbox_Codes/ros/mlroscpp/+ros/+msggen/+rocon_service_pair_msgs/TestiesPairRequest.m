
classdef TestiesPairRequest < ros.Message
    %TestiesPairRequest MATLAB implementation of rocon_service_pair_msgs/TestiesPairRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'rocon_service_pair_msgs/TestiesPairRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '71ec95e384ce52aa32491f3b69a62027' % The MD5 Checksum of the message definition
        PropertyList = { 'Id' 'Request' } % List of non-constant message properties
        ROSPropertyList = { 'id' 'request' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.uuid_msgs.UniqueID' ...
            'ros.msggen.rocon_service_pair_msgs.TestiesRequest' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Id
        Request
    end
    methods
        function set.Id(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.uuid_msgs.UniqueID'};
            validateattributes(val, validClasses, validAttributes, 'TestiesPairRequest', 'Id')
            obj.Id = val;
        end
        function set.Request(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.rocon_service_pair_msgs.TestiesRequest'};
            validateattributes(val, validClasses, validAttributes, 'TestiesPairRequest', 'Request')
            obj.Request = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.rocon_service_pair_msgs.TestiesPairRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.rocon_service_pair_msgs.TestiesPairRequest(strObj);
        end
    end
end
