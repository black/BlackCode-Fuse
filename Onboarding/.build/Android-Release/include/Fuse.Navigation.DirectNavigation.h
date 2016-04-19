// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.Navigation.h>
namespace g{namespace Fuse{namespace Navigation{struct DirectNavigation;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class DirectNavigation :12
// {
::g::Fuse::Navigation::Navigation_type* DirectNavigation_typeof();
void DirectNavigation__GetProgressState_fn(::g::Fuse::Node* elm, int* __retval);
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Node* node, int* mode);
void DirectNavigation__OnChildAdded_fn(DirectNavigation* __this, uObject* s, ::g::Fuse::Node* child);
void DirectNavigation__OnChildRemoved_fn(DirectNavigation* __this, uObject* s, ::g::Fuse::Node* child);
void DirectNavigation__OnRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* parentNode);
void DirectNavigation__get_PageProgress_fn(DirectNavigation* __this, double* __retval);
void DirectNavigation__ResetProgressState_fn(::g::Fuse::Node* elm);
void DirectNavigation__SetProgressState_fn(::g::Fuse::Node* elm, int* progress);
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Node* node, bool* bypass);
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass);

struct DirectNavigation : ::g::Fuse::Navigation::Navigation
{
    uStrong< ::g::Fuse::Node*> _active;
    static uSStrong< ::g::Fuse::PropertyHandle*> _progressStateProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _progressStateProperty() { return DirectNavigation_typeof()->Init(), _progressStateProperty_; }

    void TransitionTo(::g::Fuse::Node* node, bool bypass);
    void UpdateState(bool bypass);
    static int GetProgressState(::g::Fuse::Node* elm);
    static void ResetProgressState(::g::Fuse::Node* elm);
    static void SetProgressState(::g::Fuse::Node* elm, int progress);
};
// }

}}} // ::g::Fuse::Navigation
