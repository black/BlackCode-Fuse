// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProperty;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public static class NavigationPageProperty :1163
// {
uClassType* NavigationPageProperty_typeof();
void NavigationPageProperty__SetNavigationPage_fn(::g::Fuse::Node* n, ::g::Fuse::Node* page);

struct NavigationPageProperty : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _pageProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _pageProperty() { return NavigationPageProperty_typeof()->Init(), _pageProperty_; }
    static uSStrong< ::g::Uno::Collections::List*> RootedBindings_;
    static uSStrong< ::g::Uno::Collections::List*>& RootedBindings() { return NavigationPageProperty_typeof()->Init(), RootedBindings_; }

    static void SetNavigationPage(::g::Fuse::Node* n, ::g::Fuse::Node* page);
};
// }

}}} // ::g::Fuse::Navigation
