// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__STRING_H__
#define __APP_UNO_U_X_PROPERTY__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__string;

struct Property__string__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__string*, ::uDelegate*);
    ::uString*(*__fp_OnGet)(Property__string*);
    void(*__fp_OnRemoveListener)(Property__string*, ::uDelegate*);
    void(*__fp_OnSet)(Property__string*, ::uString*, ::uObject*);
};

Property__string__uType* Property__string__typeof();

void Property__string___ObjInit(Property__string* __this);
void Property__string__add_ValueChanged(Property__string* __this, ::uDelegate* value);
::uString* Property__string__Get(Property__string* __this);
::uString* Property__string__GetRestState(Property__string* __this);
void Property__string__OnAddListener(Property__string* __this, ::uDelegate* listener);
::uString* Property__string__OnGet(Property__string* __this);
void Property__string__OnRemoveListener(Property__string* __this, ::uDelegate* listener);
void Property__string__OnSet(Property__string* __this, ::uString* value, ::uObject* origin);
void Property__string__remove_ValueChanged(Property__string* __this, ::uDelegate* value);
void Property__string__RetainRestState(Property__string* __this);
void Property__string__Set(Property__string* __this, ::uString* value, ::uObject* origin);
void Property__string__SetRestState(Property__string* __this, ::uString* value, ::uObject* origin);

struct Property__string : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::uString*> _restState;

    void _ObjInit() { Property__string___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__string__add_ValueChanged(this, value); }
    ::uString* Get() { return Property__string__Get(this); }
    ::uString* GetRestState() { return Property__string__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__string__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::uString* OnGet() { return (((Property__string__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__string__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::uString* value, ::uObject* origin) { (((Property__string__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__string__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__string__RetainRestState(this); }
    void Set(::uString* value, ::uObject* origin) { Property__string__Set(this, value, origin); }
    void SetRestState(::uString* value, ::uObject* origin) { Property__string__SetRestState(this, value, origin); }
};

}}}


#endif
