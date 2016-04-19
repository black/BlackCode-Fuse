// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.INavigationAnimator.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct DefaultNavigationAnimator;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class DefaultNavigationAnimator :25
// {
struct DefaultNavigationAnimator_type : uType
{
    ::g::Fuse::Navigation::INavigationAnimator interface0;
};

DefaultNavigationAnimator_type* DefaultNavigationAnimator_typeof();
void DefaultNavigationAnimator__ctor__fn(DefaultNavigationAnimator* __this, int* index, ::g::Fuse::Node* node);
void DefaultNavigationAnimator__New1_fn(int* index, ::g::Fuse::Node* node, DefaultNavigationAnimator** __retval);
void DefaultNavigationAnimator__get_Node_fn(DefaultNavigationAnimator* __this, ::g::Fuse::Node** __retval);
void DefaultNavigationAnimator__Update_fn(DefaultNavigationAnimator* __this, double* progress, double* prevProgress);

struct DefaultNavigationAnimator : uObject
{
    int _index;
    uStrong< ::g::Fuse::Node*> _node;

    void ctor_(int index, ::g::Fuse::Node* node);
    ::g::Fuse::Node* Node();
    void Update(double progress, double prevProgress);
    static DefaultNavigationAnimator* New1(int index, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Navigation
