// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__INT2_H__
#define __APP_UNO_U_X_PROPERTY__INT2_H__

#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__int2;

struct Property__int2__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__int2*, ::uDelegate*);
    ::app::Uno::Int2(*__fp_OnGet)(Property__int2*);
    void(*__fp_OnRemoveListener)(Property__int2*, ::uDelegate*);
    void(*__fp_OnSet)(Property__int2*, ::app::Uno::Int2, ::uObject*);
};

Property__int2__uType* Property__int2__typeof();

void Property__int2___ObjInit(Property__int2* __this);
void Property__int2__add_ValueChanged(Property__int2* __this, ::uDelegate* value);
::app::Uno::Int2 Property__int2__Get(Property__int2* __this);
::app::Uno::Int2 Property__int2__GetRestState(Property__int2* __this);
void Property__int2__OnAddListener(Property__int2* __this, ::uDelegate* listener);
::app::Uno::Int2 Property__int2__OnGet(Property__int2* __this);
void Property__int2__OnRemoveListener(Property__int2* __this, ::uDelegate* listener);
void Property__int2__OnSet(Property__int2* __this, ::app::Uno::Int2 value, ::uObject* origin);
void Property__int2__remove_ValueChanged(Property__int2* __this, ::uDelegate* value);
void Property__int2__RetainRestState(Property__int2* __this);
void Property__int2__Set(Property__int2* __this, ::app::Uno::Int2 value, ::uObject* origin);
void Property__int2__SetRestState(Property__int2* __this, ::app::Uno::Int2 value, ::uObject* origin);

struct Property__int2 : ::uObject
{
    bool _hasRestState;
    ::app::Uno::Int2 _restState;

    void _ObjInit() { Property__int2___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__int2__add_ValueChanged(this, value); }
    ::app::Uno::Int2 Get() { return Property__int2__Get(this); }
    ::app::Uno::Int2 GetRestState() { return Property__int2__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__int2__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Uno::Int2 OnGet() { return (((Property__int2__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__int2__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Uno::Int2 value, ::uObject* origin) { (((Property__int2__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__int2__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__int2__RetainRestState(this); }
    void Set(::app::Uno::Int2 value, ::uObject* origin) { Property__int2__Set(this, value, origin); }
    void SetRestState(::app::Uno::Int2 value, ::uObject* origin) { Property__int2__SetRestState(this, value, origin); }
};

}}}


#endif
