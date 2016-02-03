// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.webkit.WebChromeClient.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace webkit{struct WebView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct WebChromeClient;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class WebChromeClient :2186
// {
::g::Android::android::webkit::WebChromeClient_type* WebChromeClient_typeof();
void WebChromeClient__ctor_6_fn(WebChromeClient* __this);
void WebChromeClient__New7_fn(WebChromeClient** __retval);
void WebChromeClient__onProgressChanged_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1);
void WebChromeClient__add_ProgressChanged_fn(WebChromeClient* __this, uDelegate* value);
void WebChromeClient__remove_ProgressChanged_fn(WebChromeClient* __this, uDelegate* value);

struct WebChromeClient : ::g::Android::android::webkit::WebChromeClient
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    uStrong<uDelegate*> ProgressChanged1;

    void ctor_6();
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    static WebChromeClient* New7();
};
// }

}}}} // ::g::Fuse::Android::Controls
