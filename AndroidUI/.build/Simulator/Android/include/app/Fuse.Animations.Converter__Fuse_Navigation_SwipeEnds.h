// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_NAVIGATION_SWIPE_ENDS_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_NAVIGATION_SWIPE_ENDS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Navigation_SwipeEnds;

struct Converter__Fuse_Navigation_SwipeEnds__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Navigation_SwipeEnds*, int);
    int(*__fp_Out)(Converter__Fuse_Navigation_SwipeEnds*, ::app::Uno::Float4);
};

Converter__Fuse_Navigation_SwipeEnds__uType* Converter__Fuse_Navigation_SwipeEnds__typeof();

struct Converter__Fuse_Navigation_SwipeEnds : ::uObject
{
    ::app::Uno::Float4 In(int value);
    int Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Navigation_SwipeEnds::In(int value) { return (((Converter__Fuse_Navigation_SwipeEnds__uType*)this->__obj_type)->__fp_In)(this, value); }
inline int Converter__Fuse_Navigation_SwipeEnds::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Navigation_SwipeEnds__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
