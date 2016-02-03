// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FLOAT_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FLOAT_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__float;

struct ValueChangedArgs__float__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__float__uType* ValueChangedArgs__float__typeof();

void ValueChangedArgs__float___ObjInit_1(ValueChangedArgs__float* __this, float value, ::uObject* origin);
::uObject* ValueChangedArgs__float__get_Origin(ValueChangedArgs__float* __this);
float ValueChangedArgs__float__get_Value(ValueChangedArgs__float* __this);
ValueChangedArgs__float* ValueChangedArgs__float__New_2(::uStatic* __this, float value, ::uObject* origin);
void ValueChangedArgs__float__set_Origin(ValueChangedArgs__float* __this, ::uObject* value);
void ValueChangedArgs__float__set_Value(ValueChangedArgs__float* __this, float value);

struct ValueChangedArgs__float : ::app::Uno::EventArgs
{
    float _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(float value, ::uObject* origin) { ValueChangedArgs__float___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__float__get_Origin(this); }
    float Value() { return ValueChangedArgs__float__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__float__set_Origin(this, value); }
    void Value(float value) { ValueChangedArgs__float__set_Value(this, value); }
};

}}}


#endif
