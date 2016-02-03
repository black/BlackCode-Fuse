// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FLOAT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__float4;

struct Converter__float4__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__float4*, ::app::Uno::Float4);
    ::app::Uno::Float4(*__fp_Out)(Converter__float4*, ::app::Uno::Float4);
};

Converter__float4__uType* Converter__float4__typeof();

void Converter__float4___ObjInit(Converter__float4* __this);

struct Converter__float4 : ::uObject
{
    void _ObjInit() { Converter__float4___ObjInit(this); }
    ::app::Uno::Float4 In(::app::Uno::Float4 value);
    ::app::Uno::Float4 Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__float4::In(::app::Uno::Float4 value) { return (((Converter__float4__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Uno::Float4 Converter__float4::Out(::app::Uno::Float4 value) { return (((Converter__float4__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
