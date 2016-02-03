// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_TRIGGERS_STATE_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_TRIGGERS_STATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Triggers_State;

struct Property__Fuse_Triggers_State__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Triggers_State*, ::uDelegate*);
    ::app::Fuse::Triggers::State*(*__fp_OnGet)(Property__Fuse_Triggers_State*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Triggers_State*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Triggers_State*, ::app::Fuse::Triggers::State*, ::uObject*);
};

Property__Fuse_Triggers_State__uType* Property__Fuse_Triggers_State__typeof();

void Property__Fuse_Triggers_State___ObjInit(Property__Fuse_Triggers_State* __this);
void Property__Fuse_Triggers_State__add_ValueChanged(Property__Fuse_Triggers_State* __this, ::uDelegate* value);
::app::Fuse::Triggers::State* Property__Fuse_Triggers_State__Get(Property__Fuse_Triggers_State* __this);
::app::Fuse::Triggers::State* Property__Fuse_Triggers_State__GetRestState(Property__Fuse_Triggers_State* __this);
void Property__Fuse_Triggers_State__OnAddListener(Property__Fuse_Triggers_State* __this, ::uDelegate* listener);
::app::Fuse::Triggers::State* Property__Fuse_Triggers_State__OnGet(Property__Fuse_Triggers_State* __this);
void Property__Fuse_Triggers_State__OnRemoveListener(Property__Fuse_Triggers_State* __this, ::uDelegate* listener);
void Property__Fuse_Triggers_State__OnSet(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin);
void Property__Fuse_Triggers_State__remove_ValueChanged(Property__Fuse_Triggers_State* __this, ::uDelegate* value);
void Property__Fuse_Triggers_State__RetainRestState(Property__Fuse_Triggers_State* __this);
void Property__Fuse_Triggers_State__Set(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin);
void Property__Fuse_Triggers_State__SetRestState(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin);

struct Property__Fuse_Triggers_State : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Triggers::State*> _restState;

    void _ObjInit() { Property__Fuse_Triggers_State___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Triggers_State__add_ValueChanged(this, value); }
    ::app::Fuse::Triggers::State* Get() { return Property__Fuse_Triggers_State__Get(this); }
    ::app::Fuse::Triggers::State* GetRestState() { return Property__Fuse_Triggers_State__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Triggers::State* OnGet() { return (((Property__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Triggers::State* value, ::uObject* origin) { (((Property__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Triggers_State__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Triggers_State__RetainRestState(this); }
    void Set(::app::Fuse::Triggers::State* value, ::uObject* origin) { Property__Fuse_Triggers_State__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Triggers::State* value, ::uObject* origin) { Property__Fuse_Triggers_State__SetRestState(this, value, origin); }
};

}}}


#endif
