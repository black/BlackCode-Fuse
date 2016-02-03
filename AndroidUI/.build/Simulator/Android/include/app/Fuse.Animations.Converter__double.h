// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__DOUBLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__double;

struct Converter__double__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__double*, double);
    double(*__fp_Out)(Converter__double*, ::app::Uno::Float4);
};

Converter__double__uType* Converter__double__typeof();

void Converter__double___ObjInit(Converter__double* __this);

struct Converter__double : ::uObject
{
    void _ObjInit() { Converter__double___ObjInit(this); }
    ::app::Uno::Float4 In(double value);
    double Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__double::In(double value) { return (((Converter__double__uType*)this->__obj_type)->__fp_In)(this, value); }
inline double Converter__double::Out(::app::Uno::Float4 value) { return (((Converter__double__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
