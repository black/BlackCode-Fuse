// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_NODE_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Node;

struct Property__Fuse_Node__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Node*, ::uDelegate*);
    ::app::Fuse::Node*(*__fp_OnGet)(Property__Fuse_Node*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Node*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Node*, ::app::Fuse::Node*, ::uObject*);
};

Property__Fuse_Node__uType* Property__Fuse_Node__typeof();

void Property__Fuse_Node___ObjInit(Property__Fuse_Node* __this);
void Property__Fuse_Node__add_ValueChanged(Property__Fuse_Node* __this, ::uDelegate* value);
::app::Fuse::Node* Property__Fuse_Node__Get(Property__Fuse_Node* __this);
::app::Fuse::Node* Property__Fuse_Node__GetRestState(Property__Fuse_Node* __this);
void Property__Fuse_Node__OnAddListener(Property__Fuse_Node* __this, ::uDelegate* listener);
::app::Fuse::Node* Property__Fuse_Node__OnGet(Property__Fuse_Node* __this);
void Property__Fuse_Node__OnRemoveListener(Property__Fuse_Node* __this, ::uDelegate* listener);
void Property__Fuse_Node__OnSet(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin);
void Property__Fuse_Node__remove_ValueChanged(Property__Fuse_Node* __this, ::uDelegate* value);
void Property__Fuse_Node__RetainRestState(Property__Fuse_Node* __this);
void Property__Fuse_Node__Set(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin);
void Property__Fuse_Node__SetRestState(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin);

struct Property__Fuse_Node : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Node*> _restState;

    void _ObjInit() { Property__Fuse_Node___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Node__add_ValueChanged(this, value); }
    ::app::Fuse::Node* Get() { return Property__Fuse_Node__Get(this); }
    ::app::Fuse::Node* GetRestState() { return Property__Fuse_Node__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Node__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Node* OnGet() { return (((Property__Fuse_Node__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Node__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Node* value, ::uObject* origin) { (((Property__Fuse_Node__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Node__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Node__RetainRestState(this); }
    void Set(::app::Fuse::Node* value, ::uObject* origin) { Property__Fuse_Node__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Node* value, ::uObject* origin) { Property__Fuse_Node__SetRestState(this, value, origin); }
};

}}}


#endif
