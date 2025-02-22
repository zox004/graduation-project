// Generated by gencpp from file program_queue/DequeueProgram.msg
// DO NOT EDIT!


#ifndef PROGRAM_QUEUE_MESSAGE_DEQUEUEPROGRAM_H
#define PROGRAM_QUEUE_MESSAGE_DEQUEUEPROGRAM_H

#include <ros/service_traits.h>


#include <program_queue/DequeueProgramRequest.h>
#include <program_queue/DequeueProgramResponse.h>


namespace program_queue
{

struct DequeueProgram
{

typedef DequeueProgramRequest Request;
typedef DequeueProgramResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DequeueProgram
} // namespace program_queue


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::program_queue::DequeueProgram > {
  static const char* value()
  {
    return "04ad931997d8932c7beb4913a7ee1cab";
  }

  static const char* value(const ::program_queue::DequeueProgram&) { return value(); }
};

template<>
struct DataType< ::program_queue::DequeueProgram > {
  static const char* value()
  {
    return "program_queue/DequeueProgram";
  }

  static const char* value(const ::program_queue::DequeueProgram&) { return value(); }
};


// service_traits::MD5Sum< ::program_queue::DequeueProgramRequest> should match 
// service_traits::MD5Sum< ::program_queue::DequeueProgram > 
template<>
struct MD5Sum< ::program_queue::DequeueProgramRequest>
{
  static const char* value()
  {
    return MD5Sum< ::program_queue::DequeueProgram >::value();
  }
  static const char* value(const ::program_queue::DequeueProgramRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::program_queue::DequeueProgramRequest> should match 
// service_traits::DataType< ::program_queue::DequeueProgram > 
template<>
struct DataType< ::program_queue::DequeueProgramRequest>
{
  static const char* value()
  {
    return DataType< ::program_queue::DequeueProgram >::value();
  }
  static const char* value(const ::program_queue::DequeueProgramRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::program_queue::DequeueProgramResponse> should match 
// service_traits::MD5Sum< ::program_queue::DequeueProgram > 
template<>
struct MD5Sum< ::program_queue::DequeueProgramResponse>
{
  static const char* value()
  {
    return MD5Sum< ::program_queue::DequeueProgram >::value();
  }
  static const char* value(const ::program_queue::DequeueProgramResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::program_queue::DequeueProgramResponse> should match 
// service_traits::DataType< ::program_queue::DequeueProgram > 
template<>
struct DataType< ::program_queue::DequeueProgramResponse>
{
  static const char* value()
  {
    return DataType< ::program_queue::DequeueProgram >::value();
  }
  static const char* value(const ::program_queue::DequeueProgramResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PROGRAM_QUEUE_MESSAGE_DEQUEUEPROGRAM_H
