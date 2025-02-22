// Generated by gencpp from file pr2_self_test_msgs/TestInfo.msg
// DO NOT EDIT!


#ifndef PR2_SELF_TEST_MSGS_MESSAGE_TESTINFO_H
#define PR2_SELF_TEST_MSGS_MESSAGE_TESTINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pr2_self_test_msgs
{
template <class ContainerAllocator>
struct TestInfo_
{
  typedef TestInfo_<ContainerAllocator> Type;

  TestInfo_()
    : serial()
    , test_name()
    , test_status(0)
    , bay_name()
    , machine()
    , board(0)
    , breaker(0)
    , power_status()
    , estop(0)
    , elapsed(0)
    , status_msg()  {
    }
  TestInfo_(const ContainerAllocator& _alloc)
    : serial(_alloc)
    , test_name(_alloc)
    , test_status(0)
    , bay_name(_alloc)
    , machine(_alloc)
    , board(0)
    , breaker(0)
    , power_status(_alloc)
    , estop(0)
    , elapsed(0)
    , status_msg(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _serial_type;
  _serial_type serial;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _test_name_type;
  _test_name_type test_name;

   typedef int8_t _test_status_type;
  _test_status_type test_status;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _bay_name_type;
  _bay_name_type bay_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _machine_type;
  _machine_type machine;

   typedef int32_t _board_type;
  _board_type board;

   typedef int32_t _breaker_type;
  _breaker_type breaker;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _power_status_type;
  _power_status_type power_status;

   typedef int8_t _estop_type;
  _estop_type estop;

   typedef int32_t _elapsed_type;
  _elapsed_type elapsed;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_msg_type;
  _status_msg_type status_msg;





  typedef boost::shared_ptr< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> const> ConstPtr;

}; // struct TestInfo_

typedef ::pr2_self_test_msgs::TestInfo_<std::allocator<void> > TestInfo;

typedef boost::shared_ptr< ::pr2_self_test_msgs::TestInfo > TestInfoPtr;
typedef boost::shared_ptr< ::pr2_self_test_msgs::TestInfo const> TestInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_self_test_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pr2_self_test_msgs': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/pr2_self_test_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "594219b720ecaee963aa0b601d38b8f2";
  }

  static const char* value(const ::pr2_self_test_msgs::TestInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x594219b720ecaee9ULL;
  static const uint64_t static_value2 = 0x63aa0b601d38b8f2ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_self_test_msgs/TestInfo";
  }

  static const char* value(const ::pr2_self_test_msgs::TestInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string serial\n"
"string test_name\n"
"byte test_status # 127, not launched, 0, ok; 1, warn; 2, error; 3, stale\n"
"string bay_name\n"
"string machine\n"
"int32 board\n"
"int32 breaker\n"
"string power_status\n"
"byte estop # 0, off; 1, on\n"
"int32 elapsed\n"
"string status_msg\n"
;
  }

  static const char* value(const ::pr2_self_test_msgs::TestInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.serial);
      stream.next(m.test_name);
      stream.next(m.test_status);
      stream.next(m.bay_name);
      stream.next(m.machine);
      stream.next(m.board);
      stream.next(m.breaker);
      stream.next(m.power_status);
      stream.next(m.estop);
      stream.next(m.elapsed);
      stream.next(m.status_msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_self_test_msgs::TestInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_self_test_msgs::TestInfo_<ContainerAllocator>& v)
  {
    s << indent << "serial: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.serial);
    s << indent << "test_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.test_name);
    s << indent << "test_status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.test_status);
    s << indent << "bay_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.bay_name);
    s << indent << "machine: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.machine);
    s << indent << "board: ";
    Printer<int32_t>::stream(s, indent + "  ", v.board);
    s << indent << "breaker: ";
    Printer<int32_t>::stream(s, indent + "  ", v.breaker);
    s << indent << "power_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.power_status);
    s << indent << "estop: ";
    Printer<int8_t>::stream(s, indent + "  ", v.estop);
    s << indent << "elapsed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.elapsed);
    s << indent << "status_msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_SELF_TEST_MSGS_MESSAGE_TESTINFO_H
