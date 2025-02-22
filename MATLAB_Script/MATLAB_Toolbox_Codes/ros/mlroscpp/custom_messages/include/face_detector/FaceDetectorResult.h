// Generated by gencpp from file face_detector/FaceDetectorResult.msg
// DO NOT EDIT!


#ifndef FACE_DETECTOR_MESSAGE_FACEDETECTORRESULT_H
#define FACE_DETECTOR_MESSAGE_FACEDETECTORRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <people_msgs/PositionMeasurement.h>

namespace face_detector
{
template <class ContainerAllocator>
struct FaceDetectorResult_
{
  typedef FaceDetectorResult_<ContainerAllocator> Type;

  FaceDetectorResult_()
    : face_positions()  {
    }
  FaceDetectorResult_(const ContainerAllocator& _alloc)
    : face_positions(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::people_msgs::PositionMeasurement_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::people_msgs::PositionMeasurement_<ContainerAllocator> >::other >  _face_positions_type;
  _face_positions_type face_positions;





  typedef boost::shared_ptr< ::face_detector::FaceDetectorResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::face_detector::FaceDetectorResult_<ContainerAllocator> const> ConstPtr;

}; // struct FaceDetectorResult_

typedef ::face_detector::FaceDetectorResult_<std::allocator<void> > FaceDetectorResult;

typedef boost::shared_ptr< ::face_detector::FaceDetectorResult > FaceDetectorResultPtr;
typedef boost::shared_ptr< ::face_detector::FaceDetectorResult const> FaceDetectorResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::face_detector::FaceDetectorResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::face_detector::FaceDetectorResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace face_detector

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'face_detector': ['/local-ssd1/All_Custom_Msgs/PendingPackagesInitial/matlab_msg_gen_ros1/glnxa64/devel/share/face_detector/msg'], 'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'people_msgs': ['/local-ssd1/All_Custom_Msgs/PendingPackagesInitial/matlab_msg_gen_ros1/glnxa64/src/people_msgs/msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::face_detector::FaceDetectorResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::face_detector::FaceDetectorResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_detector::FaceDetectorResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_detector::FaceDetectorResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_detector::FaceDetectorResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_detector::FaceDetectorResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::face_detector::FaceDetectorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b5dc843df183dbab7f0ab2f5ef5b6f9d";
  }

  static const char* value(const ::face_detector::FaceDetectorResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb5dc843df183dbabULL;
  static const uint64_t static_value2 = 0x7f0ab2f5ef5b6f9dULL;
};

template<class ContainerAllocator>
struct DataType< ::face_detector::FaceDetectorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "face_detector/FaceDetectorResult";
  }

  static const char* value(const ::face_detector::FaceDetectorResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::face_detector::FaceDetectorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result\n"
"people_msgs/PositionMeasurement[] face_positions\n"
"\n"
"================================================================================\n"
"MSG: people_msgs/PositionMeasurement\n"
"Header          header\n"
"string          name\n"
"string          object_id\n"
"geometry_msgs/Point pos\n"
"float64         reliability\n"
"float64[9] 	covariance\n"
"byte            initialization\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::face_detector::FaceDetectorResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::face_detector::FaceDetectorResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.face_positions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceDetectorResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::face_detector::FaceDetectorResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::face_detector::FaceDetectorResult_<ContainerAllocator>& v)
  {
    s << indent << "face_positions[]" << std::endl;
    for (size_t i = 0; i < v.face_positions.size(); ++i)
    {
      s << indent << "  face_positions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::people_msgs::PositionMeasurement_<ContainerAllocator> >::stream(s, indent + "    ", v.face_positions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FACE_DETECTOR_MESSAGE_FACEDETECTORRESULT_H
