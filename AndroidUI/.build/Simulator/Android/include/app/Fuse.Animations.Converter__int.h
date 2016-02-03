// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__INT_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__int;

struct Converter__int__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__int*, int);
    int(*__fp_Out)(Converter__int*, ::app::Uno::Float4);
};

Converter__int__uType* Converter__int__typeof();

struct Converter__int : ::uObject
{
    ::app::Uno::Float4 In(int value);
    int Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__int::In(int value) { return (((Converter__int__uType*)this->__obj_type)->__fp_In)(this, value); }
inline int Converter__int::Out(::app::Uno::Float4 value) { return (((Converter__int__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
