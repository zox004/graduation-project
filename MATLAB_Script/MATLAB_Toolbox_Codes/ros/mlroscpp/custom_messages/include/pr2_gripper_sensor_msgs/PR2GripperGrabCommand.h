// Generated by gencpp from file pr2_gripper_sensor_msgs/PR2GripperGrabCommand.msg
// DO NOT EDIT!


#ifndef PR2_GRIPPER_SENSOR_MSGS_MESSAGE_PR2GRIPPERGRABCOMMAND_H
#define PR2_GRIPPER_SENSOR_MSGS_MESSAGE_PR2GRIPPERGRABCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_gripper_sensor_msgs
{
template <class ContainerAllocator>
struct PR2GripperGrabCommand_
{
  typedef PR2GripperGrabCommand_<ContainerAllocator> Type;

  PR2GripperGrabCommand_()
    : hardness_gain(0.0)  {
    }
  PR2GripperGrabCommand_(const ContainerAllocator& _alloc)
    : hardness_gain(0.0)  {
  (void)_alloc;
    }



   typedef double _hardness_gain_type;
  _hardness_gain_type hardness_gain;





  typedef boost::shared_ptr< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> const> ConstPtr;

}; // struct PR2GripperGrabCommand_

typedef ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<std::allocator<void> > PR2GripperGrabCommand;

typedef boost::shared_ptr< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand > PR2GripperGrabCommandPtr;
typedef boost::shared_ptr< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand const> PR2GripperGrabCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_gripper_sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'pr2_gripper_sensor_msgs': ['/local-ssd1/All_Custom_Msgs/PendingActionPackagesPart2/matlab_msg_gen_ros1/glnxa64/src/pr2_gripper_sensor_msgs/msg', '/local-ssd1/All_Custom_Msgs/PendingActionPackagesPart2/matlab_msg_gen_ros1/glnxa64/devel/share/pr2_gripper_sensor_msgs/msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf286b093615060c79527896d36bf694";
  }

  static const char* value(const ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf286b093615060cULL;
  static const uint64_t static_value2 = 0x79527896d36bf694ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_gripper_sensor_msgs/PR2GripperGrabCommand";
  }

  static const char* value(const ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The gain to use to evaluate how hard an object should be\n"
"# grasped after it is contacted. This is based on hardness\n"
"# estimation as outlined in TRO paper (see wiki).\n"
"# \n"
"# Try 0.03\n"
"#\n"
"# Units (N/(m/s^2))\n"
"float64 hardness_gain\n"
;
  }

  static const char* value(const ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hardness_gain);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PR2GripperGrabCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_gripper_sensor_msgs::PR2GripperGrabCommand_<ContainerAllocator>& v)
  {
    s << indent << "hardness_gain: ";
    Printer<double>::stream(s, indent + "  ", v.hardness_gain);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_GRIPPER_SENSOR_MSGS_MESSAGE_PR2GRIPPERGRABCOMMAND_H
