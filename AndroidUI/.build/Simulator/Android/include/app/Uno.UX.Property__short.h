// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__SHORT_H__
#define __APP_UNO_U_X_PROPERTY__SHORT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__short;

struct Property__short__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__short*, ::uDelegate*);
    ::uShort(*__fp_OnGet)(Property__short*);
    void(*__fp_OnRemoveListener)(Property__short*, ::uDelegate*);
    void(*__fp_OnSet)(Property__short*, ::uShort, ::uObject*);
};

Property__short__uType* Property__short__typeof();

void Property__short___ObjInit(Property__short* __this);
void Property__short__add_ValueChanged(Property__short* __this, ::uDelegate* value);
::uShort Property__short__Get(Property__short* __this);
::uShort Property__short__GetRestState(Property__short* __this);
void Property__short__OnAddListener(Property__short* __this, ::uDelegate* listener);
::uShort Property__short__OnGet(Property__short* __this);
void Property__short__OnRemoveListener(Property__short* __this, ::uDelegate* listener);
void Property__short__OnSet(Property__short* __this, ::uShort value, ::uObject* origin);
void Property__short__remove_ValueChanged(Property__short* __this, ::uDelegate* value);
void Property__short__RetainRestState(Property__short* __this);
void Property__short__Set(Property__short* __this, ::uShort value, ::uObject* origin);
void Property__short__SetRestState(Property__short* __this, ::uShort value, ::uObject* origin);

struct Property__short : ::uObject
{
    bool _hasRestState;
    ::uShort _restState;

    void _ObjInit() { Property__short___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__short__add_ValueChanged(this, value); }
    ::uShort Get() { return Property__short__Get(this); }
    ::uShort GetRestState() { return Property__short__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__short__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::uShort OnGet() { return (((Property__short__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__short__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::uShort value, ::uObject* origin) { (((Property__short__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__short__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__short__RetainRestState(this); }
    void Set(::uShort value, ::uObject* origin) { Property__short__Set(this, value, origin); }
    void SetRestState(::uShort value, ::uObject* origin) { Property__short__SetRestState(this, value, origin); }
};

}}}


#endif
