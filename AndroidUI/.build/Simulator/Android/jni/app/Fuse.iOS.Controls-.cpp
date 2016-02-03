#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.iOS.Controls.Button.h>
#include <app/Fuse.iOS.Controls.Circle.h>
#include <app/Fuse.iOS.Controls.ControlProperties.h>
#include <app/Fuse.iOS.Controls.Element.h>
#include <app/Fuse.iOS.Controls.Image.h>
#include <app/Fuse.iOS.Controls.MapView.h>
#include <app/Fuse.iOS.Controls.Rectangle.h>
#include <app/Fuse.iOS.Controls.Slider.h>
#include <app/Fuse.iOS.Controls.Switch.h>
#include <app/Fuse.iOS.Controls.TextBlock.h>
#include <app/Fuse.iOS.Controls.TextInput.h>
#include <app/Fuse.iOS.Controls.WebView.h>
#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__float4.h>
#include <app/Fuse.StyleProperty__Fuse_iOS_Controls_Button__float4.h>
#include <app/Uno.Action__Fuse_Controls_Control.h>
#include <app/Uno.Action__Fuse_iOS_Controls_Button.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__DisabledColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__HighlightedColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__NormalColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*> Button__SelectedColorProperty;

Button__uType* Button__typeof()
{
    static ::uStaticStrong<Button__uType*> type;
    if (type != NULL) return type;

    type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Fuse.iOS.Controls.Button", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Button__uType, __interface_0));

    type->SetFields(4,
        ::uNewField("DisabledColorProperty", &Button__DisabledColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__typeof()),
        ::uNewField("HighlightedColorProperty", &Button__HighlightedColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__typeof()),
        ::uNewField("NormalColorProperty", &Button__NormalColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__typeof()),
        ::uNewField("SelectedColorProperty", &Button__SelectedColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("get_DisabledColor", Button__get_DisabledColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_HighlightedColor", Button__get_HighlightedColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_NormalColor", Button__get_NormalColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_SelectedColor", Button__get_SelectedColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", Button__New_1, 0, true, Button__typeof()),
        ::uNewFunctionVoid("OnButtonPropertyChanged", Button__OnButtonPropertyChanged, 0, true, Button__typeof()),
        ::uNewFunctionVoid("set_DisabledColor", Button__set_DisabledColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_HighlightedColor", Button__set_HighlightedColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_NormalColor", Button__set_NormalColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_SelectedColor", Button__set_SelectedColor, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Button___ObjInit_3(Button* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Button___ObjInit_2(__this);
}

void Button___TypeInit_1(::uStatic* __this)
{
    Button__NormalColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__HighlightedColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__DisabledColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__SelectedColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
}

::app::Uno::Float4 Button__get_DisabledColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__DisabledColorProperty)->Get(__this);
}

::app::Uno::Float4 Button__get_HighlightedColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__HighlightedColorProperty)->Get(__this);
}

::app::Uno::Float4 Button__get_NormalColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__NormalColorProperty)->Get(__this);
}

::app::Uno::Float4 Button__get_SelectedColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__SelectedColorProperty)->Get(__this);
}

Button* Button__New_1(::uStatic* __this)
{
    Button* inst = (Button*)::uAllocObject(sizeof(Button), Button__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t)
{
}

void Button__set_DisabledColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__DisabledColorProperty)->Set(__this, value);
}

void Button__set_HighlightedColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__HighlightedColorProperty)->Set(__this, value);
}

void Button__set_NormalColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__NormalColorProperty)->Set(__this, value);
}

void Button__set_SelectedColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_iOS_Controls_Button__float4*>(Button__SelectedColorProperty)->Set(__this, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Circle__uType* Circle__typeof()
{
    static ::uStaticStrong<Circle__uType*> type;
    if (type != NULL) return type;

    type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.iOS.Controls.Circle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Circle__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Circle__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Circle__New_2, 0, true, Circle__typeof()));

    ::uRegisterType(type);
    return type;
}

void Circle___ObjInit_4(Circle* __this)
{
    ::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Circle___ObjInit_3(__this);
}

Circle* Circle__New_2(::uStatic* __this)
{
    Circle* inst = (Circle*)::uAllocObject(sizeof(Circle), Circle__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4*> ControlProperties__TintColorProperty;

ControlProperties__uType* ControlProperties__typeof()
{
    static ::uStaticStrong<ControlProperties__uType*> type;
    if (type != NULL) return type;

    type = (ControlProperties__uType*)::uAllocClassType(sizeof(ControlProperties__uType), "Fuse.iOS.Controls.ControlProperties");

    type->SetFields(1,
        ::uNewField("TintColorProperty", &ControlProperties__TintColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("GetTintColor", ControlProperties__GetTintColor, 0, true, ::app::Uno::Float4__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunctionVoid("OnTintColorChanged", ControlProperties__OnTintColorChanged, 0, true, ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunctionVoid("ResetTintColor", ControlProperties__ResetTintColor, 0, true, ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunctionVoid("SetTintColor", ControlProperties__SetTintColor, 0, true, ::app::Fuse::Controls::Control__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlProperties___TypeInit(::uStatic* __this)
{
    ControlProperties__TintColorProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Control__typeof(), (const void*)ControlProperties__OnTintColorChanged));
}

::app::Uno::Float4 ControlProperties__GetTintColor(::uStatic* __this, ::app::Fuse::Controls::Control* p)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4*>(ControlProperties__TintColorProperty)->Get(p);
}

void ControlProperties__OnTintColorChanged(::uStatic* __this, ::app::Fuse::Controls::Control* panel)
{
    ::app::Fuse::iOS::NativeViews::NativeView* nv = ::app::Fuse::iOS::NativeViews::NativeView__GetFrom(NULL, (::app::Fuse::Node*)panel);

    if (nv != NULL)
    {
        ::uPtr< ::app::Fuse::iOS::NativeViews::NativeView*>(nv)->OnTintColorChanged();
    }
}

void ControlProperties__ResetTintColor(::uStatic* __this, ::app::Fuse::Controls::Control* p)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4*>(ControlProperties__TintColorProperty)->Reset(p);
}

void ControlProperties__SetTintColor(::uStatic* __this, ::app::Fuse::Controls::Control* p, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4*>(ControlProperties__TintColorProperty)->Set(p, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Element__uType* Element__typeof()
{
    static ::uStaticStrong<Element__uType*> type;
    if (type != NULL) return type;

    type = (Element__uType*)::uAllocClassType(sizeof(Element__uType), "Fuse.iOS.Controls.Element", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Element__uType, __interface_0));

    ::uRegisterType(type);
    return type;
}

void Element___ObjInit_1(Element* __this)
{
    ::app::Fuse::Node___ObjInit(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Image__uType* Image__typeof()
{
    static ::uStaticStrong<Image__uType*> type;
    if (type != NULL) return type;

    type = (Image__uType*)::uAllocClassType(sizeof(Image__uType), "Fuse.iOS.Controls.Image", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Image__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Image__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Image__New_1, 0, true, Image__typeof()));

    ::uRegisterType(type);
    return type;
}

void Image___ObjInit_3(Image* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Image___ObjInit_2(__this);
}

Image* Image__New_1(::uStatic* __this)
{
    Image* inst = (Image*)::uAllocObject(sizeof(Image), Image__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MapView__uType* MapView__typeof()
{
    static ::uStaticStrong<MapView__uType*> type;
    if (type != NULL) return type;

    type = (MapView__uType*)::uAllocClassType(sizeof(MapView__uType), "Fuse.iOS.Controls.MapView", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_MapView__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(MapView__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MapView__New_1, 0, true, MapView__typeof()));

    ::uRegisterType(type);
    return type;
}

void MapView___ObjInit_3(MapView* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_MapView___ObjInit_2(__this);
}

MapView* MapView__New_1(::uStatic* __this)
{
    MapView* inst = (MapView*)::uAllocObject(sizeof(MapView), MapView__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Rectangle__uType* Rectangle__typeof()
{
    static ::uStaticStrong<Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.iOS.Controls.Rectangle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Rectangle__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Rectangle__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Rectangle__New_2, 0, true, Rectangle__typeof()));

    ::uRegisterType(type);
    return type;
}

void Rectangle___ObjInit_4(Rectangle* __this)
{
    ::app::Fuse::iOS::Controls::Shape__Fuse_Controls_Rectangle___ObjInit_3(__this);
}

Rectangle* Rectangle__New_2(::uStatic* __this)
{
    Rectangle* inst = (Rectangle*)::uAllocObject(sizeof(Rectangle), Rectangle__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Slider__uType* Slider__typeof()
{
    static ::uStaticStrong<Slider__uType*> type;
    if (type != NULL) return type;

    type = (Slider__uType*)::uAllocClassType(sizeof(Slider__uType), "Fuse.iOS.Controls.Slider", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Slider__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Slider__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Slider__New_1, 0, true, Slider__typeof()));

    ::uRegisterType(type);
    return type;
}

void Slider___ObjInit_3(Slider* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Slider___ObjInit_2(__this);
}

Slider* Slider__New_1(::uStatic* __this)
{
    Slider* inst = (Slider*)::uAllocObject(sizeof(Slider), Slider__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Switch__uType* Switch__typeof()
{
    static ::uStaticStrong<Switch__uType*> type;
    if (type != NULL) return type;

    type = (Switch__uType*)::uAllocClassType(sizeof(Switch__uType), "Fuse.iOS.Controls.Switch", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Switch__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Switch__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Switch__New_1, 0, true, Switch__typeof()));

    ::uRegisterType(type);
    return type;
}

void Switch___ObjInit_3(Switch* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Switch___ObjInit_2(__this);
}

Switch* Switch__New_1(::uStatic* __this)
{
    Switch* inst = (Switch*)::uAllocObject(sizeof(Switch), Switch__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextBlock__uType* TextBlock__typeof()
{
    static ::uStaticStrong<TextBlock__uType*> type;
    if (type != NULL) return type;

    type = (TextBlock__uType*)::uAllocClassType(sizeof(TextBlock__uType), "Fuse.iOS.Controls.TextBlock", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextBlock__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextBlock__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TextBlock__New_1, 0, true, TextBlock__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextBlock___ObjInit_3(TextBlock* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextBlock___ObjInit_2(__this);
}

TextBlock* TextBlock__New_1(::uStatic* __this)
{
    TextBlock* inst = (TextBlock*)::uAllocObject(sizeof(TextBlock), TextBlock__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextInput__uType* TextInput__typeof()
{
    static ::uStaticStrong<TextInput__uType*> type;
    if (type != NULL) return type;

    type = (TextInput__uType*)::uAllocClassType(sizeof(TextInput__uType), "Fuse.iOS.Controls.TextInput", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextInput__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TextInput__New_1, 0, true, TextInput__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextInput___ObjInit_3(TextInput* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_TextInput___ObjInit_2(__this);
}

TextInput* TextInput__New_1(::uStatic* __this)
{
    TextInput* inst = (TextInput*)::uAllocObject(sizeof(TextInput), TextInput__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WebView__uType* WebView__typeof()
{
    static ::uStaticStrong<WebView__uType*> type;
    if (type != NULL) return type;

    type = (WebView__uType*)::uAllocClassType(sizeof(WebView__uType), "Fuse.iOS.Controls.WebView", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_WebView__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(WebView__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", WebView__New_1, 0, true, WebView__typeof()));

    ::uRegisterType(type);
    return type;
}

void WebView___ObjInit_3(WebView* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_WebView___ObjInit_2(__this);
}

WebView* WebView__New_1(::uStatic* __this)
{
    WebView* inst = (WebView*)::uAllocObject(sizeof(WebView), WebView__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}}
