// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__SHORT_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__SHORT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__short;

struct Converter__short__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__short*, ::uShort);
    ::uShort(*__fp_Out)(Converter__short*, ::app::Uno::Float4);
};

Converter__short__uType* Converter__short__typeof();

struct Converter__short : ::uObject
{
    ::app::Uno::Float4 In(::uShort value);
    ::uShort Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__short::In(::uShort value) { return (((Converter__short__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::uShort Converter__short::Out(::app::Uno::Float4 value) { return (((Converter__short__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
