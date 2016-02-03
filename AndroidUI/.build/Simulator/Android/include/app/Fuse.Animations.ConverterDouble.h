// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER_DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER_DOUBLE_H__

#include <app/Fuse.Animations.Converter__double.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ConverterDouble;

extern ::uStaticStrong< ConverterDouble*> ConverterDouble__Singleton;

struct ConverterDouble__uType : ::app::Fuse::Animations::Converter__double__uType
{
};

ConverterDouble__uType* ConverterDouble__typeof();

void ConverterDouble___ObjInit_1(ConverterDouble* __this);
void ConverterDouble___TypeInit(::uStatic* __this);
::app::Uno::Float4 ConverterDouble__In(ConverterDouble* __this, double value);
ConverterDouble* ConverterDouble__New_1(::uStatic* __this);
double ConverterDouble__Out(ConverterDouble* __this, ::app::Uno::Float4 value);

struct ConverterDouble : ::app::Fuse::Animations::Converter__double
{
    void _ObjInit_1() { ConverterDouble___ObjInit_1(this); }
};

}}}


#endif
