// Generated by gencpp from file robotino_msgs/ResetOdometryRequest.msg
// DO NOT EDIT!


#ifndef ROBOTINO_MSGS_MESSAGE_RESETODOMETRYREQUEST_H
#define ROBOTINO_MSGS_MESSAGE_RESETODOMETRYREQUEST_H


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
struct ResetOdometryRequest_
{
  typedef ResetOdometryRequest_<ContainerAllocator> Type;

  ResetOdometryRequest_()
    : x(0.0)
    , y(0.0)
    , phi(0.0)  {
    }
  ResetOdometryRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , phi(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _phi_type;
  _phi_type phi;





  typedef boost::shared_ptr< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ResetOdometryRequest_

typedef ::robotino_msgs::ResetOdometryRequest_<std::allocator<void> > ResetOdometryRequest;

typedef boost::shared_ptr< ::robotino_msgs::ResetOdometryRequest > ResetOdometryRequestPtr;
typedef boost::shared_ptr< ::robotino_msgs::ResetOdometryRequest const> ResetOdometryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "400210218ff66e5bce9e5be16653c0c8";
  }

  static const char* value(const ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x400210218ff66e5bULL;
  static const uint64_t static_value2 = 0xce9e5be16653c0c8ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotino_msgs/ResetOdometryRequest";
  }

  static const char* value(const ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 phi\n\
";
  }

  static const char* value(const ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.phi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResetOdometryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotino_msgs::ResetOdometryRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "phi: ";
    Printer<float>::stream(s, indent + "  ", v.phi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_MSGS_MESSAGE_RESETODOMETRYREQUEST_H
