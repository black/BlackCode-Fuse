// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_FONT_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_FONT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Font;

struct Property__Fuse_Font__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Fuse_Font*, ::uDelegate*);
    ::app::Fuse::Font*(*__fp_OnGet)(Property__Fuse_Font*);
    void(*__fp_OnRemoveListener)(Property__Fuse_Font*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Fuse_Font*, ::app::Fuse::Font*, ::uObject*);
};

Property__Fuse_Font__uType* Property__Fuse_Font__typeof();

void Property__Fuse_Font___ObjInit(Property__Fuse_Font* __this);
void Property__Fuse_Font__add_ValueChanged(Property__Fuse_Font* __this, ::uDelegate* value);
::app::Fuse::Font* Property__Fuse_Font__Get(Property__Fuse_Font* __this);
::app::Fuse::Font* Property__Fuse_Font__GetRestState(Property__Fuse_Font* __this);
void Property__Fuse_Font__OnAddListener(Property__Fuse_Font* __this, ::uDelegate* listener);
::app::Fuse::Font* Property__Fuse_Font__OnGet(Property__Fuse_Font* __this);
void Property__Fuse_Font__OnRemoveListener(Property__Fuse_Font* __this, ::uDelegate* listener);
void Property__Fuse_Font__OnSet(Property__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin);
void Property__Fuse_Font__remove_ValueChanged(Property__Fuse_Font* __this, ::uDelegate* value);
void Property__Fuse_Font__RetainRestState(Property__Fuse_Font* __this);
void Property__Fuse_Font__Set(Property__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin);
void Property__Fuse_Font__SetRestState(Property__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin);

struct Property__Fuse_Font : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Font*> _restState;

    void _ObjInit() { Property__Fuse_Font___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Font__add_ValueChanged(this, value); }
    ::app::Fuse::Font* Get() { return Property__Fuse_Font__Get(this); }
    ::app::Fuse::Font* GetRestState() { return Property__Fuse_Font__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Fuse_Font__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Fuse::Font* OnGet() { return (((Property__Fuse_Font__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Fuse_Font__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Fuse::Font* value, ::uObject* origin) { (((Property__Fuse_Font__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Font__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Font__RetainRestState(this); }
    void Set(::app::Fuse::Font* value, ::uObject* origin) { Property__Fuse_Font__Set(this, value, origin); }
    void SetRestState(::app::Fuse::Font* value, ::uObject* origin) { Property__Fuse_Font__SetRestState(this, value, origin); }
};

}}}


#endif
