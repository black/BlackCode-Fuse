// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Elements_Element;

struct ValueChangedArgs__Fuse_Elements_Element__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Elements_Element__uType* ValueChangedArgs__Fuse_Elements_Element__typeof();

void ValueChangedArgs__Fuse_Elements_Element___ObjInit_1(ValueChangedArgs__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Elements_Element__get_Origin(ValueChangedArgs__Fuse_Elements_Element* __this);
::app::Fuse::Elements::Element* ValueChangedArgs__Fuse_Elements_Element__get_Value(ValueChangedArgs__Fuse_Elements_Element* __this);
ValueChangedArgs__Fuse_Elements_Element* ValueChangedArgs__Fuse_Elements_Element__New_2(::uStatic* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Elements_Element__set_Origin(ValueChangedArgs__Fuse_Elements_Element* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Elements_Element__set_Value(ValueChangedArgs__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value);

struct ValueChangedArgs__Fuse_Elements_Element : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Elements::Element*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Elements::Element* value, ::uObject* origin) { ValueChangedArgs__Fuse_Elements_Element___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Elements_Element__get_Origin(this); }
    ::app::Fuse::Elements::Element* Value() { return ValueChangedArgs__Fuse_Elements_Element__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Elements_Element__set_Origin(this, value); }
    void Value(::app::Fuse::Elements::Element* value) { ValueChangedArgs__Fuse_Elements_Element__set_Value(this, value); }
};

}}}


#endif
