// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ResizeChangeMode;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class LayoutTransition.ResizeChangeMode :91
// {
struct LayoutTransition__ResizeChangeMode_type : uType
{
    ::g::Fuse::Animations::IResizeMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof();
void LayoutTransition__ResizeChangeMode__ctor__fn(LayoutTransition__ResizeChangeMode* __this);
void LayoutTransition__ResizeChangeMode__get_Flags_fn(LayoutTransition__ResizeChangeMode* __this, int* __retval);
void LayoutTransition__ResizeChangeMode__GetSizeChange_fn(LayoutTransition__ResizeChangeMode* __this, ::g::Fuse::Node* n, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval);
void LayoutTransition__ResizeChangeMode__New1_fn(LayoutTransition__ResizeChangeMode** __retval);

struct LayoutTransition__ResizeChangeMode : uObject
{
    void ctor_();
    int Flags();
    bool GetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize);
    static LayoutTransition__ResizeChangeMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
