// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_WEB_VIEW_H__
#define __APP_FUSE_ANDROID_WEB_VIEW_H__

#include <app/Fuse.Android.ControlView__Fuse_Controls_WebView.h>
#include <app/Fuse.Controls.IWebView.h>
#include <app/Fuse.Navigation.IWebViewNavgation.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebView; } } } }
namespace app { namespace Fuse { namespace Android { struct WebChromeClient; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Android {

struct WebView;

struct WebView__uType : ::app::Fuse::Android::ControlView__Fuse_Controls_WebView__uType
{
    ::app::Fuse::Controls::IWebView __interface_1;
    ::app::Fuse::Triggers::IProgress __interface_2;
    ::app::Fuse::Navigation::IWebViewNavgation __interface_3;
};

WebView__uType* WebView__typeof();

void WebView___ObjInit_3(WebView* __this);
void WebView__add_ProgressChanged(WebView* __this, ::uDelegate* value);
void WebView__Attach(WebView* __this);
::app::Android::android::view::View* WebView__CreateInternal(WebView* __this);
void WebView__Detach(WebView* __this);
bool WebView__get_CanGoBack(WebView* __this);
bool WebView__get_CanGoForward(WebView* __this);
::uString* WebView__get_DocumentTitle(WebView* __this);
::app::Uno::UX::FileSource* WebView__get_File(WebView* __this);
double WebView__get_Progress(WebView* __this);
::uString* WebView__get_Url(WebView* __this);
void WebView__GoBack(WebView* __this);
void WebView__GoForward(WebView* __this);
void WebView__LoadFile(WebView* __this, ::app::Uno::UX::FileSource* file);
void WebView__LoadUrl(WebView* __this, ::uString* url);
WebView* WebView__New_1(::uStatic* __this);
void WebView__Reload(WebView* __this);
void WebView__remove_ProgressChanged(WebView* __this, ::uDelegate* value);
void WebView__set_File(WebView* __this, ::app::Uno::UX::FileSource* value);
void WebView__set_Url(WebView* __this, ::uString* value);
void WebView__Stop(WebView* __this);

struct WebView : ::app::Fuse::Android::ControlView__Fuse_Controls_WebView
{
    ::uStrong< ::app::Fuse::Android::WebChromeClient*> _webChromeClient;
    ::uStrong< ::app::Android::android::webkit::WebView*> _webView;
    ::uStrong< ::app::Uno::UX::FileSource*> _file;

    void _ObjInit_3() { WebView___ObjInit_3(this); }
    void add_ProgressChanged(::uDelegate* value) { WebView__add_ProgressChanged(this, value); }
    bool CanGoBack() { return WebView__get_CanGoBack(this); }
    bool CanGoForward() { return WebView__get_CanGoForward(this); }
    ::uString* DocumentTitle() { return WebView__get_DocumentTitle(this); }
    ::app::Uno::UX::FileSource* File() { return WebView__get_File(this); }
    double Progress() { return WebView__get_Progress(this); }
    ::uString* Url() { return WebView__get_Url(this); }
    void GoBack() { WebView__GoBack(this); }
    void GoForward() { WebView__GoForward(this); }
    void LoadFile(::app::Uno::UX::FileSource* file) { WebView__LoadFile(this, file); }
    void LoadUrl(::uString* url) { WebView__LoadUrl(this, url); }
    void Reload() { WebView__Reload(this); }
    void remove_ProgressChanged(::uDelegate* value) { WebView__remove_ProgressChanged(this, value); }
    void File(::app::Uno::UX::FileSource* value) { WebView__set_File(this, value); }
    void Url(::uString* value) { WebView__set_Url(this, value); }
    void Stop() { WebView__Stop(this); }
};

}}}


#endif
