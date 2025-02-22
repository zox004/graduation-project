
classdef Hand < ros.Message
    %Hand MATLAB implementation of leap_motion/Hand
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.

    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'leap_motion/Hand' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'acb25b682923782ccfb65adca40c2540' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'PalmCenter' 'FingerList' 'GestureList' 'LmcHandId' 'IsPresent' 'ValidGestures' 'TimeVisible' 'Confidence' 'Roll' 'Pitch' 'Yaw' 'GrabStrength' 'PinchStrength' 'PalmVelocity' 'PalmWidth' 'SphereRadius' 'SphereCenter' 'WristPosition' 'ToString' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'palm_center' 'finger_list' 'gesture_list' 'lmc_hand_id' 'is_present' 'valid_gestures' 'time_visible' 'confidence' 'roll' 'pitch' 'yaw' 'grab_strength' 'pinch_strength' 'palm_velocity' 'palm_width' 'sphere_radius' 'sphere_center' 'wrist_position' 'to_string' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
            'ros.msggen.geometry_msgs.Point' ...
            'ros.msggen.leap_motion.Finger' ...
            'ros.msggen.leap_motion.Gesture' ...
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
        PalmCenter
        FingerList
        GestureList
        LmcHandId
        IsPresent
        ValidGestures
        TimeVisible
        Confidence
        Roll
        Pitch
        Yaw
        GrabStrength
        PinchStrength
        PalmVelocity
        PalmWidth
        SphereRadius
        SphereCenter
        WristPosition
        ToString
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'Header')
            obj.Header = val;
        end
        function set.PalmCenter(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Point'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'PalmCenter')
            obj.PalmCenter = val;
        end
        function set.FingerList(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.leap_motion.Finger.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.leap_motion.Finger'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'FingerList')
            obj.FingerList = val;
        end
        function set.GestureList(obj, val)
            if isempty(val)
                % Allow empty [] input
                val = ros.msggen.leap_motion.Gesture.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validClasses = {'ros.msggen.leap_motion.Gesture'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'GestureList')
            obj.GestureList = val;
        end
        function set.LmcHandId(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'LmcHandId');
            obj.LmcHandId = int32(val);
        end
        function set.IsPresent(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'IsPresent');
            obj.IsPresent = logical(val);
        end
        function set.ValidGestures(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'ValidGestures');
            obj.ValidGestures = logical(val);
        end
        function set.TimeVisible(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'TimeVisible');
            obj.TimeVisible = single(val);
        end
        function set.Confidence(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'Confidence');
            obj.Confidence = single(val);
        end
        function set.Roll(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'Roll');
            obj.Roll = single(val);
        end
        function set.Pitch(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'Pitch');
            obj.Pitch = single(val);
        end
        function set.Yaw(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'Yaw');
            obj.Yaw = single(val);
        end
        function set.GrabStrength(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'GrabStrength');
            obj.GrabStrength = single(val);
        end
        function set.PinchStrength(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'PinchStrength');
            obj.PinchStrength = single(val);
        end
        function set.PalmVelocity(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'PalmVelocity');
            obj.PalmVelocity = single(val);
        end
        function set.PalmWidth(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'PalmWidth');
            obj.PalmWidth = single(val);
        end
        function set.SphereRadius(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'SphereRadius');
            obj.SphereRadius = single(val);
        end
        function set.SphereCenter(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'SphereCenter');
            obj.SphereCenter = single(val);
        end
        function set.WristPosition(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = single.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'WristPosition');
            obj.WristPosition = single(val);
        end
        function set.ToString(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Hand', 'ToString');
            obj.ToString = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.leap_motion.Hand.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.leap_motion.Hand(strObj);
        end
    end
end
