// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__STRING_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__string;

struct Converter__string__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__string*, ::uString*);
    ::uString*(*__fp_Out)(Converter__string*, ::app::Uno::Float4);
};

Converter__string__uType* Converter__string__typeof();

struct Converter__string : ::uObject
{
    ::app::Uno::Float4 In(::uString* value);
    ::uString* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__string::In(::uString* value) { return (((Converter__string__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::uString* Converter__string::Out(::app::Uno::Float4 value) { return (((Converter__string__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
