#include <app/Fuse.Controls.BackButton.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Ellipse.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.NavigationBar.h>
#include <app/Fuse.Controls.Page.h>
#include <app/Fuse.Controls.PageIndicatorDot.h>
#include <app/Fuse.Controls.Path.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.RegularPolygon.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.Star.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Template__Fuse_Controls_BackButton.h>
#include <app/Uno.UX.Template__Fuse_Controls_Button.h>
#include <app/Uno.UX.Template__Fuse_Controls_Circle.h>
#include <app/Uno.UX.Template__Fuse_Controls_Ellipse.h>
#include <app/Uno.UX.Template__Fuse_Controls_GraphicsView.h>
#include <app/Uno.UX.Template__Fuse_Controls_Image.h>
#include <app/Uno.UX.Template__Fuse_Controls_NativeViewHost.h>
#include <app/Uno.UX.Template__Fuse_Controls_NavigationBar.h>
#include <app/Uno.UX.Template__Fuse_Controls_Page.h>
#include <app/Uno.UX.Template__Fuse_Controls_PageIndicatorDot.h>
#include <app/Uno.UX.Template__Fuse_Controls_Path.h>
#include <app/Uno.UX.Template__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.UX.Template__Fuse_Controls_Rectangle.h>
#include <app/Uno.UX.Template__Fuse_Controls_RegularPolygon.h>
#include <app/Uno.UX.Template__Fuse_Controls_ScrollView.h>
#include <app/Uno.UX.Template__Fuse_Controls_Slider.h>
#include <app/Uno.UX.Template__Fuse_Controls_Star.h>
#include <app/Uno.UX.Template__Fuse_Controls_Switch.h>
#include <app/Uno.UX.Template__Fuse_Controls_Text.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextBlock.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextControl.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextInput.h>

namespace app {
namespace Uno {
namespace UX {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_BackButton__uType* Template__Fuse_Controls_BackButton__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_BackButton__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_BackButton__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_BackButton__uType), "Uno.UX.Template<Fuse.Controls.BackButton>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_BackButton__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_BackButton__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_BackButton, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_BackButton, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_BackButton__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_BackButton__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_BackButton__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_BackButton__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_BackButton__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_BackButton___ObjInit(Template__Fuse_Controls_BackButton* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_BackButton__Apply(Template__Fuse_Controls_BackButton* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::BackButton__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::BackButton*>(obj, ::app::Fuse::Controls::BackButton__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::BackButton__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::BackButton*>(obj, ::app::Fuse::Controls::BackButton__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_BackButton__get_AffectSubtypes(Template__Fuse_Controls_BackButton* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_BackButton__get_Cascade(Template__Fuse_Controls_BackButton* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_BackButton__set_AffectSubtypes(Template__Fuse_Controls_BackButton* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_BackButton__set_Cascade(Template__Fuse_Controls_BackButton* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Button__uType* Template__Fuse_Controls_Button__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Button__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Button__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Button__uType), "Uno.UX.Template<Fuse.Controls.Button>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Button__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Button__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Button, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Button, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Button__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Button__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Button__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Button__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Button__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Button___ObjInit(Template__Fuse_Controls_Button* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Button__Apply(Template__Fuse_Controls_Button* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Button__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Button*>(obj, ::app::Fuse::Controls::Button__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Button__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Button*>(obj, ::app::Fuse::Controls::Button__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Button__get_AffectSubtypes(Template__Fuse_Controls_Button* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Button__get_Cascade(Template__Fuse_Controls_Button* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Button__set_AffectSubtypes(Template__Fuse_Controls_Button* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Button__set_Cascade(Template__Fuse_Controls_Button* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Circle__uType* Template__Fuse_Controls_Circle__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Circle__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Circle__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Circle__uType), "Uno.UX.Template<Fuse.Controls.Circle>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Circle__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Circle__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Circle, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Circle, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Circle__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Circle__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Circle__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Circle__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Circle__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Circle___ObjInit(Template__Fuse_Controls_Circle* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Circle__Apply(Template__Fuse_Controls_Circle* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Circle__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Circle*>(obj, ::app::Fuse::Controls::Circle__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Circle__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Circle*>(obj, ::app::Fuse::Controls::Circle__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Circle__get_AffectSubtypes(Template__Fuse_Controls_Circle* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Circle__get_Cascade(Template__Fuse_Controls_Circle* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Circle__set_AffectSubtypes(Template__Fuse_Controls_Circle* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Circle__set_Cascade(Template__Fuse_Controls_Circle* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Ellipse__uType* Template__Fuse_Controls_Ellipse__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Ellipse__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Ellipse__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Ellipse__uType), "Uno.UX.Template<Fuse.Controls.Ellipse>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Ellipse__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Ellipse__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Ellipse, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Ellipse, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Ellipse__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Ellipse__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Ellipse__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Ellipse__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Ellipse__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Ellipse___ObjInit(Template__Fuse_Controls_Ellipse* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Ellipse__Apply(Template__Fuse_Controls_Ellipse* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Ellipse__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Ellipse*>(obj, ::app::Fuse::Controls::Ellipse__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Ellipse__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Ellipse*>(obj, ::app::Fuse::Controls::Ellipse__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Ellipse__get_AffectSubtypes(Template__Fuse_Controls_Ellipse* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Ellipse__get_Cascade(Template__Fuse_Controls_Ellipse* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Ellipse__set_AffectSubtypes(Template__Fuse_Controls_Ellipse* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Ellipse__set_Cascade(Template__Fuse_Controls_Ellipse* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_GraphicsView__uType* Template__Fuse_Controls_GraphicsView__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_GraphicsView__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_GraphicsView__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_GraphicsView__uType), "Uno.UX.Template<Fuse.Controls.GraphicsView>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_GraphicsView__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_GraphicsView__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_GraphicsView, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_GraphicsView, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_GraphicsView__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_GraphicsView__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_GraphicsView__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_GraphicsView__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_GraphicsView__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_GraphicsView___ObjInit(Template__Fuse_Controls_GraphicsView* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_GraphicsView__Apply(Template__Fuse_Controls_GraphicsView* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::GraphicsView__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::GraphicsView*>(obj, ::app::Fuse::Controls::GraphicsView__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::GraphicsView__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::GraphicsView*>(obj, ::app::Fuse::Controls::GraphicsView__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_GraphicsView__get_AffectSubtypes(Template__Fuse_Controls_GraphicsView* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_GraphicsView__get_Cascade(Template__Fuse_Controls_GraphicsView* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_GraphicsView__set_AffectSubtypes(Template__Fuse_Controls_GraphicsView* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_GraphicsView__set_Cascade(Template__Fuse_Controls_GraphicsView* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Image__uType* Template__Fuse_Controls_Image__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Image__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Image__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Image__uType), "Uno.UX.Template<Fuse.Controls.Image>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Image__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Image__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Image, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Image, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Image__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Image__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Image__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Image__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Image__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Image___ObjInit(Template__Fuse_Controls_Image* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Image__Apply(Template__Fuse_Controls_Image* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Image__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Image*>(obj, ::app::Fuse::Controls::Image__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Image__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Image*>(obj, ::app::Fuse::Controls::Image__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Image__get_AffectSubtypes(Template__Fuse_Controls_Image* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Image__get_Cascade(Template__Fuse_Controls_Image* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Image__set_AffectSubtypes(Template__Fuse_Controls_Image* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Image__set_Cascade(Template__Fuse_Controls_Image* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_NativeViewHost__uType* Template__Fuse_Controls_NativeViewHost__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_NativeViewHost__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_NativeViewHost__uType), "Uno.UX.Template<Fuse.Controls.NativeViewHost>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_NativeViewHost__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_NativeViewHost__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_NativeViewHost, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_NativeViewHost, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_NativeViewHost__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_NativeViewHost__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_NativeViewHost__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_NativeViewHost__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_NativeViewHost__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_NativeViewHost___ObjInit(Template__Fuse_Controls_NativeViewHost* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_NativeViewHost__Apply(Template__Fuse_Controls_NativeViewHost* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::NativeViewHost__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::NativeViewHost*>(obj, ::app::Fuse::Controls::NativeViewHost__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::NativeViewHost__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::NativeViewHost*>(obj, ::app::Fuse::Controls::NativeViewHost__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_NativeViewHost__get_AffectSubtypes(Template__Fuse_Controls_NativeViewHost* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_NativeViewHost__get_Cascade(Template__Fuse_Controls_NativeViewHost* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_NativeViewHost__set_AffectSubtypes(Template__Fuse_Controls_NativeViewHost* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_NativeViewHost__set_Cascade(Template__Fuse_Controls_NativeViewHost* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_NavigationBar__uType* Template__Fuse_Controls_NavigationBar__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_NavigationBar__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_NavigationBar__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_NavigationBar__uType), "Uno.UX.Template<Fuse.Controls.NavigationBar>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_NavigationBar__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_NavigationBar__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_NavigationBar, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_NavigationBar, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_NavigationBar__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_NavigationBar__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_NavigationBar__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_NavigationBar__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_NavigationBar__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_NavigationBar___ObjInit(Template__Fuse_Controls_NavigationBar* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_NavigationBar__Apply(Template__Fuse_Controls_NavigationBar* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::NavigationBar__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::NavigationBar*>(obj, ::app::Fuse::Controls::NavigationBar__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::NavigationBar__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::NavigationBar*>(obj, ::app::Fuse::Controls::NavigationBar__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_NavigationBar__get_AffectSubtypes(Template__Fuse_Controls_NavigationBar* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_NavigationBar__get_Cascade(Template__Fuse_Controls_NavigationBar* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_NavigationBar__set_AffectSubtypes(Template__Fuse_Controls_NavigationBar* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_NavigationBar__set_Cascade(Template__Fuse_Controls_NavigationBar* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Page__uType* Template__Fuse_Controls_Page__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Page__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Page__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Page__uType), "Uno.UX.Template<Fuse.Controls.Page>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Page__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Page__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Page, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Page, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Page__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Page__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Page__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Page__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Page__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Page___ObjInit(Template__Fuse_Controls_Page* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Page__Apply(Template__Fuse_Controls_Page* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Page__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Page*>(obj, ::app::Fuse::Controls::Page__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Page__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Page*>(obj, ::app::Fuse::Controls::Page__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Page__get_AffectSubtypes(Template__Fuse_Controls_Page* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Page__get_Cascade(Template__Fuse_Controls_Page* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Page__set_AffectSubtypes(Template__Fuse_Controls_Page* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Page__set_Cascade(Template__Fuse_Controls_Page* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_PageIndicatorDot__uType* Template__Fuse_Controls_PageIndicatorDot__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_PageIndicatorDot__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_PageIndicatorDot__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_PageIndicatorDot__uType), "Uno.UX.Template<Fuse.Controls.PageIndicatorDot>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_PageIndicatorDot__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_PageIndicatorDot__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_PageIndicatorDot, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_PageIndicatorDot, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_PageIndicatorDot__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_PageIndicatorDot__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_PageIndicatorDot__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_PageIndicatorDot__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_PageIndicatorDot__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_PageIndicatorDot___ObjInit(Template__Fuse_Controls_PageIndicatorDot* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_PageIndicatorDot__Apply(Template__Fuse_Controls_PageIndicatorDot* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::PageIndicatorDot__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::PageIndicatorDot*>(obj, ::app::Fuse::Controls::PageIndicatorDot__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::PageIndicatorDot__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::PageIndicatorDot*>(obj, ::app::Fuse::Controls::PageIndicatorDot__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_PageIndicatorDot__get_AffectSubtypes(Template__Fuse_Controls_PageIndicatorDot* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_PageIndicatorDot__get_Cascade(Template__Fuse_Controls_PageIndicatorDot* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_PageIndicatorDot__set_AffectSubtypes(Template__Fuse_Controls_PageIndicatorDot* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_PageIndicatorDot__set_Cascade(Template__Fuse_Controls_PageIndicatorDot* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Path__uType* Template__Fuse_Controls_Path__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Path__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Path__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Path__uType), "Uno.UX.Template<Fuse.Controls.Path>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Path__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Path__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Path, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Path, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Path__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Path__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Path__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Path__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Path__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Path___ObjInit(Template__Fuse_Controls_Path* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Path__Apply(Template__Fuse_Controls_Path* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Path__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Path*>(obj, ::app::Fuse::Controls::Path__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Path__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Path*>(obj, ::app::Fuse::Controls::Path__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Path__get_AffectSubtypes(Template__Fuse_Controls_Path* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Path__get_Cascade(Template__Fuse_Controls_Path* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Path__set_AffectSubtypes(Template__Fuse_Controls_Path* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Path__set_Cascade(Template__Fuse_Controls_Path* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_PlainTextEdit__uType* Template__Fuse_Controls_PlainTextEdit__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_PlainTextEdit__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_PlainTextEdit__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_PlainTextEdit__uType), "Uno.UX.Template<Fuse.Controls.PlainTextEdit>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_PlainTextEdit__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_PlainTextEdit__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_PlainTextEdit, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_PlainTextEdit, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_PlainTextEdit__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_PlainTextEdit__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_PlainTextEdit__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_PlainTextEdit__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_PlainTextEdit__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_PlainTextEdit___ObjInit(Template__Fuse_Controls_PlainTextEdit* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_PlainTextEdit__Apply(Template__Fuse_Controls_PlainTextEdit* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::PlainTextEdit__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::PlainTextEdit*>(obj, ::app::Fuse::Controls::PlainTextEdit__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::PlainTextEdit__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::PlainTextEdit*>(obj, ::app::Fuse::Controls::PlainTextEdit__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_PlainTextEdit__get_AffectSubtypes(Template__Fuse_Controls_PlainTextEdit* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_PlainTextEdit__get_Cascade(Template__Fuse_Controls_PlainTextEdit* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_PlainTextEdit__set_AffectSubtypes(Template__Fuse_Controls_PlainTextEdit* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_PlainTextEdit__set_Cascade(Template__Fuse_Controls_PlainTextEdit* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Rectangle__uType* Template__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Rectangle__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Rectangle__uType), "Uno.UX.Template<Fuse.Controls.Rectangle>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Rectangle__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Rectangle__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Rectangle, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Rectangle, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Rectangle__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Rectangle__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Rectangle__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Rectangle__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Rectangle__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Rectangle___ObjInit(Template__Fuse_Controls_Rectangle* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Rectangle__Apply(Template__Fuse_Controls_Rectangle* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Rectangle__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Rectangle*>(obj, ::app::Fuse::Controls::Rectangle__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Rectangle__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Rectangle*>(obj, ::app::Fuse::Controls::Rectangle__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Rectangle__get_AffectSubtypes(Template__Fuse_Controls_Rectangle* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Rectangle__get_Cascade(Template__Fuse_Controls_Rectangle* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Rectangle__set_AffectSubtypes(Template__Fuse_Controls_Rectangle* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Rectangle__set_Cascade(Template__Fuse_Controls_Rectangle* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_RegularPolygon__uType* Template__Fuse_Controls_RegularPolygon__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_RegularPolygon__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_RegularPolygon__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_RegularPolygon__uType), "Uno.UX.Template<Fuse.Controls.RegularPolygon>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_RegularPolygon__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_RegularPolygon__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_RegularPolygon, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_RegularPolygon, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_RegularPolygon__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_RegularPolygon__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_RegularPolygon__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_RegularPolygon__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_RegularPolygon__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_RegularPolygon___ObjInit(Template__Fuse_Controls_RegularPolygon* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_RegularPolygon__Apply(Template__Fuse_Controls_RegularPolygon* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::RegularPolygon__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::RegularPolygon*>(obj, ::app::Fuse::Controls::RegularPolygon__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::RegularPolygon__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::RegularPolygon*>(obj, ::app::Fuse::Controls::RegularPolygon__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_RegularPolygon__get_AffectSubtypes(Template__Fuse_Controls_RegularPolygon* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_RegularPolygon__get_Cascade(Template__Fuse_Controls_RegularPolygon* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_RegularPolygon__set_AffectSubtypes(Template__Fuse_Controls_RegularPolygon* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_RegularPolygon__set_Cascade(Template__Fuse_Controls_RegularPolygon* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_ScrollView__uType* Template__Fuse_Controls_ScrollView__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_ScrollView__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_ScrollView__uType), "Uno.UX.Template<Fuse.Controls.ScrollView>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_ScrollView__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_ScrollView__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_ScrollView, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_ScrollView, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_ScrollView__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_ScrollView__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_ScrollView__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_ScrollView__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_ScrollView__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_ScrollView___ObjInit(Template__Fuse_Controls_ScrollView* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_ScrollView__Apply(Template__Fuse_Controls_ScrollView* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::ScrollView__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::ScrollView*>(obj, ::app::Fuse::Controls::ScrollView__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::ScrollView__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::ScrollView*>(obj, ::app::Fuse::Controls::ScrollView__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_ScrollView__get_AffectSubtypes(Template__Fuse_Controls_ScrollView* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_ScrollView__get_Cascade(Template__Fuse_Controls_ScrollView* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_ScrollView__set_AffectSubtypes(Template__Fuse_Controls_ScrollView* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_ScrollView__set_Cascade(Template__Fuse_Controls_ScrollView* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Slider__uType* Template__Fuse_Controls_Slider__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Slider__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Slider__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Slider__uType), "Uno.UX.Template<Fuse.Controls.Slider>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Slider__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Slider__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Slider, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Slider, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Slider__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Slider__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Slider__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Slider__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Slider__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Slider___ObjInit(Template__Fuse_Controls_Slider* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Slider__Apply(Template__Fuse_Controls_Slider* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Slider__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Slider*>(obj, ::app::Fuse::Controls::Slider__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Slider__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Slider*>(obj, ::app::Fuse::Controls::Slider__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Slider__get_AffectSubtypes(Template__Fuse_Controls_Slider* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Slider__get_Cascade(Template__Fuse_Controls_Slider* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Slider__set_AffectSubtypes(Template__Fuse_Controls_Slider* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Slider__set_Cascade(Template__Fuse_Controls_Slider* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Star__uType* Template__Fuse_Controls_Star__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Star__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Star__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Star__uType), "Uno.UX.Template<Fuse.Controls.Star>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Star__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Star__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Star, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Star, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Star__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Star__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Star__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Star__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Star__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Star___ObjInit(Template__Fuse_Controls_Star* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Star__Apply(Template__Fuse_Controls_Star* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Star__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Star*>(obj, ::app::Fuse::Controls::Star__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Star__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Star*>(obj, ::app::Fuse::Controls::Star__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Star__get_AffectSubtypes(Template__Fuse_Controls_Star* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Star__get_Cascade(Template__Fuse_Controls_Star* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Star__set_AffectSubtypes(Template__Fuse_Controls_Star* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Star__set_Cascade(Template__Fuse_Controls_Star* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Switch__uType* Template__Fuse_Controls_Switch__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Switch__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Switch__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Switch__uType), "Uno.UX.Template<Fuse.Controls.Switch>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Switch__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Switch__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Switch, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Switch, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Switch__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Switch__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Switch__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Switch__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Switch__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Switch___ObjInit(Template__Fuse_Controls_Switch* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Switch__Apply(Template__Fuse_Controls_Switch* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Switch__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Switch*>(obj, ::app::Fuse::Controls::Switch__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Switch__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Switch*>(obj, ::app::Fuse::Controls::Switch__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Switch__get_AffectSubtypes(Template__Fuse_Controls_Switch* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Switch__get_Cascade(Template__Fuse_Controls_Switch* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Switch__set_AffectSubtypes(Template__Fuse_Controls_Switch* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Switch__set_Cascade(Template__Fuse_Controls_Switch* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_Text__uType* Template__Fuse_Controls_Text__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_Text__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_Text__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_Text__uType), "Uno.UX.Template<Fuse.Controls.Text>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_Text__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_Text__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_Text, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_Text, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_Text__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_Text__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_Text__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_Text__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_Text__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_Text___ObjInit(Template__Fuse_Controls_Text* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_Text__Apply(Template__Fuse_Controls_Text* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::Text__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Text*>(obj, ::app::Fuse::Controls::Text__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::Text__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::Text*>(obj, ::app::Fuse::Controls::Text__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_Text__get_AffectSubtypes(Template__Fuse_Controls_Text* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_Text__get_Cascade(Template__Fuse_Controls_Text* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_Text__set_AffectSubtypes(Template__Fuse_Controls_Text* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_Text__set_Cascade(Template__Fuse_Controls_Text* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_TextBlock__uType* Template__Fuse_Controls_TextBlock__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_TextBlock__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_TextBlock__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_TextBlock__uType), "Uno.UX.Template<Fuse.Controls.TextBlock>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_TextBlock__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_TextBlock__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_TextBlock, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_TextBlock, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_TextBlock__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_TextBlock__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_TextBlock__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_TextBlock__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_TextBlock__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_TextBlock___ObjInit(Template__Fuse_Controls_TextBlock* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_TextBlock__Apply(Template__Fuse_Controls_TextBlock* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::TextBlock__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::TextBlock*>(obj, ::app::Fuse::Controls::TextBlock__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::TextBlock__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::TextBlock*>(obj, ::app::Fuse::Controls::TextBlock__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_TextBlock__get_AffectSubtypes(Template__Fuse_Controls_TextBlock* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_TextBlock__get_Cascade(Template__Fuse_Controls_TextBlock* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_TextBlock__set_AffectSubtypes(Template__Fuse_Controls_TextBlock* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_TextBlock__set_Cascade(Template__Fuse_Controls_TextBlock* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_TextControl__uType* Template__Fuse_Controls_TextControl__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_TextControl__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_TextControl__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_TextControl__uType), "Uno.UX.Template<Fuse.Controls.TextControl>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_TextControl__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_TextControl__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_TextControl, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_TextControl, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_TextControl__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_TextControl__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_TextControl__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_TextControl__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_TextControl__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_TextControl___ObjInit(Template__Fuse_Controls_TextControl* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_TextControl__Apply(Template__Fuse_Controls_TextControl* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::TextControl__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::TextControl*>(obj, ::app::Fuse::Controls::TextControl__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::TextControl__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::TextControl*>(obj, ::app::Fuse::Controls::TextControl__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_TextControl__get_AffectSubtypes(Template__Fuse_Controls_TextControl* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_TextControl__get_Cascade(Template__Fuse_Controls_TextControl* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_TextControl__set_AffectSubtypes(Template__Fuse_Controls_TextControl* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_TextControl__set_Cascade(Template__Fuse_Controls_TextControl* __this, bool value)
{
    __this->_cascade = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Template__Fuse_Controls_TextInput__uType* Template__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong<Template__Fuse_Controls_TextInput__uType*> type;
    if (type != NULL) return type;

    type = (Template__Fuse_Controls_TextInput__uType*)::uAllocClassType(sizeof(Template__Fuse_Controls_TextInput__uType), "Uno.UX.Template<Fuse.Controls.TextInput>", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Template__Fuse_Controls_TextInput__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Template__Fuse_Controls_TextInput__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_affectSubtypes", NULL, offsetof(Template__Fuse_Controls_TextInput, _affectSubtypes), ::app::Uno::Bool__typeof()),
        ::uNewField("_cascade", NULL, offsetof(Template__Fuse_Controls_TextInput, _cascade), ::app::Uno::Bool__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("Apply", Template__Fuse_Controls_TextInput__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_AffectSubtypes", Template__Fuse_Controls_TextInput__get_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Cascade", Template__Fuse_Controls_TextInput__get_Cascade, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_AffectSubtypes", Template__Fuse_Controls_TextInput__set_AffectSubtypes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Cascade", Template__Fuse_Controls_TextInput__set_Cascade, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Template__Fuse_Controls_TextInput___ObjInit(Template__Fuse_Controls_TextInput* __this)
{
    __this->_cascade = true;
}

bool Template__Fuse_Controls_TextInput__Apply(Template__Fuse_Controls_TextInput* __this, ::uObject* obj)
{
    if (__this->_affectSubtypes)
    {
        if (::uIs(obj, ::app::Fuse::Controls::TextInput__typeof()))
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::TextInput*>(obj, ::app::Fuse::Controls::TextInput__typeof()));
            return __this->Cascade();
        }
    }
    else
    {
        if (::app::Uno::Object::GetType(::uPtr< ::uObject*>(obj)) == (::uType*)::app::Fuse::Controls::TextInput__typeof())
        {
            __this->OnApply(::uCast< ::app::Fuse::Controls::TextInput*>(obj, ::app::Fuse::Controls::TextInput__typeof()));
            return __this->Cascade();
        }
    }

    return true;
}

bool Template__Fuse_Controls_TextInput__get_AffectSubtypes(Template__Fuse_Controls_TextInput* __this)
{
    return __this->_affectSubtypes;
}

bool Template__Fuse_Controls_TextInput__get_Cascade(Template__Fuse_Controls_TextInput* __this)
{
    return __this->_cascade;
}

void Template__Fuse_Controls_TextInput__set_AffectSubtypes(Template__Fuse_Controls_TextInput* __this, bool value)
{
    __this->_affectSubtypes = value;
}

void Template__Fuse_Controls_TextInput__set_Cascade(Template__Fuse_Controls_TextInput* __this, bool value)
{
    __this->_cascade = value;
}

}}}
