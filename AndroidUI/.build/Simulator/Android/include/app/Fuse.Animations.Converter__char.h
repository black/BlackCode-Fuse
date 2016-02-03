// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__CHAR_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__CHAR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__char;

struct Converter__char__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__char*, ::uChar);
    ::uChar(*__fp_Out)(Converter__char*, ::app::Uno::Float4);
};

Converter__char__uType* Converter__char__typeof();

struct Converter__char : ::uObject
{
    ::app::Uno::Float4 In(::uChar value);
    ::uChar Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__char::In(::uChar value) { return (((Converter__char__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::uChar Converter__char::Out(::app::Uno::Float4 value) { return (((Converter__char__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
