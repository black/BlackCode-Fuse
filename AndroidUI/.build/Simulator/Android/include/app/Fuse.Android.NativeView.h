// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_NATIVE_VIEW_H__
#define __APP_FUSE_ANDROID_NATIVE_VIEW_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Android {

struct NativeView;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> NativeView___viewHandle;

struct NativeView__uType : ::app::Fuse::Behavior__uType
{
    void(*__fp_ChildRooted)(NativeView*, NativeView*);
    void(*__fp_ChildUnrooted)(NativeView*, NativeView*);
    ::app::Android::android::view::View*(*__fp_CreateInternal)(NativeView*);
    NativeView*(*__fp_get_Parent)(NativeView*);
    ::app::Uno::Float2(*__fp_get_Size)(NativeView*);
    ::app::Uno::Float4x4(*__fp_get_Transform)(NativeView*);
    void(*__fp_NotifyNewSize)(NativeView*, NativeView*);
};

NativeView__uType* NativeView__typeof();

void NativeView___ObjInit_1(NativeView* __this);
void NativeView___TypeInit(::uStatic* __this);
void NativeView__CancelNotifyNewTransform(NativeView* __this);
void NativeView__ChildRooted(NativeView* __this, NativeView* child);
void NativeView__ChildUnrooted(NativeView* __this, NativeView* child);
::app::Android::android::view::View* NativeView__Create(NativeView* __this);
::app::Android::android::view::View* NativeView__get_Handle(NativeView* __this);
::app::Fuse::Node* NativeView__get_Node(NativeView* __this);
NativeView* NativeView__get_Parent(NativeView* __this);
::app::Uno::Float4x4 NativeView__get_Transform(NativeView* __this);
NativeView* NativeView__GetFrom(::uStatic* __this, ::app::Fuse::Node* node);
void NativeView__HookEvents(NativeView* __this);
void NativeView__NotifyNewSize(NativeView* __this, NativeView* child);
void NativeView__NotifyNewTransform(NativeView* __this);
void NativeView__OnIsEnabledChanged(NativeView* __this, ::uObject* s, ::uObject* a);
void NativeView__OnPlaced(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeView__OnPropertyChanged(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeView__OnRooted(NativeView* __this, ::app::Fuse::Node* n);
void NativeView__OnTransformsChanged(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void NativeView__OnUnrooted(NativeView* __this, ::app::Fuse::Node* n);
void NativeView__RootNativeView(NativeView* __this);
void NativeView__set_Handle(NativeView* __this, ::app::Android::android::view::View* value);
void NativeView__set_Node(NativeView* __this, ::app::Fuse::Node* value);
void NativeView__UnhookEvents(NativeView* __this);
void NativeView__UnrootNativeView(NativeView* __this);
void NativeView__UpdateTransform(NativeView* __this);

struct NativeView : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::app::Android::android::view::View*> _view;
    ::uStrong< NativeView*> _parentCache;
    bool _updatingTransform;
    ::app::Uno::Float2 _oldSize;
    ::app::Uno::Float2 _oldScale;
    ::app::Uno::Float2 _oldPos;
    float _rotation;

    void _ObjInit_1() { NativeView___ObjInit_1(this); }
    void CancelNotifyNewTransform() { NativeView__CancelNotifyNewTransform(this); }
    void ChildRooted(NativeView* child) { (((NativeView__uType*)this->__obj_type)->__fp_ChildRooted)(this, child); }
    void ChildUnrooted(NativeView* child) { (((NativeView__uType*)this->__obj_type)->__fp_ChildUnrooted)(this, child); }
    ::app::Android::android::view::View* Create() { return NativeView__Create(this); }
    ::app::Android::android::view::View* CreateInternal() { return (((NativeView__uType*)this->__obj_type)->__fp_CreateInternal)(this); }
    ::app::Android::android::view::View* Handle() { return NativeView__get_Handle(this); }
    ::app::Fuse::Node* Node() { return NativeView__get_Node(this); }
    NativeView* Parent() { return (((NativeView__uType*)this->__obj_type)->__fp_get_Parent)(this); }
    ::app::Uno::Float2 Size();
    ::app::Uno::Float4x4 Transform();
    void HookEvents() { NativeView__HookEvents(this); }
    void NotifyNewSize(NativeView* child) { (((NativeView__uType*)this->__obj_type)->__fp_NotifyNewSize)(this, child); }
    void NotifyNewTransform() { NativeView__NotifyNewTransform(this); }
    void OnIsEnabledChanged(::uObject* s, ::uObject* a) { NativeView__OnIsEnabledChanged(this, s, a); }
    void OnPlaced(::uObject* sender, ::app::Uno::EventArgs* args) { NativeView__OnPlaced(this, sender, args); }
    void OnPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { NativeView__OnPropertyChanged(this, sender, args); }
    void OnTransformsChanged(::uObject* sender, ::app::Uno::EventArgs* args) { NativeView__OnTransformsChanged(this, sender, args); }
    void RootNativeView() { NativeView__RootNativeView(this); }
    void Handle(::app::Android::android::view::View* value) { NativeView__set_Handle(this, value); }
    void Node(::app::Fuse::Node* value) { NativeView__set_Node(this, value); }
    void UnhookEvents() { NativeView__UnhookEvents(this); }
    void UnrootNativeView() { NativeView__UnrootNativeView(this); }
    void UpdateTransform() { NativeView__UpdateTransform(this); }
};

}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Android {

inline ::app::Uno::Float2 NativeView::Size() { return (((NativeView__uType*)this->__obj_type)->__fp_get_Size)(this); }
inline ::app::Uno::Float4x4 NativeView::Transform() { return (((NativeView__uType*)this->__obj_type)->__fp_get_Transform)(this); }

}}}


#endif
