// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WEBKIT_WEB_CHROME_CLIENT_D_L_R_CUSTOM_VIEW_CALLBACK_H__
#define __APP_ANDROID_ANDROID_WEBKIT_WEB_CHROME_CLIENT_D_L_R_CUSTOM_VIEW_CALLBACK_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace webkit {

::uInterfaceType* WebChromeClientDLRCustomViewCallback__typeof();

struct WebChromeClientDLRCustomViewCallback
{
    void(*__fp_onCustomViewHidden)(void*);

    static void onCustomViewHidden(::uObject* __this) { ((WebChromeClientDLRCustomViewCallback*)uGetInterfacePtr(__this, WebChromeClientDLRCustomViewCallback__typeof()))->__fp_onCustomViewHidden((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}}


#endif
