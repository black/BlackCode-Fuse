// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_ANIMATIONS_ANIMATION_VARIANT_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_ANIMATIONS_ANIMATION_VARIANT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Animations_AnimationVariant;

struct Property__Fuse_Animations_AnimationVariant__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Animations_AnimationVariant*, ::uDelegate*);
    int(*__fp_OnGet)(Property__Fuse_Animations_AnimationVariant*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Animations_AnimationVariant*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Animations_AnimationVariant*, int, ::uObject*);
};

Property__Fuse_Animations_AnimationVariant__uType* Property__Fuse_Animations_AnimationVariant__typeof();

void Property__Fuse_Animations_AnimationVariant___ObjInit(Property__Fuse_Animations_AnimationVariant* __this);
void Property__Fuse_Animations_AnimationVariant__add_ValueChanged(Property__Fuse_Animations_AnimationVariant* __this, ::uDelegate* value);
int Property__Fuse_Animations_AnimationVariant__Get(Property__Fuse_Animations_AnimationVariant* __this);
int Property__Fuse_Animations_AnimationVariant__GetRestState(Property__Fuse_Animations_AnimationVariant* __this);
void Property__Fuse_Animations_AnimationVariant__OnAddListener(Property__Fuse_Animations_AnimationVariant* __this, ::uDelegate* listener);
int Property__Fuse_Animations_AnimationVariant__OnGet(Property__Fuse_Animations_AnimationVariant* __this);
void Property__Fuse_Animations_AnimationVariant__OnRemoveListener(Property__Fuse_Animations_AnimationVariant* __this, ::uDelegate* listener);
void Property__Fuse_Animations_AnimationVariant__OnSet(Property__Fuse_Animations_AnimationVariant* __this, int value, ::uObject* origin);
void Property__Fuse_Animations_AnimationVariant__remove_ValueChanged(Property__Fuse_Animations_AnimationVariant* __this, ::uDelegate* value);
void Property__Fuse_Animations_AnimationVariant__RetainRestState(Property__Fuse_Animations_AnimationVariant* __this);
void Property__Fuse_Animations_AnimationVariant__Set(Property__Fuse_Animations_AnimationVariant* __this, int value, ::uObject* origin);
void Property__Fuse_Animations_AnimationVariant__SetRestState(Property__Fuse_Animations_AnimationVariant* __this, int value, ::uObject* origin);

struct Property__Fuse_Animations_AnimationVariant : ::uObject
{
    bool _hasRestState;
    int _restState;

    void _ObjInit() { Property__Fuse_Animations_AnimationVariant___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Animations_AnimationVariant__add_ValueChanged(this, value); }
    int Get() { return Property__Fuse_Animations_AnimationVariant__Get(this); }
    int GetRestState() { return Property__Fuse_Animations_AnimationVariant__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Animations_AnimationVariant__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    int OnGet() { return (((Property__Fuse_Animations_AnimationVariant__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Animations_AnimationVariant__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(int value, ::uObject* origin) { (((Property__Fuse_Animations_AnimationVariant__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Animations_AnimationVariant__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Animations_AnimationVariant__RetainRestState(this); }
    void Set(int value, ::uObject* origin) { Property__Fuse_Animations_AnimationVariant__Set(this, value, origin); }
    void SetRestState(int value, ::uObject* origin) { Property__Fuse_Animations_AnimationVariant__SetRestState(this, value, origin); }
};

}}}


#endif
