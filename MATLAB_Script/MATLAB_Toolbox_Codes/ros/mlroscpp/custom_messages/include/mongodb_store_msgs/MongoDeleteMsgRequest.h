// Generated by gencpp from file mongodb_store_msgs/MongoDeleteMsgRequest.msg
// DO NOT EDIT!


#ifndef MONGODB_STORE_MSGS_MESSAGE_MONGODELETEMSGREQUEST_H
#define MONGODB_STORE_MSGS_MESSAGE_MONGODELETEMSGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mongodb_store_msgs
{
template <class ContainerAllocator>
struct MongoDeleteMsgRequest_
{
  typedef MongoDeleteMsgRequest_<ContainerAllocator> Type;

  MongoDeleteMsgRequest_()
    : database()
    , collection()
    , document_id()  {
    }
  MongoDeleteMsgRequest_(const ContainerAllocator& _alloc)
    : database(_alloc)
    , collection(_alloc)
    , document_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _database_type;
  _database_type database;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _collection_type;
  _collection_type collection;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _document_id_type;
  _document_id_type document_id;





  typedef boost::shared_ptr< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MongoDeleteMsgRequest_

typedef ::mongodb_store_msgs::MongoDeleteMsgRequest_<std::allocator<void> > MongoDeleteMsgRequest;

typedef boost::shared_ptr< ::mongodb_store_msgs::MongoDeleteMsgRequest > MongoDeleteMsgRequestPtr;
typedef boost::shared_ptr< ::mongodb_store_msgs::MongoDeleteMsgRequest const> MongoDeleteMsgRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mongodb_store_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'mongodb_store_msgs': ['/local-ssd1/All_Custom_Msgs/PendingPackagesInitial/matlab_msg_gen_ros1/glnxa64/src/mongodb_store_msgs/msg', '/local-ssd1/All_Custom_Msgs/PendingPackagesInitial/matlab_msg_gen_ros1/glnxa64/devel/share/mongodb_store_msgs/msg'], 'std_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/31/hakakarl.Brobot.j1347395/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8db26da88c264ed1aced8ce3427e0db0";
  }

  static const char* value(const ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8db26da88c264ed1ULL;
  static const uint64_t static_value2 = 0xaced8ce3427e0db0ULL;
};

template<class ContainerAllocator>
struct DataType< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mongodb_store_msgs/MongoDeleteMsgRequest";
  }

  static const char* value(const ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string database\n"
"string collection\n"
"string document_id\n"
;
  }

  static const char* value(const ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.database);
      stream.next(m.collection);
      stream.next(m.document_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MongoDeleteMsgRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mongodb_store_msgs::MongoDeleteMsgRequest_<ContainerAllocator>& v)
  {
    s << indent << "database: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.database);
    s << indent << "collection: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.collection);
    s << indent << "document_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.document_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MONGODB_STORE_MSGS_MESSAGE_MONGODELETEMSGREQUEST_H
