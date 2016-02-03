// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_WEB_VIEW_H__
#define __APP_FUSE_CONTROLS_WEB_VIEW_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.IWebView.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Navigation.IWebViewNavgation.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Controls {

struct WebView;

struct WebView__uType : ::app::Fuse::Controls::Panel__uType
{
    ::app::Fuse::Controls::IWebView __interface_8;
    ::app::Fuse::Triggers::IProgress __interface_9;
    ::app::Fuse::Navigation::IWebViewNavgation __interface_10;
};

WebView__uType* WebView__typeof();

void WebView___ObjInit_4(WebView* __this);
void WebView__add_ProgressChanged(WebView* __this, ::uDelegate* value);
bool WebView__get_CanGoBack(WebView* __this);
bool WebView__get_CanGoForward(WebView* __this);
::uString* WebView__get_DocumentTitle(WebView* __this);
::app::Uno::UX::FileSource* WebView__get_File(WebView* __this);
double WebView__get_Progress(WebView* __this);
::uString* WebView__get_Url(WebView* __this);
::uObject* WebView__get_WebViewClient(WebView* __this);
void WebView__GoBack(WebView* __this);
void WebView__GoForward(WebView* __this);
void WebView__LoadUrl(WebView* __this, ::uString* url);
WebView* WebView__New_2(::uStatic* __this);
void WebView__OnProgressChanged(WebView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WebView__Reload(WebView* __this);
void WebView__remove_ProgressChanged(WebView* __this, ::uDelegate* value);
void WebView__set_File(WebView* __this, ::app::Uno::UX::FileSource* value);
void WebView__set_Url(WebView* __this, ::uString* value);
void WebView__set_WebViewClient(WebView* __this, ::uObject* value);
void WebView__Stop(WebView* __this);

struct WebView : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::uObject*> _fallbackClient;
    ::uStrong< ::uObject*> _webViewClient;
    ::uStrong< ::uDelegate*> ProgressChanged;

    void _ObjInit_4() { WebView___ObjInit_4(this); }
    void add_ProgressChanged(::uDelegate* value) { WebView__add_ProgressChanged(this, value); }
    bool CanGoBack() { return WebView__get_CanGoBack(this); }
    bool CanGoForward() { return WebView__get_CanGoForward(this); }
    ::uString* DocumentTitle() { return WebView__get_DocumentTitle(this); }
    ::app::Uno::UX::FileSource* File() { return WebView__get_File(this); }
    double Progress() { return WebView__get_Progress(this); }
    ::uString* Url() { return WebView__get_Url(this); }
    ::uObject* WebViewClient() { return WebView__get_WebViewClient(this); }
    void GoBack() { WebView__GoBack(this); }
    void GoForward() { WebView__GoForward(this); }
    void LoadUrl(::uString* url) { WebView__LoadUrl(this, url); }
    void OnProgressChanged(::uObject* sender, ::app::Uno::EventArgs* args) { WebView__OnProgressChanged(this, sender, args); }
    void Reload() { WebView__Reload(this); }
    void remove_ProgressChanged(::uDelegate* value) { WebView__remove_ProgressChanged(this, value); }
    void File(::app::Uno::UX::FileSource* value) { WebView__set_File(this, value); }
    void Url(::uString* value) { WebView__set_Url(this, value); }
    void WebViewClient(::uObject* value) { WebView__set_WebViewClient(this, value); }
    void Stop() { WebView__Stop(this); }
};

}}}


#endif
