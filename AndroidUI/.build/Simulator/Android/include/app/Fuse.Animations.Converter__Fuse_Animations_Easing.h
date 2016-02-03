// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_ANIMATIONS_EASING_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_ANIMATIONS_EASING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Animations_Easing;

struct Converter__Fuse_Animations_Easing__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Animations_Easing*, int);
    int(*__fp_Out)(Converter__Fuse_Animations_Easing*, ::app::Uno::Float4);
};

Converter__Fuse_Animations_Easing__uType* Converter__Fuse_Animations_Easing__typeof();

struct Converter__Fuse_Animations_Easing : ::uObject
{
    ::app::Uno::Float4 In(int value);
    int Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Animations_Easing::In(int value) { return (((Converter__Fuse_Animations_Easing__uType*)this->__obj_type)->__fp_In)(this, value); }
inline int Converter__Fuse_Animations_Easing::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Animations_Easing__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
