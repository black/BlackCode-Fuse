// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__UNO_EVENT_ARGS_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__UNO_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Uno_EventArgs;

struct ValueChangedArgs__Uno_EventArgs__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Uno_EventArgs__uType* ValueChangedArgs__Uno_EventArgs__typeof();

void ValueChangedArgs__Uno_EventArgs___ObjInit_1(ValueChangedArgs__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin);
::uObject* ValueChangedArgs__Uno_EventArgs__get_Origin(ValueChangedArgs__Uno_EventArgs* __this);
::app::Uno::EventArgs* ValueChangedArgs__Uno_EventArgs__get_Value(ValueChangedArgs__Uno_EventArgs* __this);
ValueChangedArgs__Uno_EventArgs* ValueChangedArgs__Uno_EventArgs__New_2(::uStatic* __this, ::app::Uno::EventArgs* value, ::uObject* origin);
void ValueChangedArgs__Uno_EventArgs__set_Origin(ValueChangedArgs__Uno_EventArgs* __this, ::uObject* value);
void ValueChangedArgs__Uno_EventArgs__set_Value(ValueChangedArgs__Uno_EventArgs* __this, ::app::Uno::EventArgs* value);

struct ValueChangedArgs__Uno_EventArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Uno::EventArgs*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Uno::EventArgs* value, ::uObject* origin) { ValueChangedArgs__Uno_EventArgs___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Uno_EventArgs__get_Origin(this); }
    ::app::Uno::EventArgs* Value() { return ValueChangedArgs__Uno_EventArgs__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Uno_EventArgs__set_Origin(this, value); }
    void Value(::app::Uno::EventArgs* value) { ValueChangedArgs__Uno_EventArgs__set_Value(this, value); }
};

}}}


#endif
