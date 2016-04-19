// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.webkit.WebViewClient.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebView;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct WebViewClient;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class WebViewClient :2199
// {
::g::Android::android::webkit::WebViewClient_type* WebViewClient_typeof();
void WebViewClient__ctor_6_fn(WebViewClient* __this);
void WebViewClient__New7_fn(WebViewClient** __retval);
void WebViewClient__onPageFinished_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url);
void WebViewClient__onPageStarted_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url, ::g::Android::android::graphics::Bitmap* favIcon);
void WebViewClient__add_PageLoaded_fn(WebViewClient* __this, uDelegate* value);
void WebViewClient__remove_PageLoaded_fn(WebViewClient* __this, uDelegate* value);
void WebViewClient__add_PageStarted_fn(WebViewClient* __this, uDelegate* value);
void WebViewClient__remove_PageStarted_fn(WebViewClient* __this, uDelegate* value);
void WebViewClient__shouldOverrideUrlLoading_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url, bool* __retval);

struct WebViewClient : ::g::Android::android::webkit::WebViewClient
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    bool loadingFinished;
    bool redirect;
    uStrong<uDelegate*> PageLoaded1;
    uStrong<uDelegate*> PageStarted1;

    void ctor_6();
    void add_PageLoaded(uDelegate* value);
    void remove_PageLoaded(uDelegate* value);
    void add_PageStarted(uDelegate* value);
    void remove_PageStarted(uDelegate* value);
    static WebViewClient* New7();
};
// }

}}}} // ::g::Fuse::Android::Controls
