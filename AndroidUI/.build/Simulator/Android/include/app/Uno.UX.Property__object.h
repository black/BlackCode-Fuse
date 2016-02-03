// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__OBJECT_H__
#define __APP_UNO_U_X_PROPERTY__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__object;

struct Property__object__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__object*, ::uDelegate*);
    ::uObject*(*__fp_OnGet)(Property__object*);
    void(*__fp_OnRemoveListener)(Property__object*, ::uDelegate*);
    void(*__fp_OnSet)(Property__object*, ::uObject*, ::uObject*);
};

Property__object__uType* Property__object__typeof();

void Property__object___ObjInit(Property__object* __this);
void Property__object__add_ValueChanged(Property__object* __this, ::uDelegate* value);
::uObject* Property__object__Get(Property__object* __this);
::uObject* Property__object__GetRestState(Property__object* __this);
void Property__object__OnAddListener(Property__object* __this, ::uDelegate* listener);
::uObject* Property__object__OnGet(Property__object* __this);
void Property__object__OnRemoveListener(Property__object* __this, ::uDelegate* listener);
void Property__object__OnSet(Property__object* __this, ::uObject* value, ::uObject* origin);
void Property__object__remove_ValueChanged(Property__object* __this, ::uDelegate* value);
void Property__object__RetainRestState(Property__object* __this);
void Property__object__Set(Property__object* __this, ::uObject* value, ::uObject* origin);
void Property__object__SetRestState(Property__object* __this, ::uObject* value, ::uObject* origin);

struct Property__object : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::uObject*> _restState;

    void _ObjInit() { Property__object___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__object__add_ValueChanged(this, value); }
    ::uObject* Get() { return Property__object__Get(this); }
    ::uObject* GetRestState() { return Property__object__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__object__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::uObject* OnGet() { return (((Property__object__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__object__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::uObject* value, ::uObject* origin) { (((Property__object__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__object__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__object__RetainRestState(this); }
    void Set(::uObject* value, ::uObject* origin) { Property__object__Set(this, value, origin); }
    void SetRestState(::uObject* value, ::uObject* origin) { Property__object__SetRestState(this, value, origin); }
};

}}}


#endif
