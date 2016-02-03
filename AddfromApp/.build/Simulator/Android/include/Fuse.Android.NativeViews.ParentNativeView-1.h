// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.NativeView.h>
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ParentNativeView;}}}}
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal abstract extern class ParentNativeView<T> :755
// {
struct ParentNativeView_type : ::g::Fuse::Android::NativeViews::NativeView_type
{
    void(*fp_Attach)(::g::Fuse::Android::NativeViews::ParentNativeView*);
    void(*fp_Detach)(::g::Fuse::Android::NativeViews::ParentNativeView*);
};

ParentNativeView_type* ParentNativeView_typeof();
void ParentNativeView__ctor_2_fn(ParentNativeView* __this);
void ParentNativeView__Attach_fn(ParentNativeView* __this);
void ParentNativeView__get_Control_fn(ParentNativeView* __this, ::g::Fuse::Controls::Control** __retval);
void ParentNativeView__Detach_fn(ParentNativeView* __this);
void ParentNativeView__OnRooted_fn(ParentNativeView* __this, ::g::Fuse::Node* parentNode);
void ParentNativeView__OnUnrooted_fn(ParentNativeView* __this, ::g::Fuse::Node* parentNode);
void ParentNativeView__get_Size_fn(ParentNativeView* __this, ::g::Uno::Float2* __retval);

struct ParentNativeView : ::g::Fuse::Android::NativeViews::NativeView
{
    void ctor_2();
    void Attach() { (((ParentNativeView_type*)__type)->fp_Attach)(this); }
    ::g::Fuse::Controls::Control* Control();
    void Detach() { (((ParentNativeView_type*)__type)->fp_Detach)(this); }
    static void Attach(ParentNativeView* __this) { ParentNativeView__Attach_fn(__this); }
    static void Detach(ParentNativeView* __this) { ParentNativeView__Detach_fn(__this); }
};
// }

}}}} // ::g::Fuse::Android::NativeViews
