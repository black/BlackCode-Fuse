// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__LONG_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__LONG_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__long;

struct Converter__long__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__long*, ::uLong);
    ::uLong(*__fp_Out)(Converter__long*, ::app::Uno::Float4);
};

Converter__long__uType* Converter__long__typeof();

struct Converter__long : ::uObject
{
    ::app::Uno::Float4 In(::uLong value);
    ::uLong Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__long::In(::uLong value) { return (((Converter__long__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::uLong Converter__long::Out(::app::Uno::Float4 value) { return (((Converter__long__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
