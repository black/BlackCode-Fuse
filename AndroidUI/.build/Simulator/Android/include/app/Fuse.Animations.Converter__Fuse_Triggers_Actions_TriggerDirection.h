// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_TRIGGERS_ACTIONS_TRIGGER_DIRECTION_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__FUSE_TRIGGERS_ACTIONS_TRIGGER_DIRECTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Fuse_Triggers_Actions_TriggerDirection;

struct Converter__Fuse_Triggers_Actions_TriggerDirection__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Fuse_Triggers_Actions_TriggerDirection*, int);
    int(*__fp_Out)(Converter__Fuse_Triggers_Actions_TriggerDirection*, ::app::Uno::Float4);
};

Converter__Fuse_Triggers_Actions_TriggerDirection__uType* Converter__Fuse_Triggers_Actions_TriggerDirection__typeof();

struct Converter__Fuse_Triggers_Actions_TriggerDirection : ::uObject
{
    ::app::Uno::Float4 In(int value);
    int Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Fuse_Triggers_Actions_TriggerDirection::In(int value) { return (((Converter__Fuse_Triggers_Actions_TriggerDirection__uType*)this->__obj_type)->__fp_In)(this, value); }
inline int Converter__Fuse_Triggers_Actions_TriggerDirection::Out(::app::Uno::Float4 value) { return (((Converter__Fuse_Triggers_Actions_TriggerDirection__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
