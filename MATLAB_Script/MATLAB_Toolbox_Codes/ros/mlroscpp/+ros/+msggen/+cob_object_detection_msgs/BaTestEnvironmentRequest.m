
classdef BaTestEnvironmentRequest < ros.Message
    %BaTestEnvironmentRequest MATLAB implementation of cob_object_detection_msgs/BaTestEnvironmentRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'cob_object_detection_msgs/BaTestEnvironmentRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '65aeb9eaa6cbc248861e82cf7f7464c0' % The MD5 Checksum of the message definition
        PropertyList = { 'NumberPoints' 'FrameViewNumber' 'ConePointsPerPlane' 'LimitErrorMatching' 'BaKernelParam' 'BaNumIter' 'BaInitialMu' 'BaFinalMuFactor' 'BaTau' 'AngleSigmaDegree' 'TranslateSigmaM' 'ObsPointSigmaM' 'WorldPointSigmaM' } % List of non-constant message properties
        ROSPropertyList = { 'number_points' 'frame_view_number' 'cone_points_per_plane' 'limit_error_matching' 'ba_kernel_param' 'ba_num_iter' 'ba_initial_mu' 'ba_final_mu_factor' 'ba_tau' 'angle_sigma_degree' 'translate_sigma_m' 'obs_point_sigma_m' 'world_point_sigma_m' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
            '' ...
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
        NumberPoints
        FrameViewNumber
        ConePointsPerPlane
        LimitErrorMatching
        BaKernelParam
        BaNumIter
        BaInitialMu
        BaFinalMuFactor
        BaTau
        AngleSigmaDegree
        TranslateSigmaM
        ObsPointSigmaM
        WorldPointSigmaM
    end
    methods
        function set.NumberPoints(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'NumberPoints');
            obj.NumberPoints = int32(val);
        end
        function set.FrameViewNumber(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'FrameViewNumber');
            obj.FrameViewNumber = single(val);
        end
        function set.ConePointsPerPlane(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'ConePointsPerPlane');
            obj.ConePointsPerPlane = single(val);
        end
        function set.LimitErrorMatching(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'LimitErrorMatching');
            obj.LimitErrorMatching = single(val);
        end
        function set.BaKernelParam(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'BaKernelParam');
            obj.BaKernelParam = single(val);
        end
        function set.BaNumIter(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'BaNumIter');
            obj.BaNumIter = int32(val);
        end
        function set.BaInitialMu(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'BaInitialMu');
            obj.BaInitialMu = single(val);
        end
        function set.BaFinalMuFactor(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'BaFinalMuFactor');
            obj.BaFinalMuFactor = single(val);
        end
        function set.BaTau(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'BaTau');
            obj.BaTau = single(val);
        end
        function set.AngleSigmaDegree(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'AngleSigmaDegree');
            obj.AngleSigmaDegree = single(val);
        end
        function set.TranslateSigmaM(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'TranslateSigmaM');
            obj.TranslateSigmaM = single(val);
        end
        function set.ObsPointSigmaM(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'ObsPointSigmaM');
            obj.ObsPointSigmaM = single(val);
        end
        function set.WorldPointSigmaM(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BaTestEnvironmentRequest', 'WorldPointSigmaM');
            obj.WorldPointSigmaM = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.cob_object_detection_msgs.BaTestEnvironmentRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.cob_object_detection_msgs.BaTestEnvironmentRequest(strObj);
        end
    end
end
