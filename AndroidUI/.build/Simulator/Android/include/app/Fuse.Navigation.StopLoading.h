// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_STOP_LOADING_H__
#define __APP_FUSE_NAVIGATION_STOP_LOADING_H__

#include <app/Fuse.Navigation.WebViewNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct StopLoading;

struct StopLoading__uType : ::app::Fuse::Navigation::WebViewNavigationTrigger__uType
{
};

StopLoading__uType* StopLoading__typeof();

void StopLoading___ObjInit_2(StopLoading* __this);
StopLoading* StopLoading__New_1(::uStatic* __this);
void StopLoading__Perform_1(StopLoading* __this, ::uObject* webView, ::app::Fuse::Node* n);

struct StopLoading : ::app::Fuse::Navigation::WebViewNavigationTrigger
{
    void _ObjInit_2() { StopLoading___ObjInit_2(this); }
};

}}}


#endif
