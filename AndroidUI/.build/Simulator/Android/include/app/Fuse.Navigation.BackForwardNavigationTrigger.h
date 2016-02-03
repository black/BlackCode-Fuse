// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_BACK_FORWARD_NAVIGATION_TRIGGER_H__
#define __APP_FUSE_NAVIGATION_BACK_FORWARD_NAVIGATION_TRIGGER_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct BackForwardNavigationTrigger;

struct BackForwardNavigationTrigger__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
    void(*__fp_Perform_1)(BackForwardNavigationTrigger*, ::uObject*, ::app::Fuse::Node*);
    void(*__fp_Perform_2)(BackForwardNavigationTrigger*, ::uObject*, ::app::Fuse::Node*);
};

BackForwardNavigationTrigger__uType* BackForwardNavigationTrigger__typeof();

void BackForwardNavigationTrigger___ObjInit_1(BackForwardNavigationTrigger* __this);
::uObject* BackForwardNavigationTrigger__get_Context(BackForwardNavigationTrigger* __this);
::uObject* BackForwardNavigationTrigger__get_WebView(BackForwardNavigationTrigger* __this);
void BackForwardNavigationTrigger__Perform(BackForwardNavigationTrigger* __this, ::app::Fuse::Node* n);
void BackForwardNavigationTrigger__set_Context(BackForwardNavigationTrigger* __this, ::uObject* value);
void BackForwardNavigationTrigger__set_WebView(BackForwardNavigationTrigger* __this, ::uObject* value);

struct BackForwardNavigationTrigger : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uObject*> _context;
    ::uStrong< ::uObject*> _webView;

    void _ObjInit_1() { BackForwardNavigationTrigger___ObjInit_1(this); }
    ::uObject* Context() { return BackForwardNavigationTrigger__get_Context(this); }
    ::uObject* WebView() { return BackForwardNavigationTrigger__get_WebView(this); }
    void Perform_1(::uObject* ctx, ::app::Fuse::Node* node) { (((BackForwardNavigationTrigger__uType*)this->__obj_type)->__fp_Perform_1)(this, ctx, node); }
    void Perform_2(::uObject* webView, ::app::Fuse::Node* node) { (((BackForwardNavigationTrigger__uType*)this->__obj_type)->__fp_Perform_2)(this, webView, node); }
    void Context(::uObject* value) { BackForwardNavigationTrigger__set_Context(this, value); }
    void WebView(::uObject* value) { BackForwardNavigationTrigger__set_WebView(this, value); }
};

}}}


#endif
