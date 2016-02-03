// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_SHAPE__FUSE_CONTROLS_RECTANGLE_H__
#define __APP_FUSE_ANDROID_SHAPE__FUSE_CONTROLS_RECTANGLE_H__

#include <app/Fuse.Android.ControlView__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct LayerDrawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct ShapeDrawable; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }

namespace app {
namespace Fuse {
namespace Android {

struct Shape__Fuse_Controls_Rectangle;

struct Shape__Fuse_Controls_Rectangle__uType : ::app::Fuse::Android::ControlView__Fuse_Controls_Rectangle__uType
{
    void(*__fp_UpdateShapeDrawable)(Shape__Fuse_Controls_Rectangle*, ::app::Android::android::graphics::drawable::ShapeDrawable*);
};

Shape__Fuse_Controls_Rectangle__uType* Shape__Fuse_Controls_Rectangle__typeof();

void Shape__Fuse_Controls_Rectangle___ObjInit_3(Shape__Fuse_Controls_Rectangle* __this);
void Shape__Fuse_Controls_Rectangle__Attach(Shape__Fuse_Controls_Rectangle* __this);
::app::Android::android::view::View* Shape__Fuse_Controls_Rectangle__CreateInternal(Shape__Fuse_Controls_Rectangle* __this);
void Shape__Fuse_Controls_Rectangle__Detach(Shape__Fuse_Controls_Rectangle* __this);
::app::Android::android::graphics::drawable::ShapeDrawable* Shape__Fuse_Controls_Rectangle__GetLayer(Shape__Fuse_Controls_Rectangle* __this, int index);
void Shape__Fuse_Controls_Rectangle__OnShapeChanged(Shape__Fuse_Controls_Rectangle* __this);
void Shape__Fuse_Controls_Rectangle__SetBrush(Shape__Fuse_Controls_Rectangle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* drawable, ::app::Fuse::Drawing::Brush* brush);
void Shape__Fuse_Controls_Rectangle__SetStroke(Shape__Fuse_Controls_Rectangle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* drawable, ::app::Fuse::Drawing::Stroke* stroke);

struct Shape__Fuse_Controls_Rectangle : ::app::Fuse::Android::ControlView__Fuse_Controls_Rectangle
{
    ::uStrong< ::app::Android::android::view::View*> _shapeView;
    ::uStrong< ::app::Android::android::graphics::drawable::LayerDrawable*> _drawable;

    void _ObjInit_3() { Shape__Fuse_Controls_Rectangle___ObjInit_3(this); }
    ::app::Android::android::graphics::drawable::ShapeDrawable* GetLayer(int index) { return Shape__Fuse_Controls_Rectangle__GetLayer(this, index); }
    void OnShapeChanged() { Shape__Fuse_Controls_Rectangle__OnShapeChanged(this); }
    void SetBrush(::app::Android::android::graphics::drawable::ShapeDrawable* drawable, ::app::Fuse::Drawing::Brush* brush) { Shape__Fuse_Controls_Rectangle__SetBrush(this, drawable, brush); }
    void SetStroke(::app::Android::android::graphics::drawable::ShapeDrawable* drawable, ::app::Fuse::Drawing::Stroke* stroke) { Shape__Fuse_Controls_Rectangle__SetStroke(this, drawable, stroke); }
    void UpdateShapeDrawable(::app::Android::android::graphics::drawable::ShapeDrawable* shape) { (((Shape__Fuse_Controls_Rectangle__uType*)this->__obj_type)->__fp_UpdateShapeDrawable)(this, shape); }
};

}}}


#endif
