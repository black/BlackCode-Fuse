// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__UNO_EVENT_ARGS_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__UNO_EVENT_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Uno_EventArgs;

struct Converter__Uno_EventArgs__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Uno_EventArgs*, ::app::Uno::EventArgs*);
    ::app::Uno::EventArgs*(*__fp_Out)(Converter__Uno_EventArgs*, ::app::Uno::Float4);
};

Converter__Uno_EventArgs__uType* Converter__Uno_EventArgs__typeof();

struct Converter__Uno_EventArgs : ::uObject
{
    ::app::Uno::Float4 In(::app::Uno::EventArgs* value);
    ::app::Uno::EventArgs* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Uno_EventArgs::In(::app::Uno::EventArgs* value) { return (((Converter__Uno_EventArgs__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Uno::EventArgs* Converter__Uno_EventArgs::Out(::app::Uno::Float4 value) { return (((Converter__Uno_EventArgs__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
