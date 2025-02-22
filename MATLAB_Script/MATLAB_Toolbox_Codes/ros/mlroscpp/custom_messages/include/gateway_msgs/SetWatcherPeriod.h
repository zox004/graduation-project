// Generated by gencpp from file gateway_msgs/SetWatcherPeriod.msg
// DO NOT EDIT!


#ifndef GATEWAY_MSGS_MESSAGE_SETWATCHERPERIOD_H
#define GATEWAY_MSGS_MESSAGE_SETWATCHERPERIOD_H

#include <ros/service_traits.h>


#include <gateway_msgs/SetWatcherPeriodRequest.h>
#include <gateway_msgs/SetWatcherPeriodResponse.h>


namespace gateway_msgs
{

struct SetWatcherPeriod
{

typedef SetWatcherPeriodRequest Request;
typedef SetWatcherPeriodResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetWatcherPeriod
} // namespace gateway_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gateway_msgs::SetWatcherPeriod > {
  static const char* value()
  {
    return "48c82bd734fbc66058cd96447a09fe59";
  }

  static const char* value(const ::gateway_msgs::SetWatcherPeriod&) { return value(); }
};

template<>
struct DataType< ::gateway_msgs::SetWatcherPeriod > {
  static const char* value()
  {
    return "gateway_msgs/SetWatcherPeriod";
  }

  static const char* value(const ::gateway_msgs::SetWatcherPeriod&) { return value(); }
};


// service_traits::MD5Sum< ::gateway_msgs::SetWatcherPeriodRequest> should match
// service_traits::MD5Sum< ::gateway_msgs::SetWatcherPeriod >
template<>
struct MD5Sum< ::gateway_msgs::SetWatcherPeriodRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gateway_msgs::SetWatcherPeriod >::value();
  }
  static const char* value(const ::gateway_msgs::SetWatcherPeriodRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gateway_msgs::SetWatcherPeriodRequest> should match
// service_traits::DataType< ::gateway_msgs::SetWatcherPeriod >
template<>
struct DataType< ::gateway_msgs::SetWatcherPeriodRequest>
{
  static const char* value()
  {
    return DataType< ::gateway_msgs::SetWatcherPeriod >::value();
  }
  static const char* value(const ::gateway_msgs::SetWatcherPeriodRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gateway_msgs::SetWatcherPeriodResponse> should match
// service_traits::MD5Sum< ::gateway_msgs::SetWatcherPeriod >
template<>
struct MD5Sum< ::gateway_msgs::SetWatcherPeriodResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gateway_msgs::SetWatcherPeriod >::value();
  }
  static const char* value(const ::gateway_msgs::SetWatcherPeriodResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gateway_msgs::SetWatcherPeriodResponse> should match
// service_traits::DataType< ::gateway_msgs::SetWatcherPeriod >
template<>
struct DataType< ::gateway_msgs::SetWatcherPeriodResponse>
{
  static const char* value()
  {
    return DataType< ::gateway_msgs::SetWatcherPeriod >::value();
  }
  static const char* value(const ::gateway_msgs::SetWatcherPeriodResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GATEWAY_MSGS_MESSAGE_SETWATCHERPERIOD_H
