// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Elements_Element;

struct Property__Fuse_Elements_Element__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Elements_Element*, ::uDelegate*);
    ::app::Fuse::Elements::Element*(*__fp_OnGet)(Property__Fuse_Elements_Element*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Elements_Element*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Elements_Element*, ::app::Fuse::Elements::Element*, ::uObject*);
};

Property__Fuse_Elements_Element__uType* Property__Fuse_Elements_Element__typeof();

void Property__Fuse_Elements_Element___ObjInit(Property__Fuse_Elements_Element* __this);
void Property__Fuse_Elements_Element__add_ValueChanged(Property__Fuse_Elements_Element* __this, ::uDelegate* value);
::app::Fuse::Elements::Element* Property__Fuse_Elements_Element__Get(Property__Fuse_Elements_Element* __this);
::app::Fuse::Elements::Element* Property__Fuse_Elements_Element__GetRestState(Property__Fuse_Elements_Element* __this);
void Property__Fuse_Elements_Element__OnAddListener(Property__Fuse_Elements_Element* __this, ::uDelegate* listener);
::app::Fuse::Elements::Element* Property__Fuse_Elements_Element__OnGet(Property__Fuse_Elements_Element* __this);
void Property__Fuse_Elements_Element__OnRemoveListener(Property__Fuse_Elements_Element* __this, ::uDelegate* listener);
void Property__Fuse_Elements_Element__OnSet(Property__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin);
void Property__Fuse_Elements_Element__remove_ValueChanged(Property__Fuse_Elements_Element* __this, ::uDelegate* value);
void Property__Fuse_Elements_Element__RetainRestState(Property__Fuse_Elements_Element* __this);
void Property__Fuse_Elements_Element__Set(Property__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin);
void Property__Fuse_Elements_Element__SetRestState(Property__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin);

struct Property__Fuse_Elements_Element : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Elements::Element*> _restState;

    void _ObjInit() { Property__Fuse_Elements_Element___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Elements_Element__add_ValueChanged(this, value); }
    ::app::Fuse::Elements::Element* Get() { return Property__Fuse_Elements_Element__Get(this); }
    ::app::Fuse::Elements::Element* GetRestState() { return Property__Fuse_Elements_Element__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Elements::Element* OnGet() { return (((Property__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Elements::Element* value, ::uObject* origin) { (((Property__Fuse_Elements_Element__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Elements_Element__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Elements_Element__RetainRestState(this); }
    void Set(::app::Fuse::Elements::Element* value, ::uObject* origin) { Property__Fuse_Elements_Element__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Elements::Element* value, ::uObject* origin) { Property__Fuse_Elements_Element__SetRestState(this, value, origin); }
};

}}}


#endif
