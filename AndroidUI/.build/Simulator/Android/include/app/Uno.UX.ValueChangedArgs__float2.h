// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FLOAT2_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FLOAT2_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Float2.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__float2;

struct ValueChangedArgs__float2__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__float2__uType* ValueChangedArgs__float2__typeof();

void ValueChangedArgs__float2___ObjInit_1(ValueChangedArgs__float2* __this, ::app::Uno::Float2 value, ::uObject* origin);
::uObject* ValueChangedArgs__float2__get_Origin(ValueChangedArgs__float2* __this);
::app::Uno::Float2 ValueChangedArgs__float2__get_Value(ValueChangedArgs__float2* __this);
ValueChangedArgs__float2* ValueChangedArgs__float2__New_2(::uStatic* __this, ::app::Uno::Float2 value, ::uObject* origin);
void ValueChangedArgs__float2__set_Origin(ValueChangedArgs__float2* __this, ::uObject* value);
void ValueChangedArgs__float2__set_Value(ValueChangedArgs__float2* __this, ::app::Uno::Float2 value);

struct ValueChangedArgs__float2 : ::app::Uno::EventArgs
{
    ::app::Uno::Float2 _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Uno::Float2 value, ::uObject* origin) { ValueChangedArgs__float2___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__float2__get_Origin(this); }
    ::app::Uno::Float2 Value() { return ValueChangedArgs__float2__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__float2__set_Origin(this, value); }
    void Value(::app::Uno::Float2 value) { ValueChangedArgs__float2__set_Value(this, value); }
};

}}}


#endif
