// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__DOUBLE_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__DOUBLE_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__double;

struct ValueChangedArgs__double__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__double__uType* ValueChangedArgs__double__typeof();

void ValueChangedArgs__double___ObjInit_1(ValueChangedArgs__double* __this, double value, ::uObject* origin);
::uObject* ValueChangedArgs__double__get_Origin(ValueChangedArgs__double* __this);
double ValueChangedArgs__double__get_Value(ValueChangedArgs__double* __this);
ValueChangedArgs__double* ValueChangedArgs__double__New_2(::uStatic* __this, double value, ::uObject* origin);
void ValueChangedArgs__double__set_Origin(ValueChangedArgs__double* __this, ::uObject* value);
void ValueChangedArgs__double__set_Value(ValueChangedArgs__double* __this, double value);

struct ValueChangedArgs__double : ::app::Uno::EventArgs
{
    double _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(double value, ::uObject* origin) { ValueChangedArgs__double___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__double__get_Origin(this); }
    double Value() { return ValueChangedArgs__double__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__double__set_Origin(this, value); }
    void Value(double value) { ValueChangedArgs__double__set_Value(this, value); }
};

}}}


#endif
