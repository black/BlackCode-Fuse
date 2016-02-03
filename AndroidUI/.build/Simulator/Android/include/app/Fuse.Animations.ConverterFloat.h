// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER_FLOAT_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER_FLOAT_H__

#include <app/Fuse.Animations.Converter__float.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ConverterFloat;

extern ::uStaticStrong< ConverterFloat*> ConverterFloat__Singleton;

struct ConverterFloat__uType : ::app::Fuse::Animations::Converter__float__uType
{
};

ConverterFloat__uType* ConverterFloat__typeof();

void ConverterFloat___ObjInit_1(ConverterFloat* __this);
void ConverterFloat___TypeInit(::uStatic* __this);
::app::Uno::Float4 ConverterFloat__In(ConverterFloat* __this, float value);
ConverterFloat* ConverterFloat__New_1(::uStatic* __this);
float ConverterFloat__Out(ConverterFloat* __this, ::app::Uno::Float4 value);

struct ConverterFloat : ::app::Fuse::Animations::Converter__float
{
    void _ObjInit_1() { ConverterFloat___ObjInit_1(this); }
};

}}}


#endif
