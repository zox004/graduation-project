
classdef GNSSChannelStatus < ros.Message
    %GNSSChannelStatus MATLAB implementation of applanix_msgs/GNSSChannelStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'applanix_msgs/GNSSChannelStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'e704e6e58bbc7d5b1e03c4dc44b6ebbf' % The MD5 Checksum of the message definition
        PropertyList = { 'SvPrn' 'Status' 'SvAzimuth' 'SvElevation' 'SvL1Snr' 'SvL2Snr' } % List of non-constant message properties
        ROSPropertyList = { 'sv_prn' 'status' 'sv_azimuth' 'sv_elevation' 'sv_l1_snr' 'sv_l2_snr' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            } % Types of contained nested messages
    end
    properties (Constant)
        STATUSL1IDLE = uint16(0)
        STATUSL1ACQUISITION = uint16(1)
        STATUSL1CODELOCK = uint16(3)
        STATUSL1PHASELOCK = uint16(5)
        STATUSL2IDLE = uint16(6)
        STATUSL2ACQUISITION = uint16(8)
        STATUSL2CODELOCK = uint16(9)
        STATUSL2PHASELOCK = uint16(11)
    end
    properties
        SvPrn
        Status
        SvAzimuth
        SvElevation
        SvL1Snr
        SvL2Snr
    end
    methods
        function set.SvPrn(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GNSSChannelStatus', 'SvPrn');
            obj.SvPrn = uint16(val);
        end
        function set.Status(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GNSSChannelStatus', 'Status');
            obj.Status = uint16(val);
        end
        function set.SvAzimuth(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GNSSChannelStatus', 'SvAzimuth');
            obj.SvAzimuth = single(val);
        end
        function set.SvElevation(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GNSSChannelStatus', 'SvElevation');
            obj.SvElevation = single(val);
        end
        function set.SvL1Snr(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GNSSChannelStatus', 'SvL1Snr');
            obj.SvL1Snr = single(val);
        end
        function set.SvL2Snr(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'GNSSChannelStatus', 'SvL2Snr');
            obj.SvL2Snr = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.applanix_msgs.GNSSChannelStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.applanix_msgs.GNSSChannelStatus(strObj);
        end
    end
end
