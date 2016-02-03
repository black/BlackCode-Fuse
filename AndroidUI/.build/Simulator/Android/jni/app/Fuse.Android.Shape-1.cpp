#include <app/Android.android.app.Activity.h>
#include <app/Android.android.content.Context.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.graphics.drawable.LayerDrawable.h>
#include <app/Android.android.graphics.drawable.ShapeDrawable.h>
#include <app/Android.android.graphics.Paint.h>
#include <app/Android.android.graphics.PaintDLRStyle.h>
#include <app/Android.android.os.BuildDLRVERSION.h>
#include <app/Android.android.view.View.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.Runtime.ObjectArray__Android_android_graphics_drawable_Drawable.h>
#include <app/Fuse.Android.Shape__Fuse_Controls_Circle.h>
#include <app/Fuse.Android.Shape__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Diagnostics.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Android {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Shape__Fuse_Controls_Circle__uType* Shape__Fuse_Controls_Circle__typeof()
{
    static ::uStaticStrong<Shape__Fuse_Controls_Circle__uType*> type;
    if (type != NULL) return type;

    type = (Shape__Fuse_Controls_Circle__uType*)::uAllocClassType(sizeof(Shape__Fuse_Controls_Circle__uType), "Fuse.Android.Shape<Fuse.Controls.Circle>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_Circle__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Circle*))Shape__Fuse_Controls_Circle__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))Shape__Fuse_Controls_Circle__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Circle*))Shape__Fuse_Controls_Circle__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__Fuse_Controls_Circle__uType, __interface_0));

    type->SetStrongRefs(
        "_drawable", offsetof(Shape__Fuse_Controls_Circle, _drawable),
        "_shapeView", offsetof(Shape__Fuse_Controls_Circle, _shapeView));

    type->SetFields(2,
        ::uNewField("_drawable", NULL, offsetof(Shape__Fuse_Controls_Circle, _drawable), ::app::Android::android::graphics::drawable::LayerDrawable__typeof()),
        ::uNewField("_shapeView", NULL, offsetof(Shape__Fuse_Controls_Circle, _shapeView), ::app::Android::android::view::View__typeof()));

    ::uRegisterType(type);
    return type;
}

void Shape__Fuse_Controls_Circle___ObjInit_3(Shape__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_Circle___ObjInit_2(__this);
}

void Shape__Fuse_Controls_Circle__Attach(Shape__Fuse_Controls_Circle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->add_ShapeChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__Fuse_Controls_Circle__OnShapeChanged, __this));
    __this->OnShapeChanged();
}

::app::Android::android::view::View* Shape__Fuse_Controls_Circle__CreateInternal(Shape__Fuse_Controls_Circle* __this)
{
    __this->_shapeView = ::app::Android::android::view::View__New_5(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    return __this->_shapeView;
}

void Shape__Fuse_Controls_Circle__Detach(Shape__Fuse_Controls_Circle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->remove_ShapeChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__Fuse_Controls_Circle__OnShapeChanged, __this));
}

::app::Android::android::graphics::drawable::ShapeDrawable* Shape__Fuse_Controls_Circle__GetLayer(Shape__Fuse_Controls_Circle* __this, int index)
{
    return ::uAs< ::app::Android::android::graphics::drawable::ShapeDrawable*>(::uPtr< ::app::Android::android::graphics::drawable::LayerDrawable*>(__this->_drawable)->getDrawable(index), ::app::Android::android::graphics::drawable::ShapeDrawable__typeof());
}

void Shape__Fuse_Controls_Circle__OnShapeChanged(Shape__Fuse_Controls_Circle* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_shapeView, NULL))
    {
        return;
    }

    int layerCount = (::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->HasFills() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->Fills())) : 0) + (::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->HasStrokes() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->Strokes())) : 0);

    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_drawable, NULL) || (layerCount != ::uPtr< ::app::Android::android::graphics::drawable::LayerDrawable*>(__this->_drawable)->getNumberOfLayers()))
    {
        ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable* list = ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable__New_5(NULL, layerCount);

        for (int i = 0; i < layerCount; ++i)
        {
            ::uPtr< ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable*>(list)->Item(i, (::app::Android::android::graphics::drawable::Drawable*)::app::Android::android::graphics::drawable::ShapeDrawable__New_5(NULL));
        }

        __this->_drawable = ::app::Android::android::graphics::drawable::LayerDrawable__New_5(NULL, list);

        if (::app::Android::android::os::BuildDLRVERSION__get_SDK_INT(NULL) >= 17)
        {
            ::uPtr< ::app::Android::android::view::View*>(__this->_shapeView)->setBackground((::app::Android::android::graphics::drawable::Drawable*)__this->_drawable);
        }
        else
        {
            ::uPtr< ::app::Android::android::view::View*>(__this->_shapeView)->setBackgroundDrawable((::app::Android::android::graphics::drawable::Drawable*)__this->_drawable);
        }
    }

    for (int i = 0; i < layerCount; ++i)
    {
        __this->UpdateShapeDrawable(__this->GetLayer(i));
    }

    int layer = 0;

    if (::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->HasFills())
    {
        ::uObject* fills = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->Fills();

        for (int i = ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(fills)) - 1; i >= 0; --i)
        {
            __this->SetBrush(__this->GetLayer(layer++), ::app::Uno::Collections::IList__Fuse_Drawing_Brush::Item(fills, i));
        }
    }

    if (::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->HasStrokes())
    {
        ::uObject* strokes = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->Strokes();

        for (int i = ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(strokes)) - 1; i >= 0; --i)
        {
            __this->SetStroke(__this->GetLayer(layer++), ::app::Uno::Collections::IList__Fuse_Drawing_Stroke::Item(strokes, i));
        }
    }
}

void Shape__Fuse_Controls_Circle__SetBrush(Shape__Fuse_Controls_Circle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* drawable, ::app::Fuse::Drawing::Brush* brush)
{
    ::app::Android::android::graphics::Paint* p = ::uPtr< ::app::Android::android::graphics::drawable::ShapeDrawable*>(drawable)->getPaint();
    ::app::Uno::Float4 c = ::app::Uno::Float4__New_1(NULL, 0.0f);
    ::app::Fuse::Drawing::SolidColor* sc = ::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof());

    if (sc != NULL)
    {
        c = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(sc)->Color();
    }

    ::app::Fuse::Drawing::StaticSolidColor* ssc = ::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof());

    if (ssc != NULL)
    {
        c = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(ssc)->Color();
    }

    if ((sc == NULL) && (ssc == NULL))
    {
        ::app::Fuse::Diagnostics__Unsupported(NULL, ::uGetConstString(""), (::uObject*)brush, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Android.Views\\0.11.3\\$.uno"), 2675, ::uGetConstString("SetBrush"));
    }

    ::uPtr< ::app::Android::android::graphics::Paint*>(p)->setARGB((int)(c.W * 255.0f), (int)(c.X * 255.0f), (int)(c.Y * 255.0f), (int)(c.Z * 255.0f));
}

void Shape__Fuse_Controls_Circle__SetStroke(Shape__Fuse_Controls_Circle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* drawable, ::app::Fuse::Drawing::Stroke* stroke)
{
    if (::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Brush() != NULL)
    {
        __this->SetBrush(drawable, ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Brush());
    }

    ::app::Android::android::graphics::Paint* p = ::uPtr< ::app::Android::android::graphics::drawable::ShapeDrawable*>(drawable)->getPaint();
    ::uPtr< ::app::Android::android::graphics::Paint*>(p)->setStyle(::app::Android::android::graphics::PaintDLRStyle__get_STROKE(NULL));
    p->setStrokeWidth(stroke->Width() * ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->PointDensity());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Shape__Fuse_Controls_Rectangle__uType* Shape__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong<Shape__Fuse_Controls_Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Shape__Fuse_Controls_Rectangle__uType*)::uAllocClassType(sizeof(Shape__Fuse_Controls_Rectangle__uType), "Fuse.Android.Shape<Fuse.Controls.Rectangle>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_Rectangle__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Rectangle*))Shape__Fuse_Controls_Rectangle__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))Shape__Fuse_Controls_Rectangle__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Rectangle*))Shape__Fuse_Controls_Rectangle__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__Fuse_Controls_Rectangle__uType, __interface_0));

    type->SetStrongRefs(
        "_drawable", offsetof(Shape__Fuse_Controls_Rectangle, _drawable),
        "_shapeView", offsetof(Shape__Fuse_Controls_Rectangle, _shapeView));

    type->SetFields(2,
        ::uNewField("_drawable", NULL, offsetof(Shape__Fuse_Controls_Rectangle, _drawable), ::app::Android::android::graphics::drawable::LayerDrawable__typeof()),
        ::uNewField("_shapeView", NULL, offsetof(Shape__Fuse_Controls_Rectangle, _shapeView), ::app::Android::android::view::View__typeof()));

    ::uRegisterType(type);
    return type;
}

void Shape__Fuse_Controls_Rectangle___ObjInit_3(Shape__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_Rectangle___ObjInit_2(__this);
}

void Shape__Fuse_Controls_Rectangle__Attach(Shape__Fuse_Controls_Rectangle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->add_ShapeChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__Fuse_Controls_Rectangle__OnShapeChanged, __this));
    __this->OnShapeChanged();
}

::app::Android::android::view::View* Shape__Fuse_Controls_Rectangle__CreateInternal(Shape__Fuse_Controls_Rectangle* __this)
{
    __this->_shapeView = ::app::Android::android::view::View__New_5(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    return __this->_shapeView;
}

void Shape__Fuse_Controls_Rectangle__Detach(Shape__Fuse_Controls_Rectangle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->remove_ShapeChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__Fuse_Controls_Rectangle__OnShapeChanged, __this));
}

::app::Android::android::graphics::drawable::ShapeDrawable* Shape__Fuse_Controls_Rectangle__GetLayer(Shape__Fuse_Controls_Rectangle* __this, int index)
{
    return ::uAs< ::app::Android::android::graphics::drawable::ShapeDrawable*>(::uPtr< ::app::Android::android::graphics::drawable::LayerDrawable*>(__this->_drawable)->getDrawable(index), ::app::Android::android::graphics::drawable::ShapeDrawable__typeof());
}

void Shape__Fuse_Controls_Rectangle__OnShapeChanged(Shape__Fuse_Controls_Rectangle* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_shapeView, NULL))
    {
        return;
    }

    int layerCount = (::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->HasFills() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->Fills())) : 0) + (::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->HasStrokes() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->Strokes())) : 0);

    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_drawable, NULL) || (layerCount != ::uPtr< ::app::Android::android::graphics::drawable::LayerDrawable*>(__this->_drawable)->getNumberOfLayers()))
    {
        ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable* list = ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable__New_5(NULL, layerCount);

        for (int i = 0; i < layerCount; ++i)
        {
            ::uPtr< ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable*>(list)->Item(i, (::app::Android::android::graphics::drawable::Drawable*)::app::Android::android::graphics::drawable::ShapeDrawable__New_5(NULL));
        }

        __this->_drawable = ::app::Android::android::graphics::drawable::LayerDrawable__New_5(NULL, list);

        if (::app::Android::android::os::BuildDLRVERSION__get_SDK_INT(NULL) >= 17)
        {
            ::uPtr< ::app::Android::android::view::View*>(__this->_shapeView)->setBackground((::app::Android::android::graphics::drawable::Drawable*)__this->_drawable);
        }
        else
        {
            ::uPtr< ::app::Android::android::view::View*>(__this->_shapeView)->setBackgroundDrawable((::app::Android::android::graphics::drawable::Drawable*)__this->_drawable);
        }
    }

    for (int i = 0; i < layerCount; ++i)
    {
        __this->UpdateShapeDrawable(__this->GetLayer(i));
    }

    int layer = 0;

    if (::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->HasFills())
    {
        ::uObject* fills = ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->Fills();

        for (int i = ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(fills)) - 1; i >= 0; --i)
        {
            __this->SetBrush(__this->GetLayer(layer++), ::app::Uno::Collections::IList__Fuse_Drawing_Brush::Item(fills, i));
        }
    }

    if (::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->HasStrokes())
    {
        ::uObject* strokes = ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->Strokes();

        for (int i = ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(strokes)) - 1; i >= 0; --i)
        {
            __this->SetStroke(__this->GetLayer(layer++), ::app::Uno::Collections::IList__Fuse_Drawing_Stroke::Item(strokes, i));
        }
    }
}

void Shape__Fuse_Controls_Rectangle__SetBrush(Shape__Fuse_Controls_Rectangle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* drawable, ::app::Fuse::Drawing::Brush* brush)
{
    ::app::Android::android::graphics::Paint* p = ::uPtr< ::app::Android::android::graphics::drawable::ShapeDrawable*>(drawable)->getPaint();
    ::app::Uno::Float4 c = ::app::Uno::Float4__New_1(NULL, 0.0f);
    ::app::Fuse::Drawing::SolidColor* sc = ::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof());

    if (sc != NULL)
    {
        c = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(sc)->Color();
    }

    ::app::Fuse::Drawing::StaticSolidColor* ssc = ::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof());

    if (ssc != NULL)
    {
        c = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(ssc)->Color();
    }

    if ((sc == NULL) && (ssc == NULL))
    {
        ::app::Fuse::Diagnostics__Unsupported(NULL, ::uGetConstString(""), (::uObject*)brush, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Android.Views\\0.11.3\\$.uno"), 2675, ::uGetConstString("SetBrush"));
    }

    ::uPtr< ::app::Android::android::graphics::Paint*>(p)->setARGB((int)(c.W * 255.0f), (int)(c.X * 255.0f), (int)(c.Y * 255.0f), (int)(c.Z * 255.0f));
}

void Shape__Fuse_Controls_Rectangle__SetStroke(Shape__Fuse_Controls_Rectangle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* drawable, ::app::Fuse::Drawing::Stroke* stroke)
{
    if (::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Brush() != NULL)
    {
        __this->SetBrush(drawable, ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Brush());
    }

    ::app::Android::android::graphics::Paint* p = ::uPtr< ::app::Android::android::graphics::drawable::ShapeDrawable*>(drawable)->getPaint();
    ::uPtr< ::app::Android::android::graphics::Paint*>(p)->setStyle(::app::Android::android::graphics::PaintDLRStyle__get_STROKE(NULL));
    p->setStrokeWidth(stroke->Width() * ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->PointDensity());
}

}}}
