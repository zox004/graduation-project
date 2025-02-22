// Generated by gencpp from file hector_worldmodel_msgs/SetObjectName.msg
// DO NOT EDIT!


#ifndef HECTOR_WORLDMODEL_MSGS_MESSAGE_SETOBJECTNAME_H
#define HECTOR_WORLDMODEL_MSGS_MESSAGE_SETOBJECTNAME_H

#include <ros/service_traits.h>


#include <hector_worldmodel_msgs/SetObjectNameRequest.h>
#include <hector_worldmodel_msgs/SetObjectNameResponse.h>


namespace hector_worldmodel_msgs
{

struct SetObjectName
{

typedef SetObjectNameRequest Request;
typedef SetObjectNameResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetObjectName
} // namespace hector_worldmodel_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::hector_worldmodel_msgs::SetObjectName > {
  static const char* value()
  {
    return "c42e7737953fcb0f6da23160b2771456";
  }

  static const char* value(const ::hector_worldmodel_msgs::SetObjectName&) { return value(); }
};

template<>
struct DataType< ::hector_worldmodel_msgs::SetObjectName > {
  static const char* value()
  {
    return "hector_worldmodel_msgs/SetObjectName";
  }

  static const char* value(const ::hector_worldmodel_msgs::SetObjectName&) { return value(); }
};


// service_traits::MD5Sum< ::hector_worldmodel_msgs::SetObjectNameRequest> should match 
// service_traits::MD5Sum< ::hector_worldmodel_msgs::SetObjectName > 
template<>
struct MD5Sum< ::hector_worldmodel_msgs::SetObjectNameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::hector_worldmodel_msgs::SetObjectName >::value();
  }
  static const char* value(const ::hector_worldmodel_msgs::SetObjectNameRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::hector_worldmodel_msgs::SetObjectNameRequest> should match 
// service_traits::DataType< ::hector_worldmodel_msgs::SetObjectName > 
template<>
struct DataType< ::hector_worldmodel_msgs::SetObjectNameRequest>
{
  static const char* value()
  {
    return DataType< ::hector_worldmodel_msgs::SetObjectName >::value();
  }
  static const char* value(const ::hector_worldmodel_msgs::SetObjectNameRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::hector_worldmodel_msgs::SetObjectNameResponse> should match 
// service_traits::MD5Sum< ::hector_worldmodel_msgs::SetObjectName > 
template<>
struct MD5Sum< ::hector_worldmodel_msgs::SetObjectNameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::hector_worldmodel_msgs::SetObjectName >::value();
  }
  static const char* value(const ::hector_worldmodel_msgs::SetObjectNameResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::hector_worldmodel_msgs::SetObjectNameResponse> should match 
// service_traits::DataType< ::hector_worldmodel_msgs::SetObjectName > 
template<>
struct DataType< ::hector_worldmodel_msgs::SetObjectNameResponse>
{
  static const char* value()
  {
    return DataType< ::hector_worldmodel_msgs::SetObjectName >::value();
  }
  static const char* value(const ::hector_worldmodel_msgs::SetObjectNameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HECTOR_WORLDMODEL_MSGS_MESSAGE_SETOBJECTNAME_H
