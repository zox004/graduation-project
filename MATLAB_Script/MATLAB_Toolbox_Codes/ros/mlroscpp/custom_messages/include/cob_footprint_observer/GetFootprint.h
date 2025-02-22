// Generated by gencpp from file cob_footprint_observer/GetFootprint.msg
// DO NOT EDIT!


#ifndef COB_FOOTPRINT_OBSERVER_MESSAGE_GETFOOTPRINT_H
#define COB_FOOTPRINT_OBSERVER_MESSAGE_GETFOOTPRINT_H

#include <ros/service_traits.h>


#include <cob_footprint_observer/GetFootprintRequest.h>
#include <cob_footprint_observer/GetFootprintResponse.h>


namespace cob_footprint_observer
{

struct GetFootprint
{

typedef GetFootprintRequest Request;
typedef GetFootprintResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetFootprint
} // namespace cob_footprint_observer


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cob_footprint_observer::GetFootprint > {
  static const char* value()
  {
    return "f40d48f5ad16c4c6dbedafd967306675";
  }

  static const char* value(const ::cob_footprint_observer::GetFootprint&) { return value(); }
};

template<>
struct DataType< ::cob_footprint_observer::GetFootprint > {
  static const char* value()
  {
    return "cob_footprint_observer/GetFootprint";
  }

  static const char* value(const ::cob_footprint_observer::GetFootprint&) { return value(); }
};


// service_traits::MD5Sum< ::cob_footprint_observer::GetFootprintRequest> should match
// service_traits::MD5Sum< ::cob_footprint_observer::GetFootprint >
template<>
struct MD5Sum< ::cob_footprint_observer::GetFootprintRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cob_footprint_observer::GetFootprint >::value();
  }
  static const char* value(const ::cob_footprint_observer::GetFootprintRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_footprint_observer::GetFootprintRequest> should match
// service_traits::DataType< ::cob_footprint_observer::GetFootprint >
template<>
struct DataType< ::cob_footprint_observer::GetFootprintRequest>
{
  static const char* value()
  {
    return DataType< ::cob_footprint_observer::GetFootprint >::value();
  }
  static const char* value(const ::cob_footprint_observer::GetFootprintRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cob_footprint_observer::GetFootprintResponse> should match
// service_traits::MD5Sum< ::cob_footprint_observer::GetFootprint >
template<>
struct MD5Sum< ::cob_footprint_observer::GetFootprintResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cob_footprint_observer::GetFootprint >::value();
  }
  static const char* value(const ::cob_footprint_observer::GetFootprintResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cob_footprint_observer::GetFootprintResponse> should match
// service_traits::DataType< ::cob_footprint_observer::GetFootprint >
template<>
struct DataType< ::cob_footprint_observer::GetFootprintResponse>
{
  static const char* value()
  {
    return DataType< ::cob_footprint_observer::GetFootprint >::value();
  }
  static const char* value(const ::cob_footprint_observer::GetFootprintResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COB_FOOTPRINT_OBSERVER_MESSAGE_GETFOOTPRINT_H
