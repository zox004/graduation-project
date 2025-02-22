// Generated by gencpp from file pano_ros/PanoCaptureActionGoal.msg
// DO NOT EDIT!


#ifndef PANO_ROS_MESSAGE_PANOCAPTUREACTIONGOAL_H
#define PANO_ROS_MESSAGE_PANOCAPTUREACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <pano_ros/PanoCaptureGoal.h>

namespace pano_ros
{
template <class ContainerAllocator>
struct PanoCaptureActionGoal_
{
  typedef PanoCaptureActionGoal_<ContainerAllocator> Type;

  PanoCaptureActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  PanoCaptureActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::pano_ros::PanoCaptureGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct PanoCaptureActionGoal_

typedef ::pano_ros::PanoCaptureActionGoal_<std::allocator<void> > PanoCaptureActionGoal;

typedef boost::shared_ptr< ::pano_ros::PanoCaptureActionGoal > PanoCaptureActionGoalPtr;
typedef boost::shared_ptr< ::pano_ros::PanoCaptureActionGoal const> PanoCaptureActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pano_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'pano_ros': ['/local-ssd1/All_Custom_Msgs/PendingActionPackages/matlab_msg_gen_ros1/glnxa64/src/pano_ros/msg', '/local-ssd1/All_Custom_Msgs/PendingActionPackages/matlab_msg_gen_ros1/glnxa64/devel/share/pano_ros/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'sensor_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "89c6aeb4dc23614f0f2fdd00ff6a29c8";
  }

  static const char* value(const ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x89c6aeb4dc23614fULL;
  static const uint64_t static_value2 = 0x0f2fdd00ff6a29c8ULL;
};

template<class ContainerAllocator>
struct DataType< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pano_ros/PanoCaptureActionGoal";
  }

  static const char* value(const ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"PanoCaptureGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: pano_ros/PanoCaptureGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"# TODO: tf frame \n"
"string camera_topic\n"
"string bag_filename\n"
;
  }

  static const char* value(const ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PanoCaptureActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pano_ros::PanoCaptureActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::pano_ros::PanoCaptureGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PANO_ROS_MESSAGE_PANOCAPTUREACTIONGOAL_H
