// Generated by gencpp from file rtt_ros_msgs/Eval.msg
// DO NOT EDIT!


#ifndef RTT_ROS_MSGS_MESSAGE_EVAL_H
#define RTT_ROS_MSGS_MESSAGE_EVAL_H

#include <ros/service_traits.h>


#include <rtt_ros_msgs/EvalRequest.h>
#include <rtt_ros_msgs/EvalResponse.h>


namespace rtt_ros_msgs
{

struct Eval
{

typedef EvalRequest Request;
typedef EvalResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Eval
} // namespace rtt_ros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rtt_ros_msgs::Eval > {
  static const char* value()
  {
    return "9bd7fb149a2f8ffba1c1210953868445";
  }

  static const char* value(const ::rtt_ros_msgs::Eval&) { return value(); }
};

template<>
struct DataType< ::rtt_ros_msgs::Eval > {
  static const char* value()
  {
    return "rtt_ros_msgs/Eval";
  }

  static const char* value(const ::rtt_ros_msgs::Eval&) { return value(); }
};


// service_traits::MD5Sum< ::rtt_ros_msgs::EvalRequest> should match
// service_traits::MD5Sum< ::rtt_ros_msgs::Eval >
template<>
struct MD5Sum< ::rtt_ros_msgs::EvalRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rtt_ros_msgs::Eval >::value();
  }
  static const char* value(const ::rtt_ros_msgs::EvalRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtt_ros_msgs::EvalRequest> should match
// service_traits::DataType< ::rtt_ros_msgs::Eval >
template<>
struct DataType< ::rtt_ros_msgs::EvalRequest>
{
  static const char* value()
  {
    return DataType< ::rtt_ros_msgs::Eval >::value();
  }
  static const char* value(const ::rtt_ros_msgs::EvalRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rtt_ros_msgs::EvalResponse> should match
// service_traits::MD5Sum< ::rtt_ros_msgs::Eval >
template<>
struct MD5Sum< ::rtt_ros_msgs::EvalResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rtt_ros_msgs::Eval >::value();
  }
  static const char* value(const ::rtt_ros_msgs::EvalResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtt_ros_msgs::EvalResponse> should match
// service_traits::DataType< ::rtt_ros_msgs::Eval >
template<>
struct DataType< ::rtt_ros_msgs::EvalResponse>
{
  static const char* value()
  {
    return DataType< ::rtt_ros_msgs::Eval >::value();
  }
  static const char* value(const ::rtt_ros_msgs::EvalResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RTT_ROS_MSGS_MESSAGE_EVAL_H
