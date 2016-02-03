// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__STRING_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__STRING_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__string;

struct ValueChangedArgs__string__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__string__uType* ValueChangedArgs__string__typeof();

void ValueChangedArgs__string___ObjInit_1(ValueChangedArgs__string* __this, ::uString* value, ::uObject* origin);
::uObject* ValueChangedArgs__string__get_Origin(ValueChangedArgs__string* __this);
::uString* ValueChangedArgs__string__get_Value(ValueChangedArgs__string* __this);
ValueChangedArgs__string* ValueChangedArgs__string__New_2(::uStatic* __this, ::uString* value, ::uObject* origin);
void ValueChangedArgs__string__set_Origin(ValueChangedArgs__string* __this, ::uObject* value);
void ValueChangedArgs__string__set_Value(ValueChangedArgs__string* __this, ::uString* value);

struct ValueChangedArgs__string : ::app::Uno::EventArgs
{
    ::uStrong< ::uString*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::uString* value, ::uObject* origin) { ValueChangedArgs__string___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__string__get_Origin(this); }
    ::uString* Value() { return ValueChangedArgs__string__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__string__set_Origin(this, value); }
    void Value(::uString* value) { ValueChangedArgs__string__set_Value(this, value); }
};

}}}


#endif
