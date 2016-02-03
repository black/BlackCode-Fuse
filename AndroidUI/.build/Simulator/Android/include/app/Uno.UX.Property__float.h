// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FLOAT_H__
#define __APP_UNO_U_X_PROPERTY__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__float;

struct Property__float__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__float*, ::uDelegate*);
    float(*__fp_OnGet)(Property__float*);
    void(*__fp_OnRemoveListener)(Property__float*, ::uDelegate*);
    void(*__fp_OnSet)(Property__float*, float, ::uObject*);
};

Property__float__uType* Property__float__typeof();

void Property__float___ObjInit(Property__float* __this);
void Property__float__add_ValueChanged(Property__float* __this, ::uDelegate* value);
float Property__float__Get(Property__float* __this);
float Property__float__GetRestState(Property__float* __this);
void Property__float__OnAddListener(Property__float* __this, ::uDelegate* listener);
float Property__float__OnGet(Property__float* __this);
void Property__float__OnRemoveListener(Property__float* __this, ::uDelegate* listener);
void Property__float__OnSet(Property__float* __this, float value, ::uObject* origin);
void Property__float__remove_ValueChanged(Property__float* __this, ::uDelegate* value);
void Property__float__RetainRestState(Property__float* __this);
void Property__float__Set(Property__float* __this, float value, ::uObject* origin);
void Property__float__SetRestState(Property__float* __this, float value, ::uObject* origin);

struct Property__float : ::uObject
{
    bool _hasRestState;
    float _restState;

    void _ObjInit() { Property__float___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__float__add_ValueChanged(this, value); }
    float Get() { return Property__float__Get(this); }
    float GetRestState() { return Property__float__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__float__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    float OnGet() { return (((Property__float__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__float__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(float value, ::uObject* origin) { (((Property__float__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__float__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__float__RetainRestState(this); }
    void Set(float value, ::uObject* origin) { Property__float__Set(this, value, origin); }
    void SetRestState(float value, ::uObject* origin) { Property__float__SetRestState(this, value, origin); }
};

}}}


#endif
