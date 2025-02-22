function [data, info] = gPSFix
%GPSFix gives an empty data for gps_common/GPSFix

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'gps_common/GPSFix';
[data.Header, info.Header] = ros.internal.ros.messages.std_msgs.header;
info.Header.MLdataType = 'struct';
[data.Status, info.Status] = ros.internal.ros.messages.gps_common.gPSStatus;
info.Status.MLdataType = 'struct';
[data.Latitude, info.Latitude] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Longitude, info.Longitude] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Altitude, info.Altitude] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Track, info.Track] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Speed, info.Speed] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Climb, info.Climb] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Pitch, info.Pitch] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Roll, info.Roll] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Dip, info.Dip] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Time, info.Time] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Gdop, info.Gdop] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Pdop, info.Pdop] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Hdop, info.Hdop] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Vdop, info.Vdop] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Tdop, info.Tdop] = ros.internal.ros.messages.ros.default_type('double',1);
[data.Err, info.Err] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrHorz, info.ErrHorz] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrVert, info.ErrVert] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrTrack, info.ErrTrack] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrSpeed, info.ErrSpeed] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrClimb, info.ErrClimb] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrTime, info.ErrTime] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrPitch, info.ErrPitch] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrRoll, info.ErrRoll] = ros.internal.ros.messages.ros.default_type('double',1);
[data.ErrDip, info.ErrDip] = ros.internal.ros.messages.ros.default_type('double',1);
[data.PositionCovariance, info.PositionCovariance] = ros.internal.ros.messages.ros.default_type('double',9);
[data.COVARIANCETYPEUNKNOWN, info.COVARIANCETYPEUNKNOWN] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.COVARIANCETYPEAPPROXIMATED, info.COVARIANCETYPEAPPROXIMATED] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.COVARIANCETYPEDIAGONALKNOWN, info.COVARIANCETYPEDIAGONALKNOWN] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.COVARIANCETYPEKNOWN, info.COVARIANCETYPEKNOWN] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.PositionCovarianceType, info.PositionCovarianceType] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'gps_common/GPSFix';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,69);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'status';
info.MatPath{8} = 'status.header';
info.MatPath{9} = 'status.header.seq';
info.MatPath{10} = 'status.header.stamp';
info.MatPath{11} = 'status.header.stamp.sec';
info.MatPath{12} = 'status.header.stamp.nsec';
info.MatPath{13} = 'status.header.frame_id';
info.MatPath{14} = 'status.satellites_used';
info.MatPath{15} = 'status.satellite_used_prn';
info.MatPath{16} = 'status.satellites_visible';
info.MatPath{17} = 'status.satellite_visible_prn';
info.MatPath{18} = 'status.satellite_visible_z';
info.MatPath{19} = 'status.satellite_visible_azimuth';
info.MatPath{20} = 'status.satellite_visible_snr';
info.MatPath{21} = 'status.STATUS_NO_FIX';
info.MatPath{22} = 'status.STATUS_FIX';
info.MatPath{23} = 'status.STATUS_SBAS_FIX';
info.MatPath{24} = 'status.STATUS_GBAS_FIX';
info.MatPath{25} = 'status.STATUS_DGPS_FIX';
info.MatPath{26} = 'status.STATUS_WAAS_FIX';
info.MatPath{27} = 'status.status';
info.MatPath{28} = 'status.SOURCE_NONE';
info.MatPath{29} = 'status.SOURCE_GPS';
info.MatPath{30} = 'status.SOURCE_POINTS';
info.MatPath{31} = 'status.SOURCE_DOPPLER';
info.MatPath{32} = 'status.SOURCE_ALTIMETER';
info.MatPath{33} = 'status.SOURCE_MAGNETIC';
info.MatPath{34} = 'status.SOURCE_GYRO';
info.MatPath{35} = 'status.SOURCE_ACCEL';
info.MatPath{36} = 'status.motion_source';
info.MatPath{37} = 'status.orientation_source';
info.MatPath{38} = 'status.position_source';
info.MatPath{39} = 'latitude';
info.MatPath{40} = 'longitude';
info.MatPath{41} = 'altitude';
info.MatPath{42} = 'track';
info.MatPath{43} = 'speed';
info.MatPath{44} = 'climb';
info.MatPath{45} = 'pitch';
info.MatPath{46} = 'roll';
info.MatPath{47} = 'dip';
info.MatPath{48} = 'time';
info.MatPath{49} = 'gdop';
info.MatPath{50} = 'pdop';
info.MatPath{51} = 'hdop';
info.MatPath{52} = 'vdop';
info.MatPath{53} = 'tdop';
info.MatPath{54} = 'err';
info.MatPath{55} = 'err_horz';
info.MatPath{56} = 'err_vert';
info.MatPath{57} = 'err_track';
info.MatPath{58} = 'err_speed';
info.MatPath{59} = 'err_climb';
info.MatPath{60} = 'err_time';
info.MatPath{61} = 'err_pitch';
info.MatPath{62} = 'err_roll';
info.MatPath{63} = 'err_dip';
info.MatPath{64} = 'position_covariance';
info.MatPath{65} = 'COVARIANCE_TYPE_UNKNOWN';
info.MatPath{66} = 'COVARIANCE_TYPE_APPROXIMATED';
info.MatPath{67} = 'COVARIANCE_TYPE_DIAGONAL_KNOWN';
info.MatPath{68} = 'COVARIANCE_TYPE_KNOWN';
info.MatPath{69} = 'position_covariance_type';
