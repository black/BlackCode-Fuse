// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Drawing_LinearGradient;

struct Property__Fuse_Drawing_LinearGradient__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Drawing_LinearGradient*, ::uDelegate*);
    ::app::Fuse::Drawing::LinearGradient*(*__fp_OnGet)(Property__Fuse_Drawing_LinearGradient*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Drawing_LinearGradient*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Drawing_LinearGradient*, ::app::Fuse::Drawing::LinearGradient*, ::uObject*);
};

Property__Fuse_Drawing_LinearGradient__uType* Property__Fuse_Drawing_LinearGradient__typeof();

void Property__Fuse_Drawing_LinearGradient___ObjInit(Property__Fuse_Drawing_LinearGradient* __this);
void Property__Fuse_Drawing_LinearGradient__add_ValueChanged(Property__Fuse_Drawing_LinearGradient* __this, ::uDelegate* value);
::app::Fuse::Drawing::LinearGradient* Property__Fuse_Drawing_LinearGradient__Get(Property__Fuse_Drawing_LinearGradient* __this);
::app::Fuse::Drawing::LinearGradient* Property__Fuse_Drawing_LinearGradient__GetRestState(Property__Fuse_Drawing_LinearGradient* __this);
void Property__Fuse_Drawing_LinearGradient__OnAddListener(Property__Fuse_Drawing_LinearGradient* __this, ::uDelegate* listener);
::app::Fuse::Drawing::LinearGradient* Property__Fuse_Drawing_LinearGradient__OnGet(Property__Fuse_Drawing_LinearGradient* __this);
void Property__Fuse_Drawing_LinearGradient__OnRemoveListener(Property__Fuse_Drawing_LinearGradient* __this, ::uDelegate* listener);
void Property__Fuse_Drawing_LinearGradient__OnSet(Property__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin);
void Property__Fuse_Drawing_LinearGradient__remove_ValueChanged(Property__Fuse_Drawing_LinearGradient* __this, ::uDelegate* value);
void Property__Fuse_Drawing_LinearGradient__RetainRestState(Property__Fuse_Drawing_LinearGradient* __this);
void Property__Fuse_Drawing_LinearGradient__Set(Property__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin);
void Property__Fuse_Drawing_LinearGradient__SetRestState(Property__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin);

struct Property__Fuse_Drawing_LinearGradient : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Drawing::LinearGradient*> _restState;

    void _ObjInit() { Property__Fuse_Drawing_LinearGradient___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_LinearGradient__add_ValueChanged(this, value); }
    ::app::Fuse::Drawing::LinearGradient* Get() { return Property__Fuse_Drawing_LinearGradient__Get(this); }
    ::app::Fuse::Drawing::LinearGradient* GetRestState() { return Property__Fuse_Drawing_LinearGradient__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Drawing_LinearGradient__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Drawing::LinearGradient* OnGet() { return (((Property__Fuse_Drawing_LinearGradient__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Drawing_LinearGradient__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin) { (((Property__Fuse_Drawing_LinearGradient__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_LinearGradient__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Drawing_LinearGradient__RetainRestState(this); }
    void Set(::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin) { Property__Fuse_Drawing_LinearGradient__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin) { Property__Fuse_Drawing_LinearGradient__SetRestState(this, value, origin); }
};

}}}


#endif
