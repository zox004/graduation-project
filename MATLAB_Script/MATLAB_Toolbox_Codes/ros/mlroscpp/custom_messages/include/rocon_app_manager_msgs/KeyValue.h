// Generated by gencpp from file rocon_app_manager_msgs/KeyValue.msg
// DO NOT EDIT!


#ifndef ROCON_APP_MANAGER_MSGS_MESSAGE_KEYVALUE_H
#define ROCON_APP_MANAGER_MSGS_MESSAGE_KEYVALUE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rocon_app_manager_msgs
{
template <class ContainerAllocator>
struct KeyValue_
{
  typedef KeyValue_<ContainerAllocator> Type;

  KeyValue_()
    : key()
    , value()  {
    }
  KeyValue_(const ContainerAllocator& _alloc)
    : key(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _key_type;
  _key_type key;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> const> ConstPtr;

}; // struct KeyValue_

typedef ::rocon_app_manager_msgs::KeyValue_<std::allocator<void> > KeyValue;

typedef boost::shared_ptr< ::rocon_app_manager_msgs::KeyValue > KeyValuePtr;
typedef boost::shared_ptr< ::rocon_app_manager_msgs::KeyValue const> KeyValueConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rocon_app_manager_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rocon_app_manager_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/rocon_app_manager_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf57fdc6617a881a88c16e768132149c";
  }

  static const char* value(const ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf57fdc6617a881aULL;
  static const uint64_t static_value2 = 0x88c16e768132149cULL;
};

template<class ContainerAllocator>
struct DataType< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rocon_app_manager_msgs/KeyValue";
  }

  static const char* value(const ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string key\n"
"string value\n"
;
  }

  static const char* value(const ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.key);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KeyValue_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rocon_app_manager_msgs::KeyValue_<ContainerAllocator>& v)
  {
    s << indent << "key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.key);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROCON_APP_MANAGER_MSGS_MESSAGE_KEYVALUE_H
