// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Triggers.IProgress.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct JsResultHandler;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct WebChromeClient;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct WebView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct WebViewClient;}}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class WebView :2010
// {
struct WebView_type : ::g::Fuse::Android::Controls::Control_type
{
    ::g::Fuse::Controls::IWebView interface0;
    ::g::Fuse::Triggers::IProgress interface1;
    ::g::Fuse::Navigation::IBaseNavigation interface2;
    ::g::Fuse::Controls::ISourceReceiver interface3;
};

WebView_type* WebView_typeof();
void WebView__ctor_3_fn(WebView* __this);
void WebView__Attach_fn(WebView* __this);
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval);
void WebView__set_BaseUrl_fn(WebView* __this, uString* value);
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value);
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value);
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval);
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval);
void WebView__CreateInternal_fn(WebView* __this, ::g::Android::android::view::View** __retval);
void WebView__Detach_fn(WebView* __this);
void WebView__Eval_fn(WebView* __this, uString* js);
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler);
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval);
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value);
void WebView__GoBack_fn(WebView* __this);
void WebView__GoForward_fn(WebView* __this);
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file);
void WebView__LoadHtml_fn(WebView* __this, uString* html);
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl);
void WebView__LoadHTML_fn(WebView* __this, uString* html);
void WebView__LoadUrl_fn(WebView* __this, uString* url);
void WebView__New1_fn(WebView** __retval);
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value);
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value);
void WebView__get_Progress_fn(WebView* __this, double* __retval);
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value);
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value);
void WebView__Reload_fn(WebView* __this);
void WebView__get_Source_fn(WebView* __this, uString** __retval);
void WebView__set_Source_fn(WebView* __this, uString* value);
void WebView__Stop_fn(WebView* __this);
void WebView__get_Url_fn(WebView* __this, uString** __retval);
void WebView__set_Url_fn(WebView* __this, uString* value);

struct WebView : ::g::Fuse::Android::Controls::Control
{
    uStrong< ::g::Android::android::webkit::WebView*> _androidWebView;
    uStrong< ::g::Uno::UX::FileSource*> _file;
    uStrong< ::g::Fuse::Android::Controls::JsResultHandler*> _resultHandler;
    uStrong<uString*> _source;
    uStrong< ::g::Fuse::Android::Controls::WebChromeClient*> _webChromeClient;
    uStrong< ::g::Fuse::Android::Controls::WebViewClient*> _webViewClient;
    uStrong<uString*> _BaseUrl;

    void ctor_3();
    uString* BaseUrl();
    void BaseUrl(uString* value);
    void add_BeginLoading(uDelegate* value);
    void remove_BeginLoading(uDelegate* value);
    bool CanGoBack();
    bool CanGoForward();
    void Eval(uString* js);
    void Eval1(uString* js, uDelegate* resultHandler);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void GoBack();
    void GoForward();
    void LoadFile(::g::Uno::UX::FileSource* file);
    void LoadHtml(uString* html);
    void LoadHtml1(uString* html, uString* baseUrl);
    void LoadHTML(uString* html);
    void LoadUrl(uString* url);
    void add_PageLoaded(uDelegate* value);
    void remove_PageLoaded(uDelegate* value);
    double Progress();
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Reload();
    uString* Source();
    void Source(uString* value);
    void Stop();
    uString* Url();
    void Url(uString* value);
    static WebView* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
