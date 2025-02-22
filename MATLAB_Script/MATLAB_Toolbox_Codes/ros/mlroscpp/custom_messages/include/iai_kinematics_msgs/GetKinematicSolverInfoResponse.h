// Generated by gencpp from file iai_kinematics_msgs/GetKinematicSolverInfoResponse.msg
// DO NOT EDIT!


#ifndef IAI_KINEMATICS_MSGS_MESSAGE_GETKINEMATICSOLVERINFORESPONSE_H
#define IAI_KINEMATICS_MSGS_MESSAGE_GETKINEMATICSOLVERINFORESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <iai_kinematics_msgs/KinematicSolverInfo.h>

namespace iai_kinematics_msgs
{
template <class ContainerAllocator>
struct GetKinematicSolverInfoResponse_
{
  typedef GetKinematicSolverInfoResponse_<ContainerAllocator> Type;

  GetKinematicSolverInfoResponse_()
    : kinematic_solver_info()  {
    }
  GetKinematicSolverInfoResponse_(const ContainerAllocator& _alloc)
    : kinematic_solver_info(_alloc)  {
  (void)_alloc;
    }



   typedef  ::iai_kinematics_msgs::KinematicSolverInfo_<ContainerAllocator>  _kinematic_solver_info_type;
  _kinematic_solver_info_type kinematic_solver_info;





  typedef boost::shared_ptr< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetKinematicSolverInfoResponse_

typedef ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<std::allocator<void> > GetKinematicSolverInfoResponse;

typedef boost::shared_ptr< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse > GetKinematicSolverInfoResponsePtr;
typedef boost::shared_ptr< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse const> GetKinematicSolverInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iai_kinematics_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/mathworks/home/pmurali/Documents/rosjava_messages/GEN-4-6/8/matlab_msg_gen_ros1/glnxa64/src/sensor_msgs/msg'], 'geometry_msgs': ['/mathworks/home/pmurali/Documents/rosjava_messages/GEN-4-6/8/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg'], 'iai_kinematics_msgs': ['/mathworks/home/pmurali/Documents/rosjava_messages/GEN-4-6/8/matlab_msg_gen_ros1/glnxa64/src/iai_kinematics_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b591d98efeb66095c1b33a70221cab5";
  }

  static const char* value(const ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b591d98efeb6609ULL;
  static const uint64_t static_value2 = 0x5c1b33a70221cab5ULL;
};

template<class ContainerAllocator>
struct DataType< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iai_kinematics_msgs/GetKinematicSolverInfoResponse";
  }

  static const char* value(const ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iai_kinematics_msgs/KinematicSolverInfo kinematic_solver_info\n"
"\n"
"\n"
"================================================================================\n"
"MSG: iai_kinematics_msgs/KinematicSolverInfo\n"
"# A list of joints in the kinematic tree\n"
"string[] joint_names\n"
"# A list of joint limits corresponding to the joint names\n"
"iai_kinematics_msgs/JointLimits[] limits\n"
"# A list of links that the kinematics node provides solutions for\n"
"string[] link_names\n"
"\n"
"================================================================================\n"
"MSG: iai_kinematics_msgs/JointLimits\n"
"# This message contains information about limits of a particular joint (or control dimension)\n"
"string joint_name\n"
"\n"
"# true if the joint has position limits\n"
"bool has_position_limits\n"
"\n"
"# min and max position limits\n"
"float64 min_position\n"
"float64 max_position\n"
"\n"
"# true if joint has velocity limits\n"
"bool has_velocity_limits\n"
"\n"
"# max velocity limit\n"
"float64 max_velocity\n"
"# min_velocity is assumed to be -max_velocity\n"
"\n"
"# true if joint has acceleration limits\n"
"bool has_acceleration_limits\n"
"# max acceleration limit\n"
"float64 max_acceleration\n"
"# min_acceleration is assumed to be -max_acceleration\n"
;
  }

  static const char* value(const ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.kinematic_solver_info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetKinematicSolverInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iai_kinematics_msgs::GetKinematicSolverInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "kinematic_solver_info: ";
    s << std::endl;
    Printer< ::iai_kinematics_msgs::KinematicSolverInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.kinematic_solver_info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAI_KINEMATICS_MSGS_MESSAGE_GETKINEMATICSOLVERINFORESPONSE_H
