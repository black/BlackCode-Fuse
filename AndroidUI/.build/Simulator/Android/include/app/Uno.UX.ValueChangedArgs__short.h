// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__SHORT_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__SHORT_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__short;

struct ValueChangedArgs__short__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__short__uType* ValueChangedArgs__short__typeof();

void ValueChangedArgs__short___ObjInit_1(ValueChangedArgs__short* __this, ::uShort value, ::uObject* origin);
::uObject* ValueChangedArgs__short__get_Origin(ValueChangedArgs__short* __this);
::uShort ValueChangedArgs__short__get_Value(ValueChangedArgs__short* __this);
ValueChangedArgs__short* ValueChangedArgs__short__New_2(::uStatic* __this, ::uShort value, ::uObject* origin);
void ValueChangedArgs__short__set_Origin(ValueChangedArgs__short* __this, ::uObject* value);
void ValueChangedArgs__short__set_Value(ValueChangedArgs__short* __this, ::uShort value);

struct ValueChangedArgs__short : ::app::Uno::EventArgs
{
    ::uShort _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::uShort value, ::uObject* origin) { ValueChangedArgs__short___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__short__get_Origin(this); }
    ::uShort Value() { return ValueChangedArgs__short__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__short__set_Origin(this, value); }
    void Value(::uShort value) { ValueChangedArgs__short__set_Value(this, value); }
};

}}}


#endif
