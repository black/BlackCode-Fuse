// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__float;

struct Converter__float__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__float*, float);
    float(*__fp_Out)(Converter__float*, ::app::Uno::Float4);
};

Converter__float__uType* Converter__float__typeof();

void Converter__float___ObjInit(Converter__float* __this);

struct Converter__float : ::uObject
{
    void _ObjInit() { Converter__float___ObjInit(this); }
    ::app::Uno::Float4 In(float value);
    float Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__float::In(float value) { return (((Converter__float__uType*)this->__obj_type)->__fp_In)(this, value); }
inline float Converter__float::Out(::app::Uno::Float4 value) { return (((Converter__float__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
