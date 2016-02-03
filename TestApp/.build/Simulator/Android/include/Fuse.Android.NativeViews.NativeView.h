// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Uno.Float2.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// public abstract extern class NativeView :275
// {
struct NativeView_type : ::g::Fuse::Behavior_type
{
    void(*fp_ChildRooted)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*);
    void(*fp_ChildUnrooted)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*);
    void(*fp_CreateInternal)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Android::android::view::View**);
    void(*fp_NotifyNewSize)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*);
    void(*fp_get_Parent)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView**);
    void(*fp_get_Size)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Uno::Float2*);
    void(*fp_get_Transform)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Uno::Float4x4*);
};

NativeView_type* NativeView_typeof();
void NativeView__ctor_1_fn(NativeView* __this);
void NativeView__CancelNotifyNewTransform_fn(NativeView* __this);
void NativeView__ChildRooted_fn(NativeView* __this, NativeView* child);
void NativeView__ChildUnrooted_fn(NativeView* __this, NativeView* child);
void NativeView__Create_fn(NativeView* __this, ::g::Android::android::view::View** __retval);
void NativeView__GetFrom_fn(::g::Fuse::Node* node, NativeView** __retval);
void NativeView__get_Handle_fn(NativeView* __this, ::g::Android::android::view::View** __retval);
void NativeView__set_Handle_fn(NativeView* __this, ::g::Android::android::view::View* value);
void NativeView__HookEvents_fn(NativeView* __this);
void NativeView__get_Node_fn(NativeView* __this, ::g::Fuse::Node** __retval);
void NativeView__set_Node_fn(NativeView* __this, ::g::Fuse::Node* value);
void NativeView__NotifyNewSize_fn(NativeView* __this, NativeView* child);
void NativeView__NotifyNewTransform_fn(NativeView* __this);
void NativeView__OnIsEnabledChanged_fn(NativeView* __this, uObject* s, uObject* a);
void NativeView__OnIsVisibleChanged_fn(NativeView* __this, uObject* s, uObject* a);
void NativeView__OnPlaced_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void NativeView__OnPropertyChanged_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void NativeView__OnRooted_fn(NativeView* __this, ::g::Fuse::Node* parentNode);
void NativeView__OnTransformsChanged_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void NativeView__OnUnrooted_fn(NativeView* __this, ::g::Fuse::Node* parentNode);
void NativeView__get_Parent_fn(NativeView* __this, NativeView** __retval);
void NativeView__RootNativeView_fn(NativeView* __this);
void NativeView__get_Transform_fn(NativeView* __this, ::g::Uno::Float4x4* __retval);
void NativeView__UnhookEvents_fn(NativeView* __this);
void NativeView__UnrootNativeView_fn(NativeView* __this);
void NativeView__UpdateTransform_fn(NativeView* __this);

struct NativeView : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Node*> _node;
    ::g::Uno::Float2 _oldPos;
    ::g::Uno::Float2 _oldScale;
    ::g::Uno::Float2 _oldSize;
    uStrong<NativeView*> _parentCache;
    float _rotation;
    bool _updatingTransform;
    uStrong< ::g::Android::android::view::View*> _view;
    static uSStrong< ::g::Fuse::PropertyHandle*> _viewHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _viewHandle() { return NativeView_typeof()->Init(), _viewHandle_; }

    void ctor_1();
    void CancelNotifyNewTransform();
    void ChildRooted(NativeView* child) { (((NativeView_type*)__type)->fp_ChildRooted)(this, child); }
    void ChildUnrooted(NativeView* child) { (((NativeView_type*)__type)->fp_ChildUnrooted)(this, child); }
    ::g::Android::android::view::View* Create();
    ::g::Android::android::view::View* CreateInternal() { ::g::Android::android::view::View* __retval; return (((NativeView_type*)__type)->fp_CreateInternal)(this, &__retval), __retval; }
    ::g::Android::android::view::View* Handle();
    void Handle(::g::Android::android::view::View* value);
    void HookEvents();
    ::g::Fuse::Node* Node();
    void Node(::g::Fuse::Node* value);
    void NotifyNewSize(NativeView* child) { (((NativeView_type*)__type)->fp_NotifyNewSize)(this, child); }
    void NotifyNewTransform();
    void OnIsEnabledChanged(uObject* s, uObject* a);
    void OnIsVisibleChanged(uObject* s, uObject* a);
    void OnPlaced(uObject* sender, ::g::Uno::EventArgs* args);
    void OnPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnTransformsChanged(uObject* sender, ::g::Uno::EventArgs* args);
    NativeView* Parent() { NativeView* __retval; return (((NativeView_type*)__type)->fp_get_Parent)(this, &__retval), __retval; }
    void RootNativeView();
    ::g::Uno::Float2 Size();
    ::g::Uno::Float4x4 Transform();
    void UnhookEvents();
    void UnrootNativeView();
    void UpdateTransform();
    static void ChildRooted(NativeView* __this, NativeView* child) { NativeView__ChildRooted_fn(__this, child); }
    static void ChildUnrooted(NativeView* __this, NativeView* child) { NativeView__ChildUnrooted_fn(__this, child); }
    static NativeView* GetFrom(::g::Fuse::Node* node);
    static void NotifyNewSize(NativeView* __this, NativeView* child) { NativeView__NotifyNewSize_fn(__this, child); }
    static NativeView* Parent(NativeView* __this) { NativeView* __retval; return NativeView__get_Parent_fn(__this, &__retval), __retval; }
    static ::g::Uno::Float4x4 Transform(NativeView* __this);
};

}}}} // ::g::Fuse::Android::NativeViews

#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

inline ::g::Uno::Float2 NativeView::Size() { ::g::Uno::Float2 __retval; return (((NativeView_type*)__type)->fp_get_Size)(this, &__retval), __retval; }
inline ::g::Uno::Float4x4 NativeView::Transform() { ::g::Uno::Float4x4 __retval; return (((NativeView_type*)__type)->fp_get_Transform)(this, &__retval), __retval; }
inline ::g::Uno::Float4x4 NativeView::Transform(NativeView* __this) { ::g::Uno::Float4x4 __retval; return NativeView__get_Transform_fn(__this, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Android::NativeViews
