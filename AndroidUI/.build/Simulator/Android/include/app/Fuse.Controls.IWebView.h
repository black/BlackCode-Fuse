// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_I_WEB_VIEW_H__
#define __APP_FUSE_CONTROLS_I_WEB_VIEW_H__

#include <app/Fuse.Navigation.IWebViewNavgation.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Controls {

::uInterfaceType* IWebView__typeof();

struct IWebView
{
    ::uString*(*__fp_get_DocumentTitle)(void*);
    ::app::Uno::UX::FileSource*(*__fp_get_File)(void*);
    ::uString*(*__fp_get_Url)(void*);
    void(*__fp_set_File)(void*, ::app::Uno::UX::FileSource*);
    void(*__fp_set_Url)(void*, ::uString*);

    static ::uString* DocumentTitle(::uObject* __this) { return ((IWebView*)uGetInterfacePtr(__this, IWebView__typeof()))->__fp_get_DocumentTitle((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Uno::UX::FileSource* File(::uObject* __this) { return ((IWebView*)uGetInterfacePtr(__this, IWebView__typeof()))->__fp_get_File((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uString* Url(::uObject* __this) { return ((IWebView*)uGetInterfacePtr(__this, IWebView__typeof()))->__fp_get_Url((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void File(::uObject* __this, ::app::Uno::UX::FileSource* value) { ((IWebView*)uGetInterfacePtr(__this, IWebView__typeof()))->__fp_set_File((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
    static void Url(::uObject* __this, ::uString* value) { ((IWebView*)uGetInterfacePtr(__this, IWebView__typeof()))->__fp_set_Url((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}


#endif
