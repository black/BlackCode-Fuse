// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_BRUSH_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Drawing_Brush;

struct Property__Fuse_Drawing_Brush__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Drawing_Brush*, ::uDelegate*);
    ::app::Fuse::Drawing::Brush*(*__fp_OnGet)(Property__Fuse_Drawing_Brush*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Drawing_Brush*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Drawing_Brush*, ::app::Fuse::Drawing::Brush*, ::uObject*);
};

Property__Fuse_Drawing_Brush__uType* Property__Fuse_Drawing_Brush__typeof();

void Property__Fuse_Drawing_Brush___ObjInit(Property__Fuse_Drawing_Brush* __this);
void Property__Fuse_Drawing_Brush__add_ValueChanged(Property__Fuse_Drawing_Brush* __this, ::uDelegate* value);
::app::Fuse::Drawing::Brush* Property__Fuse_Drawing_Brush__Get(Property__Fuse_Drawing_Brush* __this);
::app::Fuse::Drawing::Brush* Property__Fuse_Drawing_Brush__GetRestState(Property__Fuse_Drawing_Brush* __this);
void Property__Fuse_Drawing_Brush__OnAddListener(Property__Fuse_Drawing_Brush* __this, ::uDelegate* listener);
::app::Fuse::Drawing::Brush* Property__Fuse_Drawing_Brush__OnGet(Property__Fuse_Drawing_Brush* __this);
void Property__Fuse_Drawing_Brush__OnRemoveListener(Property__Fuse_Drawing_Brush* __this, ::uDelegate* listener);
void Property__Fuse_Drawing_Brush__OnSet(Property__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin);
void Property__Fuse_Drawing_Brush__remove_ValueChanged(Property__Fuse_Drawing_Brush* __this, ::uDelegate* value);
void Property__Fuse_Drawing_Brush__RetainRestState(Property__Fuse_Drawing_Brush* __this);
void Property__Fuse_Drawing_Brush__Set(Property__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin);
void Property__Fuse_Drawing_Brush__SetRestState(Property__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin);

struct Property__Fuse_Drawing_Brush : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Drawing::Brush*> _restState;

    void _ObjInit() { Property__Fuse_Drawing_Brush___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_Brush__add_ValueChanged(this, value); }
    ::app::Fuse::Drawing::Brush* Get() { return Property__Fuse_Drawing_Brush__Get(this); }
    ::app::Fuse::Drawing::Brush* GetRestState() { return Property__Fuse_Drawing_Brush__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Drawing::Brush* OnGet() { return (((Property__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Drawing::Brush* value, ::uObject* origin) { (((Property__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Drawing_Brush__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Drawing_Brush__RetainRestState(this); }
    void Set(::app::Fuse::Drawing::Brush* value, ::uObject* origin) { Property__Fuse_Drawing_Brush__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Drawing::Brush* value, ::uObject* origin) { Property__Fuse_Drawing_Brush__SetRestState(this, value, origin); }
};

}}}


#endif
