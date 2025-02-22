// Generated by gencpp from file capabilities/GetRemappings.msg
// DO NOT EDIT!


#ifndef CAPABILITIES_MESSAGE_GETREMAPPINGS_H
#define CAPABILITIES_MESSAGE_GETREMAPPINGS_H

#include <ros/service_traits.h>


#include <capabilities/GetRemappingsRequest.h>
#include <capabilities/GetRemappingsResponse.h>


namespace capabilities
{

struct GetRemappings
{

typedef GetRemappingsRequest Request;
typedef GetRemappingsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetRemappings
} // namespace capabilities


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::capabilities::GetRemappings > {
  static const char* value()
  {
    return "e08cc3bd533b5554ccb1906769ad809b";
  }

  static const char* value(const ::capabilities::GetRemappings&) { return value(); }
};

template<>
struct DataType< ::capabilities::GetRemappings > {
  static const char* value()
  {
    return "capabilities/GetRemappings";
  }

  static const char* value(const ::capabilities::GetRemappings&) { return value(); }
};


// service_traits::MD5Sum< ::capabilities::GetRemappingsRequest> should match
// service_traits::MD5Sum< ::capabilities::GetRemappings >
template<>
struct MD5Sum< ::capabilities::GetRemappingsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::capabilities::GetRemappings >::value();
  }
  static const char* value(const ::capabilities::GetRemappingsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::capabilities::GetRemappingsRequest> should match
// service_traits::DataType< ::capabilities::GetRemappings >
template<>
struct DataType< ::capabilities::GetRemappingsRequest>
{
  static const char* value()
  {
    return DataType< ::capabilities::GetRemappings >::value();
  }
  static const char* value(const ::capabilities::GetRemappingsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::capabilities::GetRemappingsResponse> should match
// service_traits::MD5Sum< ::capabilities::GetRemappings >
template<>
struct MD5Sum< ::capabilities::GetRemappingsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::capabilities::GetRemappings >::value();
  }
  static const char* value(const ::capabilities::GetRemappingsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::capabilities::GetRemappingsResponse> should match
// service_traits::DataType< ::capabilities::GetRemappings >
template<>
struct DataType< ::capabilities::GetRemappingsResponse>
{
  static const char* value()
  {
    return DataType< ::capabilities::GetRemappings >::value();
  }
  static const char* value(const ::capabilities::GetRemappingsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAPABILITIES_MESSAGE_GETREMAPPINGS_H
