// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct DynamicBrush; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Drawing_DynamicBrush;

struct Property__Fuse_Drawing_DynamicBrush__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Drawing_DynamicBrush*, ::uDelegate*);
    ::app::Fuse::Drawing::DynamicBrush*(*__fp_OnGet)(Property__Fuse_Drawing_DynamicBrush*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Drawing_DynamicBrush*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Drawing_DynamicBrush*, ::app::Fuse::Drawing::DynamicBrush*, ::uObject*);
};

Property__Fuse_Drawing_DynamicBrush__uType* Property__Fuse_Drawing_DynamicBrush__typeof();

void Property__Fuse_Drawing_DynamicBrush___ObjInit(Property__Fuse_Drawing_DynamicBrush* __this);
void Property__Fuse_Drawing_DynamicBrush__add_ValueChanged(Property__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* value);
::app::Fuse::Drawing::DynamicBrush* Property__Fuse_Drawing_DynamicBrush__Get(Property__Fuse_Drawing_DynamicBrush* __this);
::app::Fuse::Drawing::DynamicBrush* Property__Fuse_Drawing_DynamicBrush__GetRestState(Property__Fuse_Drawing_DynamicBrush* __this);
void Property__Fuse_Drawing_DynamicBrush__OnAddListener(Property__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* listener);
::app::Fuse::Drawing::DynamicBrush* Property__Fuse_Drawing_DynamicBrush__OnGet(Property__Fuse_Drawing_DynamicBrush* __this);
void Property__Fuse_Drawing_DynamicBrush__OnRemoveListener(Property__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* listener);
void Property__Fuse_Drawing_DynamicBrush__OnSet(Property__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin);
void Property__Fuse_Drawing_DynamicBrush__remove_ValueChanged(Property__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* value);
void Property__Fuse_Drawing_DynamicBrush__RetainRestState(Property__Fuse_Drawing_DynamicBrush* __this);
void Property__Fuse_Drawing_DynamicBrush__Set(Property__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin);
void Property__Fuse_Drawing_DynamicBrush__SetRestState(Property__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin);

struct Property__Fuse_Drawing_DynamicBrush : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Drawing::DynamicBrush*> _restState;

    void _ObjInit() { Property__Fuse_Drawing_DynamicBrush___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_DynamicBrush__add_ValueChanged(this, value); }
    ::app::Fuse::Drawing::DynamicBrush* Get() { return Property__Fuse_Drawing_DynamicBrush__Get(this); }
    ::app::Fuse::Drawing::DynamicBrush* GetRestState() { return Property__Fuse_Drawing_DynamicBrush__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Drawing_DynamicBrush__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Drawing::DynamicBrush* OnGet() { return (((Property__Fuse_Drawing_DynamicBrush__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Drawing_DynamicBrush__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin) { (((Property__Fuse_Drawing_DynamicBrush__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_DynamicBrush__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Drawing_DynamicBrush__RetainRestState(this); }
    void Set(::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin) { Property__Fuse_Drawing_DynamicBrush__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin) { Property__Fuse_Drawing_DynamicBrush__SetRestState(this, value, origin); }
};

}}}


#endif
