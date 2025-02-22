classdef trackerTOMHT< matlabshared.tracking.internal.fusion.TrackManager & fusion.internal.ExportToSimulinkInterface
%trackerTOMHT Track-oriented multi-hypothesis tracker
%   tracker = trackerTOMHT creates a multi-hypothesis, multi-sensor,
%   multi-object tracker that uses track-oriented multi-hypothesis. The
%   trackerTOMHT initializes, confirms, corrects, predicts (performs
%   coasting) and deletes tracks. A track is created with a 'Tentative'
%   status, meaning that there is not enough evidence for the trackerTOMHT
%   to determine that the track is of a physical object. If enough
%   additional detections are assigned to the tentative track, its status
%   will change to 'Confirmed' (see ConfirmationThreshold). Alternatively,
%   a track will be confirmed if a detection with a nonzero ObjectClassID
%   value is assigned to it, as it means that the sensor is able to
%   classify the physical object.
%
%   tracker = trackerTOMHT('Name', value) creates a trackerTOMHT object by
%   specifying its properties as name-value pair arguments. Unspecified
%   properties have default values. See the list of properties below.
%
%   Step method syntax: click on <a href="matlab:help trackerTOMHT/stepImpl">step</a> for more details.
%
%   System objects may be called directly like a function instead of
%   using the step method. For example, y = step(obj) and y = obj() are
%   equivalent.
%
%   trackerTOMHT properties:
%     TrackerIndex                - Unique identifier of the tracker
%     FilterInitializationFcn     - A handle to a function that initializes
%                                   a tracking filter based on a detection
%     MaxNumTracks                - Define the maximum number of tracks
%     MaxNumDetections            - Define the maximum number of detections
%     MaxNumSensors               - Define the maximum number of sensors
%     OOSMHandling                - Handle out-of-sequence measurements (OOSM)
%     StateParameters             - Parameters defining the track state
%     MaxNumHypotheses            - Define the maximum number of hypotheses
%     MaxNumTrackBranches         - Define the maximum number of branches
%                                   (track hypotheses) per track
%     MaxNumHistoryScans          - Define the maximum number of scans kept
%                                   in the track history
%     AssignmentThreshold         - The threshold that controls the
%                                   assignment of detections to tracks
%     ConfirmationThreshold       - The required track score for confirmation
%     DeletionThreshold           - The drop from track maximum score before
%                                   deletion
%     DetectionProbability        - Probability of detection
%     FalseAlarmRate              - Rate of false positive detections
%     Beta                        - The rate of new tracks per unit volume
%     Volume                      - The volume of the sensor detection bin
%     MinBranchProbability        - Minimum global probability to avoid pruning
%     NScanPruning                - Choose n-scan pruning method
%     HasCostMatrixInput          - Provide cost matrix as an input
%     HasDetectableBranchIDsInput - Provide detectable branch IDs as an input
%     OutputRepresentation        - Choice of track output method
%     HypothesesToOutput          - An array of hypotheses to output
%     NumTracks                   - Number of tracks            (read only)
%     NumConfirmedTracks          - Number of confirmed tracks  (read only)
%
%   trackerTOMHT methods:
%     <a href="matlab:help trackerTOMHT/stepImpl">step</a>                      - Creates, updates, and deletes the tracks
%     getBranches               - Returns the current list of track branches
%     getTrackFilterProperties  - Returns the values of filter properties
%     setTrackFilterProperties  - Sets values to filter properties
%     predictTracksToTime       - Predicts the tracks to a time stamp
%     initializeTrack           - Initialize a new track
%     deleteTrack               - Delete a track
%     initializeBranch          - Initialize a new track branch
%     deleteBranch              - Delete a track branch
%     exportToSimulink          - Export the tracker to a Simulink model
%     release                   - Allows property value and input characteristics changes
%     clone                     - Creates a copy of the trackerTOMHT
%     isLocked                  - Locked status (logical)
%     <a href="matlab:help matlab.System/reset   ">reset</a>                     - Resets states of the trackerTOMHT
%
%   % EXAMPLE: Construct a tracker and use it to track two objects
%
%   % Construct a trackerTOMHT object with the default constant
%   % velocity Kalman filter initialization function, initcvkf
%   tracker = trackerTOMHT('FilterInitializationFcn', @initcvkf, ...
%       'ConfirmationThreshold', 20, ...
%       'DeletionThreshold', -7, ...
%       'MaxNumHypotheses', 10);
%
%   % Update the tracker with two detections with a nonzero ObjectClassID.
%   % These detections will create confirmed tracks.
%   detections = {objectDetection(1, [10;0], 'SensorIndex', 1, ...
%      'ObjectClassID', 5, 'ObjectAttributes', {struct('ID', 1)}); ...
%      objectDetection(1, [0;10], 'SensorIndex', 1, ...
%      'ObjectClassID', 2, 'ObjectAttributes', {struct('ID', 2)})};
%   time = 2;
%   tracks = tracker(detections, time);
%
%   % In this example, the initcvkf filter initialization function is used.
%   % The function initializes a 2-D constant velocity model, which assumes
%   % that the state is: [x; vx; y; vy].
%   % Because there were two detections, two tracks will be initialized.
%   % They are confirmed on initialization because their ObjectClassID is
%   % nonzero, indicating that the sensor was able to classify them.
%
%   % To find the position and velocity we use:
%   positionSelector = [1 0 0 0; 0 0 1 0]; % [x, y]
%   velocitySelector = [0 1 0 0; 0 0 0 1]; % [vx, vy]
%
%   positions = getTrackPositions(tracks, positionSelector)
%   velocities = getTrackVelocities(tracks, velocitySelector)
%
%   See also: objectDetection, objectTrack, trackerGNN, trackerJPDA,
%   trackerPHD, assignTOMHT, trackBranchHistory, clusterTrackBranches,
%   compatibleTrackBranches, pruneTrackBranches

 
% Copyright 2018-2021 The MathWorks, Inc.

    methods
        function out=trackerTOMHT
            % Support name-value pair arguments when constructing object
        end

        function out=assignDetections(~) %#ok<STOUT>
            % This method provides the assignments, unassigned tracks, and
            % unassigned detections as a function of the cost matrix. We
            % use the track assigner to get the assignment. However, the
            % assigner returns track indices (row indices in the
            % costMatrix). These need to be converted to track IDs.
        end

        function out=calcCostMatrix(~) %#ok<STOUT>
            % This function calculates the cost matrix for the assignment
            % function. Ever row represents a single track, every column
            % represents a single detection. SensorDetections is a list of
            % indices to the detections from a specific sensor based on
            % Detection.SensorIndex
            % To calculate the cost matrix, the distance method of the
            % track's tracking filter is used. It provides a result that is
            % normalized to the size of the state covariance matrix
            % projected to the measurement space. See the tracking filter's
            % distance method help for more details.
        end

        function out=cloneImpl(~) %#ok<STOUT>
            % Copy public properties
        end

        function out=clusterTracks(~) %#ok<STOUT>
        end

        function out=confirmTracks(~) %#ok<STOUT>
            % Checks the confirmation of all the live tracks
        end

        function out=coreAlgorithm(~) %#ok<STOUT>
        end

        function out=createLogic(~) %#ok<STOUT>
        end

        function out=deleteBranch(~) %#ok<STOUT>
            %deleteBranch  Delete a track branch managed by the tracker
            %    deleted = deleteBranch(obj,branchID) deletes the track
            %    branch specified by branchID from the tracker.
            %    The deleted flag returns true if a track with the same
            %    branchID existed and was deleted. If a track with that
            %    branchID did not exist, the deleted flag is false and a
            %    warning is issued.
            %
            % Note: the tracker must be updated at least once to be able to
            % delete a track.
        end

        function out=deleteTrack(~) %#ok<STOUT>
            %deleteTrack  Delete a track managed by the tracker
            %    deleted = deleteTrack(obj,trackID) deletes the track
            %    specified by trackID and all its branches from the
            %    tracker. The deleted flag returns true if a track with the
            %    same trackID existed and was deleted. If a track with that
            %    trackID did not exist, the deleted flag is false and a
            %    warning is issued.
            %
            % Note: the tracker must be updated at least once to be able to
            % delete a track.
        end

        function out=deleteTracks(~) %#ok<STOUT>
            %This function 'removes' old tracks from the list of tracks
            %  1. Every track that is not assigned to a detection is
            %     coasted (predicted and the lack of assigned detection is
            %     registered).
            %  2. The track is checked for deletion.
            %  3. If the track is to be deleted, 'remove' it.
            %
            %  Note: For performance purposes, the track is not really removed.
            %  It is moved to the end of the tracks list and its content is
            %  'nullified'. In addition, it does not appear in the list of
            %  live tracks and if it was a confirmed track its confirm
            %  status flag is cleared.
            %
            % The method returns a Boolean list of tracks that were deleted
        end

        function out=deleteTracksNotInHistory(~) %#ok<STOUT>
        end

        function out=extractDetectionsForTrack(~) %#ok<STOUT>
        end

        function out=findTrackByID(~) %#ok<STOUT>
            % Returns the index of a track specified by its branchID. If
            % the track does not exist, it returns empty
        end

        function out=formulateGlobalHypotheses(~) %#ok<STOUT>
            % Formulate the global hypotheses using the hypotheses manager
        end

        function out=getBranches(~) %#ok<STOUT>
            %getBranches Get the current list of track branches
            %   branches = getBranches(tracker) returns the list of track
            %   branches maintained by the tracker. Use getBranches to
            %   obtain the current state list of branches before using
            %   other methods that require identifying a branch by its
            %   BranchID.
            %
            %   Note: the tracker must be updated at least once to be able
            %   to provide track branches. You can use isLocked(tracker) to
            %   check if the tracker has been updated.
            %
            %   Example:
            %   --------
            %   tracker = trackerTOMHT;
            %   detection = objectDetection(0, [0;0;0]);
            %   tracker(detection, 0); % Call the tracker to initiate a track
            %   branches = getBranches(tracker);
        end

        function out=getCostMatrixFromInput(~) %#ok<STOUT>
            %Extract cost matrix from input.
        end

        function out=getDetectableBranchIDsFromInput(~) %#ok<STOUT>
            %In Matlab detectable track IDs is always last input
        end

        function out=getNumInputsImpl(~) %#ok<STOUT>
            % Define total number of inputs for system with optional inputs
        end

        function out=getNumOutputsImpl(~) %#ok<STOUT>
            % Define total number of outputs for system with optional
            % outputs
        end

        function out=getPropertyGroups(~) %#ok<STOUT>
        end

        function out=getPropertyGroupsLongImpl(~) %#ok<STOUT>
        end

        function out=getTrackFilterProperties(~) %#ok<STOUT>
            %getTrackFilterProperties Returns the values of filter properties
            %   values = getTrackFilterProperties(tracker,branchID,properties)
            %   returns the values of the tracking filter properties for
            %   the branch whose branchID is given. BranchID must be a
            %   valid BranchID as reported in the list of branches obtained
            %   by the getBranches method. Properties is a list of valid
            %   names of filter properties. The returned output, values, is
            %   a cell array in the same order as the list of properties.
            %
            %   Example:
            %   --------
            %   tracker = trackerTOMHT;
            %   detection = objectDetection(0, [0;0;0]);
            %   tracker(detection, 0); % Call the tracker to initiate a track
            %   branches = getBranches(tracker);
            %   branchID = branches(1).BranchID;
            %   values = getTrackFilterProperties(tracker, branchID, 'MeasurementNoise', 'ProcessNoise');
        end

        function out=getTrackerOutputs(~) %#ok<STOUT>
        end

        function out=initializeBranch(~) %#ok<STOUT>
            %initializeBranch Initialize a new track branch in the tracker
            %   id = initializeBranch(obj, trackID, branch) initializes a
            %   new track branch in the tracker. The branch is added to the
            %   track specified by trackID with the information contained
            %   in branch, which must be an objectTrack object or a struct
            %   with similar fields, with properties of the same size and
            %   type as the ones returned by the tracker. The initialized
            %   branch ID is returned.
            %   You may use this syntax if the filter is any of the
            %   following types: trackingABF, trackingKF, trackingEKF,
            %   trackingUKF, trackingCKF, or trackingMSCEKF.
            %
            %   id = initializeTrack(obj, trackID, branch, filter)
            %   initializes a new track branch in the tracker using a
            %   filter, which must be a filter of the same type (including
            %   sizes and types) as the FilterInitializationFcn property
            %   returns.
            %   You must uses this syntax if the filter is either
            %   trackingPF, trackingIMM, or trackingGSF.
            %
            %   A warning is issued if the tracker already maintains
            %   MaxNumTracks tracks and the returned id is zero, which
            %   indicates a failure to initialize the track branch.
            %
            % Notes:
            %   1. The tracker must be updated at least once to be able to
            %      initialize a track.
            %   2. The tracker assigns a BranchID to the branch, gives an
            %      UpdateTime equal to the last step time, and synchronizes
            %      the data in the given track to the initialized branch.
        end

        function out=initializeTrack(~) %#ok<STOUT>
            %initializeTrack Initialize a new track in the tracker
            %   id = initializeTrack(obj,track) initializes a new
            %   track in the tracker using the track and returns
            %   the TrackID associated with it. track must be an
            %   objectTrack object or a struct with similar fields, with
            %   properties of the same size and type as the ones returned
            %   by the tracker.
            %   You may use this syntax if the filter is any of the
            %   following types: trackingABF, trackingKF, trackingEKF,
            %   trackingUKF, trackingCKF, or trackingMSCEKF.
            %
            %   id = initializeTrack(obj,track,filter)   initializes a new
            %   track in the tracker using a filter, which must be a
            %   filter of the same type (including sizes and types)
            %   as the FilterInitializationFcn property returns.
            %   You must uses this syntax if the filter is either
            %   trackingPF, trackingIMM, or trackingGSF.
            %
            %   A warning is issued if the tracker already maintains
            %   MaxNumTracks tracks and the returned id is zero, which
            %   indicates a failure to initialize the track.
            %
            % Notes:
            %   1. The tracker must be updated at least once to be able to
            %      initialize a track.
            %   2. The tracker assigns a TrackID to the track, gives an
            %      UpdateTime equal to the last step time, and synchronizes
            %      the data in the given track to the initialized track.
        end

        function out=initiateTracksFromHistory(~) %#ok<STOUT>
            %This method initiates a new track based on an existing
            %post-processed detection, when this detection
            %cannot be associated with any existing track in the tracks
            %list.
            %History holds all the information about the track to be
            %created, including its TrackID and BranchID. The ParentID is
            %0, but will be replaced with the BranchID.
        end

        function out=isInactivePropertyImpl(~) %#ok<STOUT>
            % Return false if property is visible based on object
            % configuration, for the command line and System block dialog
        end

        function out=isInputComplexityMutableImpl(~) %#ok<STOUT>
        end

        function out=isInputSizeMutableImpl(~) %#ok<STOUT>
            % Return false if input size is not allowed to change while
            % system is running
        end

        function out=loadObjectImpl(~) %#ok<STOUT>
            % Load object
        end

        function out=loadSubObjects(~) %#ok<STOUT>
            %Load internal sub-objects
        end

        function out=organizeTrackOutputs(~) %#ok<STOUT>
        end

        function out=originatingSensorToUsedSensor(~) %#ok<STOUT>
            % Converts from originating sensors, which may be non
            % consecutive, to used sensors, which must be consecutive.
        end

        function out=predictTracks(~) %#ok<STOUT>
            % Predict all the tracks to the current tracker time
        end

        function out=predictTracksToTime(~) %#ok<STOUT>
            %predictTracksToTime Predicts the tracks to a time stamp
            %   predictedTracks = predictTracksToTime(obj,type,ID,time)
            %   predicts the branch or track specified by ID to time
            %   instant, time. type must be either 'branch' or 'track'.
            %   time must be greater than the last update time provided to
            %   the tracker in the previous step.
            %
            %   ... = predictTracksToTime(obj,type,category,time) allows
            %   you to predict all the tracks that match the category.
            %   Valid values for category are 'all', 'confirmed', or
            %   'tentative'.
            %
            %   ... = predictTracksToTime(...,'WithCovariance',tf) allows
            %   you to specify whether the state covariance of each track
            %   should be predicted as well by setting the tf flag to true
            %   or false. Predicting the covariance is slower than
            %   predicting just the track states. The default is false.
            %
            % Note: the tracker must be updated at least once to be able to
            % predict tracks. You can use isLocked(tracker) to check if the
            % tracker has been updated.
        end

        function out=processInputs(~) %#ok<STOUT>
            % In MATLAB: time is always the 1st part of varargin
        end

        function out=processTunedPropertiesImpl(~) %#ok<STOUT>
            % Perform actions when tunable properties change
            % between calls to the System object
        end

        function out=pruneTrackHypotheses(~) %#ok<STOUT>
            %pruneTrackHypotheses   Prunes the track hypotheses to reduce
            %   their number before formulating the overall hypotheses
        end

        function out=pruneTracks(~) %#ok<STOUT>
            % Use the track pruning object to prune the tracks based on
            % their hypotheses and n-scan pruning.
        end

        function out=releaseImpl(~) %#ok<STOUT>
            % Release resources, such as file handles
        end

        function out=resetImpl(~) %#ok<STOUT>
            % Returns the tracker to its initial state
        end

        function out=saveObjectImpl(~) %#ok<STOUT>
            % Set properties in structure s to values in object obj
        end

        function out=scoreTrackHypotheses(~) %#ok<STOUT>
            %scoreTrackHypotheses For every track hypothesis, calculate the
            % track score.
            % List has three cases: new tracks initiated by a detection,
            % existing tracks with no detections, and tracks with
            % detections in the gate. The score is calculated based on
            % these three cases
        end

        function out=setTrackFilterProperties(~) %#ok<STOUT>
            %setTrackFilterProperties Sets values to filter properties
            %   setTrackFilterProperties(tracker, branchID, 'Name', value)
            %   Use Name-Value pairs to set properties for a branch with
            %   the given branchID. BranchID must be a valid BranchID as
            %   reported by the getBranches method. You can specify as many
            %   name-value pairs as you wish. Property names must match the
            %   names of public filter properties.
            %
            %   Example:
            %   --------
            %   tracker = trackerTOMHT;
            %   detection = objectDetection(0, [0;0;0]);
            %   tracker(detection, 0); % Call the tracker to initiate a track
            %   branches = getBranches(tracker);
            %   branchID = branches(1).BranchID;
            %   setTrackFilterProperties(tracker, branchID, 'MeasurementNoise', 2, 'ProcessNoise', 5);
            %   values = getTrackFilterProperties(tracker, branchID, 'MeasurementNoise', 'ProcessNoise');
        end

        function out=setupImpl(~) %#ok<STOUT>
            % Perform one-time calculations, such as computing constants
            % Prepare the time stamp
        end

        function out=stepImpl(~) %#ok<STOUT>
            %STEP  Creates, updates, and deletes the tracks
            %   The step method is responsible for managing all the tracks:
            %     1. The method attempts to assign the detections to existing
            %        tracks.
            %     2. The trackerTOMHT allows for multiple hypotheses about the
            %        assignment of detections to tracks.
            %     3. Unassigned detections result in the creation of new
            %        tracks.
            %     4. Assignments of detections to tracks create new branches
            %        for the assigned tracks.
            %     5. Unassigned tracks are coasted (predicted).
            %     6. All the branches are scored and branches with low initial
            %        scores are pruned.
            %     7. Clusters of branches that share detections (incompatible
            %        branches) in their history are generated.
            %     8. Global hypotheses of compatible branches are formulated
            %        and scored.
            %     9. Branches are scored based on their existence in the global
            %        hypotheses. Low scored branches are pruned.
            %    10. Additional pruning is done based on N-scan history.
            %
            %   confirmedTracks = STEP(tracker, detections, time)
            %   Update the tracker with a list of detections to the time
            %   instance specified by time. It returns a struct array of
            %   confirmed tracks corrected and predicted to the time
            %   instance. See the track output below for description of
            %   confirmedTracks.
            %
            %   ... = STEP(..., costMatrix)
            %   HasCostMatrixInput must be true to use this syntax. The
            %   cost matrix must have rows in the same order as the list of
            %   branches and columns in the same order as the list of
            %   detections. Use the getBranches() method to get the correct
            %   order of the tracks list. If this is the first call to step
            %   or if there are no previous tracks, the cost matrix should
            %   have a size of [0,numDetections]. Note that a lower cost
            %   value indicates a higher likelihood of assigning a
            %   detection to a track. You may use inf to indicate that
            %   certain detections must not be assigned to certain tracks.
            %
            %   ... = STEP(..., detectableBranchIDs)
            %   HasDetectableBranchIDsInput must be true to use this
            %   syntax. The detectableBranchIDs must be an M-by-1 or M-by-2
            %   matrix. The first column is a list of branch IDs that the
            %   sensors report as detectable. The optional second column is
            %   the corresponding probability of detection, if reported by
            %   the sensors. If not reported, the DetectionProbability
            %   property is used. Branches, whose IDs are not part of
            %   detectableBranchIDs input, are considered as undetectable,
            %   meaning no 'miss' is counted against them if they are not
            %   assigned a detection.
            %
            %   [confirmedTracks, tentativeTracks, allTracks] = STEP(...)
            %   in addition, returns a list of the tentative tracks and all
            %   the tracks.
            %
            %   [..., analysisInformation] = STEP(...)
            %   in addition, returns a struct of analysis information.
            %
            %   Inputs:
            %     tracker            - a trackerTOMHT
            %     detections         - a cell array of objectDetection objects
            %     time               - the time to which all the tracks will
            %                          be updated and predicted. A real
            %                          numeric scalar, must be greater than
            %                          the value in the previous call.
            %     costMatrix         - the cost of assigning detections to
            %                          tracks. A real B-by-D matrix, where
            %                          B is the number of allBranches
            %                          output of the getBranches method.
            %     detectableTrackIDs - the branch IDs that sensors expect to
            %                          detect, reported as an M-by-1 or
            %                          M-by-2 matrix. The first column is
            %                          of branch IDs, as reported by the
            %                          BranchID field of the tracks output
            %                          (see Output below). The second
            %                          column is optional and allows you to
            %                          add the detection probability for
            %                          each track.
            %   Output:
            %     tracks - the output depends on the environment:
            %       MATLAB           - An array of <a href="matlab:help objectTrack">objectTrack</a> objects.
            %       Code generation  - An array of struct with the same fields
            %                          as objectTrack properties.
            %       Simulink         - A 1x1 bus that contains MaxNumTracks
            %                          track buses, each with elements similar
            %                          to objectTrack.
            %
            %     analysisInformation - a struct of additional information that
            %     allows you to analyze the tracker update stages.
            %     It includes the following fields:
            %       BranchIDsAtStepBeginning  - Branch IDs when the step began.
            %       CostMatrix                - Cost of assignment matrix.
            %       Assignments               - Assignments returned from
            %                                   assignTOMHT.
            %       UnassignedTracks          - IDs of unassigned branches
            %                                   returned from trackerTOMHT.
            %       UnassignedDetections      - IDs of unassigned detections
            %                                   returned from trackerTOMHT.
            %       InitialBranchHistory      - Branch history after branching,
            %                                   before pruning.
            %       InitialBranchScores       - Branch scores before pruning.
            %       KeptBranchHistory         - Branch history after initial
            %                                   pruning.
            %       KeptBranchScores          - Branch scores after initial
            %                                   pruning.
            %       Clusters                  - A logical array that maps
            %                                   branches to clusters. Branches
            %                                   belong in the same cluster if
            %                                   they share detections in their
            %                                   history or belong to the same
            %                                   track, either directly or
            %                                   through other branches. Such
            %                                   branches are incompatible.
            %       TrackIncompatibility      - Branch incompatibility matrix.
            %                                   The (i,j) element is true if
            %                                   the i-th and j-th branches have
            %                                   shared detections in their
            %                                   history or belong to the same
            %                                   track.
            %       GlobalHypotheses          - A logical matrix that maps
            %                                   branches to global hypotheses.
            %                                   Branches can belong in the same
            %                                   hypotheses if they are
            %                                   compatible.
            %       GlobalHypScores           - The total score of global
            %                                   hypotheses.
            %       PrunedBranches            - A logical array of branches
            %                                   that the pruneTrackBranches
            %                                   determined to be pruned.
            %       GlobalBranchProbabilities - Global probability of each
            %                                   branch, taking into account
            %                                   their existence in the global
            %                                   hypotheses.
            %       BranchesDeletedByPruning  - Branches that were deleted by
            %                                   the trackerTOMHT.
            %       BranchIDsAtStepEnd        - Branch IDs when the step ended.
            %
            %   See also: trackerTOMHT, objectDetection, objectTrack
        end

        function out=trackDetectability(~) %#ok<STOUT>
            % If HasDetectableBranchIDsInput is true, use
            % detectableBranchIDs to calculate obj.pWasDetectable and
            % obj.pTrackDetectionProbability. Otherwise, we use the default
            % that all tracks are detectable and that all tracks have
            % obj.DetectionProbability
        end

        function out=updateAssignedTracksFromHistory(~) %#ok<STOUT>
            % Updating an assigned track means that we are spawning a new
            % track and update it with the assigned detections. This
            % provides multiple hypotheses (the null hypothesis is that the
            % track was not assigned).
            % For each track hypothesis, history holds the detections that
            % were assigned to the track.
        end

        function out=updateUnassignedTracks(~) %#ok<STOUT>
            % Unassigned tracks: call the updateNotAssociated method on
            % each track
        end

        function out=validateFilterOnSetup(~) %#ok<STOUT>
        end

        function out=validateHypothesesToOutput(~) %#ok<STOUT>
        end

        function out=validateInputsImpl(~) %#ok<STOUT>
            % Validate inputs to the step method at initialization
            % Validate time input
        end

        function out=validateProbProps(~) %#ok<STOUT>
        end

        function out=validatePropertiesImpl(~) %#ok<STOUT>
            % Validate related or interdependent property values
        end

    end
    properties
        %AssignmentThreshold Threshold for assigning detections to tracks
        %   Specify the threshold that controls the assignment of a
        %   detection to a track, the creation of a new branch from
        %   detection, and the creation of a new branch from unassigned
        %   track. Specify this value as a scalar or a vector [C1,C2,C3,C4].
        %   The values must satisfy the relation: C1 <= C2 <= C3 <= C4.
        %   C1 defines a distance that if a track has an assigned detection
        %   with lower distance than C1, the track is no longer considered
        %   unassigned and does not create an unassigned track branch.
        %   C2 defines a distance that if a detection has been assigned to
        %   a track with lower distance than C2, the detection is no longer
        %   considered unassigned and does not create a new track branch.
        %   C3 defines the maximum distance for assigning a detection to a
        %   track.
        %   C4 defines the combinations of {track, detection} for which an
        %   accurate normalized cost calculation is performed. Initially, a
        %   coarse estimate of the normalized distance is done, and only
        %   combinations whose distance is less than C4 are calculated
        %   accurately.
        %   If specified as a scalar, the specified value will be expanded
        %   to [0.3, 0.7, 1, Inf]*value.
        %   If specified as [C1,C2,C3], it will be expanded by adding a
        %   fourth element, C4=Inf*C3.
        %
        %   Tips:
        %   1) Increase the value C3 if there are detections that should be
        %   assigned to tracks but are not. Decrease the value if there are
        %   detections that are assigned to tracks they should not be
        %   assigned to (too far).
        %   2) Increasing the values C1 and C2 can help control the number
        %   of track branches that are created. However, doing so reduces
        %   the number of branches (hypotheses) each track has.
        %   3) Increase the values of C4 if there are combinations of track
        %   and detection that should be calculated for assignment but are
        %   not. Decrease it if cost calculation takes too much time.
        %
        %   Default: [0.3, 0.7, 1, Inf]*30.0
        AssignmentThreshold;

        %Beta   Rate of new tracks per unit volume
        %   Specify the rate of new tracks per unit volume as a positive
        %   value.
        %   The rate of new tracks is used in calculating the track score
        %   during track initialization.
        %
        %   Default = 1
        Beta;

        %ConfirmationThreshold   Threshold for track confirmation
        %   Specify the threshold for track confirmation as a positive
        %   scalar value. Any track with a score higher than this threshold
        %   will be confirmed.
        %
        %   Default: 20
        ConfirmationThreshold;

        %DeletionThreshold   Threshold for track deletion
        %   Specify the threshold for track deletion as a negative scalar
        %   value. A track will be deleted if its score decreases, relative
        %   to its maximum score, by more than this threshold.
        %
        %   Default: -7
        DeletionThreshold;

        %DetectionProbability  The probability of detection used for track score
        %   Specify the probability of detection expected for the track as
        %   a scalar in the range (0,1)
        %   The probability of detection is used in calculating the track
        %   score when initializing and updating a track.
        %
        %   Default = 0.9
        DetectionProbability;

        %FalseAlarmRate    Rate of false positives used for track score
        %   Specify the expected rate of false positives as a scalar in the
        %   range (0,1)
        %   The false alarm rate is used in calculating the track score
        %   when initializing and updating a track.
        %
        %   Default = 1e-6
        FalseAlarmRate;

        %FilterInitializationFcn    Name of function to initialize filter
        %   Specify the function for initializing the tracking filter used
        %   by a new track.  The function must have the following syntax:
        %
        %       filter = filterInitializationFcn(detection)
        %
        %   filter    - a valid tracking filter that implements the motion
        %               and measurement models required for tracking
        %   detection - an objectDetection that initiates the track
        %
        %   Default: @initcvekf
        %   <a href="matlab:edit('initcvekf')">Open initcvekf for more details.</a>
        FilterInitializationFcn;

        %HasCostMatrixInput Enable cost matrix input
        %   Set this property to true if you want to provide the assignment
        %   cost matrix as an input in the call to step
        %
        %   Default: false
        HasCostMatrixInput;

        %HasDetectableBranchIDsInput Enable detectable branch IDs input
        %   Set this property to true if you want to provide the list of
        %   detectable branch IDs. Use this list to inform the tracker of
        %   branches that the sensors expected to detect and, optionally,
        %   the probability of detection for each track ID.
        %
        %   Default: false
        HasDetectableBranchIDsInput;

        %HypothesesToOutput - An array of hypotheses to output
        %   Choose which hypotheses to output as an array of indices. The
        %   indices must all be less than or equal to the maximum number of
        %   hypotheses provided by the tracker. This property is tunable.
        %
        % Default: 1
        HypothesesToOutput;

        %MaxNumHistoryScans  Maximum number of scans maintained in the branch history
        %   Set the maximum number of scans maintained in the branch
        %   history. The number of track history scans is typically between
        %   2 and 6. Higher values increase computational load.
        %
        %   Default: 4
        MaxNumHistoryScans;

        %MaxNumHypotheses   Maximum number of hypotheses to maintain
        %   Set the maximum number of global hypotheses maintained by the
        %   tracker in cases of ambiguity. Higher values allow the tracker
        %   to maintain more ambiguity, but increase computational load.
        %
        %   Default: 5
        MaxNumHypotheses;

        %MaxNumSensors Maximum number of sensors
        %   Set the maximum number of tracks the tracker can maintain as a
        %   positive real integer.
        %   This number must be greater than or equal to the highest
        %   SensorIndex value used in the detections input to the
        %   step method. This property determines how many sets of
        %   ObjectAttributes each track can have and is used in the
        %   management of track branches.
        %
        %   Default: 20
        MaxNumSensors;

        %MaxNumTrackBranches  Maximum number of track branches per track
        %   Set the maximum number of track branches (hypotheses) allowed
        %   for each track. Higher values allow the tracker to maintain
        %   more ambiguity, but increase computational load.
        %
        %   Default: 3
        MaxNumTrackBranches;

        %MaxNumTracks   Maximum number of tracks
        %   Set the maximum number of tracks the tracker can maintain as a
        %   positive real integer.
        %
        %   Default: 100
        MaxNumTracks;

        %MinBranchProbability   Minimum probability required to keep a branch
        %   Define the minimum probability required to keep the branch.
        %   Any branch with probability lower than this will be pruned.
        %   Must be a real positive scalar less than 1. Typical values are
        %   0.001 to 0.005.
        %
        %   Default: 0.001
        MinBranchProbability;

        %NScanPruning - Choose n-scan pruning method
        %   Choose n-scan pruning option from [{'None'},'Hypothesis'].
        %   In n-scan pruning, branches that belong to the same track are
        %   pruned (deleted) if, in the n scans history, they contradict
        %   the most likely branch for the same track. The most likely
        %   branch is defined in one of two ways:
        %     'None'       - No N-scan pruning us done.
        %     'Hypothesis' - The branch is in the most likely hypothesis.
        %
        %   Default: 'None'
        NScanPruning;

        %OOSMHandling Handle out-of-sequence measurement (OOSM)
        %   Choose out-of-sequence measurement (OOSM) handling technique
        %   option from [{'Terminate'},'Neglect']. Each detection has a
        %   timestamp associated with it, td, and the tracker has it own
        %   timestamp, tt, which is updated with every call to step. A
        %   measurement is considered to be an OOSM if td < tt. 
        %   You can select how the tracker handles the OOSM:
        %     'Terminate' - The tracker terminates its step on any OOSM.
        %     'Neglect'   - The tracker neglects any OOSM but keeps running.
        OOSMHandling;

        %OutputRepresentation - Choice of track output method
        %   Choose the output method from a list of the following methods:
        %     'Hypothesis'  - Outputs each branches that are in certain
        %                     hypotheses. If you choose this option, list
        %                     the hypotheses to output using the property
        %                     HypothesesToOutput.
        %     'Tracks'      - Outputs the centroid of each track based on
        %                     its track branches.
        %     'Clusters'    - Outputs the centroid of each cluster. Similar
        %                     to 'Tracks' output, but includes all the
        %                     tracks within a cluster.
        %
        %   Default: 'Tracks'
        OutputRepresentation;

        %Volume The volume of the sensor's detection bin
        %   Specify the volume of the sensor measurement bin as a positive
        %   scalar.
        %   For example, if a radar produces a 4-D measurement, which
        %   includes azimuth, elevation, range, and range-rate, the 4-D
        %   volume is defined by the radar beam width in angle and the
        %   range and range rate bin widths.
        %   The volume is used in calculating the track score when
        %   initializing and updating a track.
        %
        %   Default = 1
        Volume;

        %pBranchIDs         A list of track branch IDs. For each track in
        %                   pTracksList, keep the associated track ID
        pBranchIDs;

        %pClusters  Keeps the clusters matrix for predictTracksToTime
        pClusters;

        %pHyps      Keeps the hypotheses matrix for predictTracksToTime
        pHyps;

        %pLastTimeStamp     Time stamp of the last tracker update
        pLastTimeStamp;

        %pProbs     Keeps the branch probabilities for predictTracksToTime
        pProbs;

        %pTrackDetectionProbability Detection probability for tracks
        %   Used if DetectableTrackIDs is enabled.
        pTrackDetectionProbability;

        %pWasDetectable Lets the tracker know which tracks were detectable
        %               by the sensors
        pWasDetectable;

    end
end
