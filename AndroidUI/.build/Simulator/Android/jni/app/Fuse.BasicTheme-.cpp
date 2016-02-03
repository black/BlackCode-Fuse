#include <app/-.ButtonText.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Animations.Scale.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Scaling.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.BasicTheme.BasicStyle.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Animations_Change___float4_Valu-b61d10b.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Controls_Button_string_Text_Property.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Controls_TextControl_float4_Tex-4c8d75e2.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Controls_TextControl_string_Val-c46b76a2.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Drawing_Stroke_float_Width_Property.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Elements_Element_float_Height_Property.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Elements_Element_float_Opacity_Property.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Elements_Element_float_Width_Property.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusa-8d65e44d.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Translation_float_X_Property.h>
#include <app/Fuse.BasicTheme.BasicStyle_Fuse_Triggers_Actions_TriggerAction_-d369fa54.h>
#include <app/Fuse.BasicTheme.BasicStyle_Template.h>
#include <app/Fuse.BasicTheme.BasicStyle_Template_Template1.h>
#include <app/Fuse.BasicTheme.BasicStyle_Template1.h>
#include <app/Fuse.BasicTheme.BasicStyle_Template2.h>
#include <app/Fuse.BasicTheme.BasicStyle_Template3.h>
#include <app/Fuse.BasicTheme.BasicStyle_Template4.h>
#include <app/Fuse.BasicTheme.BasicStyle_Template5.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.BasicTheme.ColorScheme.h>
#include <app/Fuse.BasicTheme.DefaultBasicTheme.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.BackButton.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.DefaultSwitchBehavior.h>
#include <app/Fuse.Controls.DockPanel.h>
#include <app/Fuse.Controls.FillRule.h>
#include <app/Fuse.Controls.Graphics.LinearSliderBehavior.h>
#include <app/Fuse.Controls.NavigationBar.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Path.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.PropertyBinding__bool.h>
#include <app/Fuse.Controls.PropertyBinding__string.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.DropShadow.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.WhilePressed.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.ITranslationMode.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Layouts.Layer.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.LayoutRole.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceBinding__float4.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-44d8cf97.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.StyleProperty__Fuse_Node__string.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-d8fcbdc5.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse-c6472f5a.h>
#include <app/Fuse.Theme.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.ProgressAnimation.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileDisabled.h>
#include <app/Fuse.Triggers.WhileFocused.h>
#include <app/Fuse.Triggers.WhileFocusWithin.h>
#include <app/Fuse.Triggers.WhileInteracting.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Color.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>
#include <app/Uno.UX.Property__string.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.UX.Template__Fuse_Controls_BackButton.h>
#include <app/Uno.UX.Template__Fuse_Controls_Button.h>
#include <app/Uno.UX.Template__Fuse_Controls_NavigationBar.h>
#include <app/Uno.UX.Template__Fuse_Controls_Slider.h>
#include <app/Uno.UX.Template__Fuse_Controls_Switch.h>
#include <app/Uno.UX.Template__Fuse_Controls_Text.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextInput.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uArray*> BasicStyle__Amber;
::uStaticStrong< ::uArray*> BasicStyle__Blue;
::uStaticStrong< ::uArray*> BasicStyle__BlueGrey;
::uStaticStrong< ::uArray*> BasicStyle__Brown;
::uStaticStrong< ::uArray*> BasicStyle__ColorCodes;
::uStaticStrong< ::uArray*> BasicStyle__Cyan;
::uStaticStrong< ::uArray*> BasicStyle__DeepOrange;
::uStaticStrong< ::uArray*> BasicStyle__DeepPurple;
::uStaticStrong< ::uArray*> BasicStyle__Green;
::uStaticStrong< ::uArray*> BasicStyle__Grey;
::uStaticStrong< ::uArray*> BasicStyle__Indigo;
::uStaticStrong< ::uArray*> BasicStyle__LightBlue;
::uStaticStrong< ::uArray*> BasicStyle__LightGreen;
::uStaticStrong< ::uArray*> BasicStyle__Lime;
::uStaticStrong< ::uArray*> BasicStyle__Orange;
::uStaticStrong< ::uArray*> BasicStyle__Pink;
::uStaticStrong< ::uArray*> BasicStyle__Purple;
::uStaticStrong< ::uArray*> BasicStyle__Red;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoBlack;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoBlackItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoBold;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoBoldItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedBold;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedBoldItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedLight;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedLightItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoCondensedRegular;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoLight;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoLightItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoMedium;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoMediumItalic;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoRegular;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoThin;
::uStaticStrong< ::app::Fuse::Font*> BasicStyle__RobotoThinItalic;
::uStaticStrong< ::uArray*> BasicStyle__Teal;
::uStaticStrong< ::uArray*> BasicStyle__Yellow;

BasicStyle__uType* BasicStyle__typeof()
{
    static ::uStaticStrong<BasicStyle__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle__uType*)::uAllocClassType(sizeof(BasicStyle__uType), "Fuse.BasicTheme.BasicStyle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Style__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicStyle__uType, __interface_0));

    type->SetFields(39,
        ::uNewField("_colorScheme", NULL, offsetof(BasicStyle, _colorScheme), ::app::Fuse::BasicTheme::ColorScheme__typeof()),
        ::uNewField("Amber", &BasicStyle__Amber, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Blue", &BasicStyle__Blue, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("BlueGrey", &BasicStyle__BlueGrey, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Brown", &BasicStyle__Brown, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("ColorCodes", &BasicStyle__ColorCodes, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Cyan", &BasicStyle__Cyan, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("DeepOrange", &BasicStyle__DeepOrange, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("DeepPurple", &BasicStyle__DeepPurple, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Green", &BasicStyle__Green, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Grey", &BasicStyle__Grey, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Indigo", &BasicStyle__Indigo, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("LightBlue", &BasicStyle__LightBlue, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("LightGreen", &BasicStyle__LightGreen, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Lime", &BasicStyle__Lime, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Orange", &BasicStyle__Orange, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Pink", &BasicStyle__Pink, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Purple", &BasicStyle__Purple, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Red", &BasicStyle__Red, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("RobotoBlack", &BasicStyle__RobotoBlack, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoBlackItalic", &BasicStyle__RobotoBlackItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoBold", &BasicStyle__RobotoBold, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoBoldItalic", &BasicStyle__RobotoBoldItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoCondensedBold", &BasicStyle__RobotoCondensedBold, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoCondensedBoldItalic", &BasicStyle__RobotoCondensedBoldItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoCondensedItalic", &BasicStyle__RobotoCondensedItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoCondensedLight", &BasicStyle__RobotoCondensedLight, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoCondensedLightItalic", &BasicStyle__RobotoCondensedLightItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoCondensedRegular", &BasicStyle__RobotoCondensedRegular, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoItalic", &BasicStyle__RobotoItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoLight", &BasicStyle__RobotoLight, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoLightItalic", &BasicStyle__RobotoLightItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoMedium", &BasicStyle__RobotoMedium, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoMediumItalic", &BasicStyle__RobotoMediumItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoRegular", &BasicStyle__RobotoRegular, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoThin", &BasicStyle__RobotoThin, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("RobotoThinItalic", &BasicStyle__RobotoThinItalic, 0, ::app::Fuse::Font__typeof()),
        ::uNewField("Teal", &BasicStyle__Teal, 0, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewField("Yellow", &BasicStyle__Yellow, 0, ::uGetArrayType(::app::Uno::String__typeof())));

    type->SetFunctions(6,
        ::uNewFunction("get_ColorScheme", BasicStyle__get_ColorScheme, 0, false, ::app::Fuse::BasicTheme::ColorScheme__typeof()),
        ::uNewFunctionVoid("InitializeUX", BasicStyle__InitializeUX, 0, false),
        ::uNewFunction(".ctor", BasicStyle__New_2, 0, true, BasicStyle__typeof()),
        ::uNewFunctionVoid("set_ColorScheme", BasicStyle__set_ColorScheme, 0, false, ::app::Fuse::BasicTheme::ColorScheme__typeof()),
        ::uNewFunctionVoid("SetColorScheme", BasicStyle__SetColorScheme, 0, false),
        ::uNewFunctionVoid("UpdateColorCodes", BasicStyle__UpdateColorCodes, 0, false, ::uGetArrayType(::app::Uno::String__typeof())));

    ::uRegisterType(type);
    return type;
}

void BasicStyle___ObjInit_1(BasicStyle* __this)
{
    ::app::Fuse::Style___ObjInit(__this);
    __this->SetColorScheme();
    __this->InitializeUX();
}

void BasicStyle___TypeInit(::uStatic* __this)
{
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    ::uArray* array_134;
    ::uArray* array_135;
    ::uArray* array_136;
    ::uArray* array_137;
    ::uArray* array_138;
    ::uArray* array_139;
    ::uArray* array_140;
    ::uArray* array_141;
    ::uArray* array_142;
    ::uArray* array_143;
    ::uArray* array_144;
    ::uArray* array_145;
    ::uArray* array_146;
    ::uArray* array_147;
    ::uArray* array_148;
    BasicStyle__ColorCodes = (array_129 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(0) = ::uGetConstString("C50"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(1) = ::uGetConstString("C100"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(2) = ::uGetConstString("C200"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(3) = ::uGetConstString("C300"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(4) = ::uGetConstString("C400"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(5) = ::uGetConstString("C500"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(6) = ::uGetConstString("C600"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(7) = ::uGetConstString("C700"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(8) = ::uGetConstString("C800"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(9) = ::uGetConstString("C900"), array_129);
    BasicStyle__Red = (array_130 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FFEBEE"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFCDD2"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(2) = ::uGetConstString("#EF9A9A"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(3) = ::uGetConstString("#E57373"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(4) = ::uGetConstString("#EF5350"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(5) = ::uGetConstString("#F44336"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(6) = ::uGetConstString("#E53935"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(7) = ::uGetConstString("#D32F2F"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(8) = ::uGetConstString("#C62828"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(9) = ::uGetConstString("#B71C1C"), array_130);
    BasicStyle__Pink = (array_131 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FCE4EC"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(1) = ::uGetConstString("#F8BBD0"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(2) = ::uGetConstString("#F48FB1"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(3) = ::uGetConstString("#F06292"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(4) = ::uGetConstString("#EC407A"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(5) = ::uGetConstString("#E91E63"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(6) = ::uGetConstString("#D81B60"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(7) = ::uGetConstString("#C2185B"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(8) = ::uGetConstString("#AD1457"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(9) = ::uGetConstString("#880E4F"), array_131);
    BasicStyle__Purple = (array_132 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(0) = ::uGetConstString("#F3E5F5"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(1) = ::uGetConstString("#E1BEE7"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(2) = ::uGetConstString("#CE93D8"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(3) = ::uGetConstString("#BA68C8"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(4) = ::uGetConstString("#AB47BC"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(5) = ::uGetConstString("#9C27B0"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(6) = ::uGetConstString("#8E24AA"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(7) = ::uGetConstString("#7B1FA2"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(8) = ::uGetConstString("#6A1B9A"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(9) = ::uGetConstString("#4A148C"), array_132);
    BasicStyle__DeepPurple = (array_133 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(0) = ::uGetConstString("#EDE7F6"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(1) = ::uGetConstString("#D1C4E9"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(2) = ::uGetConstString("#B39DDB"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(3) = ::uGetConstString("#9575CD"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(4) = ::uGetConstString("#7E57C2"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(5) = ::uGetConstString("#673AB7"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(6) = ::uGetConstString("#5E35B1"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(7) = ::uGetConstString("#512DA8"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(8) = ::uGetConstString("#4527A0"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(9) = ::uGetConstString("#311B92"), array_133);
    BasicStyle__Indigo = (array_134 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E8EAF6"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(1) = ::uGetConstString("#C5CAE9"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(2) = ::uGetConstString("#9FA8DA"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(3) = ::uGetConstString("#7986CB"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(4) = ::uGetConstString("#5C6BC0"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(5) = ::uGetConstString("#3F51B5"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(6) = ::uGetConstString("#3949AB"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(7) = ::uGetConstString("#303F9F"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(8) = ::uGetConstString("#283593"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(9) = ::uGetConstString("#1A237E"), array_134);
    BasicStyle__Blue = (array_135 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E3F2FD"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(1) = ::uGetConstString("#BBDEFB"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(2) = ::uGetConstString("#90CAF9"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(3) = ::uGetConstString("#64B5F6"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(4) = ::uGetConstString("#42A5F5"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(5) = ::uGetConstString("#2196F3"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(6) = ::uGetConstString("#1E88E5"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(7) = ::uGetConstString("#1976D2"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(8) = ::uGetConstString("#1565C0"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(9) = ::uGetConstString("#0D47A1"), array_135);
    BasicStyle__LightBlue = (array_136 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E1F5FE"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(1) = ::uGetConstString("#B3E5FC"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(2) = ::uGetConstString("#81D4FA"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(3) = ::uGetConstString("#4FC3F7"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(4) = ::uGetConstString("#29B6F6"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(5) = ::uGetConstString("#03A9F4"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(6) = ::uGetConstString("#039BE5"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(7) = ::uGetConstString("#0288D1"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(8) = ::uGetConstString("#0277BD"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(9) = ::uGetConstString("#01579B"), array_136);
    BasicStyle__Cyan = (array_137 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E0F7FA"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(1) = ::uGetConstString("#B2EBF2"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(2) = ::uGetConstString("#80DEEA"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(3) = ::uGetConstString("#4DD0E1"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(4) = ::uGetConstString("#26C6DA"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(5) = ::uGetConstString("#00BCD4"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(6) = ::uGetConstString("#00ACC1"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(7) = ::uGetConstString("#0097A7"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(8) = ::uGetConstString("#00838F"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(9) = ::uGetConstString("#006064"), array_137);
    BasicStyle__Teal = (array_138 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E0F2F1"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(1) = ::uGetConstString("#B2DFDB"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(2) = ::uGetConstString("#80CBC4"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(3) = ::uGetConstString("#4DB6AC"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(4) = ::uGetConstString("#26A69A"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(5) = ::uGetConstString("#009688"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(6) = ::uGetConstString("#00897B"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(7) = ::uGetConstString("#00796B"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(8) = ::uGetConstString("#00695C"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(9) = ::uGetConstString("#004D40"), array_138);
    BasicStyle__Green = (array_139 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(0) = ::uGetConstString("#E8F5E9"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(1) = ::uGetConstString("#C8E6C9"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(2) = ::uGetConstString("#A5D6A7"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(3) = ::uGetConstString("#81C784"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(4) = ::uGetConstString("#66BB6A"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(5) = ::uGetConstString("#4CAF50"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(6) = ::uGetConstString("#43A047"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(7) = ::uGetConstString("#388E3C"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(8) = ::uGetConstString("#2E7D32"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(9) = ::uGetConstString("#1B5E20"), array_139);
    BasicStyle__LightGreen = (array_140 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(0) = ::uGetConstString("#F1F8E9"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(1) = ::uGetConstString("#DCEDC8"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(2) = ::uGetConstString("#C5E1A5"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(3) = ::uGetConstString("#AED581"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(4) = ::uGetConstString("#9CCC65"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(5) = ::uGetConstString("#8BC34A"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(6) = ::uGetConstString("#7CB342"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(7) = ::uGetConstString("#689F38"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(8) = ::uGetConstString("#558B2F"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(9) = ::uGetConstString("#33691E"), array_140);
    BasicStyle__Lime = (array_141 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(0) = ::uGetConstString("#F9FBE7"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(1) = ::uGetConstString("#F0F4C3"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(2) = ::uGetConstString("#E6EE9C"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(3) = ::uGetConstString("#DCE775"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(4) = ::uGetConstString("#D4E157"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(5) = ::uGetConstString("#CDDC39"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(6) = ::uGetConstString("#C0CA33"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(7) = ::uGetConstString("#AFB42B"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(8) = ::uGetConstString("#9E9D24"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(9) = ::uGetConstString("#827717"), array_141);
    BasicStyle__Yellow = (array_142 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FFFDE7"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFF9C4"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(2) = ::uGetConstString("#FFF59D"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(3) = ::uGetConstString("#FFF176"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(4) = ::uGetConstString("#FFEE58"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(5) = ::uGetConstString("#FFEB3B"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(6) = ::uGetConstString("#FDD835"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(7) = ::uGetConstString("#FBC02D"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(8) = ::uGetConstString("#F9A825"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(9) = ::uGetConstString("#F57F17"), array_142);
    BasicStyle__Amber = (array_143 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FFF8E1"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFECB3"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(2) = ::uGetConstString("#FFE082"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(3) = ::uGetConstString("#FFD54F"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(4) = ::uGetConstString("#FFCA28"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(5) = ::uGetConstString("#FFC107"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(6) = ::uGetConstString("#FFB300"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(7) = ::uGetConstString("#FFA000"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(8) = ::uGetConstString("#FF8F00"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(9) = ::uGetConstString("#FF6F00"), array_143);
    BasicStyle__Orange = (array_144 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FFF3E0"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFE0B2"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(2) = ::uGetConstString("#FFCC80"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(3) = ::uGetConstString("#FFB74D"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(4) = ::uGetConstString("#FFA726"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(5) = ::uGetConstString("#FF9800"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(6) = ::uGetConstString("#FB8C00"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(7) = ::uGetConstString("#F57C00"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(8) = ::uGetConstString("#EF6C00"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(9) = ::uGetConstString("#E65100"), array_144);
    BasicStyle__DeepOrange = (array_145 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FBE9E7"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(1) = ::uGetConstString("#FFCCBC"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(2) = ::uGetConstString("#FFAB91"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(3) = ::uGetConstString("#FF8A65"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(4) = ::uGetConstString("#FF7043"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(5) = ::uGetConstString("#FF5722"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(6) = ::uGetConstString("#F4511E"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(7) = ::uGetConstString("#E64A19"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(8) = ::uGetConstString("#D84315"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(9) = ::uGetConstString("#BF360C"), array_145);
    BasicStyle__Brown = (array_146 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(0) = ::uGetConstString("#EFEBE9"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(1) = ::uGetConstString("#D7CCC8"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(2) = ::uGetConstString("#BCAAA4"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(3) = ::uGetConstString("#A1887F"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(4) = ::uGetConstString("#8D6E63"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(5) = ::uGetConstString("#795548"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(6) = ::uGetConstString("#6D4C41"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(7) = ::uGetConstString("#5D4037"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(8) = ::uGetConstString("#4E342E"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(9) = ::uGetConstString("#3E2723"), array_146);
    BasicStyle__Grey = (array_147 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(0) = ::uGetConstString("#FAFAFA"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(1) = ::uGetConstString("#F5F5F5"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(2) = ::uGetConstString("#EEEEEE"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(3) = ::uGetConstString("#E0E0E0"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(4) = ::uGetConstString("#BDBDBD"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(5) = ::uGetConstString("#9E9E9E"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(6) = ::uGetConstString("#757575"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(7) = ::uGetConstString("#616161"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(8) = ::uGetConstString("#424242"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(9) = ::uGetConstString("#212121"), array_147);
    BasicStyle__BlueGrey = (array_148 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(0) = ::uGetConstString("#ECEFF1"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(1) = ::uGetConstString("#CFD8DC"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(2) = ::uGetConstString("#B0BEC5"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(3) = ::uGetConstString("#90A4AE"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(4) = ::uGetConstString("#78909C"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(5) = ::uGetConstString("#607D8B"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(6) = ::uGetConstString("#546E7A"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(7) = ::uGetConstString("#455A64"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(8) = ::uGetConstString("#37474F"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(9) = ::uGetConstString("#263238"), array_148);
    BasicStyle__RobotoThin = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 5), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoCondensedBold = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 6), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoCondensedBoldItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 7), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoCondensedItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 8), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoCondensedLight = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 9), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoCondensedLightItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 10), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoCondensedRegular = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 11), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 12), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoLight = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 13), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoLightItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 14), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoMedium = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 15), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoMediumItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 16), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoRegular = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 17), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoThinItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 18), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoBlack = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 19), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoBlackItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 20), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoBold = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 21), ::app::Uno::BundleFile__typeof())));
    BasicStyle__RobotoBoldItalic = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 22), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoThin, ::uGetConstString("RobotoThin"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoCondensedBold, ::uGetConstString("RobotoCondensedBold"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoCondensedBoldItalic, ::uGetConstString("RobotoCondensedBoldItalic"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoCondensedItalic, ::uGetConstString("RobotoCondensedItalic"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoCondensedLight, ::uGetConstString("RobotoCondensedLight"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoCondensedLightItalic, ::uGetConstString("RobotoCondensedLightItalic"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoCondensedRegular, ::uGetConstString("RobotoCondensedRegular"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoItalic, ::uGetConstString("RobotoItalic"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoLight, ::uGetConstString("RobotoLight"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoLightItalic, ::uGetConstString("RobotoLightItalic"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoMedium, ::uGetConstString("RobotoMedium"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoMediumItalic, ::uGetConstString("RobotoMediumItalic"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoRegular, ::uGetConstString("RobotoRegular"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoThinItalic, ::uGetConstString("RobotoThinItalic"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoBlack, ::uGetConstString("RobotoBlack"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoBlackItalic, ::uGetConstString("RobotoBlackItalic"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoBold, ::uGetConstString("RobotoBold"));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)BasicStyle__RobotoBoldItalic, ::uGetConstString("RobotoBoldItalic"));
}

int BasicStyle__get_ColorScheme(BasicStyle* __this)
{
    return __this->_colorScheme;
}

void BasicStyle__InitializeUX(BasicStyle* __this)
{
    ::app::Fuse::BasicTheme::BasicStyle_Template* collection_123;
    ::app::Fuse::BasicTheme::BasicStyle_Template1* collection_124;
    ::app::Fuse::BasicTheme::BasicStyle_Template2* collection_125;
    ::app::Fuse::BasicTheme::BasicStyle_Template3* collection_126;
    ::app::Fuse::BasicTheme::BasicStyle_Template4* collection_127;
    ::app::Fuse::BasicTheme::BasicStyle_Template5* collection_128;
    ::app::Uno::Float4 temp = ::app::Uno::Float4__New_2(NULL, 0.8f, 0.8f, 0.8f, 1.0f);
    ::app::Uno::Float4 temp1 = ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f);
    ::app::Uno::Float4 temp2 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f);
    ::app::Uno::Float4 temp3 = ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.2f);
    ::app::Uno::UX::Resource* temp4 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("CLine"), ::uBox(::app::Uno::Float4__typeof(), temp));
    ::app::Uno::UX::Resource* temp5 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("CFillFore"), ::uBox(::app::Uno::Float4__typeof(), temp1));
    ::app::Uno::UX::Resource* temp6 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("CEmptyFore"), ::uBox(::app::Uno::Float4__typeof(), temp2));
    ::app::Uno::UX::Resource* temp7 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("CShadow"), ::uBox(::app::Uno::Float4__typeof(), temp3));
    collection_123 = ::app::Fuse::BasicTheme::BasicStyle_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicStyle_Template*>(collection_123)->Cascade(false);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicStyle_Template* temp8 = collection_123;
    collection_124 = ::app::Fuse::BasicTheme::BasicStyle_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicStyle_Template1*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicStyle_Template1* temp9 = collection_124;
    collection_125 = ::app::Fuse::BasicTheme::BasicStyle_Template2__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicStyle_Template2*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicStyle_Template2* temp10 = collection_125;
    collection_126 = ::app::Fuse::BasicTheme::BasicStyle_Template3__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicStyle_Template3*>(collection_126)->Cascade(true);
    collection_126->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicStyle_Template3* temp11 = collection_126;
    collection_127 = ::app::Fuse::BasicTheme::BasicStyle_Template4__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicStyle_Template4*>(collection_127)->Cascade(true);
    collection_127->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicStyle_Template4* temp12 = collection_127;
    collection_128 = ::app::Fuse::BasicTheme::BasicStyle_Template5__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicStyle_Template5*>(collection_128)->Cascade(true);
    collection_128->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicStyle_Template5* temp13 = collection_128;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp8);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp9);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp10);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp11);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp12);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp13);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp4);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp5);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp6);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp7);
}

BasicStyle* BasicStyle__New_2(::uStatic* __this)
{
    BasicStyle* inst = (BasicStyle*)::uAllocObject(sizeof(BasicStyle), BasicStyle__typeof());
    inst->_ObjInit_1();
    return inst;
}

void BasicStyle__set_ColorScheme(BasicStyle* __this, int value)
{
    if (__this->_colorScheme != value)
    {
        __this->_colorScheme = value;
        __this->SetColorScheme();
    }
}

void BasicStyle__SetColorScheme(BasicStyle* __this)
{
    switch (__this->ColorScheme())
    {
        case 5:
        {
            __this->UpdateColorCodes(BasicStyle__Amber);
            break;
        }
        case 1:
        {
            __this->UpdateColorCodes(BasicStyle__BlueGrey);
            break;
        }
        case 2:
        {
            __this->UpdateColorCodes(BasicStyle__Blue);
            break;
        }
        case 3:
        {
            __this->UpdateColorCodes(BasicStyle__Brown);
            break;
        }
        case 4:
        {
            __this->UpdateColorCodes(BasicStyle__Cyan);
            break;
        }
        case 6:
        {
            __this->UpdateColorCodes(BasicStyle__DeepOrange);
            break;
        }
        case 7:
        {
            __this->UpdateColorCodes(BasicStyle__DeepPurple);
            break;
        }
        case 8:
        {
            __this->UpdateColorCodes(BasicStyle__Green);
            break;
        }
        case 9:
        {
            __this->UpdateColorCodes(BasicStyle__Grey);
            break;
        }
        case 10:
        {
            __this->UpdateColorCodes(BasicStyle__Indigo);
            break;
        }
        case 0:
        {
            __this->UpdateColorCodes(BasicStyle__LightBlue);
            break;
        }
        case 11:
        {
            __this->UpdateColorCodes(BasicStyle__LightGreen);
            break;
        }
        case 12:
        {
            __this->UpdateColorCodes(BasicStyle__Lime);
            break;
        }
        case 13:
        {
            __this->UpdateColorCodes(BasicStyle__Orange);
            break;
        }
        case 14:
        {
            __this->UpdateColorCodes(BasicStyle__Pink);
            break;
        }
        case 15:
        {
            __this->UpdateColorCodes(BasicStyle__Purple);
            break;
        }
        case 16:
        {
            __this->UpdateColorCodes(BasicStyle__Red);
            break;
        }
        case 17:
        {
            __this->UpdateColorCodes(BasicStyle__Teal);
            break;
        }
        case 18:
        {
            __this->UpdateColorCodes(BasicStyle__Yellow);
            break;
        }
    }
}

void BasicStyle__UpdateColorCodes(BasicStyle* __this, ::uArray* hexValues)
{
    if (::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(__this->Resources())) > 0)
    {
        for (int i = 0; i < ::uPtr< ::uArray*>(BasicStyle__ColorCodes)->Length(); i++)
        {
            for (int j = ::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(__this->Resources())) - 1; j != 0; j--)
            {
                if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::UX::Resource*>(::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(__this->Resources()), j))->Key(), ::uPtr< ::uArray*>(BasicStyle__ColorCodes)->Item< ::uString*>(i)))
                {
                    ::app::Uno::Collections::IList__Uno_UX_Resource::RemoveAt(::uPtr< ::uObject*>(__this->Resources()), j);
                }
            }
        }
    }

    for (int i = 0; i < ::uPtr< ::uArray*>(BasicStyle__ColorCodes)->Length(); i++)
    {
        ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), ::app::Uno::UX::Resource__New_1(NULL, ::uPtr< ::uArray*>(BasicStyle__ColorCodes)->Item< ::uString*>(i), ::uBox(::app::Uno::Float4__typeof(), ::app::Uno::Color__FromHex(NULL, ::uPtr< ::uArray*>(hexValues)->Item< ::uString*>(i)))));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Animations_Change___float4_Value_Property__uType* BasicStyle_Fuse_Animations_Change___float4_Value_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Animations_Change___float4_Value_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Animations_Change___float4_Value_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Animations_Change___float4_Value_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Animations_Change___float4_Value_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float4__typeof());
    type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))BasicStyle_Fuse_Animations_Change___float4_Value_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4, ::uObject*))BasicStyle_Fuse_Animations_Change___float4_Value_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Animations_Change___float4_Value_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1, 0, true, BasicStyle_Fuse_Animations_Change___float4_Value_Property__typeof(), ::app::Fuse::Animations::Change__float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Animations_Change___float4_Value_Property___ObjInit_1(BasicStyle_Fuse_Animations_Change___float4_Value_Property* __this, ::app::Fuse::Animations::Change__float4* obj)
{
    ::app::Uno::UX::Property__float4___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Animations_Change___float4_Value_Property* BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float4* obj)
{
    BasicStyle_Fuse_Animations_Change___float4_Value_Property* inst = (BasicStyle_Fuse_Animations_Change___float4_Value_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Animations_Change___float4_Value_Property), BasicStyle_Fuse_Animations_Change___float4_Value_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::app::Uno::Float4 BasicStyle_Fuse_Animations_Change___float4_Value_Property__OnGet(BasicStyle_Fuse_Animations_Change___float4_Value_Property* __this)
{
    return ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->_obj)->Value();
}

void BasicStyle_Fuse_Animations_Change___float4_Value_Property__OnSet(BasicStyle_Fuse_Animations_Change___float4_Value_Property* __this, ::app::Uno::Float4 v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->_obj)->Value(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Controls_Button_string_Text_Property__uType* BasicStyle_Fuse_Controls_Button_string_Text_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Controls_Button_string_Text_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Controls_Button_string_Text_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Controls_Button_string_Text_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Controls_Button_string_Text_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__string__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__string*, ::uDelegate*))BasicStyle_Fuse_Controls_Button_string_Text_Property__OnAddListener;
    type->__fp_OnGet = (::uString*(*)(::app::Uno::UX::Property__string*))BasicStyle_Fuse_Controls_Button_string_Text_Property__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__string*, ::uDelegate*))BasicStyle_Fuse_Controls_Button_string_Text_Property__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__string*, ::uString*, ::uObject*))BasicStyle_Fuse_Controls_Button_string_Text_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Controls_Button_string_Text_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Controls_Button_string_Text_Property__New_1, 0, true, BasicStyle_Fuse_Controls_Button_string_Text_Property__typeof(), ::app::Fuse::Controls::Button__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Controls_Button_string_Text_Property___ObjInit_1(BasicStyle_Fuse_Controls_Button_string_Text_Property* __this, ::app::Fuse::Controls::Button* obj)
{
    ::app::Uno::UX::Property__string___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Controls_Button_string_Text_Property* BasicStyle_Fuse_Controls_Button_string_Text_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::Button* obj)
{
    BasicStyle_Fuse_Controls_Button_string_Text_Property* inst = (BasicStyle_Fuse_Controls_Button_string_Text_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Controls_Button_string_Text_Property), BasicStyle_Fuse_Controls_Button_string_Text_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

void BasicStyle_Fuse_Controls_Button_string_Text_Property__OnAddListener(BasicStyle_Fuse_Controls_Button_string_Text_Property* __this, ::uDelegate* listener)
{
    ::uPtr< ::app::Fuse::Controls::Button*>(__this->_obj)->add_TextChanged(listener);
}

::uString* BasicStyle_Fuse_Controls_Button_string_Text_Property__OnGet(BasicStyle_Fuse_Controls_Button_string_Text_Property* __this)
{
    return ::uPtr< ::app::Fuse::Controls::Button*>(__this->_obj)->Text();
}

void BasicStyle_Fuse_Controls_Button_string_Text_Property__OnRemoveListener(BasicStyle_Fuse_Controls_Button_string_Text_Property* __this, ::uDelegate* listener)
{
    ::uPtr< ::app::Fuse::Controls::Button*>(__this->_obj)->remove_TextChanged(listener);
}

void BasicStyle_Fuse_Controls_Button_string_Text_Property__OnSet(BasicStyle_Fuse_Controls_Button_string_Text_Property* __this, ::uString* v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Controls::Button*>(__this->_obj)->SetText_1(v, origin);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__uType* BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float4_TextColor_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float4__typeof());
    type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4, ::uObject*))BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__New_1, 0, true, BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__typeof(), ::app::Fuse::Controls::TextControl__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property___ObjInit_1(BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property* __this, ::app::Fuse::Controls::TextControl* obj)
{
    ::app::Uno::UX::Property__float4___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property* BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::TextControl* obj)
{
    BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property* inst = (BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property), BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::app::Uno::Float4 BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__OnGet(BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property* __this)
{
    return ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->TextColor();
}

void BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__OnSet(BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property* __this, ::app::Uno::Float4 v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->TextColor(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Controls_TextControl_string_Value_Property__uType* BasicStyle_Fuse_Controls_TextControl_string_Value_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Controls_TextControl_string_Value_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Controls_TextControl_string_Value_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Controls_TextControl_string_Value_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_string_Value_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__string__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__string*, ::uDelegate*))BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnAddListener;
    type->__fp_OnGet = (::uString*(*)(::app::Uno::UX::Property__string*))BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__string*, ::uDelegate*))BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__string*, ::uString*, ::uObject*))BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Controls_TextControl_string_Value_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Controls_TextControl_string_Value_Property__New_1, 0, true, BasicStyle_Fuse_Controls_TextControl_string_Value_Property__typeof(), ::app::Fuse::Controls::TextControl__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Controls_TextControl_string_Value_Property___ObjInit_1(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this, ::app::Fuse::Controls::TextControl* obj)
{
    ::app::Uno::UX::Property__string___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Controls_TextControl_string_Value_Property* BasicStyle_Fuse_Controls_TextControl_string_Value_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::TextControl* obj)
{
    BasicStyle_Fuse_Controls_TextControl_string_Value_Property* inst = (BasicStyle_Fuse_Controls_TextControl_string_Value_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Controls_TextControl_string_Value_Property), BasicStyle_Fuse_Controls_TextControl_string_Value_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

void BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnAddListener(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this, ::uDelegate* listener)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->add_ValueChanged(listener);
}

::uString* BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnGet(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this)
{
    return ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->Value();
}

void BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnRemoveListener(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this, ::uDelegate* listener)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->remove_ValueChanged(listener);
}

void BasicStyle_Fuse_Controls_TextControl_string_Value_Property__OnSet(BasicStyle_Fuse_Controls_TextControl_string_Value_Property* __this, ::uString* v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->SetValue(v, origin);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__uType* BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Drawing_SolidColor_float4_Color_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float4__typeof());
    type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4, ::uObject*))BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1, 0, true, BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__typeof(), ::app::Fuse::Drawing::SolidColor__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_1(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Fuse::Drawing::SolidColor* obj)
{
    ::app::Uno::UX::Property__float4___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* obj)
{
    BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* inst = (BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property), BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::app::Uno::Float4 BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_obj)->Color();
}

void BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet(BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Uno::Float4 v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_obj)->Color(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__uType* BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Drawing_Stroke_float_Width_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float__typeof());
    type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float, ::uObject*))BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__New_1, 0, true, BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__typeof(), ::app::Fuse::Drawing::Stroke__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Drawing_Stroke_float_Width_Property___ObjInit_1(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* __this, ::app::Fuse::Drawing::Stroke* obj)
{
    ::app::Uno::UX::Property__float___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::Stroke* obj)
{
    BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* inst = (BasicStyle_Fuse_Drawing_Stroke_float_Width_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property), BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

float BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__OnGet(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Stroke*>(__this->_obj)->Width();
}

void BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__OnSet(BasicStyle_Fuse_Drawing_Stroke_float_Width_Property* __this, float v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(__this->_obj)->Width(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__uType* BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Effects_DropShadow_float4_Color_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float4__typeof());
    type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4, ::uObject*))BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__New_1, 0, true, BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__typeof(), ::app::Fuse::Effects::DropShadow__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property___ObjInit_1(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* __this, ::app::Fuse::Effects::DropShadow* obj)
{
    ::app::Uno::UX::Property__float4___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Effects::DropShadow* obj)
{
    BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* inst = (BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property), BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::app::Uno::Float4 BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__OnGet(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* __this)
{
    return ::uPtr< ::app::Fuse::Effects::DropShadow*>(__this->_obj)->Color();
}

void BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__OnSet(BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property* __this, ::app::Uno::Float4 v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Effects::DropShadow*>(__this->_obj)->Color(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Elements_Element_float_Height_Property__uType* BasicStyle_Fuse_Elements_Element_float_Height_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Elements_Element_float_Height_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Elements_Element_float_Height_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Elements_Element_float_Height_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Height_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float__typeof());
    type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))BasicStyle_Fuse_Elements_Element_float_Height_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float, ::uObject*))BasicStyle_Fuse_Elements_Element_float_Height_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Elements_Element_float_Height_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Elements_Element_float_Height_Property__New_1, 0, true, BasicStyle_Fuse_Elements_Element_float_Height_Property__typeof(), ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Elements_Element_float_Height_Property___ObjInit_1(BasicStyle_Fuse_Elements_Element_float_Height_Property* __this, ::app::Fuse::Elements::Element* obj)
{
    ::app::Uno::UX::Property__float___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Elements_Element_float_Height_Property* BasicStyle_Fuse_Elements_Element_float_Height_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj)
{
    BasicStyle_Fuse_Elements_Element_float_Height_Property* inst = (BasicStyle_Fuse_Elements_Element_float_Height_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Elements_Element_float_Height_Property), BasicStyle_Fuse_Elements_Element_float_Height_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

float BasicStyle_Fuse_Elements_Element_float_Height_Property__OnGet(BasicStyle_Fuse_Elements_Element_float_Height_Property* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Height();
}

void BasicStyle_Fuse_Elements_Element_float_Height_Property__OnSet(BasicStyle_Fuse_Elements_Element_float_Height_Property* __this, float v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Height(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Elements_Element_float_Opacity_Property__uType* BasicStyle_Fuse_Elements_Element_float_Opacity_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Elements_Element_float_Opacity_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Elements_Element_float_Opacity_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Elements_Element_float_Opacity_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Opacity_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float__typeof());
    type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))BasicStyle_Fuse_Elements_Element_float_Opacity_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float, ::uObject*))BasicStyle_Fuse_Elements_Element_float_Opacity_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Elements_Element_float_Opacity_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Elements_Element_float_Opacity_Property__New_1, 0, true, BasicStyle_Fuse_Elements_Element_float_Opacity_Property__typeof(), ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Elements_Element_float_Opacity_Property___ObjInit_1(BasicStyle_Fuse_Elements_Element_float_Opacity_Property* __this, ::app::Fuse::Elements::Element* obj)
{
    ::app::Uno::UX::Property__float___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Elements_Element_float_Opacity_Property* BasicStyle_Fuse_Elements_Element_float_Opacity_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj)
{
    BasicStyle_Fuse_Elements_Element_float_Opacity_Property* inst = (BasicStyle_Fuse_Elements_Element_float_Opacity_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Elements_Element_float_Opacity_Property), BasicStyle_Fuse_Elements_Element_float_Opacity_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

float BasicStyle_Fuse_Elements_Element_float_Opacity_Property__OnGet(BasicStyle_Fuse_Elements_Element_float_Opacity_Property* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Opacity();
}

void BasicStyle_Fuse_Elements_Element_float_Opacity_Property__OnSet(BasicStyle_Fuse_Elements_Element_float_Opacity_Property* __this, float v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Opacity(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Elements_Element_float_Width_Property__uType* BasicStyle_Fuse_Elements_Element_float_Width_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Elements_Element_float_Width_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Elements_Element_float_Width_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Elements_Element_float_Width_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Width_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float__typeof());
    type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))BasicStyle_Fuse_Elements_Element_float_Width_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float, ::uObject*))BasicStyle_Fuse_Elements_Element_float_Width_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Elements_Element_float_Width_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Elements_Element_float_Width_Property__New_1, 0, true, BasicStyle_Fuse_Elements_Element_float_Width_Property__typeof(), ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Elements_Element_float_Width_Property___ObjInit_1(BasicStyle_Fuse_Elements_Element_float_Width_Property* __this, ::app::Fuse::Elements::Element* obj)
{
    ::app::Uno::UX::Property__float___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Elements_Element_float_Width_Property* BasicStyle_Fuse_Elements_Element_float_Width_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj)
{
    BasicStyle_Fuse_Elements_Element_float_Width_Property* inst = (BasicStyle_Fuse_Elements_Element_float_Width_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Elements_Element_float_Width_Property), BasicStyle_Fuse_Elements_Element_float_Width_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

float BasicStyle_Fuse_Elements_Element_float_Width_Property__OnGet(BasicStyle_Fuse_Elements_Element_float_Width_Property* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Width();
}

void BasicStyle_Fuse_Elements_Element_float_Width_Property__OnSet(BasicStyle_Fuse_Elements_Element_float_Width_Property* __this, float v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Width(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__uType* BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Input_Focus_bool_Focus_IsFocusable_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__New_1, 0, true, BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property___ObjInit_1(BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property* __this, ::app::Fuse::Node* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property* BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__New_1(::uStatic* __this, ::app::Fuse::Node* obj)
{
    BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property* inst = (BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property), BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

bool BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__OnGet(BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property* __this)
{
    return ::app::Fuse::Input::Focus__IsFocusable(NULL, __this->_obj);
}

void BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__OnSet(BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property* __this, bool v, ::uObject* origin)
{
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, __this->_obj, v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Translation_float_X_Property__uType* BasicStyle_Fuse_Translation_float_X_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Translation_float_X_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Translation_float_X_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Translation_float_X_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Translation_float_X_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float__typeof());
    type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))BasicStyle_Fuse_Translation_float_X_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float, ::uObject*))BasicStyle_Fuse_Translation_float_X_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Translation_float_X_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Translation_float_X_Property__New_1, 0, true, BasicStyle_Fuse_Translation_float_X_Property__typeof(), ::app::Fuse::Translation__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Translation_float_X_Property___ObjInit_1(BasicStyle_Fuse_Translation_float_X_Property* __this, ::app::Fuse::Translation* obj)
{
    ::app::Uno::UX::Property__float___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Translation_float_X_Property* BasicStyle_Fuse_Translation_float_X_Property__New_1(::uStatic* __this, ::app::Fuse::Translation* obj)
{
    BasicStyle_Fuse_Translation_float_X_Property* inst = (BasicStyle_Fuse_Translation_float_X_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Translation_float_X_Property), BasicStyle_Fuse_Translation_float_X_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

float BasicStyle_Fuse_Translation_float_X_Property__OnGet(BasicStyle_Fuse_Translation_float_X_Property* __this)
{
    return ::uPtr< ::app::Fuse::Translation*>(__this->_obj)->X();
}

void BasicStyle_Fuse_Translation_float_X_Property__OnSet(BasicStyle_Fuse_Translation_float_X_Property* __this, float v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Translation*>(__this->_obj)->X(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__uType* BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__typeof()
{
    static ::uStaticStrong<BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__uType*)::uAllocClassType(sizeof(BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__uType), "Fuse.BasicTheme.BasicStyle.Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__New_1, 0, true, BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__typeof(), ::app::Fuse::Triggers::Actions::TriggerAction__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property___ObjInit_1(BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property* __this, ::app::Fuse::Triggers::Actions::TriggerAction* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_obj = obj;
}

BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property* BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__New_1(::uStatic* __this, ::app::Fuse::Triggers::Actions::TriggerAction* obj)
{
    BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property* inst = (BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property*)::uAllocObject(sizeof(BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property), BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

bool BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__OnGet(BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property* __this)
{
    return ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(__this->_obj)->IsActive();
}

void BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__OnSet(BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property* __this, bool v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(__this->_obj)->IsActive(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Template__uType* BasicStyle_Template__typeof()
{
    static ::uStaticStrong<BasicStyle_Template__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Template__uType*)::uAllocClassType(sizeof(BasicStyle_Template__uType), "Fuse.BasicTheme.BasicStyle.Template", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_BackButton__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_BackButton*, ::app::Fuse::Controls::BackButton*))BasicStyle_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicStyle_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(BasicStyle_Template, __parent),
        "temp_Color_inst", offsetof(BasicStyle_Template, temp_Color_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Template__New_1, 0, true, BasicStyle_Template__typeof(), ::app::Fuse::BasicTheme::BasicStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Template___ObjInit_1(BasicStyle_Template* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_BackButton___ObjInit(__this);
    __this->__parent = parent;
}

BasicStyle_Template* BasicStyle_Template__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    BasicStyle_Template* inst = (BasicStyle_Template*)::uAllocObject(sizeof(BasicStyle_Template), BasicStyle_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void BasicStyle_Template__OnApply(BasicStyle_Template* __this, ::app::Fuse::Controls::BackButton* self)
{
    ::app::Fuse::BasicTheme::BasicStyle_Template_Template1* collection_123;
    ::app::Fuse::Drawing::SolidColor* temp = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->temp_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, temp);
    ::app::Fuse::Style* temp1 = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::Fuse::BasicTheme::BasicStyle_Template_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::BasicTheme::BasicStyle_Template_Template1*>(collection_123)->Cascade(false);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::BasicTheme::BasicStyle_Template_Template1* temp2 = collection_123;
    ::app::Fuse::Controls::DockPanel* temp3 = ::app::Fuse::Controls::DockPanel__New_2(NULL);
    ::app::Fuse::Controls::Path* temp4 = ::app::Fuse::Controls::Path__New_2(NULL);
    ::app::Fuse::Drawing::Stroke* temp5 = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp6 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp_Color_inst, ::uGetConstString("CFillFore"));
    ::app::Fuse::Controls::Text* temp7 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinWidthProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 88.0f);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 36.0f);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__MarginProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 4.0f, 4.0f, 4.0f, 4.0f));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__PaddingProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 8.0f, 0.0f, 8.0f, 0.0f));
    ::app::Fuse::Input::Focus__SetStyleIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp1)->Templates()), (::uObject*)temp2);
    ::uPtr< ::app::Fuse::Controls::DockPanel*>(temp3)->Alignment(9);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp3, 0);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp3->Children()), (::app::Fuse::Node*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp3->Children()), (::app::Fuse::Node*)temp7);
    ::uPtr< ::app::Fuse::Controls::Path*>(temp4)->Data(::uGetConstString("m 0 10 l 10 10 m 0 -20 l -10 10"));
    temp4->FillRule(0);
    temp4->Width(10.0f);
    temp4->Height(20.0f);
    temp4->Margin(::app::Uno::Float4__New_2(NULL, 5.0f, 0.0f, 2.0f, 0.0f));
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp4, 0);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(temp4->Strokes()), temp5);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp4->Behaviors()), (::app::Fuse::Behavior*)temp6);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(temp5)->Width(1.0f);
    temp5->Brush((::app::Fuse::Drawing::Brush*)temp);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp7)->Value(::uGetConstString("BACK"));
    temp7->FontSize(18.0f);
    temp7->TextAlignment(1);
    temp7->Alignment(9);
    temp7->Margin(::app::Uno::Float4__New_2(NULL, 5.0f, 0.0f, 5.0f, 0.0f));
    ::uPtr< ::app::Fuse::Controls::BackButton*>(self)->AddStyleChild((::app::Fuse::Node*)temp3);
    self->AddStyleStyle(temp1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Template_Template1__uType* BasicStyle_Template_Template1__typeof()
{
    static ::uStaticStrong<BasicStyle_Template_Template1__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Template_Template1__uType*)::uAllocClassType(sizeof(BasicStyle_Template_Template1__uType), "Fuse.BasicTheme.BasicStyle.Template.Template1", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Text__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Text*, ::app::Fuse::Controls::Text*))BasicStyle_Template_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicStyle_Template_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(BasicStyle_Template_Template1, __parent),
        "self_TextColor_inst", offsetof(BasicStyle_Template_Template1, self_TextColor_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Template_Template1__New_1, 0, true, BasicStyle_Template_Template1__typeof(), ::app::Fuse::BasicTheme::BasicStyle_Template__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Template_Template1___ObjInit_1(BasicStyle_Template_Template1* __this, ::app::Fuse::BasicTheme::BasicStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Text___ObjInit(__this);
    __this->__parent = parent;
}

BasicStyle_Template_Template1* BasicStyle_Template_Template1__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle_Template* parent)
{
    BasicStyle_Template_Template1* inst = (BasicStyle_Template_Template1*)::uAllocObject(sizeof(BasicStyle_Template_Template1), BasicStyle_Template_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void BasicStyle_Template_Template1__OnApply(BasicStyle_Template_Template1* __this, ::app::Fuse::Controls::Text* self)
{
    __this->self_TextColor_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)self);
    ::app::Fuse::Resources::ResourceBinding__float4* temp = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->self_TextColor_inst, ::uGetConstString("CFillFore"));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*>(::app::Fuse::Controls::TextControl__TextAlignmentProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, 1);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, ::app::Fuse::BasicTheme::BasicStyle__RobotoLight);
    ::uPtr< ::app::Fuse::Controls::Text*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Template1__uType* BasicStyle_Template1__typeof()
{
    static ::uStaticStrong<BasicStyle_Template1__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Template1__uType*)::uAllocClassType(sizeof(BasicStyle_Template1__uType), "Fuse.BasicTheme.BasicStyle.Template1", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_NavigationBar__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_NavigationBar*, ::app::Fuse::Controls::NavigationBar*))BasicStyle_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicStyle_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(BasicStyle_Template1, __parent),
        "_navigationBarFill_Color_inst", offsetof(BasicStyle_Template1, _navigationBarFill_Color_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Template1__New_1, 0, true, BasicStyle_Template1__typeof(), ::app::Fuse::BasicTheme::BasicStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Template1___ObjInit_1(BasicStyle_Template1* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_NavigationBar___ObjInit(__this);
    __this->__parent = parent;
}

BasicStyle_Template1* BasicStyle_Template1__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    BasicStyle_Template1* inst = (BasicStyle_Template1*)::uAllocObject(sizeof(BasicStyle_Template1), BasicStyle_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void BasicStyle_Template1__OnApply(BasicStyle_Template1* __this, ::app::Fuse::Controls::NavigationBar* self)
{
    ::app::Fuse::Drawing::SolidColor* _navigationBarFill = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_navigationBarFill_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _navigationBarFill);
    ::app::Fuse::Controls::Rectangle* temp = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp1 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_navigationBarFill_Color_inst, ::uGetConstString("C500"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 48.0f);
    ::app::Fuse::Layouts::Layout__SetLayer(NULL, (::app::Fuse::Node*)temp, 0);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Rectangle*>(temp)->Fills()), (::app::Fuse::Drawing::Brush*)_navigationBarFill);
    ::uPtr< ::app::Fuse::Controls::NavigationBar*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Template2__uType* BasicStyle_Template2__typeof()
{
    static ::uStaticStrong<BasicStyle_Template2__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Template2__uType*)::uAllocClassType(sizeof(BasicStyle_Template2__uType), "Fuse.BasicTheme.BasicStyle.Template2", false, 1, 8, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Switch__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Switch*, ::app::Fuse::Controls::Switch*))BasicStyle_Template2__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicStyle_Template2__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(BasicStyle_Template2, __parent),
        "_switchStroke_Width_inst", offsetof(BasicStyle_Template2, _switchStroke_Width_inst),
        "_switchStrokeColor_Color_inst", offsetof(BasicStyle_Template2, _switchStrokeColor_Color_inst),
        "_switchThumbColor_Color_inst", offsetof(BasicStyle_Template2, _switchThumbColor_Color_inst),
        "_switchThumbStroke_Width_inst", offsetof(BasicStyle_Template2, _switchThumbStroke_Width_inst),
        "switchShadow_Color_inst", offsetof(BasicStyle_Template2, switchShadow_Color_inst),
        "temp_Value_inst", offsetof(BasicStyle_Template2, temp_Value_inst),
        "temp1_Value_inst", offsetof(BasicStyle_Template2, temp1_Value_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Template2__New_1, 0, true, BasicStyle_Template2__typeof(), ::app::Fuse::BasicTheme::BasicStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Template2___ObjInit_1(BasicStyle_Template2* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Switch___ObjInit(__this);
    __this->__parent = parent;
}

BasicStyle_Template2* BasicStyle_Template2__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    BasicStyle_Template2* inst = (BasicStyle_Template2*)::uAllocObject(sizeof(BasicStyle_Template2), BasicStyle_Template2__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void BasicStyle_Template2__OnApply(BasicStyle_Template2* __this, ::app::Fuse::Controls::Switch* self)
{
    ::app::Fuse::Drawing::SolidColor* _switchThumbColor = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_switchThumbColor_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _switchThumbColor);
    ::app::Fuse::Effects::DropShadow* switchShadow = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    __this->switchShadow_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__New_1(NULL, switchShadow);
    ::app::Fuse::Drawing::SolidColor* _switchStrokeColor = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_switchStrokeColor_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _switchStrokeColor);
    ::app::Fuse::Drawing::Stroke* _switchThumbStroke = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    __this->_switchThumbStroke_Width_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__New_1(NULL, _switchThumbStroke);
    ::app::Fuse::Drawing::Stroke* _switchStroke = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    __this->_switchStroke_Width_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__New_1(NULL, _switchStroke);
    ::app::Fuse::Animations::Change__float4* temp = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_switchStrokeColor_Color_inst);
    __this->temp_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, temp);
    ::app::Fuse::Animations::Change__float4* temp1 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_switchThumbColor_Color_inst);
    __this->temp1_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, temp1);
    ::app::Fuse::Controls::Panel* _switchBounds = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Circle* _switchThumb = ::app::Fuse::Controls::Circle__New_2(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp2 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_switchThumbColor_Color_inst, ::uGetConstString("C500"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp3 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->switchShadow_Color_inst, ::uGetConstString("CShadow"));
    ::app::Fuse::Controls::Rectangle* temp4 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp5 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_switchStrokeColor_Color_inst, ::uGetConstString("CLine"));
    ::app::Fuse::Triggers::WhileDisabled* temp6 = ::app::Fuse::Triggers::WhileDisabled__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp7 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_switchThumbStroke_Width_inst);
    ::app::Fuse::Controls::DefaultSwitchBehavior* temp8 = ::app::Fuse::Controls::DefaultSwitchBehavior__New_1(NULL);
    ::app::Fuse::Animations::Move* temp9 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp10 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_switchStroke_Width_inst);
    ::app::Fuse::Resources::ResourceBinding__float4* temp11 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp_Value_inst, ::uGetConstString("C500"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp12 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp1_Value_inst, ::uGetConstString("CFillFore"));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*>(::app::Fuse::Elements::Element__HitTestModeProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 2);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 60.0f);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__MarginProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 4.0f, 4.0f, 4.0f, 4.0f));
    ::app::Fuse::Input::Focus__SetStyleIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::uPtr< ::app::Fuse::Controls::Panel*>(_switchBounds)->Margin(::app::Uno::Float4__New_2(NULL, 17.0f, 2.0f, 17.0f, 2.0f));
    _switchBounds->Name(::uGetConstString("_switchBounds"));
    _switchBounds->SnapToPixels(false);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(_switchBounds->Children()), (::app::Fuse::Node*)_switchThumb);
    ::uPtr< ::app::Fuse::Controls::Circle*>(_switchThumb)->Width(30.0f);
    _switchThumb->Height(30.0f);
    _switchThumb->Alignment(5);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__OffsetProperty)->Set_1((::app::Fuse::Elements::Element*)_switchThumb, ::app::Uno::Float2__New_2(NULL, 0.0f, 50.0f), 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__AnchorProperty)->Set_1((::app::Fuse::Elements::Element*)_switchThumb, ::app::Uno::Float2__New_2(NULL, 50.0f, 50.0f), 1);
    _switchThumb->Name(::uGetConstString("_switchThumb"));
    _switchThumb->SnapToPixels(false);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(_switchThumb->Strokes()), _switchThumbStroke);
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(_switchThumb->Effects()), (::app::Fuse::Effects::Effect*)switchShadow);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(_switchThumb->Behaviors()), (::app::Fuse::Behavior*)temp2);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(_switchThumb->Behaviors()), (::app::Fuse::Behavior*)temp3);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(_switchThumbStroke)->Width(30.0f);
    _switchThumbStroke->Brush((::app::Fuse::Drawing::Brush*)_switchThumbColor);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp4)->CornerRadius(::app::Uno::Float4__New_2(NULL, 17.0f, 17.0f, 17.0f, 17.0f));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(temp4->Strokes()), _switchStroke);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp4->Behaviors()), (::app::Fuse::Behavior*)temp5);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(_switchStroke)->Width(2.0f);
    _switchStroke->Offset(0.5f);
    _switchStroke->Brush((::app::Fuse::Drawing::Brush*)_switchStrokeColor);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileDisabled*>(temp6)->Animators()), (::app::Fuse::Animations::Animator*)temp7);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp7)->Value(2.0f);
    temp7->Duration(0.25);
    ::uPtr< ::app::Fuse::Controls::DefaultSwitchBehavior*>(temp8)->Bounds((::app::Fuse::Elements::Element*)_switchBounds);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp8->Animators()), (::app::Fuse::Animations::Animator*)temp9);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp8->Animators()), (::app::Fuse::Animations::Animator*)temp10);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp8->Animators()), (::app::Fuse::Animations::Animator*)temp);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp8->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp9)->X(1.0f);
    temp9->Easing(3);
    temp9->Duration(0.25);
    temp9->RelativeTo(::app::Fuse::TranslationModes__ParentSize);
    temp9->Target((::app::Fuse::Node*)_switchThumb);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp10)->Value(30.0f);
    temp10->Easing(3);
    temp10->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp)->Easing(3);
    temp->Duration(0.05);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp1)->Easing(3);
    temp1->Duration(0.25);
    ::uPtr< ::app::Fuse::Controls::Switch*>(self)->AddStyleChild((::app::Fuse::Node*)_switchBounds);
    self->AddStyleChild((::app::Fuse::Node*)temp4);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp11);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp12);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp6);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp8);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Template3__uType* BasicStyle_Template3__typeof()
{
    static ::uStaticStrong<BasicStyle_Template3__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Template3__uType*)::uAllocClassType(sizeof(BasicStyle_Template3__uType), "Fuse.BasicTheme.BasicStyle.Template3", false, 1, 10, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Slider__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Slider*, ::app::Fuse::Controls::Slider*))BasicStyle_Template3__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicStyle_Template3__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(BasicStyle_Template3, __parent),
        "_focusedThumbDot_Opacity_inst", offsetof(BasicStyle_Template3, _focusedThumbDot_Opacity_inst),
        "_focusedThumbRing_Opacity_inst", offsetof(BasicStyle_Template3, _focusedThumbRing_Opacity_inst),
        "_progressTrack_Width_inst", offsetof(BasicStyle_Template3, _progressTrack_Width_inst),
        "_sliderPos_X_inst", offsetof(BasicStyle_Template3, _sliderPos_X_inst),
        "temp_Color_inst", offsetof(BasicStyle_Template3, temp_Color_inst),
        "temp1_Color_inst", offsetof(BasicStyle_Template3, temp1_Color_inst),
        "temp2_Color_inst", offsetof(BasicStyle_Template3, temp2_Color_inst),
        "temp3_Color_inst", offsetof(BasicStyle_Template3, temp3_Color_inst),
        "temp4_Color_inst", offsetof(BasicStyle_Template3, temp4_Color_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Template3__New_1, 0, true, BasicStyle_Template3__typeof(), ::app::Fuse::BasicTheme::BasicStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Template3___ObjInit_1(BasicStyle_Template3* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Slider___ObjInit(__this);
    __this->__parent = parent;
}

BasicStyle_Template3* BasicStyle_Template3__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    BasicStyle_Template3* inst = (BasicStyle_Template3*)::uAllocObject(sizeof(BasicStyle_Template3), BasicStyle_Template3__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void BasicStyle_Template3__OnApply(BasicStyle_Template3* __this, ::app::Fuse::Controls::Slider* self)
{
    ::app::Fuse::Drawing::SolidColor* temp = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->temp_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, temp);
    ::app::Fuse::Drawing::SolidColor* temp1 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->temp1_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, temp1);
    ::app::Fuse::Drawing::SolidColor* temp2 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->temp2_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, temp2);
    ::app::Fuse::Drawing::SolidColor* temp3 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->temp3_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, temp3);
    ::app::Fuse::Drawing::SolidColor* temp4 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->temp4_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, temp4);
    ::app::Fuse::Controls::Rectangle* _progressTrack = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    __this->_progressTrack_Width_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Width_Property__New_1(NULL, (::app::Fuse::Elements::Element*)_progressTrack);
    ::app::Fuse::Translation* _sliderPos = ::app::Fuse::Translation__New_1(NULL);
    __this->_sliderPos_X_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Translation_float_X_Property__New_1(NULL, _sliderPos);
    ::app::Fuse::Controls::Circle* _focusedThumbDot = ::app::Fuse::Controls::Circle__New_2(NULL);
    __this->_focusedThumbDot_Opacity_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)_focusedThumbDot);
    ::app::Fuse::Controls::Circle* _focusedThumbRing = ::app::Fuse::Controls::Circle__New_2(NULL);
    __this->_focusedThumbRing_Opacity_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)_focusedThumbRing);
    ::app::Fuse::Controls::Graphics::LinearSliderBehavior* temp5 = ::app::Fuse::Controls::Graphics::LinearSliderBehavior__New_1(NULL);
    ::app::Fuse::Controls::Panel* _sliderThumb = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::Stroke* temp6 = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp7 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp_Color_inst, ::uGetConstString("C500"));
    ::app::Fuse::Controls::Circle* _thumbDot = ::app::Fuse::Controls::Circle__New_2(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp8 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp1_Color_inst, ::uGetConstString("C500"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp9 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp2_Color_inst, ::uGetConstString("C500"));
    ::app::Fuse::Controls::Panel* temp10 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp11 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp3_Color_inst, ::uGetConstString("C500"));
    ::app::Fuse::Controls::Rectangle* temp12 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp13 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp4_Color_inst, ::uGetConstString("CLine"));
    ::app::Fuse::Triggers::ProgressAnimation* temp14 = ::app::Fuse::Triggers::ProgressAnimation__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp15 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_progressTrack_Width_inst);
    ::app::Fuse::Animations::Change__float* temp16 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_sliderPos_X_inst);
    ::app::Fuse::Triggers::WhileFocused* temp17 = ::app::Fuse::Triggers::WhileFocused__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp18 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_focusedThumbDot_Opacity_inst);
    ::app::Fuse::Triggers::WhileInteracting* temp19 = ::app::Fuse::Triggers::WhileInteracting__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp20 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp21 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_focusedThumbRing_Opacity_inst);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*>(::app::Fuse::Elements::Element__HitTestModeProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 2);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 36.0f);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__MarginProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 22.0f, 4.0f, 22.0f, 4.0f));
    ::app::Fuse::Input::Focus__SetStyleIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::uPtr< ::app::Fuse::Controls::Panel*>(_sliderThumb)->HitTestMode(2);
    _sliderThumb->Width(36.0f);
    _sliderThumb->Height(36.0f);
    _sliderThumb->Alignment(1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__AnchorProperty)->Set_1((::app::Fuse::Elements::Element*)_sliderThumb, ::app::Uno::Float2__New_2(NULL, 50.0f, 50.0f), 1);
    _sliderThumb->Name(::uGetConstString("_sliderThumb"));
    ::app::Fuse::Layouts::Layout__SetLayoutRole(NULL, (::app::Fuse::Node*)_sliderThumb, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(_sliderThumb->Children()), (::app::Fuse::Node*)_focusedThumbRing);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(_sliderThumb->Children()), (::app::Fuse::Node*)_thumbDot);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(_sliderThumb->Children()), (::app::Fuse::Node*)_focusedThumbDot);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(_sliderThumb->Transforms()), (::app::Fuse::Transform*)_sliderPos);
    ::uPtr< ::app::Fuse::Controls::Circle*>(_focusedThumbRing)->Width(32.0f);
    _focusedThumbRing->Height(32.0f);
    _focusedThumbRing->Alignment(8);
    _focusedThumbRing->Opacity(0.0f);
    _focusedThumbRing->Name(::uGetConstString("_focusedThumbRing"));
    _focusedThumbRing->SnapToPixels(false);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(_focusedThumbRing->Strokes()), temp6);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(_focusedThumbRing->Behaviors()), (::app::Fuse::Behavior*)temp7);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(temp6)->Width(2.0f);
    temp6->Brush((::app::Fuse::Drawing::Brush*)temp);
    ::uPtr< ::app::Fuse::Controls::Circle*>(_thumbDot)->Width(12.0f);
    _thumbDot->Height(12.0f);
    _thumbDot->Alignment(8);
    _thumbDot->Name(::uGetConstString("_thumbDot"));
    _thumbDot->SnapToPixels(false);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_thumbDot->Fills()), (::app::Fuse::Drawing::Brush*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(_thumbDot->Behaviors()), (::app::Fuse::Behavior*)temp8);
    ::uPtr< ::app::Fuse::Controls::Circle*>(_focusedThumbDot)->Width(32.0f);
    _focusedThumbDot->Height(32.0f);
    _focusedThumbDot->Alignment(8);
    _focusedThumbDot->Opacity(0.0f);
    _focusedThumbDot->Name(::uGetConstString("_focusedThumbDot"));
    _focusedThumbDot->SnapToPixels(false);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_focusedThumbDot->Fills()), (::app::Fuse::Drawing::Brush*)temp2);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(_focusedThumbDot->Behaviors()), (::app::Fuse::Behavior*)temp9);
    ::uPtr< ::app::Fuse::Translation*>(_sliderPos)->RelativeTo(::app::Fuse::TranslationModes__ParentSize);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp10)->HitTestMode(2);
    ::app::Fuse::Layouts::Layout__SetLayer(NULL, (::app::Fuse::Node*)temp10, 0);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp10->Children()), (::app::Fuse::Node*)_progressTrack);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp10->Children()), (::app::Fuse::Node*)temp12);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)_progressTrack, 0.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(_progressTrack)->Height(2.0f);
    _progressTrack->Alignment(9);
    _progressTrack->Name(::uGetConstString("_progressTrack"));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_progressTrack->Fills()), (::app::Fuse::Drawing::Brush*)temp3);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(_progressTrack->Behaviors()), (::app::Fuse::Behavior*)temp11);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp12)->Height(2.0f);
    temp12->Alignment(8);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(temp12->Fills()), (::app::Fuse::Drawing::Brush*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp12->Behaviors()), (::app::Fuse::Behavior*)temp13);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::ProgressAnimation*>(temp14)->Animators()), (::app::Fuse::Animations::Animator*)temp15);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp14->Animators()), (::app::Fuse::Animations::Animator*)temp16);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp15)->Value(100.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp16)->Value(1.0f);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileFocused*>(temp17)->Animators()), (::app::Fuse::Animations::Animator*)temp18);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp18)->Value(0.3f);
    temp18->Easing(17);
    temp18->EasingBack(16);
    temp18->Duration(0.25);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileInteracting*>(temp19)->Animators()), (::app::Fuse::Animations::Animator*)temp20);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp19->Animators()), (::app::Fuse::Animations::Animator*)temp21);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp20)->Factor(1.5f);
    temp20->Easing(17);
    temp20->EasingBack(16);
    temp20->Duration(0.25);
    temp20->Target((::app::Fuse::Node*)_thumbDot);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp21)->Value(0.3f);
    temp21->Easing(17);
    temp21->EasingBack(16);
    temp21->Duration(0.25);
    ::uPtr< ::app::Fuse::Controls::Slider*>(self)->AddStyleChild((::app::Fuse::Node*)_sliderThumb);
    self->AddStyleChild((::app::Fuse::Node*)temp10);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp5);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp14);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp17);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp19);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Template4__uType* BasicStyle_Template4__typeof()
{
    static ::uStaticStrong<BasicStyle_Template4__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Template4__uType*)::uAllocClassType(sizeof(BasicStyle_Template4__uType), "Fuse.BasicTheme.BasicStyle.Template4", false, 1, 8, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Button__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Button*, ::app::Fuse::Controls::Button*))BasicStyle_Template4__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicStyle_Template4__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(BasicStyle_Template4, __parent),
        "_buttonBackground_Color_inst", offsetof(BasicStyle_Template4, _buttonBackground_Color_inst),
        "self_Opacity_inst", offsetof(BasicStyle_Template4, self_Opacity_inst),
        "self_Text_inst", offsetof(BasicStyle_Template4, self_Text_inst),
        "temp_Value_inst", offsetof(BasicStyle_Template4, temp_Value_inst),
        "temp1_Color_inst", offsetof(BasicStyle_Template4, temp1_Color_inst),
        "temp2_Value_inst", offsetof(BasicStyle_Template4, temp2_Value_inst),
        "temp3_Value_inst", offsetof(BasicStyle_Template4, temp3_Value_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Template4__New_1, 0, true, BasicStyle_Template4__typeof(), ::app::Fuse::BasicTheme::BasicStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Template4___ObjInit_1(BasicStyle_Template4* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Button___ObjInit(__this);
    __this->__parent = parent;
}

BasicStyle_Template4* BasicStyle_Template4__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    BasicStyle_Template4* inst = (BasicStyle_Template4*)::uAllocObject(sizeof(BasicStyle_Template4), BasicStyle_Template4__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void BasicStyle_Template4__OnApply(BasicStyle_Template4* __this, ::app::Fuse::Controls::Button* self)
{
    ::app::ButtonText* temp = ::app::ButtonText__New_2(NULL);
    __this->temp_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)temp);
    __this->self_Text_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_Button_string_Text_Property__New_1(NULL, self);
    ::app::Fuse::Drawing::SolidColor* _buttonBackground = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_buttonBackground_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _buttonBackground);
    __this->self_Opacity_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)self);
    ::app::Fuse::Effects::DropShadow* temp1 = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    __this->temp1_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__New_1(NULL, temp1);
    ::app::Fuse::Animations::Change__float4* temp2 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_buttonBackground_Color_inst);
    __this->temp2_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, temp2);
    ::app::Fuse::Animations::Change__float4* temp3 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_buttonBackground_Color_inst);
    __this->temp3_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, temp3);
    ::app::Fuse::Controls::PropertyBinding__string* temp4 = ::app::Fuse::Controls::PropertyBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->temp_Value_inst, (::app::Uno::UX::Property__string*)__this->self_Text_inst);
    ::app::Fuse::Controls::Rectangle* temp5 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp6 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_buttonBackground_Color_inst, ::uGetConstString("C600"));
    ::app::Fuse::Gestures::WhilePressed* temp7 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Triggers::WhileDisabled* temp8 = ::app::Fuse::Triggers::WhileDisabled__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp9 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->self_Opacity_inst);
    ::app::Fuse::Resources::ResourceBinding__float4* temp10 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp1_Color_inst, ::uGetConstString("C700"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp11 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp2_Value_inst, ::uGetConstString("C700"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp12 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp3_Value_inst, ::uGetConstString("CFillFore"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinWidthProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 88.0f);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 38.0f);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__MarginProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 6.0f, 6.0f, 6.0f, 6.0f));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__PaddingProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 9.0f, 4.0f, 9.0f, 4.0f));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__string*>(::app::Fuse::Node__NameProperty)->SetStyle((::app::Fuse::Node*)self, ::uGetConstString("_buttonSelf"));
    ::app::Fuse::Input::Focus__SetStyleIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::ButtonText*>(temp)->Behaviors()), (::app::Fuse::Behavior*)temp4);
    ::uPtr< ::app::Fuse::Effects::DropShadow*>(temp1)->Size(0.1f);
    temp1->Angle(90.0f);
    temp1->Distance(2.0f);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp5)->CornerRadius(::app::Uno::Float4__New_2(NULL, 4.0f, 4.0f, 4.0f, 4.0f));
    ::app::Fuse::Layouts::Layout__SetLayer(NULL, (::app::Fuse::Node*)temp5, 0);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(temp5->Fills()), (::app::Fuse::Drawing::Brush*)_buttonBackground);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp5->Behaviors()), (::app::Fuse::Behavior*)temp6);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp7)->Animators()), (::app::Fuse::Animations::Animator*)temp2);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp2)->Duration(0.0);
    temp2->DurationBack(0.15);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileDisabled*>(temp8)->Animators()), (::app::Fuse::Animations::Animator*)temp3);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp8->Animators()), (::app::Fuse::Animations::Animator*)temp9);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp3)->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp9)->Value(0.52f);
    temp9->Duration(0.25);
    ::uPtr< ::app::Fuse::Controls::Button*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
    self->AddStyleChild((::app::Fuse::Node*)temp5);
    self->AddStyleEffect((::app::Fuse::Effects::Effect*)temp1);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp10);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp11);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp12);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp7);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp8);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BasicStyle_Template5__uType* BasicStyle_Template5__typeof()
{
    static ::uStaticStrong<BasicStyle_Template5__uType*> type;
    if (type != NULL) return type;

    type = (BasicStyle_Template5__uType*)::uAllocClassType(sizeof(BasicStyle_Template5__uType), "Fuse.BasicTheme.BasicStyle.Template5", false, 1, 10, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_TextInput__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextInput*, ::app::Fuse::Controls::TextInput*))BasicStyle_Template5__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicStyle_Template5__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(BasicStyle_Template5, __parent),
        "_changeTextInputDividerFill1_Value_inst", offsetof(BasicStyle_Template5, _changeTextInputDividerFill1_Value_inst),
        "_changeTextInputDividerFill2_Value_inst", offsetof(BasicStyle_Template5, _changeTextInputDividerFill2_Value_inst),
        "_dividerRect_Height_inst", offsetof(BasicStyle_Template5, _dividerRect_Height_inst),
        "_textInputDivider_Color_inst", offsetof(BasicStyle_Template5, _textInputDivider_Color_inst),
        "self_Focus_IsFocusable_inst", offsetof(BasicStyle_Template5, self_Focus_IsFocusable_inst),
        "self_TextColor_inst", offsetof(BasicStyle_Template5, self_TextColor_inst),
        "temp_Value_inst", offsetof(BasicStyle_Template5, temp_Value_inst),
        "temp1_Value_inst", offsetof(BasicStyle_Template5, temp1_Value_inst),
        "temp2_IsActive_inst", offsetof(BasicStyle_Template5, temp2_IsActive_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BasicStyle_Template5__New_1, 0, true, BasicStyle_Template5__typeof(), ::app::Fuse::BasicTheme::BasicStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicStyle_Template5___ObjInit_1(BasicStyle_Template5* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextInput___ObjInit(__this);
    __this->__parent = parent;
}

BasicStyle_Template5* BasicStyle_Template5__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicStyle* parent)
{
    BasicStyle_Template5* inst = (BasicStyle_Template5*)::uAllocObject(sizeof(BasicStyle_Template5), BasicStyle_Template5__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void BasicStyle_Template5__OnApply(BasicStyle_Template5* __this, ::app::Fuse::Controls::TextInput* self)
{
    ::app::Fuse::Drawing::SolidColor* _textInputDivider = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_textInputDivider_Color_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _textInputDivider);
    ::app::Fuse::Animations::Change__float4* _changeTextInputDividerFill1 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_textInputDivider_Color_inst);
    __this->_changeTextInputDividerFill1_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, _changeTextInputDividerFill1);
    ::app::Fuse::Animations::Change__float4* _changeTextInputDividerFill2 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_textInputDivider_Color_inst);
    __this->_changeTextInputDividerFill2_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, _changeTextInputDividerFill2);
    __this->self_TextColor_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)self);
    ::app::Fuse::Controls::Rectangle* _dividerRect = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    __this->_dividerRect_Height_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Height_Property__New_1(NULL, (::app::Fuse::Elements::Element*)_dividerRect);
    ::app::Fuse::Animations::Change__float4* temp = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->self_TextColor_inst);
    __this->temp_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, temp);
    ::app::Fuse::Animations::Change__float4* temp1 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_textInputDivider_Color_inst);
    __this->temp1_Value_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, temp1);
    ::app::Fuse::Triggers::Actions::GiveFocus* temp2 = ::app::Fuse::Triggers::Actions::GiveFocus__New_1(NULL);
    __this->temp2_IsActive_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__New_1(NULL, (::app::Fuse::Triggers::Actions::TriggerAction*)temp2);
    __this->self_Focus_IsFocusable_inst = ::app::Fuse::BasicTheme::BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__New_1(NULL, (::app::Fuse::Node*)self);
    ::app::Fuse::Controls::PlainTextEdit* _textInputCore = ::app::Fuse::Controls::PlainTextEdit__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp3 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp4 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_textInputDivider_Color_inst, ::uGetConstString("CLine"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp5 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_changeTextInputDividerFill1_Value_inst, ::uGetConstString("C700"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp6 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_changeTextInputDividerFill2_Value_inst, ::uGetConstString("C700"));
    ::app::Fuse::Triggers::WhileDisabled* temp7 = ::app::Fuse::Triggers::WhileDisabled__New_1(NULL);
    ::app::Fuse::Triggers::WhileFocusWithin* temp8 = ::app::Fuse::Triggers::WhileFocusWithin__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp9 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_dividerRect_Height_inst);
    ::app::Fuse::Gestures::WhilePressed* temp10 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp11 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_dividerRect_Height_inst);
    ::app::Fuse::Resources::ResourceBinding__float4* temp12 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp_Value_inst, ::uGetConstString("CLine"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp13 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->temp1_Value_inst, ::uGetConstString("CLine"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp14 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_changeTextInputDividerFill1_Value_inst, ::uGetConstString("CFillFore"));
    ::app::Fuse::Controls::PropertyBinding__bool* temp15 = ::app::Fuse::Controls::PropertyBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp2_IsActive_inst, (::app::Uno::UX::Property__bool*)__this->self_Focus_IsFocusable_inst);
    ::app::Fuse::Resources::ResourceBinding__float4* temp16 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_changeTextInputDividerFill2_Value_inst, ::uGetConstString("CFillFore"));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(::app::Fuse::Controls::TextControl__FontSizeProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, 16.0f);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*>(::app::Fuse::Controls::TextControl__TextColorProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*>(::app::Fuse::Elements::Element__HitTestModeProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 6);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__MarginProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 8.0f, 8.0f, 8.0f, 8.0f));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__PaddingProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 16.0f));
    ::app::Fuse::Input::Focus__SetStyleIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::uPtr< ::app::Fuse::Controls::PlainTextEdit*>(_textInputCore)->Alignment(12);
    _textInputCore->Name(::uGetConstString("_textInputCore"));
    ::app::Fuse::Layouts::Layout__SetLayer(NULL, (::app::Fuse::Node*)temp3, 0);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp3)->Children()), (::app::Fuse::Node*)_dividerRect);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(_dividerRect)->Height(1.0f);
    _dividerRect->Alignment(12);
    _dividerRect->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 8.0f, 0.0f, 8.0f));
    _dividerRect->Name(::uGetConstString("_dividerRect"));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_dividerRect->Fills()), (::app::Fuse::Drawing::Brush*)_textInputDivider);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(_dividerRect->Behaviors()), (::app::Fuse::Behavior*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileDisabled*>(temp7)->Animators()), (::app::Fuse::Animations::Animator*)temp);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp7->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp)->Easing(17);
    temp->EasingBack(16);
    temp->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp1)->Easing(17);
    temp1->EasingBack(16);
    temp1->Duration(0.25);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileFocusWithin*>(temp8)->Animators()), (::app::Fuse::Animations::Animator*)_changeTextInputDividerFill1);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp8->Animators()), (::app::Fuse::Animations::Animator*)temp9);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_changeTextInputDividerFill1)->Easing(17);
    _changeTextInputDividerFill1->EasingBack(16);
    _changeTextInputDividerFill1->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp9)->Value(2.0f);
    temp9->Easing(17);
    temp9->EasingBack(16);
    temp9->Duration(0.25);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp10)->Animators()), (::app::Fuse::Animations::Animator*)_changeTextInputDividerFill2);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp10->Animators()), (::app::Fuse::Animations::Animator*)temp11);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp10->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp2);
    ::uPtr< ::app::Fuse::Triggers::Actions::GiveFocus*>(temp2)->Target((::app::Fuse::Node*)_textInputCore);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_changeTextInputDividerFill2)->Easing(17);
    _changeTextInputDividerFill2->EasingBack(16);
    _changeTextInputDividerFill2->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp11)->Value(2.0f);
    temp11->Easing(17);
    temp11->EasingBack(16);
    temp11->Duration(0.25);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, ::app::Fuse::BasicTheme::BasicStyle__RobotoRegular);
    ::app::Fuse::Input::Focus__SetStyleFocusDelegate(NULL, (::app::Fuse::Node*)self, (::app::Fuse::Node*)_textInputCore);
    ::uPtr< ::app::Fuse::Controls::TextInput*>(self)->AddStyleChild((::app::Fuse::Node*)_textInputCore);
    self->AddStyleChild((::app::Fuse::Node*)temp3);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp12);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp13);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp14);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp15);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp16);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp5);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp6);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp7);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp8);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp10);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Theme*> BasicTheme___singleton_1;

BasicTheme__uType* BasicTheme__typeof()
{
    static ::uStaticStrong<BasicTheme__uType*> type;
    if (type != NULL) return type;

    type = (BasicTheme__uType*)::uAllocClassType(sizeof(BasicTheme__uType), "Fuse.BasicTheme.BasicTheme", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::GraphicsTheme__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(BasicTheme__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_singleton", &BasicTheme___singleton_1, 0, ::app::Fuse::Theme__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Singleton", BasicTheme__get_Singleton_1, 0, true, ::app::Fuse::Theme__typeof()),
        ::uNewFunction(".ctor", BasicTheme__New_3, 0, true, BasicTheme__typeof()));

    ::uRegisterType(type);
    return type;
}

void BasicTheme___ObjInit_4(BasicTheme* __this)
{
    ::app::Fuse::GraphicsTheme___ObjInit_3(__this);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)::app::Fuse::BasicTheme::BasicStyle__New_2(NULL));
}

::app::Fuse::Theme* BasicTheme__get_Singleton_1(::uStatic* __this)
{
    if (BasicTheme___singleton_1 == NULL)
    {
        BasicTheme___singleton_1 = (::app::Fuse::Theme*)BasicTheme__New_3(NULL);
    }

    return BasicTheme___singleton_1;
}

BasicTheme* BasicTheme__New_3(::uStatic* __this)
{
    BasicTheme* inst = (BasicTheme*)::uAllocObject(sizeof(BasicTheme), BasicTheme__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ColorScheme__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.BasicTheme.ColorScheme", ::app::Uno::Int__typeof(), 19);

    type->SetLiterals(
        "LightBlue", 0LL,
        "BlueGrey", 1LL,
        "Blue", 2LL,
        "Brown", 3LL,
        "Cyan", 4LL,
        "Amber", 5LL,
        "DeepOrange", 6LL,
        "DeepPurple", 7LL,
        "Green", 8LL,
        "Grey", 9LL,
        "Indigo", 10LL,
        "LightGreen", 11LL,
        "Lime", 12LL,
        "Orange", 13LL,
        "Pink", 14LL,
        "Purple", 15LL,
        "Red", 16LL,
        "Teal", 17LL,
        "Yellow", 18LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultBasicTheme__uType* DefaultBasicTheme__typeof()
{
    static ::uStaticStrong<DefaultBasicTheme__uType*> type;
    if (type != NULL) return type;

    type = (DefaultBasicTheme__uType*)::uAllocClassType(sizeof(DefaultBasicTheme__uType), "Fuse.BasicTheme.DefaultBasicTheme");

    ::uRegisterType(type);
    return type;
}

}}}
