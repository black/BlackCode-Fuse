// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.Navigation.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct EdgeSwiper;}}}}
namespace g{namespace Fuse{namespace Navigation{struct EdgeNavigation;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class EdgeNavigation :152
// {
::g::Fuse::Navigation::Navigation_type* EdgeNavigation_typeof();
void EdgeNavigation__ctor_2_fn(EdgeNavigation* __this);
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Node** __retval);
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Node* value);
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval);
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this);
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this);
void EdgeNavigation__GetEdge_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this);
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Node* element, int* mode);
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval);
void EdgeNavigation__IsDismissPoint_fn(EdgeNavigation* __this, ::g::Uno::Float2* windowPoint, bool* __retval);
void EdgeNavigation__New1_fn(EdgeNavigation** __retval);
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress);
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* parentNode);
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* parentNode);
void EdgeNavigation__get_PageProgress_fn(EdgeNavigation* __this, double* __retval);
void EdgeNavigation__ResetEdge_fn(::g::Fuse::Elements::Element* elm);
void EdgeNavigation__SetEdge_fn(::g::Fuse::Elements::Element* elm, int* edge);
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Node* page);

struct EdgeNavigation : ::g::Fuse::Navigation::Navigation
{
    uStrong< ::g::Fuse::Node*> _active;
    static uSStrong< ::g::Fuse::PropertyHandle*> _edgeHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _edgeHandle() { return EdgeNavigation_typeof()->Init(), _edgeHandle_; }
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong< ::g::Uno::Collections::List*> _mains;
    uStrong< ::g::Uno::Collections::Dictionary*> _swipers;

    void ctor_2();
    void CheckChildren();
    void ClearChildren();
    bool IsAnyPanelActive();
    bool IsDismissPoint(::g::Uno::Float2 windowPoint);
    void OnProgressChanged(uObject* s, double progress);
    static int GetEdge(::g::Fuse::Elements::Element* elm);
    static EdgeNavigation* New1();
    static void ResetEdge(::g::Fuse::Elements::Element* elm);
    static void SetEdge(::g::Fuse::Elements::Element* elm, int edge);
};
// }

}}} // ::g::Fuse::Navigation
