// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct BeginRemoveArgs;}}
namespace g{namespace Fuse{struct Behavior;}}
namespace g{namespace Fuse{struct DataContextChangedArgs;}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Fuse{struct Properties;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Style;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{

// public interfacemodifiers class Node :2099
// {
struct Node_type : uType
{
    ::g::Fuse::Scripting::INameScope interface0;
    void(*fp_get_AbsoluteViewportOrigin)(::g::Fuse::Node*, ::g::Uno::Float2*);
    void(*fp_get_CanAdjustMarginBox)(::g::Fuse::Node*, bool*);
    void(*fp_Draw)(::g::Fuse::Node*, ::g::Fuse::DrawContext*);
    void(*fp_DrawSelection)(::g::Fuse::Node*, ::g::Fuse::DrawContext*);
    void(*fp_GetMarginSize)(::g::Fuse::Node*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*);
    void(*fp_GetSubNode)(::g::Fuse::Node*, int*, ::g::Fuse::Node**);
    void(*fp_get_HitTestBounds)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**);
    void(*fp_get_HitTestChildrenBounds)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**);
    void(*fp_get_HitTestLocalBounds)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**);
    void(*fp_InvalidateLocalTransform)(::g::Fuse::Node*);
    void(*fp_InvalidateVisual)(::g::Fuse::Node*);
    void(*fp_get_IsLocalVisible)(::g::Fuse::Node*, bool*);
    void(*fp_IsMarginBoxDependent)(::g::Fuse::Node*, ::g::Fuse::Node*, int*);
    void(*fp_get_LocalBounds)(::g::Fuse::Node*, ::g::Uno::Geometry::Box*);
    void(*fp_get_LocalRenderBounds)(::g::Fuse::Node*, ::g::Uno::Rect*);
    void(*fp_OnAdjustMarginBoxPosition)(::g::Fuse::Node*, ::g::Uno::Float2*);
    void(*fp_OnApplyStyle)(::g::Fuse::Node*, uObject*);
    void(*fp_OnArrangeMarginBox)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*);
    void(*fp_OnBehaviorAdded)(::g::Fuse::Node*, ::g::Fuse::Behavior*);
    void(*fp_OnBehaviorRemoved)(::g::Fuse::Node*, ::g::Fuse::Behavior*);
    void(*fp_OnHitTest)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*);
    void(*fp_OnInvalidateLayout)(::g::Fuse::Node*);
    void(*fp_OnInvalidateRenderBounds)(::g::Fuse::Node*, bool*);
    void(*fp_OnIsEnabledChanged)(::g::Fuse::Node*);
    void(*fp_OnResetStyle)(::g::Fuse::Node*);
    void(*fp_OnRooted)(::g::Fuse::Node*);
    void(*fp_OnUnrooted)(::g::Fuse::Node*);
    void(*fp_PrependImplicitTransform)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*);
    void(*fp_PrependInverseTransformOrigin)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*);
    void(*fp_PrependTransformOrigin)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*);
    void(*fp_SoftDispose)(::g::Fuse::Node*);
    void(*fp_get_SubNodeCount)(::g::Fuse::Node*, int*);
    void(*fp_WindowToWorldRay)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*);
};

Node_type* Node_typeof();
void Node__ctor__fn(Node* __this);
void Node__get_AbsoluteViewportOrigin_fn(Node* __this, ::g::Uno::Float2* __retval);
void Node__get_AbsoluteZoom_fn(Node* __this, float* __retval);
void Node__AddDrawCost_fn(Node* __this, double* cost);
void Node__add_Added_fn(Node* __this, uDelegate* value);
void Node__remove_Added_fn(Node* __this, uDelegate* value);
void Node__get_AddedByStyle_fn(Node* __this, bool* __retval);
void Node__set_AddedByStyle_fn(Node* __this, bool* value);
void Node__AddEventHandler_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler);
void Node__AddStyleBehavior_fn(Node* __this, ::g::Fuse::Behavior* b);
void Node__AddStyleStyle_fn(Node* __this, ::g::Fuse::Style* style);
void Node__AddStyleTransform_fn(Node* __this, ::g::Fuse::Transform* t);
void Node__AdjustMarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* position);
void Node__ApplyLocalStyles_fn(Node* __this, uObject* target, bool* __retval);
void Node__ApplyStyle_fn(Node* __this);
void Node__ApplyStyle1_fn(Node* __this, uObject* target);
void Node__ArrangeMarginBox_fn(Node* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval);
void Node__add_BeginRemove_fn(Node* __this, uDelegate* value);
void Node__remove_BeginRemove_fn(Node* __this, uDelegate* value);
void Node__get_Behaviors_fn(Node* __this, uObject** __retval);
void Node__BringIntoView_fn(Node* __this);
void Node__CalcRenderBoundsInParentSpace_fn(Node* __this, ::g::Uno::Rect* __retval);
void Node__CalcWorldTransform_fn(Node* __this, ::g::Fuse::FastMatrix** __retval);
void Node__get_CanAdjustMarginBox_fn(Node* __this, bool* __retval);
void Node__CheckUpdateListening_fn(Node* __this, bool* forceOff);
void Node__ClearBit_fn(Node* __this, int* nb);
void Node__get_DataContext_fn(Node* __this, uObject** __retval);
void Node__set_DataContext_fn(Node* __this, uObject* value);
void Node__add_DataContextChanged_fn(Node* __this, uDelegate* value);
void Node__remove_DataContextChanged_fn(Node* __this, uDelegate* value);
void Node__DoUpdate_fn(Node* __this);
void Node__Draw_fn(Node* __this, ::g::Fuse::DrawContext* dc);
void Node__get_DrawCost_fn(Node* __this, double* __retval);
void Node__DrawLocalRect_fn(Node* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, float* lineWidth, ::g::Uno::Float4* color, ::g::Uno::Float4x4* localToClipTransform);
void Node__DrawLocalSelectionRect_fn(Node* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect);
void Node__DrawSelection_fn(Node* __this, ::g::Fuse::DrawContext* dc);
void Node__FindAlgorithm_fn(Node* __this, uString* name, Node* origin, Node** __retval);
void Node__FindByType_fn(Node* __this, uType* __type, Node** __retval);
void Node__FindNodeByName_fn(Node* __this, uString* name, Node** __retval);
void Node__FindObjectByName_fn(Node* __this, uString* name, uDelegate* acceptor, uObject** __retval);
void Node__GetHitWindowPoint_fn(Node* __this, ::g::Uno::Float2* windowPoint, Node** __retval);
void Node__GetMarginSize_fn(Node* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Node__GetNearestAncestorOfType_fn(Node* __this, uType* __type, Node** __retval);
void Node__GetPropertyState_fn(Node* __this, int* id, int* __retval);
void Node__GetSubNode_fn(Node* __this, int* index, Node** __retval);
void Node__GetTransformTo_fn(Node* __this, Node* other, ::g::Uno::Float4x4* __retval);
void Node__GetTransformToAncestor_fn(Node* __this, Node* ancestor, ::g::Uno::Float4x4* __retval);
void Node__HasBit_fn(Node* __this, int* nb, bool* __retval);
void Node__get_HasExplicitTransforms_fn(Node* __this, bool* __retval);
void Node__get_HasResources_fn(Node* __this, bool* __retval);
void Node__HitTest_fn(Node* __this, ::g::Fuse::HitTestContext* htc);
void Node__get_HitTestBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval);
void Node__get_HitTestChildrenBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval);
void Node__get_HitTestLocalBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval);
void Node__get_IgnoreStyle_fn(Node* __this, bool* __retval);
void Node__set_IgnoreStyle_fn(Node* __this, bool* value);
void Node__get_InternLocalTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval);
void Node__InternSnap_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Node__InternSnapUp_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Node__InvalidateFlat_fn(Node* __this);
void Node__InvalidateHitTestBounds_fn(Node* __this);
void Node__InvalidateLayout_fn(Node* __this, int* reason);
void Node__InvalidateLayout1_fn(Node* elm);
void Node__InvalidateLocalTransform_fn(Node* __this);
void Node__InvalidateRenderBounds_fn(Node* __this);
void Node__InvalidateVisual_fn(Node* __this);
void Node__InvokeEventHandler_fn(Node* __this, uObject* obj, uObject* args);
void Node__get_IsEnabled_fn(Node* __this, bool* __retval);
void Node__set_IsEnabled_fn(Node* __this, bool* value);
void Node__add_IsEnabledChanged_fn(Node* __this, uDelegate* value);
void Node__remove_IsEnabledChanged_fn(Node* __this, uDelegate* value);
void Node__get_IsFlat_fn(Node* __this, bool* __retval);
void Node__get_IsLocalFlat_fn(Node* __this, bool* __retval);
void Node__get_IsLocalRooted_fn(Node* __this, bool* __retval);
void Node__get_IsLocalVisible_fn(Node* __this, bool* __retval);
void Node__IsMarginBoxDependent_fn(Node* __this, Node* child, int* __retval);
void Node__get_IsRooted_fn(Node* __this, bool* __retval);
void Node__IsRootStage_fn(Node* __this, int* stage, bool* __retval);
void Node__get_IsVisible_fn(Node* __this, bool* __retval);
void Node__add_IsVisibleChanged_fn(Node* __this, uDelegate* value);
void Node__remove_IsVisibleChanged_fn(Node* __this, uDelegate* value);
void Node__get_IsVisualInvalid_fn(Node* __this, bool* __retval);
void Node__IsWorldMatrixValid_fn(Node* __this, bool* __retval);
void Node__get_Layer_fn(Node* __this, int* __retval);
void Node__set_Layer_fn(Node* __this, int* value);
void Node__get_LayoutRole_fn(Node* __this, int* __retval);
void Node__set_LayoutRole_fn(Node* __this, int* value);
void Node__get_LocalBounds_fn(Node* __this, ::g::Uno::Geometry::Box* __retval);
void Node__get_LocalRenderBounds_fn(Node* __this, ::g::Uno::Rect* __retval);
void Node__LocalToParent_fn(Node* __this, ::g::Uno::Float2* localPoint, ::g::Uno::Float2* __retval);
void Node__get_LocalTransform_fn(Node* __this, ::g::Uno::Float4x4* __retval);
void Node__get_LocalTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval);
void Node__get_LocalTransformInverse_fn(Node* __this, ::g::Uno::Float4x4* __retval);
void Node__get_MarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* __retval);
void Node__MarkRooted_fn(Node* __this);
void Node__MarkUnrooted_fn(Node* __this);
void Node__get_Name_fn(Node* __this, uString** __retval);
void Node__set_Name_fn(Node* __this, uString* value);
void Node__OnAdded_fn(Node* __this, Node* parent);
void Node__OnAdjustMarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* position);
void Node__OnApplyStyle_fn(Node* __this, uObject* target);
void Node__OnArrangeMarginBox_fn(Node* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSizxe, int* availSet, ::g::Uno::Float2* __retval);
void Node__OnBeginRemove_fn(Node* __this, ::g::Fuse::BeginRemoveArgs* args);
void Node__OnBehaviorAdded_fn(Node* __this, ::g::Fuse::Behavior* b);
void Node__OnBehaviorRemoved_fn(Node* __this, ::g::Fuse::Behavior* b);
void Node__OnBringIntoView_fn(Node* __this, Node* elm);
void Node__OnDataContextChanged_fn(Node* __this, ::g::Fuse::DataContextChangedArgs* args);
void Node__OnHitTest_fn(Node* __this, ::g::Fuse::HitTestContext* htc);
void Node__OnInvalidateLayout_fn(Node* __this);
void Node__OnInvalidateRenderBounds_fn(Node* __this, bool* __retval);
void Node__OnIsEnabledChanged_fn(Node* __this);
void Node__OnIsEnabledChangedInternal_fn(Node* n);
void Node__OnIsSelectedChanged_fn(Node* __this, bool* isSelected);
void Node__OnIsVisibleChanged_fn(Node* __this);
void Node__OnLocalVisibleChanged_fn(Node* __this);
void Node__OnMatrixChanged_fn(Node* __this, ::g::Fuse::Transform* t);
void Node__OnNameChanged_fn(Node* n);
void Node__OnRemoved_fn(Node* __this, Node* parent);
void Node__OnResetStyle_fn(Node* __this);
void Node__OnResourceChanged_fn(Node* __this, ::g::Uno::UX::Resource* res);
void Node__OnRooted_fn(Node* __this);
void Node__OnTransformAdded_fn(Node* __this, ::g::Fuse::Transform* t);
void Node__OnTransformRemoved_fn(Node* __this, ::g::Fuse::Transform* t);
void Node__OnTransformsChanged_fn(Node* __this);
void Node__OnUnrooted_fn(Node* __this);
void Node__OnWorldTransformValidated_fn(Node* __this);
void Node__get_Parent_fn(Node* __this, Node** __retval);
void Node__ParentToLocal_fn(Node* __this, ::g::Uno::Float2* parentPoint, ::g::Uno::Float2* __retval);
void Node__PerformLayout_fn(Node* __this);
void Node__PerformLayout1_fn(Node* __this, ::g::Uno::Float2* clientSize);
void Node__get_PointDensity_fn(Node* __this, float* __retval);
void Node__PrependExplicitTransforms_fn(Node* __this, ::g::Fuse::FastMatrix* m);
void Node__PrependImplicitTransform_fn(Node* __this, ::g::Fuse::FastMatrix* m);
void Node__PrependInverseTransformOrigin_fn(Node* __this, ::g::Fuse::FastMatrix* m);
void Node__PrependLocalTransform_fn(Node* __this, ::g::Fuse::FastMatrix* m);
void Node__PrependTransformOrigin_fn(Node* __this, ::g::Fuse::FastMatrix* m);
void Node__get_Properties_fn(Node* __this, ::g::Fuse::Properties** __retval);
void Node__RaiseEvent_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne);
void Node__ReapplyStyle_fn(Node* __this);
void Node__ReapplySubtreeStyle_fn(Node* __this);
void Node__RearrangeMarginBox_fn(Node* __this);
void Node__add_Removed_fn(Node* __this, uDelegate* value);
void Node__remove_Removed_fn(Node* __this, uDelegate* value);
void Node__RemoveDrawCost_fn(Node* __this, double* cost);
void Node__RemoveEventHandler_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler);
void Node__add_RequestBringIntoView_fn(Node* __this, uDelegate* value);
void Node__remove_RequestBringIntoView_fn(Node* __this, uDelegate* value);
void Node__ResetStyle_fn(Node* __this);
void Node__get_Resources_fn(Node* __this, uObject** __retval);
void Node__RootBehaviors_fn(Node* __this);
void Node__add_Rooted_fn(Node* __this, uDelegate* value);
void Node__remove_Rooted_fn(Node* __this, uDelegate* value);
void Node__SetBit_fn(Node* __this, int* nb);
void Node__SetPropertyState_fn(Node* __this, int* id, int* state);
void Node__SetResource_fn(Node* __this, uString* key, uObject* value);
void Node__Snap_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Node__get_SnapToPixels_fn(Node* __this, bool* __retval);
void Node__set_SnapToPixels_fn(Node* __this, bool* value);
void Node__SnapUp_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Node__SoftDispose_fn(Node* __this);
void Node__StyleAdded_fn(Node* __this, ::g::Fuse::Style* s);
void Node__StyleRemoved_fn(Node* __this, ::g::Fuse::Style* s);
void Node__get_Styles_fn(Node* __this, uObject** __retval);
void Node__get_SubNodeCount_fn(Node* __this, int* __retval);
void Node__get_Transforms_fn(Node* __this, uObject** __retval);
void Node__add_TransformsChanged_fn(Node* __this, uDelegate* value);
void Node__remove_TransformsChanged_fn(Node* __this, uDelegate* value);
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval);
void Node__UnrootBehaviors_fn(Node* __this);
void Node__add_Unrooted_fn(Node* __this, uDelegate* value);
void Node__remove_Unrooted_fn(Node* __this, uDelegate* value);
void Node__add_Update_fn(Node* __this, uDelegate* value);
void Node__remove_Update_fn(Node* __this, uDelegate* value);
void Node__UpdateIsEnabledCache_fn(Node* __this);
void Node__UpdateIsVisibleCache_fn(Node* __this);
void Node__UpdateLayout_fn(Node* __this);
void Node__ValidateVisual_fn(Node* __this);
void Node__get_ValidFrameCount_fn(Node* __this, int* __retval);
void Node__get_Viewport_fn(Node* __this, uObject** __retval);
void Node__VisitSubtree_fn(Node* __this, uDelegate* action);
void Node__WindowToLocal_fn(Node* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Float2* __retval);
void Node__WindowToWorldRay_fn(Node* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Geometry::Ray* __retval);
void Node__get_WorldPosition_fn(Node* __this, ::g::Uno::Float3* __retval);
void Node__get_WorldTransform_fn(Node* __this, ::g::Uno::Float4x4* __retval);
void Node__get_WorldTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval);
void Node__get_WorldTransformInverse_fn(Node* __this, ::g::Uno::Float4x4* __retval);

struct Node : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _addedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _addedHandle() { return Node_typeof()->Init(), _addedHandle_; }
    int _ambAvailSet;
    ::g::Uno::Float2 _ambMargin;
    ::g::Uno::Float2 _ambPosition;
    ::g::Uno::Float2 _ambSize;
    uint32_t _b0;
    uint32_t _b1;
    uint32_t _b2;
    uint32_t _b3;
    uint32_t _b4;
    uint32_t _b5;
    uint32_t _b6;
    uStrong< ::g::Uno::Collections::ObservableList*> _behaviors;
    ::g::Uno::Float2 _cachedRenderTargetSize;
    uStrong<uObject*> _dataContext;
    double _drawCost;
    bool _hasListenerAction;
    bool _hasMarginBox;
    uStrong< ::g::Fuse::NodeBounds*> _hitTestBoundsCache;
    bool _ignoreStyle;
    bool _isAddedUpdate;
    bool _isEnabledCache;
    static uSStrong< ::g::Fuse::PropertyHandle*> _isEnabledChangedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _isEnabledChangedHandle() { return Node_typeof()->Init(), _isEnabledChangedHandle_; }
    bool _isFlat;
    bool _isFlatCached;
    bool _isHitTestBoundsCacheValid;
    bool _isLocalFlat;
    bool _isLocalFlatCached;
    bool _isVisibleCached;
    static uSStrong< ::g::Fuse::PropertyHandle*> _isVisibleChangedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _isVisibleChangedHandle() { return Node_typeof()->Init(), _isVisibleChangedHandle_; }
    int _lastInvalidate;
    static uSStrong< ::g::Fuse::PropertyHandle*> _layerProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _layerProperty() { return Node_typeof()->Init(), _layerProperty_; }
    int _layoutDirty;
    static uSStrong< ::g::Fuse::PropertyHandle*> _layoutRoleProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _layoutRoleProperty() { return Node_typeof()->Init(), _layoutRoleProperty_; }
    uStrong< ::g::Fuse::FastMatrix*> _localTransform;
    uStrong< ::g::Fuse::FastMatrix*> _localTransformInverse;
    static uSStrong< ::g::Fuse::PropertyHandle*> _nameHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _nameHandle() { return Node_typeof()->Init(), _nameHandle_; }
    int _nodebits;
    uStrong<Node*> _parent;
    uStrong< ::g::Fuse::BeginRemoveArgs*> _pendingRemove;
    static bool _performingLayout_;
    static bool& _performingLayout() { return Node_typeof()->Init(), _performingLayout_; }
    uStrong< ::g::Fuse::Properties*> _properties;
    static uSStrong< ::g::Fuse::PropertyHandle*> _removedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _removedHandle() { return Node_typeof()->Init(), _removedHandle_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _resourcesHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _resourcesHandle() { return Node_typeof()->Init(), _resourcesHandle_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _rootedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rootedHandle() { return Node_typeof()->Init(), _rootedHandle_; }
    int _rootStage;
    static uSStrong< ::g::Fuse::PropertyHandle*> _styleHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _styleHandle() { return Node_typeof()->Init(), _styleHandle_; }
    uStrong< ::g::Uno::Collections::ObservableList*> _transforms;
    static uSStrong< ::g::Fuse::PropertyHandle*> _unrootedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _unrootedHandle() { return Node_typeof()->Init(), _unrootedHandle_; }
    uStrong< ::g::Uno::Collections::ConcurrentCollection*> _updateListeners;
    bool _visualDirty;
    uStrong< ::g::Fuse::FastMatrix*> _worldTransform;
    int _worldTransformCacheVersion;
    uStrong< ::g::Fuse::FastMatrix*> _worldTransformInverse;
    int _worldTransformInverseCacheVersion;
    int _worldTransformParentCacheVersion;
    int _worldTransformVersion;
    static uSStrong< ::g::Fuse::StyleProperty1*> IsEnabledProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& IsEnabledProperty() { return Node_typeof()->Init(), IsEnabledProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> NameProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& NameProperty() { return Node_typeof()->Init(), NameProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> SnapToPixelsProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& SnapToPixelsProperty() { return Node_typeof()->Init(), SnapToPixelsProperty_; }
    int ZLayer;
    int ZOffset;
    bool ZOffsetFixed;
    bool _AddedByStyle;
    uStrong<uDelegate*> BeginRemove1;
    uStrong<uDelegate*> DataContextChanged1;
    uStrong<uDelegate*> RequestBringIntoView1;
    uStrong<uDelegate*> TransformsChanged1;

    void ctor_();
    ::g::Uno::Float2 AbsoluteViewportOrigin();
    float AbsoluteZoom();
    void AddDrawCost(double cost);
    void add_Added(uDelegate* value);
    void remove_Added(uDelegate* value);
    bool AddedByStyle();
    void AddedByStyle(bool value);
    void AddEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler);
    void AddStyleBehavior(::g::Fuse::Behavior* b);
    void AddStyleStyle(::g::Fuse::Style* style);
    void AddStyleTransform(::g::Fuse::Transform* t);
    void AdjustMarginBoxPosition(::g::Uno::Float2 position);
    bool ApplyLocalStyles(uObject* target);
    void ApplyStyle();
    void ApplyStyle1(uObject* target);
    ::g::Uno::Float2 ArrangeMarginBox(::g::Uno::Float2 position, ::g::Uno::Float2 availableSize, int availSet);
    void add_BeginRemove(uDelegate* value);
    void remove_BeginRemove(uDelegate* value);
    uObject* Behaviors();
    void BringIntoView();
    ::g::Uno::Rect CalcRenderBoundsInParentSpace();
    ::g::Fuse::FastMatrix* CalcWorldTransform();
    bool CanAdjustMarginBox() { bool __retval; return (((Node_type*)__type)->fp_get_CanAdjustMarginBox)(this, &__retval), __retval; }
    void CheckUpdateListening(bool forceOff);
    void ClearBit(int nb);
    uObject* DataContext();
    void DataContext(uObject* value);
    void add_DataContextChanged(uDelegate* value);
    void remove_DataContextChanged(uDelegate* value);
    void DoUpdate();
    void Draw(::g::Fuse::DrawContext* dc) { (((Node_type*)__type)->fp_Draw)(this, dc); }
    double DrawCost();
    void DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, float lineWidth, ::g::Uno::Float4 color, ::g::Uno::Float4x4 localToClipTransform);
    void DrawLocalSelectionRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect);
    void DrawSelection(::g::Fuse::DrawContext* dc) { (((Node_type*)__type)->fp_DrawSelection)(this, dc); }
    Node* FindAlgorithm(uString* name, Node* origin);
    Node* FindByType(uType* __type);
    Node* FindNodeByName(uString* name);
    uObject* FindObjectByName(uString* name, uDelegate* acceptor);
    Node* GetHitWindowPoint(::g::Uno::Float2 windowPoint);
    ::g::Uno::Float2 GetMarginSize(::g::Uno::Float2 fillSize, int fillSet);
    Node* GetNearestAncestorOfType(uType* __type);
    int GetPropertyState(int id);
    Node* GetSubNode(int index) { Node* __retval; return (((Node_type*)__type)->fp_GetSubNode)(this, &index, &__retval), __retval; }
    ::g::Uno::Float4x4 GetTransformTo(Node* other);
    ::g::Uno::Float4x4 GetTransformToAncestor(Node* ancestor);
    bool HasBit(int nb);
    bool HasExplicitTransforms();
    bool HasResources();
    void HitTest(::g::Fuse::HitTestContext* htc);
    ::g::Fuse::NodeBounds* HitTestBounds() { ::g::Fuse::NodeBounds* __retval; return (((Node_type*)__type)->fp_get_HitTestBounds)(this, &__retval), __retval; }
    ::g::Fuse::NodeBounds* HitTestChildrenBounds() { ::g::Fuse::NodeBounds* __retval; return (((Node_type*)__type)->fp_get_HitTestChildrenBounds)(this, &__retval), __retval; }
    ::g::Fuse::NodeBounds* HitTestLocalBounds() { ::g::Fuse::NodeBounds* __retval; return (((Node_type*)__type)->fp_get_HitTestLocalBounds)(this, &__retval), __retval; }
    bool IgnoreStyle();
    void IgnoreStyle(bool value);
    ::g::Fuse::FastMatrix* InternLocalTransformInternal();
    ::g::Uno::Float2 InternSnap(::g::Uno::Float2 p);
    ::g::Uno::Float2 InternSnapUp(::g::Uno::Float2 p);
    void InvalidateFlat();
    void InvalidateHitTestBounds();
    void InvalidateLayout(int reason);
    void InvalidateLocalTransform() { (((Node_type*)__type)->fp_InvalidateLocalTransform)(this); }
    void InvalidateRenderBounds();
    void InvalidateVisual() { (((Node_type*)__type)->fp_InvalidateVisual)(this); }
    void InvokeEventHandler(uObject* obj, uObject* args);
    bool IsEnabled();
    void IsEnabled(bool value);
    void add_IsEnabledChanged(uDelegate* value);
    void remove_IsEnabledChanged(uDelegate* value);
    bool IsFlat();
    bool IsLocalFlat();
    bool IsLocalRooted();
    bool IsLocalVisible() { bool __retval; return (((Node_type*)__type)->fp_get_IsLocalVisible)(this, &__retval), __retval; }
    int IsMarginBoxDependent(Node* child) { int __retval; return (((Node_type*)__type)->fp_IsMarginBoxDependent)(this, child, &__retval), __retval; }
    bool IsRooted();
    bool IsRootStage(int stage);
    bool IsVisible();
    void add_IsVisibleChanged(uDelegate* value);
    void remove_IsVisibleChanged(uDelegate* value);
    bool IsVisualInvalid();
    bool IsWorldMatrixValid();
    int Layer();
    void Layer(int value);
    int LayoutRole();
    void LayoutRole(int value);
    ::g::Uno::Geometry::Box LocalBounds();
    ::g::Uno::Rect LocalRenderBounds();
    ::g::Uno::Float2 LocalToParent(::g::Uno::Float2 localPoint);
    ::g::Uno::Float4x4 LocalTransform();
    ::g::Fuse::FastMatrix* LocalTransformInternal();
    ::g::Uno::Float4x4 LocalTransformInverse();
    ::g::Uno::Float2 MarginBoxPosition();
    void MarkRooted();
    void MarkUnrooted();
    uString* Name();
    void Name(uString* value);
    void OnAdded(Node* parent);
    void OnAdjustMarginBoxPosition(::g::Uno::Float2 position);
    void OnApplyStyle(uObject* target) { (((Node_type*)__type)->fp_OnApplyStyle)(this, target); }
    ::g::Uno::Float2 OnArrangeMarginBox(::g::Uno::Float2 position, ::g::Uno::Float2 availableSizxe, int availSet);
    void OnBeginRemove(::g::Fuse::BeginRemoveArgs* args);
    void OnBehaviorAdded(::g::Fuse::Behavior* b) { (((Node_type*)__type)->fp_OnBehaviorAdded)(this, b); }
    void OnBehaviorRemoved(::g::Fuse::Behavior* b) { (((Node_type*)__type)->fp_OnBehaviorRemoved)(this, b); }
    void OnBringIntoView(Node* elm);
    void OnDataContextChanged(::g::Fuse::DataContextChangedArgs* args);
    void OnHitTest(::g::Fuse::HitTestContext* htc) { (((Node_type*)__type)->fp_OnHitTest)(this, htc); }
    void OnInvalidateLayout() { (((Node_type*)__type)->fp_OnInvalidateLayout)(this); }
    bool OnInvalidateRenderBounds() { bool __retval; return (((Node_type*)__type)->fp_OnInvalidateRenderBounds)(this, &__retval), __retval; }
    void OnIsEnabledChanged() { (((Node_type*)__type)->fp_OnIsEnabledChanged)(this); }
    void OnIsSelectedChanged(bool isSelected);
    void OnIsVisibleChanged();
    void OnLocalVisibleChanged();
    void OnMatrixChanged(::g::Fuse::Transform* t);
    void OnRemoved(Node* parent);
    void OnResetStyle() { (((Node_type*)__type)->fp_OnResetStyle)(this); }
    void OnResourceChanged(::g::Uno::UX::Resource* res);
    void OnRooted() { (((Node_type*)__type)->fp_OnRooted)(this); }
    void OnTransformAdded(::g::Fuse::Transform* t);
    void OnTransformRemoved(::g::Fuse::Transform* t);
    void OnTransformsChanged();
    void OnUnrooted() { (((Node_type*)__type)->fp_OnUnrooted)(this); }
    void OnWorldTransformValidated();
    Node* Parent();
    ::g::Uno::Float2 ParentToLocal(::g::Uno::Float2 parentPoint);
    void PerformLayout();
    void PerformLayout1(::g::Uno::Float2 clientSize);
    float PointDensity();
    void PrependExplicitTransforms(::g::Fuse::FastMatrix* m);
    void PrependImplicitTransform(::g::Fuse::FastMatrix* m) { (((Node_type*)__type)->fp_PrependImplicitTransform)(this, m); }
    void PrependInverseTransformOrigin(::g::Fuse::FastMatrix* m) { (((Node_type*)__type)->fp_PrependInverseTransformOrigin)(this, m); }
    void PrependLocalTransform(::g::Fuse::FastMatrix* m);
    void PrependTransformOrigin(::g::Fuse::FastMatrix* m) { (((Node_type*)__type)->fp_PrependTransformOrigin)(this, m); }
    ::g::Fuse::Properties* Properties();
    void RaiseEvent(::g::Fuse::PropertyHandle* ph, int ne);
    void ReapplyStyle();
    void ReapplySubtreeStyle();
    void RearrangeMarginBox();
    void add_Removed(uDelegate* value);
    void remove_Removed(uDelegate* value);
    void RemoveDrawCost(double cost);
    void RemoveEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler);
    void add_RequestBringIntoView(uDelegate* value);
    void remove_RequestBringIntoView(uDelegate* value);
    void ResetStyle();
    uObject* Resources();
    void RootBehaviors();
    void add_Rooted(uDelegate* value);
    void remove_Rooted(uDelegate* value);
    void SetBit(int nb);
    void SetPropertyState(int id, int state);
    void SetResource(uString* key, uObject* value);
    ::g::Uno::Float2 Snap(::g::Uno::Float2 p);
    bool SnapToPixels();
    void SnapToPixels(bool value);
    ::g::Uno::Float2 SnapUp(::g::Uno::Float2 p);
    void SoftDispose() { (((Node_type*)__type)->fp_SoftDispose)(this); }
    void StyleAdded(::g::Fuse::Style* s);
    void StyleRemoved(::g::Fuse::Style* s);
    uObject* Styles();
    int SubNodeCount() { int __retval; return (((Node_type*)__type)->fp_get_SubNodeCount)(this, &__retval), __retval; }
    uObject* Transforms();
    void add_TransformsChanged(uDelegate* value);
    void remove_TransformsChanged(uDelegate* value);
    bool TryGetResource(uString* key, uDelegate* acceptor, uObject** resource);
    void UnrootBehaviors();
    void add_Unrooted(uDelegate* value);
    void remove_Unrooted(uDelegate* value);
    void add_Update(uDelegate* value);
    void remove_Update(uDelegate* value);
    void UpdateIsEnabledCache();
    void UpdateIsVisibleCache();
    void UpdateLayout();
    void ValidateVisual();
    int ValidFrameCount();
    uObject* Viewport();
    void VisitSubtree(uDelegate* action);
    ::g::Uno::Float2 WindowToLocal(::g::Uno::Float2 windowCoord);
    ::g::Uno::Geometry::Ray WindowToWorldRay(::g::Uno::Float2 windowCoord);
    ::g::Uno::Float3 WorldPosition();
    ::g::Uno::Float4x4 WorldTransform();
    ::g::Fuse::FastMatrix* WorldTransformInternal();
    ::g::Uno::Float4x4 WorldTransformInverse();
    static void Draw(Node* __this, ::g::Fuse::DrawContext* dc) { Node__Draw_fn(__this, dc); }
    static void DrawSelection(Node* __this, ::g::Fuse::DrawContext* dc) { Node__DrawSelection_fn(__this, dc); }
    static ::g::Uno::Float2 GetMarginSize(Node* __this, ::g::Uno::Float2 fillSize, int fillSet);
    static Node* GetSubNode(Node* __this, int index) { Node* __retval; return Node__GetSubNode_fn(__this, &index, &__retval), __retval; }
    static void InvalidateLayout1(Node* elm);
    static void InvalidateLocalTransform(Node* __this) { Node__InvalidateLocalTransform_fn(__this); }
    static void InvalidateVisual(Node* __this) { Node__InvalidateVisual_fn(__this); }
    static int IsMarginBoxDependent(Node* __this, Node* child) { int __retval; return Node__IsMarginBoxDependent_fn(__this, child, &__retval), __retval; }
    static void OnAdjustMarginBoxPosition(Node* __this, ::g::Uno::Float2 position);
    static void OnApplyStyle(Node* __this, uObject* target) { Node__OnApplyStyle_fn(__this, target); }
    static ::g::Uno::Float2 OnArrangeMarginBox(Node* __this, ::g::Uno::Float2 position, ::g::Uno::Float2 availableSizxe, int availSet);
    static void OnBehaviorAdded(Node* __this, ::g::Fuse::Behavior* b) { Node__OnBehaviorAdded_fn(__this, b); }
    static void OnBehaviorRemoved(Node* __this, ::g::Fuse::Behavior* b) { Node__OnBehaviorRemoved_fn(__this, b); }
    static void OnHitTest(Node* __this, ::g::Fuse::HitTestContext* htc) { Node__OnHitTest_fn(__this, htc); }
    static void OnInvalidateLayout(Node* __this) { Node__OnInvalidateLayout_fn(__this); }
    static bool OnInvalidateRenderBounds(Node* __this) { bool __retval; return Node__OnInvalidateRenderBounds_fn(__this, &__retval), __retval; }
    static void OnIsEnabledChanged(Node* __this) { Node__OnIsEnabledChanged_fn(__this); }
    static void OnIsEnabledChangedInternal(Node* n);
    static void OnNameChanged(Node* n);
    static void OnResetStyle(Node* __this) { Node__OnResetStyle_fn(__this); }
    static void OnRooted(Node* __this) { Node__OnRooted_fn(__this); }
    static void OnUnrooted(Node* __this) { Node__OnUnrooted_fn(__this); }
    static void PrependImplicitTransform(Node* __this, ::g::Fuse::FastMatrix* m) { Node__PrependImplicitTransform_fn(__this, m); }
    static void PrependInverseTransformOrigin(Node* __this, ::g::Fuse::FastMatrix* m) { Node__PrependInverseTransformOrigin_fn(__this, m); }
    static void PrependTransformOrigin(Node* __this, ::g::Fuse::FastMatrix* m) { Node__PrependTransformOrigin_fn(__this, m); }
    static void SoftDispose(Node* __this) { Node__SoftDispose_fn(__this); }
    static ::g::Uno::Geometry::Ray WindowToWorldRay(Node* __this, ::g::Uno::Float2 windowCoord);
    static ::g::Uno::Float2 AbsoluteViewportOrigin(Node* __this);
    static bool CanAdjustMarginBox(Node* __this) { bool __retval; return Node__get_CanAdjustMarginBox_fn(__this, &__retval), __retval; }
    static ::g::Fuse::NodeBounds* HitTestBounds(Node* __this) { ::g::Fuse::NodeBounds* __retval; return Node__get_HitTestBounds_fn(__this, &__retval), __retval; }
    static ::g::Fuse::NodeBounds* HitTestChildrenBounds(Node* __this) { ::g::Fuse::NodeBounds* __retval; return Node__get_HitTestChildrenBounds_fn(__this, &__retval), __retval; }
    static ::g::Fuse::NodeBounds* HitTestLocalBounds(Node* __this) { ::g::Fuse::NodeBounds* __retval; return Node__get_HitTestLocalBounds_fn(__this, &__retval), __retval; }
    static bool IsLocalVisible(Node* __this) { bool __retval; return Node__get_IsLocalVisible_fn(__this, &__retval), __retval; }
    static ::g::Uno::Geometry::Box LocalBounds(Node* __this);
    static ::g::Uno::Rect LocalRenderBounds(Node* __this);
    static int SubNodeCount(Node* __this) { int __retval; return Node__get_SubNodeCount_fn(__this, &__retval), __retval; }
};

}} // ::g::Fuse

#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float2 Node::AbsoluteViewportOrigin() { ::g::Uno::Float2 __retval; return (((Node_type*)__type)->fp_get_AbsoluteViewportOrigin)(this, &__retval), __retval; }
inline ::g::Uno::Float2 Node::GetMarginSize(::g::Uno::Float2 fillSize, int fillSet) { ::g::Uno::Float2 __retval; return (((Node_type*)__type)->fp_GetMarginSize)(this, &fillSize, &fillSet, &__retval), __retval; }
inline ::g::Uno::Geometry::Box Node::LocalBounds() { ::g::Uno::Geometry::Box __retval; return (((Node_type*)__type)->fp_get_LocalBounds)(this, &__retval), __retval; }
inline ::g::Uno::Rect Node::LocalRenderBounds() { ::g::Uno::Rect __retval; return (((Node_type*)__type)->fp_get_LocalRenderBounds)(this, &__retval), __retval; }
inline void Node::OnAdjustMarginBoxPosition(::g::Uno::Float2 position) { (((Node_type*)__type)->fp_OnAdjustMarginBoxPosition)(this, &position); }
inline ::g::Uno::Float2 Node::OnArrangeMarginBox(::g::Uno::Float2 position, ::g::Uno::Float2 availableSizxe, int availSet) { ::g::Uno::Float2 __retval; return (((Node_type*)__type)->fp_OnArrangeMarginBox)(this, &position, &availableSizxe, &availSet, &__retval), __retval; }
inline ::g::Uno::Geometry::Ray Node::WindowToWorldRay(::g::Uno::Float2 windowCoord) { ::g::Uno::Geometry::Ray __retval; return (((Node_type*)__type)->fp_WindowToWorldRay)(this, &windowCoord, &__retval), __retval; }
inline ::g::Uno::Float2 Node::GetMarginSize(Node* __this, ::g::Uno::Float2 fillSize, int fillSet) { ::g::Uno::Float2 __retval; return Node__GetMarginSize_fn(__this, &fillSize, &fillSet, &__retval), __retval; }
inline void Node::OnAdjustMarginBoxPosition(Node* __this, ::g::Uno::Float2 position) { Node__OnAdjustMarginBoxPosition_fn(__this, &position); }
inline ::g::Uno::Float2 Node::OnArrangeMarginBox(Node* __this, ::g::Uno::Float2 position, ::g::Uno::Float2 availableSizxe, int availSet) { ::g::Uno::Float2 __retval; return Node__OnArrangeMarginBox_fn(__this, &position, &availableSizxe, &availSet, &__retval), __retval; }
inline ::g::Uno::Geometry::Ray Node::WindowToWorldRay(Node* __this, ::g::Uno::Float2 windowCoord) { ::g::Uno::Geometry::Ray __retval; return Node__WindowToWorldRay_fn(__this, &windowCoord, &__retval), __retval; }
inline ::g::Uno::Float2 Node::AbsoluteViewportOrigin(Node* __this) { ::g::Uno::Float2 __retval; return Node__get_AbsoluteViewportOrigin_fn(__this, &__retval), __retval; }
inline ::g::Uno::Geometry::Box Node::LocalBounds(Node* __this) { ::g::Uno::Geometry::Box __retval; return Node__get_LocalBounds_fn(__this, &__retval), __retval; }
inline ::g::Uno::Rect Node::LocalRenderBounds(Node* __this) { ::g::Uno::Rect __retval; return Node__get_LocalRenderBounds_fn(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
