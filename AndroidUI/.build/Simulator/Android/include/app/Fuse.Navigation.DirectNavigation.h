// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_DIRECT_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_DIRECT_NAVIGATION_H__

#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct DirectNavigation;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> DirectNavigation___indexProperty;

struct DirectNavigation__uType : ::app::Fuse::Navigation::Navigation__uType
{
};

DirectNavigation__uType* DirectNavigation__typeof();

void DirectNavigation___ObjInit_2(DirectNavigation* __this);
void DirectNavigation___TypeInit_1(::uStatic* __this);
::app::Fuse::Node* DirectNavigation__get_Active(DirectNavigation* __this);
double DirectNavigation__get_PageProgress(DirectNavigation* __this);
int DirectNavigation__GetPageIndex_1(::uStatic* __this, ::app::Fuse::Node* elm);
void DirectNavigation__Goto(DirectNavigation* __this, ::app::Fuse::Node* node, int mode);
DirectNavigation* DirectNavigation__New_1(::uStatic* __this);
void DirectNavigation__OnChildAdded(DirectNavigation* __this, ::uObject* s, ::app::Fuse::Node* child);
void DirectNavigation__OnChildRemoved(DirectNavigation* __this, ::uObject* s, ::app::Fuse::Node* child);
void DirectNavigation__OnRooted(DirectNavigation* __this, ::app::Fuse::Node* node);
void DirectNavigation__ResetIndex(::uStatic* __this, ::app::Fuse::Node* elm);
void DirectNavigation__set_Active(DirectNavigation* __this, ::app::Fuse::Node* value);
void DirectNavigation__SetIndex(::uStatic* __this, ::app::Fuse::Node* elm, int index);
void DirectNavigation__TransitionTo(DirectNavigation* __this, ::app::Fuse::Node* node, bool bypass);
void DirectNavigation__UpdateState(DirectNavigation* __this, bool bypass);

struct DirectNavigation : ::app::Fuse::Navigation::Navigation
{
    ::uStrong< ::app::Fuse::Node*> _active;

    void _ObjInit_2() { DirectNavigation___ObjInit_2(this); }
    void TransitionTo(::app::Fuse::Node* node, bool bypass) { DirectNavigation__TransitionTo(this, node, bypass); }
    void UpdateState(bool bypass) { DirectNavigation__UpdateState(this, bypass); }
};

}}}


#endif
