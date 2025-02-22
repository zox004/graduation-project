function isSuccess = PublishMap(domainID, ROS2NodeName, duration)
%PUBLISHMAP Summary of this function goes here
%   Detailed explanation goes here

%     arguments
%         domainID (1, 1) int64
%         ROS2NodeName (1, 1) string
%         duration (1, 1) int64 = 100;
%     end
    
    
    isSuccess = true;
    setenv('ROS_DOMAIN_ID', int2str(domainID))
    
    r2nn = "matlab_example_robot";
    dID = 25;
    n = ros2node(r2nn, dID);
    
%     n = ros2node(ROS2NodeName, domainID);
    
    lidarSub = ros2subscriber(n, "/scan","sensor_msgs/LaserScan", "Reliability","besteffort","Durability","volatile","Depth",5);
%     [mapPub, mapMsg] = ros2publisher(n,"/map_info","std_msgs/Float64MultiArray","Reliability","besteffort","Durability","volatile","Depth",5);
    
    

    mapPub = ros2publisher(n,"/map_info","std_msgs/Float64MultiArray","Reliability","besteffort","Durability","volatile","Depth",5);
%     
    mapMsg = ros2message(mapPub);
    
    
    mapPub = ros2publisher(n,"/map_info","map_msgs/OccupancyGridUpdate","Reliability","besteffort","Durability","volatile","Depth",5);
    mapMsg = ros2message(mapPub);

%     mapPub = ros2publisher(n,"/map_info","nav_msgs/OccupancyGrid","Reliability","besteffort","Durability","volatile","Depth",5);
%     mapMsg = ros2message(mapPub);
%     mapMsg = coder.cstructname(ros2message(mapPub), 'struct');

%     mapMsg.MessageType = 'std_msgs/Float64MultiArray';
%     mapMsg.layout.MessageType = 'std_msgs/MultiArrayLayout';
%     mapMsg.layout.dim.MessageType = 'std_msgs/MultiArrayDimension';
%     mapMsg.layout.dim.label = '';
%     mapMsg.layout.dim.size = 0;
%     mapMsg.layout.dim.stride = 0;
%     mapMsg.layout.data_offset = 0;
%     mapMsg.data = 0;
    
    
    %%  SLAM Section  %%
%     sc = {};
    maxLidarRange = 8;
    mapResolution = 20;
    maxNumScans = 360;
    slamAlg = lidarSLAM(mapResolution, maxLidarRange, maxNumScans);
    
    
    slamAlg.LoopClosureThreshold = 210;  
    slamAlg.LoopClosureSearchRadius = 8;
    
    mapMsg.info.resolution = typecast(mapResolution, 'single');

    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    % Pause Option
    % pause(4)
    
    
    
    

    tic
    cnt = 0;
    
    while toc <= duration
    %%%%%%%%%%%%%%%%%%%%%%%    SLAM Section     %%%%%%%%%%%%%%%%%%%%%%%%%%%

        [scanMsge, isScaned] = receive(lidarSub);

%         before = toc;
        scan_temp = rosReadLidarScan(scanMsge);
%         sc = [sc, scan_temp];
        isScanAccepted = addScan(slamAlg, scan_temp);

        [scans, optimizedPoses]  = scansAndPoses(slamAlg);
        map = buildMap(scans, optimizedPoses, mapResolution, maxLidarRange);
        occMatrix = getOccupancy(map);
        
%         elapse = toc - before;
%%%%%%%%%%%%%%%%%%%%%%%%    Publish Section     %%%%%%%%%%%%%%%%%%%%%%%%%%%
        [occMatrix_row, occMatrix_col] = size(occMatrix);
        mapMsg.info.width = cast(occMatrix_row, 'uint32');
        mapMsg.info.height = cast(occMatrix_col, 'uint32');
        mapMsg.data = cast(100 * occMatrix, 'int8');
%         mapMsg.info.map_load_time = elapse;
%         mapMsg.header.stamp. = typecast(cnt, 'uint8');


        send(mapPub, mapMsg)
        cnt = cnt + 1;
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
        if(~isScanAccepted || ~isScaned)
            fprintf(2, "Error occured");
            break;
        end

    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    end
    
    
    
%     figure;
%     show(slamAlg);
%     title({'Map of the Environment','Pose Graph'});
    
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    
    
%     [scans, optimizedPoses]  = scansAndPoses(slamAlg);
%     map = buildMap(scans, optimizedPoses, mapResolution, maxLidarRange);
%     
%     
%     
%     figure; 
%     show(map);
%     hold on
%     show(slamAlg.PoseGraph, 'IDs', 'off');
%     hold off
%     title('Occupancy Grid Map Built Using Lidar SLAM');
    
    % occMatrix = getOccupancy(map);
end
