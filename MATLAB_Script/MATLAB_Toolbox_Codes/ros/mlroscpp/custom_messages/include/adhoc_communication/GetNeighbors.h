// Generated by gencpp from file adhoc_communication/GetNeighbors.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_GETNEIGHBORS_H
#define ADHOC_COMMUNICATION_MESSAGE_GETNEIGHBORS_H

#include <ros/service_traits.h>


#include <adhoc_communication/GetNeighborsRequest.h>
#include <adhoc_communication/GetNeighborsResponse.h>


namespace adhoc_communication
{

struct GetNeighbors
{

typedef GetNeighborsRequest Request;
typedef GetNeighborsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetNeighbors
} // namespace adhoc_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::adhoc_communication::GetNeighbors > {
  static const char* value()
  {
    return "a51be085cd4a0fb160e82a9e1952784d";
  }

  static const char* value(const ::adhoc_communication::GetNeighbors&) { return value(); }
};

template<>
struct DataType< ::adhoc_communication::GetNeighbors > {
  static const char* value()
  {
    return "adhoc_communication/GetNeighbors";
  }

  static const char* value(const ::adhoc_communication::GetNeighbors&) { return value(); }
};


// service_traits::MD5Sum< ::adhoc_communication::GetNeighborsRequest> should match
// service_traits::MD5Sum< ::adhoc_communication::GetNeighbors >
template<>
struct MD5Sum< ::adhoc_communication::GetNeighborsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::adhoc_communication::GetNeighbors >::value();
  }
  static const char* value(const ::adhoc_communication::GetNeighborsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::adhoc_communication::GetNeighborsRequest> should match
// service_traits::DataType< ::adhoc_communication::GetNeighbors >
template<>
struct DataType< ::adhoc_communication::GetNeighborsRequest>
{
  static const char* value()
  {
    return DataType< ::adhoc_communication::GetNeighbors >::value();
  }
  static const char* value(const ::adhoc_communication::GetNeighborsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::adhoc_communication::GetNeighborsResponse> should match
// service_traits::MD5Sum< ::adhoc_communication::GetNeighbors >
template<>
struct MD5Sum< ::adhoc_communication::GetNeighborsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::adhoc_communication::GetNeighbors >::value();
  }
  static const char* value(const ::adhoc_communication::GetNeighborsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::adhoc_communication::GetNeighborsResponse> should match
// service_traits::DataType< ::adhoc_communication::GetNeighbors >
template<>
struct DataType< ::adhoc_communication::GetNeighborsResponse>
{
  static const char* value()
  {
    return DataType< ::adhoc_communication::GetNeighbors >::value();
  }
  static const char* value(const ::adhoc_communication::GetNeighborsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_GETNEIGHBORS_H
