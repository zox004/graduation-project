
classdef VerifyPerceptRequest < ros.Message
    %VerifyPerceptRequest MATLAB implementation of hector_worldmodel_msgs/VerifyPerceptRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'hector_worldmodel_msgs/VerifyPerceptRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '9bd63c0c584500367d789d059094e625' % The MD5 Checksum of the message definition
        PropertyList = { 'Percept' } % List of non-constant message properties
        ROSPropertyList = { 'percept' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.hector_worldmodel_msgs.PosePercept' ...
            } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Percept
    end
    methods
        function set.Percept(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.hector_worldmodel_msgs.PosePercept'};
            validateattributes(val, validClasses, validAttributes, 'VerifyPerceptRequest', 'Percept')
            obj.Percept = val;
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.hector_worldmodel_msgs.VerifyPerceptRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.hector_worldmodel_msgs.VerifyPerceptRequest(strObj);
        end
    end
end
