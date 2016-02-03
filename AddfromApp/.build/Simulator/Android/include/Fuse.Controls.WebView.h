// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
#include <Fuse.Triggers.IProgress.h>
namespace g{namespace Fuse{namespace Controls{struct HTML;}}}
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class WebView :58
// {
struct WebView_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Controls::IWebView interface8;
    ::g::Fuse::Triggers::IProgress interface9;
    ::g::Fuse::Navigation::IBaseNavigation interface10;
    ::g::Fuse::Controls::ISourceReceiver interface11;
};

WebView_type* WebView_typeof();
void WebView__ctor_4_fn(WebView* __this);
void WebView__applyFallbackCalls_fn(WebView* __this, uObject* client);
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval);
void WebView__set_BaseUrl_fn(WebView* __this, uString* value);
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value);
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value);
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval);
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval);
void WebView__get_DocumentTitle_fn(WebView* __this, uString** __retval);
void WebView__Eval_fn(WebView* __this, uString* js);
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler);
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval);
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value);
void WebView__GoBack_fn(WebView* __this);
void WebView__GoForward_fn(WebView* __this);
void WebView__get_HTMLSource_fn(WebView* __this, ::g::Fuse::Controls::HTML** __retval);
void WebView__set_HTMLSource_fn(WebView* __this, ::g::Fuse::Controls::HTML* value);
void WebView__LoadHtml_fn(WebView* __this, uString* html);
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl);
void WebView__LoadUrl_fn(WebView* __this, uString* url);
void WebView__New2_fn(WebView** __retval);
void WebView__OnBeginLoading_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WebView__OnPageLoaded_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WebView__OnProgressChanged_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args);
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
void WebView__get_WebViewClient_fn(WebView* __this, uObject** __retval);
void WebView__set_WebViewClient_fn(WebView* __this, uObject* value);

struct WebView : ::g::Fuse::Controls::Panel
{
    uStrong<uObject*> _fallbackClient;
    uStrong< ::g::Fuse::Controls::HTML*> _html;
    uStrong<uObject*> _webViewClient;
    uStrong<uDelegate*> BeginLoading1;
    uStrong<uDelegate*> PageLoaded1;
    uStrong<uDelegate*> ProgressChanged1;

    void ctor_4();
    void applyFallbackCalls(uObject* client);
    uString* BaseUrl();
    void BaseUrl(uString* value);
    void add_BeginLoading(uDelegate* value);
    void remove_BeginLoading(uDelegate* value);
    bool CanGoBack();
    bool CanGoForward();
    uString* DocumentTitle();
    void Eval(uString* js);
    void Eval1(uString* js, uDelegate* resultHandler);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void GoBack();
    void GoForward();
    ::g::Fuse::Controls::HTML* HTMLSource();
    void HTMLSource(::g::Fuse::Controls::HTML* value);
    void LoadHtml(uString* html);
    void LoadHtml1(uString* html, uString* baseUrl);
    void LoadUrl(uString* url);
    void OnBeginLoading(uObject* sender, ::g::Uno::EventArgs* args);
    void OnPageLoaded(uObject* sender, ::g::Uno::EventArgs* args);
    void OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args);
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
    uObject* WebViewClient();
    void WebViewClient(uObject* value);
    static WebView* New2();
};
// }

}}} // ::g::Fuse::Controls
