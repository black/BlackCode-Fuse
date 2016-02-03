// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher;}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class Panel :1789
// {
struct Panel_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Navigation::INavigationPanel interface6;
    ::g::Fuse::Triggers::IAddRemove interface7;
};

Panel_type* Panel_typeof();
void Panel__ctor_3_fn(Panel* __this);
void Panel__AddStyleChild_fn(Panel* __this, ::g::Fuse::Node* child);
void Panel__get_Appearance_fn(Panel* __this, ::g::Fuse::Node** __retval);
void Panel__set_Appearance_fn(Panel* __this, ::g::Fuse::Node* value);
void Panel__ArrangePaddingBox_fn(Panel* __this, ::g::Uno::Float2* size, int* flags);
void Panel__BeginRemoveChild_fn(Panel* __this, ::g::Fuse::Node* child);
void Panel__BringToFront_fn(Panel* __this, ::g::Fuse::Node* item);
void Panel__CalcRenderBounds_fn(Panel* __this, ::g::Uno::Rect* __retval);
void Panel__add_ChildAdded_fn(Panel* __this, uDelegate* value);
void Panel__remove_ChildAdded_fn(Panel* __this, uDelegate* value);
void Panel__add_ChildRemoved_fn(Panel* __this, uDelegate* value);
void Panel__remove_ChildRemoved_fn(Panel* __this, uDelegate* value);
void Panel__get_Children_fn(Panel* __this, uObject** __retval);
void Panel__EmitZOrderChanged_fn(Panel* __this);
void Panel__EndRemoveChild_fn(Panel* __this, ::g::Fuse::Node* child);
void Panel__EnsureSortedZOrder_fn(Panel* __this);
void Panel__FastTrackDrawWithOpacity_fn(Panel* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Panel__Fuse_Navigation_INavigationPanel_AddChild_fn(Panel* __this, ::g::Fuse::Node* n);
void Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn(Panel* __this, int* index, ::g::Fuse::Node* n);
void Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn(Panel* __this, int* __retval);
void Panel__Fuse_Navigation_INavigationPanel_GetChild_fn(Panel* __this, int* index, ::g::Fuse::Node** __retval);
void Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn(Panel* __this, ::g::Fuse::Node* child);
void Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn(Panel* __this, ::g::Fuse::Node* n);
void Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn(Panel* __this, ::g::Fuse::Node* n);
void Panel__GetAppearance_fn(Panel* c, ::g::Fuse::Node** __retval);
void Panel__GetContentSize_fn(Panel* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Panel__GetLayout_fn(Panel* p, ::g::Fuse::Layouts::Layout** __retval);
void Panel__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval);
void Panel__GetSubNode_fn(Panel* __this, int* index, ::g::Fuse::Node** __retval);
void Panel__GetZOrderChild_fn(Panel* __this, int* index, ::g::Fuse::Node** __retval);
void Panel__get_HasChildren_fn(Panel* __this, bool* __retval);
void Panel__InvalidateZOrder_fn(Panel* __this);
void Panel__IsMarginBoxDependent_fn(Panel* __this, ::g::Fuse::Node* child, int* __retval);
void Panel__get_Layout_fn(Panel* __this, ::g::Fuse::Layouts::Layout** __retval);
void Panel__set_Layout_fn(Panel* __this, ::g::Fuse::Layouts::Layout* value);
void Panel__ListChildAdded_fn(Panel* __this, ::g::Fuse::Node* item);
void Panel__ListChildRemoved_fn(Panel* __this, ::g::Fuse::Node* child);
void Panel__New1_fn(Panel** __retval);
void Panel__OnAppearanceChanged_fn(Panel* c);
void Panel__OnChildAdded_fn(Panel* __this, ::g::Fuse::Node* elm);
void Panel__OnChildRemoved_fn(Panel* __this, ::g::Fuse::Node* elm);
void Panel__OnDrawControl_fn(Panel* __this, ::g::Fuse::DrawContext* dc);
void Panel__OnHitTestChildren_fn(Panel* __this, ::g::Fuse::HitTestContext* htc);
void Panel__OnInvalidateLayout_fn(Panel* __this);
void Panel__OnLayoutChanged_fn(Panel* p);
void Panel__OnResetStyle_fn(Panel* __this);
void Panel__OnRooted_fn(Panel* __this);
void Panel__OnUnrooted_fn(Panel* __this);
void Panel__RemoveStyleChildren_fn(Panel* __this);
void Panel__SendToBack_fn(Panel* __this, ::g::Fuse::Node* item);
void Panel__SetAppearance_fn(Panel* c, ::g::Fuse::Node* a);
void Panel__SetLayout_fn(Panel* p, ::g::Fuse::Layouts::Layout* value);
void Panel__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
void Panel__SetSingleChild_fn(Panel* __this, ::g::Fuse::Node* e);
void Panel__ShouldBatch_fn(Panel* __this, bool* __retval);
void Panel__SoftInvalidateZOrder_fn(Panel* __this, bool* force);
void Panel__get_SubNodeCount_fn(Panel* __this, int* __retval);
void Panel__get_ZOrder_fn(Panel* __this, ::g::Uno::Collections::List** __retval);
void Panel__add_ZOrderChanged_fn(Panel* __this, uDelegate* value);
void Panel__remove_ZOrderChanged_fn(Panel* __this, uDelegate* value);
void Panel__ZOrderComparator_fn(Panel* __this, ::g::Fuse::Node* a, ::g::Fuse::Node* b, int* __retval);

struct Panel : ::g::Fuse::Controls::Control
{
    uStrong< ::g::Fuse::Node*> _appearance;
    uStrong<uObject*> _children;
    uStrong< ::g::Fuse::Elements::ElementBatcher*> _elementBatcher;
    bool _elementBatchValid;
    uStrong< ::g::Fuse::Layouts::Layout*> _layout;
    bool _nodeZOrders;
    bool _sortedZOrder;
    uStrong< ::g::Uno::Collections::List*> _zOrder;
    static uSStrong< ::g::Fuse::StyleProperty1*> AppearanceProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& AppearanceProperty() { return Panel_typeof()->Init(), AppearanceProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> LayoutProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& LayoutProperty() { return Panel_typeof()->Init(), LayoutProperty_; }
    uStrong<uDelegate*> ChildAdded1;
    uStrong<uDelegate*> ChildRemoved1;
    uStrong<uDelegate*> ZOrderChanged1;

    void ctor_3();
    void AddStyleChild(::g::Fuse::Node* child);
    ::g::Fuse::Node* Appearance();
    void Appearance(::g::Fuse::Node* value);
    void BeginRemoveChild(::g::Fuse::Node* child);
    void BringToFront(::g::Fuse::Node* item);
    void add_ChildAdded(uDelegate* value);
    void remove_ChildAdded(uDelegate* value);
    void add_ChildRemoved(uDelegate* value);
    void remove_ChildRemoved(uDelegate* value);
    uObject* Children();
    void EmitZOrderChanged();
    void EndRemoveChild(::g::Fuse::Node* child);
    void EnsureSortedZOrder();
    ::g::Fuse::Node* GetZOrderChild(int index);
    bool HasChildren();
    void InvalidateZOrder();
    ::g::Fuse::Layouts::Layout* Layout();
    void Layout(::g::Fuse::Layouts::Layout* value);
    void ListChildAdded(::g::Fuse::Node* item);
    void ListChildRemoved(::g::Fuse::Node* child);
    void OnChildAdded(::g::Fuse::Node* elm);
    void OnChildRemoved(::g::Fuse::Node* elm);
    void RemoveStyleChildren();
    void SendToBack(::g::Fuse::Node* item);
    void SetSingleChild(::g::Fuse::Node* e);
    bool ShouldBatch();
    void SoftInvalidateZOrder(bool force);
    ::g::Uno::Collections::List* ZOrder();
    void add_ZOrderChanged(uDelegate* value);
    void remove_ZOrderChanged(uDelegate* value);
    int ZOrderComparator(::g::Fuse::Node* a, ::g::Fuse::Node* b);
    static ::g::Fuse::Node* GetAppearance(Panel* c);
    static ::g::Fuse::Layouts::Layout* GetLayout(Panel* p);
    static ::g::Fuse::Elements::Element* GetLayoutMaster(::g::Fuse::Elements::Element* elm);
    static Panel* New1();
    static void OnAppearanceChanged(Panel* c);
    static void OnLayoutChanged(Panel* p);
    static void SetAppearance(Panel* c, ::g::Fuse::Node* a);
    static void SetLayout(Panel* p, ::g::Fuse::Layouts::Layout* value);
    static void SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
};
// }

}}} // ::g::Fuse::Controls
