// Generated by gencpp from file adhoc_communication/ExpCluster.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_EXPCLUSTER_H
#define ADHOC_COMMUNICATION_MESSAGE_EXPCLUSTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <adhoc_communication/ExpClusterElement.h>

namespace adhoc_communication
{
template <class ContainerAllocator>
struct ExpCluster_
{
  typedef ExpCluster_<ContainerAllocator> Type;

  ExpCluster_()
    : ids_contained()
    , bid(0.0)  {
    }
  ExpCluster_(const ContainerAllocator& _alloc)
    : ids_contained(_alloc)
    , bid(0.0)  {
  (void)_alloc;
    }



   typedef std::vector< ::adhoc_communication::ExpClusterElement_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::adhoc_communication::ExpClusterElement_<ContainerAllocator> >::other >  _ids_contained_type;
  _ids_contained_type ids_contained;

   typedef double _bid_type;
  _bid_type bid;





  typedef boost::shared_ptr< ::adhoc_communication::ExpCluster_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adhoc_communication::ExpCluster_<ContainerAllocator> const> ConstPtr;

}; // struct ExpCluster_

typedef ::adhoc_communication::ExpCluster_<std::allocator<void> > ExpCluster;

typedef boost::shared_ptr< ::adhoc_communication::ExpCluster > ExpClusterPtr;
typedef boost::shared_ptr< ::adhoc_communication::ExpCluster const> ExpClusterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::adhoc_communication::ExpCluster_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::adhoc_communication::ExpCluster_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::adhoc_communication::ExpCluster_<ContainerAllocator1> & lhs, const ::adhoc_communication::ExpCluster_<ContainerAllocator2> & rhs)
{
  return lhs.ids_contained == rhs.ids_contained &&
    lhs.bid == rhs.bid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::adhoc_communication::ExpCluster_<ContainerAllocator1> & lhs, const ::adhoc_communication::ExpCluster_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace adhoc_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::ExpCluster_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::ExpCluster_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::ExpCluster_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::ExpCluster_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::ExpCluster_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::ExpCluster_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::adhoc_communication::ExpCluster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "378b1f01ebed06706a22e7cc27608df5";
  }

  static const char* value(const ::adhoc_communication::ExpCluster_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x378b1f01ebed0670ULL;
  static const uint64_t static_value2 = 0x6a22e7cc27608df5ULL;
};

template<class ContainerAllocator>
struct DataType< ::adhoc_communication::ExpCluster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adhoc_communication/ExpCluster";
  }

  static const char* value(const ::adhoc_communication::ExpCluster_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::adhoc_communication::ExpCluster_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ExpClusterElement[] ids_contained\n"
"float64 bid \n"
"\n"
"================================================================================\n"
"MSG: adhoc_communication/ExpClusterElement\n"
"int64 id\n"
"string detected_by_robot_str\n"
;
  }

  static const char* value(const ::adhoc_communication::ExpCluster_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::adhoc_communication::ExpCluster_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ids_contained);
      stream.next(m.bid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExpCluster_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adhoc_communication::ExpCluster_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::adhoc_communication::ExpCluster_<ContainerAllocator>& v)
  {
    s << indent << "ids_contained[]" << std::endl;
    for (size_t i = 0; i < v.ids_contained.size(); ++i)
    {
      s << indent << "  ids_contained[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::adhoc_communication::ExpClusterElement_<ContainerAllocator> >::stream(s, indent + "    ", v.ids_contained[i]);
    }
    s << indent << "bid: ";
    Printer<double>::stream(s, indent + "  ", v.bid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_EXPCLUSTER_H
