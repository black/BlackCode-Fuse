// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__INT4_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__INT4_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Int4.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__int4;

struct ValueChangedArgs__int4__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__int4__uType* ValueChangedArgs__int4__typeof();

void ValueChangedArgs__int4___ObjInit_1(ValueChangedArgs__int4* __this, ::app::Uno::Int4 value, ::uObject* origin);
::uObject* ValueChangedArgs__int4__get_Origin(ValueChangedArgs__int4* __this);
::app::Uno::Int4 ValueChangedArgs__int4__get_Value(ValueChangedArgs__int4* __this);
ValueChangedArgs__int4* ValueChangedArgs__int4__New_2(::uStatic* __this, ::app::Uno::Int4 value, ::uObject* origin);
void ValueChangedArgs__int4__set_Origin(ValueChangedArgs__int4* __this, ::uObject* value);
void ValueChangedArgs__int4__set_Value(ValueChangedArgs__int4* __this, ::app::Uno::Int4 value);

struct ValueChangedArgs__int4 : ::app::Uno::EventArgs
{
    ::app::Uno::Int4 _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Uno::Int4 value, ::uObject* origin) { ValueChangedArgs__int4___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__int4__get_Origin(this); }
    ::app::Uno::Int4 Value() { return ValueChangedArgs__int4__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__int4__set_Origin(this, value); }
    void Value(::app::Uno::Int4 value) { ValueChangedArgs__int4__set_Value(this, value); }
};

}}}


#endif
