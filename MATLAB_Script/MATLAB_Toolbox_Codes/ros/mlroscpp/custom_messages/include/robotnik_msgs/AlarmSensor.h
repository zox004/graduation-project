// Generated by gencpp from file robotnik_msgs/AlarmSensor.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_ALARMSENSOR_H
#define ROBOTNIK_MSGS_MESSAGE_ALARMSENSOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct AlarmSensor_
{
  typedef AlarmSensor_<ContainerAllocator> Type;

  AlarmSensor_()
    : id(0)
    , description()
    , message()  {
    }
  AlarmSensor_(const ContainerAllocator& _alloc)
    : id(0)
    , description(_alloc)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _description_type;
  _description_type description;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> const> ConstPtr;

}; // struct AlarmSensor_

typedef ::robotnik_msgs::AlarmSensor_<std::allocator<void> > AlarmSensor;

typedef boost::shared_ptr< ::robotnik_msgs::AlarmSensor > AlarmSensorPtr;
typedef boost::shared_ptr< ::robotnik_msgs::AlarmSensor const> AlarmSensorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::AlarmSensor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::AlarmSensor_<ContainerAllocator1> & lhs, const ::robotnik_msgs::AlarmSensor_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.description == rhs.description &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::AlarmSensor_<ContainerAllocator1> & lhs, const ::robotnik_msgs::AlarmSensor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5dae51bccfcc658f2dc0fff5ec79cb7a";
  }

  static const char* value(const ::robotnik_msgs::AlarmSensor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5dae51bccfcc658fULL;
  static const uint64_t static_value2 = 0x2dc0fff5ec79cb7aULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/AlarmSensor";
  }

  static const char* value(const ::robotnik_msgs::AlarmSensor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 id\n"
"string description\n"
"string message\n"
"\n"
;
  }

  static const char* value(const ::robotnik_msgs::AlarmSensor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.description);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AlarmSensor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::AlarmSensor_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.id);
    s << indent << "description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.description);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_ALARMSENSOR_H
