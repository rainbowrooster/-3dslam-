// Generated by gencpp from file axis_camera/axis_ptz_msg.msg
// DO NOT EDIT!


#ifndef AXIS_CAMERA_MESSAGE_AXIS_PTZ_MSG_H
#define AXIS_CAMERA_MESSAGE_AXIS_PTZ_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace axis_camera
{
template <class ContainerAllocator>
struct axis_ptz_msg_
{
  typedef axis_ptz_msg_<ContainerAllocator> Type;

  axis_ptz_msg_()
    : pan(0.0)
    , tilt(0.0)
    , zoom(0.0)
    , focus(0.0)
    , brightness(0.0)
    , autofocus(false)
    , autoiris(false)  {
    }
  axis_ptz_msg_(const ContainerAllocator& _alloc)
    : pan(0.0)
    , tilt(0.0)
    , zoom(0.0)
    , focus(0.0)
    , brightness(0.0)
    , autofocus(false)
    , autoiris(false)  {
  (void)_alloc;
    }



   typedef float _pan_type;
  _pan_type pan;

   typedef float _tilt_type;
  _tilt_type tilt;

   typedef float _zoom_type;
  _zoom_type zoom;

   typedef float _focus_type;
  _focus_type focus;

   typedef float _brightness_type;
  _brightness_type brightness;

   typedef uint8_t _autofocus_type;
  _autofocus_type autofocus;

   typedef uint8_t _autoiris_type;
  _autoiris_type autoiris;





  typedef boost::shared_ptr< ::axis_camera::axis_ptz_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::axis_camera::axis_ptz_msg_<ContainerAllocator> const> ConstPtr;

}; // struct axis_ptz_msg_

typedef ::axis_camera::axis_ptz_msg_<std::allocator<void> > axis_ptz_msg;

typedef boost::shared_ptr< ::axis_camera::axis_ptz_msg > axis_ptz_msgPtr;
typedef boost::shared_ptr< ::axis_camera::axis_ptz_msg const> axis_ptz_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::axis_camera::axis_ptz_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace axis_camera

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'axis_camera': ['/home/iqr/Desktop/iqr_jackal/src/axis_camera/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::axis_camera::axis_ptz_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::axis_camera::axis_ptz_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::axis_camera::axis_ptz_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9ef2fa7a901ac61f6c46d77723ba5f75";
  }

  static const char* value(const ::axis_camera::axis_ptz_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9ef2fa7a901ac61fULL;
  static const uint64_t static_value2 = 0x6c46d77723ba5f75ULL;
};

template<class ContainerAllocator>
struct DataType< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "axis_camera/axis_ptz_msg";
  }

  static const char* value(const ::axis_camera::axis_ptz_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 pan\n\
float32 tilt\n\
float32 zoom\n\
float32 focus\n\
float32 brightness\n\
bool autofocus\n\
bool autoiris\n\
";
  }

  static const char* value(const ::axis_camera::axis_ptz_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pan);
      stream.next(m.tilt);
      stream.next(m.zoom);
      stream.next(m.focus);
      stream.next(m.brightness);
      stream.next(m.autofocus);
      stream.next(m.autoiris);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct axis_ptz_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::axis_camera::axis_ptz_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::axis_camera::axis_ptz_msg_<ContainerAllocator>& v)
  {
    s << indent << "pan: ";
    Printer<float>::stream(s, indent + "  ", v.pan);
    s << indent << "tilt: ";
    Printer<float>::stream(s, indent + "  ", v.tilt);
    s << indent << "zoom: ";
    Printer<float>::stream(s, indent + "  ", v.zoom);
    s << indent << "focus: ";
    Printer<float>::stream(s, indent + "  ", v.focus);
    s << indent << "brightness: ";
    Printer<float>::stream(s, indent + "  ", v.brightness);
    s << indent << "autofocus: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autofocus);
    s << indent << "autoiris: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autoiris);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AXIS_CAMERA_MESSAGE_AXIS_PTZ_MSG_H
