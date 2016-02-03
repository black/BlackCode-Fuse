// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__BOOL_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__BOOL_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__bool;

struct ValueChangedArgs__bool__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__bool__uType* ValueChangedArgs__bool__typeof();

void ValueChangedArgs__bool___ObjInit_1(ValueChangedArgs__bool* __this, bool value, ::uObject* origin);
::uObject* ValueChangedArgs__bool__get_Origin(ValueChangedArgs__bool* __this);
bool ValueChangedArgs__bool__get_Value(ValueChangedArgs__bool* __this);
ValueChangedArgs__bool* ValueChangedArgs__bool__New_2(::uStatic* __this, bool value, ::uObject* origin);
void ValueChangedArgs__bool__set_Origin(ValueChangedArgs__bool* __this, ::uObject* value);
void ValueChangedArgs__bool__set_Value(ValueChangedArgs__bool* __this, bool value);

struct ValueChangedArgs__bool : ::app::Uno::EventArgs
{
    bool _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(bool value, ::uObject* origin) { ValueChangedArgs__bool___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__bool__get_Origin(this); }
    bool Value() { return ValueChangedArgs__bool__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__bool__set_Origin(this, value); }
    void Value(bool value) { ValueChangedArgs__bool__set_Value(this, value); }
};

}}}


#endif
