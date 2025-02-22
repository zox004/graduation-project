// Generated by gencpp from file cob_camera_sensors/AcquireCalibrationImagesRequest.msg
// DO NOT EDIT!


#ifndef COB_CAMERA_SENSORS_MESSAGE_ACQUIRECALIBRATIONIMAGESREQUEST_H
#define COB_CAMERA_SENSORS_MESSAGE_ACQUIRECALIBRATIONIMAGESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_camera_sensors
{
template <class ContainerAllocator>
struct AcquireCalibrationImagesRequest_
{
  typedef AcquireCalibrationImagesRequest_<ContainerAllocator> Type;

  AcquireCalibrationImagesRequest_()
    : reset_image_counter(false)  {
    }
  AcquireCalibrationImagesRequest_(const ContainerAllocator& _alloc)
    : reset_image_counter(false)  {
  (void)_alloc;
    }



   typedef uint8_t _reset_image_counter_type;
  _reset_image_counter_type reset_image_counter;





  typedef boost::shared_ptr< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AcquireCalibrationImagesRequest_

typedef ::cob_camera_sensors::AcquireCalibrationImagesRequest_<std::allocator<void> > AcquireCalibrationImagesRequest;

typedef boost::shared_ptr< ::cob_camera_sensors::AcquireCalibrationImagesRequest > AcquireCalibrationImagesRequestPtr;
typedef boost::shared_ptr< ::cob_camera_sensors::AcquireCalibrationImagesRequest const> AcquireCalibrationImagesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_camera_sensors

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/mathworks/devel/sbs/31/jkonakal.Brobot.j1364265/matlab/sys/ros1/glnxa64/ros1/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/jkonakal.Brobot.j1364265/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/mathworks/devel/sbs/31/jkonakal.Brobot.j1364265/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e169cf33c98571b589b34472dd844790";
  }

  static const char* value(const ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe169cf33c98571b5ULL;
  static const uint64_t static_value2 = 0x89b34472dd844790ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_camera_sensors/AcquireCalibrationImagesRequest";
  }

  static const char* value(const ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool reset_image_counter\n"
;
  }

  static const char* value(const ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reset_image_counter);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AcquireCalibrationImagesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_camera_sensors::AcquireCalibrationImagesRequest_<ContainerAllocator>& v)
  {
    s << indent << "reset_image_counter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_image_counter);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_CAMERA_SENSORS_MESSAGE_ACQUIRECALIBRATIONIMAGESREQUEST_H
