function [data, info] = sceneRegion
%SceneRegion gives an empty data for manipulation_msgs/SceneRegion

% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
data.MessageType = 'manipulation_msgs/SceneRegion';
[data.Cloud, info.Cloud] = ros.internal.ros.messages.sensor_msgs.pointCloud2;
info.Cloud.MLdataType = 'struct';
[data.Mask, info.Mask] = ros.internal.ros.messages.ros.default_type('int32',NaN);
[data.Image, info.Image] = ros.internal.ros.messages.sensor_msgs.image;
info.Image.MLdataType = 'struct';
[data.DisparityImage, info.DisparityImage] = ros.internal.ros.messages.sensor_msgs.image;
info.DisparityImage.MLdataType = 'struct';
[data.CamInfo, info.CamInfo] = ros.internal.ros.messages.sensor_msgs.cameraInfo;
info.CamInfo.MLdataType = 'struct';
[data.RoiBoxPose, info.RoiBoxPose] = ros.internal.ros.messages.geometry_msgs.poseStamped;
info.RoiBoxPose.MLdataType = 'struct';
[data.RoiBoxDims, info.RoiBoxDims] = ros.internal.ros.messages.geometry_msgs.vector3;
info.RoiBoxDims.MLdataType = 'struct';
info.MessageType = 'manipulation_msgs/SceneRegion';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,97);
info.MatPath{1} = 'cloud';
info.MatPath{2} = 'cloud.header';
info.MatPath{3} = 'cloud.header.seq';
info.MatPath{4} = 'cloud.header.stamp';
info.MatPath{5} = 'cloud.header.stamp.sec';
info.MatPath{6} = 'cloud.header.stamp.nsec';
info.MatPath{7} = 'cloud.header.frame_id';
info.MatPath{8} = 'cloud.height';
info.MatPath{9} = 'cloud.width';
info.MatPath{10} = 'cloud.fields';
info.MatPath{11} = 'cloud.fields.INT8';
info.MatPath{12} = 'cloud.fields.UINT8';
info.MatPath{13} = 'cloud.fields.INT16';
info.MatPath{14} = 'cloud.fields.UINT16';
info.MatPath{15} = 'cloud.fields.INT32';
info.MatPath{16} = 'cloud.fields.UINT32';
info.MatPath{17} = 'cloud.fields.FLOAT32';
info.MatPath{18} = 'cloud.fields.FLOAT64';
info.MatPath{19} = 'cloud.fields.name';
info.MatPath{20} = 'cloud.fields.offset';
info.MatPath{21} = 'cloud.fields.datatype';
info.MatPath{22} = 'cloud.fields.count';
info.MatPath{23} = 'cloud.is_bigendian';
info.MatPath{24} = 'cloud.point_step';
info.MatPath{25} = 'cloud.row_step';
info.MatPath{26} = 'cloud.data';
info.MatPath{27} = 'cloud.is_dense';
info.MatPath{28} = 'mask';
info.MatPath{29} = 'image';
info.MatPath{30} = 'image.header';
info.MatPath{31} = 'image.header.seq';
info.MatPath{32} = 'image.header.stamp';
info.MatPath{33} = 'image.header.stamp.sec';
info.MatPath{34} = 'image.header.stamp.nsec';
info.MatPath{35} = 'image.header.frame_id';
info.MatPath{36} = 'image.height';
info.MatPath{37} = 'image.width';
info.MatPath{38} = 'image.encoding';
info.MatPath{39} = 'image.is_bigendian';
info.MatPath{40} = 'image.step';
info.MatPath{41} = 'image.data';
info.MatPath{42} = 'disparity_image';
info.MatPath{43} = 'disparity_image.header';
info.MatPath{44} = 'disparity_image.header.seq';
info.MatPath{45} = 'disparity_image.header.stamp';
info.MatPath{46} = 'disparity_image.header.stamp.sec';
info.MatPath{47} = 'disparity_image.header.stamp.nsec';
info.MatPath{48} = 'disparity_image.header.frame_id';
info.MatPath{49} = 'disparity_image.height';
info.MatPath{50} = 'disparity_image.width';
info.MatPath{51} = 'disparity_image.encoding';
info.MatPath{52} = 'disparity_image.is_bigendian';
info.MatPath{53} = 'disparity_image.step';
info.MatPath{54} = 'disparity_image.data';
info.MatPath{55} = 'cam_info';
info.MatPath{56} = 'cam_info.header';
info.MatPath{57} = 'cam_info.header.seq';
info.MatPath{58} = 'cam_info.header.stamp';
info.MatPath{59} = 'cam_info.header.stamp.sec';
info.MatPath{60} = 'cam_info.header.stamp.nsec';
info.MatPath{61} = 'cam_info.header.frame_id';
info.MatPath{62} = 'cam_info.height';
info.MatPath{63} = 'cam_info.width';
info.MatPath{64} = 'cam_info.distortion_model';
info.MatPath{65} = 'cam_info.D';
info.MatPath{66} = 'cam_info.K';
info.MatPath{67} = 'cam_info.R';
info.MatPath{68} = 'cam_info.P';
info.MatPath{69} = 'cam_info.binning_x';
info.MatPath{70} = 'cam_info.binning_y';
info.MatPath{71} = 'cam_info.roi';
info.MatPath{72} = 'cam_info.roi.x_offset';
info.MatPath{73} = 'cam_info.roi.y_offset';
info.MatPath{74} = 'cam_info.roi.height';
info.MatPath{75} = 'cam_info.roi.width';
info.MatPath{76} = 'cam_info.roi.do_rectify';
info.MatPath{77} = 'roi_box_pose';
info.MatPath{78} = 'roi_box_pose.header';
info.MatPath{79} = 'roi_box_pose.header.seq';
info.MatPath{80} = 'roi_box_pose.header.stamp';
info.MatPath{81} = 'roi_box_pose.header.stamp.sec';
info.MatPath{82} = 'roi_box_pose.header.stamp.nsec';
info.MatPath{83} = 'roi_box_pose.header.frame_id';
info.MatPath{84} = 'roi_box_pose.pose';
info.MatPath{85} = 'roi_box_pose.pose.position';
info.MatPath{86} = 'roi_box_pose.pose.position.x';
info.MatPath{87} = 'roi_box_pose.pose.position.y';
info.MatPath{88} = 'roi_box_pose.pose.position.z';
info.MatPath{89} = 'roi_box_pose.pose.orientation';
info.MatPath{90} = 'roi_box_pose.pose.orientation.x';
info.MatPath{91} = 'roi_box_pose.pose.orientation.y';
info.MatPath{92} = 'roi_box_pose.pose.orientation.z';
info.MatPath{93} = 'roi_box_pose.pose.orientation.w';
info.MatPath{94} = 'roi_box_dims';
info.MatPath{95} = 'roi_box_dims.x';
info.MatPath{96} = 'roi_box_dims.y';
info.MatPath{97} = 'roi_box_dims.z';
