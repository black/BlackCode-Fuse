// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__OBJECT_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__OBJECT_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__object;

struct ValueChangedArgs__object__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__object__uType* ValueChangedArgs__object__typeof();

void ValueChangedArgs__object___ObjInit_1(ValueChangedArgs__object* __this, ::uObject* value, ::uObject* origin);
::uObject* ValueChangedArgs__object__get_Origin(ValueChangedArgs__object* __this);
::uObject* ValueChangedArgs__object__get_Value(ValueChangedArgs__object* __this);
ValueChangedArgs__object* ValueChangedArgs__object__New_2(::uStatic* __this, ::uObject* value, ::uObject* origin);
void ValueChangedArgs__object__set_Origin(ValueChangedArgs__object* __this, ::uObject* value);
void ValueChangedArgs__object__set_Value(ValueChangedArgs__object* __this, ::uObject* value);

struct ValueChangedArgs__object : ::app::Uno::EventArgs
{
    ::uStrong< ::uObject*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::uObject* value, ::uObject* origin) { ValueChangedArgs__object___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__object__get_Origin(this); }
    ::uObject* Value() { return ValueChangedArgs__object__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__object__set_Origin(this, value); }
    void Value(::uObject* value) { ValueChangedArgs__object__set_Value(this, value); }
};

}}}


#endif
