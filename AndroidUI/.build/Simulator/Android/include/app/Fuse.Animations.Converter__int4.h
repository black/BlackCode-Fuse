// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__INT4_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__INT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__int4;

struct Converter__int4__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__int4*, ::app::Uno::Int4);
    ::app::Uno::Int4(*__fp_Out)(Converter__int4*, ::app::Uno::Float4);
};

Converter__int4__uType* Converter__int4__typeof();

struct Converter__int4 : ::uObject
{
    ::app::Uno::Float4 In(::app::Uno::Int4 value);
    ::app::Uno::Int4 Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>
#include <app/Uno.Int4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__int4::In(::app::Uno::Int4 value) { return (((Converter__int4__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Uno::Int4 Converter__int4::Out(::app::Uno::Float4 value) { return (((Converter__int4__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
