// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_LOAD_URL_H__
#define __APP_FUSE_NAVIGATION_LOAD_URL_H__

#include <app/Fuse.Navigation.WebViewNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct LoadUrl;

struct LoadUrl__uType : ::app::Fuse::Navigation::WebViewNavigationTrigger__uType
{
};

LoadUrl__uType* LoadUrl__typeof();

void LoadUrl___ObjInit_2(LoadUrl* __this);
::uString* LoadUrl__get_Url(LoadUrl* __this);
LoadUrl* LoadUrl__New_1(::uStatic* __this);
void LoadUrl__Perform_1(LoadUrl* __this, ::uObject* webView, ::app::Fuse::Node* n);
void LoadUrl__set_Url(LoadUrl* __this, ::uString* value);

struct LoadUrl : ::app::Fuse::Navigation::WebViewNavigationTrigger
{
    ::uStrong< ::uString*> _Url;

    void _ObjInit_2() { LoadUrl___ObjInit_2(this); }
    ::uString* Url() { return LoadUrl__get_Url(this); }
    void Url(::uString* value) { LoadUrl__set_Url(this, value); }
};

}}}


#endif
