// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__BOOL_H__
#define __APP_UNO_U_X_PROPERTY__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__bool;

struct Property__bool__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__bool*, ::uDelegate*);
    bool(*__fp_OnGet)(Property__bool*);
    void(*__fp_OnRemoveListener)(Property__bool*, ::uDelegate*);
    void(*__fp_OnSet)(Property__bool*, bool, ::uObject*);
};

Property__bool__uType* Property__bool__typeof();

void Property__bool___ObjInit(Property__bool* __this);
void Property__bool__add_ValueChanged(Property__bool* __this, ::uDelegate* value);
bool Property__bool__Get(Property__bool* __this);
bool Property__bool__GetRestState(Property__bool* __this);
void Property__bool__OnAddListener(Property__bool* __this, ::uDelegate* listener);
bool Property__bool__OnGet(Property__bool* __this);
void Property__bool__OnRemoveListener(Property__bool* __this, ::uDelegate* listener);
void Property__bool__OnSet(Property__bool* __this, bool value, ::uObject* origin);
void Property__bool__remove_ValueChanged(Property__bool* __this, ::uDelegate* value);
void Property__bool__RetainRestState(Property__bool* __this);
void Property__bool__Set(Property__bool* __this, bool value, ::uObject* origin);
void Property__bool__SetRestState(Property__bool* __this, bool value, ::uObject* origin);

struct Property__bool : ::uObject
{
    bool _hasRestState;
    bool _restState;

    void _ObjInit() { Property__bool___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__bool__add_ValueChanged(this, value); }
    bool Get() { return Property__bool__Get(this); }
    bool GetRestState() { return Property__bool__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__bool__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    bool OnGet() { return (((Property__bool__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__bool__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(bool value, ::uObject* origin) { (((Property__bool__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__bool__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__bool__RetainRestState(this); }
    void Set(bool value, ::uObject* origin) { Property__bool__Set(this, value, origin); }
    void SetRestState(bool value, ::uObject* origin) { Property__bool__SetRestState(this, value, origin); }
};

}}}


#endif
