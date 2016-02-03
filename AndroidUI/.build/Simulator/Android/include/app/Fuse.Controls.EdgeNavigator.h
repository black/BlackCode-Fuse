// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_EDGE_NAVIGATOR_H__
#define __APP_FUSE_CONTROLS_EDGE_NAVIGATOR_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Gestures { struct TappedArgs; } } }
namespace app { namespace Fuse { namespace Navigation { struct EdgeNavigation; } } }
namespace app { namespace Fuse { namespace Navigation { struct Navigation; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {

struct EdgeNavigator;

struct EdgeNavigator__uType : ::app::Fuse::Controls::Panel__uType
{
};

EdgeNavigator__uType* EdgeNavigator__typeof();

void EdgeNavigator___ObjInit_4(EdgeNavigator* __this);
::app::Fuse::Node* EdgeNavigator__get_Active(EdgeNavigator* __this);
::app::Fuse::Navigation::Navigation* EdgeNavigator__get_Navigation(EdgeNavigator* __this);
void EdgeNavigator__InitializeUX(EdgeNavigator* __this);
EdgeNavigator* EdgeNavigator__New_2(::uStatic* __this);
void EdgeNavigator__OnApplyStyle(EdgeNavigator* __this, ::uObject* o);
void EdgeNavigator__OnTapped(EdgeNavigator* __this, ::uObject* s, ::app::Fuse::Gestures::TappedArgs* args);
void EdgeNavigator__set_Active(EdgeNavigator* __this, ::app::Fuse::Node* value);
void EdgeNavigator__SetupEdge(EdgeNavigator* __this, ::app::Fuse::Elements::Element* elm, ::app::Uno::Float2 rel, int align);
void EdgeNavigator__SetupMain(EdgeNavigator* __this, ::app::Fuse::Elements::Element* elm);

struct EdgeNavigator : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Navigation::EdgeNavigation*> _navigation;

    void _ObjInit_4() { EdgeNavigator___ObjInit_4(this); }
    ::app::Fuse::Node* Active() { return EdgeNavigator__get_Active(this); }
    ::app::Fuse::Navigation::Navigation* Navigation() { return EdgeNavigator__get_Navigation(this); }
    void InitializeUX() { EdgeNavigator__InitializeUX(this); }
    void OnTapped(::uObject* s, ::app::Fuse::Gestures::TappedArgs* args) { EdgeNavigator__OnTapped(this, s, args); }
    void Active(::app::Fuse::Node* value) { EdgeNavigator__set_Active(this, value); }
    void SetupEdge(::app::Fuse::Elements::Element* elm, ::app::Uno::Float2 rel, int align);
    void SetupMain(::app::Fuse::Elements::Element* elm) { EdgeNavigator__SetupMain(this, elm); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {

inline void EdgeNavigator::SetupEdge(::app::Fuse::Elements::Element* elm, ::app::Uno::Float2 rel, int align) { EdgeNavigator__SetupEdge(this, elm, rel, align); }

}}}


#endif
