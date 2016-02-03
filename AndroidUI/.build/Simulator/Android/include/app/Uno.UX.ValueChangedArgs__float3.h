// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FLOAT3_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FLOAT3_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Float3.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__float3;

struct ValueChangedArgs__float3__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__float3__uType* ValueChangedArgs__float3__typeof();

void ValueChangedArgs__float3___ObjInit_1(ValueChangedArgs__float3* __this, ::app::Uno::Float3 value, ::uObject* origin);
::uObject* ValueChangedArgs__float3__get_Origin(ValueChangedArgs__float3* __this);
::app::Uno::Float3 ValueChangedArgs__float3__get_Value(ValueChangedArgs__float3* __this);
ValueChangedArgs__float3* ValueChangedArgs__float3__New_2(::uStatic* __this, ::app::Uno::Float3 value, ::uObject* origin);
void ValueChangedArgs__float3__set_Origin(ValueChangedArgs__float3* __this, ::uObject* value);
void ValueChangedArgs__float3__set_Value(ValueChangedArgs__float3* __this, ::app::Uno::Float3 value);

struct ValueChangedArgs__float3 : ::app::Uno::EventArgs
{
    ::app::Uno::Float3 _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Uno::Float3 value, ::uObject* origin) { ValueChangedArgs__float3___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__float3__get_Origin(this); }
    ::app::Uno::Float3 Value() { return ValueChangedArgs__float3__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__float3__set_Origin(this, value); }
    void Value(::app::Uno::Float3 value) { ValueChangedArgs__float3__set_Value(this, value); }
};

}}}


#endif
