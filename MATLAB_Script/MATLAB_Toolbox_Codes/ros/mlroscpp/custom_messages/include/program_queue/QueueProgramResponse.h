// Generated by gencpp from file program_queue/QueueProgramResponse.msg
// DO NOT EDIT!


#ifndef PROGRAM_QUEUE_MESSAGE_QUEUEPROGRAMRESPONSE_H
#define PROGRAM_QUEUE_MESSAGE_QUEUEPROGRAMRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace program_queue
{
template <class ContainerAllocator>
struct QueueProgramResponse_
{
  typedef QueueProgramResponse_<ContainerAllocator> Type;

  QueueProgramResponse_()
    : queue_position(0)  {
    }
  QueueProgramResponse_(const ContainerAllocator& _alloc)
    : queue_position(0)  {
  (void)_alloc;
    }



   typedef uint64_t _queue_position_type;
  _queue_position_type queue_position;





  typedef boost::shared_ptr< ::program_queue::QueueProgramResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::program_queue::QueueProgramResponse_<ContainerAllocator> const> ConstPtr;

}; // struct QueueProgramResponse_

typedef ::program_queue::QueueProgramResponse_<std::allocator<void> > QueueProgramResponse;

typedef boost::shared_ptr< ::program_queue::QueueProgramResponse > QueueProgramResponsePtr;
typedef boost::shared_ptr< ::program_queue::QueueProgramResponse const> QueueProgramResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::program_queue::QueueProgramResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::program_queue::QueueProgramResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace program_queue

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'program_queue': ['/mathworks/home/pmurali/Documents/P/matlab_msg_gen_ros1/glnxa64/src/program_queue/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/pmurali.Brobot.j1339814/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::program_queue::QueueProgramResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::program_queue::QueueProgramResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::program_queue::QueueProgramResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::program_queue::QueueProgramResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::program_queue::QueueProgramResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::program_queue::QueueProgramResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::program_queue::QueueProgramResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "28a72135729a2d847325b0cc21963397";
  }

  static const char* value(const ::program_queue::QueueProgramResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x28a72135729a2d84ULL;
  static const uint64_t static_value2 = 0x7325b0cc21963397ULL;
};

template<class ContainerAllocator>
struct DataType< ::program_queue::QueueProgramResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "program_queue/QueueProgramResponse";
  }

  static const char* value(const ::program_queue::QueueProgramResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::program_queue::QueueProgramResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint64 queue_position\n"
"\n"
;
  }

  static const char* value(const ::program_queue::QueueProgramResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::program_queue::QueueProgramResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.queue_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QueueProgramResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::program_queue::QueueProgramResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::program_queue::QueueProgramResponse_<ContainerAllocator>& v)
  {
    s << indent << "queue_position: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.queue_position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROGRAM_QUEUE_MESSAGE_QUEUEPROGRAMRESPONSE_H
