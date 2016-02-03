// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__INT_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__INT_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__int;

struct ValueChangedArgs__int__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__int__uType* ValueChangedArgs__int__typeof();

void ValueChangedArgs__int___ObjInit_1(ValueChangedArgs__int* __this, int value, ::uObject* origin);
::uObject* ValueChangedArgs__int__get_Origin(ValueChangedArgs__int* __this);
int ValueChangedArgs__int__get_Value(ValueChangedArgs__int* __this);
ValueChangedArgs__int* ValueChangedArgs__int__New_2(::uStatic* __this, int value, ::uObject* origin);
void ValueChangedArgs__int__set_Origin(ValueChangedArgs__int* __this, ::uObject* value);
void ValueChangedArgs__int__set_Value(ValueChangedArgs__int* __this, int value);

struct ValueChangedArgs__int : ::app::Uno::EventArgs
{
    int _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(int value, ::uObject* origin) { ValueChangedArgs__int___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__int__get_Origin(this); }
    int Value() { return ValueChangedArgs__int__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__int__set_Origin(this, value); }
    void Value(int value) { ValueChangedArgs__int__set_Value(this, value); }
};

}}}


#endif
