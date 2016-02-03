// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_GESTURES_EDGE_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_GESTURES_EDGE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Gestures_Edge;

struct Property__Fuse_Gestures_Edge__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Gestures_Edge*, ::uDelegate*);
    int(*__fp_OnGet)(Property__Fuse_Gestures_Edge*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Gestures_Edge*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Gestures_Edge*, int, ::uObject*);
};

Property__Fuse_Gestures_Edge__uType* Property__Fuse_Gestures_Edge__typeof();

void Property__Fuse_Gestures_Edge___ObjInit(Property__Fuse_Gestures_Edge* __this);
void Property__Fuse_Gestures_Edge__add_ValueChanged(Property__Fuse_Gestures_Edge* __this, ::uDelegate* value);
int Property__Fuse_Gestures_Edge__Get(Property__Fuse_Gestures_Edge* __this);
int Property__Fuse_Gestures_Edge__GetRestState(Property__Fuse_Gestures_Edge* __this);
void Property__Fuse_Gestures_Edge__OnAddListener(Property__Fuse_Gestures_Edge* __this, ::uDelegate* listener);
int Property__Fuse_Gestures_Edge__OnGet(Property__Fuse_Gestures_Edge* __this);
void Property__Fuse_Gestures_Edge__OnRemoveListener(Property__Fuse_Gestures_Edge* __this, ::uDelegate* listener);
void Property__Fuse_Gestures_Edge__OnSet(Property__Fuse_Gestures_Edge* __this, int value, ::uObject* origin);
void Property__Fuse_Gestures_Edge__remove_ValueChanged(Property__Fuse_Gestures_Edge* __this, ::uDelegate* value);
void Property__Fuse_Gestures_Edge__RetainRestState(Property__Fuse_Gestures_Edge* __this);
void Property__Fuse_Gestures_Edge__Set(Property__Fuse_Gestures_Edge* __this, int value, ::uObject* origin);
void Property__Fuse_Gestures_Edge__SetRestState(Property__Fuse_Gestures_Edge* __this, int value, ::uObject* origin);

struct Property__Fuse_Gestures_Edge : ::uObject
{
    bool _hasRestState;
    int _restState;

    void _ObjInit() { Property__Fuse_Gestures_Edge___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Gestures_Edge__add_ValueChanged(this, value); }
    int Get() { return Property__Fuse_Gestures_Edge__Get(this); }
    int GetRestState() { return Property__Fuse_Gestures_Edge__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Gestures_Edge__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    int OnGet() { return (((Property__Fuse_Gestures_Edge__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Gestures_Edge__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(int value, ::uObject* origin) { (((Property__Fuse_Gestures_Edge__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Gestures_Edge__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Gestures_Edge__RetainRestState(this); }
    void Set(int value, ::uObject* origin) { Property__Fuse_Gestures_Edge__Set(this, value, origin); }
    void SetRestState(int value, ::uObject* origin) { Property__Fuse_Gestures_Edge__SetRestState(this, value, origin); }
};

}}}


#endif
