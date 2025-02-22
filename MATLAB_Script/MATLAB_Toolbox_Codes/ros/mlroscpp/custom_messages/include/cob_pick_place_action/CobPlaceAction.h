// Generated by gencpp from file cob_pick_place_action/CobPlaceAction.msg
// DO NOT EDIT!


#ifndef COB_PICK_PLACE_ACTION_MESSAGE_COBPLACEACTION_H
#define COB_PICK_PLACE_ACTION_MESSAGE_COBPLACEACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cob_pick_place_action/CobPlaceActionGoal.h>
#include <cob_pick_place_action/CobPlaceActionResult.h>
#include <cob_pick_place_action/CobPlaceActionFeedback.h>

namespace cob_pick_place_action
{
template <class ContainerAllocator>
struct CobPlaceAction_
{
  typedef CobPlaceAction_<ContainerAllocator> Type;

  CobPlaceAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  CobPlaceAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::cob_pick_place_action::CobPlaceActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::cob_pick_place_action::CobPlaceActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::cob_pick_place_action::CobPlaceActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> const> ConstPtr;

}; // struct CobPlaceAction_

typedef ::cob_pick_place_action::CobPlaceAction_<std::allocator<void> > CobPlaceAction;

typedef boost::shared_ptr< ::cob_pick_place_action::CobPlaceAction > CobPlaceActionPtr;
typedef boost::shared_ptr< ::cob_pick_place_action::CobPlaceAction const> CobPlaceActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator1> & lhs, const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator2> & rhs)
{
  return lhs.action_goal == rhs.action_goal &&
    lhs.action_result == rhs.action_result &&
    lhs.action_feedback == rhs.action_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator1> & lhs, const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cob_pick_place_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3111cd554bb468b33adbd6c714aa6b1a";
  }

  static const char* value(const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3111cd554bb468b3ULL;
  static const uint64_t static_value2 = 0x3adbd6c714aa6b1aULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_pick_place_action/CobPlaceAction";
  }

  static const char* value(const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"CobPlaceActionGoal action_goal\n"
"CobPlaceActionResult action_result\n"
"CobPlaceActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: cob_pick_place_action/CobPlaceActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"CobPlaceGoal goal\n"
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
"MSG: cob_pick_place_action/CobPlaceGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"##########################################################\n"
"##########     Object Information(goal)   ######################\n"
"\n"
"uint32 object_class\n"
"string object_name\n"
"\n"
"geometry_msgs/PoseStamped[] destinations\n"
"\n"
"string support_surface\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
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
"\n"
"================================================================================\n"
"MSG: cob_pick_place_action/CobPlaceActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"CobPlaceResult result\n"
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
"MSG: cob_pick_place_action/CobPlaceResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"##########################################################\n"
"##########     Pickup Result (result)   ######################\n"
"\n"
"std_msgs/Bool success\n"
"\n"
"string cob_pick_error_string\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Bool\n"
"bool data\n"
"================================================================================\n"
"MSG: cob_pick_place_action/CobPlaceActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"CobPlaceFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: cob_pick_place_action/CobPlaceFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"##########################################################\n"
"##########     Pickup Feedback (feedback)   ######################\n"
"\n"
"std_msgs/Bool success\n"
"\n"
"string cob_pick_error_string\n"
"\n"
;
  }

  static const char* value(const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CobPlaceAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_pick_place_action::CobPlaceAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::cob_pick_place_action::CobPlaceActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::cob_pick_place_action::CobPlaceActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::cob_pick_place_action::CobPlaceActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_PICK_PLACE_ACTION_MESSAGE_COBPLACEACTION_H
