// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__UNO_EVENT_ARGS_H__
#define __APP_UNO_U_X_PROPERTY__UNO_EVENT_ARGS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Uno_EventArgs;

struct Property__Uno_EventArgs__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Uno_EventArgs*, ::uDelegate*);
    ::app::Uno::EventArgs*(*__fp_OnGet)(Property__Uno_EventArgs*);
    void(*__fp_OnRemoveListener)(Property__Uno_EventArgs*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Uno_EventArgs*, ::app::Uno::EventArgs*, ::uObject*);
};

Property__Uno_EventArgs__uType* Property__Uno_EventArgs__typeof();

void Property__Uno_EventArgs___ObjInit(Property__Uno_EventArgs* __this);
void Property__Uno_EventArgs__add_ValueChanged(Property__Uno_EventArgs* __this, ::uDelegate* value);
::app::Uno::EventArgs* Property__Uno_EventArgs__Get(Property__Uno_EventArgs* __this);
::app::Uno::EventArgs* Property__Uno_EventArgs__GetRestState(Property__Uno_EventArgs* __this);
void Property__Uno_EventArgs__OnAddListener(Property__Uno_EventArgs* __this, ::uDelegate* listener);
::app::Uno::EventArgs* Property__Uno_EventArgs__OnGet(Property__Uno_EventArgs* __this);
void Property__Uno_EventArgs__OnRemoveListener(Property__Uno_EventArgs* __this, ::uDelegate* listener);
void Property__Uno_EventArgs__OnSet(Property__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin);
void Property__Uno_EventArgs__remove_ValueChanged(Property__Uno_EventArgs* __this, ::uDelegate* value);
void Property__Uno_EventArgs__RetainRestState(Property__Uno_EventArgs* __this);
void Property__Uno_EventArgs__Set(Property__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin);
void Property__Uno_EventArgs__SetRestState(Property__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin);

struct Property__Uno_EventArgs : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Uno::EventArgs*> _restState;

    void _ObjInit() { Property__Uno_EventArgs___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Uno_EventArgs__add_ValueChanged(this, value); }
    ::app::Uno::EventArgs* Get() { return Property__Uno_EventArgs__Get(this); }
    ::app::Uno::EventArgs* GetRestState() { return Property__Uno_EventArgs__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Uno_EventArgs__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Uno::EventArgs* OnGet() { return (((Property__Uno_EventArgs__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Uno_EventArgs__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Uno::EventArgs* value, ::uObject* origin) { (((Property__Uno_EventArgs__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Uno_EventArgs__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Uno_EventArgs__RetainRestState(this); }
    void Set(::app::Uno::EventArgs* value, ::uObject* origin) { Property__Uno_EventArgs__Set(this, value, origin); }
    void SetRestState(::app::Uno::EventArgs* value, ::uObject* origin) { Property__Uno_EventArgs__SetRestState(this, value, origin); }
};

}}}


#endif
