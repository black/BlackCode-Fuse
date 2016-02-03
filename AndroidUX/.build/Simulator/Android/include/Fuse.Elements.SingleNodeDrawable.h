// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.IElementBatchDrawable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct SingleNodeDrawable;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class SingleNodeDrawable :816
// {
struct SingleNodeDrawable_type : uType
{
    ::g::Fuse::Elements::IElementBatchDrawable interface0;
};

SingleNodeDrawable_type* SingleNodeDrawable_typeof();
void SingleNodeDrawable__ctor__fn(SingleNodeDrawable* __this, ::g::Fuse::Node* elm);
void SingleNodeDrawable__Draw_fn(SingleNodeDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace);
void SingleNodeDrawable__New1_fn(::g::Fuse::Node* elm, SingleNodeDrawable** __retval);

struct SingleNodeDrawable : uObject
{
    uStrong< ::g::Fuse::Node*> _elm;

    void ctor_(::g::Fuse::Node* elm);
    void Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace);
    static SingleNodeDrawable* New1(::g::Fuse::Node* elm);
};
// }

}}} // ::g::Fuse::Elements
