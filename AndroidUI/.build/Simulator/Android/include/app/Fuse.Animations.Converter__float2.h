// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FLOAT2_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FLOAT2_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__float2;

struct Converter__float2__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__float2*, ::app::Uno::Float2);
    ::app::Uno::Float2(*__fp_Out)(Converter__float2*, ::app::Uno::Float4);
};

Converter__float2__uType* Converter__float2__typeof();

void Converter__float2___ObjInit(Converter__float2* __this);

struct Converter__float2 : ::uObject
{
    void _ObjInit() { Converter__float2___ObjInit(this); }
    ::app::Uno::Float4 In(::app::Uno::Float2 value);
    ::app::Uno::Float2 Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__float2::In(::app::Uno::Float2 value) { return (((Converter__float2__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Uno::Float2 Converter__float2::Out(::app::Uno::Float4 value) { return (((Converter__float2__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
