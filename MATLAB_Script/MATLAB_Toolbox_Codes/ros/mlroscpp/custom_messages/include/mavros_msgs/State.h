// Generated by gencpp from file mavros_msgs/State.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_STATE_H
#define MAVROS_MSGS_MESSAGE_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct State_
{
  typedef State_<ContainerAllocator> Type;

  State_()
    : header()
    , connected(false)
    , armed(false)
    , guided(false)
    , manual_input(false)
    , mode()
    , system_status(0)  {
    }
  State_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , connected(false)
    , armed(false)
    , guided(false)
    , manual_input(false)
    , mode(_alloc)
    , system_status(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _connected_type;
  _connected_type connected;

   typedef uint8_t _armed_type;
  _armed_type armed;

   typedef uint8_t _guided_type;
  _guided_type guided;

   typedef uint8_t _manual_input_type;
  _manual_input_type manual_input;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_type;
  _mode_type mode;

   typedef uint8_t _system_status_type;
  _system_status_type system_status;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_MANUAL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_CIRCLE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_STABILIZE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_TRAINING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_ACRO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_FBWA;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_FBWB;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_CRUISE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_AUTOTUNE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_AUTO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_RTL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_LOITER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_LAND;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_GUIDED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_INITIALISING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_QSTABILIZE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_QHOVER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_QLOITER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_QLAND;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_PLANE_QRTL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_STABILIZE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_ACRO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_ALT_HOLD;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_AUTO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_GUIDED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_LOITER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_RTL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_CIRCLE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_POSITION;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_LAND;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_OF_LOITER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_DRIFT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_SPORT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_FLIP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_AUTOTUNE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_POSHOLD;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_BRAKE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_THROW;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_AVOID_ADSB;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_COPTER_GUIDED_NOGPS;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_ROVER_MANUAL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_ROVER_LEARNING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_ROVER_STEERING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_ROVER_HOLD;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_ROVER_AUTO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_ROVER_RTL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_ROVER_GUIDED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_APM_ROVER_INITIALISING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_MANUAL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_ACRO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_ALTITUDE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_POSITION;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_OFFBOARD;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_STABILIZED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_RATTITUDE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_MISSION;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_LOITER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_RTL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_LAND;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_RTGS;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_READY;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MODE_PX4_TAKEOFF;

  typedef boost::shared_ptr< ::mavros_msgs::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::State_<ContainerAllocator> const> ConstPtr;

}; // struct State_

typedef ::mavros_msgs::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::mavros_msgs::State > StatePtr;
typedef boost::shared_ptr< ::mavros_msgs::State const> StateConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_MANUAL =
        
          "MANUAL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_CIRCLE =
        
          "CIRCLE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_STABILIZE =
        
          "STABILIZE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_TRAINING =
        
          "TRAINING"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_ACRO =
        
          "ACRO"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_FBWA =
        
          "FBWA"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_FBWB =
        
          "FBWB"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_CRUISE =
        
          "CRUISE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_AUTOTUNE =
        
          "AUTOTUNE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_AUTO =
        
          "AUTO"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_RTL =
        
          "RTL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_LOITER =
        
          "LOITER"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_LAND =
        
          "LAND"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_GUIDED =
        
          "GUIDED"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_INITIALISING =
        
          "INITIALISING"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_QSTABILIZE =
        
          "QSTABILIZE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_QHOVER =
        
          "QHOVER"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_QLOITER =
        
          "QLOITER"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_QLAND =
        
          "QLAND"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_PLANE_QRTL =
        
          "QRTL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_STABILIZE =
        
          "STABILIZE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_ACRO =
        
          "ACRO"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_ALT_HOLD =
        
          "ALT_HOLD"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_AUTO =
        
          "AUTO"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_GUIDED =
        
          "GUIDED"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_LOITER =
        
          "LOITER"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_RTL =
        
          "RTL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_CIRCLE =
        
          "CIRCLE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_POSITION =
        
          "POSITION"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_LAND =
        
          "LAND"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_OF_LOITER =
        
          "OF_LOITER"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_DRIFT =
        
          "DRIFT"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_SPORT =
        
          "SPORT"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_FLIP =
        
          "FLIP"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_AUTOTUNE =
        
          "AUTOTUNE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_POSHOLD =
        
          "POSHOLD"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_BRAKE =
        
          "BRAKE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_THROW =
        
          "THROW"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_AVOID_ADSB =
        
          "AVOID_ADSB"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_COPTER_GUIDED_NOGPS =
        
          "GUIDED_NOGPS"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_ROVER_MANUAL =
        
          "MANUAL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_ROVER_LEARNING =
        
          "LEARNING"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_ROVER_STEERING =
        
          "STEERING"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_ROVER_HOLD =
        
          "HOLD"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_ROVER_AUTO =
        
          "AUTO"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_ROVER_RTL =
        
          "RTL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_ROVER_GUIDED =
        
          "GUIDED"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_APM_ROVER_INITIALISING =
        
          "INITIALISING"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_MANUAL =
        
          "MANUAL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_ACRO =
        
          "ACRO"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_ALTITUDE =
        
          "ALTCTL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_POSITION =
        
          "POSCTL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_OFFBOARD =
        
          "OFFBOARD"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_STABILIZED =
        
          "STABILIZED"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_RATTITUDE =
        
          "RATTITUDE"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_MISSION =
        
          "AUTO.MISSION"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_LOITER =
        
          "AUTO.LOITER"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_RTL =
        
          "AUTO.RTL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_LAND =
        
          "AUTO.LAND"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_RTGS =
        
          "AUTO.RTGS"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_READY =
        
          "AUTO.READY"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      State_<ContainerAllocator>::MODE_PX4_TAKEOFF =
        
          "AUTO.TAKEOFF"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::State_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::State_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/toolbox/ros/mlroscpp/custom_messages/share/geographic_msgs/cmake/../msg'], 'actionlib': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/actionlib/cmake/../msg'], 'std_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/local-ssd1/mavros/mavros-1.7.0/mavros-1.7.0/matlab_msg_gen_ros1/glnxa64/src/mavros_msgs/msg'], 'geometry_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/toolbox/ros/mlroscpp/custom_messages/share/uuid_msgs/cmake/../msg'], 'actionlib_msgs': ['/mathworks/devel/sbs/33/hakakarl.Brobot.j1694180/matlab/sys/ros1/glnxa64/ros1/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::State_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::State_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::State_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::State_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65cd0a9fff993b062b91e354554ec7e9";
  }

  static const char* value(const ::mavros_msgs::State_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65cd0a9fff993b06ULL;
  static const uint64_t static_value2 = 0x2b91e354554ec7e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/State";
  }

  static const char* value(const ::mavros_msgs::State_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Current autopilot state\n"
"#\n"
"# Known modes listed here:\n"
"# http://wiki.ros.org/mavros/CustomModes\n"
"#\n"
"# For system_status values\n"
"# see https://mavlink.io/en/messages/common.html#MAV_STATE\n"
"#\n"
"\n"
"std_msgs/Header header\n"
"bool connected\n"
"bool armed\n"
"bool guided\n"
"bool manual_input\n"
"string mode\n"
"uint8 system_status\n"
"\n"
"string MODE_APM_PLANE_MANUAL = MANUAL\n"
"string MODE_APM_PLANE_CIRCLE = CIRCLE\n"
"string MODE_APM_PLANE_STABILIZE = STABILIZE\n"
"string MODE_APM_PLANE_TRAINING = TRAINING\n"
"string MODE_APM_PLANE_ACRO = ACRO\n"
"string MODE_APM_PLANE_FBWA = FBWA\n"
"string MODE_APM_PLANE_FBWB = FBWB\n"
"string MODE_APM_PLANE_CRUISE = CRUISE\n"
"string MODE_APM_PLANE_AUTOTUNE = AUTOTUNE\n"
"string MODE_APM_PLANE_AUTO = AUTO\n"
"string MODE_APM_PLANE_RTL = RTL\n"
"string MODE_APM_PLANE_LOITER = LOITER\n"
"string MODE_APM_PLANE_LAND = LAND\n"
"string MODE_APM_PLANE_GUIDED = GUIDED\n"
"string MODE_APM_PLANE_INITIALISING = INITIALISING\n"
"string MODE_APM_PLANE_QSTABILIZE = QSTABILIZE\n"
"string MODE_APM_PLANE_QHOVER = QHOVER\n"
"string MODE_APM_PLANE_QLOITER = QLOITER\n"
"string MODE_APM_PLANE_QLAND = QLAND\n"
"string MODE_APM_PLANE_QRTL = QRTL\n"
"\n"
"string MODE_APM_COPTER_STABILIZE = STABILIZE\n"
"string MODE_APM_COPTER_ACRO = ACRO\n"
"string MODE_APM_COPTER_ALT_HOLD = ALT_HOLD\n"
"string MODE_APM_COPTER_AUTO = AUTO\n"
"string MODE_APM_COPTER_GUIDED = GUIDED\n"
"string MODE_APM_COPTER_LOITER = LOITER\n"
"string MODE_APM_COPTER_RTL = RTL\n"
"string MODE_APM_COPTER_CIRCLE = CIRCLE\n"
"string MODE_APM_COPTER_POSITION = POSITION\n"
"string MODE_APM_COPTER_LAND = LAND\n"
"string MODE_APM_COPTER_OF_LOITER = OF_LOITER\n"
"string MODE_APM_COPTER_DRIFT = DRIFT\n"
"string MODE_APM_COPTER_SPORT = SPORT\n"
"string MODE_APM_COPTER_FLIP = FLIP\n"
"string MODE_APM_COPTER_AUTOTUNE = AUTOTUNE\n"
"string MODE_APM_COPTER_POSHOLD = POSHOLD\n"
"string MODE_APM_COPTER_BRAKE = BRAKE\n"
"string MODE_APM_COPTER_THROW = THROW\n"
"string MODE_APM_COPTER_AVOID_ADSB = AVOID_ADSB\n"
"string MODE_APM_COPTER_GUIDED_NOGPS = GUIDED_NOGPS\n"
"\n"
"string MODE_APM_ROVER_MANUAL = MANUAL\n"
"string MODE_APM_ROVER_LEARNING = LEARNING\n"
"string MODE_APM_ROVER_STEERING = STEERING\n"
"string MODE_APM_ROVER_HOLD = HOLD\n"
"string MODE_APM_ROVER_AUTO = AUTO\n"
"string MODE_APM_ROVER_RTL = RTL\n"
"string MODE_APM_ROVER_GUIDED = GUIDED\n"
"string MODE_APM_ROVER_INITIALISING = INITIALISING\n"
"\n"
"string MODE_PX4_MANUAL = MANUAL\n"
"string MODE_PX4_ACRO = ACRO\n"
"string MODE_PX4_ALTITUDE = ALTCTL\n"
"string MODE_PX4_POSITION = POSCTL\n"
"string MODE_PX4_OFFBOARD = OFFBOARD\n"
"string MODE_PX4_STABILIZED = STABILIZED\n"
"string MODE_PX4_RATTITUDE = RATTITUDE\n"
"string MODE_PX4_MISSION = AUTO.MISSION\n"
"string MODE_PX4_LOITER = AUTO.LOITER\n"
"string MODE_PX4_RTL = AUTO.RTL\n"
"string MODE_PX4_LAND = AUTO.LAND\n"
"string MODE_PX4_RTGS = AUTO.RTGS\n"
"string MODE_PX4_READY = AUTO.READY\n"
"string MODE_PX4_TAKEOFF = AUTO.TAKEOFF\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::State_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::State_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.connected);
      stream.next(m.armed);
      stream.next(m.guided);
      stream.next(m.manual_input);
      stream.next(m.mode);
      stream.next(m.system_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct State_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::State_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "connected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.connected);
    s << indent << "armed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.armed);
    s << indent << "guided: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.guided);
    s << indent << "manual_input: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.manual_input);
    s << indent << "mode: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode);
    s << indent << "system_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.system_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_STATE_H
