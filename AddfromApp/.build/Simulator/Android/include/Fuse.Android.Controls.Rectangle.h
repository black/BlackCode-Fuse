// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Shape-1.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct ShapeDrawable;}}}}}
namespace g{namespace Android{namespace Runtime{struct FloatArray;}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Rectangle;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class Rectangle :1205
// {
::g::Fuse::Android::Controls::Shape_type* Rectangle_typeof();
void Rectangle__ctor_4_fn(Rectangle* __this);
void Rectangle__Detach_fn(Rectangle* __this);
void Rectangle__New1_fn(Rectangle** __retval);
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* shape);

struct Rectangle : ::g::Fuse::Android::Controls::Shape
{
    uStrong< ::g::Android::Runtime::FloatArray*> _cornerArray;

    void ctor_4();
    static Rectangle* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
