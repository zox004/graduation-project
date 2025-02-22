function [data, info] = spawnRobotGoal
%SpawnRobotGoal gives an empty data for stdr_msgs/SpawnRobotGoal

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'stdr_msgs/SpawnRobotGoal';
[data.Description, info.Description] = ros.internal.ros.messages.stdr_msgs.robotMsg;
info.Description.MLdataType = 'struct';
info.MessageType = 'stdr_msgs/SpawnRobotGoal';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,91);
info.MatPath{1} = 'description';
info.MatPath{2} = 'description.initialPose';
info.MatPath{3} = 'description.initialPose.x';
info.MatPath{4} = 'description.initialPose.y';
info.MatPath{5} = 'description.initialPose.theta';
info.MatPath{6} = 'description.footprint';
info.MatPath{7} = 'description.footprint.points';
info.MatPath{8} = 'description.footprint.points.x';
info.MatPath{9} = 'description.footprint.points.y';
info.MatPath{10} = 'description.footprint.points.z';
info.MatPath{11} = 'description.footprint.radius';
info.MatPath{12} = 'description.laserSensors';
info.MatPath{13} = 'description.laserSensors.maxAngle';
info.MatPath{14} = 'description.laserSensors.minAngle';
info.MatPath{15} = 'description.laserSensors.maxRange';
info.MatPath{16} = 'description.laserSensors.minRange';
info.MatPath{17} = 'description.laserSensors.numRays';
info.MatPath{18} = 'description.laserSensors.noise';
info.MatPath{19} = 'description.laserSensors.noise.noise';
info.MatPath{20} = 'description.laserSensors.noise.noiseMean';
info.MatPath{21} = 'description.laserSensors.noise.noiseStd';
info.MatPath{22} = 'description.laserSensors.frequency';
info.MatPath{23} = 'description.laserSensors.frame_id';
info.MatPath{24} = 'description.laserSensors.pose';
info.MatPath{25} = 'description.laserSensors.pose.x';
info.MatPath{26} = 'description.laserSensors.pose.y';
info.MatPath{27} = 'description.laserSensors.pose.theta';
info.MatPath{28} = 'description.sonarSensors';
info.MatPath{29} = 'description.sonarSensors.maxRange';
info.MatPath{30} = 'description.sonarSensors.minRange';
info.MatPath{31} = 'description.sonarSensors.coneAngle';
info.MatPath{32} = 'description.sonarSensors.frequency';
info.MatPath{33} = 'description.sonarSensors.noise';
info.MatPath{34} = 'description.sonarSensors.noise.noise';
info.MatPath{35} = 'description.sonarSensors.noise.noiseMean';
info.MatPath{36} = 'description.sonarSensors.noise.noiseStd';
info.MatPath{37} = 'description.sonarSensors.frame_id';
info.MatPath{38} = 'description.sonarSensors.pose';
info.MatPath{39} = 'description.sonarSensors.pose.x';
info.MatPath{40} = 'description.sonarSensors.pose.y';
info.MatPath{41} = 'description.sonarSensors.pose.theta';
info.MatPath{42} = 'description.rfidSensors';
info.MatPath{43} = 'description.rfidSensors.maxRange';
info.MatPath{44} = 'description.rfidSensors.angleSpan';
info.MatPath{45} = 'description.rfidSensors.signalCutoff';
info.MatPath{46} = 'description.rfidSensors.frequency';
info.MatPath{47} = 'description.rfidSensors.frame_id';
info.MatPath{48} = 'description.rfidSensors.pose';
info.MatPath{49} = 'description.rfidSensors.pose.x';
info.MatPath{50} = 'description.rfidSensors.pose.y';
info.MatPath{51} = 'description.rfidSensors.pose.theta';
info.MatPath{52} = 'description.co2Sensors';
info.MatPath{53} = 'description.co2Sensors.maxRange';
info.MatPath{54} = 'description.co2Sensors.frequency';
info.MatPath{55} = 'description.co2Sensors.frame_id';
info.MatPath{56} = 'description.co2Sensors.pose';
info.MatPath{57} = 'description.co2Sensors.pose.x';
info.MatPath{58} = 'description.co2Sensors.pose.y';
info.MatPath{59} = 'description.co2Sensors.pose.theta';
info.MatPath{60} = 'description.soundSensors';
info.MatPath{61} = 'description.soundSensors.maxRange';
info.MatPath{62} = 'description.soundSensors.frequency';
info.MatPath{63} = 'description.soundSensors.angleSpan';
info.MatPath{64} = 'description.soundSensors.frame_id';
info.MatPath{65} = 'description.soundSensors.pose';
info.MatPath{66} = 'description.soundSensors.pose.x';
info.MatPath{67} = 'description.soundSensors.pose.y';
info.MatPath{68} = 'description.soundSensors.pose.theta';
info.MatPath{69} = 'description.thermalSensors';
info.MatPath{70} = 'description.thermalSensors.maxRange';
info.MatPath{71} = 'description.thermalSensors.frequency';
info.MatPath{72} = 'description.thermalSensors.angleSpan';
info.MatPath{73} = 'description.thermalSensors.frame_id';
info.MatPath{74} = 'description.thermalSensors.pose';
info.MatPath{75} = 'description.thermalSensors.pose.x';
info.MatPath{76} = 'description.thermalSensors.pose.y';
info.MatPath{77} = 'description.thermalSensors.pose.theta';
info.MatPath{78} = 'description.kinematicModel';
info.MatPath{79} = 'description.kinematicModel.type';
info.MatPath{80} = 'description.kinematicModel.a_ux_ux';
info.MatPath{81} = 'description.kinematicModel.a_ux_uy';
info.MatPath{82} = 'description.kinematicModel.a_ux_w';
info.MatPath{83} = 'description.kinematicModel.a_uy_ux';
info.MatPath{84} = 'description.kinematicModel.a_uy_uy';
info.MatPath{85} = 'description.kinematicModel.a_uy_w';
info.MatPath{86} = 'description.kinematicModel.a_w_ux';
info.MatPath{87} = 'description.kinematicModel.a_w_uy';
info.MatPath{88} = 'description.kinematicModel.a_w_w';
info.MatPath{89} = 'description.kinematicModel.a_g_ux';
info.MatPath{90} = 'description.kinematicModel.a_g_uy';
info.MatPath{91} = 'description.kinematicModel.a_g_w';
