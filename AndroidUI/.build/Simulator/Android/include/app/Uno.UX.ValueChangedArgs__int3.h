// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__INT3_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__INT3_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Int3.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__int3;

struct ValueChangedArgs__int3__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__int3__uType* ValueChangedArgs__int3__typeof();

void ValueChangedArgs__int3___ObjInit_1(ValueChangedArgs__int3* __this, ::app::Uno::Int3 value, ::uObject* origin);
::uObject* ValueChangedArgs__int3__get_Origin(ValueChangedArgs__int3* __this);
::app::Uno::Int3 ValueChangedArgs__int3__get_Value(ValueChangedArgs__int3* __this);
ValueChangedArgs__int3* ValueChangedArgs__int3__New_2(::uStatic* __this, ::app::Uno::Int3 value, ::uObject* origin);
void ValueChangedArgs__int3__set_Origin(ValueChangedArgs__int3* __this, ::uObject* value);
void ValueChangedArgs__int3__set_Value(ValueChangedArgs__int3* __this, ::app::Uno::Int3 value);

struct ValueChangedArgs__int3 : ::app::Uno::EventArgs
{
    ::app::Uno::Int3 _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Uno::Int3 value, ::uObject* origin) { ValueChangedArgs__int3___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__int3__get_Origin(this); }
    ::app::Uno::Int3 Value() { return ValueChangedArgs__int3__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__int3__set_Origin(this, value); }
    void Value(::app::Uno::Int3 value) { ValueChangedArgs__int3__set_Value(this, value); }
};

}}}


#endif
