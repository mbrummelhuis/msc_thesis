// Generated by gencpp from file mavros_msgs/NavControllerOutput.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_NAVCONTROLLEROUTPUT_H
#define MAVROS_MSGS_MESSAGE_NAVCONTROLLEROUTPUT_H


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
struct NavControllerOutput_
{
  typedef NavControllerOutput_<ContainerAllocator> Type;

  NavControllerOutput_()
    : header()
    , nav_roll(0.0)
    , nav_pitch(0.0)
    , nav_bearing(0)
    , target_bearing(0)
    , wp_dist(0)
    , alt_error(0.0)
    , aspd_error(0.0)
    , xtrack_error(0.0)  {
    }
  NavControllerOutput_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , nav_roll(0.0)
    , nav_pitch(0.0)
    , nav_bearing(0)
    , target_bearing(0)
    , wp_dist(0)
    , alt_error(0.0)
    , aspd_error(0.0)
    , xtrack_error(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _nav_roll_type;
  _nav_roll_type nav_roll;

   typedef float _nav_pitch_type;
  _nav_pitch_type nav_pitch;

   typedef int16_t _nav_bearing_type;
  _nav_bearing_type nav_bearing;

   typedef int16_t _target_bearing_type;
  _target_bearing_type target_bearing;

   typedef uint16_t _wp_dist_type;
  _wp_dist_type wp_dist;

   typedef float _alt_error_type;
  _alt_error_type alt_error;

   typedef float _aspd_error_type;
  _aspd_error_type aspd_error;

   typedef float _xtrack_error_type;
  _xtrack_error_type xtrack_error;





  typedef boost::shared_ptr< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> const> ConstPtr;

}; // struct NavControllerOutput_

typedef ::mavros_msgs::NavControllerOutput_<std::allocator<void> > NavControllerOutput;

typedef boost::shared_ptr< ::mavros_msgs::NavControllerOutput > NavControllerOutputPtr;
typedef boost::shared_ptr< ::mavros_msgs::NavControllerOutput const> NavControllerOutputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::NavControllerOutput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::NavControllerOutput_<ContainerAllocator1> & lhs, const ::mavros_msgs::NavControllerOutput_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.nav_roll == rhs.nav_roll &&
    lhs.nav_pitch == rhs.nav_pitch &&
    lhs.nav_bearing == rhs.nav_bearing &&
    lhs.target_bearing == rhs.target_bearing &&
    lhs.wp_dist == rhs.wp_dist &&
    lhs.alt_error == rhs.alt_error &&
    lhs.aspd_error == rhs.aspd_error &&
    lhs.xtrack_error == rhs.xtrack_error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::NavControllerOutput_<ContainerAllocator1> & lhs, const ::mavros_msgs::NavControllerOutput_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f6340c9bb79e3ac2a6142ce592e66756";
  }

  static const char* value(const ::mavros_msgs::NavControllerOutput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf6340c9bb79e3ac2ULL;
  static const uint64_t static_value2 = 0xa6142ce592e66756ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/NavControllerOutput";
  }

  static const char* value(const ::mavros_msgs::NavControllerOutput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# https://mavlink.io/en/messages/common.html#NAV_CONTROLLER_OUTPUT\n"
"\n"
"std_msgs/Header header\n"
"\n"
"float32 nav_roll            # Current desired roll\n"
"float32 nav_pitch           # Current desired pitch\n"
"int16 nav_bearing           # Current desired heading\n"
"int16 target_bearing        # Bearing to current waypoint/target\n"
"uint16 wp_dist              # Distance to active waypoint\n"
"float32 alt_error           # Current altitude error\n"
"float32 aspd_error          # Current airspeed error\n"
"float32 xtrack_error        # Current crosstrack error on x-y plane\n"
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

  static const char* value(const ::mavros_msgs::NavControllerOutput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.nav_roll);
      stream.next(m.nav_pitch);
      stream.next(m.nav_bearing);
      stream.next(m.target_bearing);
      stream.next(m.wp_dist);
      stream.next(m.alt_error);
      stream.next(m.aspd_error);
      stream.next(m.xtrack_error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavControllerOutput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::NavControllerOutput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::NavControllerOutput_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "nav_roll: ";
    Printer<float>::stream(s, indent + "  ", v.nav_roll);
    s << indent << "nav_pitch: ";
    Printer<float>::stream(s, indent + "  ", v.nav_pitch);
    s << indent << "nav_bearing: ";
    Printer<int16_t>::stream(s, indent + "  ", v.nav_bearing);
    s << indent << "target_bearing: ";
    Printer<int16_t>::stream(s, indent + "  ", v.target_bearing);
    s << indent << "wp_dist: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.wp_dist);
    s << indent << "alt_error: ";
    Printer<float>::stream(s, indent + "  ", v.alt_error);
    s << indent << "aspd_error: ";
    Printer<float>::stream(s, indent + "  ", v.aspd_error);
    s << indent << "xtrack_error: ";
    Printer<float>::stream(s, indent + "  ", v.xtrack_error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_NAVCONTROLLEROUTPUT_H
