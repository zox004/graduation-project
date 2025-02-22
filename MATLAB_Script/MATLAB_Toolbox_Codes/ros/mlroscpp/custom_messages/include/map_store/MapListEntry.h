// Generated by gencpp from file map_store/MapListEntry.msg
// DO NOT EDIT!


#ifndef MAP_STORE_MESSAGE_MAPLISTENTRY_H
#define MAP_STORE_MESSAGE_MAPLISTENTRY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace map_store
{
template <class ContainerAllocator>
struct MapListEntry_
{
  typedef MapListEntry_<ContainerAllocator> Type;

  MapListEntry_()
    : name()
    , session_id()
    , date(0)
    , map_id()  {
    }
  MapListEntry_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , session_id(_alloc)
    , date(0)
    , map_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _session_id_type;
  _session_id_type session_id;

   typedef int64_t _date_type;
  _date_type date;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _map_id_type;
  _map_id_type map_id;





  typedef boost::shared_ptr< ::map_store::MapListEntry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_store::MapListEntry_<ContainerAllocator> const> ConstPtr;

}; // struct MapListEntry_

typedef ::map_store::MapListEntry_<std::allocator<void> > MapListEntry;

typedef boost::shared_ptr< ::map_store::MapListEntry > MapListEntryPtr;
typedef boost::shared_ptr< ::map_store::MapListEntry const> MapListEntryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_store::MapListEntry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_store::MapListEntry_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_store

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/mathworks/devel/sbs/31/pmurali.Brobot.j1329247.2/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'map_store': ['/mathworks/home/pmurali/Documents/Working/matlab_msg_gen_ros1/glnxa64/src/map_store/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_store::MapListEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_store::MapListEntry_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_store::MapListEntry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_store::MapListEntry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_store::MapListEntry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_store::MapListEntry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_store::MapListEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "092f024758d394d17196cd37d999fdb0";
  }

  static const char* value(const ::map_store::MapListEntry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x092f024758d394d1ULL;
  static const uint64_t static_value2 = 0x7196cd37d999fdb0ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_store::MapListEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_store/MapListEntry";
  }

  static const char* value(const ::map_store::MapListEntry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_store::MapListEntry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# One entry in a list of maps.\n"
"\n"
"# Naming a map is optional.\n"
"string name\n"
"\n"
"# Maps made by the make-a-map app are given a session ID, which is the\n"
"# time when the map-making session was started, expressed as seconds\n"
"# since the epoch and converted to a string.\n"
"string session_id\n"
"\n"
"# Creation time of this map, in seconds since the epoch.\n"
"int64 date\n"
"\n"
"# Unique ID of this map.\n"
"string map_id\n"
;
  }

  static const char* value(const ::map_store::MapListEntry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_store::MapListEntry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.session_id);
      stream.next(m.date);
      stream.next(m.map_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapListEntry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_store::MapListEntry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_store::MapListEntry_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "session_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.session_id);
    s << indent << "date: ";
    Printer<int64_t>::stream(s, indent + "  ", v.date);
    s << indent << "map_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.map_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_STORE_MESSAGE_MAPLISTENTRY_H
