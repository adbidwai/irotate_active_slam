// Generated by gencpp from file robotino_msgs/SetEncoderPositionRequest.msg
// DO NOT EDIT!


#ifndef ROBOTINO_MSGS_MESSAGE_SETENCODERPOSITIONREQUEST_H
#define ROBOTINO_MSGS_MESSAGE_SETENCODERPOSITIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotino_msgs
{
template <class ContainerAllocator>
struct SetEncoderPositionRequest_
{
  typedef SetEncoderPositionRequest_<ContainerAllocator> Type;

  SetEncoderPositionRequest_()
    : position(0)
    , velocity(0)  {
    }
  SetEncoderPositionRequest_(const ContainerAllocator& _alloc)
    : position(0)
    , velocity(0)  {
  (void)_alloc;
    }



   typedef uint32_t _position_type;
  _position_type position;

   typedef uint32_t _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetEncoderPositionRequest_

typedef ::robotino_msgs::SetEncoderPositionRequest_<std::allocator<void> > SetEncoderPositionRequest;

typedef boost::shared_ptr< ::robotino_msgs::SetEncoderPositionRequest > SetEncoderPositionRequestPtr;
typedef boost::shared_ptr< ::robotino_msgs::SetEncoderPositionRequest const> SetEncoderPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotino_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'robotino_msgs': ['/home/brain/catkin_ws/src/robotino_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e17f4b08b3e2cdbbf2b0d78e4f62e5d6";
  }

  static const char* value(const ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe17f4b08b3e2cdbbULL;
  static const uint64_t static_value2 = 0xf2b0d78e4f62e5d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotino_msgs/SetEncoderPositionRequest";
  }

  static const char* value(const ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 position\n\
uint32 velocity\n\
";
  }

  static const char* value(const ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetEncoderPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotino_msgs::SetEncoderPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.position);
    s << indent << "velocity: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_SETENCODERPOSITIONREQUEST_H