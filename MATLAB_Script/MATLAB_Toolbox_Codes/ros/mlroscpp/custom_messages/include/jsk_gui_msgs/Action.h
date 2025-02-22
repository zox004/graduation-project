// Generated by gencpp from file jsk_gui_msgs/Action.msg
// DO NOT EDIT!


#ifndef JSK_GUI_MSGS_MESSAGE_ACTION_H
#define JSK_GUI_MSGS_MESSAGE_ACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jsk_gui_msgs
{
template <class ContainerAllocator>
struct Action_
{
  typedef Action_<ContainerAllocator> Type;

  Action_()
    : task_name()
    , arm_id(0)
    , state()
    , state_value(0.0)
    , direction()
    , direction_value(0.0)
    , touch_x(0)
    , touch_y(0)  {
    }
  Action_(const ContainerAllocator& _alloc)
    : task_name(_alloc)
    , arm_id(0)
    , state(_alloc)
    , state_value(0.0)
    , direction(_alloc)
    , direction_value(0.0)
    , touch_x(0)
    , touch_y(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _task_name_type;
  _task_name_type task_name;

   typedef int64_t _arm_id_type;
  _arm_id_type arm_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;

   typedef double _state_value_type;
  _state_value_type state_value;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _direction_type;
  _direction_type direction;

   typedef double _direction_value_type;
  _direction_value_type direction_value;

   typedef int64_t _touch_x_type;
  _touch_x_type touch_x;

   typedef int64_t _touch_y_type;
  _touch_y_type touch_y;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(RARMID)
  #undef RARMID
#endif
#if defined(_WIN32) && defined(LARMID)
  #undef LARMID
#endif

  enum {
    RARMID = 0,
    LARMID = 1,
  };


  typedef boost::shared_ptr< ::jsk_gui_msgs::Action_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_gui_msgs::Action_<ContainerAllocator> const> ConstPtr;

}; // struct Action_

typedef ::jsk_gui_msgs::Action_<std::allocator<void> > Action;

typedef boost::shared_ptr< ::jsk_gui_msgs::Action > ActionPtr;
typedef boost::shared_ptr< ::jsk_gui_msgs::Action const> ActionConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_gui_msgs::Action_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_gui_msgs::Action_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_gui_msgs::Action_<ContainerAllocator1> & lhs, const ::jsk_gui_msgs::Action_<ContainerAllocator2> & rhs)
{
  return lhs.task_name == rhs.task_name &&
    lhs.arm_id == rhs.arm_id &&
    lhs.state == rhs.state &&
    lhs.state_value == rhs.state_value &&
    lhs.direction == rhs.direction &&
    lhs.direction_value == rhs.direction_value &&
    lhs.touch_x == rhs.touch_x &&
    lhs.touch_y == rhs.touch_y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_gui_msgs::Action_<ContainerAllocator1> & lhs, const ::jsk_gui_msgs::Action_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_gui_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::jsk_gui_msgs::Action_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_gui_msgs::Action_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_gui_msgs::Action_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_gui_msgs::Action_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_gui_msgs::Action_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_gui_msgs::Action_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_gui_msgs::Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d81dc8475ff89ce7097d2e73ebfc2591";
  }

  static const char* value(const ::jsk_gui_msgs::Action_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd81dc8475ff89ce7ULL;
  static const uint64_t static_value2 = 0x097d2e73ebfc2591ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_gui_msgs::Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_gui_msgs/Action";
  }

  static const char* value(const ::jsk_gui_msgs::Action_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_gui_msgs::Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "byte RARMID=0\n"
"byte LARMID=1\n"
"\n"
"# task: push, pick, open, slide, MoveNeck, MoveBase\n"
"string task_name\n"
"\n"
"# selection: button names\n"
"# string selection_name\n"
"\n"
"# arm: :rarm, :lsrm\n"
"int64 arm_id\n"
"\n"
"# state of touch: touch, pick, pinch, sweep\n"
"# for debugging\n"
"string state\n"
"# value of state\n"
"float64 state_value\n"
"\n"
"# direction: up, down, left, right\n"
"string direction\n"
"# value of direction, degree\n"
"float64 direction_value\n"
"\n"
"int64 touch_x\n"
"int64 touch_y\n"
"\n"
"# Example\n"
"#  push: touches[0].x, touches[0].y, task_name, arm_id\n"
"#  open: touches[0 1 2].x, touches[0 1 2].y, task_name, arm_id\n"
"#  slide: touches[0 1 2].x, touches[0 1 2].y, task_name, arm_id\n"
"#  move_neck: task_name, direction, direction_value\n"
"#  move_base: task_name, direction, direction_value\n"
;
  }

  static const char* value(const ::jsk_gui_msgs::Action_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_gui_msgs::Action_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.task_name);
      stream.next(m.arm_id);
      stream.next(m.state);
      stream.next(m.state_value);
      stream.next(m.direction);
      stream.next(m.direction_value);
      stream.next(m.touch_x);
      stream.next(m.touch_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Action_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_gui_msgs::Action_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_gui_msgs::Action_<ContainerAllocator>& v)
  {
    s << indent << "task_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.task_name);
    s << indent << "arm_id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.arm_id);
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
    s << indent << "state_value: ";
    Printer<double>::stream(s, indent + "  ", v.state_value);
    s << indent << "direction: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.direction);
    s << indent << "direction_value: ";
    Printer<double>::stream(s, indent + "  ", v.direction_value);
    s << indent << "touch_x: ";
    Printer<int64_t>::stream(s, indent + "  ", v.touch_x);
    s << indent << "touch_y: ";
    Printer<int64_t>::stream(s, indent + "  ", v.touch_y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_GUI_MSGS_MESSAGE_ACTION_H
