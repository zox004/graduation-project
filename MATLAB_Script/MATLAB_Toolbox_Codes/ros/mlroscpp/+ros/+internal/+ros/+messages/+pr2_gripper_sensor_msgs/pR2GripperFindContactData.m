function [data, info] = pR2GripperFindContactData
%PR2GripperFindContactData gives an empty data for pr2_gripper_sensor_msgs/PR2GripperFindContactData

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'pr2_gripper_sensor_msgs/PR2GripperFindContactData';
[data.Stamp, info.Stamp] = ros.internal.ros.messages.ros.time;
info.Stamp.MLdataType = 'struct';
[data.ContactConditionsMet, info.ContactConditionsMet] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.LeftFingertipPadContact, info.LeftFingertipPadContact] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.RightFingertipPadContact, info.RightFingertipPadContact] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.LeftFingertipPadForce, info.LeftFingertipPadForce] = ros.internal.ros.messages.ros.default_type('double',1);
[data.RightFingertipPadForce, info.RightFingertipPadForce] = ros.internal.ros.messages.ros.default_type('double',1);
[data.JointPosition, info.JointPosition] = ros.internal.ros.messages.ros.default_type('double',1);
[data.JointEffort, info.JointEffort] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Rtstate, info.Rtstate] = ros.internal.ros.messages.pr2_gripper_sensor_msgs.pR2GripperSensorRTState;
info.Rtstate.MLdataType = 'struct';
info.MessageType = 'pr2_gripper_sensor_msgs/PR2GripperFindContactData';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,17);
info.MatPath{1} = 'stamp';
info.MatPath{2} = 'stamp.sec';
info.MatPath{3} = 'stamp.nsec';
info.MatPath{4} = 'contact_conditions_met';
info.MatPath{5} = 'left_fingertip_pad_contact';
info.MatPath{6} = 'right_fingertip_pad_contact';
info.MatPath{7} = 'left_fingertip_pad_force';
info.MatPath{8} = 'right_fingertip_pad_force';
info.MatPath{9} = 'joint_position';
info.MatPath{10} = 'joint_effort';
info.MatPath{11} = 'rtstate';
info.MatPath{12} = 'rtstate.realtime_controller_state';
info.MatPath{13} = 'rtstate.DISABLED';
info.MatPath{14} = 'rtstate.POSITION_SERVO';
info.MatPath{15} = 'rtstate.FORCE_SERVO';
info.MatPath{16} = 'rtstate.FIND_CONTACT';
info.MatPath{17} = 'rtstate.SLIP_SERVO';
