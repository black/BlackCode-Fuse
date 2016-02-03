// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Drawing_GradientStop;

struct Property__Fuse_Drawing_GradientStop__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Drawing_GradientStop*, ::uDelegate*);
    ::app::Fuse::Drawing::GradientStop*(*__fp_OnGet)(Property__Fuse_Drawing_GradientStop*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Drawing_GradientStop*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Drawing_GradientStop*, ::app::Fuse::Drawing::GradientStop*, ::uObject*);
};

Property__Fuse_Drawing_GradientStop__uType* Property__Fuse_Drawing_GradientStop__typeof();

void Property__Fuse_Drawing_GradientStop___ObjInit(Property__Fuse_Drawing_GradientStop* __this);
void Property__Fuse_Drawing_GradientStop__add_ValueChanged(Property__Fuse_Drawing_GradientStop* __this, ::uDelegate* value);
::app::Fuse::Drawing::GradientStop* Property__Fuse_Drawing_GradientStop__Get(Property__Fuse_Drawing_GradientStop* __this);
::app::Fuse::Drawing::GradientStop* Property__Fuse_Drawing_GradientStop__GetRestState(Property__Fuse_Drawing_GradientStop* __this);
void Property__Fuse_Drawing_GradientStop__OnAddListener(Property__Fuse_Drawing_GradientStop* __this, ::uDelegate* listener);
::app::Fuse::Drawing::GradientStop* Property__Fuse_Drawing_GradientStop__OnGet(Property__Fuse_Drawing_GradientStop* __this);
void Property__Fuse_Drawing_GradientStop__OnRemoveListener(Property__Fuse_Drawing_GradientStop* __this, ::uDelegate* listener);
void Property__Fuse_Drawing_GradientStop__OnSet(Property__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin);
void Property__Fuse_Drawing_GradientStop__remove_ValueChanged(Property__Fuse_Drawing_GradientStop* __this, ::uDelegate* value);
void Property__Fuse_Drawing_GradientStop__RetainRestState(Property__Fuse_Drawing_GradientStop* __this);
void Property__Fuse_Drawing_GradientStop__Set(Property__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin);
void Property__Fuse_Drawing_GradientStop__SetRestState(Property__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin);

struct Property__Fuse_Drawing_GradientStop : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Drawing::GradientStop*> _restState;

    void _ObjInit() { Property__Fuse_Drawing_GradientStop___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_GradientStop__add_ValueChanged(this, value); }
    ::app::Fuse::Drawing::GradientStop* Get() { return Property__Fuse_Drawing_GradientStop__Get(this); }
    ::app::Fuse::Drawing::GradientStop* GetRestState() { return Property__Fuse_Drawing_GradientStop__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Drawing::GradientStop* OnGet() { return (((Property__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Drawing::GradientStop* value, ::uObject* origin) { (((Property__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_GradientStop__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Drawing_GradientStop__RetainRestState(this); }
    void Set(::app::Fuse::Drawing::GradientStop* value, ::uObject* origin) { Property__Fuse_Drawing_GradientStop__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Drawing::GradientStop* value, ::uObject* origin) { Property__Fuse_Drawing_GradientStop__SetRestState(this, value, origin); }
};

}}}


#endif
