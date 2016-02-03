// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Shape-1.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct ShapeDrawable;}}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Circle;}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class Circle :147
// {
::g::Fuse::Android::Controls::Shape_type* Circle_typeof();
void Circle__ctor_4_fn(Circle* __this);
void Circle__AdjustLayout_fn(Circle* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, ::g::Uno::Float4* __retval);
void Circle__New1_fn(Circle** __retval);
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* shape);

struct Circle : ::g::Fuse::Android::Controls::Shape
{
    void ctor_4();
    static Circle* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
