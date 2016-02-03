// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PANEL_H__
#define __APP_FUSE_CONTROLS_PANEL_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatcher; } } }
namespace app { namespace Fuse { namespace Layouts { struct Layout; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Panel__Fuse_Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Panel;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node*> Panel__AppearanceProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout*> Panel__LayoutProperty;

struct Panel__uType : ::app::Fuse::Controls::Control__uType
{
    ::app::Fuse::Navigation::INavigationPanel __interface_6;
    ::app::Fuse::Triggers::IAddRemove__Fuse_Node __interface_7;
};

Panel__uType* Panel__typeof();

void Panel___ObjInit_3(Panel* __this);
void Panel___TypeInit_3(::uStatic* __this);
void Panel__add_ChildAdded(Panel* __this, ::uDelegate* value);
void Panel__add_ChildRemoved(Panel* __this, ::uDelegate* value);
void Panel__add_ZOrderChanged(Panel* __this, ::uDelegate* value);
void Panel__AddStyleChild(Panel* __this, ::app::Fuse::Node* child);
void Panel__ArrangePaddingBox(Panel* __this, ::app::Uno::Float2 size);
void Panel__BeginRemoveChild(Panel* __this, ::app::Fuse::Node* child);
void Panel__BringToFront(Panel* __this, ::app::Fuse::Node* item);
::app::Uno::Rect Panel__CalcRenderBounds(Panel* __this);
void Panel__Clear(Panel* __this);
void Panel__EmitZOrderChanged(Panel* __this);
void Panel__EndRemoveChild(Panel* __this, ::app::Fuse::Node* child);
void Panel__EnsureSortedZOrder(Panel* __this);
bool Panel__FastTrackDrawWithOpacity(Panel* __this, ::app::Fuse::DrawContext* dc);
void Panel__Fuse_Navigation_INavigationPanel_AddChild(Panel* __this, ::app::Fuse::Node* n);
void Panel__Fuse_Navigation_INavigationPanel_AddChildAt(Panel* __this, int index, ::app::Fuse::Node* n);
int Panel__Fuse_Navigation_INavigationPanel_get_ChildCount(Panel* __this);
::app::Fuse::Node* Panel__Fuse_Navigation_INavigationPanel_GetChild(Panel* __this, int index);
bool Panel__Fuse_Navigation_INavigationPanel_IsPage(Panel* __this, ::app::Fuse::Node* child);
void Panel__Fuse_Navigation_INavigationPanel_RemoveChild(Panel* __this, ::app::Fuse::Node* child);
void Panel__Fuse_Triggers_IAddRemove_Add(Panel* __this, ::app::Fuse::Node* n);
void Panel__Fuse_Triggers_IAddRemove_Remove(Panel* __this, ::app::Fuse::Node* n);
::app::Fuse::Node* Panel__get_Appearance(Panel* __this);
::uObject* Panel__get_Children(Panel* __this);
bool Panel__get_HasChildren(Panel* __this);
::app::Fuse::Layouts::Layout* Panel__get_Layout(Panel* __this);
int Panel__get_SubNodeCount(Panel* __this);
::app::Uno::Collections::List__Fuse_Node* Panel__get_ZOrder(Panel* __this);
::app::Fuse::Node* Panel__GetAppearance(::uStatic* __this, Panel* c);
::app::Uno::Float2 Panel__GetContentSize(Panel* __this, ::app::Uno::Float2 fillSize, int fillSet);
::uObject* Panel__GetEnumerator(Panel* __this);
::app::Fuse::Layouts::Layout* Panel__GetLayout(::uStatic* __this, Panel* p);
::app::Fuse::Elements::Element* Panel__GetShadowElement(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
::app::Fuse::Node* Panel__GetSubNode(Panel* __this, int index);
::app::Fuse::Node* Panel__GetZOrderChild(Panel* __this, int index);
void Panel__InvalidateZOrder(Panel* __this);
int Panel__IsMarginBoxDependent(Panel* __this, ::app::Fuse::Node* child);
void Panel__ListChildAdded(Panel* __this, ::app::Fuse::Node* item);
void Panel__ListChildRemoved(Panel* __this, ::app::Fuse::Node* child);
Panel* Panel__New_1(::uStatic* __this);
void Panel__OnAppearanceChanged(::uStatic* __this, Panel* c);
void Panel__OnChildAdded(Panel* __this, ::app::Fuse::Node* elm);
void Panel__OnChildRemoved(Panel* __this, ::app::Fuse::Node* elm);
void Panel__OnDrawControl(Panel* __this, ::app::Fuse::DrawContext* dc);
void Panel__OnHitTestChildren(Panel* __this, ::app::Fuse::HitTestContext* htc);
void Panel__OnInvalidateLayout(Panel* __this);
void Panel__OnLayoutChanged(::uStatic* __this, Panel* p);
void Panel__OnResetStyle(Panel* __this);
void Panel__OnRooted(Panel* __this);
void Panel__OnUnrooted(Panel* __this);
void Panel__remove_ChildAdded(Panel* __this, ::uDelegate* value);
void Panel__remove_ChildRemoved(Panel* __this, ::uDelegate* value);
void Panel__remove_ZOrderChanged(Panel* __this, ::uDelegate* value);
void Panel__RemoveStyleChildren(Panel* __this);
void Panel__SendToBack(Panel* __this, ::app::Fuse::Node* item);
void Panel__set_Appearance(Panel* __this, ::app::Fuse::Node* value);
void Panel__set_Layout(Panel* __this, ::app::Fuse::Layouts::Layout* value);
void Panel__SetAppearance(::uStatic* __this, Panel* c, ::app::Fuse::Node* a);
void Panel__SetLayout(::uStatic* __this, Panel* p, ::app::Fuse::Layouts::Layout* value);
void Panel__SetShadowElement(::uStatic* __this, ::app::Fuse::Elements::Element* elm, ::app::Fuse::Elements::Element* shadow);
void Panel__SetSingleChild(Panel* __this, ::app::Fuse::Node* e);
bool Panel__ShouldBatch(Panel* __this);
void Panel__SoftInvalidateZOrder(Panel* __this, bool force);
int Panel__ZOrderComparator(Panel* __this, ::app::Fuse::Node* a, ::app::Fuse::Node* b);

struct Panel : ::app::Fuse::Controls::Control
{
    ::uStrong< ::uObject*> _children;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> _zOrder;
    bool _sortedZOrder;
    bool _nodeZOrders;
    ::uStrong< ::app::Fuse::Elements::ElementBatcher*> _elementBatcher;
    bool _elementBatchValid;
    ::uStrong< ::app::Fuse::Node*> _appearance;
    ::uStrong< ::app::Fuse::Layouts::Layout*> _layout;
    ::uStrong< ::uDelegate*> ZOrderChanged;
    ::uStrong< ::uDelegate*> ChildAdded;
    ::uStrong< ::uDelegate*> ChildRemoved;

    void _ObjInit_3() { Panel___ObjInit_3(this); }
    void add_ChildAdded(::uDelegate* value) { Panel__add_ChildAdded(this, value); }
    void add_ChildRemoved(::uDelegate* value) { Panel__add_ChildRemoved(this, value); }
    void add_ZOrderChanged(::uDelegate* value) { Panel__add_ZOrderChanged(this, value); }
    void AddStyleChild(::app::Fuse::Node* child) { Panel__AddStyleChild(this, child); }
    void BeginRemoveChild(::app::Fuse::Node* child) { Panel__BeginRemoveChild(this, child); }
    void BringToFront(::app::Fuse::Node* item) { Panel__BringToFront(this, item); }
    void Clear() { Panel__Clear(this); }
    void EmitZOrderChanged() { Panel__EmitZOrderChanged(this); }
    void EndRemoveChild(::app::Fuse::Node* child) { Panel__EndRemoveChild(this, child); }
    void EnsureSortedZOrder() { Panel__EnsureSortedZOrder(this); }
    ::app::Fuse::Node* Appearance() { return Panel__get_Appearance(this); }
    ::uObject* Children() { return Panel__get_Children(this); }
    bool HasChildren() { return Panel__get_HasChildren(this); }
    ::app::Fuse::Layouts::Layout* Layout() { return Panel__get_Layout(this); }
    ::app::Uno::Collections::List__Fuse_Node* ZOrder() { return Panel__get_ZOrder(this); }
    ::uObject* GetEnumerator() { return Panel__GetEnumerator(this); }
    ::app::Fuse::Node* GetZOrderChild(int index) { return Panel__GetZOrderChild(this, index); }
    void InvalidateZOrder() { Panel__InvalidateZOrder(this); }
    void ListChildAdded(::app::Fuse::Node* item) { Panel__ListChildAdded(this, item); }
    void ListChildRemoved(::app::Fuse::Node* child) { Panel__ListChildRemoved(this, child); }
    void OnChildAdded(::app::Fuse::Node* elm) { Panel__OnChildAdded(this, elm); }
    void OnChildRemoved(::app::Fuse::Node* elm) { Panel__OnChildRemoved(this, elm); }
    void remove_ChildAdded(::uDelegate* value) { Panel__remove_ChildAdded(this, value); }
    void remove_ChildRemoved(::uDelegate* value) { Panel__remove_ChildRemoved(this, value); }
    void remove_ZOrderChanged(::uDelegate* value) { Panel__remove_ZOrderChanged(this, value); }
    void RemoveStyleChildren() { Panel__RemoveStyleChildren(this); }
    void SendToBack(::app::Fuse::Node* item) { Panel__SendToBack(this, item); }
    void Appearance(::app::Fuse::Node* value) { Panel__set_Appearance(this, value); }
    void Layout(::app::Fuse::Layouts::Layout* value) { Panel__set_Layout(this, value); }
    void SetSingleChild(::app::Fuse::Node* e) { Panel__SetSingleChild(this, e); }
    bool ShouldBatch() { return Panel__ShouldBatch(this); }
    void SoftInvalidateZOrder(bool force) { Panel__SoftInvalidateZOrder(this, force); }
    int ZOrderComparator(::app::Fuse::Node* a, ::app::Fuse::Node* b) { return Panel__ZOrderComparator(this, a, b); }
};

}}}


#endif
