// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_H__
#define __APP_FUSE_NODE_H__

#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.SumDrawCount.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct BeginRemoveArgs; } }
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Fuse { struct DataContextChangedArgs; } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Fuse { struct NodeDrawCount; } }
namespace app { namespace Fuse { struct Properties; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Fuse { struct Style; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Node__bool; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Node__string; } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection__Uno_EventHandler; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet__Fuse_Node; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Behavior; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Transform; } } }
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {

struct Node;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___addedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___isEnabledChangedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___isVisibleChangedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___nameHandle;
extern ::uStaticStrong< ::app::Uno::Collections::HashSet__Fuse_Node*> Node___needsStyling;
extern bool Node___performingLayout;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___removedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___resourcesHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___rootedHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___styleHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___unrootedHandle;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__bool*> Node__IsEnabledProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__string*> Node__NameProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__bool*> Node__SnapToPixelsProperty;

struct Node__uType : ::uClassType
{
    ::app::Fuse::Scripting::INameScope __interface_0;
    void(*__fp_Draw)(Node*, ::app::Fuse::DrawContext*);
    void(*__fp_DrawSelection)(Node*, ::app::Fuse::DrawContext*);
    ::app::Uno::Float2(*__fp_get_AbsoluteViewportOrigin)(Node*);
    ::app::Fuse::NodeBounds*(*__fp_get_HitTestBounds)(Node*);
    ::app::Fuse::NodeBounds*(*__fp_get_HitTestChildrenBounds)(Node*);
    ::app::Fuse::NodeBounds*(*__fp_get_HitTestLocalBounds)(Node*);
    bool(*__fp_get_IsLocalVisible)(Node*);
    ::app::Uno::Geometry::Box(*__fp_get_LocalBounds)(Node*);
    ::app::Fuse::NodeDrawCount(*__fp_get_LocalDrawCount)(Node*);
    ::app::Uno::Rect(*__fp_get_LocalRenderBounds)(Node*);
    int(*__fp_get_SubNodeCount)(Node*);
    ::app::Uno::Float2(*__fp_GetMarginSize)(Node*, ::app::Uno::Float2, int);
    Node*(*__fp_GetSubNode)(Node*, int);
    void(*__fp_InvalidateLocalTransform)(Node*);
    void(*__fp_InvalidateVisual)(Node*);
    int(*__fp_IsMarginBoxDependent)(Node*, Node*);
    void(*__fp_OnApplyStyle)(Node*, ::uObject*);
    ::app::Uno::Float2(*__fp_OnArrangeMarginBox)(Node*, ::app::Uno::Float2, ::app::Uno::Float2, int);
    void(*__fp_OnHitTest)(Node*, ::app::Fuse::HitTestContext*);
    void(*__fp_OnInvalidateLayout)(Node*);
    bool(*__fp_OnInvalidateRenderBounds)(Node*);
    void(*__fp_OnIsEnabledChanged)(Node*);
    void(*__fp_OnResetStyle)(Node*);
    void(*__fp_OnRooted)(Node*);
    void(*__fp_OnSaveLayoutState)(Node*);
    void(*__fp_OnUnrooted)(Node*);
    void(*__fp_PrependImplicitTransform)(Node*, ::app::Fuse::FastMatrix*);
    void(*__fp_PrependInverseTransformOrigin)(Node*, ::app::Fuse::FastMatrix*);
    void(*__fp_PrependTransformOrigin)(Node*, ::app::Fuse::FastMatrix*);
    void(*__fp_SoftDispose)(Node*);
    ::app::Uno::Geometry::Ray(*__fp_WindowToWorldRay)(Node*, ::app::Uno::Float2);
};

Node__uType* Node__typeof();

void Node___ObjInit(Node* __this);
void Node___TypeInit(::uStatic* __this);
void Node__add_Added(Node* __this, ::uDelegate* value);
void Node__add_BeginRemove(Node* __this, ::uDelegate* value);
void Node__add_DataContextChanged(Node* __this, ::uDelegate* value);
void Node__add_IsEnabledChanged(Node* __this, ::uDelegate* value);
void Node__add_IsVisibleChanged(Node* __this, ::uDelegate* value);
void Node__add_Removed(Node* __this, ::uDelegate* value);
void Node__add_RequestBringIntoView(Node* __this, ::uDelegate* value);
void Node__add_Rooted(Node* __this, ::uDelegate* value);
void Node__add_TransformsChanged(Node* __this, ::uDelegate* value);
void Node__add_Unrooted(Node* __this, ::uDelegate* value);
void Node__add_Update(Node* __this, ::uDelegate* value);
void Node__AddDrawCost(Node* __this, double cost);
void Node__AddEventHandler(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler);
void Node__AddStyleBehavior(Node* __this, ::app::Fuse::Behavior* b);
void Node__AddStyleStyle(Node* __this, ::app::Fuse::Style* style);
void Node__AddStyleTransform(Node* __this, ::app::Fuse::Transform* t);
void Node__ApplyStyle(Node* __this);
void Node__ApplyStyle_1(Node* __this, ::uObject* target);
::app::Uno::Float2 Node__ArrangeMarginBox(Node* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void Node__BringIntoView(Node* __this);
::app::Uno::Rect Node__CalcRenderBoundsInParentSpace(Node* __this);
::app::Fuse::FastMatrix* Node__CalcWorldTransform(Node* __this);
void Node__CheckUpdateListening(Node* __this, bool forceOff);
void Node__ClearBit(Node* __this, int nb);
void Node__DoUpdate(Node* __this);
void Node__Draw(Node* __this, ::app::Fuse::DrawContext* dc);
void Node__DrawLocalRect(Node* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect, float lineWidth, ::app::Uno::Float4 color);
void Node__DrawLocalSelectionRect(Node* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect);
void Node__DrawSelection(Node* __this, ::app::Fuse::DrawContext* dc);
Node* Node__FindAlgorithm(Node* __this, ::uString* name, Node* origin);
Node* Node__FindNodeByName(Node* __this, ::uString* name);
::uObject* Node__FindObjectByName(Node* __this, ::uString* name, ::uDelegate* acceptor);
::app::Uno::Float2 Node__get_AbsoluteViewportOrigin(Node* __this);
float Node__get_AbsoluteZoom(Node* __this);
bool Node__get_AddedByStyle(Node* __this);
::uObject* Node__get_Behaviors(Node* __this);
::uObject* Node__get_DataContext(Node* __this);
double Node__get_DrawCost(Node* __this);
::app::Fuse::SumDrawCount Node__get_DrawCount(Node* __this);
bool Node__get_HasExplicitTransforms(Node* __this);
bool Node__get_HasResources(Node* __this);
bool Node__get_HasSavedLayoutChange(Node* __this);
::app::Fuse::NodeBounds* Node__get_HitTestBounds(Node* __this);
::app::Fuse::NodeBounds* Node__get_HitTestChildrenBounds(Node* __this);
::app::Fuse::NodeBounds* Node__get_HitTestLocalBounds(Node* __this);
bool Node__get_IgnoreStyle(Node* __this);
::app::Fuse::FastMatrix* Node__get_InternLocalTransformInternal(Node* __this);
bool Node__get_IsEnabled(Node* __this);
bool Node__get_IsFlat(Node* __this);
bool Node__get_IsLocalFlat(Node* __this);
bool Node__get_IsLocalRooted(Node* __this);
bool Node__get_IsLocalTransformTranslationOnly(Node* __this);
bool Node__get_IsLocalVisible(Node* __this);
bool Node__get_IsRooted(Node* __this);
bool Node__get_IsVisible(Node* __this);
bool Node__get_IsVisualInvalid(Node* __this);
::app::Uno::Geometry::Box Node__get_LocalBounds(Node* __this);
::app::Fuse::NodeDrawCount Node__get_LocalDrawCount(Node* __this);
::app::Uno::Rect Node__get_LocalRenderBounds(Node* __this);
::app::Uno::Float4x4 Node__get_LocalTransform(Node* __this);
::app::Fuse::FastMatrix* Node__get_LocalTransformInternal(Node* __this);
::app::Uno::Float4x4 Node__get_LocalTransformInverse(Node* __this);
::uString* Node__get_Name(Node* __this);
Node* Node__get_Parent(Node* __this);
float Node__get_PointDensity(Node* __this);
::app::Fuse::Properties* Node__get_Properties(Node* __this);
::uObject* Node__get_Resources(Node* __this);
bool Node__get_SnapToPixels(Node* __this);
::uObject* Node__get_Styles(Node* __this);
int Node__get_SubNodeCount(Node* __this);
::uObject* Node__get_Transforms(Node* __this);
int Node__get_ValidFrameCount(Node* __this);
::uObject* Node__get_Viewport(Node* __this);
::app::Uno::Float3 Node__get_WorldPosition(Node* __this);
::app::Uno::Float4x4 Node__get_WorldTransform(Node* __this);
::app::Fuse::FastMatrix* Node__get_WorldTransformInternal(Node* __this);
::app::Uno::Float4x4 Node__get_WorldTransformInverse(Node* __this);
Node* Node__GetHitWindowPoint(Node* __this, ::app::Uno::Float2 windowPoint);
::app::Uno::Float2 Node__GetMarginSize(Node* __this, ::app::Uno::Float2 fillSize, int fillSet);
int Node__GetPropertyState(Node* __this, int id);
Node* Node__GetSubNode(Node* __this, int index);
::app::Uno::Float4x4 Node__GetTransformTo(Node* __this, Node* other);
::app::Uno::Float4x4 Node__GetTransformToAncestor(Node* __this, Node* ancestor);
bool Node__HasBit(Node* __this, int nb);
void Node__HitTest(Node* __this, ::app::Fuse::HitTestContext* htc);
::app::Uno::Float2 Node__InternSnap(Node* __this, ::app::Uno::Float2 p);
::app::Uno::Float2 Node__InternSnapUp(Node* __this, ::app::Uno::Float2 p);
void Node__InvalidateDrawCount(Node* __this);
void Node__InvalidateFlat(Node* __this);
void Node__InvalidateHitTestBounds(Node* __this);
void Node__InvalidateLayout(Node* __this, int reason);
void Node__InvalidateLayout_1(::uStatic* __this, Node* elm);
void Node__InvalidateLocalTransform(Node* __this);
void Node__InvalidateRenderBounds(Node* __this);
void Node__InvalidateVisual(Node* __this);
void Node__InvokeEventHandler(Node* __this, ::uObject* obj, ::uObject* args);
int Node__IsMarginBoxDependent(Node* __this, Node* child);
bool Node__IsRootStage(Node* __this, int stage);
bool Node__IsWorldMatrixValid(Node* __this);
::app::Uno::Float2 Node__LocalToParent(Node* __this, ::app::Uno::Float2 localPoint);
void Node__MarkRooted(Node* __this);
void Node__MarkUnrooted(Node* __this);
void Node__OnAdded(Node* __this, Node* parent);
void Node__OnApplyStyle(Node* __this, ::uObject* target);
::app::Uno::Float2 Node__OnArrangeMarginBox(Node* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSizxe, int availSet);
void Node__OnBeginRemove(Node* __this, ::app::Fuse::BeginRemoveArgs* args);
void Node__OnBehaviorAdded(Node* __this, ::app::Fuse::Behavior* b);
void Node__OnBehaviorRemoved(Node* __this, ::app::Fuse::Behavior* b);
void Node__OnBringIntoView(Node* __this, Node* elm);
void Node__OnDataContextChanged(Node* __this, ::app::Fuse::DataContextChangedArgs* args);
void Node__OnHitTest(Node* __this, ::app::Fuse::HitTestContext* htc);
void Node__OnInvalidateLayout(Node* __this);
bool Node__OnInvalidateRenderBounds(Node* __this);
void Node__OnIsEnabledChanged(Node* __this);
void Node__OnIsEnabledChangedInternal(::uStatic* __this, Node* n);
void Node__OnIsSelectedChanged(Node* __this, bool isSelected);
void Node__OnIsVisibleChanged(Node* __this);
void Node__OnLocalVisibleChanged(Node* __this);
void Node__OnMatrixChanged(Node* __this, ::app::Fuse::Transform* t);
void Node__OnNameChanged(::uStatic* __this, Node* n);
void Node__OnRemoved(Node* __this, Node* parent);
void Node__OnResetStyle(Node* __this);
void Node__OnResourceChanged(Node* __this, ::app::Uno::UX::Resource* res);
void Node__OnRooted(Node* __this);
void Node__OnSaveLayoutState(Node* __this);
void Node__OnTransformAdded(Node* __this, ::app::Fuse::Transform* t);
void Node__OnTransformRemoved(Node* __this, ::app::Fuse::Transform* t);
void Node__OnTransformsChanged(Node* __this);
void Node__OnUnrooted(Node* __this);
void Node__OnWorldTransformValidated(Node* __this);
::app::Uno::Float2 Node__ParentToLocal(Node* __this, ::app::Uno::Float2 parentPoint);
void Node__PerformLayout(Node* __this);
void Node__PerformLayout_1(Node* __this, ::app::Uno::Float2 clientSize);
void Node__PrepareLayoutChange(Node* __this);
void Node__PrependExplicitTransforms(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__PrependImplicitTransform(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__PrependInverseTransformOrigin(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__PrependLocalTransform(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__PrependTransformOrigin(Node* __this, ::app::Fuse::FastMatrix* m);
void Node__ProcessNeedsStyling(::uStatic* __this);
void Node__RaiseEvent(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne);
void Node__RearrangeMarginBox(Node* __this);
void Node__remove_Added(Node* __this, ::uDelegate* value);
void Node__remove_BeginRemove(Node* __this, ::uDelegate* value);
void Node__remove_DataContextChanged(Node* __this, ::uDelegate* value);
void Node__remove_IsEnabledChanged(Node* __this, ::uDelegate* value);
void Node__remove_IsVisibleChanged(Node* __this, ::uDelegate* value);
void Node__remove_Removed(Node* __this, ::uDelegate* value);
void Node__remove_RequestBringIntoView(Node* __this, ::uDelegate* value);
void Node__remove_Rooted(Node* __this, ::uDelegate* value);
void Node__remove_TransformsChanged(Node* __this, ::uDelegate* value);
void Node__remove_Unrooted(Node* __this, ::uDelegate* value);
void Node__remove_Update(Node* __this, ::uDelegate* value);
void Node__RemoveDrawCost(Node* __this, double cost);
void Node__RemoveEventHandler(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler);
void Node__ResetStyle(Node* __this);
void Node__ResetSubtreeStyle(Node* __this);
void Node__RootBehaviors(Node* __this);
void Node__SaveLayoutState(Node* __this);
void Node__ScheduleForStyling(::uStatic* __this, Node* n);
void Node__set_AddedByStyle(Node* __this, bool value);
void Node__set_DataContext(Node* __this, ::uObject* value);
void Node__set_IgnoreStyle(Node* __this, bool value);
void Node__set_IsEnabled(Node* __this, bool value);
void Node__set_Name(Node* __this, ::uString* value);
void Node__set_SnapToPixels(Node* __this, bool value);
void Node__SetBit(Node* __this, int nb);
void Node__SetPropertyState(Node* __this, int id, int state);
void Node__SetResource(Node* __this, ::uString* key, ::uObject* value);
::app::Uno::Float2 Node__Snap(Node* __this, ::app::Uno::Float2 p);
::app::Uno::Float2 Node__SnapUp(Node* __this, ::app::Uno::Float2 p);
void Node__SoftDispose(Node* __this);
void Node__StyleAdded(Node* __this, ::app::Fuse::Style* s);
void Node__StyleRemoved(Node* __this, ::app::Fuse::Style* s);
bool Node__TryGetResource(Node* __this, ::uString* key, ::uDelegate* acceptor, ::uObject** resource);
void Node__UnrootBehaviors(Node* __this);
void Node__UpdateIsEnabledCache(Node* __this);
void Node__UpdateIsVisibleCache(Node* __this);
void Node__UpdateLayout(Node* __this);
void Node__ValidateVisual(Node* __this);
void Node__VisitSubtree(Node* __this, ::uDelegate* action);
::app::Uno::Float2 Node__WindowToLocal(Node* __this, ::app::Uno::Float2 windowCoord);
::app::Uno::Geometry::Ray Node__WindowToWorldRay(Node* __this, ::app::Uno::Float2 windowCoord);

struct Node : ::uObject
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Behavior*> _behaviors;
    ::uStrong< ::uObject*> _dataContext;
    bool _isDrawCount;
    ::app::Fuse::SumDrawCount _drawCount;
    int _nodebits;
    ::uStrong< ::app::Fuse::NodeBounds*> _hitTestBoundsCache;
    bool _isHitTestBoundsCacheValid;
    bool _isEnabledCache;
    bool _isLocalFlatCached;
    bool _isLocalFlat;
    bool _isFlatCached;
    bool _isFlat;
    bool _isVisibleCached;
    int _layoutDirty;
    ::app::Uno::Float2 _cachedRenderTargetSize;
    int _ppPendLayoutChange;
    ::app::Uno::Float2 _ambPosition;
    ::app::Uno::Float2 _ambSize;
    ::app::Uno::Float2 _ambMargin;
    int _ambAvailSet;
    bool _hasMarginBox;
    int ZLayer;
    int ZOffset;
    bool ZOffsetFixed;
    ::uUInt _b0;
    ::uUInt _b1;
    ::uUInt _b2;
    ::uUInt _b3;
    ::uUInt _b4;
    ::uUInt _b5;
    bool _ignoreStyle;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Transform*> _transforms;
    int _worldTransformVersion;
    ::uStrong< ::app::Fuse::FastMatrix*> _worldTransformInverse;
    int _worldTransformInverseCacheVersion;
    int _worldTransformCacheVersion;
    int _worldTransformParentCacheVersion;
    ::uStrong< ::app::Fuse::FastMatrix*> _worldTransform;
    ::uStrong< ::app::Fuse::FastMatrix*> _localTransform;
    ::uStrong< ::app::Fuse::FastMatrix*> _localTransformInverse;
    bool _visualDirty;
    int _lastInvalidate;
    double _drawCost;
    ::uStrong< ::app::Fuse::Properties*> _properties;
    ::uStrong< Node*> _parent;
    ::uStrong< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*> _updateListeners;
    bool _hasListenerAction;
    int _rootStage;
    bool _isAddedUpdate;
    ::uStrong< ::uDelegate*> BeginRemove;
    ::uStrong< ::uDelegate*> RequestBringIntoView;
    ::uStrong< ::uDelegate*> TransformsChanged;
    ::uStrong< ::uDelegate*> DataContextChanged;
    bool _AddedByStyle;

    void _ObjInit() { Node___ObjInit(this); }
    void add_Added(::uDelegate* value) { Node__add_Added(this, value); }
    void add_BeginRemove(::uDelegate* value) { Node__add_BeginRemove(this, value); }
    void add_DataContextChanged(::uDelegate* value) { Node__add_DataContextChanged(this, value); }
    void add_IsEnabledChanged(::uDelegate* value) { Node__add_IsEnabledChanged(this, value); }
    void add_IsVisibleChanged(::uDelegate* value) { Node__add_IsVisibleChanged(this, value); }
    void add_Removed(::uDelegate* value) { Node__add_Removed(this, value); }
    void add_RequestBringIntoView(::uDelegate* value) { Node__add_RequestBringIntoView(this, value); }
    void add_Rooted(::uDelegate* value) { Node__add_Rooted(this, value); }
    void add_TransformsChanged(::uDelegate* value) { Node__add_TransformsChanged(this, value); }
    void add_Unrooted(::uDelegate* value) { Node__add_Unrooted(this, value); }
    void add_Update(::uDelegate* value) { Node__add_Update(this, value); }
    void AddDrawCost(double cost) { Node__AddDrawCost(this, cost); }
    void AddEventHandler(::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler) { Node__AddEventHandler(this, ph, ne, handler); }
    void AddStyleBehavior(::app::Fuse::Behavior* b) { Node__AddStyleBehavior(this, b); }
    void AddStyleStyle(::app::Fuse::Style* style) { Node__AddStyleStyle(this, style); }
    void AddStyleTransform(::app::Fuse::Transform* t) { Node__AddStyleTransform(this, t); }
    void ApplyStyle() { Node__ApplyStyle(this); }
    void ApplyStyle_1(::uObject* target) { Node__ApplyStyle_1(this, target); }
    ::app::Uno::Float2 ArrangeMarginBox(::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
    void BringIntoView() { Node__BringIntoView(this); }
    ::app::Uno::Rect CalcRenderBoundsInParentSpace();
    ::app::Fuse::FastMatrix* CalcWorldTransform() { return Node__CalcWorldTransform(this); }
    void CheckUpdateListening(bool forceOff) { Node__CheckUpdateListening(this, forceOff); }
    void ClearBit(int nb) { Node__ClearBit(this, nb); }
    void DoUpdate() { Node__DoUpdate(this); }
    void Draw(::app::Fuse::DrawContext* dc) { (((Node__uType*)this->__obj_type)->__fp_Draw)(this, dc); }
    void DrawLocalRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect, float lineWidth, ::app::Uno::Float4 color);
    void DrawLocalSelectionRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect);
    void DrawSelection(::app::Fuse::DrawContext* dc) { (((Node__uType*)this->__obj_type)->__fp_DrawSelection)(this, dc); }
    Node* FindAlgorithm(::uString* name, Node* origin) { return Node__FindAlgorithm(this, name, origin); }
    Node* FindNodeByName(::uString* name) { return Node__FindNodeByName(this, name); }
    ::uObject* FindObjectByName(::uString* name, ::uDelegate* acceptor) { return Node__FindObjectByName(this, name, acceptor); }
    ::app::Uno::Float2 AbsoluteViewportOrigin();
    float AbsoluteZoom() { return Node__get_AbsoluteZoom(this); }
    bool AddedByStyle() { return Node__get_AddedByStyle(this); }
    ::uObject* Behaviors() { return Node__get_Behaviors(this); }
    ::uObject* DataContext() { return Node__get_DataContext(this); }
    double DrawCost() { return Node__get_DrawCost(this); }
    ::app::Fuse::SumDrawCount DrawCount();
    bool HasExplicitTransforms() { return Node__get_HasExplicitTransforms(this); }
    bool HasResources() { return Node__get_HasResources(this); }
    bool HasSavedLayoutChange() { return Node__get_HasSavedLayoutChange(this); }
    ::app::Fuse::NodeBounds* HitTestBounds() { return (((Node__uType*)this->__obj_type)->__fp_get_HitTestBounds)(this); }
    ::app::Fuse::NodeBounds* HitTestChildrenBounds() { return (((Node__uType*)this->__obj_type)->__fp_get_HitTestChildrenBounds)(this); }
    ::app::Fuse::NodeBounds* HitTestLocalBounds() { return (((Node__uType*)this->__obj_type)->__fp_get_HitTestLocalBounds)(this); }
    bool IgnoreStyle() { return Node__get_IgnoreStyle(this); }
    ::app::Fuse::FastMatrix* InternLocalTransformInternal() { return Node__get_InternLocalTransformInternal(this); }
    bool IsEnabled() { return Node__get_IsEnabled(this); }
    bool IsFlat() { return Node__get_IsFlat(this); }
    bool IsLocalFlat() { return Node__get_IsLocalFlat(this); }
    bool IsLocalRooted() { return Node__get_IsLocalRooted(this); }
    bool IsLocalTransformTranslationOnly() { return Node__get_IsLocalTransformTranslationOnly(this); }
    bool IsLocalVisible() { return (((Node__uType*)this->__obj_type)->__fp_get_IsLocalVisible)(this); }
    bool IsRooted() { return Node__get_IsRooted(this); }
    bool IsVisible() { return Node__get_IsVisible(this); }
    bool IsVisualInvalid() { return Node__get_IsVisualInvalid(this); }
    ::app::Uno::Geometry::Box LocalBounds();
    ::app::Fuse::NodeDrawCount LocalDrawCount();
    ::app::Uno::Rect LocalRenderBounds();
    ::app::Uno::Float4x4 LocalTransform();
    ::app::Fuse::FastMatrix* LocalTransformInternal() { return Node__get_LocalTransformInternal(this); }
    ::app::Uno::Float4x4 LocalTransformInverse();
    ::uString* Name() { return Node__get_Name(this); }
    Node* Parent() { return Node__get_Parent(this); }
    float PointDensity() { return Node__get_PointDensity(this); }
    ::app::Fuse::Properties* Properties() { return Node__get_Properties(this); }
    ::uObject* Resources() { return Node__get_Resources(this); }
    bool SnapToPixels() { return Node__get_SnapToPixels(this); }
    ::uObject* Styles() { return Node__get_Styles(this); }
    int SubNodeCount() { return (((Node__uType*)this->__obj_type)->__fp_get_SubNodeCount)(this); }
    ::uObject* Transforms() { return Node__get_Transforms(this); }
    int ValidFrameCount() { return Node__get_ValidFrameCount(this); }
    ::uObject* Viewport() { return Node__get_Viewport(this); }
    ::app::Uno::Float3 WorldPosition();
    ::app::Uno::Float4x4 WorldTransform();
    ::app::Fuse::FastMatrix* WorldTransformInternal() { return Node__get_WorldTransformInternal(this); }
    ::app::Uno::Float4x4 WorldTransformInverse();
    Node* GetHitWindowPoint(::app::Uno::Float2 windowPoint);
    ::app::Uno::Float2 GetMarginSize(::app::Uno::Float2 fillSize, int fillSet);
    int GetPropertyState(int id) { return Node__GetPropertyState(this, id); }
    Node* GetSubNode(int index) { return (((Node__uType*)this->__obj_type)->__fp_GetSubNode)(this, index); }
    ::app::Uno::Float4x4 GetTransformTo(Node* other);
    ::app::Uno::Float4x4 GetTransformToAncestor(Node* ancestor);
    bool HasBit(int nb) { return Node__HasBit(this, nb); }
    void HitTest(::app::Fuse::HitTestContext* htc) { Node__HitTest(this, htc); }
    ::app::Uno::Float2 InternSnap(::app::Uno::Float2 p);
    ::app::Uno::Float2 InternSnapUp(::app::Uno::Float2 p);
    void InvalidateDrawCount() { Node__InvalidateDrawCount(this); }
    void InvalidateFlat() { Node__InvalidateFlat(this); }
    void InvalidateHitTestBounds() { Node__InvalidateHitTestBounds(this); }
    void InvalidateLayout(int reason) { Node__InvalidateLayout(this, reason); }
    void InvalidateLocalTransform() { (((Node__uType*)this->__obj_type)->__fp_InvalidateLocalTransform)(this); }
    void InvalidateRenderBounds() { Node__InvalidateRenderBounds(this); }
    void InvalidateVisual() { (((Node__uType*)this->__obj_type)->__fp_InvalidateVisual)(this); }
    void InvokeEventHandler(::uObject* obj, ::uObject* args) { Node__InvokeEventHandler(this, obj, args); }
    int IsMarginBoxDependent(Node* child) { return (((Node__uType*)this->__obj_type)->__fp_IsMarginBoxDependent)(this, child); }
    bool IsRootStage(int stage) { return Node__IsRootStage(this, stage); }
    bool IsWorldMatrixValid() { return Node__IsWorldMatrixValid(this); }
    ::app::Uno::Float2 LocalToParent(::app::Uno::Float2 localPoint);
    void MarkRooted() { Node__MarkRooted(this); }
    void MarkUnrooted() { Node__MarkUnrooted(this); }
    void OnAdded(Node* parent) { Node__OnAdded(this, parent); }
    void OnApplyStyle(::uObject* target) { (((Node__uType*)this->__obj_type)->__fp_OnApplyStyle)(this, target); }
    ::app::Uno::Float2 OnArrangeMarginBox(::app::Uno::Float2 position, ::app::Uno::Float2 availableSizxe, int availSet);
    void OnBeginRemove(::app::Fuse::BeginRemoveArgs* args) { Node__OnBeginRemove(this, args); }
    void OnBehaviorAdded(::app::Fuse::Behavior* b) { Node__OnBehaviorAdded(this, b); }
    void OnBehaviorRemoved(::app::Fuse::Behavior* b) { Node__OnBehaviorRemoved(this, b); }
    void OnBringIntoView(Node* elm) { Node__OnBringIntoView(this, elm); }
    void OnDataContextChanged(::app::Fuse::DataContextChangedArgs* args) { Node__OnDataContextChanged(this, args); }
    void OnHitTest(::app::Fuse::HitTestContext* htc) { (((Node__uType*)this->__obj_type)->__fp_OnHitTest)(this, htc); }
    void OnInvalidateLayout() { (((Node__uType*)this->__obj_type)->__fp_OnInvalidateLayout)(this); }
    bool OnInvalidateRenderBounds() { return (((Node__uType*)this->__obj_type)->__fp_OnInvalidateRenderBounds)(this); }
    void OnIsEnabledChanged() { (((Node__uType*)this->__obj_type)->__fp_OnIsEnabledChanged)(this); }
    void OnIsSelectedChanged(bool isSelected) { Node__OnIsSelectedChanged(this, isSelected); }
    void OnIsVisibleChanged() { Node__OnIsVisibleChanged(this); }
    void OnLocalVisibleChanged() { Node__OnLocalVisibleChanged(this); }
    void OnMatrixChanged(::app::Fuse::Transform* t) { Node__OnMatrixChanged(this, t); }
    void OnRemoved(Node* parent) { Node__OnRemoved(this, parent); }
    void OnResetStyle() { (((Node__uType*)this->__obj_type)->__fp_OnResetStyle)(this); }
    void OnResourceChanged(::app::Uno::UX::Resource* res) { Node__OnResourceChanged(this, res); }
    void OnRooted() { (((Node__uType*)this->__obj_type)->__fp_OnRooted)(this); }
    void OnSaveLayoutState() { (((Node__uType*)this->__obj_type)->__fp_OnSaveLayoutState)(this); }
    void OnTransformAdded(::app::Fuse::Transform* t) { Node__OnTransformAdded(this, t); }
    void OnTransformRemoved(::app::Fuse::Transform* t) { Node__OnTransformRemoved(this, t); }
    void OnTransformsChanged() { Node__OnTransformsChanged(this); }
    void OnUnrooted() { (((Node__uType*)this->__obj_type)->__fp_OnUnrooted)(this); }
    void OnWorldTransformValidated() { Node__OnWorldTransformValidated(this); }
    ::app::Uno::Float2 ParentToLocal(::app::Uno::Float2 parentPoint);
    void PerformLayout() { Node__PerformLayout(this); }
    void PerformLayout_1(::app::Uno::Float2 clientSize);
    void PrepareLayoutChange() { Node__PrepareLayoutChange(this); }
    void PrependExplicitTransforms(::app::Fuse::FastMatrix* m) { Node__PrependExplicitTransforms(this, m); }
    void PrependImplicitTransform(::app::Fuse::FastMatrix* m) { (((Node__uType*)this->__obj_type)->__fp_PrependImplicitTransform)(this, m); }
    void PrependInverseTransformOrigin(::app::Fuse::FastMatrix* m) { (((Node__uType*)this->__obj_type)->__fp_PrependInverseTransformOrigin)(this, m); }
    void PrependLocalTransform(::app::Fuse::FastMatrix* m) { Node__PrependLocalTransform(this, m); }
    void PrependTransformOrigin(::app::Fuse::FastMatrix* m) { (((Node__uType*)this->__obj_type)->__fp_PrependTransformOrigin)(this, m); }
    void RaiseEvent(::app::Fuse::PropertyHandle* ph, int ne) { Node__RaiseEvent(this, ph, ne); }
    void RearrangeMarginBox() { Node__RearrangeMarginBox(this); }
    void remove_Added(::uDelegate* value) { Node__remove_Added(this, value); }
    void remove_BeginRemove(::uDelegate* value) { Node__remove_BeginRemove(this, value); }
    void remove_DataContextChanged(::uDelegate* value) { Node__remove_DataContextChanged(this, value); }
    void remove_IsEnabledChanged(::uDelegate* value) { Node__remove_IsEnabledChanged(this, value); }
    void remove_IsVisibleChanged(::uDelegate* value) { Node__remove_IsVisibleChanged(this, value); }
    void remove_Removed(::uDelegate* value) { Node__remove_Removed(this, value); }
    void remove_RequestBringIntoView(::uDelegate* value) { Node__remove_RequestBringIntoView(this, value); }
    void remove_Rooted(::uDelegate* value) { Node__remove_Rooted(this, value); }
    void remove_TransformsChanged(::uDelegate* value) { Node__remove_TransformsChanged(this, value); }
    void remove_Unrooted(::uDelegate* value) { Node__remove_Unrooted(this, value); }
    void remove_Update(::uDelegate* value) { Node__remove_Update(this, value); }
    void RemoveDrawCost(double cost) { Node__RemoveDrawCost(this, cost); }
    void RemoveEventHandler(::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler) { Node__RemoveEventHandler(this, ph, ne, handler); }
    void ResetStyle() { Node__ResetStyle(this); }
    void ResetSubtreeStyle() { Node__ResetSubtreeStyle(this); }
    void RootBehaviors() { Node__RootBehaviors(this); }
    void SaveLayoutState() { Node__SaveLayoutState(this); }
    void AddedByStyle(bool value) { Node__set_AddedByStyle(this, value); }
    void DataContext(::uObject* value) { Node__set_DataContext(this, value); }
    void IgnoreStyle(bool value) { Node__set_IgnoreStyle(this, value); }
    void IsEnabled(bool value) { Node__set_IsEnabled(this, value); }
    void Name(::uString* value) { Node__set_Name(this, value); }
    void SnapToPixels(bool value) { Node__set_SnapToPixels(this, value); }
    void SetBit(int nb) { Node__SetBit(this, nb); }
    void SetPropertyState(int id, int state) { Node__SetPropertyState(this, id, state); }
    void SetResource(::uString* key, ::uObject* value) { Node__SetResource(this, key, value); }
    ::app::Uno::Float2 Snap(::app::Uno::Float2 p);
    ::app::Uno::Float2 SnapUp(::app::Uno::Float2 p);
    void SoftDispose() { (((Node__uType*)this->__obj_type)->__fp_SoftDispose)(this); }
    void StyleAdded(::app::Fuse::Style* s) { Node__StyleAdded(this, s); }
    void StyleRemoved(::app::Fuse::Style* s) { Node__StyleRemoved(this, s); }
    bool TryGetResource(::uString* key, ::uDelegate* acceptor, ::uObject** resource) { return Node__TryGetResource(this, key, acceptor, resource); }
    void UnrootBehaviors() { Node__UnrootBehaviors(this); }
    void UpdateIsEnabledCache() { Node__UpdateIsEnabledCache(this); }
    void UpdateIsVisibleCache() { Node__UpdateIsVisibleCache(this); }
    void UpdateLayout() { Node__UpdateLayout(this); }
    void ValidateVisual() { Node__ValidateVisual(this); }
    void VisitSubtree(::uDelegate* action) { Node__VisitSubtree(this, action); }
    ::app::Uno::Float2 WindowToLocal(::app::Uno::Float2 windowCoord);
    ::app::Uno::Geometry::Ray WindowToWorldRay(::app::Uno::Float2 windowCoord);
};

}}

#include <app/Fuse.NodeDrawCount.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 Node::ArrangeMarginBox(::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet) { return Node__ArrangeMarginBox(this, position, availableSize, availSet); }
inline ::app::Uno::Rect Node::CalcRenderBoundsInParentSpace() { return Node__CalcRenderBoundsInParentSpace(this); }
inline void Node::DrawLocalRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect, float lineWidth, ::app::Uno::Float4 color) { Node__DrawLocalRect(this, dc, rect, lineWidth, color); }
inline void Node::DrawLocalSelectionRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect) { Node__DrawLocalSelectionRect(this, dc, rect); }
inline ::app::Uno::Float2 Node::AbsoluteViewportOrigin() { return (((Node__uType*)this->__obj_type)->__fp_get_AbsoluteViewportOrigin)(this); }
inline ::app::Fuse::SumDrawCount Node::DrawCount() { return Node__get_DrawCount(this); }
inline ::app::Uno::Geometry::Box Node::LocalBounds() { return (((Node__uType*)this->__obj_type)->__fp_get_LocalBounds)(this); }
inline ::app::Fuse::NodeDrawCount Node::LocalDrawCount() { return (((Node__uType*)this->__obj_type)->__fp_get_LocalDrawCount)(this); }
inline ::app::Uno::Rect Node::LocalRenderBounds() { return (((Node__uType*)this->__obj_type)->__fp_get_LocalRenderBounds)(this); }
inline ::app::Uno::Float4x4 Node::LocalTransform() { return Node__get_LocalTransform(this); }
inline ::app::Uno::Float4x4 Node::LocalTransformInverse() { return Node__get_LocalTransformInverse(this); }
inline ::app::Uno::Float3 Node::WorldPosition() { return Node__get_WorldPosition(this); }
inline ::app::Uno::Float4x4 Node::WorldTransform() { return Node__get_WorldTransform(this); }
inline ::app::Uno::Float4x4 Node::WorldTransformInverse() { return Node__get_WorldTransformInverse(this); }
inline Node* Node::GetHitWindowPoint(::app::Uno::Float2 windowPoint) { return Node__GetHitWindowPoint(this, windowPoint); }
inline ::app::Uno::Float2 Node::GetMarginSize(::app::Uno::Float2 fillSize, int fillSet) { return (((Node__uType*)this->__obj_type)->__fp_GetMarginSize)(this, fillSize, fillSet); }
inline ::app::Uno::Float4x4 Node::GetTransformTo(Node* other) { return Node__GetTransformTo(this, other); }
inline ::app::Uno::Float4x4 Node::GetTransformToAncestor(Node* ancestor) { return Node__GetTransformToAncestor(this, ancestor); }
inline ::app::Uno::Float2 Node::InternSnap(::app::Uno::Float2 p) { return Node__InternSnap(this, p); }
inline ::app::Uno::Float2 Node::InternSnapUp(::app::Uno::Float2 p) { return Node__InternSnapUp(this, p); }
inline ::app::Uno::Float2 Node::LocalToParent(::app::Uno::Float2 localPoint) { return Node__LocalToParent(this, localPoint); }
inline ::app::Uno::Float2 Node::OnArrangeMarginBox(::app::Uno::Float2 position, ::app::Uno::Float2 availableSizxe, int availSet) { return (((Node__uType*)this->__obj_type)->__fp_OnArrangeMarginBox)(this, position, availableSizxe, availSet); }
inline ::app::Uno::Float2 Node::ParentToLocal(::app::Uno::Float2 parentPoint) { return Node__ParentToLocal(this, parentPoint); }
inline void Node::PerformLayout_1(::app::Uno::Float2 clientSize) { Node__PerformLayout_1(this, clientSize); }
inline ::app::Uno::Float2 Node::Snap(::app::Uno::Float2 p) { return Node__Snap(this, p); }
inline ::app::Uno::Float2 Node::SnapUp(::app::Uno::Float2 p) { return Node__SnapUp(this, p); }
inline ::app::Uno::Float2 Node::WindowToLocal(::app::Uno::Float2 windowCoord) { return Node__WindowToLocal(this, windowCoord); }
inline ::app::Uno::Geometry::Ray Node::WindowToWorldRay(::app::Uno::Float2 windowCoord) { return (((Node__uType*)this->__obj_type)->__fp_WindowToWorldRay)(this, windowCoord); }

}}


#endif
