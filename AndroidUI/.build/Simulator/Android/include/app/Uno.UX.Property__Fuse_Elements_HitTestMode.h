// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_ELEMENTS_HIT_TEST_MODE_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_ELEMENTS_HIT_TEST_MODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Elements_HitTestMode;

struct Property__Fuse_Elements_HitTestMode__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Elements_HitTestMode*, ::uDelegate*);
    int(*__fp_OnGet)(Property__Fuse_Elements_HitTestMode*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Elements_HitTestMode*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Elements_HitTestMode*, int, ::uObject*);
};

Property__Fuse_Elements_HitTestMode__uType* Property__Fuse_Elements_HitTestMode__typeof();

void Property__Fuse_Elements_HitTestMode___ObjInit(Property__Fuse_Elements_HitTestMode* __this);
void Property__Fuse_Elements_HitTestMode__add_ValueChanged(Property__Fuse_Elements_HitTestMode* __this, ::uDelegate* value);
int Property__Fuse_Elements_HitTestMode__Get(Property__Fuse_Elements_HitTestMode* __this);
int Property__Fuse_Elements_HitTestMode__GetRestState(Property__Fuse_Elements_HitTestMode* __this);
void Property__Fuse_Elements_HitTestMode__OnAddListener(Property__Fuse_Elements_HitTestMode* __this, ::uDelegate* listener);
int Property__Fuse_Elements_HitTestMode__OnGet(Property__Fuse_Elements_HitTestMode* __this);
void Property__Fuse_Elements_HitTestMode__OnRemoveListener(Property__Fuse_Elements_HitTestMode* __this, ::uDelegate* listener);
void Property__Fuse_Elements_HitTestMode__OnSet(Property__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin);
void Property__Fuse_Elements_HitTestMode__remove_ValueChanged(Property__Fuse_Elements_HitTestMode* __this, ::uDelegate* value);
void Property__Fuse_Elements_HitTestMode__RetainRestState(Property__Fuse_Elements_HitTestMode* __this);
void Property__Fuse_Elements_HitTestMode__Set(Property__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin);
void Property__Fuse_Elements_HitTestMode__SetRestState(Property__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin);

struct Property__Fuse_Elements_HitTestMode : ::uObject
{
    bool _hasRestState;
    int _restState;

    void _ObjInit() { Property__Fuse_Elements_HitTestMode___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Elements_HitTestMode__add_ValueChanged(this, value); }
    int Get() { return Property__Fuse_Elements_HitTestMode__Get(this); }
    int GetRestState() { return Property__Fuse_Elements_HitTestMode__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    int OnGet() { return (((Property__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(int value, ::uObject* origin) { (((Property__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Elements_HitTestMode__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Elements_HitTestMode__RetainRestState(this); }
    void Set(int value, ::uObject* origin) { Property__Fuse_Elements_HitTestMode__Set(this, value, origin); }
    void SetRestState(int value, ::uObject* origin) { Property__Fuse_Elements_HitTestMode__SetRestState(this, value, origin); }
};

}}}


#endif
