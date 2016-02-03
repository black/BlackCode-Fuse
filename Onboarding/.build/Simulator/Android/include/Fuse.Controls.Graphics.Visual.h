// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct Visual;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public abstract class Visual :1123
// {
struct Visual_type : ::g::Fuse::Node_type
{
    void(*fp_OnDraw)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*);
};

Visual_type* Visual_typeof();
void Visual__ctor_1_fn(Visual* __this);
void Visual__get_ActualSize_fn(Visual* __this, ::g::Uno::Float2* __retval);
void Visual__set_ActualSize_fn(Visual* __this, ::g::Uno::Float2* value);
void Visual__Draw_fn(Visual* __this, ::g::Fuse::DrawContext* dc);
void Visual__IsPointInside_fn(Visual* __this, ::g::Uno::Float2* localPoint, bool* __retval);
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Uno::Rect* __retval);
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval);
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m);

struct Visual : ::g::Fuse::Node
{
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _ActualSize;

    void ctor_1();
    ::g::Uno::Float2 ActualSize();
    void ActualSize(::g::Uno::Float2 value);
    bool IsPointInside(::g::Uno::Float2 localPoint);
    void OnDraw(::g::Fuse::DrawContext* dc) { (((Visual_type*)__type)->fp_OnDraw)(this, dc); }
};
// }

}}}} // ::g::Fuse::Controls::Graphics
