// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Drawing_SolidColor;

struct Property__Fuse_Drawing_SolidColor__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Drawing_SolidColor*, ::uDelegate*);
    ::app::Fuse::Drawing::SolidColor*(*__fp_OnGet)(Property__Fuse_Drawing_SolidColor*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Drawing_SolidColor*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Drawing_SolidColor*, ::app::Fuse::Drawing::SolidColor*, ::uObject*);
};

Property__Fuse_Drawing_SolidColor__uType* Property__Fuse_Drawing_SolidColor__typeof();

void Property__Fuse_Drawing_SolidColor___ObjInit(Property__Fuse_Drawing_SolidColor* __this);
void Property__Fuse_Drawing_SolidColor__add_ValueChanged(Property__Fuse_Drawing_SolidColor* __this, ::uDelegate* value);
::app::Fuse::Drawing::SolidColor* Property__Fuse_Drawing_SolidColor__Get(Property__Fuse_Drawing_SolidColor* __this);
::app::Fuse::Drawing::SolidColor* Property__Fuse_Drawing_SolidColor__GetRestState(Property__Fuse_Drawing_SolidColor* __this);
void Property__Fuse_Drawing_SolidColor__OnAddListener(Property__Fuse_Drawing_SolidColor* __this, ::uDelegate* listener);
::app::Fuse::Drawing::SolidColor* Property__Fuse_Drawing_SolidColor__OnGet(Property__Fuse_Drawing_SolidColor* __this);
void Property__Fuse_Drawing_SolidColor__OnRemoveListener(Property__Fuse_Drawing_SolidColor* __this, ::uDelegate* listener);
void Property__Fuse_Drawing_SolidColor__OnSet(Property__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin);
void Property__Fuse_Drawing_SolidColor__remove_ValueChanged(Property__Fuse_Drawing_SolidColor* __this, ::uDelegate* value);
void Property__Fuse_Drawing_SolidColor__RetainRestState(Property__Fuse_Drawing_SolidColor* __this);
void Property__Fuse_Drawing_SolidColor__Set(Property__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin);
void Property__Fuse_Drawing_SolidColor__SetRestState(Property__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin);

struct Property__Fuse_Drawing_SolidColor : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> _restState;

    void _ObjInit() { Property__Fuse_Drawing_SolidColor___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_SolidColor__add_ValueChanged(this, value); }
    ::app::Fuse::Drawing::SolidColor* Get() { return Property__Fuse_Drawing_SolidColor__Get(this); }
    ::app::Fuse::Drawing::SolidColor* GetRestState() { return Property__Fuse_Drawing_SolidColor__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Drawing::SolidColor* OnGet() { return (((Property__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Drawing::SolidColor* value, ::uObject* origin) { (((Property__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_SolidColor__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Drawing_SolidColor__RetainRestState(this); }
    void Set(::app::Fuse::Drawing::SolidColor* value, ::uObject* origin) { Property__Fuse_Drawing_SolidColor__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Drawing::SolidColor* value, ::uObject* origin) { Property__Fuse_Drawing_SolidColor__SetRestState(this, value, origin); }
};

}}}


#endif
