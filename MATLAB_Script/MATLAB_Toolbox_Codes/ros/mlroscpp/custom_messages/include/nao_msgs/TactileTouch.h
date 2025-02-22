// Generated by gencpp from file nao_msgs/TactileTouch.msg
// DO NOT EDIT!


#ifndef NAO_MSGS_MESSAGE_TACTILETOUCH_H
#define NAO_MSGS_MESSAGE_TACTILETOUCH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nao_msgs
{
template <class ContainerAllocator>
struct TactileTouch_
{
  typedef TactileTouch_<ContainerAllocator> Type;

  TactileTouch_()
    : button(0)
    , state(0)  {
    }
  TactileTouch_(const ContainerAllocator& _alloc)
    : button(0)
    , state(0)  {
  (void)_alloc;
    }



   typedef uint8_t _button_type;
  _button_type button;

   typedef uint8_t _state_type;
  _state_type state;



  enum {
    buttonFront = 1u,
    buttonMiddle = 2u,
    buttonRear = 3u,
    stateReleased = 0u,
    statePressed = 1u,
  };


  typedef boost::shared_ptr< ::nao_msgs::TactileTouch_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nao_msgs::TactileTouch_<ContainerAllocator> const> ConstPtr;

}; // struct TactileTouch_

typedef ::nao_msgs::TactileTouch_<std::allocator<void> > TactileTouch;

typedef boost::shared_ptr< ::nao_msgs::TactileTouch > TactileTouchPtr;
typedef boost::shared_ptr< ::nao_msgs::TactileTouch const> TactileTouchConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nao_msgs::TactileTouch_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nao_msgs::TactileTouch_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nao_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nao_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/nao_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nao_msgs::TactileTouch_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nao_msgs::TactileTouch_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nao_msgs::TactileTouch_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nao_msgs::TactileTouch_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nao_msgs::TactileTouch_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nao_msgs::TactileTouch_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nao_msgs::TactileTouch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b75165bf9dfed26d50ad4e3162304225";
  }

  static const char* value(const ::nao_msgs::TactileTouch_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb75165bf9dfed26dULL;
  static const uint64_t static_value2 = 0x50ad4e3162304225ULL;
};

template<class ContainerAllocator>
struct DataType< ::nao_msgs::TactileTouch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nao_msgs/TactileTouch";
  }

  static const char* value(const ::nao_msgs::TactileTouch_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nao_msgs::TactileTouch_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A message for Nao's tactile interface (toucht buttons on the head)\n"
"\n"
"uint8 button            # which of the three segments is touched\n"
"uint8 state             # pressed or released, see below\n"
"\n"
"uint8 buttonFront=1\n"
"uint8 buttonMiddle=2\n"
"uint8 buttonRear=3\n"
"\n"
"uint8 stateReleased=0\n"
"uint8 statePressed=1\n"
;
  }

  static const char* value(const ::nao_msgs::TactileTouch_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nao_msgs::TactileTouch_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.button);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TactileTouch_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nao_msgs::TactileTouch_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nao_msgs::TactileTouch_<ContainerAllocator>& v)
  {
    s << indent << "button: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.button);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAO_MSGS_MESSAGE_TACTILETOUCH_H
