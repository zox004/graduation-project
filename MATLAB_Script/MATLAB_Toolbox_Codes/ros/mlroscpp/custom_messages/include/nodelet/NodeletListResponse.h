// Generated by gencpp from file nodelet/NodeletListResponse.msg
// DO NOT EDIT!


#ifndef NODELET_MESSAGE_NODELETLISTRESPONSE_H
#define NODELET_MESSAGE_NODELETLISTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nodelet
{
template <class ContainerAllocator>
struct NodeletListResponse_
{
  typedef NodeletListResponse_<ContainerAllocator> Type;

  NodeletListResponse_()
    : nodelets()  {
    }
  NodeletListResponse_(const ContainerAllocator& _alloc)
    : nodelets(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _nodelets_type;
  _nodelets_type nodelets;





  typedef boost::shared_ptr< ::nodelet::NodeletListResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nodelet::NodeletListResponse_<ContainerAllocator> const> ConstPtr;

}; // struct NodeletListResponse_

typedef ::nodelet::NodeletListResponse_<std::allocator<void> > NodeletListResponse;

typedef boost::shared_ptr< ::nodelet::NodeletListResponse > NodeletListResponsePtr;
typedef boost::shared_ptr< ::nodelet::NodeletListResponse const> NodeletListResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nodelet::NodeletListResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nodelet::NodeletListResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nodelet

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nodelet::NodeletListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nodelet::NodeletListResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet::NodeletListResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet::NodeletListResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet::NodeletListResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet::NodeletListResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nodelet::NodeletListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "99c7b10e794f5600b8030e697e946ca7";
  }

  static const char* value(const ::nodelet::NodeletListResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x99c7b10e794f5600ULL;
  static const uint64_t static_value2 = 0xb8030e697e946ca7ULL;
};

template<class ContainerAllocator>
struct DataType< ::nodelet::NodeletListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nodelet/NodeletListResponse";
  }

  static const char* value(const ::nodelet::NodeletListResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nodelet::NodeletListResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] nodelets\n"
"\n"
;
  }

  static const char* value(const ::nodelet::NodeletListResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nodelet::NodeletListResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nodelets);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NodeletListResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nodelet::NodeletListResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nodelet::NodeletListResponse_<ContainerAllocator>& v)
  {
    s << indent << "nodelets[]" << std::endl;
    for (size_t i = 0; i < v.nodelets.size(); ++i)
    {
      s << indent << "  nodelets[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nodelets[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NODELET_MESSAGE_NODELETLISTRESPONSE_H
