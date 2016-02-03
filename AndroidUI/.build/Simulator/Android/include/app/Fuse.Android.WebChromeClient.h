// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_WEB_CHROME_CLIENT_H__
#define __APP_FUSE_ANDROID_WEB_CHROME_CLIENT_H__

#include <app/Android.android.webkit.WebChromeClient.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace webkit { struct WebView; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct WebChromeClient;

extern jclass WebChromeClient___javaClass_3;

struct WebChromeClient__uType : ::app::Android::android::webkit::WebChromeClient__uType
{
};

WebChromeClient__uType* WebChromeClient__typeof();

void WebChromeClient___ObjInit_6(WebChromeClient* __this);
void WebChromeClient__add_ProgressChanged(WebChromeClient* __this, ::uDelegate* value);
WebChromeClient* WebChromeClient__New_7(::uStatic* __this);
void WebChromeClient__onProgressChanged(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, int arg1);
void WebChromeClient__remove_ProgressChanged(WebChromeClient* __this, ::uDelegate* value);

struct WebChromeClient : ::app::Android::android::webkit::WebChromeClient
{
    ::uStrong< ::uDelegate*> ProgressChanged;

    void _ObjInit_6() { WebChromeClient___ObjInit_6(this); }
    void add_ProgressChanged(::uDelegate* value) { WebChromeClient__add_ProgressChanged(this, value); }
    void remove_ProgressChanged(::uDelegate* value) { WebChromeClient__remove_ProgressChanged(this, value); }
};

}}}


#endif
