// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_RELOAD_H__
#define __APP_FUSE_NAVIGATION_RELOAD_H__

#include <app/Fuse.Navigation.WebViewNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct Reload;

struct Reload__uType : ::app::Fuse::Navigation::WebViewNavigationTrigger__uType
{
};

Reload__uType* Reload__typeof();

void Reload___ObjInit_2(Reload* __this);
Reload* Reload__New_1(::uStatic* __this);
void Reload__Perform_1(Reload* __this, ::uObject* webView, ::app::Fuse::Node* n);

struct Reload : ::app::Fuse::Navigation::WebViewNavigationTrigger
{
    void _ObjInit_2() { Reload___ObjInit_2(this); }
};

}}}


#endif
