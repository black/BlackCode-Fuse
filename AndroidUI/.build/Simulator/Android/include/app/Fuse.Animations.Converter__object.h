// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__object;

struct Converter__object__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__object*, ::uObject*);
    ::uObject*(*__fp_Out)(Converter__object*, ::app::Uno::Float4);
};

Converter__object__uType* Converter__object__typeof();

struct Converter__object : ::uObject
{
    ::app::Uno::Float4 In(::uObject* value);
    ::uObject* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__object::In(::uObject* value) { return (((Converter__object__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::uObject* Converter__object::Out(::app::Uno::Float4 value) { return (((Converter__object__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
