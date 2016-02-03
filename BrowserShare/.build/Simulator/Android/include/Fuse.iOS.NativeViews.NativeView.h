// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.19.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// public abstract extern class NativeView :254
// {
::g::Fuse::Behavior_type* NativeView_typeof();
void NativeView__ctor_1_fn(NativeView* __this);
void NativeView__GetFrom_fn(::g::Fuse::Node* n, NativeView** __retval);
void NativeView__OnTintColorChanged_fn(NativeView* __this);

struct NativeView : ::g::Fuse::Behavior
{
    void ctor_1();
    void OnTintColorChanged();
    static NativeView* GetFrom(::g::Fuse::Node* n);
};
// }

}}}} // ::g::Fuse::iOS::NativeViews
