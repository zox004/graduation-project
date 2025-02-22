// Generated by gencpp from file jsk_pcl_ros/CheckCircle.msg
// DO NOT EDIT!


#ifndef JSK_PCL_ROS_MESSAGE_CHECKCIRCLE_H
#define JSK_PCL_ROS_MESSAGE_CHECKCIRCLE_H

#include <ros/service_traits.h>


#include <jsk_pcl_ros/CheckCircleRequest.h>
#include <jsk_pcl_ros/CheckCircleResponse.h>


namespace jsk_pcl_ros
{

struct CheckCircle
{

typedef CheckCircleRequest Request;
typedef CheckCircleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CheckCircle
} // namespace jsk_pcl_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::jsk_pcl_ros::CheckCircle > {
  static const char* value()
  {
    return "36549e2f705ec32b8c873cf22d68b357";
  }

  static const char* value(const ::jsk_pcl_ros::CheckCircle&) { return value(); }
};

template<>
struct DataType< ::jsk_pcl_ros::CheckCircle > {
  static const char* value()
  {
    return "jsk_pcl_ros/CheckCircle";
  }

  static const char* value(const ::jsk_pcl_ros::CheckCircle&) { return value(); }
};


// service_traits::MD5Sum< ::jsk_pcl_ros::CheckCircleRequest> should match 
// service_traits::MD5Sum< ::jsk_pcl_ros::CheckCircle > 
template<>
struct MD5Sum< ::jsk_pcl_ros::CheckCircleRequest>
{
  static const char* value()
  {
    return MD5Sum< ::jsk_pcl_ros::CheckCircle >::value();
  }
  static const char* value(const ::jsk_pcl_ros::CheckCircleRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::jsk_pcl_ros::CheckCircleRequest> should match 
// service_traits::DataType< ::jsk_pcl_ros::CheckCircle > 
template<>
struct DataType< ::jsk_pcl_ros::CheckCircleRequest>
{
  static const char* value()
  {
    return DataType< ::jsk_pcl_ros::CheckCircle >::value();
  }
  static const char* value(const ::jsk_pcl_ros::CheckCircleRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::jsk_pcl_ros::CheckCircleResponse> should match 
// service_traits::MD5Sum< ::jsk_pcl_ros::CheckCircle > 
template<>
struct MD5Sum< ::jsk_pcl_ros::CheckCircleResponse>
{
  static const char* value()
  {
    return MD5Sum< ::jsk_pcl_ros::CheckCircle >::value();
  }
  static const char* value(const ::jsk_pcl_ros::CheckCircleResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::jsk_pcl_ros::CheckCircleResponse> should match 
// service_traits::DataType< ::jsk_pcl_ros::CheckCircle > 
template<>
struct DataType< ::jsk_pcl_ros::CheckCircleResponse>
{
  static const char* value()
  {
    return DataType< ::jsk_pcl_ros::CheckCircle >::value();
  }
  static const char* value(const ::jsk_pcl_ros::CheckCircleResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // JSK_PCL_ROS_MESSAGE_CHECKCIRCLE_H
