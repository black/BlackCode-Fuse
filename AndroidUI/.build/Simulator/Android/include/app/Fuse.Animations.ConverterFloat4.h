// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER_FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER_FLOAT4_H__

#include <app/Fuse.Animations.Converter__float4.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ConverterFloat4;

extern ::uStaticStrong< ConverterFloat4*> ConverterFloat4__Singleton;

struct ConverterFloat4__uType : ::app::Fuse::Animations::Converter__float4__uType
{
};

ConverterFloat4__uType* ConverterFloat4__typeof();

void ConverterFloat4___ObjInit_1(ConverterFloat4* __this);
void ConverterFloat4___TypeInit(::uStatic* __this);
::app::Uno::Float4 ConverterFloat4__In(ConverterFloat4* __this, ::app::Uno::Float4 value);
ConverterFloat4* ConverterFloat4__New_1(::uStatic* __this);
::app::Uno::Float4 ConverterFloat4__Out(ConverterFloat4* __this, ::app::Uno::Float4 value);

struct ConverterFloat4 : ::app::Fuse::Animations::Converter__float4
{
    void _ObjInit_1() { ConverterFloat4___ObjInit_1(this); }
};

}}}


#endif
