// Generated by gencpp from file sr_robot_msgs/config.msg
// DO NOT EDIT!


#ifndef SR_ROBOT_MSGS_MESSAGE_CONFIG_H
#define SR_ROBOT_MSGS_MESSAGE_CONFIG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sr_robot_msgs
{
template <class ContainerAllocator>
struct config_
{
  typedef config_<ContainerAllocator> Type;

  config_()
    : node_name()
    , list_of_parameters()
    , length_of_list(0)  {
    }
  config_(const ContainerAllocator& _alloc)
    : node_name(_alloc)
    , list_of_parameters(_alloc)
    , length_of_list(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _node_name_type;
  _node_name_type node_name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _list_of_parameters_type;
  _list_of_parameters_type list_of_parameters;

   typedef uint8_t _length_of_list_type;
  _length_of_list_type length_of_list;





  typedef boost::shared_ptr< ::sr_robot_msgs::config_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sr_robot_msgs::config_<ContainerAllocator> const> ConstPtr;

}; // struct config_

typedef ::sr_robot_msgs::config_<std::allocator<void> > config;

typedef boost::shared_ptr< ::sr_robot_msgs::config > configPtr;
typedef boost::shared_ptr< ::sr_robot_msgs::config const> configConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sr_robot_msgs::config_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sr_robot_msgs::config_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sr_robot_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sr_robot_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/sr_robot_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::config_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sr_robot_msgs::config_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::config_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sr_robot_msgs::config_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::config_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sr_robot_msgs::config_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sr_robot_msgs::config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aad3efafb735fbac1153457b0e7c6e24";
  }

  static const char* value(const ::sr_robot_msgs::config_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaad3efafb735fbacULL;
  static const uint64_t static_value2 = 0x1153457b0e7c6e24ULL;
};

template<class ContainerAllocator>
struct DataType< ::sr_robot_msgs::config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sr_robot_msgs/config";
  }

  static const char* value(const ::sr_robot_msgs::config_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sr_robot_msgs::config_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# modify the config of a node\n"
"# e.g. change the transmission rate\n"
"string   node_name\n"
"string[] list_of_parameters\n"
"uint8    length_of_list\n"
;
  }

  static const char* value(const ::sr_robot_msgs::config_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sr_robot_msgs::config_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node_name);
      stream.next(m.list_of_parameters);
      stream.next(m.length_of_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct config_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sr_robot_msgs::config_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sr_robot_msgs::config_<ContainerAllocator>& v)
  {
    s << indent << "node_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.node_name);
    s << indent << "list_of_parameters[]" << std::endl;
    for (size_t i = 0; i < v.list_of_parameters.size(); ++i)
    {
      s << indent << "  list_of_parameters[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.list_of_parameters[i]);
    }
    s << indent << "length_of_list: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.length_of_list);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SR_ROBOT_MSGS_MESSAGE_CONFIG_H
