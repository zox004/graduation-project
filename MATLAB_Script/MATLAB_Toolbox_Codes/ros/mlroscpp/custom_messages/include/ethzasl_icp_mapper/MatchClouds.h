// Generated by gencpp from file ethzasl_icp_mapper/MatchClouds.msg
// DO NOT EDIT!


#ifndef ETHZASL_ICP_MAPPER_MESSAGE_MATCHCLOUDS_H
#define ETHZASL_ICP_MAPPER_MESSAGE_MATCHCLOUDS_H

#include <ros/service_traits.h>


#include <ethzasl_icp_mapper/MatchCloudsRequest.h>
#include <ethzasl_icp_mapper/MatchCloudsResponse.h>


namespace ethzasl_icp_mapper
{

struct MatchClouds
{

typedef MatchCloudsRequest Request;
typedef MatchCloudsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MatchClouds
} // namespace ethzasl_icp_mapper


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ethzasl_icp_mapper::MatchClouds > {
  static const char* value()
  {
    return "2d80ae9747b1317b7b969a4ee0f353c7";
  }

  static const char* value(const ::ethzasl_icp_mapper::MatchClouds&) { return value(); }
};

template<>
struct DataType< ::ethzasl_icp_mapper::MatchClouds > {
  static const char* value()
  {
    return "ethzasl_icp_mapper/MatchClouds";
  }

  static const char* value(const ::ethzasl_icp_mapper::MatchClouds&) { return value(); }
};


// service_traits::MD5Sum< ::ethzasl_icp_mapper::MatchCloudsRequest> should match 
// service_traits::MD5Sum< ::ethzasl_icp_mapper::MatchClouds > 
template<>
struct MD5Sum< ::ethzasl_icp_mapper::MatchCloudsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ethzasl_icp_mapper::MatchClouds >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::MatchCloudsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ethzasl_icp_mapper::MatchCloudsRequest> should match 
// service_traits::DataType< ::ethzasl_icp_mapper::MatchClouds > 
template<>
struct DataType< ::ethzasl_icp_mapper::MatchCloudsRequest>
{
  static const char* value()
  {
    return DataType< ::ethzasl_icp_mapper::MatchClouds >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::MatchCloudsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ethzasl_icp_mapper::MatchCloudsResponse> should match 
// service_traits::MD5Sum< ::ethzasl_icp_mapper::MatchClouds > 
template<>
struct MD5Sum< ::ethzasl_icp_mapper::MatchCloudsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ethzasl_icp_mapper::MatchClouds >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::MatchCloudsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ethzasl_icp_mapper::MatchCloudsResponse> should match 
// service_traits::DataType< ::ethzasl_icp_mapper::MatchClouds > 
template<>
struct DataType< ::ethzasl_icp_mapper::MatchCloudsResponse>
{
  static const char* value()
  {
    return DataType< ::ethzasl_icp_mapper::MatchClouds >::value();
  }
  static const char* value(const ::ethzasl_icp_mapper::MatchCloudsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ETHZASL_ICP_MAPPER_MESSAGE_MATCHCLOUDS_H
