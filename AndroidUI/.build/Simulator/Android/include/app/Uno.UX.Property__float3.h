// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FLOAT3_H__
#define __APP_UNO_U_X_PROPERTY__FLOAT3_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__float3;

struct Property__float3__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__float3*, ::uDelegate*);
    ::app::Uno::Float3(*__fp_OnGet)(Property__float3*);
    void(*__fp_OnRemoveListener)(Property__float3*, ::uDelegate*);
    void(*__fp_OnSet)(Property__float3*, ::app::Uno::Float3, ::uObject*);
};

Property__float3__uType* Property__float3__typeof();

void Property__float3___ObjInit(Property__float3* __this);
void Property__float3__add_ValueChanged(Property__float3* __this, ::uDelegate* value);
::app::Uno::Float3 Property__float3__Get(Property__float3* __this);
::app::Uno::Float3 Property__float3__GetRestState(Property__float3* __this);
void Property__float3__OnAddListener(Property__float3* __this, ::uDelegate* listener);
::app::Uno::Float3 Property__float3__OnGet(Property__float3* __this);
void Property__float3__OnRemoveListener(Property__float3* __this, ::uDelegate* listener);
void Property__float3__OnSet(Property__float3* __this, ::app::Uno::Float3 value, ::uObject* origin);
void Property__float3__remove_ValueChanged(Property__float3* __this, ::uDelegate* value);
void Property__float3__RetainRestState(Property__float3* __this);
void Property__float3__Set(Property__float3* __this, ::app::Uno::Float3 value, ::uObject* origin);
void Property__float3__SetRestState(Property__float3* __this, ::app::Uno::Float3 value, ::uObject* origin);

struct Property__float3 : ::uObject
{
    bool _hasRestState;
    ::app::Uno::Float3 _restState;

    void _ObjInit() { Property__float3___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__float3__add_ValueChanged(this, value); }
    ::app::Uno::Float3 Get() { return Property__float3__Get(this); }
    ::app::Uno::Float3 GetRestState() { return Property__float3__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__float3__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Uno::Float3 OnGet() { return (((Property__float3__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__float3__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Uno::Float3 value, ::uObject* origin) { (((Property__float3__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__float3__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__float3__RetainRestState(this); }
    void Set(::app::Uno::Float3 value, ::uObject* origin) { Property__float3__Set(this, value, origin); }
    void SetRestState(::app::Uno::Float3 value, ::uObject* origin) { Property__float3__SetRestState(this, value, origin); }
};

}}}


#endif
