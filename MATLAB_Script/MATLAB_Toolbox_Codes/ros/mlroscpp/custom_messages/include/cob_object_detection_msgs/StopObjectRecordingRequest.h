// Generated by gencpp from file cob_object_detection_msgs/StopObjectRecordingRequest.msg
// DO NOT EDIT!


#ifndef COB_OBJECT_DETECTION_MSGS_MESSAGE_STOPOBJECTRECORDINGREQUEST_H
#define COB_OBJECT_DETECTION_MSGS_MESSAGE_STOPOBJECTRECORDINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_object_detection_msgs
{
template <class ContainerAllocator>
struct StopObjectRecordingRequest_
{
  typedef StopObjectRecordingRequest_<ContainerAllocator> Type;

  StopObjectRecordingRequest_()
    : stop_although_model_is_incomplete(false)  {
    }
  StopObjectRecordingRequest_(const ContainerAllocator& _alloc)
    : stop_although_model_is_incomplete(false)  {
  (void)_alloc;
    }



   typedef uint8_t _stop_although_model_is_incomplete_type;
  _stop_although_model_is_incomplete_type stop_although_model_is_incomplete;





  typedef boost::shared_ptr< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StopObjectRecordingRequest_

typedef ::cob_object_detection_msgs::StopObjectRecordingRequest_<std::allocator<void> > StopObjectRecordingRequest;

typedef boost::shared_ptr< ::cob_object_detection_msgs::StopObjectRecordingRequest > StopObjectRecordingRequestPtr;
typedef boost::shared_ptr< ::cob_object_detection_msgs::StopObjectRecordingRequest const> StopObjectRecordingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_object_detection_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'sensor_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'cob_object_detection_msgs': ['/local-ssd1/All_Custom_Msgs/PendingPackagesInitial/matlab_msg_gen_ros1/glnxa64/src/cob_object_detection_msgs/msg', '/local-ssd1/All_Custom_Msgs/PendingPackagesInitial/matlab_msg_gen_ros1/glnxa64/devel/share/cob_object_detection_msgs/msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "60ec7755ba9c0b6779b757eba0e03e82";
  }

  static const char* value(const ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x60ec7755ba9c0b67ULL;
  static const uint64_t static_value2 = 0x79b757eba0e03e82ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_object_detection_msgs/StopObjectRecordingRequest";
  }

  static const char* value(const ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"bool stop_although_model_is_incomplete\n"
;
  }

  static const char* value(const ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stop_although_model_is_incomplete);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StopObjectRecordingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_object_detection_msgs::StopObjectRecordingRequest_<ContainerAllocator>& v)
  {
    s << indent << "stop_although_model_is_incomplete: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stop_although_model_is_incomplete);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_OBJECT_DETECTION_MSGS_MESSAGE_STOPOBJECTRECORDINGREQUEST_H
