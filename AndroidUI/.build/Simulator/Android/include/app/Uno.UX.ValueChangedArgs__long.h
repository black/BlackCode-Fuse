// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__LONG_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__LONG_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__long;

struct ValueChangedArgs__long__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__long__uType* ValueChangedArgs__long__typeof();

void ValueChangedArgs__long___ObjInit_1(ValueChangedArgs__long* __this, ::uLong value, ::uObject* origin);
::uObject* ValueChangedArgs__long__get_Origin(ValueChangedArgs__long* __this);
::uLong ValueChangedArgs__long__get_Value(ValueChangedArgs__long* __this);
ValueChangedArgs__long* ValueChangedArgs__long__New_2(::uStatic* __this, ::uLong value, ::uObject* origin);
void ValueChangedArgs__long__set_Origin(ValueChangedArgs__long* __this, ::uObject* value);
void ValueChangedArgs__long__set_Value(ValueChangedArgs__long* __this, ::uLong value);

struct ValueChangedArgs__long : ::app::Uno::EventArgs
{
    ::uLong _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::uLong value, ::uObject* origin) { ValueChangedArgs__long___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__long__get_Origin(this); }
    ::uLong Value() { return ValueChangedArgs__long__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__long__set_Origin(this, value); }
    void Value(::uLong value) { ValueChangedArgs__long__set_Value(this, value); }
};

}}}


#endif
