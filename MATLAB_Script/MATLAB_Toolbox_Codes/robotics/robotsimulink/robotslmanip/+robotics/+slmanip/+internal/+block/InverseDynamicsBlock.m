classdef InverseDynamicsBlock < matlab.System
    % This class is for internal use only. It may be removed in the future.
    
    %INVERSEDYNAMICSBLOCK Inverse Dynamics block system object

    % Copyright 2018-2020 The MathWorks, Inc.

    %#codegen
    
    properties(Nontunable)
        
        %TreeStruct - Struct from which wrapper SysObj builds the TreeInternal
        TreeStruct = 0;
        
        %TreeInternal - A robotics.manip.internal.RigidBodyTree instantiated from TreeStruct
        TreeInternal
    end

    methods
        function obj = InverseDynamicsBlock(varargin)
            %InverseDynamicsBlock Constructor for Inverse Dynamics block system object
            
            % Support name-value pair arguments when constructing object
            setProperties(obj,nargin,varargin{:})
        end
    end

    methods(Access = protected)
        function setupImpl(obj)
            %setupImpl Perform one-time calculations, such as computing constants
            
            % Assign the robot internal property by instantiating from the structure      
            obj.TreeInternal = robotics.manip.internal.RigidBodyTree(obj.TreeStruct.NumBodies, obj.TreeStruct);
        end

        function jointTorq = stepImpl(obj, q, qDot, qDDot, fExt_In)   
            %stepImpl Call RBT object to generate a solution
            
            jointTorq = cast(zeros(size(qDot)),'like',q);
            fExt = zeros(6, obj.TreeStruct.NumBodies);
            fExt(:,:) = fExt_In; 
            jointTorq(:) = cast(robotics.manip.internal.RigidBodyTreeDynamics.inverseDynamics(...
                obj.TreeInternal, double(q), double(qDot), double(qDDot), double(fExt)),'like',q);
        end

        function resetImpl(~)
            %resetImpl Initialize / reset discrete-state properties
        end
        
        function validateInputsImpl(obj, q, qDot, qDDot, fExt_In)
            %validateInputsImpl Validate inputs to the step method at initialization
            
            validateattributes(q,{'single','double'},{'vector'},'InverseDynamicsBlock','Config');
            validateattributes(qDot,{'single','double'},{'vector'},'InverseDynamicsBlock','JointVel');
            validateattributes(qDDot,{'single','double'},{'vector'},'InverseDynamicsBlock','JointAccel');
            validateattributes(fExt_In,{'single','double'},{'2d'},'InverseDynamicsBlock','FExt');
        end

        function flag = isInputSizeMutableImpl(~,~)
            %isInputSizeMutableImpl Specify input size mutability
            %   Return false if input size cannot change
            %   between calls to the System object
            flag = false;
        end

        function flag = isInputDataTypeMutableImpl(~,~)
            %isInputDataTypeMutableImpl Specify input type mutability
            %   Return false if input data type cannot change
            %   between calls to the System object
            flag = false;
        end

        function num = getNumOutputsImpl(obj)
            %getNumOutputsImpl Define total number of outputs
            num = 1;
        end
        
        function out = getOutputSizeImpl(obj)
            %getOutputSizeImpl Return size for each output port
            out = [obj.TreeStruct.VelocityNumber 1];
        end

        function out = getOutputDataTypeImpl(obj)
            %getOutputDataTypeImpl Return data type for each output port
            out = propagatedInputDataType(obj,1);
        end

        function out = isOutputComplexImpl(obj)
            %isOutputComplexImpl Return true for each output port with complex data
            out = false;
        end

        function out = isOutputFixedSizeImpl(obj)
            %isOutputFixedSizeImpl Return true for each output port with fixed size
            out = true;
        end
    end
    
    methods(Access = protected, Static)
        function header = getHeaderImpl
            %getHeaderImpl Define header panel for System block dialog
            header = matlab.system.display.Header(mfilename("class"));
        end

        function group = getPropertyGroupsImpl
            %getPropertyGroupsImpl Define property section(s) for System block dialog
            mainGroup = matlab.system.display.SectionGroup(...
                'Title','Initial conditions', ...
                'PropertyList',{'TreeStruct'});
            
            group = mainGroup;
        end

        function flag = showSimulateUsingImpl
            %showSimulateUsingImpl Return false if simulation mode hidden in System block dialog
            flag = true;
        end
    end
end
