// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct StaticBrush; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Drawing_StaticBrush;

struct Property__Fuse_Drawing_StaticBrush__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Drawing_StaticBrush*, ::uDelegate*);
    ::app::Fuse::Drawing::StaticBrush*(*__fp_OnGet)(Property__Fuse_Drawing_StaticBrush*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Drawing_StaticBrush*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Drawing_StaticBrush*, ::app::Fuse::Drawing::StaticBrush*, ::uObject*);
};

Property__Fuse_Drawing_StaticBrush__uType* Property__Fuse_Drawing_StaticBrush__typeof();

void Property__Fuse_Drawing_StaticBrush___ObjInit(Property__Fuse_Drawing_StaticBrush* __this);
void Property__Fuse_Drawing_StaticBrush__add_ValueChanged(Property__Fuse_Drawing_StaticBrush* __this, ::uDelegate* value);
::app::Fuse::Drawing::StaticBrush* Property__Fuse_Drawing_StaticBrush__Get(Property__Fuse_Drawing_StaticBrush* __this);
::app::Fuse::Drawing::StaticBrush* Property__Fuse_Drawing_StaticBrush__GetRestState(Property__Fuse_Drawing_StaticBrush* __this);
void Property__Fuse_Drawing_StaticBrush__OnAddListener(Property__Fuse_Drawing_StaticBrush* __this, ::uDelegate* listener);
::app::Fuse::Drawing::StaticBrush* Property__Fuse_Drawing_StaticBrush__OnGet(Property__Fuse_Drawing_StaticBrush* __this);
void Property__Fuse_Drawing_StaticBrush__OnRemoveListener(Property__Fuse_Drawing_StaticBrush* __this, ::uDelegate* listener);
void Property__Fuse_Drawing_StaticBrush__OnSet(Property__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin);
void Property__Fuse_Drawing_StaticBrush__remove_ValueChanged(Property__Fuse_Drawing_StaticBrush* __this, ::uDelegate* value);
void Property__Fuse_Drawing_StaticBrush__RetainRestState(Property__Fuse_Drawing_StaticBrush* __this);
void Property__Fuse_Drawing_StaticBrush__Set(Property__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin);
void Property__Fuse_Drawing_StaticBrush__SetRestState(Property__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin);

struct Property__Fuse_Drawing_StaticBrush : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Drawing::StaticBrush*> _restState;

    void _ObjInit() { Property__Fuse_Drawing_StaticBrush___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_StaticBrush__add_ValueChanged(this, value); }
    ::app::Fuse::Drawing::StaticBrush* Get() { return Property__Fuse_Drawing_StaticBrush__Get(this); }
    ::app::Fuse::Drawing::StaticBrush* GetRestState() { return Property__Fuse_Drawing_StaticBrush__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Drawing_StaticBrush__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Drawing::StaticBrush* OnGet() { return (((Property__Fuse_Drawing_StaticBrush__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Drawing_StaticBrush__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin) { (((Property__Fuse_Drawing_StaticBrush__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_StaticBrush__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Drawing_StaticBrush__RetainRestState(this); }
    void Set(::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin) { Property__Fuse_Drawing_StaticBrush__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin) { Property__Fuse_Drawing_StaticBrush__SetRestState(this, value, origin); }
};

}}}


#endif
