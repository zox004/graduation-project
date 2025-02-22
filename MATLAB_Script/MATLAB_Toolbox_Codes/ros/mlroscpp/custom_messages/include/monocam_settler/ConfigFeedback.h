// Generated by gencpp from file monocam_settler/ConfigFeedback.msg
// DO NOT EDIT!


#ifndef MONOCAM_SETTLER_MESSAGE_CONFIGFEEDBACK_H
#define MONOCAM_SETTLER_MESSAGE_CONFIGFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace monocam_settler
{
template <class ContainerAllocator>
struct ConfigFeedback_
{
  typedef ConfigFeedback_<ContainerAllocator> Type;

  ConfigFeedback_()
    {
    }
  ConfigFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::monocam_settler::ConfigFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::monocam_settler::ConfigFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigFeedback_

typedef ::monocam_settler::ConfigFeedback_<std::allocator<void> > ConfigFeedback;

typedef boost::shared_ptr< ::monocam_settler::ConfigFeedback > ConfigFeedbackPtr;
typedef boost::shared_ptr< ::monocam_settler::ConfigFeedback const> ConfigFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::monocam_settler::ConfigFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace monocam_settler

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'monocam_settler': ['/local-ssd1/All_Custom_Msgs/PendingPackagesInitial/matlab_msg_gen_ros1/glnxa64/devel/share/monocam_settler/msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::monocam_settler::ConfigFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::monocam_settler::ConfigFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::monocam_settler::ConfigFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::monocam_settler::ConfigFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "monocam_settler/ConfigFeedback";
  }

  static const char* value(const ::monocam_settler::ConfigFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
;
  }

  static const char* value(const ::monocam_settler::ConfigFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::monocam_settler::ConfigFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::monocam_settler::ConfigFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MONOCAM_SETTLER_MESSAGE_CONFIGFEEDBACK_H
