#include <app/Fuse.Android.Button.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Number.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.CachingMode.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.iOS.Controls.Button.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.PropertyState.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.StyleProperty__Fuse_Android_Button__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Button__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_GraphicsView__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Grid__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Number__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Number__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_RangeControl__double.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Rectangle__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_Scr-a95f3fb5.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_StackPanel__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-44d8cf97.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-e2be4cfb.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_ToggleControl__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float2.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility.h>
#include <app/Fuse.StyleProperty__Fuse_iOS_Controls_Button__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Node__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Node__Fuse_Node.h>
#include <app/Fuse.StyleProperty__Fuse_Node__string.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Rectangle__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__float.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Android_Button.h>
#include <app/Uno.Action__Fuse_Android_Button__float4.h>
#include <app/Uno.Action__Fuse_Controls_Button.h>
#include <app/Uno.Action__Fuse_Controls_Button__string.h>
#include <app/Uno.Action__Fuse_Controls_Control.h>
#include <app/Uno.Action__Fuse_Controls_Control__float4.h>
#include <app/Uno.Action__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Controls_GraphicsView.h>
#include <app/Uno.Action__Fuse_Controls_GraphicsView__float4.h>
#include <app/Uno.Action__Fuse_Controls_Grid.h>
#include <app/Uno.Action__Fuse_Controls_Grid__float.h>
#include <app/Uno.Action__Fuse_Controls_Image.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Uno.Action__Fuse_Controls_Number.h>
#include <app/Uno.Action__Fuse_Controls_Number__float.h>
#include <app/Uno.Action__Fuse_Controls_Number__string.h>
#include <app/Uno.Action__Fuse_Controls_PageIndicator.h>
#include <app/Uno.Action__Fuse_Controls_PageIndicator__Uno_UX_IFactory.h>
#include <app/Uno.Action__Fuse_Controls_Panel.h>
#include <app/Uno.Action__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Uno.Action__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.Action__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Uno.Action__Fuse_Controls_RangeControl.h>
#include <app/Uno.Action__Fuse_Controls_RangeControl__double.h>
#include <app/Uno.Action__Fuse_Controls_Rectangle.h>
#include <app/Uno.Action__Fuse_Controls_Rectangle__float4.h>
#include <app/Uno.Action__Fuse_Controls_ScrollView.h>
#include <app/Uno.Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Action__Fuse_Controls_Shape.h>
#include <app/Uno.Action__Fuse_Controls_Shape__float.h>
#include <app/Uno.Action__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Controls_StackPanel.h>
#include <app/Uno.Action__Fuse_Controls_StackPanel__float.h>
#include <app/Uno.Action__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation.h>
#include <app/Uno.Action__Fuse_Controls_TextControl.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__float.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__float4.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__string.h>
#include <app/Uno.Action__Fuse_Controls_TextInput.h>
#include <app/Uno.Action__Fuse_Controls_TextInput__bool.h>
#include <app/Uno.Action__Fuse_Controls_TextInput__float4.h>
#include <app/Uno.Action__Fuse_Controls_TextInput__Uno_Platform_TextInputHint.h>
#include <app/Uno.Action__Fuse_Controls_ToggleControl.h>
#include <app/Uno.Action__Fuse_Controls_ToggleControl__bool.h>
#include <app/Uno.Action__Fuse_Elements_Element.h>
#include <app/Uno.Action__Fuse_Elements_Element__bool.h>
#include <app/Uno.Action__Fuse_Elements_Element__float.h>
#include <app/Uno.Action__Fuse_Elements_Element__float2.h>
#include <app/Uno.Action__Fuse_Elements_Element__float4.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_Visibility.h>
#include <app/Uno.Action__Fuse_iOS_Controls_Button.h>
#include <app/Uno.Action__Fuse_iOS_Controls_Button__float4.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Node__bool.h>
#include <app/Uno.Action__Fuse_Node__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Node__string.h>
#include <app/Uno.Action__Fuse_Shapes_Rectangle.h>
#include <app/Uno.Action__Fuse_Shapes_Rectangle__float4.h>
#include <app/Uno.Action__Fuse_Shapes_Shape.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__float.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Func__Fuse_Android_Button__float4.h>
#include <app/Uno.Func__Fuse_Controls_Button__string.h>
#include <app/Uno.Func__Fuse_Controls_Control__float4.h>
#include <app/Uno.Func__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Controls_GraphicsView__float4.h>
#include <app/Uno.Func__Fuse_Controls_Grid__float.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Uno.Func__Fuse_Controls_Number__float.h>
#include <app/Uno.Func__Fuse_Controls_Number__string.h>
#include <app/Uno.Func__Fuse_Controls_PageIndicator__Uno_UX_IFactory.h>
#include <app/Uno.Func__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Uno.Func__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Uno.Func__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Uno.Func__Fuse_Controls_RangeControl__double.h>
#include <app/Uno.Func__Fuse_Controls_Rectangle__float4.h>
#include <app/Uno.Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Func__Fuse_Controls_Shape__float.h>
#include <app/Uno.Func__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Func__Fuse_Controls_StackPanel__float.h>
#include <app/Uno.Func__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__float.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__float4.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__string.h>
#include <app/Uno.Func__Fuse_Controls_TextInput__bool.h>
#include <app/Uno.Func__Fuse_Controls_TextInput__float4.h>
#include <app/Uno.Func__Fuse_Controls_TextInput__Uno_Platform_TextInputHint.h>
#include <app/Uno.Func__Fuse_Controls_ToggleControl__bool.h>
#include <app/Uno.Func__Fuse_Elements_Element__bool.h>
#include <app/Uno.Func__Fuse_Elements_Element__float.h>
#include <app/Uno.Func__Fuse_Elements_Element__float2.h>
#include <app/Uno.Func__Fuse_Elements_Element__float4.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_Visibility.h>
#include <app/Uno.Func__Fuse_iOS_Controls_Button__float4.h>
#include <app/Uno.Func__Fuse_Node__bool.h>
#include <app/Uno.Func__Fuse_Node__Fuse_Node.h>
#include <app/Uno.Func__Fuse_Node__string.h>
#include <app/Uno.Func__Fuse_Shapes_Rectangle__float4.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__float.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.IFactory.h>

namespace app {
namespace Fuse {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Android_Button__float4__uType* StyleProperty__Fuse_Android_Button__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Android_Button__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Android_Button__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Android_Button__float4__uType), "Fuse.StyleProperty<Fuse.Android.Button,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Android_Button__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Android_Button__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Android_Button__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Android_Button__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Android_Button__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Android_Button__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Android_Button__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Android_Button__float4, _changedCallback), ::app::Uno::Action__Fuse_Android_Button__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Android_Button__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Android_Button__float4, _getter), ::app::Uno::Func__Fuse_Android_Button__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Android_Button__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Android_Button__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Android_Button__float4, _setter), ::app::Uno::Action__Fuse_Android_Button__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Android_Button__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::Android::Button__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Android_Button__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Android_Button__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Android::Button__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Android_Button__float4__New_1, 0, true, StyleProperty__Fuse_Android_Button__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Android_Button__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Android_Button__float4__New_2, 0, true, StyleProperty__Fuse_Android_Button__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Android_Button__typeof(), ::app::Uno::Action__Fuse_Android_Button__float4__typeof(), ::app::Uno::Func__Fuse_Android_Button__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Android_Button__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Android::Button__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Android_Button__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Android::Button__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Android_Button__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Android::Button__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Android_Button__float4__SetLocalState, 0, false, ::app::Fuse::Android::Button__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Android_Button__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Android::Button__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Android_Button__float4___ObjInit_1(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Android_Button__float4___ObjInit_2(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_Android_Button__float4__Get(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Android::Button*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_Android_Button__float4__get_DefaultValue(StyleProperty__Fuse_Android_Button__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Android_Button__float4__HasValue(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Android_Button__float4__HasValueFor(StyleProperty__Fuse_Android_Button__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Android::Button__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Android::Button*>(owner, ::app::Fuse::Android::Button__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Android_Button__float4__IsEqual(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Android_Button__float4* StyleProperty__Fuse_Android_Button__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Android_Button__float4* inst = (StyleProperty__Fuse_Android_Button__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Android_Button__float4), StyleProperty__Fuse_Android_Button__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Android_Button__float4* StyleProperty__Fuse_Android_Button__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Android_Button__float4* inst = (StyleProperty__Fuse_Android_Button__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Android_Button__float4), StyleProperty__Fuse_Android_Button__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Android_Button__float4__OnChanged(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Android::Button*>(owner);
    }
}

bool StyleProperty__Fuse_Android_Button__float4__Reset(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Android::Button*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Android_Button__float4__ResetFor(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Android::Button__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Android::Button*>((::uObject*)n, ::app::Fuse::Android::Button__typeof()));
    }
}

bool StyleProperty__Fuse_Android_Button__float4__ResetStyle(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Android_Button__float4__ResetStyleFor(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Android::Button__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Android::Button*>((::uObject*)n, ::app::Fuse::Android::Button__typeof()));
    }
}

bool StyleProperty__Fuse_Android_Button__float4__Set(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Android::Button*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Android_Button__float4__SetLocalState(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Android_Button__float4__SetStyle(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Android::Button*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Button__string__uType* StyleProperty__Fuse_Controls_Button__string__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Button__string__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Button__string__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Button__string__uType), "Fuse.StyleProperty<Fuse.Controls.Button,string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Button__string__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Button__string__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Button__string__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Button__string, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Button__string, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Button__string, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Button__string, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Button__string, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Button__string, _changedCallback), ::app::Uno::Action__Fuse_Controls_Button__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Button__string, _defaultValue), ::app::Uno::String__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Button__string, _getter), ::app::Uno::Func__Fuse_Controls_Button__string__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Button__string, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Button__string, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Button__string, _setter), ::app::Uno::Action__Fuse_Controls_Button__string__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Button__string__Get, 0, false, ::app::Uno::String__typeof(), ::app::Fuse::Controls::Button__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Button__string__get_DefaultValue, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Button__string__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Button__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Button__string__New_1, 0, true, StyleProperty__Fuse_Controls_Button__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__Fuse_Controls_Button__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Button__string__New_2, 0, true, StyleProperty__Fuse_Controls_Button__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__Fuse_Controls_Button__typeof(), ::app::Uno::Action__Fuse_Controls_Button__string__typeof(), ::app::Uno::Func__Fuse_Controls_Button__string__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Button__string__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Button__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Button__string__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Button__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Button__string__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Button__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Button__string__SetLocalState, 0, false, ::app::Fuse::Controls::Button__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Button__string__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Button__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Button__string___ObjInit_1(StyleProperty__Fuse_Controls_Button__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Button__string___ObjInit_2(StyleProperty__Fuse_Controls_Button__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::uString* StyleProperty__Fuse_Controls_Button__string__Get(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uString*, ::app::Fuse::Controls::Button*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::uString*>(res, ::app::Uno::String__typeof());
        }
    }
}

::uString* StyleProperty__Fuse_Controls_Button__string__get_DefaultValue(StyleProperty__Fuse_Controls_Button__string* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Button__string__HasValue(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Button__string__HasValueFor(StyleProperty__Fuse_Controls_Button__string* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Button__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Button*>(owner, ::app::Fuse::Controls::Button__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Button__string__IsEqual(StyleProperty__Fuse_Controls_Button__string* __this, ::uString* value, ::uString* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uString*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Button__string* StyleProperty__Fuse_Controls_Button__string__New_1(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Button__string* inst = (StyleProperty__Fuse_Controls_Button__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Button__string), StyleProperty__Fuse_Controls_Button__string__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Button__string* StyleProperty__Fuse_Controls_Button__string__New_2(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Button__string* inst = (StyleProperty__Fuse_Controls_Button__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Button__string), StyleProperty__Fuse_Controls_Button__string__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Button__string__OnChanged(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Button*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Button__string__Reset(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Button*, ::uString*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Button__string__ResetFor(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Button__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Button*>((::uObject*)n, ::app::Fuse::Controls::Button__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Button__string__ResetStyle(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Button__string__ResetStyleFor(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Button__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Button*>((::uObject*)n, ::app::Fuse::Controls::Button__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Button__string__Set(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uString* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Button*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Button__string__SetLocalState(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Button__string__SetStyle(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Button*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Control__float4__uType* StyleProperty__Fuse_Controls_Control__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Control__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Control__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Control__float4__uType), "Fuse.StyleProperty<Fuse.Controls.Control,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Control__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Control__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Control__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Control__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Control__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Control__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Control__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Control__float4, _changedCallback), ::app::Uno::Action__Fuse_Controls_Control__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Control__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Control__float4, _getter), ::app::Uno::Func__Fuse_Controls_Control__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Control__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Control__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Control__float4, _setter), ::app::Uno::Action__Fuse_Controls_Control__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Control__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Control__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Control__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Control__float4__New_1, 0, true, StyleProperty__Fuse_Controls_Control__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_Control__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Control__float4__New_2, 0, true, StyleProperty__Fuse_Controls_Control__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_Control__typeof(), ::app::Uno::Action__Fuse_Controls_Control__float4__typeof(), ::app::Uno::Func__Fuse_Controls_Control__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Control__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Control__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Control__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Control__float4__SetLocalState, 0, false, ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Control__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Control__float4___ObjInit_1(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Control__float4___ObjInit_2(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_Control__float4__Get(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::Control*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_Control__float4__get_DefaultValue(StyleProperty__Fuse_Controls_Control__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Control__float4__HasValue(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Control__float4__HasValueFor(StyleProperty__Fuse_Controls_Control__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Control__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Control*>(owner, ::app::Fuse::Controls::Control__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Control__float4__IsEqual(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Control__float4* StyleProperty__Fuse_Controls_Control__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Control__float4* inst = (StyleProperty__Fuse_Controls_Control__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Control__float4), StyleProperty__Fuse_Controls_Control__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Control__float4* StyleProperty__Fuse_Controls_Control__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Control__float4* inst = (StyleProperty__Fuse_Controls_Control__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Control__float4), StyleProperty__Fuse_Controls_Control__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Control__float4__OnChanged(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Controls::Control* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Control*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Control__float4__Reset(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Control*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Control__float4__ResetFor(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Control__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Control*>((::uObject*)n, ::app::Fuse::Controls::Control__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Control__float4__ResetStyle(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Control__float4__ResetStyleFor(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Control__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Control*>((::uObject*)n, ::app::Fuse::Controls::Control__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Control__float4__Set(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Controls::Control* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Control*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Control__float4__SetLocalState(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Control__float4__SetStyle(StyleProperty__Fuse_Controls_Control__float4* __this, ::app::Fuse::Controls::Control* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Control*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType), "Fuse.StyleProperty<Fuse.Controls.Control,Fuse.Drawing.Brush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _changedCallback), ::app::Uno::Action__Fuse_Controls_Control__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _defaultValue), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _getter), ::app::Uno::Func__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _setter), ::app::Uno::Action__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Get, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__get_DefaultValue, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__New_1, 0, true, StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Action__Fuse_Controls_Control__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__New_2, 0, true, StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Action__Fuse_Controls_Control__typeof(), ::app::Uno::Action__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof(), ::app::Uno::Func__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__SetLocalState, 0, false, ::app::Fuse::Controls::Control__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Control__typeof(), ::app::Fuse::Drawing::Brush__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush___ObjInit_1(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush___ObjInit_2(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Get(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Drawing::Brush*, ::app::Fuse::Controls::Control*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Drawing::Brush*>(res, ::app::Fuse::Drawing::Brush__typeof());
        }
    }
}

::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__get_DefaultValue(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__HasValue(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__HasValueFor(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Control__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Control*>(owner, ::app::Fuse::Controls::Control__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__IsEqual(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::app::Fuse::Drawing::Brush* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Drawing::Brush*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush), StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush), StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__OnChanged(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Control*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Reset(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Control*, ::app::Fuse::Drawing::Brush*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetFor(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Control__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Control*>((::uObject*)n, ::app::Fuse::Controls::Control__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetStyle(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetStyleFor(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Control__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Control*>((::uObject*)n, ::app::Fuse::Controls::Control__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Set(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Drawing::Brush* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Control*, ::app::Fuse::Drawing::Brush*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__SetLocalState(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__SetStyle(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Control*, ::app::Fuse::Drawing::Brush*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_GraphicsView__float4__uType* StyleProperty__Fuse_Controls_GraphicsView__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_GraphicsView__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_GraphicsView__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_GraphicsView__float4__uType), "Fuse.StyleProperty<Fuse.Controls.GraphicsView,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_GraphicsView__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_GraphicsView__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_GraphicsView__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _changedCallback), ::app::Uno::Action__Fuse_Controls_GraphicsView__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _getter), ::app::Uno::Func__Fuse_Controls_GraphicsView__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _setter), ::app::Uno::Action__Fuse_Controls_GraphicsView__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_GraphicsView__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::Controls::GraphicsView__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_GraphicsView__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_GraphicsView__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::GraphicsView__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_GraphicsView__float4__New_1, 0, true, StyleProperty__Fuse_Controls_GraphicsView__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_GraphicsView__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_GraphicsView__float4__New_2, 0, true, StyleProperty__Fuse_Controls_GraphicsView__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_GraphicsView__typeof(), ::app::Uno::Action__Fuse_Controls_GraphicsView__float4__typeof(), ::app::Uno::Func__Fuse_Controls_GraphicsView__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_GraphicsView__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::GraphicsView__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_GraphicsView__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::GraphicsView__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_GraphicsView__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::GraphicsView__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_GraphicsView__float4__SetLocalState, 0, false, ::app::Fuse::Controls::GraphicsView__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_GraphicsView__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::GraphicsView__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_GraphicsView__float4___ObjInit_1(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_GraphicsView__float4___ObjInit_2(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_GraphicsView__float4__Get(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::GraphicsView*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_GraphicsView__float4__get_DefaultValue(StyleProperty__Fuse_Controls_GraphicsView__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__HasValue(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__HasValueFor(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::GraphicsView__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::GraphicsView*>(owner, ::app::Fuse::Controls::GraphicsView__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__IsEqual(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_GraphicsView__float4* StyleProperty__Fuse_Controls_GraphicsView__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_GraphicsView__float4* inst = (StyleProperty__Fuse_Controls_GraphicsView__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_GraphicsView__float4), StyleProperty__Fuse_Controls_GraphicsView__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_GraphicsView__float4* StyleProperty__Fuse_Controls_GraphicsView__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_GraphicsView__float4* inst = (StyleProperty__Fuse_Controls_GraphicsView__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_GraphicsView__float4), StyleProperty__Fuse_Controls_GraphicsView__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_GraphicsView__float4__OnChanged(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::GraphicsView*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__Reset(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::GraphicsView*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_GraphicsView__float4__ResetFor(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::GraphicsView__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::GraphicsView*>((::uObject*)n, ::app::Fuse::Controls::GraphicsView__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__ResetStyle(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_GraphicsView__float4__ResetStyleFor(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::GraphicsView__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::GraphicsView*>((::uObject*)n, ::app::Fuse::Controls::GraphicsView__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__Set(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::GraphicsView*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_GraphicsView__float4__SetLocalState(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__SetStyle(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::GraphicsView*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Grid__float__uType* StyleProperty__Fuse_Controls_Grid__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Grid__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Grid__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Grid__float__uType), "Fuse.StyleProperty<Fuse.Controls.Grid,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Grid__float__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Grid__float__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Grid__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Grid__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Grid__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Grid__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Grid__float, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Grid__float, _changedCallback), ::app::Uno::Action__Fuse_Controls_Grid__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Grid__float, _defaultValue), ::app::Uno::Float__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Grid__float, _getter), ::app::Uno::Func__Fuse_Controls_Grid__float__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Grid__float, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Grid__float, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Grid__float, _setter), ::app::Uno::Action__Fuse_Controls_Grid__float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Grid__float__Get, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Controls::Grid__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Grid__float__get_DefaultValue, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Grid__float__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Grid__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Grid__float__New_1, 0, true, StyleProperty__Fuse_Controls_Grid__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_Grid__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Grid__float__New_2, 0, true, StyleProperty__Fuse_Controls_Grid__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_Grid__typeof(), ::app::Uno::Action__Fuse_Controls_Grid__float__typeof(), ::app::Uno::Func__Fuse_Controls_Grid__float__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Grid__float__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Grid__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Grid__float__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Grid__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Grid__float__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Grid__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Grid__float__SetLocalState, 0, false, ::app::Fuse::Controls::Grid__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Grid__float__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Grid__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Grid__float___ObjInit_1(StyleProperty__Fuse_Controls_Grid__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Grid__float___ObjInit_2(StyleProperty__Fuse_Controls_Grid__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Controls_Grid__float__Get(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::Grid*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

float StyleProperty__Fuse_Controls_Grid__float__get_DefaultValue(StyleProperty__Fuse_Controls_Grid__float* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Grid__float__HasValue(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Grid__float__HasValueFor(StyleProperty__Fuse_Controls_Grid__float* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Grid__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Grid*>(owner, ::app::Fuse::Controls::Grid__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Grid__float__IsEqual(StyleProperty__Fuse_Controls_Grid__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Grid__float* StyleProperty__Fuse_Controls_Grid__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Grid__float* inst = (StyleProperty__Fuse_Controls_Grid__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Grid__float), StyleProperty__Fuse_Controls_Grid__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Grid__float* StyleProperty__Fuse_Controls_Grid__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Grid__float* inst = (StyleProperty__Fuse_Controls_Grid__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Grid__float), StyleProperty__Fuse_Controls_Grid__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Grid__float__OnChanged(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Grid*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Grid__float__Reset(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Grid*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Grid__float__ResetFor(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Grid__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Grid*>((::uObject*)n, ::app::Fuse::Controls::Grid__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Grid__float__ResetStyle(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Grid__float__ResetStyleFor(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Grid__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Grid*>((::uObject*)n, ::app::Fuse::Controls::Grid__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Grid__float__Set(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Grid*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Grid__float__SetLocalState(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Grid__float__SetStyle(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Grid*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Elements.Alignment>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _changedCallback), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _defaultValue), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _getter), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _setter), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Get, 0, false, ::app::Fuse::Elements::Alignment__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__get_DefaultValue, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__New_1, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof(), ::app::Fuse::Elements::Alignment__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__New_2, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof(), ::app::Fuse::Elements::Alignment__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof(), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof(), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__SetLocalState, 0, false, ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Elements::Alignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__get_DefaultValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__HasValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__HasValueFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Image__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Image*>(owner, ::app::Fuse::Controls::Image__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value), ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment), StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment), StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__SetLocalState(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__SetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Elements.StretchDirection>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _changedCallback), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _defaultValue), ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _getter), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _setter), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Get, 0, false, ::app::Fuse::Elements::StretchDirection__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__get_DefaultValue, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_1, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof(), ::app::Fuse::Elements::StretchDirection__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_2, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof(), ::app::Fuse::Elements::StretchDirection__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof(), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof(), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__SetLocalState, 0, false, ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Elements::StretchDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::StretchDirection__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__get_DefaultValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__HasValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__HasValueFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Image__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Image*>(owner, ::app::Fuse::Controls::Image__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value), ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__SetLocalState(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__SetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Elements.StretchMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _changedCallback), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _defaultValue), ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _getter), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _setter), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Get, 0, false, ::app::Fuse::Elements::StretchMode__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__get_DefaultValue, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_1, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof(), ::app::Fuse::Elements::StretchMode__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_2, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof(), ::app::Fuse::Elements::StretchMode__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof(), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof(), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__SetLocalState, 0, false, ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Elements::StretchMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::StretchMode__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__get_DefaultValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__HasValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__HasValueFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Image__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Image*>(owner, ::app::Fuse::Controls::Image__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value), ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__SetLocalState(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__SetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Elements.StretchSizing>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _changedCallback), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _defaultValue), ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _getter), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _setter), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Get, 0, false, ::app::Fuse::Elements::StretchSizing__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__get_DefaultValue, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__New_1, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof(), ::app::Fuse::Elements::StretchSizing__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__New_2, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof(), ::app::Fuse::Elements::StretchSizing__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof(), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof(), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__SetLocalState, 0, false, ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Elements::StretchSizing__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::StretchSizing__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__get_DefaultValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__HasValue(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__HasValueFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Image__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Image*>(owner, ::app::Fuse::Controls::Image__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value), ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__SetLocalState(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__SetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Resources.MemoryPolicy>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _changedCallback), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _defaultValue), ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _getter), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _setter), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Get, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__get_DefaultValue, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_1, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof(), ::app::Fuse::Resources::MemoryPolicy__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_2, 0, true, StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof(), ::app::Fuse::Resources::MemoryPolicy__typeof(), ::app::Uno::Action__Fuse_Controls_Image__typeof(), ::app::Uno::Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof(), ::app::Uno::Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__SetLocalState, 0, false, ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Image__typeof(), ::app::Fuse::Resources::MemoryPolicy__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Resources::MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Get(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Resources::MemoryPolicy*, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Resources::MemoryPolicy*>(res, ::app::Fuse::Resources::MemoryPolicy__typeof());
        }
    }
}

::app::Fuse::Resources::MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__get_DefaultValue(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__HasValue(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__HasValueFor(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Image__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Image*>(owner, ::app::Fuse::Controls::Image__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Resources::MemoryPolicy* value, ::app::Fuse::Resources::MemoryPolicy* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Resources::MemoryPolicy*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_1(::uStatic* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy), StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_2(::uStatic* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy), StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, ::app::Fuse::Resources::MemoryPolicy*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetFor(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Set(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Resources::MemoryPolicy* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, ::app::Fuse::Resources::MemoryPolicy*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__SetLocalState(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__SetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, ::app::Fuse::Resources::MemoryPolicy*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Number__float__uType* StyleProperty__Fuse_Controls_Number__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Number__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Number__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Number__float__uType), "Fuse.StyleProperty<Fuse.Controls.Number,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Number__float__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Number__float__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Number__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Number__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Number__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Number__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Number__float, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Number__float, _changedCallback), ::app::Uno::Action__Fuse_Controls_Number__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Number__float, _defaultValue), ::app::Uno::Float__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Number__float, _getter), ::app::Uno::Func__Fuse_Controls_Number__float__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Number__float, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Number__float, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Number__float, _setter), ::app::Uno::Action__Fuse_Controls_Number__float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Number__float__Get, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Number__float__get_DefaultValue, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Number__float__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Number__float__New_1, 0, true, StyleProperty__Fuse_Controls_Number__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_Number__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Number__float__New_2, 0, true, StyleProperty__Fuse_Controls_Number__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_Number__typeof(), ::app::Uno::Action__Fuse_Controls_Number__float__typeof(), ::app::Uno::Func__Fuse_Controls_Number__float__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Number__float__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Number__float__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Number__float__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Number__float__SetLocalState, 0, false, ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Number__float__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Number__float___ObjInit_1(StyleProperty__Fuse_Controls_Number__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Number__float___ObjInit_2(StyleProperty__Fuse_Controls_Number__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Controls_Number__float__Get(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::Number*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

float StyleProperty__Fuse_Controls_Number__float__get_DefaultValue(StyleProperty__Fuse_Controls_Number__float* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Number__float__HasValue(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Number__float__HasValueFor(StyleProperty__Fuse_Controls_Number__float* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Number__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Number*>(owner, ::app::Fuse::Controls::Number__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Number__float__IsEqual(StyleProperty__Fuse_Controls_Number__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Number__float* StyleProperty__Fuse_Controls_Number__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Number__float* inst = (StyleProperty__Fuse_Controls_Number__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Number__float), StyleProperty__Fuse_Controls_Number__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Number__float* StyleProperty__Fuse_Controls_Number__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Number__float* inst = (StyleProperty__Fuse_Controls_Number__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Number__float), StyleProperty__Fuse_Controls_Number__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Number__float__OnChanged(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Number*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Number__float__Reset(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Number__float__ResetFor(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Number__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Number*>((::uObject*)n, ::app::Fuse::Controls::Number__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Number__float__ResetStyle(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Number__float__ResetStyleFor(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Number__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Number*>((::uObject*)n, ::app::Fuse::Controls::Number__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Number__float__Set(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Number__float__SetLocalState(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Number__float__SetStyle(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Number__string__uType* StyleProperty__Fuse_Controls_Number__string__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Number__string__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Number__string__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Number__string__uType), "Fuse.StyleProperty<Fuse.Controls.Number,string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Number__string__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Number__string__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Number__string__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Number__string, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Number__string, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Number__string, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Number__string, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Number__string, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Number__string, _changedCallback), ::app::Uno::Action__Fuse_Controls_Number__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Number__string, _defaultValue), ::app::Uno::String__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Number__string, _getter), ::app::Uno::Func__Fuse_Controls_Number__string__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Number__string, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Number__string, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Number__string, _setter), ::app::Uno::Action__Fuse_Controls_Number__string__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Number__string__Get, 0, false, ::app::Uno::String__typeof(), ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Number__string__get_DefaultValue, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Number__string__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Number__string__New_1, 0, true, StyleProperty__Fuse_Controls_Number__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__Fuse_Controls_Number__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Number__string__New_2, 0, true, StyleProperty__Fuse_Controls_Number__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__Fuse_Controls_Number__typeof(), ::app::Uno::Action__Fuse_Controls_Number__string__typeof(), ::app::Uno::Func__Fuse_Controls_Number__string__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Number__string__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Number__string__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Number__string__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Number__string__SetLocalState, 0, false, ::app::Fuse::Controls::Number__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Number__string__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Number__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Number__string___ObjInit_1(StyleProperty__Fuse_Controls_Number__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Number__string___ObjInit_2(StyleProperty__Fuse_Controls_Number__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::uString* StyleProperty__Fuse_Controls_Number__string__Get(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uString*, ::app::Fuse::Controls::Number*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::uString*>(res, ::app::Uno::String__typeof());
        }
    }
}

::uString* StyleProperty__Fuse_Controls_Number__string__get_DefaultValue(StyleProperty__Fuse_Controls_Number__string* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Number__string__HasValue(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Number__string__HasValueFor(StyleProperty__Fuse_Controls_Number__string* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Number__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Number*>(owner, ::app::Fuse::Controls::Number__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Number__string__IsEqual(StyleProperty__Fuse_Controls_Number__string* __this, ::uString* value, ::uString* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uString*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Number__string* StyleProperty__Fuse_Controls_Number__string__New_1(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Number__string* inst = (StyleProperty__Fuse_Controls_Number__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Number__string), StyleProperty__Fuse_Controls_Number__string__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Number__string* StyleProperty__Fuse_Controls_Number__string__New_2(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Number__string* inst = (StyleProperty__Fuse_Controls_Number__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Number__string), StyleProperty__Fuse_Controls_Number__string__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Number__string__OnChanged(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Number*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Number__string__Reset(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, ::uString*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Number__string__ResetFor(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Number__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Number*>((::uObject*)n, ::app::Fuse::Controls::Number__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Number__string__ResetStyle(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Number__string__ResetStyleFor(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Number__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Number*>((::uObject*)n, ::app::Fuse::Controls::Number__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Number__string__Set(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uString* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Number__string__SetLocalState(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Number__string__SetStyle(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType), "Fuse.StyleProperty<Fuse.Controls.PageIndicator,Uno.UX.IFactory>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _changedCallback), ::app::Uno::Action__Fuse_Controls_PageIndicator__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _defaultValue), ::app::Uno::UX::IFactory__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _getter), ::app::Uno::Func__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _setter), ::app::Uno::Action__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Get, 0, false, ::app::Uno::UX::IFactory__typeof(), ::app::Fuse::Controls::PageIndicator__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__get_DefaultValue, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PageIndicator__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_1, 0, true, StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof(), ::app::Uno::UX::IFactory__typeof(), ::app::Uno::Action__Fuse_Controls_PageIndicator__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_2, 0, true, StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof(), ::app::Uno::UX::IFactory__typeof(), ::app::Uno::Action__Fuse_Controls_PageIndicator__typeof(), ::app::Uno::Action__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof(), ::app::Uno::Func__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PageIndicator__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PageIndicator__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PageIndicator__typeof(), ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__SetLocalState, 0, false, ::app::Fuse::Controls::PageIndicator__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PageIndicator__typeof(), ::app::Uno::UX::IFactory__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory___ObjInit_1(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory___ObjInit_2(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::uObject* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Get(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*, ::app::Fuse::Controls::PageIndicator*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return (::uObject*)res;
        }
    }
}

::uObject* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__get_DefaultValue(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__HasValue(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__HasValueFor(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::PageIndicator__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::PageIndicator*>(owner, ::app::Fuse::Controls::PageIndicator__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__IsEqual(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* value, ::uObject* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uObject*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_1(::uStatic* __this, ::uObject* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* inst = (StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory), StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_2(::uStatic* __this, ::uObject* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* inst = (StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory), StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__OnChanged(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::PageIndicator*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Reset(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PageIndicator*, ::uObject*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetFor(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::PageIndicator__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::PageIndicator*>((::uObject*)n, ::app::Fuse::Controls::PageIndicator__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyle(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyleFor(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::PageIndicator__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::PageIndicator*>((::uObject*)n, ::app::Fuse::Controls::PageIndicator__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Set(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner, ::uObject* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uObject* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PageIndicator*, ::uObject*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__SetLocalState(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__SetStyle(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner, ::uObject* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PageIndicator*, ::uObject*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType), "Fuse.StyleProperty<Fuse.Controls.Panel,Fuse.Layouts.Layout>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _changedCallback), ::app::Uno::Action__Fuse_Controls_Panel__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _defaultValue), ::app::Fuse::Layouts::Layout__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _getter), ::app::Uno::Func__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _setter), ::app::Uno::Action__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Get, 0, false, ::app::Fuse::Layouts::Layout__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__get_DefaultValue, 0, false, ::app::Fuse::Layouts::Layout__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_1, 0, true, StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof(), ::app::Fuse::Layouts::Layout__typeof(), ::app::Uno::Action__Fuse_Controls_Panel__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_2, 0, true, StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof(), ::app::Fuse::Layouts::Layout__typeof(), ::app::Uno::Action__Fuse_Controls_Panel__typeof(), ::app::Uno::Action__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof(), ::app::Uno::Func__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof(), ::app::Fuse::Layouts::Layout__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__SetLocalState, 0, false, ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof(), ::app::Fuse::Layouts::Layout__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout___ObjInit_1(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout___ObjInit_2(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Layouts::Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Get(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Layouts::Layout*, ::app::Fuse::Controls::Panel*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Layouts::Layout*>(res, ::app::Fuse::Layouts::Layout__typeof());
        }
    }
}

::app::Fuse::Layouts::Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__get_DefaultValue(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__HasValue(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__HasValueFor(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Panel__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Panel*>(owner, ::app::Fuse::Controls::Panel__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__IsEqual(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* value, ::app::Fuse::Layouts::Layout* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Layouts::Layout*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_1(::uStatic* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* inst = (StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout), StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_2(::uStatic* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* inst = (StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout), StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__OnChanged(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Panel*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Reset(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Layouts::Layout*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetFor(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Panel__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Panel*>((::uObject*)n, ::app::Fuse::Controls::Panel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyle(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyleFor(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Panel__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Panel*>((::uObject*)n, ::app::Fuse::Controls::Panel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Set(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner, ::app::Fuse::Layouts::Layout* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Layouts::Layout* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Layouts::Layout*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__SetLocalState(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__SetStyle(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner, ::app::Fuse::Layouts::Layout* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Layouts::Layout*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType* StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType), "Fuse.StyleProperty<Fuse.Controls.Panel,Fuse.Node>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Panel__Fuse_Node__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _changedCallback), ::app::Uno::Action__Fuse_Controls_Panel__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _defaultValue), ::app::Fuse::Node__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _getter), ::app::Uno::Func__Fuse_Controls_Panel__Fuse_Node__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _setter), ::app::Uno::Action__Fuse_Controls_Panel__Fuse_Node__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Panel__Fuse_Node__Get, 0, false, ::app::Fuse::Node__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Panel__Fuse_Node__get_DefaultValue, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Panel__Fuse_Node__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Panel__Fuse_Node__New_1, 0, true, StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Action__Fuse_Controls_Panel__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Panel__Fuse_Node__New_2, 0, true, StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Action__Fuse_Controls_Panel__typeof(), ::app::Uno::Action__Fuse_Controls_Panel__Fuse_Node__typeof(), ::app::Uno::Func__Fuse_Controls_Panel__Fuse_Node__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Panel__Fuse_Node__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Panel__Fuse_Node__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Panel__Fuse_Node__SetLocalState, 0, false, ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Panel__Fuse_Node__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Panel__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node___ObjInit_1(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node___ObjInit_2(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Node* StyleProperty__Fuse_Controls_Panel__Fuse_Node__Get(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Node*, ::app::Fuse::Controls::Panel*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Node*>(res, ::app::Fuse::Node__typeof());
        }
    }
}

::app::Fuse::Node* StyleProperty__Fuse_Controls_Panel__Fuse_Node__get_DefaultValue(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__HasValue(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__HasValueFor(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Panel__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Panel*>(owner, ::app::Fuse::Controls::Panel__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__IsEqual(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* value, ::app::Fuse::Node* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Node*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Panel__Fuse_Node* StyleProperty__Fuse_Controls_Panel__Fuse_Node__New_1(::uStatic* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Panel__Fuse_Node* inst = (StyleProperty__Fuse_Controls_Panel__Fuse_Node*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Node), StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Panel__Fuse_Node* StyleProperty__Fuse_Controls_Panel__Fuse_Node__New_2(::uStatic* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Panel__Fuse_Node* inst = (StyleProperty__Fuse_Controls_Panel__Fuse_Node*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Node), StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node__OnChanged(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Panel*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__Reset(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Node*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetFor(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Panel__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Panel*>((::uObject*)n, ::app::Fuse::Controls::Panel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetStyle(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetStyleFor(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Panel__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Panel*>((::uObject*)n, ::app::Fuse::Controls::Panel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__Set(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner, ::app::Fuse::Node* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Node* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Node*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node__SetLocalState(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__SetStyle(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner, ::app::Fuse::Node* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Node*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType), "Fuse.StyleProperty<Fuse.Controls.PlainTextEdit,Uno.UX.IFactory>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _changedCallback), ::app::Uno::Action__Fuse_Controls_PlainTextEdit__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _defaultValue), ::app::Uno::UX::IFactory__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _getter), ::app::Uno::Func__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _setter), ::app::Uno::Action__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Get, 0, false, ::app::Uno::UX::IFactory__typeof(), ::app::Fuse::Controls::PlainTextEdit__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__get_DefaultValue, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PlainTextEdit__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_1, 0, true, StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof(), ::app::Uno::UX::IFactory__typeof(), ::app::Uno::Action__Fuse_Controls_PlainTextEdit__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_2, 0, true, StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof(), ::app::Uno::UX::IFactory__typeof(), ::app::Uno::Action__Fuse_Controls_PlainTextEdit__typeof(), ::app::Uno::Action__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof(), ::app::Uno::Func__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PlainTextEdit__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PlainTextEdit__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PlainTextEdit__typeof(), ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__SetLocalState, 0, false, ::app::Fuse::Controls::PlainTextEdit__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::PlainTextEdit__typeof(), ::app::Uno::UX::IFactory__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory___ObjInit_1(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::uObject* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory___ObjInit_2(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::uObject* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::uObject* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Get(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*, ::app::Fuse::Controls::PlainTextEdit*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return (::uObject*)res;
        }
    }
}

::uObject* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__get_DefaultValue(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__HasValue(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__HasValueFor(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::PlainTextEdit__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::PlainTextEdit*>(owner, ::app::Fuse::Controls::PlainTextEdit__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__IsEqual(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::uObject* value, ::uObject* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uObject*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_1(::uStatic* __this, ::uObject* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* inst = (StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory), StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_2(::uStatic* __this, ::uObject* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* inst = (StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory), StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__OnChanged(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::PlainTextEdit*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Reset(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PlainTextEdit*, ::uObject*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetFor(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::PlainTextEdit__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::PlainTextEdit*>((::uObject*)n, ::app::Fuse::Controls::PlainTextEdit__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetStyle(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetStyleFor(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::PlainTextEdit__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::PlainTextEdit*>((::uObject*)n, ::app::Fuse::Controls::PlainTextEdit__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Set(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner, ::uObject* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uObject* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PlainTextEdit*, ::uObject*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__SetLocalState(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__SetStyle(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner, ::uObject* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PlainTextEdit*, ::uObject*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_RangeControl__double__uType* StyleProperty__Fuse_Controls_RangeControl__double__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_RangeControl__double__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_RangeControl__double__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_RangeControl__double__uType), "Fuse.StyleProperty<Fuse.Controls.RangeControl,double>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_RangeControl__double__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_RangeControl__double__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_RangeControl__double__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _changedCallback), ::app::Uno::Action__Fuse_Controls_RangeControl__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _defaultValue), ::app::Uno::Double__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _getter), ::app::Uno::Func__Fuse_Controls_RangeControl__double__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _setter), ::app::Uno::Action__Fuse_Controls_RangeControl__double__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_RangeControl__double__Get, 0, false, ::app::Uno::Double__typeof(), ::app::Fuse::Controls::RangeControl__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_RangeControl__double__get_DefaultValue, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_RangeControl__double__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::RangeControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_RangeControl__double__New_1, 0, true, StyleProperty__Fuse_Controls_RangeControl__double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Action__Fuse_Controls_RangeControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_RangeControl__double__New_2, 0, true, StyleProperty__Fuse_Controls_RangeControl__double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Action__Fuse_Controls_RangeControl__typeof(), ::app::Uno::Action__Fuse_Controls_RangeControl__double__typeof(), ::app::Uno::Func__Fuse_Controls_RangeControl__double__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_RangeControl__double__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::RangeControl__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_RangeControl__double__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::RangeControl__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_RangeControl__double__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::RangeControl__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_RangeControl__double__SetLocalState, 0, false, ::app::Fuse::Controls::RangeControl__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_RangeControl__double__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::RangeControl__typeof(), ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_RangeControl__double___ObjInit_1(StyleProperty__Fuse_Controls_RangeControl__double* __this, double defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_RangeControl__double___ObjInit_2(StyleProperty__Fuse_Controls_RangeControl__double* __this, double defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

double StyleProperty__Fuse_Controls_RangeControl__double__Get(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< double, ::app::Fuse::Controls::RangeControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< double>(::app::Uno::Double__typeof(), res);
        }
    }
}

double StyleProperty__Fuse_Controls_RangeControl__double__get_DefaultValue(StyleProperty__Fuse_Controls_RangeControl__double* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_RangeControl__double__HasValue(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_RangeControl__double__HasValueFor(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::RangeControl__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::RangeControl*>(owner, ::app::Fuse::Controls::RangeControl__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_RangeControl__double__IsEqual(StyleProperty__Fuse_Controls_RangeControl__double* __this, double value, double oldValue)
{
    if (::uBox(::app::Uno::Double__typeof(), value) == ::uBox(::app::Uno::Double__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Double__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Double__typeof(), value), ::uBox(::app::Uno::Double__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_RangeControl__double* StyleProperty__Fuse_Controls_RangeControl__double__New_1(::uStatic* __this, double defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_RangeControl__double* inst = (StyleProperty__Fuse_Controls_RangeControl__double*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_RangeControl__double), StyleProperty__Fuse_Controls_RangeControl__double__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_RangeControl__double* StyleProperty__Fuse_Controls_RangeControl__double__New_2(::uStatic* __this, double defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_RangeControl__double* inst = (StyleProperty__Fuse_Controls_RangeControl__double*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_RangeControl__double), StyleProperty__Fuse_Controls_RangeControl__double__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_RangeControl__double__OnChanged(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::RangeControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_RangeControl__double__Reset(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::RangeControl*, double>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_RangeControl__double__ResetFor(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::RangeControl__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::RangeControl*>((::uObject*)n, ::app::Fuse::Controls::RangeControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_RangeControl__double__ResetStyle(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_RangeControl__double__ResetStyleFor(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::RangeControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::RangeControl*>((::uObject*)n, ::app::Fuse::Controls::RangeControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_RangeControl__double__Set(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner, double value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    double oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::RangeControl*, double>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Double__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_RangeControl__double__SetLocalState(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_RangeControl__double__SetStyle(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner, double value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::RangeControl*, double>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Double__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Rectangle__float4__uType* StyleProperty__Fuse_Controls_Rectangle__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Rectangle__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Rectangle__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Rectangle__float4__uType), "Fuse.StyleProperty<Fuse.Controls.Rectangle,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Rectangle__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Rectangle__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Rectangle__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _changedCallback), ::app::Uno::Action__Fuse_Controls_Rectangle__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _getter), ::app::Uno::Func__Fuse_Controls_Rectangle__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _setter), ::app::Uno::Action__Fuse_Controls_Rectangle__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Rectangle__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::Controls::Rectangle__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Rectangle__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Rectangle__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Rectangle__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Rectangle__float4__New_1, 0, true, StyleProperty__Fuse_Controls_Rectangle__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_Rectangle__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Rectangle__float4__New_2, 0, true, StyleProperty__Fuse_Controls_Rectangle__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_Rectangle__typeof(), ::app::Uno::Action__Fuse_Controls_Rectangle__float4__typeof(), ::app::Uno::Func__Fuse_Controls_Rectangle__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Rectangle__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Rectangle__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Rectangle__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Rectangle__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Rectangle__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Rectangle__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Rectangle__float4__SetLocalState, 0, false, ::app::Fuse::Controls::Rectangle__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Rectangle__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Rectangle__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Rectangle__float4___ObjInit_1(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Rectangle__float4___ObjInit_2(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_Rectangle__float4__Get(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::Rectangle*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_Rectangle__float4__get_DefaultValue(StyleProperty__Fuse_Controls_Rectangle__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__HasValue(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__HasValueFor(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Rectangle__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Rectangle*>(owner, ::app::Fuse::Controls::Rectangle__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__IsEqual(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Rectangle__float4* StyleProperty__Fuse_Controls_Rectangle__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Rectangle__float4* inst = (StyleProperty__Fuse_Controls_Rectangle__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Rectangle__float4), StyleProperty__Fuse_Controls_Rectangle__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Rectangle__float4* StyleProperty__Fuse_Controls_Rectangle__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Rectangle__float4* inst = (StyleProperty__Fuse_Controls_Rectangle__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Rectangle__float4), StyleProperty__Fuse_Controls_Rectangle__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Rectangle__float4__OnChanged(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Rectangle*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__Reset(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Rectangle*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Rectangle__float4__ResetFor(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Rectangle__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Rectangle*>((::uObject*)n, ::app::Fuse::Controls::Rectangle__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__ResetStyle(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Rectangle__float4__ResetStyleFor(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Rectangle__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Rectangle*>((::uObject*)n, ::app::Fuse::Controls::Rectangle__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__Set(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Rectangle*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Rectangle__float4__SetLocalState(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__SetStyle(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Rectangle*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType), "Fuse.StyleProperty<Fuse.Controls.ScrollView,Fuse.Gestures.ScrollDirections>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _changedCallback), ::app::Uno::Action__Fuse_Controls_ScrollView__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _defaultValue), ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _getter), ::app::Uno::Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _setter), ::app::Uno::Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Get, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof(), ::app::Fuse::Controls::ScrollView__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__get_DefaultValue, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ScrollView__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_1, 0, true, StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof(), ::app::Fuse::Gestures::ScrollDirections__typeof(), ::app::Uno::Action__Fuse_Controls_ScrollView__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_2, 0, true, StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof(), ::app::Fuse::Gestures::ScrollDirections__typeof(), ::app::Uno::Action__Fuse_Controls_ScrollView__typeof(), ::app::Uno::Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof(), ::app::Uno::Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ScrollView__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ScrollView__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ScrollView__typeof(), ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__SetLocalState, 0, false, ::app::Fuse::Controls::ScrollView__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ScrollView__typeof(), ::app::Fuse::Gestures::ScrollDirections__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections___ObjInit_1(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections___ObjInit_2(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Get(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::ScrollView*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__get_DefaultValue(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__HasValue(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__HasValueFor(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::ScrollView__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::ScrollView*>(owner, ::app::Fuse::Controls::ScrollView__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__IsEqual(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value) == ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value), ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* inst = (StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections), StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* inst = (StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections), StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__OnChanged(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::ScrollView*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Reset(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ScrollView*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetFor(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::ScrollView__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::ScrollView*>((::uObject*)n, ::app::Fuse::Controls::ScrollView__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyle(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyleFor(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::ScrollView__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::ScrollView*>((::uObject*)n, ::app::Fuse::Controls::ScrollView__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Set(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ScrollView*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__SetLocalState(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__SetStyle(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ScrollView*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Shape__float__uType* StyleProperty__Fuse_Controls_Shape__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Shape__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Shape__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Shape__float__uType), "Fuse.StyleProperty<Fuse.Controls.Shape,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Shape__float__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__float__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Shape__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Shape__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Shape__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Shape__float, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__float, _changedCallback), ::app::Uno::Action__Fuse_Controls_Shape__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__float, _defaultValue), ::app::Uno::Float__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__float, _getter), ::app::Uno::Func__Fuse_Controls_Shape__float__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__float, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__float, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__float, _setter), ::app::Uno::Action__Fuse_Controls_Shape__float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Shape__float__Get, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Shape__float__get_DefaultValue, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Shape__float__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Shape__float__New_1, 0, true, StyleProperty__Fuse_Controls_Shape__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Shape__float__New_2, 0, true, StyleProperty__Fuse_Controls_Shape__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__float__typeof(), ::app::Uno::Func__Fuse_Controls_Shape__float__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Shape__float__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Shape__float__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Shape__float__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Shape__float__SetLocalState, 0, false, ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Shape__float__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Shape__float___ObjInit_1(StyleProperty__Fuse_Controls_Shape__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Shape__float___ObjInit_2(StyleProperty__Fuse_Controls_Shape__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Controls_Shape__float__Get(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::Shape*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

float StyleProperty__Fuse_Controls_Shape__float__get_DefaultValue(StyleProperty__Fuse_Controls_Shape__float* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Shape__float__HasValue(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Shape__float__HasValueFor(StyleProperty__Fuse_Controls_Shape__float* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Shape__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Shape*>(owner, ::app::Fuse::Controls::Shape__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Shape__float__IsEqual(StyleProperty__Fuse_Controls_Shape__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Shape__float* StyleProperty__Fuse_Controls_Shape__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Shape__float* inst = (StyleProperty__Fuse_Controls_Shape__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__float), StyleProperty__Fuse_Controls_Shape__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Shape__float* StyleProperty__Fuse_Controls_Shape__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Shape__float* inst = (StyleProperty__Fuse_Controls_Shape__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__float), StyleProperty__Fuse_Controls_Shape__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Shape__float__OnChanged(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Shape__float__Reset(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Shape__float__ResetFor(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Shape__float__ResetStyle(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Shape__float__ResetStyleFor(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Shape__float__Set(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Shape__float__SetLocalState(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Shape__float__SetStyle(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType), "Fuse.StyleProperty<Fuse.Controls.Shape,Fuse.Drawing.Brush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _changedCallback), ::app::Uno::Action__Fuse_Controls_Shape__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _defaultValue), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _getter), ::app::Uno::Func__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _setter), ::app::Uno::Action__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Get, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__get_DefaultValue, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_1, 0, true, StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_2, 0, true, StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof(), ::app::Uno::Func__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__SetLocalState, 0, false, ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof(), ::app::Fuse::Drawing::Brush__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush___ObjInit_1(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush___ObjInit_2(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Get(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Drawing::Brush*, ::app::Fuse::Controls::Shape*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Drawing::Brush*>(res, ::app::Fuse::Drawing::Brush__typeof());
        }
    }
}

::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__get_DefaultValue(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__HasValue(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__HasValueFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Shape__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Shape*>(owner, ::app::Fuse::Controls::Shape__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__IsEqual(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::app::Fuse::Drawing::Brush* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Drawing::Brush*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush), StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush), StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__OnChanged(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Reset(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, ::app::Fuse::Drawing::Brush*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyleFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Set(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Drawing::Brush* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, ::app::Fuse::Drawing::Brush*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__SetLocalState(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__SetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, ::app::Fuse::Drawing::Brush*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType), "Fuse.StyleProperty<Fuse.Controls.Shape,Fuse.Drawing.Stroke>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _changedCallback), ::app::Uno::Action__Fuse_Controls_Shape__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _defaultValue), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _getter), ::app::Uno::Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _setter), ::app::Uno::Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Get, 0, false, ::app::Fuse::Drawing::Stroke__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__get_DefaultValue, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__New_1, 0, true, StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__New_2, 0, true, StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__typeof(), ::app::Uno::Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof(), ::app::Uno::Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof(), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__SetLocalState, 0, false, ::app::Fuse::Controls::Shape__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::Shape__typeof(), ::app::Fuse::Drawing::Stroke__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke___ObjInit_1(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke___ObjInit_2(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Drawing::Stroke* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Get(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Drawing::Stroke*, ::app::Fuse::Controls::Shape*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Drawing::Stroke*>(res, ::app::Fuse::Drawing::Stroke__typeof());
        }
    }
}

::app::Fuse::Drawing::Stroke* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__get_DefaultValue(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__HasValue(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__HasValueFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::Shape__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::Shape*>(owner, ::app::Fuse::Controls::Shape__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__IsEqual(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* value, ::app::Fuse::Drawing::Stroke* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Drawing::Stroke*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* inst = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke), StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__New_2(::uStatic* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* inst = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke), StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__OnChanged(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Reset(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, ::app::Fuse::Drawing::Stroke*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyleFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Set(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner, ::app::Fuse::Drawing::Stroke* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Drawing::Stroke* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, ::app::Fuse::Drawing::Stroke*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__SetLocalState(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__SetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner, ::app::Fuse::Drawing::Stroke* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, ::app::Fuse::Drawing::Stroke*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_StackPanel__float__uType* StyleProperty__Fuse_Controls_StackPanel__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_StackPanel__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_StackPanel__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_StackPanel__float__uType), "Fuse.StyleProperty<Fuse.Controls.StackPanel,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_StackPanel__float__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_StackPanel__float__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_StackPanel__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _changedCallback), ::app::Uno::Action__Fuse_Controls_StackPanel__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _defaultValue), ::app::Uno::Float__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _getter), ::app::Uno::Func__Fuse_Controls_StackPanel__float__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _setter), ::app::Uno::Action__Fuse_Controls_StackPanel__float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_StackPanel__float__Get, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_StackPanel__float__get_DefaultValue, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_StackPanel__float__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_StackPanel__float__New_1, 0, true, StyleProperty__Fuse_Controls_StackPanel__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_StackPanel__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_StackPanel__float__New_2, 0, true, StyleProperty__Fuse_Controls_StackPanel__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_StackPanel__typeof(), ::app::Uno::Action__Fuse_Controls_StackPanel__float__typeof(), ::app::Uno::Func__Fuse_Controls_StackPanel__float__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_StackPanel__float__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_StackPanel__float__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_StackPanel__float__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_StackPanel__float__SetLocalState, 0, false, ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_StackPanel__float__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_StackPanel__float___ObjInit_1(StyleProperty__Fuse_Controls_StackPanel__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_StackPanel__float___ObjInit_2(StyleProperty__Fuse_Controls_StackPanel__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Controls_StackPanel__float__Get(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::StackPanel*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

float StyleProperty__Fuse_Controls_StackPanel__float__get_DefaultValue(StyleProperty__Fuse_Controls_StackPanel__float* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_StackPanel__float__HasValue(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_StackPanel__float__HasValueFor(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::StackPanel__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::StackPanel*>(owner, ::app::Fuse::Controls::StackPanel__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__float__IsEqual(StyleProperty__Fuse_Controls_StackPanel__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_StackPanel__float* StyleProperty__Fuse_Controls_StackPanel__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_StackPanel__float* inst = (StyleProperty__Fuse_Controls_StackPanel__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_StackPanel__float), StyleProperty__Fuse_Controls_StackPanel__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_StackPanel__float* StyleProperty__Fuse_Controls_StackPanel__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_StackPanel__float* inst = (StyleProperty__Fuse_Controls_StackPanel__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_StackPanel__float), StyleProperty__Fuse_Controls_StackPanel__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_StackPanel__float__OnChanged(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::StackPanel*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__float__Reset(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_StackPanel__float__ResetFor(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::StackPanel__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::StackPanel*>((::uObject*)n, ::app::Fuse::Controls::StackPanel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__float__ResetStyle(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_StackPanel__float__ResetStyleFor(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::StackPanel__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::StackPanel*>((::uObject*)n, ::app::Fuse::Controls::StackPanel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__float__Set(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_StackPanel__float__SetLocalState(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_StackPanel__float__SetStyle(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType* StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType), "Fuse.StyleProperty<Fuse.Controls.StackPanel,Fuse.Layouts.Orientation>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _changedCallback), ::app::Uno::Action__Fuse_Controls_StackPanel__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _defaultValue), ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _getter), ::app::Uno::Func__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _setter), ::app::Uno::Action__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Get, 0, false, ::app::Fuse::Layouts::Orientation__typeof(), ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__get_DefaultValue, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__New_1, 0, true, StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof(), ::app::Fuse::Layouts::Orientation__typeof(), ::app::Uno::Action__Fuse_Controls_StackPanel__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__New_2, 0, true, StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof(), ::app::Fuse::Layouts::Orientation__typeof(), ::app::Uno::Action__Fuse_Controls_StackPanel__typeof(), ::app::Uno::Action__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof(), ::app::Uno::Func__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof(), ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__SetLocalState, 0, false, ::app::Fuse::Controls::StackPanel__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::StackPanel__typeof(), ::app::Fuse::Layouts::Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation___ObjInit_1(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation___ObjInit_2(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Get(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::StackPanel*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Layouts::Orientation__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__get_DefaultValue(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__HasValue(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__HasValueFor(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::StackPanel__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::StackPanel*>(owner, ::app::Fuse::Controls::StackPanel__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__IsEqual(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value) == ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value), ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* inst = (StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation), StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* inst = (StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation), StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__OnChanged(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::StackPanel*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Reset(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetFor(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::StackPanel__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::StackPanel*>((::uObject*)n, ::app::Fuse::Controls::StackPanel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyle(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyleFor(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::StackPanel__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::StackPanel*>((::uObject*)n, ::app::Fuse::Controls::StackPanel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Set(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__SetLocalState(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__SetStyle(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__float__uType* StyleProperty__Fuse_Controls_TextControl__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__float__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextControl__float__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__float__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__float, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float, _defaultValue), ::app::Uno::Float__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float, _getter), ::app::Uno::Func__Fuse_Controls_TextControl__float__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float, _setter), ::app::Uno::Action__Fuse_Controls_TextControl__float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextControl__float__Get, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextControl__float__get_DefaultValue, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextControl__float__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__float__New_1, 0, true, StyleProperty__Fuse_Controls_TextControl__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__float__New_2, 0, true, StyleProperty__Fuse_Controls_TextControl__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__float__typeof(), ::app::Uno::Func__Fuse_Controls_TextControl__float__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextControl__float__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextControl__float__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextControl__float__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextControl__float__SetLocalState, 0, false, ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextControl__float__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextControl__float___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextControl__float___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Controls_TextControl__float__Get(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

float StyleProperty__Fuse_Controls_TextControl__float__get_DefaultValue(StyleProperty__Fuse_Controls_TextControl__float* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextControl__float__HasValue(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__float__HasValueFor(StyleProperty__Fuse_Controls_TextControl__float* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextControl__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextControl*>(owner, ::app::Fuse::Controls::TextControl__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float__IsEqual(StyleProperty__Fuse_Controls_TextControl__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextControl__float* StyleProperty__Fuse_Controls_TextControl__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__float* inst = (StyleProperty__Fuse_Controls_TextControl__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__float), StyleProperty__Fuse_Controls_TextControl__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextControl__float* StyleProperty__Fuse_Controls_TextControl__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextControl__float* inst = (StyleProperty__Fuse_Controls_TextControl__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__float), StyleProperty__Fuse_Controls_TextControl__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__float__OnChanged(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float__Reset(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__float__ResetFor(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float__ResetStyle(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__float__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float__Set(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__float__SetLocalState(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextControl__float__SetStyle(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__float4__uType* StyleProperty__Fuse_Controls_TextControl__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__float4__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextControl__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _getter), ::app::Uno::Func__Fuse_Controls_TextControl__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _setter), ::app::Uno::Action__Fuse_Controls_TextControl__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextControl__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextControl__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextControl__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__float4__New_1, 0, true, StyleProperty__Fuse_Controls_TextControl__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__float4__New_2, 0, true, StyleProperty__Fuse_Controls_TextControl__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__float4__typeof(), ::app::Uno::Func__Fuse_Controls_TextControl__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextControl__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextControl__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextControl__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextControl__float4__SetLocalState, 0, false, ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextControl__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextControl__float4___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextControl__float4___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_TextControl__float4__Get(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_TextControl__float4__get_DefaultValue(StyleProperty__Fuse_Controls_TextControl__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextControl__float4__HasValue(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__float4__HasValueFor(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextControl__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextControl*>(owner, ::app::Fuse::Controls::TextControl__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float4__IsEqual(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextControl__float4* StyleProperty__Fuse_Controls_TextControl__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__float4* inst = (StyleProperty__Fuse_Controls_TextControl__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__float4), StyleProperty__Fuse_Controls_TextControl__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextControl__float4* StyleProperty__Fuse_Controls_TextControl__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextControl__float4* inst = (StyleProperty__Fuse_Controls_TextControl__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__float4), StyleProperty__Fuse_Controls_TextControl__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__float4__OnChanged(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float4__Reset(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__float4__ResetFor(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float4__ResetStyle(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__float4__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float4__Set(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__float4__SetLocalState(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextControl__float4__SetStyle(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,Fuse.Elements.TextAlignment>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _defaultValue), ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _getter), ::app::Uno::Func__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _setter), ::app::Uno::Action__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Get, 0, false, ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__get_DefaultValue, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__New_1, 0, true, StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__New_2, 0, true, StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof(), ::app::Uno::Func__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__SetLocalState, 0, false, ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Fuse::Elements::TextAlignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::TextAlignment__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__get_DefaultValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__HasValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__HasValueFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextControl__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextControl*>(owner, ::app::Fuse::Controls::TextControl__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value), ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment), StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment), StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__SetLocalState(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__SetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,Fuse.Elements.TextWrapping>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _defaultValue), ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _getter), ::app::Uno::Func__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _setter), ::app::Uno::Action__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Get, 0, false, ::app::Fuse::Elements::TextWrapping__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__get_DefaultValue, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_1, 0, true, StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof(), ::app::Fuse::Elements::TextWrapping__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_2, 0, true, StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof(), ::app::Fuse::Elements::TextWrapping__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof(), ::app::Uno::Func__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__SetLocalState, 0, false, ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Fuse::Elements::TextWrapping__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::TextWrapping__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__get_DefaultValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__HasValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__HasValueFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextControl__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextControl*>(owner, ::app::Fuse::Controls::TextControl__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value), ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping), StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping), StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__SetLocalState(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__SetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,Fuse.Font>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextControl__Fuse_Font__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _defaultValue), ::app::Fuse::Font__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _getter), ::app::Uno::Func__Fuse_Controls_TextControl__Fuse_Font__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _setter), ::app::Uno::Action__Fuse_Controls_TextControl__Fuse_Font__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Get, 0, false, ::app::Fuse::Font__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__get_DefaultValue, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_1, 0, true, StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof(), ::app::Fuse::Font__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_2, 0, true, StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof(), ::app::Fuse::Font__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__Fuse_Font__typeof(), ::app::Uno::Func__Fuse_Controls_TextControl__Fuse_Font__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Fuse::Font__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetLocalState, 0, false, ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Fuse::Font__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Font*, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Font*>(res, ::app::Fuse::Font__typeof());
        }
    }
}

::app::Fuse::Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__get_DefaultValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__HasValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__HasValueFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextControl__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextControl*>(owner, ::app::Fuse::Controls::TextControl__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Font* value, ::app::Fuse::Font* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Font*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_1(::uStatic* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Font* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Font*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font), StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_2(::uStatic* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Font* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Font*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font), StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Fuse::Font*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Fuse::Font* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Font* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Fuse::Font*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetLocalState(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Fuse::Font* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Fuse::Font*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__string__uType* StyleProperty__Fuse_Controls_TextControl__string__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__string__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__string__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__string__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextControl__string__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__string__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__string__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__string, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__string, _defaultValue), ::app::Uno::String__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__string, _getter), ::app::Uno::Func__Fuse_Controls_TextControl__string__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__string, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__string, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextControl__string, _setter), ::app::Uno::Action__Fuse_Controls_TextControl__string__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextControl__string__Get, 0, false, ::app::Uno::String__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextControl__string__get_DefaultValue, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextControl__string__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__string__New_1, 0, true, StyleProperty__Fuse_Controls_TextControl__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextControl__string__New_2, 0, true, StyleProperty__Fuse_Controls_TextControl__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__typeof(), ::app::Uno::Action__Fuse_Controls_TextControl__string__typeof(), ::app::Uno::Func__Fuse_Controls_TextControl__string__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextControl__string__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextControl__string__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextControl__string__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextControl__string__SetLocalState, 0, false, ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextControl__string__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextControl__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextControl__string___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextControl__string___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::uString* StyleProperty__Fuse_Controls_TextControl__string__Get(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uString*, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::uString*>(res, ::app::Uno::String__typeof());
        }
    }
}

::uString* StyleProperty__Fuse_Controls_TextControl__string__get_DefaultValue(StyleProperty__Fuse_Controls_TextControl__string* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextControl__string__HasValue(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__string__HasValueFor(StyleProperty__Fuse_Controls_TextControl__string* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextControl__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextControl*>(owner, ::app::Fuse::Controls::TextControl__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextControl__string__IsEqual(StyleProperty__Fuse_Controls_TextControl__string* __this, ::uString* value, ::uString* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uString*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_TextControl__string* StyleProperty__Fuse_Controls_TextControl__string__New_1(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__string* inst = (StyleProperty__Fuse_Controls_TextControl__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__string), StyleProperty__Fuse_Controls_TextControl__string__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextControl__string* StyleProperty__Fuse_Controls_TextControl__string__New_2(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextControl__string* inst = (StyleProperty__Fuse_Controls_TextControl__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__string), StyleProperty__Fuse_Controls_TextControl__string__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__string__OnChanged(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__string__Reset(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::uString*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__string__ResetFor(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__string__ResetStyle(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__string__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__string__Set(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uString* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__string__SetLocalState(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextControl__string__SetStyle(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextInput__bool__uType* StyleProperty__Fuse_Controls_TextInput__bool__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextInput__bool__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextInput__bool__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextInput__bool__uType), "Fuse.StyleProperty<Fuse.Controls.TextInput,bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextInput__bool__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__bool__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__bool__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextInput__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _defaultValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _getter), ::app::Uno::Func__Fuse_Controls_TextInput__bool__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _setter), ::app::Uno::Action__Fuse_Controls_TextInput__bool__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextInput__bool__Get, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextInput__bool__get_DefaultValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextInput__bool__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextInput__bool__New_1, 0, true, StyleProperty__Fuse_Controls_TextInput__bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextInput__bool__New_2, 0, true, StyleProperty__Fuse_Controls_TextInput__bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__bool__typeof(), ::app::Uno::Func__Fuse_Controls_TextInput__bool__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextInput__bool__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextInput__bool__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextInput__bool__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextInput__bool__SetLocalState, 0, false, ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextInput__bool__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextInput__bool___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__bool* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextInput__bool___ObjInit_2(StyleProperty__Fuse_Controls_TextInput__bool* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

bool StyleProperty__Fuse_Controls_TextInput__bool__Get(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< bool, ::app::Fuse::Controls::TextInput*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< bool>(::app::Uno::Bool__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_TextInput__bool__get_DefaultValue(StyleProperty__Fuse_Controls_TextInput__bool* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextInput__bool__HasValue(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextInput__bool__HasValueFor(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextInput__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextInput*>(owner, ::app::Fuse::Controls::TextInput__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextInput__bool__IsEqual(StyleProperty__Fuse_Controls_TextInput__bool* __this, bool value, bool oldValue)
{
    if (::uBox(::app::Uno::Bool__typeof(), value) == ::uBox(::app::Uno::Bool__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Bool__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Bool__typeof(), value), ::uBox(::app::Uno::Bool__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextInput__bool* StyleProperty__Fuse_Controls_TextInput__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextInput__bool* inst = (StyleProperty__Fuse_Controls_TextInput__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__bool), StyleProperty__Fuse_Controls_TextInput__bool__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextInput__bool* StyleProperty__Fuse_Controls_TextInput__bool__New_2(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextInput__bool* inst = (StyleProperty__Fuse_Controls_TextInput__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__bool), StyleProperty__Fuse_Controls_TextInput__bool__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextInput__bool__OnChanged(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextInput*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextInput__bool__Reset(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, bool>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextInput__bool__ResetFor(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__bool__ResetStyle(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextInput__bool__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__bool__Set(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    bool oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextInput__bool__SetLocalState(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextInput__bool__SetStyle(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextInput__float4__uType* StyleProperty__Fuse_Controls_TextInput__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextInput__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextInput__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextInput__float4__uType), "Fuse.StyleProperty<Fuse.Controls.TextInput,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextInput__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextInput__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _getter), ::app::Uno::Func__Fuse_Controls_TextInput__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _setter), ::app::Uno::Action__Fuse_Controls_TextInput__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextInput__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextInput__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextInput__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextInput__float4__New_1, 0, true, StyleProperty__Fuse_Controls_TextInput__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextInput__float4__New_2, 0, true, StyleProperty__Fuse_Controls_TextInput__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__float4__typeof(), ::app::Uno::Func__Fuse_Controls_TextInput__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextInput__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextInput__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextInput__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextInput__float4__SetLocalState, 0, false, ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextInput__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextInput__float4___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextInput__float4___ObjInit_2(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_TextInput__float4__Get(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::TextInput*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_TextInput__float4__get_DefaultValue(StyleProperty__Fuse_Controls_TextInput__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextInput__float4__HasValue(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextInput__float4__HasValueFor(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextInput__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextInput*>(owner, ::app::Fuse::Controls::TextInput__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextInput__float4__IsEqual(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextInput__float4* StyleProperty__Fuse_Controls_TextInput__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextInput__float4* inst = (StyleProperty__Fuse_Controls_TextInput__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__float4), StyleProperty__Fuse_Controls_TextInput__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextInput__float4* StyleProperty__Fuse_Controls_TextInput__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextInput__float4* inst = (StyleProperty__Fuse_Controls_TextInput__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__float4), StyleProperty__Fuse_Controls_TextInput__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextInput__float4__OnChanged(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextInput*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextInput__float4__Reset(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextInput__float4__ResetFor(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__float4__ResetStyle(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextInput__float4__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__float4__Set(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextInput__float4__SetLocalState(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextInput__float4__SetStyle(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType), "Fuse.StyleProperty<Fuse.Controls.TextInput,Uno.Platform.TextInputHint>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _changedCallback), ::app::Uno::Action__Fuse_Controls_TextInput__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _defaultValue), ::app::Uno::Platform::TextInputHint__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _getter), ::app::Uno::Func__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _setter), ::app::Uno::Action__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Get, 0, false, ::app::Uno::Platform::TextInputHint__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__get_DefaultValue, 0, false, ::app::Uno::Platform::TextInputHint__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_1, 0, true, StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof(), ::app::Uno::Platform::TextInputHint__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_2, 0, true, StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof(), ::app::Uno::Platform::TextInputHint__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__typeof(), ::app::Uno::Action__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof(), ::app::Uno::Func__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof(), ::app::Uno::Platform::TextInputHint__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__SetLocalState, 0, false, ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextInput__typeof(), ::app::Uno::Platform::TextInputHint__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_2(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Get(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::TextInput*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Uno::Platform::TextInputHint__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__get_DefaultValue(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__HasValue(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__HasValueFor(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::TextInput__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::TextInput*>(owner, ::app::Fuse::Controls::TextInput__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__IsEqual(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value) == ::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value), ::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* inst = (StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint), StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* inst = (StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint), StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__OnChanged(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextInput*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Reset(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetFor(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyle(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Set(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__SetLocalState(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__SetStyle(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_ToggleControl__bool__uType* StyleProperty__Fuse_Controls_ToggleControl__bool__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_ToggleControl__bool__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_ToggleControl__bool__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_ToggleControl__bool__uType), "Fuse.StyleProperty<Fuse.Controls.ToggleControl,bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Controls_ToggleControl__bool__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_ToggleControl__bool__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_ToggleControl__bool__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _changedCallback), ::app::Uno::Action__Fuse_Controls_ToggleControl__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _defaultValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _getter), ::app::Uno::Func__Fuse_Controls_ToggleControl__bool__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _setter), ::app::Uno::Action__Fuse_Controls_ToggleControl__bool__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Controls_ToggleControl__bool__Get, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ToggleControl__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Controls_ToggleControl__bool__get_DefaultValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Controls_ToggleControl__bool__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ToggleControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_ToggleControl__bool__New_1, 0, true, StyleProperty__Fuse_Controls_ToggleControl__bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Controls_ToggleControl__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Controls_ToggleControl__bool__New_2, 0, true, StyleProperty__Fuse_Controls_ToggleControl__bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Controls_ToggleControl__typeof(), ::app::Uno::Action__Fuse_Controls_ToggleControl__bool__typeof(), ::app::Uno::Func__Fuse_Controls_ToggleControl__bool__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Controls_ToggleControl__bool__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ToggleControl__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Controls_ToggleControl__bool__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ToggleControl__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Controls_ToggleControl__bool__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ToggleControl__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Controls_ToggleControl__bool__SetLocalState, 0, false, ::app::Fuse::Controls::ToggleControl__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Controls_ToggleControl__bool__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::ToggleControl__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool___ObjInit_1(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool___ObjInit_2(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__Get(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< bool, ::app::Fuse::Controls::ToggleControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< bool>(::app::Uno::Bool__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__get_DefaultValue(StyleProperty__Fuse_Controls_ToggleControl__bool* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__HasValue(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__HasValueFor(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Controls::ToggleControl__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Controls::ToggleControl*>(owner, ::app::Fuse::Controls::ToggleControl__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__IsEqual(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, bool value, bool oldValue)
{
    if (::uBox(::app::Uno::Bool__typeof(), value) == ::uBox(::app::Uno::Bool__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Bool__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Bool__typeof(), value), ::uBox(::app::Uno::Bool__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_ToggleControl__bool* StyleProperty__Fuse_Controls_ToggleControl__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_ToggleControl__bool* inst = (StyleProperty__Fuse_Controls_ToggleControl__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_ToggleControl__bool), StyleProperty__Fuse_Controls_ToggleControl__bool__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_ToggleControl__bool* StyleProperty__Fuse_Controls_ToggleControl__bool__New_2(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_ToggleControl__bool* inst = (StyleProperty__Fuse_Controls_ToggleControl__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_ToggleControl__bool), StyleProperty__Fuse_Controls_ToggleControl__bool__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool__OnChanged(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::ToggleControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__Reset(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ToggleControl*, bool>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool__ResetFor(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::ToggleControl__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Controls::ToggleControl*>((::uObject*)n, ::app::Fuse::Controls::ToggleControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__ResetStyle(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_ToggleControl__bool__ResetStyleFor(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::ToggleControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::ToggleControl*>((::uObject*)n, ::app::Fuse::Controls::ToggleControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__Set(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    bool oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ToggleControl*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool__SetLocalState(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__SetStyle(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ToggleControl*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__bool__uType* StyleProperty__Fuse_Elements_Element__bool__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__bool__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__bool__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__bool__uType), "Fuse.StyleProperty<Fuse.Elements.Element,bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Elements_Element__bool__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__bool__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__bool__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__bool, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__bool, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__bool, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__bool, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Elements_Element__bool, _changedCallback), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Elements_Element__bool, _defaultValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__bool, _getter), ::app::Uno::Func__Fuse_Elements_Element__bool__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Elements_Element__bool, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Elements_Element__bool, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__bool, _setter), ::app::Uno::Action__Fuse_Elements_Element__bool__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Elements_Element__bool__Get, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Elements_Element__bool__get_DefaultValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Elements_Element__bool__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__bool__New_1, 0, true, StyleProperty__Fuse_Elements_Element__bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__bool__New_2, 0, true, StyleProperty__Fuse_Elements_Element__bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__bool__typeof(), ::app::Uno::Func__Fuse_Elements_Element__bool__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Elements_Element__bool__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Elements_Element__bool__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Elements_Element__bool__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Elements_Element__bool__SetLocalState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Elements_Element__bool__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Elements_Element__bool___ObjInit_1(StyleProperty__Fuse_Elements_Element__bool* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__bool___ObjInit_2(StyleProperty__Fuse_Elements_Element__bool* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

bool StyleProperty__Fuse_Elements_Element__bool__Get(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< bool, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< bool>(::app::Uno::Bool__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__bool__get_DefaultValue(StyleProperty__Fuse_Elements_Element__bool* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Elements_Element__bool__HasValue(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__bool__HasValueFor(StyleProperty__Fuse_Elements_Element__bool* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Elements::Element__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Elements::Element*>(owner, ::app::Fuse::Elements::Element__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Elements_Element__bool__IsEqual(StyleProperty__Fuse_Elements_Element__bool* __this, bool value, bool oldValue)
{
    if (::uBox(::app::Uno::Bool__typeof(), value) == ::uBox(::app::Uno::Bool__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Bool__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Bool__typeof(), value), ::uBox(::app::Uno::Bool__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__bool* StyleProperty__Fuse_Elements_Element__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__bool* inst = (StyleProperty__Fuse_Elements_Element__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__bool), StyleProperty__Fuse_Elements_Element__bool__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Elements_Element__bool* StyleProperty__Fuse_Elements_Element__bool__New_2(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__bool* inst = (StyleProperty__Fuse_Elements_Element__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__bool), StyleProperty__Fuse_Elements_Element__bool__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__bool__OnChanged(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__bool__Reset(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, bool>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__bool__ResetFor(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__bool__ResetStyle(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__bool__ResetStyleFor(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__bool__Set(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    bool oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__bool__SetLocalState(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Elements_Element__bool__SetStyle(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__float__uType* StyleProperty__Fuse_Elements_Element__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__float__uType), "Fuse.StyleProperty<Fuse.Elements.Element,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Elements_Element__float__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__float, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float, _changedCallback), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float, _defaultValue), ::app::Uno::Float__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float, _getter), ::app::Uno::Func__Fuse_Elements_Element__float__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float, _setter), ::app::Uno::Action__Fuse_Elements_Element__float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Elements_Element__float__Get, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Elements_Element__float__get_DefaultValue, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Elements_Element__float__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__float__New_1, 0, true, StyleProperty__Fuse_Elements_Element__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__float__New_2, 0, true, StyleProperty__Fuse_Elements_Element__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__float__typeof(), ::app::Uno::Func__Fuse_Elements_Element__float__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Elements_Element__float__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Elements_Element__float__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Elements_Element__float__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Elements_Element__float__SetLocalState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Elements_Element__float__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Elements_Element__float___ObjInit_1(StyleProperty__Fuse_Elements_Element__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__float___ObjInit_2(StyleProperty__Fuse_Elements_Element__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Elements_Element__float__Get(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

float StyleProperty__Fuse_Elements_Element__float__get_DefaultValue(StyleProperty__Fuse_Elements_Element__float* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Elements_Element__float__HasValue(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__float__HasValueFor(StyleProperty__Fuse_Elements_Element__float* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Elements::Element__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Elements::Element*>(owner, ::app::Fuse::Elements::Element__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Elements_Element__float__IsEqual(StyleProperty__Fuse_Elements_Element__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__float* StyleProperty__Fuse_Elements_Element__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__float* inst = (StyleProperty__Fuse_Elements_Element__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__float), StyleProperty__Fuse_Elements_Element__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Elements_Element__float* StyleProperty__Fuse_Elements_Element__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__float* inst = (StyleProperty__Fuse_Elements_Element__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__float), StyleProperty__Fuse_Elements_Element__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__float__OnChanged(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__float__Reset(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__float__ResetFor(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float__ResetStyle(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__float__ResetStyleFor(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float__Set(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__float__SetLocalState(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Elements_Element__float__SetStyle(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__float2__uType* StyleProperty__Fuse_Elements_Element__float2__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__float2__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__float2__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__float2__uType), "Fuse.StyleProperty<Fuse.Elements.Element,float2>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Elements_Element__float2__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float2__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float2__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__float2, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__float2, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__float2, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__float2, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float2, _changedCallback), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float2, _defaultValue), ::app::Uno::Float2__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float2, _getter), ::app::Uno::Func__Fuse_Elements_Element__float2__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float2, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float2, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float2, _setter), ::app::Uno::Action__Fuse_Elements_Element__float2__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Elements_Element__float2__Get, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Elements_Element__float2__get_DefaultValue, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Elements_Element__float2__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__float2__New_1, 0, true, StyleProperty__Fuse_Elements_Element__float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__float2__New_2, 0, true, StyleProperty__Fuse_Elements_Element__float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__float2__typeof(), ::app::Uno::Func__Fuse_Elements_Element__float2__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Elements_Element__float2__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Elements_Element__float2__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Elements_Element__float2__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Elements_Element__float2__SetLocalState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Elements_Element__float2__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Elements_Element__float2___ObjInit_1(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__float2___ObjInit_2(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float2 StyleProperty__Fuse_Elements_Element__float2__Get(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float2, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float2>(::app::Uno::Float2__typeof(), res);
        }
    }
}

::app::Uno::Float2 StyleProperty__Fuse_Elements_Element__float2__get_DefaultValue(StyleProperty__Fuse_Elements_Element__float2* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Elements_Element__float2__HasValue(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__float2__HasValueFor(StyleProperty__Fuse_Elements_Element__float2* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Elements::Element__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Elements::Element*>(owner, ::app::Fuse::Elements::Element__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Elements_Element__float2__IsEqual(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 value, ::app::Uno::Float2 oldValue)
{
    if (::uBox(::app::Uno::Float2__typeof(), value) == ::uBox(::app::Uno::Float2__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float2__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float2__typeof(), value), ::uBox(::app::Uno::Float2__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__float2* StyleProperty__Fuse_Elements_Element__float2__New_1(::uStatic* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__float2* inst = (StyleProperty__Fuse_Elements_Element__float2*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__float2), StyleProperty__Fuse_Elements_Element__float2__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Elements_Element__float2* StyleProperty__Fuse_Elements_Element__float2__New_2(::uStatic* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__float2* inst = (StyleProperty__Fuse_Elements_Element__float2*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__float2), StyleProperty__Fuse_Elements_Element__float2__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__float2__OnChanged(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__float2__Reset(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float2>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__float2__ResetFor(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float2__ResetStyle(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__float2__ResetStyleFor(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float2__Set(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float2 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float2>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float2__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__float2__SetLocalState(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Elements_Element__float2__SetStyle(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float2>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float2__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__float4__uType* StyleProperty__Fuse_Elements_Element__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__float4__uType), "Fuse.StyleProperty<Fuse.Elements.Element,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Elements_Element__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float4, _changedCallback), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float4, _getter), ::app::Uno::Func__Fuse_Elements_Element__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__float4, _setter), ::app::Uno::Action__Fuse_Elements_Element__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Elements_Element__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Elements_Element__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Elements_Element__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__float4__New_1, 0, true, StyleProperty__Fuse_Elements_Element__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__float4__New_2, 0, true, StyleProperty__Fuse_Elements_Element__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__float4__typeof(), ::app::Uno::Func__Fuse_Elements_Element__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Elements_Element__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Elements_Element__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Elements_Element__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Elements_Element__float4__SetLocalState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Elements_Element__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Elements_Element__float4___ObjInit_1(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__float4___ObjInit_2(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_Elements_Element__float4__Get(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_Elements_Element__float4__get_DefaultValue(StyleProperty__Fuse_Elements_Element__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Elements_Element__float4__HasValue(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__float4__HasValueFor(StyleProperty__Fuse_Elements_Element__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Elements::Element__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Elements::Element*>(owner, ::app::Fuse::Elements::Element__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Elements_Element__float4__IsEqual(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__float4* StyleProperty__Fuse_Elements_Element__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__float4* inst = (StyleProperty__Fuse_Elements_Element__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__float4), StyleProperty__Fuse_Elements_Element__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Elements_Element__float4* StyleProperty__Fuse_Elements_Element__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__float4* inst = (StyleProperty__Fuse_Elements_Element__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__float4), StyleProperty__Fuse_Elements_Element__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__float4__OnChanged(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__float4__Reset(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__float4__ResetFor(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float4__ResetStyle(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__float4__ResetStyleFor(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float4__Set(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__float4__SetLocalState(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Elements_Element__float4__SetStyle(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType), "Fuse.StyleProperty<Fuse.Elements.Element,Fuse.Elements.Alignment>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _changedCallback), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _defaultValue), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _getter), ::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _setter), ::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Get, 0, false, ::app::Fuse::Elements::Alignment__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__get_DefaultValue, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__New_1, 0, true, StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof(), ::app::Fuse::Elements::Alignment__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__New_2, 0, true, StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof(), ::app::Fuse::Elements::Alignment__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof(), ::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__SetLocalState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::Alignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment___ObjInit_2(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__get_DefaultValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__HasValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__HasValueFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Elements::Element__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Elements::Element*>(owner, ::app::Fuse::Elements::Element__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value), ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment), StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment), StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__SetLocalState(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__SetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType), "Fuse.StyleProperty<Fuse.Elements.Element,Fuse.Elements.CachingMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _changedCallback), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _defaultValue), ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _getter), ::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _setter), ::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Get, 0, false, ::app::Fuse::Elements::CachingMode__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__get_DefaultValue, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__New_1, 0, true, StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof(), ::app::Fuse::Elements::CachingMode__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__New_2, 0, true, StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof(), ::app::Fuse::Elements::CachingMode__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof(), ::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__SetLocalState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::CachingMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode___ObjInit_2(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::CachingMode__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__get_DefaultValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__HasValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__HasValueFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Elements::Element__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Elements::Element*>(owner, ::app::Fuse::Elements::Element__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value), ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode), StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode), StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__SetLocalState(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__SetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType), "Fuse.StyleProperty<Fuse.Elements.Element,Fuse.Elements.HitTestMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _changedCallback), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _defaultValue), ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _getter), ::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _setter), ::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Get, 0, false, ::app::Fuse::Elements::HitTestMode__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__get_DefaultValue, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__New_1, 0, true, StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof(), ::app::Fuse::Elements::HitTestMode__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__New_2, 0, true, StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof(), ::app::Fuse::Elements::HitTestMode__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof(), ::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__SetLocalState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::HitTestMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode___ObjInit_2(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::HitTestMode__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__get_DefaultValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__HasValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__HasValueFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Elements::Element__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Elements::Element*>(owner, ::app::Fuse::Elements::Element__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value), ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode), StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode), StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__SetLocalState(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__SetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType), "Fuse.StyleProperty<Fuse.Elements.Element,Fuse.Elements.Visibility>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _changedCallback), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _defaultValue), ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _getter), ::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _setter), ::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Get, 0, false, ::app::Fuse::Elements::Visibility__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__get_DefaultValue, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__New_1, 0, true, StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof(), ::app::Fuse::Elements::Visibility__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__New_2, 0, true, StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof(), ::app::Fuse::Elements::Visibility__typeof(), ::app::Uno::Action__Fuse_Elements_Element__typeof(), ::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof(), ::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__SetLocalState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::Visibility__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility___ObjInit_2(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), res);
        }
    }
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__get_DefaultValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__HasValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__HasValueFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Elements::Element__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Elements::Element*>(owner, ::app::Fuse::Elements::Element__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value), ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility), StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility), StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__SetLocalState(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__SetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_iOS_Controls_Button__float4__uType* StyleProperty__Fuse_iOS_Controls_Button__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_iOS_Controls_Button__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_iOS_Controls_Button__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_iOS_Controls_Button__float4__uType), "Fuse.StyleProperty<Fuse.iOS.Controls.Button,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_iOS_Controls_Button__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_iOS_Controls_Button__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_iOS_Controls_Button__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _changedCallback), ::app::Uno::Action__Fuse_iOS_Controls_Button__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _getter), ::app::Uno::Func__Fuse_iOS_Controls_Button__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_iOS_Controls_Button__float4, _setter), ::app::Uno::Action__Fuse_iOS_Controls_Button__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_iOS_Controls_Button__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::iOS::Controls::Button__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_iOS_Controls_Button__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_iOS_Controls_Button__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::iOS::Controls::Button__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_iOS_Controls_Button__float4__New_1, 0, true, StyleProperty__Fuse_iOS_Controls_Button__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_iOS_Controls_Button__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_iOS_Controls_Button__float4__New_2, 0, true, StyleProperty__Fuse_iOS_Controls_Button__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_iOS_Controls_Button__typeof(), ::app::Uno::Action__Fuse_iOS_Controls_Button__float4__typeof(), ::app::Uno::Func__Fuse_iOS_Controls_Button__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_iOS_Controls_Button__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::iOS::Controls::Button__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_iOS_Controls_Button__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::iOS::Controls::Button__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_iOS_Controls_Button__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::iOS::Controls::Button__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_iOS_Controls_Button__float4__SetLocalState, 0, false, ::app::Fuse::iOS::Controls::Button__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_iOS_Controls_Button__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::iOS::Controls::Button__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_iOS_Controls_Button__float4___ObjInit_1(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_iOS_Controls_Button__float4___ObjInit_2(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_iOS_Controls_Button__float4__Get(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::iOS::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::iOS::Controls::Button*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_iOS_Controls_Button__float4__get_DefaultValue(StyleProperty__Fuse_iOS_Controls_Button__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_iOS_Controls_Button__float4__HasValue(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::iOS::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_iOS_Controls_Button__float4__HasValueFor(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::iOS::Controls::Button__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::iOS::Controls::Button*>(owner, ::app::Fuse::iOS::Controls::Button__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_iOS_Controls_Button__float4__IsEqual(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_iOS_Controls_Button__float4* StyleProperty__Fuse_iOS_Controls_Button__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_iOS_Controls_Button__float4* inst = (StyleProperty__Fuse_iOS_Controls_Button__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_iOS_Controls_Button__float4), StyleProperty__Fuse_iOS_Controls_Button__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_iOS_Controls_Button__float4* StyleProperty__Fuse_iOS_Controls_Button__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_iOS_Controls_Button__float4* inst = (StyleProperty__Fuse_iOS_Controls_Button__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_iOS_Controls_Button__float4), StyleProperty__Fuse_iOS_Controls_Button__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_iOS_Controls_Button__float4__OnChanged(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::iOS::Controls::Button* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::iOS::Controls::Button*>(owner);
    }
}

bool StyleProperty__Fuse_iOS_Controls_Button__float4__Reset(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::iOS::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::iOS::Controls::Button*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_iOS_Controls_Button__float4__ResetFor(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::iOS::Controls::Button__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::iOS::Controls::Button*>((::uObject*)n, ::app::Fuse::iOS::Controls::Button__typeof()));
    }
}

bool StyleProperty__Fuse_iOS_Controls_Button__float4__ResetStyle(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::iOS::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_iOS_Controls_Button__float4__ResetStyleFor(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::iOS::Controls::Button__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::iOS::Controls::Button*>((::uObject*)n, ::app::Fuse::iOS::Controls::Button__typeof()));
    }
}

bool StyleProperty__Fuse_iOS_Controls_Button__float4__Set(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::iOS::Controls::Button* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::iOS::Controls::Button*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_iOS_Controls_Button__float4__SetLocalState(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::iOS::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_iOS_Controls_Button__float4__SetStyle(StyleProperty__Fuse_iOS_Controls_Button__float4* __this, ::app::Fuse::iOS::Controls::Button* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::iOS::Controls::Button*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Node__bool__uType* StyleProperty__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Node__bool__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Node__bool__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Node__bool__uType), "Fuse.StyleProperty<Fuse.Node,bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Node__bool__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__bool__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__bool__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Node__bool, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Node__bool, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Node__bool, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Node__bool, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Node__bool, _changedCallback), ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Node__bool, _defaultValue), ::app::Uno::Bool__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Node__bool, _getter), ::app::Uno::Func__Fuse_Node__bool__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Node__bool, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Node__bool, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Node__bool, _setter), ::app::Uno::Action__Fuse_Node__bool__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Node__bool__Get, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Node__bool__get_DefaultValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Node__bool__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Node__bool__New_1, 0, true, StyleProperty__Fuse_Node__bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Node__bool__New_2, 0, true, StyleProperty__Fuse_Node__bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Node__typeof(), ::app::Uno::Action__Fuse_Node__bool__typeof(), ::app::Uno::Func__Fuse_Node__bool__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Node__bool__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Node__bool__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Node__bool__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Node__bool__SetLocalState, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Node__bool__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Node__bool___ObjInit_1(StyleProperty__Fuse_Node__bool* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Node__bool___ObjInit_2(StyleProperty__Fuse_Node__bool* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

bool StyleProperty__Fuse_Node__bool__Get(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< bool, ::app::Fuse::Node*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< bool>(::app::Uno::Bool__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Node__bool__get_DefaultValue(StyleProperty__Fuse_Node__bool* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Node__bool__HasValue(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Node__bool__HasValueFor(StyleProperty__Fuse_Node__bool* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Node__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Node*>(owner, ::app::Fuse::Node__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Node__bool__IsEqual(StyleProperty__Fuse_Node__bool* __this, bool value, bool oldValue)
{
    if (::uBox(::app::Uno::Bool__typeof(), value) == ::uBox(::app::Uno::Bool__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Bool__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Bool__typeof(), value), ::uBox(::app::Uno::Bool__typeof(), oldValue));
}

StyleProperty__Fuse_Node__bool* StyleProperty__Fuse_Node__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Node__bool* inst = (StyleProperty__Fuse_Node__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__bool), StyleProperty__Fuse_Node__bool__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Node__bool* StyleProperty__Fuse_Node__bool__New_2(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Node__bool* inst = (StyleProperty__Fuse_Node__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__bool), StyleProperty__Fuse_Node__bool__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Node__bool__OnChanged(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Node*>(owner);
    }
}

bool StyleProperty__Fuse_Node__bool__Reset(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, bool>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Node__bool__ResetFor(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__bool__ResetStyle(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Node__bool__ResetStyleFor(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__bool__Set(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    bool oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Node__bool__SetLocalState(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Node__bool__SetStyle(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Node__Fuse_Node__uType* StyleProperty__Fuse_Node__Fuse_Node__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Node__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Node__Fuse_Node__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Node__Fuse_Node__uType), "Fuse.StyleProperty<Fuse.Node,Fuse.Node>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Node__Fuse_Node__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__Fuse_Node__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__Fuse_Node__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Node__Fuse_Node, _changedCallback), ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Node__Fuse_Node, _defaultValue), ::app::Fuse::Node__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Node__Fuse_Node, _getter), ::app::Uno::Func__Fuse_Node__Fuse_Node__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Node__Fuse_Node, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Node__Fuse_Node, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Node__Fuse_Node, _setter), ::app::Uno::Action__Fuse_Node__Fuse_Node__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Node__Fuse_Node__Get, 0, false, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Node__Fuse_Node__get_DefaultValue, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Node__Fuse_Node__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Node__Fuse_Node__New_1, 0, true, StyleProperty__Fuse_Node__Fuse_Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Node__Fuse_Node__New_2, 0, true, StyleProperty__Fuse_Node__Fuse_Node__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Action__Fuse_Node__typeof(), ::app::Uno::Action__Fuse_Node__Fuse_Node__typeof(), ::app::Uno::Func__Fuse_Node__Fuse_Node__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Node__Fuse_Node__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Node__Fuse_Node__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Node__Fuse_Node__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Node__Fuse_Node__SetLocalState, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Node__Fuse_Node__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Node__Fuse_Node___ObjInit_1(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Node__Fuse_Node___ObjInit_2(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Node* StyleProperty__Fuse_Node__Fuse_Node__Get(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Node*, ::app::Fuse::Node*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Node*>(res, ::app::Fuse::Node__typeof());
        }
    }
}

::app::Fuse::Node* StyleProperty__Fuse_Node__Fuse_Node__get_DefaultValue(StyleProperty__Fuse_Node__Fuse_Node* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Node__Fuse_Node__HasValue(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Node__Fuse_Node__HasValueFor(StyleProperty__Fuse_Node__Fuse_Node* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Node__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Node*>(owner, ::app::Fuse::Node__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Node__Fuse_Node__IsEqual(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* value, ::app::Fuse::Node* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Node*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Node__Fuse_Node* StyleProperty__Fuse_Node__Fuse_Node__New_1(::uStatic* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Node__Fuse_Node* inst = (StyleProperty__Fuse_Node__Fuse_Node*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__Fuse_Node), StyleProperty__Fuse_Node__Fuse_Node__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Node__Fuse_Node* StyleProperty__Fuse_Node__Fuse_Node__New_2(::uStatic* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Node__Fuse_Node* inst = (StyleProperty__Fuse_Node__Fuse_Node*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__Fuse_Node), StyleProperty__Fuse_Node__Fuse_Node__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Node__Fuse_Node__OnChanged(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Node*>(owner);
    }
}

bool StyleProperty__Fuse_Node__Fuse_Node__Reset(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::app::Fuse::Node*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Node__Fuse_Node__ResetFor(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__Fuse_Node__ResetStyle(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Node__Fuse_Node__ResetStyleFor(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__Fuse_Node__Set(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner, ::app::Fuse::Node* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Node* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::app::Fuse::Node*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Node__Fuse_Node__SetLocalState(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Node__Fuse_Node__SetStyle(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner, ::app::Fuse::Node* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::app::Fuse::Node*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Node__string__uType* StyleProperty__Fuse_Node__string__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Node__string__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Node__string__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Node__string__uType), "Fuse.StyleProperty<Fuse.Node,string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Node__string__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__string__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__string__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Node__string, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Node__string, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Node__string, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Node__string, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Node__string, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Node__string, _changedCallback), ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Node__string, _defaultValue), ::app::Uno::String__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Node__string, _getter), ::app::Uno::Func__Fuse_Node__string__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Node__string, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Node__string, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Node__string, _setter), ::app::Uno::Action__Fuse_Node__string__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Node__string__Get, 0, false, ::app::Uno::String__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Node__string__get_DefaultValue, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Node__string__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Node__string__New_1, 0, true, StyleProperty__Fuse_Node__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Node__string__New_2, 0, true, StyleProperty__Fuse_Node__string__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Action__Fuse_Node__typeof(), ::app::Uno::Action__Fuse_Node__string__typeof(), ::app::Uno::Func__Fuse_Node__string__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Node__string__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Node__string__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Node__string__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Node__string__SetLocalState, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Node__string__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Node__string___ObjInit_1(StyleProperty__Fuse_Node__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Node__string___ObjInit_2(StyleProperty__Fuse_Node__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::uString* StyleProperty__Fuse_Node__string__Get(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uString*, ::app::Fuse::Node*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::uString*>(res, ::app::Uno::String__typeof());
        }
    }
}

::uString* StyleProperty__Fuse_Node__string__get_DefaultValue(StyleProperty__Fuse_Node__string* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Node__string__HasValue(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Node__string__HasValueFor(StyleProperty__Fuse_Node__string* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Node__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Node*>(owner, ::app::Fuse::Node__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Node__string__IsEqual(StyleProperty__Fuse_Node__string* __this, ::uString* value, ::uString* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uString*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Node__string* StyleProperty__Fuse_Node__string__New_1(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Node__string* inst = (StyleProperty__Fuse_Node__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__string), StyleProperty__Fuse_Node__string__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Node__string* StyleProperty__Fuse_Node__string__New_2(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Node__string* inst = (StyleProperty__Fuse_Node__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__string), StyleProperty__Fuse_Node__string__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Node__string__OnChanged(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Node*>(owner);
    }
}

bool StyleProperty__Fuse_Node__string__Reset(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::uString*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Node__string__ResetFor(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__string__ResetStyle(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Node__string__ResetStyleFor(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__string__Set(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uString* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Node__string__SetLocalState(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Node__string__SetStyle(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Shapes_Rectangle__float4__uType* StyleProperty__Fuse_Shapes_Rectangle__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Shapes_Rectangle__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Shapes_Rectangle__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Shapes_Rectangle__float4__uType), "Fuse.StyleProperty<Fuse.Shapes.Rectangle,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Shapes_Rectangle__float4__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Rectangle__float4__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Rectangle__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _changedCallback), ::app::Uno::Action__Fuse_Shapes_Rectangle__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _defaultValue), ::app::Uno::Float4__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _getter), ::app::Uno::Func__Fuse_Shapes_Rectangle__float4__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _setter), ::app::Uno::Action__Fuse_Shapes_Rectangle__float4__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Shapes_Rectangle__float4__Get, 0, false, ::app::Uno::Float4__typeof(), ::app::Fuse::Shapes::Rectangle__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Shapes_Rectangle__float4__get_DefaultValue, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Shapes_Rectangle__float4__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Rectangle__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Shapes_Rectangle__float4__New_1, 0, true, StyleProperty__Fuse_Shapes_Rectangle__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Shapes_Rectangle__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Shapes_Rectangle__float4__New_2, 0, true, StyleProperty__Fuse_Shapes_Rectangle__float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Action__Fuse_Shapes_Rectangle__typeof(), ::app::Uno::Action__Fuse_Shapes_Rectangle__float4__typeof(), ::app::Uno::Func__Fuse_Shapes_Rectangle__float4__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Shapes_Rectangle__float4__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Rectangle__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Shapes_Rectangle__float4__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Rectangle__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Shapes_Rectangle__float4__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Rectangle__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Shapes_Rectangle__float4__SetLocalState, 0, false, ::app::Fuse::Shapes::Rectangle__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Shapes_Rectangle__float4__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Rectangle__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Shapes_Rectangle__float4___ObjInit_1(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Shapes_Rectangle__float4___ObjInit_2(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float4 StyleProperty__Fuse_Shapes_Rectangle__float4__Get(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Shapes::Rectangle*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

::app::Uno::Float4 StyleProperty__Fuse_Shapes_Rectangle__float4__get_DefaultValue(StyleProperty__Fuse_Shapes_Rectangle__float4* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__HasValue(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__HasValueFor(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Shapes::Rectangle__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Shapes::Rectangle*>(owner, ::app::Fuse::Shapes::Rectangle__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__IsEqual(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Shapes_Rectangle__float4* StyleProperty__Fuse_Shapes_Rectangle__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Shapes_Rectangle__float4* inst = (StyleProperty__Fuse_Shapes_Rectangle__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Rectangle__float4), StyleProperty__Fuse_Shapes_Rectangle__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Shapes_Rectangle__float4* StyleProperty__Fuse_Shapes_Rectangle__float4__New_2(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Shapes_Rectangle__float4* inst = (StyleProperty__Fuse_Shapes_Rectangle__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Rectangle__float4), StyleProperty__Fuse_Shapes_Rectangle__float4__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Shapes_Rectangle__float4__OnChanged(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Shapes::Rectangle*>(owner);
    }
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__Reset(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Rectangle*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Shapes_Rectangle__float4__ResetFor(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Rectangle__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Shapes::Rectangle*>((::uObject*)n, ::app::Fuse::Shapes::Rectangle__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__ResetStyle(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Shapes_Rectangle__float4__ResetStyleFor(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Rectangle__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Shapes::Rectangle*>((::uObject*)n, ::app::Fuse::Shapes::Rectangle__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__Set(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Rectangle*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Shapes_Rectangle__float4__SetLocalState(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__SetStyle(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Rectangle*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Shapes_Shape__float__uType* StyleProperty__Fuse_Shapes_Shape__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Shapes_Shape__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Shapes_Shape__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Shapes_Shape__float__uType), "Fuse.StyleProperty<Fuse.Shapes.Shape,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Shapes_Shape__float__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__float__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Shapes_Shape__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Shapes_Shape__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Shapes_Shape__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Shapes_Shape__float, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__float, _changedCallback), ::app::Uno::Action__Fuse_Shapes_Shape__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__float, _defaultValue), ::app::Uno::Float__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__float, _getter), ::app::Uno::Func__Fuse_Shapes_Shape__float__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__float, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__float, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__float, _setter), ::app::Uno::Action__Fuse_Shapes_Shape__float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Shapes_Shape__float__Get, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Shapes_Shape__float__get_DefaultValue, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Shapes_Shape__float__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Shapes_Shape__float__New_1, 0, true, StyleProperty__Fuse_Shapes_Shape__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Shapes_Shape__float__New_2, 0, true, StyleProperty__Fuse_Shapes_Shape__float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__float__typeof(), ::app::Uno::Func__Fuse_Shapes_Shape__float__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Shapes_Shape__float__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Shapes_Shape__float__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Shapes_Shape__float__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Shapes_Shape__float__SetLocalState, 0, false, ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Shapes_Shape__float__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Shapes_Shape__float___ObjInit_1(StyleProperty__Fuse_Shapes_Shape__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Shapes_Shape__float___ObjInit_2(StyleProperty__Fuse_Shapes_Shape__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Shapes_Shape__float__Get(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Shapes::Shape*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

float StyleProperty__Fuse_Shapes_Shape__float__get_DefaultValue(StyleProperty__Fuse_Shapes_Shape__float* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Shapes_Shape__float__HasValue(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Shapes_Shape__float__HasValueFor(StyleProperty__Fuse_Shapes_Shape__float* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Shapes::Shape__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Shapes::Shape*>(owner, ::app::Fuse::Shapes::Shape__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Shapes_Shape__float__IsEqual(StyleProperty__Fuse_Shapes_Shape__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Shapes_Shape__float* StyleProperty__Fuse_Shapes_Shape__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Shapes_Shape__float* inst = (StyleProperty__Fuse_Shapes_Shape__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__float), StyleProperty__Fuse_Shapes_Shape__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Shapes_Shape__float* StyleProperty__Fuse_Shapes_Shape__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Shapes_Shape__float* inst = (StyleProperty__Fuse_Shapes_Shape__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__float), StyleProperty__Fuse_Shapes_Shape__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Shapes_Shape__float__OnChanged(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Shapes::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Shapes_Shape__float__Reset(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Shapes_Shape__float__ResetFor(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Shape__float__ResetStyle(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Shapes_Shape__float__ResetStyleFor(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Shape__float__Set(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Shapes_Shape__float__SetLocalState(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Shapes_Shape__float__SetStyle(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType), "Fuse.StyleProperty<Fuse.Shapes.Shape,Fuse.Drawing.Brush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _changedCallback), ::app::Uno::Action__Fuse_Shapes_Shape__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _defaultValue), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _getter), ::app::Uno::Func__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _setter), ::app::Uno::Action__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Get, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__get_DefaultValue, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__New_1, 0, true, StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__New_2, 0, true, StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof(), ::app::Uno::Func__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__SetLocalState, 0, false, ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof(), ::app::Fuse::Drawing::Brush__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush___ObjInit_1(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush___ObjInit_2(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Get(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Drawing::Brush*, ::app::Fuse::Shapes::Shape*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Drawing::Brush*>(res, ::app::Fuse::Drawing::Brush__typeof());
        }
    }
}

::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__get_DefaultValue(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__HasValue(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__HasValueFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Shapes::Shape__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Shapes::Shape*>(owner, ::app::Fuse::Shapes::Shape__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__IsEqual(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::app::Fuse::Drawing::Brush* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Drawing::Brush*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush), StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush), StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__OnChanged(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Shapes::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Reset(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, ::app::Fuse::Drawing::Brush*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyle(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyleFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Set(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Drawing::Brush* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, ::app::Fuse::Drawing::Brush*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__SetLocalState(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__SetStyle(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, ::app::Fuse::Drawing::Brush*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType), "Fuse.StyleProperty<Fuse.Shapes.Shape,Fuse.Drawing.Stroke>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_HasValueFor = (bool(*)(::app::Fuse::StyleProperty*, ::uObject*))StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__HasValueFor;
    type->__fp_ResetFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetFor;
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _setter));

    type->SetFields(6,
        ::uNewField("_changedCallback", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _changedCallback), ::app::Uno::Action__Fuse_Shapes_Shape__typeof()),
        ::uNewField("_defaultValue", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _defaultValue), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewField("_getter", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _getter), ::app::Uno::Func__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof()),
        ::uNewField("_handle", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_id", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _id), ::app::Uno::Int__typeof()),
        ::uNewField("_setter", NULL, offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _setter), ::app::Uno::Action__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("Get", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__Get, 0, false, ::app::Fuse::Drawing::Stroke__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("get_DefaultValue", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__get_DefaultValue, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("HasValue", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__HasValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__New_1, 0, true, StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__typeof()),
        ::uNewFunction(".ctor", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__New_2, 0, true, StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof(), ::app::Fuse::Drawing::Stroke__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__typeof(), ::app::Uno::Action__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof(), ::app::Uno::Func__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunction("Reset", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__Reset, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("ResetStyle", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("Set", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__Set, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof(), ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("SetLocalState", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__SetLocalState, 0, false, ::app::Fuse::Shapes::Shape__typeof()),
        ::uNewFunction("SetStyle", StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__SetStyle, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Shapes::Shape__typeof(), ::app::Fuse::Drawing::Stroke__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke___ObjInit_1(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke___ObjInit_2(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Drawing::Stroke* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__Get(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Drawing::Stroke*, ::app::Fuse::Shapes::Shape*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Drawing::Stroke*>(res, ::app::Fuse::Drawing::Stroke__typeof());
        }
    }
}

::app::Fuse::Drawing::Stroke* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__get_DefaultValue(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this)
{
    return __this->_defaultValue;
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__HasValue(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__HasValueFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::uObject* owner)
{
    if (::uIs(owner, ::app::Fuse::Shapes::Shape__typeof()))
    {
        return __this->HasValue(::uCast< ::app::Fuse::Shapes::Shape*>(owner, ::app::Fuse::Shapes::Shape__typeof()));
    }
    else
    {
        return false;
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__IsEqual(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* value, ::app::Fuse::Drawing::Stroke* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Drawing::Stroke*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* inst = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke), StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__New_2(::uStatic* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* inst = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke), StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__OnChanged(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Shapes::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__Reset(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, ::app::Fuse::Drawing::Stroke*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->Reset(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetStyle(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetStyleFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__Set(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner, ::app::Fuse::Drawing::Stroke* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Drawing::Stroke* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, ::app::Fuse::Drawing::Stroke*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__SetLocalState(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__SetStyle(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner, ::app::Fuse::Drawing::Stroke* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, ::app::Fuse::Drawing::Stroke*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

}}
