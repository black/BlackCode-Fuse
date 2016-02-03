// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.GMSCacheItem.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float2.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Effects{struct Effect;}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing;}}}
namespace g{namespace Fuse{namespace Elements{struct Cache;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatchEntry;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Fuse{struct StylePropertyWithUnit;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace Elements{

// public interfacemodifiers class Element :439
// {
struct Element_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Triggers::Actions::IShow interface1;
    ::g::Fuse::Triggers::Actions::IHide interface2;
    ::g::Fuse::Triggers::Actions::ICollapse interface3;
    ::g::Fuse::IActualPlacement interface4;
    ::g::Fuse::Animations::IResize interface5;
    void(*fp_ArrangePaddingBox)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*);
    void(*fp_CalcRenderBounds)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*);
    void(*fp_FastTrackDrawWithOpacity)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*, bool*);
    void(*fp_GetContentSize)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*);
    void(*fp_get_HitTestLocalVisualBounds)(::g::Fuse::Elements::Element*, ::g::Fuse::NodeBounds**);
    void(*fp_OnDraw)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*);
    void(*fp_OnHitTestChildren)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*);
    void(*fp_OnHitTestLocalVisual)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*);
};

Element_type* Element_typeof();
void Element__ctor_1_fn(Element* __this);
void Element__get_AbsoluteViewportOrigin_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__get_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__set_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* value);
void Element__get_ActualPosition_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__AddStyleEffect_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__get_Alignment_fn(Element* __this, int* __retval);
void Element__set_Alignment_fn(Element* __this, int* value);
void Element__get_AncestorElement_fn(Element* __this, Element** __retval);
void Element__get_Anchor_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__set_Anchor_fn(Element* __this, ::g::Uno::Float2* value);
void Element__ArrangePaddingBox_fn(Element* __this, ::g::Uno::Float2* avsize, int* flags);
void Element__get_BoxSizing_fn(Element* __this, int* __retval);
void Element__set_BoxSizing_fn(Element* __this, int* value);
void Element__get_BoxSizingObject_fn(Element* __this, ::g::Fuse::Elements::BoxSizing** __retval);
void Element__get_Cache_fn(Element* __this, ::g::Fuse::Elements::Cache** __retval);
void Element__get_CachingMode_fn(Element* __this, int* __retval);
void Element__set_CachingMode_fn(Element* __this, int* value);
void Element__CalcRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval);
void Element__CalcRenderBoundsWithEffects_fn(Element* __this, ::g::Uno::Rect* __retval);
void Element__get_CanAdjustMarginBox_fn(Element* __this, bool* __retval);
void Element__CaptureRegion_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* region, ::g::Uno::Float2* padding, ::g::Uno::Graphics::Framebuffer** __retval);
void Element__get_ClipToBounds_fn(Element* __this, bool* __retval);
void Element__set_ClipToBounds_fn(Element* __this, bool* value);
void Element__Composit_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__CompositEffects_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__DispatchPlacement_fn(Element* __this);
void Element__Draw_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__DrawSelection_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__get_Effects_fn(Element* __this, uObject** __retval);
void Element__get_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry** __retval);
void Element__set_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry* value);
void Element__FastTrackDrawWithOpacity_fn(Element* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Element__Fuse_Animations_IResize_SetSize_fn(Element* __this, ::g::Uno::Float2* size);
void Element__Fuse_IActualPlacement_get_ActualPosition_fn(Element* __this, ::g::Uno::Float3* __retval);
void Element__Fuse_IActualPlacement_get_ActualSize_fn(Element* __this, ::g::Uno::Float3* __retval);
void Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn(Element* __this);
void Element__Fuse_Triggers_Actions_IHide_Hide_fn(Element* __this);
void Element__Fuse_Triggers_Actions_IShow_Show_fn(Element* __this);
void Element__GetCachingMode_fn(Element* elm, int* __retval);
void Element__GetContentSize_fn(Element* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Element__GetHeight_fn(Element* elm, float* __retval);
void Element__GetMarginSize_fn(Element* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Element__GetTransformOrigin_fn(Element* elm, uObject** __retval);
void Element__GetViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval);
void Element__GetVisibleViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval);
void Element__GetWidth_fn(Element* elm, float* __retval);
void Element__GMSReset_fn(Element* __this);
void Element__get_HasActiveEffects_fn(Element* __this, bool* __retval);
void Element__get_HasCompositionEffect_fn(Element* __this, bool* __retval);
void Element__get_HasEffects_fn(Element* __this, bool* __retval);
void Element__get_Height_fn(Element* __this, float* __retval);
void Element__set_Height_fn(Element* __this, float* value);
void Element__get_HitTestChildrenBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval);
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval);
void Element__get_HitTestLocalVisualBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval);
void Element__get_HitTestMode_fn(Element* __this, int* __retval);
void Element__set_HitTestMode_fn(Element* __this, int* value);
void Element__get_IntendedPosition_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__get_IntendedSize_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__InternArrangePaddingBox_fn(Element* __this, ::g::Uno::Float2* avsize, int* flags);
void Element__InternGetContentSize_fn(Element* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Element__InvalidateLocalTransform_fn(Element* __this);
void Element__InvalidateLocalTransform1_fn(Element* elm);
void Element__InvalidateRenderBoundsWithEffects_fn(Element* __this);
void Element__InvalidateVisual_fn(Element* __this);
void Element__InvalidateVisualComposition_fn(Element* __this);
void Element__get_IsLocalVisible_fn(Element* __this, bool* __retval);
void Element__IsMarginBoxDependent_fn(Element* __this, ::g::Fuse::Node* child, int* __retval);
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval);
void Element__get_LimitHeight_fn(Element* __this, float* __retval);
void Element__set_LimitHeight_fn(Element* __this, float* value);
void Element__get_LimitWidth_fn(Element* __this, float* __retval);
void Element__set_LimitWidth_fn(Element* __this, float* value);
void Element__get_LocalBounds_fn(Element* __this, ::g::Uno::Geometry::Box* __retval);
void Element__LocalDraw_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval);
void Element__get_Margin_fn(Element* __this, ::g::Uno::Float4* __retval);
void Element__set_Margin_fn(Element* __this, ::g::Uno::Float4* value);
void Element__get_MaxHeight_fn(Element* __this, float* __retval);
void Element__set_MaxHeight_fn(Element* __this, float* value);
void Element__get_MaxWidth_fn(Element* __this, float* __retval);
void Element__set_MaxWidth_fn(Element* __this, float* value);
void Element__get_MinHeight_fn(Element* __this, float* __retval);
void Element__set_MinHeight_fn(Element* __this, float* value);
void Element__get_MinWidth_fn(Element* __this, float* __retval);
void Element__set_MinWidth_fn(Element* __this, float* value);
void Element__get_NeedsClipping_fn(Element* __this, bool* __retval);
void Element__NotifyPropertyChanged_fn(Element* __this);
void Element__get_Offset_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__set_Offset_fn(Element* __this, ::g::Uno::Float2* value);
void Element__OnAdjustMarginBoxPosition_fn(Element* __this, ::g::Uno::Float2* position);
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval);
void Element__OnCachingModeChanged_fn(Element* elm);
void Element__OnClipToBoundsChanged_fn(Element* elm);
void Element__OnEffectAdded_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__OnEffectRemoved_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__OnEffectRenderBoundsChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__OnEffectRenderingChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc);
void Element__OnHitTestChildren_fn(Element* __this, ::g::Fuse::HitTestContext* htc);
void Element__OnHitTestLocalVisual_fn(Element* __this, ::g::Fuse::HitTestContext* htc);
void Element__OnInvalidateLayout_fn(Element* __this);
void Element__OnInvalidateRenderBounds_fn(Element* __this, bool* __retval);
void Element__OnInvalidateRenderBoundsWithEffects_fn(Element* __this);
void Element__OnIsEnabledChanged_fn(Element* __this);
void Element__OnOpacityChanged_fn(Element* elm);
void Element__OnPreplacement_fn(Element* __this);
void Element__OnResetStyle_fn(Element* __this);
void Element__OnRooted_fn(Element* __this);
void Element__OnUnrooted_fn(Element* __this);
void Element__OnVisibilityChanged_fn(Element* elm);
void Element__get_Opacity_fn(Element* __this, float* __retval);
void Element__set_Opacity_fn(Element* __this, float* value);
void Element__get_Padding_fn(Element* __this, ::g::Uno::Float4* __retval);
void Element__set_Padding_fn(Element* __this, ::g::Uno::Float4* value);
void Element__PerformPlacement_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, int* flags);
void Element__add_Placed_fn(Element* __this, uDelegate* value);
void Element__remove_Placed_fn(Element* __this, uDelegate* value);
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m);
void Element__PrependInverseTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m);
void Element__PrependTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m);
void Element__add_Preplacement_fn(Element* __this, uDelegate* value);
void Element__remove_Preplacement_fn(Element* __this, uDelegate* value);
void Element__add_PropertyChanged_fn(Element* __this, uDelegate* value);
void Element__remove_PropertyChanged_fn(Element* __this, uDelegate* value);
void Element__get_RenderBoundsWithEffects_fn(Element* __this, ::g::Uno::Rect* __retval);
void Element__get_RenderBoundsWithoutEffects_fn(Element* __this, ::g::Uno::Rect* __retval);
void Element__RequestLayout_fn(Element* __this);
void Element__SetCachingMode_fn(Element* elm, int* value);
void Element__SetHeight_fn(Element* elm, float* val);
void Element__SetTransformOrigin_fn(Element* elm, uObject* value);
void Element__SetWidth_fn(Element* elm, float* val);
void Element__get_TransformOrigin_fn(Element* __this, uObject** __retval);
void Element__set_TransformOrigin_fn(Element* __this, uObject* value);
void Element__get_Visibility_fn(Element* __this, int* __retval);
void Element__set_Visibility_fn(Element* __this, int* value);
void Element__get_Width_fn(Element* __this, float* __retval);
void Element__set_Width_fn(Element* __this, float* value);
void Element__get_X_fn(Element* __this, float* __retval);
void Element__set_X_fn(Element* __this, float* value);
void Element__get_Y_fn(Element* __this, float* __retval);
void Element__set_Y_fn(Element* __this, float* value);

struct Element : ::g::Fuse::Node
{
    ::g::Uno::Float2 _actualAnchor;
    ::g::Uno::Float2 _actualPosition;
    ::g::Uno::Float2 _actualPositionCache;
    ::g::Uno::Float2 _actualSize;
    uStrong< ::g::Fuse::Elements::BoxSizing*> _boxSizing;
    int _boxSizingMode;
    uStrong< ::g::Fuse::Elements::Cache*> _cache;
    int _cachingMode;
    int _compositionEffects;
    uStrong< ::g::Uno::Collections::ObservableList*> _effects;
    int _gmsAt;
    uStrong<uArray*> _gmsCache;
    int _gmsCount;
    bool _haveActualPositionCache;
    float _height;
    ::g::Uno::Float2 _intendedSize;
    int _oldVisibility;
    bool _pendingDispatchPlacement;
    uStrong< ::g::Fuse::Node*> _placedBefore;
    ::g::Uno::Float2 _ppPrevPosition;
    ::g::Uno::Float2 _ppPrevSize;
    ::g::Uno::Rect _renderBoundsWithEffects;
    bool _renderBoundsWithEffectsDirty;
    ::g::Uno::Rect _renderBoundsWithoutEffects;
    bool _renderBoundsWithoutEffectsDirty;
    uStrong<uObject*> _transformOrigin;
    float _width;
    static uSStrong< ::g::Fuse::StyleProperty1*> AlignmentProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& AlignmentProperty() { return Element_typeof()->Init(), AlignmentProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> AnchorProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& AnchorProperty() { return Element_typeof()->Init(), AnchorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> CachingModeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& CachingModeProperty() { return Element_typeof()->Init(), CachingModeProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ClipToBoundsProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ClipToBoundsProperty() { return Element_typeof()->Init(), ClipToBoundsProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> HeightProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& HeightProperty() { return Element_typeof()->Init(), HeightProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> HitTestModeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& HitTestModeProperty() { return Element_typeof()->Init(), HitTestModeProperty_; }
    bool ignoreTempArrange;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> LimitHeightProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& LimitHeightProperty() { return Element_typeof()->Init(), LimitHeightProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> LimitWidthProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& LimitWidthProperty() { return Element_typeof()->Init(), LimitWidthProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> MarginProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& MarginProperty() { return Element_typeof()->Init(), MarginProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> MaxHeightProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& MaxHeightProperty() { return Element_typeof()->Init(), MaxHeightProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> MaxWidthProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& MaxWidthProperty() { return Element_typeof()->Init(), MaxWidthProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> MinHeightProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& MinHeightProperty() { return Element_typeof()->Init(), MinHeightProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> MinWidthProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& MinWidthProperty() { return Element_typeof()->Init(), MinWidthProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> OffsetProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& OffsetProperty() { return Element_typeof()->Init(), OffsetProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> OpacityProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& OpacityProperty() { return Element_typeof()->Init(), OpacityProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> PaddingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& PaddingProperty() { return Element_typeof()->Init(), PaddingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> TransformOriginProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TransformOriginProperty() { return Element_typeof()->Init(), TransformOriginProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> VisibilityProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& VisibilityProperty() { return Element_typeof()->Init(), VisibilityProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> WidthProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& WidthProperty() { return Element_typeof()->Init(), WidthProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> XProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& XProperty() { return Element_typeof()->Init(), XProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> YProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& YProperty() { return Element_typeof()->Init(), YProperty_; }
    uStrong< ::g::Fuse::Elements::ElementBatchEntry*> _ElementBatchEntry;
    uStrong<uDelegate*> Placed1;
    uStrong<uDelegate*> Preplacement1;
    uStrong<uDelegate*> PropertyChanged1;

    void ctor_1();
    ::g::Uno::Float2 ActualAnchor();
    void ActualAnchor(::g::Uno::Float2 value);
    ::g::Uno::Float2 ActualPosition();
    ::g::Uno::Float2 ActualSize();
    void AddStyleEffect(::g::Fuse::Effects::Effect* e);
    int Alignment();
    void Alignment(int value);
    Element* AncestorElement();
    ::g::Uno::Float2 Anchor();
    void Anchor(::g::Uno::Float2 value);
    void ArrangePaddingBox(::g::Uno::Float2 avsize, int flags);
    int BoxSizing();
    void BoxSizing(int value);
    ::g::Fuse::Elements::BoxSizing* BoxSizingObject();
    ::g::Fuse::Elements::Cache* Cache();
    int CachingMode();
    void CachingMode(int value);
    ::g::Uno::Rect CalcRenderBounds();
    ::g::Uno::Rect CalcRenderBoundsWithEffects();
    ::g::Uno::Graphics::Framebuffer* CaptureRegion(::g::Fuse::DrawContext* dc, ::g::Uno::Rect region, ::g::Uno::Float2 padding);
    bool ClipToBounds();
    void ClipToBounds(bool value);
    void Composit(::g::Fuse::DrawContext* dc);
    void CompositEffects(::g::Fuse::DrawContext* dc);
    void DispatchPlacement();
    uObject* Effects();
    ::g::Fuse::Elements::ElementBatchEntry* ElementBatchEntry();
    void ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry* value);
    bool FastTrackDrawWithOpacity(::g::Fuse::DrawContext* dc) { bool __retval; return (((Element_type*)__type)->fp_FastTrackDrawWithOpacity)(this, dc, &__retval), __retval; }
    ::g::Uno::Float2 GetContentSize(::g::Uno::Float2 fillSize, int fillSet);
    ::g::Uno::Recti GetViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion);
    ::g::Uno::Recti GetVisibleViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion);
    void GMSReset();
    bool HasActiveEffects();
    bool HasCompositionEffect();
    bool HasEffects();
    float Height();
    void Height(float value);
    ::g::Fuse::NodeBounds* HitTestLocalVisualBounds() { ::g::Fuse::NodeBounds* __retval; return (((Element_type*)__type)->fp_get_HitTestLocalVisualBounds)(this, &__retval), __retval; }
    int HitTestMode();
    void HitTestMode(int value);
    ::g::Uno::Float2 IntendedPosition();
    ::g::Uno::Float2 IntendedSize();
    void InternArrangePaddingBox(::g::Uno::Float2 avsize, int flags);
    ::g::Uno::Float2 InternGetContentSize(::g::Uno::Float2 fillSize, int fillSet);
    void InvalidateRenderBoundsWithEffects();
    void InvalidateVisualComposition();
    bool IsPointInside(::g::Uno::Float2 localPoint);
    float LimitHeight();
    void LimitHeight(float value);
    float LimitWidth();
    void LimitWidth(float value);
    void LocalDraw(::g::Fuse::DrawContext* dc);
    ::g::Uno::Float4 Margin();
    void Margin(::g::Uno::Float4 value);
    float MaxHeight();
    void MaxHeight(float value);
    float MaxWidth();
    void MaxWidth(float value);
    float MinHeight();
    void MinHeight(float value);
    float MinWidth();
    void MinWidth(float value);
    bool NeedsClipping();
    void NotifyPropertyChanged();
    ::g::Uno::Float2 Offset();
    void Offset(::g::Uno::Float2 value);
    void OnDraw(::g::Fuse::DrawContext* dc) { (((Element_type*)__type)->fp_OnDraw)(this, dc); }
    void OnEffectAdded(::g::Fuse::Effects::Effect* e);
    void OnEffectRemoved(::g::Fuse::Effects::Effect* e);
    void OnEffectRenderBoundsChanged(::g::Fuse::Effects::Effect* e);
    void OnEffectRenderingChanged(::g::Fuse::Effects::Effect* e);
    void OnHitTestChildren(::g::Fuse::HitTestContext* htc) { (((Element_type*)__type)->fp_OnHitTestChildren)(this, htc); }
    void OnHitTestLocalVisual(::g::Fuse::HitTestContext* htc) { (((Element_type*)__type)->fp_OnHitTestLocalVisual)(this, htc); }
    void OnInvalidateRenderBoundsWithEffects();
    void OnPreplacement();
    float Opacity();
    void Opacity(float value);
    ::g::Uno::Float4 Padding();
    void Padding(::g::Uno::Float4 value);
    void PerformPlacement(::g::Uno::Float2 position, ::g::Uno::Float2 size, int flags);
    void add_Placed(uDelegate* value);
    void remove_Placed(uDelegate* value);
    void add_Preplacement(uDelegate* value);
    void remove_Preplacement(uDelegate* value);
    void add_PropertyChanged(uDelegate* value);
    void remove_PropertyChanged(uDelegate* value);
    ::g::Uno::Rect RenderBoundsWithEffects();
    ::g::Uno::Rect RenderBoundsWithoutEffects();
    void RequestLayout();
    uObject* TransformOrigin();
    void TransformOrigin(uObject* value);
    int Visibility();
    void Visibility(int value);
    float Width();
    void Width(float value);
    float X();
    void X(float value);
    float Y();
    void Y(float value);
    static void ArrangePaddingBox(Element* __this, ::g::Uno::Float2 avsize, int flags);
    static ::g::Uno::Rect CalcRenderBounds(Element* __this);
    static bool FastTrackDrawWithOpacity(Element* __this, ::g::Fuse::DrawContext* dc) { bool __retval; return Element__FastTrackDrawWithOpacity_fn(__this, dc, &__retval), __retval; }
    static int GetCachingMode(Element* elm);
    static ::g::Uno::Float2 GetContentSize(Element* __this, ::g::Uno::Float2 fillSize, int fillSet);
    static float GetHeight(Element* elm);
    static uObject* GetTransformOrigin(Element* elm);
    static float GetWidth(Element* elm);
    static void InvalidateLocalTransform1(Element* elm);
    static void OnCachingModeChanged(Element* elm);
    static void OnClipToBoundsChanged(Element* elm);
    static void OnHitTestChildren(Element* __this, ::g::Fuse::HitTestContext* htc) { Element__OnHitTestChildren_fn(__this, htc); }
    static void OnHitTestLocalVisual(Element* __this, ::g::Fuse::HitTestContext* htc) { Element__OnHitTestLocalVisual_fn(__this, htc); }
    static void OnOpacityChanged(Element* elm);
    static void OnVisibilityChanged(Element* elm);
    static void SetCachingMode(Element* elm, int value);
    static void SetHeight(Element* elm, float val);
    static void SetTransformOrigin(Element* elm, uObject* value);
    static void SetWidth(Element* elm, float val);
    static ::g::Fuse::NodeBounds* HitTestLocalVisualBounds(Element* __this) { ::g::Fuse::NodeBounds* __retval; return Element__get_HitTestLocalVisualBounds_fn(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Elements

#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Recti.h>

namespace g{
namespace Fuse{
namespace Elements{

inline void Element::ArrangePaddingBox(::g::Uno::Float2 avsize, int flags) { (((Element_type*)__type)->fp_ArrangePaddingBox)(this, &avsize, &flags); }
inline ::g::Uno::Rect Element::CalcRenderBounds() { ::g::Uno::Rect __retval; return (((Element_type*)__type)->fp_CalcRenderBounds)(this, &__retval), __retval; }
inline ::g::Uno::Float2 Element::GetContentSize(::g::Uno::Float2 fillSize, int fillSet) { ::g::Uno::Float2 __retval; return (((Element_type*)__type)->fp_GetContentSize)(this, &fillSize, &fillSet, &__retval), __retval; }
inline void Element::ArrangePaddingBox(Element* __this, ::g::Uno::Float2 avsize, int flags) { Element__ArrangePaddingBox_fn(__this, &avsize, &flags); }
inline ::g::Uno::Rect Element::CalcRenderBounds(Element* __this) { ::g::Uno::Rect __retval; return Element__CalcRenderBounds_fn(__this, &__retval), __retval; }
inline ::g::Uno::Float2 Element::GetContentSize(Element* __this, ::g::Uno::Float2 fillSize, int fillSet) { ::g::Uno::Float2 __retval; return Element__GetContentSize_fn(__this, &fillSize, &fillSet, &__retval), __retval; }
// }

}}} // ::g::Fuse::Elements
