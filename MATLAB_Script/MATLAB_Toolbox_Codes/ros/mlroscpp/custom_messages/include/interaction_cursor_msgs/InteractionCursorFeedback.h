// Generated by gencpp from file interaction_cursor_msgs/InteractionCursorFeedback.msg
// DO NOT EDIT!


#ifndef INTERACTION_CURSOR_MSGS_MESSAGE_INTERACTIONCURSORFEEDBACK_H
#define INTERACTION_CURSOR_MSGS_MESSAGE_INTERACTIONCURSORFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace interaction_cursor_msgs
{
template <class ContainerAllocator>
struct InteractionCursorFeedback_
{
  typedef InteractionCursorFeedback_<ContainerAllocator> Type;

  InteractionCursorFeedback_()
    : pose()
    , attachment_type(0)
    , event_type(0)  {
    }
  InteractionCursorFeedback_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , attachment_type(0)
    , event_type(0)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef uint8_t _attachment_type_type;
  _attachment_type_type attachment_type;

   typedef uint8_t _event_type_type;
  _event_type_type event_type;



  enum {
    NONE = 0u,
    POSITION = 1u,
    ORIENTATION = 2u,
    POSITION_AND_ORIENTATION = 3u,
    GRABBED = 1u,
    KEEP_ALIVE = 2u,
    RELEASED = 3u,
    LOST_GRASP = 4u,
  };


  typedef boost::shared_ptr< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct InteractionCursorFeedback_

typedef ::interaction_cursor_msgs::InteractionCursorFeedback_<std::allocator<void> > InteractionCursorFeedback;

typedef boost::shared_ptr< ::interaction_cursor_msgs::InteractionCursorFeedback > InteractionCursorFeedbackPtr;
typedef boost::shared_ptr< ::interaction_cursor_msgs::InteractionCursorFeedback const> InteractionCursorFeedbackConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace interaction_cursor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'interaction_cursor_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/interaction_cursor_msgs/msg'], 'visualization_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/visualization_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "92dcfa34c8dfcb4f63d1d35ca54dc145";
  }

  static const char* value(const ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x92dcfa34c8dfcb4fULL;
  static const uint64_t static_value2 = 0x63d1d35ca54dc145ULL;
};

template<class ContainerAllocator>
struct DataType< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interaction_cursor_msgs/InteractionCursorFeedback";
  }

  static const char* value(const ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# When the cursor attaches to an interactive_marker, this feedback \n"
"# message contains the frame_id of the TF frame that the marker \n"
"# is used to \"control\", if any. The pose records the pose of the \n"
"# cursor relative to that frame at time of grasp.\n"
"geometry_msgs/PoseStamped pose\n"
"\n"
"# Default for both event_type and attachment_type\n"
"uint8 NONE = 0\n"
"\n"
"# Attachment types define what kind of virtual spring coupling there \n"
"# is between the device and the grabbed object frame.\n"
"uint8 POSITION = 1\n"
"uint8 ORIENTATION = 2\n"
"uint8 POSITION_AND_ORIENTATION = 3\n"
"uint8 attachment_type\n"
"\n"
"# KEEP_ALIVE: should probably be sent regularly by Rviz, otherwise\n"
"# the interaction app should assume that it has lost control of the marker.\n"
"uint8 GRABBED = 1\n"
"uint8 KEEP_ALIVE = 2\n"
"uint8 RELEASED = 3\n"
"uint8 LOST_GRASP = 4\n"
"\n"
"uint8 event_type\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of postion and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.attachment_type);
      stream.next(m.event_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InteractionCursorFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interaction_cursor_msgs::InteractionCursorFeedback_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "attachment_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.attachment_type);
    s << indent << "event_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.event_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERACTION_CURSOR_MSGS_MESSAGE_INTERACTIONCURSORFEEDBACK_H
