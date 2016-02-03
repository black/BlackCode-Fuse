// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__LONG_H__
#define __APP_UNO_U_X_PROPERTY__LONG_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__long;

struct Property__long__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__long*, ::uDelegate*);
    ::uLong(*__fp_OnGet)(Property__long*);
    void(*__fp_OnRemoveListener)(Property__long*, ::uDelegate*);
    void(*__fp_OnSet)(Property__long*, ::uLong, ::uObject*);
};

Property__long__uType* Property__long__typeof();

void Property__long___ObjInit(Property__long* __this);
void Property__long__add_ValueChanged(Property__long* __this, ::uDelegate* value);
::uLong Property__long__Get(Property__long* __this);
::uLong Property__long__GetRestState(Property__long* __this);
void Property__long__OnAddListener(Property__long* __this, ::uDelegate* listener);
::uLong Property__long__OnGet(Property__long* __this);
void Property__long__OnRemoveListener(Property__long* __this, ::uDelegate* listener);
void Property__long__OnSet(Property__long* __this, ::uLong value, ::uObject* origin);
void Property__long__remove_ValueChanged(Property__long* __this, ::uDelegate* value);
void Property__long__RetainRestState(Property__long* __this);
void Property__long__Set(Property__long* __this, ::uLong value, ::uObject* origin);
void Property__long__SetRestState(Property__long* __this, ::uLong value, ::uObject* origin);

struct Property__long : ::uObject
{
    bool _hasRestState;
    ::uLong _restState;

    void _ObjInit() { Property__long___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__long__add_ValueChanged(this, value); }
    ::uLong Get() { return Property__long__Get(this); }
    ::uLong GetRestState() { return Property__long__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__long__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::uLong OnGet() { return (((Property__long__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__long__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::uLong value, ::uObject* origin) { (((Property__long__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__long__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__long__RetainRestState(this); }
    void Set(::uLong value, ::uObject* origin) { Property__long__Set(this, value, origin); }
    void SetRestState(::uLong value, ::uObject* origin) { Property__long__SetRestState(this, value, origin); }
};

}}}


#endif
