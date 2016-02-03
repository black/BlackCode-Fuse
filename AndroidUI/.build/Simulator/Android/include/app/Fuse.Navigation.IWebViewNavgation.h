// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_I_WEB_VIEW_NAVGATION_H__
#define __APP_FUSE_NAVIGATION_I_WEB_VIEW_NAVGATION_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

::uInterfaceType* IWebViewNavgation__typeof();

struct IWebViewNavgation
{
    bool(*__fp_get_CanGoBack)(void*);
    bool(*__fp_get_CanGoForward)(void*);
    void(*__fp_GoBack)(void*);
    void(*__fp_GoForward)(void*);
    void(*__fp_LoadUrl)(void*, ::uString*);
    void(*__fp_Reload)(void*);
    void(*__fp_Stop)(void*);

    static bool CanGoBack(::uObject* __this) { return ((IWebViewNavgation*)uGetInterfacePtr(__this, IWebViewNavgation__typeof()))->__fp_get_CanGoBack((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool CanGoForward(::uObject* __this) { return ((IWebViewNavgation*)uGetInterfacePtr(__this, IWebViewNavgation__typeof()))->__fp_get_CanGoForward((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void GoBack(::uObject* __this) { ((IWebViewNavgation*)uGetInterfacePtr(__this, IWebViewNavgation__typeof()))->__fp_GoBack((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void GoForward(::uObject* __this) { ((IWebViewNavgation*)uGetInterfacePtr(__this, IWebViewNavgation__typeof()))->__fp_GoForward((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void LoadUrl(::uObject* __this, ::uString* url) { ((IWebViewNavgation*)uGetInterfacePtr(__this, IWebViewNavgation__typeof()))->__fp_LoadUrl((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), url); }
    static void Reload(::uObject* __this) { ((IWebViewNavgation*)uGetInterfacePtr(__this, IWebViewNavgation__typeof()))->__fp_Reload((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void Stop(::uObject* __this) { ((IWebViewNavgation*)uGetInterfacePtr(__this, IWebViewNavgation__typeof()))->__fp_Stop((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
