// Generated by gencpp from file roseus/StringStringRequest.msg
// DO NOT EDIT!


#ifndef ROSEUS_MESSAGE_STRINGSTRINGREQUEST_H
#define ROSEUS_MESSAGE_STRINGSTRINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roseus
{
template <class ContainerAllocator>
struct StringStringRequest_
{
  typedef StringStringRequest_<ContainerAllocator> Type;

  StringStringRequest_()
    : str()  {
    }
  StringStringRequest_(const ContainerAllocator& _alloc)
    : str(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _str_type;
  _str_type str;





  typedef boost::shared_ptr< ::roseus::StringStringRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roseus::StringStringRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StringStringRequest_

typedef ::roseus::StringStringRequest_<std::allocator<void> > StringStringRequest;

typedef boost::shared_ptr< ::roseus::StringStringRequest > StringStringRequestPtr;
typedef boost::shared_ptr< ::roseus::StringStringRequest const> StringStringRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roseus::StringStringRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roseus::StringStringRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::roseus::StringStringRequest_<ContainerAllocator1> & lhs, const ::roseus::StringStringRequest_<ContainerAllocator2> & rhs)
{
  return lhs.str == rhs.str;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::roseus::StringStringRequest_<ContainerAllocator1> & lhs, const ::roseus::StringStringRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace roseus

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::roseus::StringStringRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roseus::StringStringRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roseus::StringStringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roseus::StringStringRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roseus::StringStringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roseus::StringStringRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roseus::StringStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "994972b6e03928b2476860ce6c4c8e17";
  }

  static const char* value(const ::roseus::StringStringRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x994972b6e03928b2ULL;
  static const uint64_t static_value2 = 0x476860ce6c4c8e17ULL;
};

template<class ContainerAllocator>
struct DataType< ::roseus::StringStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roseus/StringStringRequest";
  }

  static const char* value(const ::roseus::StringStringRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roseus::StringStringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string str\n"
;
  }

  static const char* value(const ::roseus::StringStringRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roseus::StringStringRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.str);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StringStringRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roseus::StringStringRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roseus::StringStringRequest_<ContainerAllocator>& v)
  {
    s << indent << "str: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.str);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSEUS_MESSAGE_STRINGSTRINGREQUEST_H
