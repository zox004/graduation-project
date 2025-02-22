// Generated by gencpp from file data_vis_msgs/Speech.msg
// DO NOT EDIT!


#ifndef DATA_VIS_MSGS_MESSAGE_SPEECH_H
#define DATA_VIS_MSGS_MESSAGE_SPEECH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace data_vis_msgs
{
template <class ContainerAllocator>
struct Speech_
{
  typedef Speech_<ContainerAllocator> Type;

  Speech_()
    : id()
    , text()
    , position()
    , duration(0)  {
    }
  Speech_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , text(_alloc)
    , position(_alloc)
    , duration(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef int32_t _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::data_vis_msgs::Speech_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::data_vis_msgs::Speech_<ContainerAllocator> const> ConstPtr;

}; // struct Speech_

typedef ::data_vis_msgs::Speech_<std::allocator<void> > Speech;

typedef boost::shared_ptr< ::data_vis_msgs::Speech > SpeechPtr;
typedef boost::shared_ptr< ::data_vis_msgs::Speech const> SpeechConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::data_vis_msgs::Speech_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::data_vis_msgs::Speech_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::data_vis_msgs::Speech_<ContainerAllocator1> & lhs, const ::data_vis_msgs::Speech_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.text == rhs.text &&
    lhs.position == rhs.position &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::data_vis_msgs::Speech_<ContainerAllocator1> & lhs, const ::data_vis_msgs::Speech_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace data_vis_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::data_vis_msgs::Speech_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::data_vis_msgs::Speech_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::data_vis_msgs::Speech_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::data_vis_msgs::Speech_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::data_vis_msgs::Speech_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::data_vis_msgs::Speech_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::data_vis_msgs::Speech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce7f1848aa293898a23f5324fdb08f4b";
  }

  static const char* value(const ::data_vis_msgs::Speech_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce7f1848aa293898ULL;
  static const uint64_t static_value2 = 0xa23f5324fdb08f4bULL;
};

template<class ContainerAllocator>
struct DataType< ::data_vis_msgs::Speech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "data_vis_msgs/Speech";
  }

  static const char* value(const ::data_vis_msgs::Speech_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::data_vis_msgs::Speech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string id\n"
"string text\n"
"geometry_msgs/Point position\n"
"int32 duration\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::data_vis_msgs::Speech_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::data_vis_msgs::Speech_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.text);
      stream.next(m.position);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Speech_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::data_vis_msgs::Speech_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::data_vis_msgs::Speech_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "duration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DATA_VIS_MSGS_MESSAGE_SPEECH_H
