// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_ELEMENTS_TEXT_ALIGNMENT_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_ELEMENTS_TEXT_ALIGNMENT_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Elements_TextAlignment;

struct ValueChangedArgs__Fuse_Elements_TextAlignment__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Elements_TextAlignment__uType* ValueChangedArgs__Fuse_Elements_TextAlignment__typeof();

void ValueChangedArgs__Fuse_Elements_TextAlignment___ObjInit_1(ValueChangedArgs__Fuse_Elements_TextAlignment* __this, int value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Elements_TextAlignment__get_Origin(ValueChangedArgs__Fuse_Elements_TextAlignment* __this);
int ValueChangedArgs__Fuse_Elements_TextAlignment__get_Value(ValueChangedArgs__Fuse_Elements_TextAlignment* __this);
ValueChangedArgs__Fuse_Elements_TextAlignment* ValueChangedArgs__Fuse_Elements_TextAlignment__New_2(::uStatic* __this, int value, ::uObject* origin);
void ValueChangedArgs__Fuse_Elements_TextAlignment__set_Origin(ValueChangedArgs__Fuse_Elements_TextAlignment* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Elements_TextAlignment__set_Value(ValueChangedArgs__Fuse_Elements_TextAlignment* __this, int value);

struct ValueChangedArgs__Fuse_Elements_TextAlignment : ::app::Uno::EventArgs
{
    int _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(int value, ::uObject* origin) { ValueChangedArgs__Fuse_Elements_TextAlignment___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Elements_TextAlignment__get_Origin(this); }
    int Value() { return ValueChangedArgs__Fuse_Elements_TextAlignment__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Elements_TextAlignment__set_Origin(this, value); }
    void Value(int value) { ValueChangedArgs__Fuse_Elements_TextAlignment__set_Value(this, value); }
};

}}}


#endif
