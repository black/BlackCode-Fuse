// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct LayerDrawable;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct ShapeDrawable;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Shape;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public abstract extern class Shape<T> :1423
// {
struct Shape_type : ::g::Fuse::Android::Controls::Control_type
{
    void(*fp_UpdateShapeDrawable)(::g::Fuse::Android::Controls::Shape*, ::g::Android::android::graphics::drawable::ShapeDrawable*);
};

Shape_type* Shape_typeof();
void Shape__ctor_3_fn(Shape* __this);
void Shape__Attach_fn(Shape* __this);
void Shape__CreateInternal_fn(Shape* __this, ::g::Android::android::view::View** __retval);
void Shape__Detach_fn(Shape* __this);
void Shape__GetLayer_fn(Shape* __this, int* index, ::g::Android::android::graphics::drawable::ShapeDrawable** __retval);
void Shape__OnShapeChanged_fn(Shape* __this);
void Shape__SetBrush_fn(Shape* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Brush* brush);
void Shape__SetStroke_fn(Shape* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Stroke* stroke);

struct Shape : ::g::Fuse::Android::Controls::Control
{
    uStrong< ::g::Android::android::graphics::drawable::LayerDrawable*> _drawable;
    uStrong< ::g::Android::android::view::View*> _shapeView;

    void ctor_3();
    ::g::Android::android::graphics::drawable::ShapeDrawable* GetLayer(int index);
    void OnShapeChanged();
    void SetBrush(::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Brush* brush);
    void SetStroke(::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Stroke* stroke);
    void UpdateShapeDrawable(::g::Android::android::graphics::drawable::ShapeDrawable* shape) { (((Shape_type*)__type)->fp_UpdateShapeDrawable)(this, shape); }
};
// }

}}}} // ::g::Fuse::Android::Controls
