// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__CHAR_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__CHAR_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__char;

struct ValueChangedArgs__char__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__char__uType* ValueChangedArgs__char__typeof();

void ValueChangedArgs__char___ObjInit_1(ValueChangedArgs__char* __this, ::uChar value, ::uObject* origin);
::uObject* ValueChangedArgs__char__get_Origin(ValueChangedArgs__char* __this);
::uChar ValueChangedArgs__char__get_Value(ValueChangedArgs__char* __this);
ValueChangedArgs__char* ValueChangedArgs__char__New_2(::uStatic* __this, ::uChar value, ::uObject* origin);
void ValueChangedArgs__char__set_Origin(ValueChangedArgs__char* __this, ::uObject* value);
void ValueChangedArgs__char__set_Value(ValueChangedArgs__char* __this, ::uChar value);

struct ValueChangedArgs__char : ::app::Uno::EventArgs
{
    ::uChar _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::uChar value, ::uObject* origin) { ValueChangedArgs__char___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__char__get_Origin(this); }
    ::uChar Value() { return ValueChangedArgs__char__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__char__set_Origin(this, value); }
    void Value(::uChar value) { ValueChangedArgs__char__set_Value(this, value); }
};

}}}


#endif
