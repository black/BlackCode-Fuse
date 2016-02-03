// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_DEFAULT_NAVIGATION_ANIMATOR_H__
#define __APP_FUSE_NAVIGATION_DEFAULT_NAVIGATION_ANIMATOR_H__

#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct DefaultNavigationAnimator;

struct DefaultNavigationAnimator__uType : ::uClassType
{
    ::app::Fuse::Navigation::INavigationAnimator __interface_0;
};

DefaultNavigationAnimator__uType* DefaultNavigationAnimator__typeof();

void DefaultNavigationAnimator___ObjInit(DefaultNavigationAnimator* __this, int index, ::app::Fuse::Node* node);
int DefaultNavigationAnimator__get_Index(DefaultNavigationAnimator* __this);
::app::Fuse::Node* DefaultNavigationAnimator__get_Node(DefaultNavigationAnimator* __this);
DefaultNavigationAnimator* DefaultNavigationAnimator__New_1(::uStatic* __this, int index, ::app::Fuse::Node* node);
void DefaultNavigationAnimator__Update(DefaultNavigationAnimator* __this, double progress, double prevProgress);

struct DefaultNavigationAnimator : ::uObject
{
    int _index;
    ::uStrong< ::app::Fuse::Node*> _node;

    void _ObjInit(int index, ::app::Fuse::Node* node) { DefaultNavigationAnimator___ObjInit(this, index, node); }
    int Index() { return DefaultNavigationAnimator__get_Index(this); }
    ::app::Fuse::Node* Node() { return DefaultNavigationAnimator__get_Node(this); }
    void Update(double progress, double prevProgress) { DefaultNavigationAnimator__Update(this, progress, prevProgress); }
};

}}}


#endif
