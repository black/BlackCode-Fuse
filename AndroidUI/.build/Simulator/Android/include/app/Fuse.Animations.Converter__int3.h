// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__INT3_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__INT3_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int3; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__int3;

struct Converter__int3__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__int3*, ::app::Uno::Int3);
    ::app::Uno::Int3(*__fp_Out)(Converter__int3*, ::app::Uno::Float4);
};

Converter__int3__uType* Converter__int3__typeof();

struct Converter__int3 : ::uObject
{
    ::app::Uno::Float4 In(::app::Uno::Int3 value);
    ::app::Uno::Int3 Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>
#include <app/Uno.Int3.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__int3::In(::app::Uno::Int3 value) { return (((Converter__int3__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Uno::Int3 Converter__int3::Out(::app::Uno::Float4 value) { return (((Converter__int3__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
