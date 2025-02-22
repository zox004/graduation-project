// Generated by gencpp from file scanning_table_msgs/scanning_tableAction.msg
// DO NOT EDIT!


#ifndef SCANNING_TABLE_MSGS_MESSAGE_SCANNING_TABLEACTION_H
#define SCANNING_TABLE_MSGS_MESSAGE_SCANNING_TABLEACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <scanning_table_msgs/scanning_tableActionGoal.h>
#include <scanning_table_msgs/scanning_tableActionResult.h>
#include <scanning_table_msgs/scanning_tableActionFeedback.h>

namespace scanning_table_msgs
{
template <class ContainerAllocator>
struct scanning_tableAction_
{
  typedef scanning_tableAction_<ContainerAllocator> Type;

  scanning_tableAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  scanning_tableAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::scanning_table_msgs::scanning_tableActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::scanning_table_msgs::scanning_tableActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::scanning_table_msgs::scanning_tableActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> const> ConstPtr;

}; // struct scanning_tableAction_

typedef ::scanning_table_msgs::scanning_tableAction_<std::allocator<void> > scanning_tableAction;

typedef boost::shared_ptr< ::scanning_table_msgs::scanning_tableAction > scanning_tableActionPtr;
typedef boost::shared_ptr< ::scanning_table_msgs::scanning_tableAction const> scanning_tableActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scanning_table_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'scanning_table_msgs': ['/local-ssd1/All_Custom_Msgs/PendingActionPackagesPart2/matlab_msg_gen_ros1/glnxa64/devel/share/scanning_table_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "929fc3e1b4db4c1fb852d18d42f5940b";
  }

  static const char* value(const ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x929fc3e1b4db4c1fULL;
  static const uint64_t static_value2 = 0xb852d18d42f5940bULL;
};

template<class ContainerAllocator>
struct DataType< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scanning_table_msgs/scanning_tableAction";
  }

  static const char* value(const ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"scanning_tableActionGoal action_goal\n"
"scanning_tableActionResult action_result\n"
"scanning_tableActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: scanning_table_msgs/scanning_tableActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"scanning_tableGoal goal\n"
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
"MSG: scanning_table_msgs/scanning_tableGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal\n"
"float64 angle\n"
"float64 release_brake_timeout\n"
"\n"
"================================================================================\n"
"MSG: scanning_table_msgs/scanning_tableActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"scanning_tableResult result\n"
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
"MSG: scanning_table_msgs/scanning_tableResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result\n"
"string answer\n"
"\n"
"================================================================================\n"
"MSG: scanning_table_msgs/scanning_tableActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"scanning_tableFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: scanning_table_msgs/scanning_tableFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"string status\n"
"float64 angle\n"
"\n"
"\n"
;
  }

  static const char* value(const ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct scanning_tableAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scanning_table_msgs::scanning_tableAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::scanning_table_msgs::scanning_tableActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::scanning_table_msgs::scanning_tableActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::scanning_table_msgs::scanning_tableActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCANNING_TABLE_MSGS_MESSAGE_SCANNING_TABLEACTION_H
