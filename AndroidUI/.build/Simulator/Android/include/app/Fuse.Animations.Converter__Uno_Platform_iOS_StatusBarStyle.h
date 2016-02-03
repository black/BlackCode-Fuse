// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Uno_Platform_iOS_StatusBarStyle;

struct Converter__Uno_Platform_iOS_StatusBarStyle__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Uno_Platform_iOS_StatusBarStyle*, int);
    int(*__fp_Out)(Converter__Uno_Platform_iOS_StatusBarStyle*, ::app::Uno::Float4);
};

Converter__Uno_Platform_iOS_StatusBarStyle__uType* Converter__Uno_Platform_iOS_StatusBarStyle__typeof();

struct Converter__Uno_Platform_iOS_StatusBarStyle : ::uObject
{
    ::app::Uno::Float4 In(int value);
    int Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Uno_Platform_iOS_StatusBarStyle::In(int value) { return (((Converter__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_In)(this, value); }
inline int Converter__Uno_Platform_iOS_StatusBarStyle::Out(::app::Uno::Float4 value) { return (((Converter__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
