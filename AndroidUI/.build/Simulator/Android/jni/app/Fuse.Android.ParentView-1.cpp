#include <app/Android.android.graphics.Color.h>
#include <app/Android.android.view.View.h>
#include <app/Fuse.Android.ParentView__Fuse_Controls_ContentControl.h>
#include <app/Fuse.Android.ParentView__Fuse_Controls_GraphicsView.h>
#include <app/Fuse.Android.ParentView__Fuse_Controls_NativeViewHost.h>
#include <app/Fuse.Android.ParentView__Fuse_Controls_Panel.h>
#include <app/Fuse.Android.ParentView__Fuse_Controls_ScrollView.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Android {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentView__Fuse_Controls_ContentControl__uType* ParentView__Fuse_Controls_ContentControl__typeof()
{
    static ::uStaticStrong<ParentView__Fuse_Controls_ContentControl__uType*> type;
    if (type != NULL) return type;

    type = (ParentView__Fuse_Controls_ContentControl__uType*)::uAllocClassType(sizeof(ParentView__Fuse_Controls_ContentControl__uType), "Fuse.Android.ParentView<Fuse.Controls.ContentControl>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Android::NativeView__typeof());
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Android::NativeView*))ParentView__Fuse_Controls_ContentControl__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_ContentControl__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_ContentControl__OnUnrooted;

    return type;
}

void ParentView__Fuse_Controls_ContentControl___ObjInit_2(ParentView__Fuse_Controls_ContentControl* __this)
{
    ::app::Fuse::Android::NativeView___ObjInit_1(__this);
}

void ParentView__Fuse_Controls_ContentControl__Attach(ParentView__Fuse_Controls_ContentControl* __this)
{
}

void ParentView__Fuse_Controls_ContentControl__Detach(ParentView__Fuse_Controls_ContentControl* __this)
{
}

::app::Fuse::Controls::ContentControl* ParentView__Fuse_Controls_ContentControl__get_Control(ParentView__Fuse_Controls_ContentControl* __this)
{
    return ::uCast< ::app::Fuse::Controls::ContentControl*>(__this->Node(), ::app::Fuse::Controls::ContentControl__typeof());
}

::app::Uno::Float2 ParentView__Fuse_Controls_ContentControl__get_Size(ParentView__Fuse_Controls_ContentControl* __this)
{
    return ::uPtr< ::app::Fuse::Controls::ContentControl*>(__this->Control())->ActualSize();
}

void ParentView__Fuse_Controls_ContentControl__OnRooted(ParentView__Fuse_Controls_ContentControl* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Android::NativeView__OnRooted(__this, n);
    __this->Attach();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*>(::app::Fuse::Controls::Control__BackgroundProperty)->HasValue((::app::Fuse::Controls::Control*)__this->Control()))
    {
        ::app::Fuse::Drawing::Brush* b = ::uPtr< ::app::Fuse::Controls::ContentControl*>(__this->Control())->Background();
        ::app::Fuse::Drawing::SolidColor* solid = ::uAs< ::app::Fuse::Drawing::SolidColor*>(b, ::app::Fuse::Drawing::SolidColor__typeof());
        ::app::Fuse::Drawing::StaticSolidColor* ssolid = ::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(b, ::app::Fuse::Drawing::StaticSolidColor__typeof());

        if ((solid != NULL) || (ssolid != NULL))
        {
            ::app::Uno::Float4 v = (solid == NULL) ? ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(ssolid)->Color() : ::uPtr< ::app::Fuse::Drawing::SolidColor*>(solid)->Color();
            int c = ::app::Android::android::graphics::Color__argb(NULL, (int)(v.W * 255.0f), (int)(v.X * 255.0f), (int)(v.Y * 255.0f), (int)(v.Z * 255.0f));
            ::uPtr< ::app::Android::android::view::View*>(__this->Handle())->setBackgroundColor(c);
        }
    }
}

void ParentView__Fuse_Controls_ContentControl__OnUnrooted(ParentView__Fuse_Controls_ContentControl* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::Android::NativeView__OnUnrooted(__this, n);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentView__Fuse_Controls_GraphicsView__uType* ParentView__Fuse_Controls_GraphicsView__typeof()
{
    static ::uStaticStrong<ParentView__Fuse_Controls_GraphicsView__uType*> type;
    if (type != NULL) return type;

    type = (ParentView__Fuse_Controls_GraphicsView__uType*)::uAllocClassType(sizeof(ParentView__Fuse_Controls_GraphicsView__uType), "Fuse.Android.ParentView<Fuse.Controls.GraphicsView>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Android::NativeView__typeof());
    type->__fp_Attach = ParentView__Fuse_Controls_GraphicsView__Attach;
    type->__fp_Detach = ParentView__Fuse_Controls_GraphicsView__Detach;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Android::NativeView*))ParentView__Fuse_Controls_GraphicsView__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_GraphicsView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_GraphicsView__OnUnrooted;

    return type;
}

void ParentView__Fuse_Controls_GraphicsView___ObjInit_2(ParentView__Fuse_Controls_GraphicsView* __this)
{
    ::app::Fuse::Android::NativeView___ObjInit_1(__this);
}

void ParentView__Fuse_Controls_GraphicsView__Attach(ParentView__Fuse_Controls_GraphicsView* __this)
{
}

void ParentView__Fuse_Controls_GraphicsView__Detach(ParentView__Fuse_Controls_GraphicsView* __this)
{
}

::app::Fuse::Controls::GraphicsView* ParentView__Fuse_Controls_GraphicsView__get_Control(ParentView__Fuse_Controls_GraphicsView* __this)
{
    return ::uCast< ::app::Fuse::Controls::GraphicsView*>(__this->Node(), ::app::Fuse::Controls::GraphicsView__typeof());
}

::app::Uno::Float2 ParentView__Fuse_Controls_GraphicsView__get_Size(ParentView__Fuse_Controls_GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->ActualSize();
}

void ParentView__Fuse_Controls_GraphicsView__OnRooted(ParentView__Fuse_Controls_GraphicsView* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Android::NativeView__OnRooted(__this, n);
    __this->Attach();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*>(::app::Fuse::Controls::Control__BackgroundProperty)->HasValue((::app::Fuse::Controls::Control*)__this->Control()))
    {
        ::app::Fuse::Drawing::Brush* b = ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->Background();
        ::app::Fuse::Drawing::SolidColor* solid = ::uAs< ::app::Fuse::Drawing::SolidColor*>(b, ::app::Fuse::Drawing::SolidColor__typeof());
        ::app::Fuse::Drawing::StaticSolidColor* ssolid = ::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(b, ::app::Fuse::Drawing::StaticSolidColor__typeof());

        if ((solid != NULL) || (ssolid != NULL))
        {
            ::app::Uno::Float4 v = (solid == NULL) ? ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(ssolid)->Color() : ::uPtr< ::app::Fuse::Drawing::SolidColor*>(solid)->Color();
            int c = ::app::Android::android::graphics::Color__argb(NULL, (int)(v.W * 255.0f), (int)(v.X * 255.0f), (int)(v.Y * 255.0f), (int)(v.Z * 255.0f));
            ::uPtr< ::app::Android::android::view::View*>(__this->Handle())->setBackgroundColor(c);
        }
    }
}

void ParentView__Fuse_Controls_GraphicsView__OnUnrooted(ParentView__Fuse_Controls_GraphicsView* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::Android::NativeView__OnUnrooted(__this, n);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentView__Fuse_Controls_NativeViewHost__uType* ParentView__Fuse_Controls_NativeViewHost__typeof()
{
    static ::uStaticStrong<ParentView__Fuse_Controls_NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (ParentView__Fuse_Controls_NativeViewHost__uType*)::uAllocClassType(sizeof(ParentView__Fuse_Controls_NativeViewHost__uType), "Fuse.Android.ParentView<Fuse.Controls.NativeViewHost>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Android::NativeView__typeof());
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Android::NativeView*))ParentView__Fuse_Controls_NativeViewHost__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_NativeViewHost__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_NativeViewHost__OnUnrooted;

    return type;
}

void ParentView__Fuse_Controls_NativeViewHost___ObjInit_2(ParentView__Fuse_Controls_NativeViewHost* __this)
{
    ::app::Fuse::Android::NativeView___ObjInit_1(__this);
}

void ParentView__Fuse_Controls_NativeViewHost__Attach(ParentView__Fuse_Controls_NativeViewHost* __this)
{
}

void ParentView__Fuse_Controls_NativeViewHost__Detach(ParentView__Fuse_Controls_NativeViewHost* __this)
{
}

::app::Fuse::Controls::NativeViewHost* ParentView__Fuse_Controls_NativeViewHost__get_Control(ParentView__Fuse_Controls_NativeViewHost* __this)
{
    return ::uCast< ::app::Fuse::Controls::NativeViewHost*>(__this->Node(), ::app::Fuse::Controls::NativeViewHost__typeof());
}

::app::Uno::Float2 ParentView__Fuse_Controls_NativeViewHost__get_Size(ParentView__Fuse_Controls_NativeViewHost* __this)
{
    return ::uPtr< ::app::Fuse::Controls::NativeViewHost*>(__this->Control())->ActualSize();
}

void ParentView__Fuse_Controls_NativeViewHost__OnRooted(ParentView__Fuse_Controls_NativeViewHost* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Android::NativeView__OnRooted(__this, n);
    __this->Attach();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*>(::app::Fuse::Controls::Control__BackgroundProperty)->HasValue((::app::Fuse::Controls::Control*)__this->Control()))
    {
        ::app::Fuse::Drawing::Brush* b = ::uPtr< ::app::Fuse::Controls::NativeViewHost*>(__this->Control())->Background();
        ::app::Fuse::Drawing::SolidColor* solid = ::uAs< ::app::Fuse::Drawing::SolidColor*>(b, ::app::Fuse::Drawing::SolidColor__typeof());
        ::app::Fuse::Drawing::StaticSolidColor* ssolid = ::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(b, ::app::Fuse::Drawing::StaticSolidColor__typeof());

        if ((solid != NULL) || (ssolid != NULL))
        {
            ::app::Uno::Float4 v = (solid == NULL) ? ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(ssolid)->Color() : ::uPtr< ::app::Fuse::Drawing::SolidColor*>(solid)->Color();
            int c = ::app::Android::android::graphics::Color__argb(NULL, (int)(v.W * 255.0f), (int)(v.X * 255.0f), (int)(v.Y * 255.0f), (int)(v.Z * 255.0f));
            ::uPtr< ::app::Android::android::view::View*>(__this->Handle())->setBackgroundColor(c);
        }
    }
}

void ParentView__Fuse_Controls_NativeViewHost__OnUnrooted(ParentView__Fuse_Controls_NativeViewHost* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::Android::NativeView__OnUnrooted(__this, n);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentView__Fuse_Controls_Panel__uType* ParentView__Fuse_Controls_Panel__typeof()
{
    static ::uStaticStrong<ParentView__Fuse_Controls_Panel__uType*> type;
    if (type != NULL) return type;

    type = (ParentView__Fuse_Controls_Panel__uType*)::uAllocClassType(sizeof(ParentView__Fuse_Controls_Panel__uType), "Fuse.Android.ParentView<Fuse.Controls.Panel>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Android::NativeView__typeof());
    type->__fp_Attach = ParentView__Fuse_Controls_Panel__Attach;
    type->__fp_Detach = ParentView__Fuse_Controls_Panel__Detach;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Android::NativeView*))ParentView__Fuse_Controls_Panel__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_Panel__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_Panel__OnUnrooted;

    return type;
}

void ParentView__Fuse_Controls_Panel___ObjInit_2(ParentView__Fuse_Controls_Panel* __this)
{
    ::app::Fuse::Android::NativeView___ObjInit_1(__this);
}

void ParentView__Fuse_Controls_Panel__Attach(ParentView__Fuse_Controls_Panel* __this)
{
}

void ParentView__Fuse_Controls_Panel__Detach(ParentView__Fuse_Controls_Panel* __this)
{
}

::app::Fuse::Controls::Panel* ParentView__Fuse_Controls_Panel__get_Control(ParentView__Fuse_Controls_Panel* __this)
{
    return ::uCast< ::app::Fuse::Controls::Panel*>(__this->Node(), ::app::Fuse::Controls::Panel__typeof());
}

::app::Uno::Float2 ParentView__Fuse_Controls_Panel__get_Size(ParentView__Fuse_Controls_Panel* __this)
{
    return ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->ActualSize();
}

void ParentView__Fuse_Controls_Panel__OnRooted(ParentView__Fuse_Controls_Panel* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Android::NativeView__OnRooted(__this, n);
    __this->Attach();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*>(::app::Fuse::Controls::Control__BackgroundProperty)->HasValue((::app::Fuse::Controls::Control*)__this->Control()))
    {
        ::app::Fuse::Drawing::Brush* b = ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->Background();
        ::app::Fuse::Drawing::SolidColor* solid = ::uAs< ::app::Fuse::Drawing::SolidColor*>(b, ::app::Fuse::Drawing::SolidColor__typeof());
        ::app::Fuse::Drawing::StaticSolidColor* ssolid = ::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(b, ::app::Fuse::Drawing::StaticSolidColor__typeof());

        if ((solid != NULL) || (ssolid != NULL))
        {
            ::app::Uno::Float4 v = (solid == NULL) ? ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(ssolid)->Color() : ::uPtr< ::app::Fuse::Drawing::SolidColor*>(solid)->Color();
            int c = ::app::Android::android::graphics::Color__argb(NULL, (int)(v.W * 255.0f), (int)(v.X * 255.0f), (int)(v.Y * 255.0f), (int)(v.Z * 255.0f));
            ::uPtr< ::app::Android::android::view::View*>(__this->Handle())->setBackgroundColor(c);
        }
    }
}

void ParentView__Fuse_Controls_Panel__OnUnrooted(ParentView__Fuse_Controls_Panel* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::Android::NativeView__OnUnrooted(__this, n);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentView__Fuse_Controls_ScrollView__uType* ParentView__Fuse_Controls_ScrollView__typeof()
{
    static ::uStaticStrong<ParentView__Fuse_Controls_ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ParentView__Fuse_Controls_ScrollView__uType*)::uAllocClassType(sizeof(ParentView__Fuse_Controls_ScrollView__uType), "Fuse.Android.ParentView<Fuse.Controls.ScrollView>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Android::NativeView__typeof());
    type->__fp_Attach = ParentView__Fuse_Controls_ScrollView__Attach;
    type->__fp_Detach = ParentView__Fuse_Controls_ScrollView__Detach;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Android::NativeView*))ParentView__Fuse_Controls_ScrollView__get_Size;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_ScrollView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ParentView__Fuse_Controls_ScrollView__OnUnrooted;

    return type;
}

void ParentView__Fuse_Controls_ScrollView___ObjInit_2(ParentView__Fuse_Controls_ScrollView* __this)
{
    ::app::Fuse::Android::NativeView___ObjInit_1(__this);
}

void ParentView__Fuse_Controls_ScrollView__Attach(ParentView__Fuse_Controls_ScrollView* __this)
{
}

void ParentView__Fuse_Controls_ScrollView__Detach(ParentView__Fuse_Controls_ScrollView* __this)
{
}

::app::Fuse::Controls::ScrollView* ParentView__Fuse_Controls_ScrollView__get_Control(ParentView__Fuse_Controls_ScrollView* __this)
{
    return ::uCast< ::app::Fuse::Controls::ScrollView*>(__this->Node(), ::app::Fuse::Controls::ScrollView__typeof());
}

::app::Uno::Float2 ParentView__Fuse_Controls_ScrollView__get_Size(ParentView__Fuse_Controls_ScrollView* __this)
{
    return ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->ActualSize();
}

void ParentView__Fuse_Controls_ScrollView__OnRooted(ParentView__Fuse_Controls_ScrollView* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Android::NativeView__OnRooted(__this, n);
    __this->Attach();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*>(::app::Fuse::Controls::Control__BackgroundProperty)->HasValue((::app::Fuse::Controls::Control*)__this->Control()))
    {
        ::app::Fuse::Drawing::Brush* b = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->Background();
        ::app::Fuse::Drawing::SolidColor* solid = ::uAs< ::app::Fuse::Drawing::SolidColor*>(b, ::app::Fuse::Drawing::SolidColor__typeof());
        ::app::Fuse::Drawing::StaticSolidColor* ssolid = ::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(b, ::app::Fuse::Drawing::StaticSolidColor__typeof());

        if ((solid != NULL) || (ssolid != NULL))
        {
            ::app::Uno::Float4 v = (solid == NULL) ? ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(ssolid)->Color() : ::uPtr< ::app::Fuse::Drawing::SolidColor*>(solid)->Color();
            int c = ::app::Android::android::graphics::Color__argb(NULL, (int)(v.W * 255.0f), (int)(v.X * 255.0f), (int)(v.Y * 255.0f), (int)(v.Z * 255.0f));
            ::uPtr< ::app::Android::android::view::View*>(__this->Handle())->setBackgroundColor(c);
        }
    }
}

void ParentView__Fuse_Controls_ScrollView__OnUnrooted(ParentView__Fuse_Controls_ScrollView* __this, ::app::Fuse::Node* n)
{
    __this->Detach();
    ::app::Fuse::Android::NativeView__OnUnrooted(__this, n);
}

}}}
