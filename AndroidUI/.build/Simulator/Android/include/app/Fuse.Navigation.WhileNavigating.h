// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_NAVIGATING_H__
#define __APP_FUSE_NAVIGATION_WHILE_NAVIGATING_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationStateArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileNavigating;

struct WhileNavigating__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

WhileNavigating__uType* WhileNavigating__typeof();

void WhileNavigating___ObjInit_2(WhileNavigating* __this);
WhileNavigating* WhileNavigating__New_1(::uStatic* __this);
void WhileNavigating__OnRooted(WhileNavigating* __this, ::app::Fuse::Node* elm);
void WhileNavigating__OnStateChange(WhileNavigating* __this, ::uObject* s, ::app::Fuse::Navigation::NavigationStateArgs* args);
void WhileNavigating__OnUnrooted(WhileNavigating* __this, ::app::Fuse::Node* elm);

struct WhileNavigating : ::app::Fuse::Triggers::Trigger
{
    void _ObjInit_2() { WhileNavigating___ObjInit_2(this); }
    void OnStateChange(::uObject* s, ::app::Fuse::Navigation::NavigationStateArgs* args) { WhileNavigating__OnStateChange(this, s, args); }
};

}}}


#endif
