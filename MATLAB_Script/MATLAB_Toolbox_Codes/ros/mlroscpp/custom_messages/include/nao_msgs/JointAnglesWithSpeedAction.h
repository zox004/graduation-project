// Generated by gencpp from file nao_msgs/JointAnglesWithSpeedAction.msg
// DO NOT EDIT!


#ifndef NAO_MSGS_MESSAGE_JOINTANGLESWITHSPEEDACTION_H
#define NAO_MSGS_MESSAGE_JOINTANGLESWITHSPEEDACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nao_msgs/JointAnglesWithSpeedActionGoal.h>
#include <nao_msgs/JointAnglesWithSpeedActionResult.h>
#include <nao_msgs/JointAnglesWithSpeedActionFeedback.h>

namespace nao_msgs
{
template <class ContainerAllocator>
struct JointAnglesWithSpeedAction_
{
  typedef JointAnglesWithSpeedAction_<ContainerAllocator> Type;

  JointAnglesWithSpeedAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  JointAnglesWithSpeedAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nao_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::nao_msgs::JointAnglesWithSpeedActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::nao_msgs::JointAnglesWithSpeedActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> const> ConstPtr;

}; // struct JointAnglesWithSpeedAction_

typedef ::nao_msgs::JointAnglesWithSpeedAction_<std::allocator<void> > JointAnglesWithSpeedAction;

typedef boost::shared_ptr< ::nao_msgs::JointAnglesWithSpeedAction > JointAnglesWithSpeedActionPtr;
typedef boost::shared_ptr< ::nao_msgs::JointAnglesWithSpeedAction const> JointAnglesWithSpeedActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nao_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/local-ssd1/All_Custom_Msgs/packages/matlab_msg_gen_ros1/glnxa64/src/nav_msgs/msg', '/local-ssd1/All_Custom_Msgs/packages/matlab_msg_gen_ros1/glnxa64/devel/share/nav_msgs/msg'], 'nao_msgs': ['/local-ssd1/All_Custom_Msgs/packages/matlab_msg_gen_ros1/glnxa64/src/nao_msgs/msg', '/local-ssd1/All_Custom_Msgs/packages/matlab_msg_gen_ros1/glnxa64/devel/share/nao_msgs/msg'], 'sensor_msgs': ['/local-ssd1/All_Custom_Msgs/packages/matlab_msg_gen_ros1/glnxa64/src/sensor_msgs/msg'], 'actionlib': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1403056/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'trajectory_msgs': ['/local-ssd1/All_Custom_Msgs/packages/matlab_msg_gen_ros1/glnxa64/src/trajectory_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1403056/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/33/hakakarl.Brobot.j1403056/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/local-ssd1/All_Custom_Msgs/packages/matlab_msg_gen_ros1/glnxa64/src/geometry_msgs/msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1403056/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "efd2f7ac88847414fd26aacf32f993a5";
  }

  static const char* value(const ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xefd2f7ac88847414ULL;
  static const uint64_t static_value2 = 0xfd26aacf32f993a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nao_msgs/JointAnglesWithSpeedAction";
  }

  static const char* value(const ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"JointAnglesWithSpeedActionGoal action_goal\n"
"JointAnglesWithSpeedActionResult action_result\n"
"JointAnglesWithSpeedActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: nao_msgs/JointAnglesWithSpeedActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"JointAnglesWithSpeedGoal goal\n"
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
"MSG: nao_msgs/JointAnglesWithSpeedGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# goal: a registered body pose name\n"
"nao_msgs/JointAnglesWithSpeed joint_angles\n"
"\n"
"================================================================================\n"
"MSG: nao_msgs/JointAnglesWithSpeed\n"
"Header header\n"
"\n"
"# A list of joint names, corresponding to their names in the Nao docs.\n"
"# This must be either the same lenght of joint_angles or 1 if it's a\n"
"# keyword such as 'Body' (for all angles)\n"
"string[] joint_names\n"
"float32[] joint_angles\n"
"\n"
"#fraction of max joint velocity [0:1]\n"
"float32 speed\n"
"\n"
"# Absolute angle(=0, default) or relative change\n"
"uint8 relative\n"
"\n"
"================================================================================\n"
"MSG: nao_msgs/JointAnglesWithSpeedActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"JointAnglesWithSpeedResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: nao_msgs/JointAnglesWithSpeedResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# result is the actually reached position\n"
"sensor_msgs/JointState goal_position\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/JointState\n"
"# This is a message that holds data to describe the state of a set of torque controlled joints. \n"
"#\n"
"# The state of each joint (revolute or prismatic) is defined by:\n"
"#  * the position of the joint (rad or m),\n"
"#  * the velocity of the joint (rad/s or m/s) and \n"
"#  * the effort that is applied in the joint (Nm or N).\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# effort associated with them, you can leave the effort array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"\n"
"Header header\n"
"\n"
"string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
"================================================================================\n"
"MSG: nao_msgs/JointAnglesWithSpeedActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"JointAnglesWithSpeedFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: nao_msgs/JointAnglesWithSpeedFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# no feedback currently \n"
;
  }

  static const char* value(const ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointAnglesWithSpeedAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nao_msgs::JointAnglesWithSpeedAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::nao_msgs::JointAnglesWithSpeedActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::nao_msgs::JointAnglesWithSpeedActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::nao_msgs::JointAnglesWithSpeedActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAO_MSGS_MESSAGE_JOINTANGLESWITHSPEEDACTION_H
