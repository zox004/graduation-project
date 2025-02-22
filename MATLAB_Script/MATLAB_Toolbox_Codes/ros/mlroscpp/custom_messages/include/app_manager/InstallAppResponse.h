// Generated by gencpp from file app_manager/InstallAppResponse.msg
// DO NOT EDIT!


#ifndef APP_MANAGER_MESSAGE_INSTALLAPPRESPONSE_H
#define APP_MANAGER_MESSAGE_INSTALLAPPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace app_manager
{
template <class ContainerAllocator>
struct InstallAppResponse_
{
  typedef InstallAppResponse_<ContainerAllocator> Type;

  InstallAppResponse_()
    : installed(false)
    , message()  {
    }
  InstallAppResponse_(const ContainerAllocator& _alloc)
    : installed(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _installed_type;
  _installed_type installed;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::app_manager::InstallAppResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_manager::InstallAppResponse_<ContainerAllocator> const> ConstPtr;

}; // struct InstallAppResponse_

typedef ::app_manager::InstallAppResponse_<std::allocator<void> > InstallAppResponse;

typedef boost::shared_ptr< ::app_manager::InstallAppResponse > InstallAppResponsePtr;
typedef boost::shared_ptr< ::app_manager::InstallAppResponse const> InstallAppResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::app_manager::InstallAppResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::app_manager::InstallAppResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace app_manager

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'app_manager': ['/mathworks/home/pmurali/Documents/rosjava_messages/GEN-4-6/4/matlab_msg_gen_ros1/glnxa64/src/app_manager/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1352567/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::app_manager::InstallAppResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::app_manager::InstallAppResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::app_manager::InstallAppResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::app_manager::InstallAppResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::app_manager::InstallAppResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::app_manager::InstallAppResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::app_manager::InstallAppResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "08871bc6dbc6813537edf236ff26a1e2";
  }

  static const char* value(const ::app_manager::InstallAppResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x08871bc6dbc68135ULL;
  static const uint64_t static_value2 = 0x37edf236ff26a1e2ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_manager::InstallAppResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "app_manager/InstallAppResponse";
  }

  static const char* value(const ::app_manager::InstallAppResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::app_manager::InstallAppResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool installed\n"
"\n"
"string message\n"
"\n"
"\n"
;
  }

  static const char* value(const ::app_manager::InstallAppResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::app_manager::InstallAppResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.installed);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InstallAppResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::app_manager::InstallAppResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::app_manager::InstallAppResponse_<ContainerAllocator>& v)
  {
    s << indent << "installed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.installed);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APP_MANAGER_MESSAGE_INSTALLAPPRESPONSE_H
