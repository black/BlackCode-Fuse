// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FLOAT4_H__
#define __APP_UNO_U_X_PROPERTY__FLOAT4_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__float4;

struct Property__float4__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__float4*, ::uDelegate*);
    ::app::Uno::Float4(*__fp_OnGet)(Property__float4*);
    void(*__fp_OnRemoveListener)(Property__float4*, ::uDelegate*);
    void(*__fp_OnSet)(Property__float4*, ::app::Uno::Float4, ::uObject*);
};

Property__float4__uType* Property__float4__typeof();

void Property__float4___ObjInit(Property__float4* __this);
void Property__float4__add_ValueChanged(Property__float4* __this, ::uDelegate* value);
::app::Uno::Float4 Property__float4__Get(Property__float4* __this);
::app::Uno::Float4 Property__float4__GetRestState(Property__float4* __this);
void Property__float4__OnAddListener(Property__float4* __this, ::uDelegate* listener);
::app::Uno::Float4 Property__float4__OnGet(Property__float4* __this);
void Property__float4__OnRemoveListener(Property__float4* __this, ::uDelegate* listener);
void Property__float4__OnSet(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin);
void Property__float4__remove_ValueChanged(Property__float4* __this, ::uDelegate* value);
void Property__float4__RetainRestState(Property__float4* __this);
void Property__float4__Set(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin);
void Property__float4__SetRestState(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin);

struct Property__float4 : ::uObject
{
    bool _hasRestState;
    ::app::Uno::Float4 _restState;

    void _ObjInit() { Property__float4___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__float4__add_ValueChanged(this, value); }
    ::app::Uno::Float4 Get() { return Property__float4__Get(this); }
    ::app::Uno::Float4 GetRestState() { return Property__float4__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__float4__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Uno::Float4 OnGet() { return (((Property__float4__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__float4__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Uno::Float4 value, ::uObject* origin) { (((Property__float4__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__float4__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__float4__RetainRestState(this); }
    void Set(::app::Uno::Float4 value, ::uObject* origin) { Property__float4__Set(this, value, origin); }
    void SetRestState(::app::Uno::Float4 value, ::uObject* origin) { Property__float4__SetRestState(this, value, origin); }
};

}}}


#endif
