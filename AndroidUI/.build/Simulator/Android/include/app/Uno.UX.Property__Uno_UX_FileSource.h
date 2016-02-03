// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__UNO_U_X_FILE_SOURCE_H__
#define __APP_UNO_U_X_PROPERTY__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Uno_UX_FileSource;

struct Property__Uno_UX_FileSource__uType : ::uClassType
{
    void(*__fp_OnAddListener)(Property__Uno_UX_FileSource*, ::uDelegate*);
    ::app::Uno::UX::FileSource*(*__fp_OnGet)(Property__Uno_UX_FileSource*);
    void(*__fp_OnRemoveListener)(Property__Uno_UX_FileSource*, ::uDelegate*);
    void(*__fp_OnSet)(Property__Uno_UX_FileSource*, ::app::Uno::UX::FileSource*, ::uObject*);
};

Property__Uno_UX_FileSource__uType* Property__Uno_UX_FileSource__typeof();

void Property__Uno_UX_FileSource___ObjInit(Property__Uno_UX_FileSource* __this);
void Property__Uno_UX_FileSource__add_ValueChanged(Property__Uno_UX_FileSource* __this, ::uDelegate* value);
::app::Uno::UX::FileSource* Property__Uno_UX_FileSource__Get(Property__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* Property__Uno_UX_FileSource__GetRestState(Property__Uno_UX_FileSource* __this);
void Property__Uno_UX_FileSource__OnAddListener(Property__Uno_UX_FileSource* __this, ::uDelegate* listener);
::app::Uno::UX::FileSource* Property__Uno_UX_FileSource__OnGet(Property__Uno_UX_FileSource* __this);
void Property__Uno_UX_FileSource__OnRemoveListener(Property__Uno_UX_FileSource* __this, ::uDelegate* listener);
void Property__Uno_UX_FileSource__OnSet(Property__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin);
void Property__Uno_UX_FileSource__remove_ValueChanged(Property__Uno_UX_FileSource* __this, ::uDelegate* value);
void Property__Uno_UX_FileSource__RetainRestState(Property__Uno_UX_FileSource* __this);
void Property__Uno_UX_FileSource__Set(Property__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin);
void Property__Uno_UX_FileSource__SetRestState(Property__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin);

struct Property__Uno_UX_FileSource : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Uno::UX::FileSource*> _restState;

    void _ObjInit() { Property__Uno_UX_FileSource___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Uno_UX_FileSource__add_ValueChanged(this, value); }
    ::app::Uno::UX::FileSource* Get() { return Property__Uno_UX_FileSource__Get(this); }
    ::app::Uno::UX::FileSource* GetRestState() { return Property__Uno_UX_FileSource__GetRestState(this); }
    void OnAddListener(::uDelegate* listener) { (((Property__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_OnAddListener)(this, listener); }
    ::app::Uno::UX::FileSource* OnGet() { return (((Property__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { (((Property__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_OnRemoveListener)(this, listener); }
    void OnSet(::app::Uno::UX::FileSource* value, ::uObject* origin) { (((Property__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Uno_UX_FileSource__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Uno_UX_FileSource__RetainRestState(this); }
    void Set(::app::Uno::UX::FileSource* value, ::uObject* origin) { Property__Uno_UX_FileSource__Set(this, value, origin); }
    void SetRestState(::app::Uno::UX::FileSource* value, ::uObject* origin) { Property__Uno_UX_FileSource__SetRestState(this, value, origin); }
};

}}}


#endif
