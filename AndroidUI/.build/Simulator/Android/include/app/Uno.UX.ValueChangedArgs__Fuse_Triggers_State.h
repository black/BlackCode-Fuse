// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_TRIGGERS_STATE_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_TRIGGERS_STATE_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Triggers_State;

struct ValueChangedArgs__Fuse_Triggers_State__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Triggers_State__uType* ValueChangedArgs__Fuse_Triggers_State__typeof();

void ValueChangedArgs__Fuse_Triggers_State___ObjInit_1(ValueChangedArgs__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Triggers_State__get_Origin(ValueChangedArgs__Fuse_Triggers_State* __this);
::app::Fuse::Triggers::State* ValueChangedArgs__Fuse_Triggers_State__get_Value(ValueChangedArgs__Fuse_Triggers_State* __this);
ValueChangedArgs__Fuse_Triggers_State* ValueChangedArgs__Fuse_Triggers_State__New_2(::uStatic* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Triggers_State__set_Origin(ValueChangedArgs__Fuse_Triggers_State* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Triggers_State__set_Value(ValueChangedArgs__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);

struct ValueChangedArgs__Fuse_Triggers_State : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Triggers::State*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Triggers::State* value, ::uObject* origin) { ValueChangedArgs__Fuse_Triggers_State___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Triggers_State__get_Origin(this); }
    ::app::Fuse::Triggers::State* Value() { return ValueChangedArgs__Fuse_Triggers_State__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Triggers_State__set_Origin(this, value); }
    void Value(::app::Fuse::Triggers::State* value) { ValueChangedArgs__Fuse_Triggers_State__set_Value(this, value); }
};

}}}


#endif