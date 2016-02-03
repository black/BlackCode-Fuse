// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Elements.Element_GMSCacheItem.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }
namespace app { namespace Fuse { namespace Elements { struct BoxSizing; } } }
namespace app { namespace Fuse { namespace Elements { struct Cache; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatchEntry; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__bool; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__float; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__float4; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility; } }
namespace app { namespace Fuse { struct StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit; } }
namespace app { namespace Fuse { struct StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Effects_Effect; } } }
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Fuse {
namespace Elements {

struct Element;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*> Element__AlignmentProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*> Element__AnchorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode*> Element__CachingModeProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__bool*> Element__ClipToBoundsProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__HeightProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*> Element__HitTestModeProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*> Element__MarginProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__MaxHeightProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__MaxWidthProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__MinHeightProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__MinWidthProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*> Element__OffsetProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float*> Element__OpacityProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*> Element__PaddingProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility*> Element__VisibilityProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__WidthProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__XProperty;
extern ::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__YProperty;

struct Element__uType : ::app::Fuse::Node__uType
{
    ::app::Fuse::Triggers::Actions::IShow __interface_1;
    ::app::Fuse::Triggers::Actions::IHide __interface_2;
    ::app::Fuse::Triggers::Actions::ICollapse __interface_3;
    ::app::Fuse::IActualPlacement __interface_4;
    ::app::Fuse::Animations::IResize __interface_5;
    void(*__fp_ArrangePaddingBox)(Element*, ::app::Uno::Float2);
    ::app::Uno::Rect(*__fp_CalcRenderBounds)(Element*);
    bool(*__fp_FastTrackDrawWithOpacity)(Element*, ::app::Fuse::DrawContext*);
    ::app::Fuse::NodeBounds*(*__fp_get_HitTestLocalVisualBounds)(Element*);
    ::app::Uno::Float2(*__fp_GetContentSize)(Element*, ::app::Uno::Float2, int);
    void(*__fp_OnDraw)(Element*, ::app::Fuse::DrawContext*);
    void(*__fp_OnHitTestChildren)(Element*, ::app::Fuse::HitTestContext*);
    void(*__fp_OnHitTestLocalVisual)(Element*, ::app::Fuse::HitTestContext*);
};

Element__uType* Element__typeof();

void Element___ObjInit_1(Element* __this);
void Element___TypeInit_1(::uStatic* __this);
void Element__add_LayoutChanged(Element* __this, ::uDelegate* value);
void Element__add_Placed(Element* __this, ::uDelegate* value);
void Element__add_PropertyChanged(Element* __this, ::uDelegate* value);
void Element__AddStyleEffect(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__ArrangePaddingBox(Element* __this, ::app::Uno::Float2 avsize);
::app::Uno::Rect Element__CalcRenderBounds(Element* __this);
::app::Uno::Rect Element__CalcRenderBoundsWithEffects(Element* __this);
::app::Uno::Graphics::Framebuffer* Element__CaptureRegion(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect region, ::app::Uno::Float2 padding);
void Element__Composit(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__CompositEffects(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__DispatchPlacement(Element* __this);
void Element__Draw(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__DrawSelection(Element* __this, ::app::Fuse::DrawContext* dc);
bool Element__FastTrackDrawWithOpacity(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__Fuse_Animations_IResize_SetSize(Element* __this, ::app::Uno::Float2 size);
::app::Uno::Float3 Element__Fuse_IActualPlacement_get_ActualPosition(Element* __this);
::app::Uno::Float3 Element__Fuse_IActualPlacement_get_ActualSize(Element* __this);
void Element__Fuse_Triggers_Actions_ICollapse_Collapse(Element* __this);
void Element__Fuse_Triggers_Actions_IHide_Hide(Element* __this);
void Element__Fuse_Triggers_Actions_IShow_Show(Element* __this);
::app::Uno::Float2 Element__get_AbsoluteViewportOrigin(Element* __this);
::app::Uno::Float2 Element__get_ActualAnchor(Element* __this);
::app::Uno::Float2 Element__get_ActualPosition(Element* __this);
::app::Uno::Float2 Element__get_ActualSize(Element* __this);
int Element__get_Alignment(Element* __this);
Element* Element__get_AncestorElement(Element* __this);
::app::Uno::Float2 Element__get_Anchor(Element* __this);
int Element__get_BoxSizing(Element* __this);
::app::Fuse::Elements::Cache* Element__get_Cache(Element* __this);
int Element__get_CachingMode(Element* __this);
bool Element__get_ClipToBounds(Element* __this);
::uObject* Element__get_Effects(Element* __this);
::app::Fuse::Elements::ElementBatchEntry* Element__get_ElementBatchEntry(Element* __this);
bool Element__get_HasActiveEffects(Element* __this);
bool Element__get_HasCompositionEffect(Element* __this);
bool Element__get_HasEffects(Element* __this);
float Element__get_Height(Element* __this);
::app::Fuse::NodeBounds* Element__get_HitTestChildrenBounds(Element* __this);
::app::Fuse::NodeBounds* Element__get_HitTestLocalBounds(Element* __this);
::app::Fuse::NodeBounds* Element__get_HitTestLocalVisualBounds(Element* __this);
int Element__get_HitTestMode(Element* __this);
float Element__get_HitTestOpacityThreshold(Element* __this);
bool Element__get_IsLocalVisible(Element* __this);
::app::Uno::Geometry::Box Element__get_LocalBounds(Element* __this);
::app::Uno::Rect Element__get_LocalRenderBounds(Element* __this);
::app::Uno::Float4 Element__get_Margin(Element* __this);
float Element__get_MaxHeight(Element* __this);
float Element__get_MaxWidth(Element* __this);
float Element__get_MinHeight(Element* __this);
float Element__get_MinWidth(Element* __this);
bool Element__get_NeedsClipping(Element* __this);
::app::Uno::Float2 Element__get_Offset(Element* __this);
float Element__get_Opacity(Element* __this);
::app::Uno::Float4 Element__get_Padding(Element* __this);
::app::Uno::Rect Element__get_RenderBoundsWithEffects(Element* __this);
::app::Uno::Rect Element__get_RenderBoundsWithoutEffects(Element* __this);
::uObject* Element__get_TransformOrigin(Element* __this);
int Element__get_Visibility(Element* __this);
float Element__get_Width(Element* __this);
float Element__get_X(Element* __this);
float Element__get_Y(Element* __this);
int Element__GetCachingMode(::uStatic* __this, Element* elm);
::app::Uno::Float2 Element__GetContentSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet);
float Element__GetHeight(::uStatic* __this, Element* elm);
::app::Uno::Float2 Element__GetMarginSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Recti Element__GetViewportInvertPixelRect(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion);
::app::Uno::Recti Element__GetVisibleViewportInvertPixelRect(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion);
float Element__GetWidth(::uStatic* __this, Element* elm);
void Element__GMSReset(Element* __this);
void Element__InternArrangePaddingBox(Element* __this, ::app::Uno::Float2 avsize);
::app::Uno::Float2 Element__InternGetContentSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet);
void Element__InvalidateLocalTransform(Element* __this);
void Element__InvalidateRenderBoundsWithEffects(Element* __this);
void Element__InvalidateVisual(Element* __this);
void Element__InvalidateVisualComposition(Element* __this);
int Element__IsMarginBoxDependent(Element* __this, ::app::Fuse::Node* child);
bool Element__IsPointInside(Element* __this, ::app::Uno::Float2 localPoint);
bool Element__IsSelectionParentOf(Element* __this, Element* elm);
void Element__LocalDraw(Element* __this, ::app::Fuse::DrawContext* dc);
void Element__NotifyPropertyChanged(Element* __this);
::app::Uno::Float2 Element__OnArrangeMarginBox(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void Element__OnCachingModeChanged(::uStatic* __this, Element* elm);
void Element__OnClipToBoundsChanged(::uStatic* __this, Element* elm);
void Element__OnEffectAdded(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__OnEffectRemoved(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__OnEffectRenderBoundsChanged(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__OnEffectRenderingChanged(Element* __this, ::app::Fuse::Effects::Effect* e);
void Element__OnHitTest(Element* __this, ::app::Fuse::HitTestContext* htc);
void Element__OnHitTestChildren(Element* __this, ::app::Fuse::HitTestContext* htc);
void Element__OnHitTestLocalVisual(Element* __this, ::app::Fuse::HitTestContext* htc);
void Element__OnInvalidateLayout(Element* __this);
bool Element__OnInvalidateRenderBounds(Element* __this);
void Element__OnInvalidateRenderBoundsWithEffects(Element* __this);
void Element__OnIsEnabledChanged(Element* __this);
void Element__OnOpacityChanged(::uStatic* __this, Element* elm);
void Element__OnResetStyle(Element* __this);
void Element__OnRooted(Element* __this);
void Element__OnSaveLayoutState(Element* __this);
void Element__OnUnrooted(Element* __this);
void Element__OnVisibilityChanged(::uStatic* __this, Element* elm);
void Element__PerformPlacement(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 size);
void Element__PrependImplicitTransform(Element* __this, ::app::Fuse::FastMatrix* m);
void Element__PrependInverseTransformOrigin(Element* __this, ::app::Fuse::FastMatrix* m);
void Element__PrependTransformOrigin(Element* __this, ::app::Fuse::FastMatrix* m);
void Element__remove_LayoutChanged(Element* __this, ::uDelegate* value);
void Element__remove_Placed(Element* __this, ::uDelegate* value);
void Element__remove_PropertyChanged(Element* __this, ::uDelegate* value);
void Element__set_ActualAnchor(Element* __this, ::app::Uno::Float2 value);
void Element__set_Alignment(Element* __this, int value);
void Element__set_Anchor(Element* __this, ::app::Uno::Float2 value);
void Element__set_BoxSizing(Element* __this, int value);
void Element__set_CachingMode(Element* __this, int value);
void Element__set_ClipToBounds(Element* __this, bool value);
void Element__set_ElementBatchEntry(Element* __this, ::app::Fuse::Elements::ElementBatchEntry* value);
void Element__set_Height(Element* __this, float value);
void Element__set_HitTestMode(Element* __this, int value);
void Element__set_HitTestOpacityThreshold(Element* __this, float value);
void Element__set_Margin(Element* __this, ::app::Uno::Float4 value);
void Element__set_MaxHeight(Element* __this, float value);
void Element__set_MaxWidth(Element* __this, float value);
void Element__set_MinHeight(Element* __this, float value);
void Element__set_MinWidth(Element* __this, float value);
void Element__set_Offset(Element* __this, ::app::Uno::Float2 value);
void Element__set_Opacity(Element* __this, float value);
void Element__set_Padding(Element* __this, ::app::Uno::Float4 value);
void Element__set_TransformOrigin(Element* __this, ::uObject* value);
void Element__set_Visibility(Element* __this, int value);
void Element__set_Width(Element* __this, float value);
void Element__set_X(Element* __this, float value);
void Element__set_Y(Element* __this, float value);
void Element__SetCachingMode(::uStatic* __this, Element* elm, int value);
void Element__SetHeight(::uStatic* __this, Element* elm, float val);
void Element__SetWidth(::uStatic* __this, Element* elm, float val);
float Element__UnitSize(Element* __this, float scalar, int unit, float fill, bool secondary, bool* known);

struct Element : ::app::Fuse::Node
{
    ::app::Uno::Rect _renderBoundsWithEffects;
    ::app::Uno::Rect _renderBoundsWithoutEffects;
    int _cachingMode;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*> _effects;
    int _compositionEffects;
    ::uStrong< ::app::Fuse::Elements::Cache*> _cache;
    float _hitTestOpacityThreshold;
    float _width;
    float _height;
    int _oldVisibility;
    ::app::Uno::Float2 _actualPosition;
    ::app::Uno::Float2 _actualPositionCache;
    bool _haveActualPositionCache;
    ::app::Uno::Float2 _actualSize;
    int _gmsCount;
    int _gmsAt;
    ::uStrong< ::uArray*> _gmsCache;
    ::uStrong< ::app::Fuse::Elements::BoxSizing*> _boxSizing;
    int _boxSizingMode;
    ::app::Uno::Float2 _actualAnchor;
    ::uStrong< ::app::Fuse::Node*> _placedBefore;
    ::app::Uno::Float4x4 _ppPrevWorldTransform;
    ::app::Uno::Float2 _ppPrevSize;
    ::app::Uno::Float2 _ppPrevPosition;
    bool _ppPrevPlacedBefore;
    ::uStrong< ::uObject*> _transformOrigin;
    bool _renderBoundsWithoutEffectsDirty;
    bool _renderBoundsWithEffectsDirty;
    ::uStrong< ::uDelegate*> LayoutChanged;
    ::uStrong< ::uDelegate*> PropertyChanged;
    ::uStrong< ::uDelegate*> Placed;
    ::uStrong< ::app::Fuse::Elements::ElementBatchEntry*> _ElementBatchEntry;

    void _ObjInit_1() { Element___ObjInit_1(this); }
    void add_LayoutChanged(::uDelegate* value) { Element__add_LayoutChanged(this, value); }
    void add_Placed(::uDelegate* value) { Element__add_Placed(this, value); }
    void add_PropertyChanged(::uDelegate* value) { Element__add_PropertyChanged(this, value); }
    void AddStyleEffect(::app::Fuse::Effects::Effect* e) { Element__AddStyleEffect(this, e); }
    void ArrangePaddingBox(::app::Uno::Float2 avsize);
    ::app::Uno::Rect CalcRenderBounds();
    ::app::Uno::Rect CalcRenderBoundsWithEffects();
    ::app::Uno::Graphics::Framebuffer* CaptureRegion(::app::Fuse::DrawContext* dc, ::app::Uno::Rect region, ::app::Uno::Float2 padding);
    void Composit(::app::Fuse::DrawContext* dc) { Element__Composit(this, dc); }
    void CompositEffects(::app::Fuse::DrawContext* dc) { Element__CompositEffects(this, dc); }
    void DispatchPlacement() { Element__DispatchPlacement(this); }
    bool FastTrackDrawWithOpacity(::app::Fuse::DrawContext* dc) { return (((Element__uType*)this->__obj_type)->__fp_FastTrackDrawWithOpacity)(this, dc); }
    ::app::Uno::Float2 ActualAnchor();
    ::app::Uno::Float2 ActualPosition();
    ::app::Uno::Float2 ActualSize();
    int Alignment() { return Element__get_Alignment(this); }
    Element* AncestorElement() { return Element__get_AncestorElement(this); }
    ::app::Uno::Float2 Anchor();
    int BoxSizing() { return Element__get_BoxSizing(this); }
    ::app::Fuse::Elements::Cache* Cache() { return Element__get_Cache(this); }
    int CachingMode() { return Element__get_CachingMode(this); }
    bool ClipToBounds() { return Element__get_ClipToBounds(this); }
    ::uObject* Effects() { return Element__get_Effects(this); }
    ::app::Fuse::Elements::ElementBatchEntry* ElementBatchEntry() { return Element__get_ElementBatchEntry(this); }
    bool HasActiveEffects() { return Element__get_HasActiveEffects(this); }
    bool HasCompositionEffect() { return Element__get_HasCompositionEffect(this); }
    bool HasEffects() { return Element__get_HasEffects(this); }
    float Height() { return Element__get_Height(this); }
    ::app::Fuse::NodeBounds* HitTestLocalVisualBounds() { return (((Element__uType*)this->__obj_type)->__fp_get_HitTestLocalVisualBounds)(this); }
    int HitTestMode() { return Element__get_HitTestMode(this); }
    float HitTestOpacityThreshold() { return Element__get_HitTestOpacityThreshold(this); }
    ::app::Uno::Float4 Margin();
    float MaxHeight() { return Element__get_MaxHeight(this); }
    float MaxWidth() { return Element__get_MaxWidth(this); }
    float MinHeight() { return Element__get_MinHeight(this); }
    float MinWidth() { return Element__get_MinWidth(this); }
    bool NeedsClipping() { return Element__get_NeedsClipping(this); }
    ::app::Uno::Float2 Offset();
    float Opacity() { return Element__get_Opacity(this); }
    ::app::Uno::Float4 Padding();
    ::app::Uno::Rect RenderBoundsWithEffects();
    ::app::Uno::Rect RenderBoundsWithoutEffects();
    ::uObject* TransformOrigin() { return Element__get_TransformOrigin(this); }
    int Visibility() { return Element__get_Visibility(this); }
    float Width() { return Element__get_Width(this); }
    float X() { return Element__get_X(this); }
    float Y() { return Element__get_Y(this); }
    ::app::Uno::Float2 GetContentSize(::app::Uno::Float2 fillSize, int fillSet);
    ::app::Uno::Recti GetViewportInvertPixelRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion);
    ::app::Uno::Recti GetVisibleViewportInvertPixelRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion);
    void GMSReset() { Element__GMSReset(this); }
    void InternArrangePaddingBox(::app::Uno::Float2 avsize);
    ::app::Uno::Float2 InternGetContentSize(::app::Uno::Float2 fillSize, int fillSet);
    void InvalidateRenderBoundsWithEffects() { Element__InvalidateRenderBoundsWithEffects(this); }
    void InvalidateVisualComposition() { Element__InvalidateVisualComposition(this); }
    bool IsPointInside(::app::Uno::Float2 localPoint);
    bool IsSelectionParentOf(Element* elm) { return Element__IsSelectionParentOf(this, elm); }
    void LocalDraw(::app::Fuse::DrawContext* dc) { Element__LocalDraw(this, dc); }
    void NotifyPropertyChanged() { Element__NotifyPropertyChanged(this); }
    void OnDraw(::app::Fuse::DrawContext* dc) { (((Element__uType*)this->__obj_type)->__fp_OnDraw)(this, dc); }
    void OnEffectAdded(::app::Fuse::Effects::Effect* e) { Element__OnEffectAdded(this, e); }
    void OnEffectRemoved(::app::Fuse::Effects::Effect* e) { Element__OnEffectRemoved(this, e); }
    void OnEffectRenderBoundsChanged(::app::Fuse::Effects::Effect* e) { Element__OnEffectRenderBoundsChanged(this, e); }
    void OnEffectRenderingChanged(::app::Fuse::Effects::Effect* e) { Element__OnEffectRenderingChanged(this, e); }
    void OnHitTestChildren(::app::Fuse::HitTestContext* htc) { (((Element__uType*)this->__obj_type)->__fp_OnHitTestChildren)(this, htc); }
    void OnHitTestLocalVisual(::app::Fuse::HitTestContext* htc) { (((Element__uType*)this->__obj_type)->__fp_OnHitTestLocalVisual)(this, htc); }
    void OnInvalidateRenderBoundsWithEffects() { Element__OnInvalidateRenderBoundsWithEffects(this); }
    void PerformPlacement(::app::Uno::Float2 position, ::app::Uno::Float2 size);
    void remove_LayoutChanged(::uDelegate* value) { Element__remove_LayoutChanged(this, value); }
    void remove_Placed(::uDelegate* value) { Element__remove_Placed(this, value); }
    void remove_PropertyChanged(::uDelegate* value) { Element__remove_PropertyChanged(this, value); }
    void ActualAnchor(::app::Uno::Float2 value);
    void Alignment(int value) { Element__set_Alignment(this, value); }
    void Anchor(::app::Uno::Float2 value);
    void BoxSizing(int value) { Element__set_BoxSizing(this, value); }
    void CachingMode(int value) { Element__set_CachingMode(this, value); }
    void ClipToBounds(bool value) { Element__set_ClipToBounds(this, value); }
    void ElementBatchEntry(::app::Fuse::Elements::ElementBatchEntry* value) { Element__set_ElementBatchEntry(this, value); }
    void Height(float value) { Element__set_Height(this, value); }
    void HitTestMode(int value) { Element__set_HitTestMode(this, value); }
    void HitTestOpacityThreshold(float value) { Element__set_HitTestOpacityThreshold(this, value); }
    void Margin(::app::Uno::Float4 value);
    void MaxHeight(float value) { Element__set_MaxHeight(this, value); }
    void MaxWidth(float value) { Element__set_MaxWidth(this, value); }
    void MinHeight(float value) { Element__set_MinHeight(this, value); }
    void MinWidth(float value) { Element__set_MinWidth(this, value); }
    void Offset(::app::Uno::Float2 value);
    void Opacity(float value) { Element__set_Opacity(this, value); }
    void Padding(::app::Uno::Float4 value);
    void TransformOrigin(::uObject* value) { Element__set_TransformOrigin(this, value); }
    void Visibility(int value) { Element__set_Visibility(this, value); }
    void Width(float value) { Element__set_Width(this, value); }
    void X(float value) { Element__set_X(this, value); }
    void Y(float value) { Element__set_Y(this, value); }
    float UnitSize(float scalar, int unit, float fill, bool secondary, bool* known) { return Element__UnitSize(this, scalar, unit, fill, secondary, known); }
};

}}}

#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Recti.h>

namespace app {
namespace Fuse {
namespace Elements {

inline void Element::ArrangePaddingBox(::app::Uno::Float2 avsize) { (((Element__uType*)this->__obj_type)->__fp_ArrangePaddingBox)(this, avsize); }
inline ::app::Uno::Rect Element::CalcRenderBounds() { return (((Element__uType*)this->__obj_type)->__fp_CalcRenderBounds)(this); }
inline ::app::Uno::Rect Element::CalcRenderBoundsWithEffects() { return Element__CalcRenderBoundsWithEffects(this); }
inline ::app::Uno::Graphics::Framebuffer* Element::CaptureRegion(::app::Fuse::DrawContext* dc, ::app::Uno::Rect region, ::app::Uno::Float2 padding) { return Element__CaptureRegion(this, dc, region, padding); }
inline ::app::Uno::Float2 Element::ActualAnchor() { return Element__get_ActualAnchor(this); }
inline ::app::Uno::Float2 Element::ActualPosition() { return Element__get_ActualPosition(this); }
inline ::app::Uno::Float2 Element::ActualSize() { return Element__get_ActualSize(this); }
inline ::app::Uno::Float2 Element::Anchor() { return Element__get_Anchor(this); }
inline ::app::Uno::Float4 Element::Margin() { return Element__get_Margin(this); }
inline ::app::Uno::Float2 Element::Offset() { return Element__get_Offset(this); }
inline ::app::Uno::Float4 Element::Padding() { return Element__get_Padding(this); }
inline ::app::Uno::Rect Element::RenderBoundsWithEffects() { return Element__get_RenderBoundsWithEffects(this); }
inline ::app::Uno::Rect Element::RenderBoundsWithoutEffects() { return Element__get_RenderBoundsWithoutEffects(this); }
inline ::app::Uno::Float2 Element::GetContentSize(::app::Uno::Float2 fillSize, int fillSet) { return (((Element__uType*)this->__obj_type)->__fp_GetContentSize)(this, fillSize, fillSet); }
inline ::app::Uno::Recti Element::GetViewportInvertPixelRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion) { return Element__GetViewportInvertPixelRect(this, dc, localRegion); }
inline ::app::Uno::Recti Element::GetVisibleViewportInvertPixelRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion) { return Element__GetVisibleViewportInvertPixelRect(this, dc, localRegion); }
inline void Element::InternArrangePaddingBox(::app::Uno::Float2 avsize) { Element__InternArrangePaddingBox(this, avsize); }
inline ::app::Uno::Float2 Element::InternGetContentSize(::app::Uno::Float2 fillSize, int fillSet) { return Element__InternGetContentSize(this, fillSize, fillSet); }
inline bool Element::IsPointInside(::app::Uno::Float2 localPoint) { return Element__IsPointInside(this, localPoint); }
inline void Element::PerformPlacement(::app::Uno::Float2 position, ::app::Uno::Float2 size) { Element__PerformPlacement(this, position, size); }
inline void Element::ActualAnchor(::app::Uno::Float2 value) { Element__set_ActualAnchor(this, value); }
inline void Element::Anchor(::app::Uno::Float2 value) { Element__set_Anchor(this, value); }
inline void Element::Margin(::app::Uno::Float4 value) { Element__set_Margin(this, value); }
inline void Element::Offset(::app::Uno::Float2 value) { Element__set_Offset(this, value); }
inline void Element::Padding(::app::Uno::Float4 value) { Element__set_Padding(this, value); }

}}}


#endif
