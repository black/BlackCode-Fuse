// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WEB_VIEW_NAVIGATION_TRIGGER_H__
#define __APP_FUSE_NAVIGATION_WEB_VIEW_NAVIGATION_TRIGGER_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct WebViewNavigationTrigger;

struct WebViewNavigationTrigger__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
    void(*__fp_Perform_1)(WebViewNavigationTrigger*, ::uObject*, ::app::Fuse::Node*);
};

WebViewNavigationTrigger__uType* WebViewNavigationTrigger__typeof();

void WebViewNavigationTrigger___ObjInit_1(WebViewNavigationTrigger* __this);
::uObject* WebViewNavigationTrigger__get_WebView(WebViewNavigationTrigger* __this);
void WebViewNavigationTrigger__Perform(WebViewNavigationTrigger* __this, ::app::Fuse::Node* target);
void WebViewNavigationTrigger__set_WebView(WebViewNavigationTrigger* __this, ::uObject* value);

struct WebViewNavigationTrigger : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uObject*> _webView;

    void _ObjInit_1() { WebViewNavigationTrigger___ObjInit_1(this); }
    ::uObject* WebView() { return WebViewNavigationTrigger__get_WebView(this); }
    void Perform_1(::uObject* webView, ::app::Fuse::Node* n) { (((WebViewNavigationTrigger__uType*)this->__obj_type)->__fp_Perform_1)(this, webView, n); }
    void WebView(::uObject* value) { WebViewNavigationTrigger__set_WebView(this, value); }
};

}}}


#endif
