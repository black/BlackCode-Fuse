// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_GO_FORWARD_H__
#define __APP_FUSE_NAVIGATION_GO_FORWARD_H__

#include <app/Fuse.Navigation.BackForwardNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct GoForward;

struct GoForward__uType : ::app::Fuse::Navigation::BackForwardNavigationTrigger__uType
{
};

GoForward__uType* GoForward__typeof();

void GoForward___ObjInit_2(GoForward* __this);
GoForward* GoForward__New_1(::uStatic* __this);
void GoForward__Perform_1(GoForward* __this, ::uObject* ctx, ::app::Fuse::Node* node);
void GoForward__Perform_2(GoForward* __this, ::uObject* webView, ::app::Fuse::Node* node);

struct GoForward : ::app::Fuse::Navigation::BackForwardNavigationTrigger
{
    void _ObjInit_2() { GoForward___ObjInit_2(this); }
};

}}}


#endif
