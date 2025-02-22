function [data, info] = motorTraceSample
%MotorTraceSample gives an empty data for sr_edc_ethercat_drivers/MotorTraceSample

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'sr_edc_ethercat_drivers/MotorTraceSample';
[data.CommandedEffort, info.CommandedEffort] = ros.internal.ros.messages.ros.default_type('double',1);
[data.SlowEffortLimit, info.SlowEffortLimit] = ros.internal.ros.messages.ros.default_type('double',1);
[data.QuickEffortLimit, info.QuickEffortLimit] = ros.internal.ros.messages.ros.default_type('double',1);
[data.MotorCurrent, info.MotorCurrent] = ros.internal.ros.messages.ros.default_type('double',1);
[data.MotorSupplyVoltage, info.MotorSupplyVoltage] = ros.internal.ros.messages.ros.default_type('double',1);
[data.HbridgeDuty, info.HbridgeDuty] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Temperature, info.Temperature] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ForceSensor1, info.ForceSensor1] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ForceSensor2, info.ForceSensor2] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ForceSensor3, info.ForceSensor3] = ros.internal.ros.messages.ros.default_type('double',1);
[data.MotorVelocity, info.MotorVelocity] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Velocity, info.Velocity] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Position, info.Position] = ros.internal.ros.messages.ros.default_type('double',1);
info.MessageType = 'sr_edc_ethercat_drivers/MotorTraceSample';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,13);
info.MatPath{1} = 'commanded_effort';
info.MatPath{2} = 'slow_effort_limit';
info.MatPath{3} = 'quick_effort_limit';
info.MatPath{4} = 'motor_current';
info.MatPath{5} = 'motor_supply_voltage';
info.MatPath{6} = 'hbridge_duty';
info.MatPath{7} = 'temperature';
info.MatPath{8} = 'force_sensor_1';
info.MatPath{9} = 'force_sensor_2';
info.MatPath{10} = 'force_sensor_3';
info.MatPath{11} = 'motor_velocity';
info.MatPath{12} = 'velocity';
info.MatPath{13} = 'position';
