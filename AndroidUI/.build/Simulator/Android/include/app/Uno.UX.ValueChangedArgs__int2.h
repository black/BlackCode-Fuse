// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__INT2_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__INT2_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Int2.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__int2;

struct ValueChangedArgs__int2__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__int2__uType* ValueChangedArgs__int2__typeof();

void ValueChangedArgs__int2___ObjInit_1(ValueChangedArgs__int2* __this, ::app::Uno::Int2 value, ::uObject* origin);
::uObject* ValueChangedArgs__int2__get_Origin(ValueChangedArgs__int2* __this);
::app::Uno::Int2 ValueChangedArgs__int2__get_Value(ValueChangedArgs__int2* __this);
ValueChangedArgs__int2* ValueChangedArgs__int2__New_2(::uStatic* __this, ::app::Uno::Int2 value, ::uObject* origin);
void ValueChangedArgs__int2__set_Origin(ValueChangedArgs__int2* __this, ::uObject* value);
void ValueChangedArgs__int2__set_Value(ValueChangedArgs__int2* __this, ::app::Uno::Int2 value);

struct ValueChangedArgs__int2 : ::app::Uno::EventArgs
{
    ::app::Uno::Int2 _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Uno::Int2 value, ::uObject* origin) { ValueChangedArgs__int2___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__int2__get_Origin(this); }
    ::app::Uno::Int2 Value() { return ValueChangedArgs__int2__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__int2__set_Origin(this, value); }
    void Value(::app::Uno::Int2 value) { ValueChangedArgs__int2__set_Value(this, value); }
};

}}}


#endif
