// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FLOAT2_H__
#define __APP_UNO_U_X_PROPERTY__FLOAT2_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__float2;

struct Property__float2__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__float2*, ::uDelegate*);
    ::app::Uno::Float2(*__fp_OnGet)(Property__float2*);
    void(*__fp_OnRemoveListener)(Property__float2*, ::uDelegate*);
    void(*__fp_OnSet)(Property__float2*, ::app::Uno::Float2, ::uObject*);
};

Property__float2__uType* Property__float2__typeof();

void Property__float2___ObjInit(Property__float2* __this);
void Property__float2__add_ValueChanged(Property__float2* __this, ::uDelegate* value);
::app::Uno::Float2 Property__float2__Get(Property__float2* __this);
::app::Uno::Float2 Property__float2__GetRestState(Property__float2* __this);
void Property__float2__OnAddListener(Property__float2* __this, ::uDelegate* listener);
::app::Uno::Float2 Property__float2__OnGet(Property__float2* __this);
void Property__float2__OnRemoveListener(Property__float2* __this, ::uDelegate* listener);
void Property__float2__OnSet(Property__float2* __this, ::app::Uno::Float2 value, ::uObject* origin);
void Property__float2__remove_ValueChanged(Property__float2* __this, ::uDelegate* value);
void Property__float2__RetainRestState(Property__float2* __this);
void Property__float2__Set(Property__float2* __this, ::app::Uno::Float2 value, ::uObject* origin);
void Property__float2__SetRestState(Property__float2* __this, ::app::Uno::Float2 value, ::uObject* origin);

struct Property__float2 : ::uObject
{
    bool _hasRestState;
    ::app::Uno::Float2 _restState;

    void _ObjInit() { Property__float2___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__float2__add_ValueChanged(this, value); }
    ::app::Uno::Float2 Get() { return Property__float2__Get(this); }
    ::app::Uno::Float2 GetRestState() { return Property__float2__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__float2__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Uno::Float2 OnGet() { return (((Property__float2__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__float2__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Uno::Float2 value, ::uObject* origin) { (((Property__float2__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__float2__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__float2__RetainRestState(this); }
    void Set(::app::Uno::Float2 value, ::uObject* origin) { Property__float2__Set(this, value, origin); }
    void SetRestState(::app::Uno::Float2 value, ::uObject* origin) { Property__float2__SetRestState(this, value, origin); }
};

}}}


#endif
