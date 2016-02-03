// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle;

struct ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__uType* ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__typeof();

void ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin);
::uObject* ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__get_Origin(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this);
int ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__get_Value(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this);
ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__New_2(::uStatic* __this, int value, ::uObject* origin);
void ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__set_Origin(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* value);
void ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__set_Value(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this, int value);

struct ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle : ::app::Uno::EventArgs
{
    int _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(int value, ::uObject* origin) { ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__get_Origin(this); }
    int Value() { return ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__set_Origin(this, value); }
    void Value(int value) { ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__set_Value(this, value); }
};

}}}


#endif
