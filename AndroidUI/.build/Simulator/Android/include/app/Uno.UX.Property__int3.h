// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__INT3_H__
#define __APP_UNO_U_X_PROPERTY__INT3_H__

#include <app/Uno.Int3.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__int3;

struct Property__int3__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__int3*, ::uDelegate*);
    ::app::Uno::Int3(*__fp_OnGet)(Property__int3*);
    void(*__fp_OnRemoveListener)(Property__int3*, ::uDelegate*);
    void(*__fp_OnSet)(Property__int3*, ::app::Uno::Int3, ::uObject*);
};

Property__int3__uType* Property__int3__typeof();

void Property__int3___ObjInit(Property__int3* __this);
void Property__int3__add_ValueChanged(Property__int3* __this, ::uDelegate* value);
::app::Uno::Int3 Property__int3__Get(Property__int3* __this);
::app::Uno::Int3 Property__int3__GetRestState(Property__int3* __this);
void Property__int3__OnAddListener(Property__int3* __this, ::uDelegate* listener);
::app::Uno::Int3 Property__int3__OnGet(Property__int3* __this);
void Property__int3__OnRemoveListener(Property__int3* __this, ::uDelegate* listener);
void Property__int3__OnSet(Property__int3* __this, ::app::Uno::Int3 value, ::uObject* origin);
void Property__int3__remove_ValueChanged(Property__int3* __this, ::uDelegate* value);
void Property__int3__RetainRestState(Property__int3* __this);
void Property__int3__Set(Property__int3* __this, ::app::Uno::Int3 value, ::uObject* origin);
void Property__int3__SetRestState(Property__int3* __this, ::app::Uno::Int3 value, ::uObject* origin);

struct Property__int3 : ::uObject
{
    bool _hasRestState;
    ::app::Uno::Int3 _restState;

    void _ObjInit() { Property__int3___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__int3__add_ValueChanged(this, value); }
    ::app::Uno::Int3 Get() { return Property__int3__Get(this); }
    ::app::Uno::Int3 GetRestState() { return Property__int3__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__int3__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Uno::Int3 OnGet() { return (((Property__int3__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__int3__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Uno::Int3 value, ::uObject* origin) { (((Property__int3__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__int3__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__int3__RetainRestState(this); }
    void Set(::app::Uno::Int3 value, ::uObject* origin) { Property__int3__Set(this, value, origin); }
    void SetRestState(::app::Uno::Int3 value, ::uObject* origin) { Property__int3__SetRestState(this, value, origin); }
};

}}}


#endif
