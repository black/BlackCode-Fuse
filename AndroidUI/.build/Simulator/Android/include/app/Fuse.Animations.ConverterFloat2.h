// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER_FLOAT2_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER_FLOAT2_H__

#include <app/Fuse.Animations.Converter__float2.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ConverterFloat2;

extern ::uStaticStrong< ConverterFloat2*> ConverterFloat2__Singleton;

struct ConverterFloat2__uType : ::app::Fuse::Animations::Converter__float2__uType
{
};

ConverterFloat2__uType* ConverterFloat2__typeof();

void ConverterFloat2___ObjInit_1(ConverterFloat2* __this);
void ConverterFloat2___TypeInit(::uStatic* __this);
::app::Uno::Float4 ConverterFloat2__In(ConverterFloat2* __this, ::app::Uno::Float2 value);
ConverterFloat2* ConverterFloat2__New_1(::uStatic* __this);
::app::Uno::Float2 ConverterFloat2__Out(ConverterFloat2* __this, ::app::Uno::Float4 value);

struct ConverterFloat2 : ::app::Fuse::Animations::Converter__float2
{
    void _ObjInit_1() { ConverterFloat2___ObjInit_1(this); }
};

}}}


#endif
