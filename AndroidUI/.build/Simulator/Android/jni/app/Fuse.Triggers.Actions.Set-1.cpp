#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.KeyframeInterpolation.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticBrush.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.CachingMode.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Edge.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Internal.Blender__bool.h>
#include <app/Fuse.Internal.Blender__char.h>
#include <app/Fuse.Internal.Blender__double.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.Blender__float3.h>
#include <app/Fuse.Internal.Blender__float4.h>
#include <app/Fuse.Internal.Blender__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Internal.Blender__Fuse_Animations_Easing.h>
#include <app/Fuse.Internal.Blender__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Internal.Blender__Fuse_Animations_MixOp.h>
#include <app/Fuse.Internal.Blender__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Internal.Blender__Fuse_Drawing_Brush.h>
#include <app/Fuse.Internal.Blender__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Internal.Blender__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Internal.Blender__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Internal.Blender__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Internal.Blender__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_Alignment.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_Element.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_Visibility.h>
#include <app/Fuse.Internal.Blender__Fuse_Font.h>
#include <app/Fuse.Internal.Blender__Fuse_Gestures_Edge.h>
#include <app/Fuse.Internal.Blender__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Internal.Blender__Fuse_Layouts_Dock.h>
#include <app/Fuse.Internal.Blender__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Internal.Blender__Fuse_Layouts_Metric.h>
#include <app/Fuse.Internal.Blender__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Internal.Blender__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Internal.Blender__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Internal.Blender__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Internal.Blender__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Internal.Blender__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Internal.Blender__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Internal.Blender__Fuse_Node.h>
#include <app/Fuse.Internal.Blender__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Internal.Blender__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Internal.Blender__Fuse_Triggers_State.h>
#include <app/Fuse.Internal.Blender__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Internal.Blender__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Internal.Blender__int.h>
#include <app/Fuse.Internal.Blender__int2.h>
#include <app/Fuse.Internal.Blender__int3.h>
#include <app/Fuse.Internal.Blender__int4.h>
#include <app/Fuse.Internal.Blender__long.h>
#include <app/Fuse.Internal.Blender__object.h>
#include <app/Fuse.Internal.Blender__short.h>
#include <app/Fuse.Internal.Blender__string.h>
#include <app/Fuse.Internal.Blender__Uno_EventArgs.h>
#include <app/Fuse.Internal.Blender__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Internal.Blender__Uno_UX_FileSource.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Layouts.FlowDirection.h>
#include <app/Fuse.Layouts.Metric.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Navigation.NavigationDirection.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Navigation.NavigationGotoMode.h>
#include <app/Fuse.Navigation.SnapTo.h>
#include <app/Fuse.Navigation.SwipeDirection.h>
#include <app/Fuse.Navigation.SwipeEnds.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Triggers.Actions.Set__bool.h>
#include <app/Fuse.Triggers.Actions.Set__char.h>
#include <app/Fuse.Triggers.Actions.Set__double.h>
#include <app/Fuse.Triggers.Actions.Set__float.h>
#include <app/Fuse.Triggers.Actions.Set__float2.h>
#include <app/Fuse.Triggers.Actions.Set__float3.h>
#include <app/Fuse.Triggers.Actions.Set__float4.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Animations_Easing.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Animations_MixOp.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Drawing_Brush.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_Alignment.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_Element.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Elements_Visibility.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Font.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Gestures_Edge.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Layouts_Dock.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Layouts_Metric.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Node.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Triggers_State.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Triggers.Actions.Set__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Triggers.Actions.Set__int.h>
#include <app/Fuse.Triggers.Actions.Set__int2.h>
#include <app/Fuse.Triggers.Actions.Set__int3.h>
#include <app/Fuse.Triggers.Actions.Set__int4.h>
#include <app/Fuse.Triggers.Actions.Set__long.h>
#include <app/Fuse.Triggers.Actions.Set__object.h>
#include <app/Fuse.Triggers.Actions.Set__short.h>
#include <app/Fuse.Triggers.Actions.Set__string.h>
#include <app/Fuse.Triggers.Actions.Set__Uno_EventArgs.h>
#include <app/Fuse.Triggers.Actions.Set__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Triggers.Actions.Set__Uno_UX_FileSource.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Expression__bool.h>
#include <app/Uno.UX.Expression__char.h>
#include <app/Uno.UX.Expression__double.h>
#include <app/Uno.UX.Expression__float.h>
#include <app/Uno.UX.Expression__float2.h>
#include <app/Uno.UX.Expression__float3.h>
#include <app/Uno.UX.Expression__float4.h>
#include <app/Uno.UX.Expression__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.Expression__Fuse_Animations_Easing.h>
#include <app/Uno.UX.Expression__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.Expression__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.Expression__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.Expression__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.Expression__Fuse_Elements_Element.h>
#include <app/Uno.UX.Expression__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.Expression__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.Expression__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.Expression__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.Expression__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.Expression__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.Expression__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.Expression__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.Expression__Fuse_Font.h>
#include <app/Uno.UX.Expression__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.Expression__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.Expression__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.Expression__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.Expression__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.Expression__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.Expression__Fuse_Node.h>
#include <app/Uno.UX.Expression__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.Expression__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.Expression__Fuse_Triggers_State.h>
#include <app/Uno.UX.Expression__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.Expression__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.Expression__int.h>
#include <app/Uno.UX.Expression__int2.h>
#include <app/Uno.UX.Expression__int3.h>
#include <app/Uno.UX.Expression__int4.h>
#include <app/Uno.UX.Expression__long.h>
#include <app/Uno.UX.Expression__object.h>
#include <app/Uno.UX.Expression__short.h>
#include <app/Uno.UX.Expression__string.h>
#include <app/Uno.UX.Expression__Uno_EventArgs.h>
#include <app/Uno.UX.Expression__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.Expression__Uno_UX_FileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__char.h>
#include <app/Uno.UX.Property__double.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float2.h>
#include <app/Uno.UX.Property__float3.h>
#include <app/Uno.UX.Property__float4.h>
#include <app/Uno.UX.Property__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.Property__Fuse_Animations_Easing.h>
#include <app/Uno.UX.Property__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.Property__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.Property__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.Property__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.Property__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.Property__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.Property__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.Property__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.Property__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.Property__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.Property__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.Property__Fuse_Elements_Element.h>
#include <app/Uno.UX.Property__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.Property__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.Property__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.Property__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.Property__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.Property__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.Property__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.Property__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.Property__Fuse_Font.h>
#include <app/Uno.UX.Property__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.Property__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.Property__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.Property__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.Property__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.Property__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.Property__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.Property__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.Property__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.Property__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.Property__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.Property__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.Property__Fuse_Node.h>
#include <app/Uno.UX.Property__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.Property__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.Property__Fuse_Triggers_State.h>
#include <app/Uno.UX.Property__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.Property__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.Property__int.h>
#include <app/Uno.UX.Property__int2.h>
#include <app/Uno.UX.Property__int3.h>
#include <app/Uno.UX.Property__int4.h>
#include <app/Uno.UX.Property__long.h>
#include <app/Uno.UX.Property__object.h>
#include <app/Uno.UX.Property__short.h>
#include <app/Uno.UX.Property__string.h>
#include <app/Uno.UX.Property__Uno_EventArgs.h>
#include <app/Uno.UX.Property__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.Property__Uno_UX_FileSource.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__bool__uType* Set__bool__typeof()
{
    static ::uStaticStrong<Set__bool__uType*> type;
    if (type != NULL) return type;

    type = (Set__bool__uType*)::uAllocClassType(sizeof(Set__bool__uType), "Fuse.Triggers.Actions.Set<bool>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__bool__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__bool, _blender),
        "_Expression", offsetof(Set__bool, _Expression),
        "_Target", offsetof(Set__bool, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__bool, _blender), ::app::Fuse::Internal::Blender__bool__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__bool, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__bool, _increment), ::app::Uno::Bool__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__bool, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__bool__get_Expression, 0, false, ::app::Uno::UX::Expression__bool__typeof()),
        ::uNewFunction("get_Increment", Set__bool__get_Increment, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", Set__bool__get_Target, 0, false, ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__bool__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", Set__bool__New_1, 0, true, Set__bool__typeof(), ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__bool__set_Expression, 0, false, ::app::Uno::UX::Expression__bool__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__bool__set_Increment, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Target", Set__bool__set_Target, 0, false, ::app::Uno::UX::Property__bool__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__bool__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__bool__set_Value, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__bool___ObjInit_1(Set__bool* __this, ::app::Uno::UX::Property__bool* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__bool__get_Expression(Set__bool* __this)
{
    return __this->_Expression;
}

bool Set__bool__get_Increment(Set__bool* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__bool* Set__bool__get_Target(Set__bool* __this)
{
    return __this->_Target;
}

bool Set__bool__get_UpdateRestValue(Set__bool* __this)
{
    return __this->_updateRestValue;
}

bool Set__bool__get_Value(Set__bool* __this)
{
    return __this->_Value;
}

Set__bool* Set__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target)
{
    Set__bool* inst = (Set__bool*)::uAllocObject(sizeof(Set__bool), Set__bool__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__bool__Perform(Set__bool* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< bool>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__bool__set_Expression(Set__bool* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__bool__set_Increment(Set__bool* __this, bool value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__bool(NULL);
    }
}

void Set__bool__set_Target(Set__bool* __this, ::app::Uno::UX::Property__bool* value)
{
    __this->_Target = value;
}

void Set__bool__set_UpdateRestValue(Set__bool* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__bool__set_Value(Set__bool* __this, bool value)
{
    __this->_Value = value;
}

void Set__bool__Update(Set__bool* __this, bool value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__char__uType* Set__char__typeof()
{
    static ::uStaticStrong<Set__char__uType*> type;
    if (type != NULL) return type;

    type = (Set__char__uType*)::uAllocClassType(sizeof(Set__char__uType), "Fuse.Triggers.Actions.Set<char>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__char__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__char, _blender),
        "_Expression", offsetof(Set__char, _Expression),
        "_Target", offsetof(Set__char, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__char, _blender), ::app::Fuse::Internal::Blender__char__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__char, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__char, _increment), ::app::Uno::Char__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__char, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__char__get_Expression, 0, false, ::app::Uno::UX::Expression__char__typeof()),
        ::uNewFunction("get_Increment", Set__char__get_Increment, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("get_Target", Set__char__get_Target, 0, false, ::app::Uno::UX::Property__char__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__char__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__char__get_Value, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction(".ctor", Set__char__New_1, 0, true, Set__char__typeof(), ::app::Uno::UX::Property__char__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__char__set_Expression, 0, false, ::app::Uno::UX::Expression__char__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__char__set_Increment, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("set_Target", Set__char__set_Target, 0, false, ::app::Uno::UX::Property__char__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__char__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__char__set_Value, 0, false, ::app::Uno::Char__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__char___ObjInit_1(Set__char* __this, ::app::Uno::UX::Property__char* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__char__get_Expression(Set__char* __this)
{
    return __this->_Expression;
}

::uChar Set__char__get_Increment(Set__char* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__char* Set__char__get_Target(Set__char* __this)
{
    return __this->_Target;
}

bool Set__char__get_UpdateRestValue(Set__char* __this)
{
    return __this->_updateRestValue;
}

::uChar Set__char__get_Value(Set__char* __this)
{
    return __this->_Value;
}

Set__char* Set__char__New_1(::uStatic* __this, ::app::Uno::UX::Property__char* target)
{
    Set__char* inst = (Set__char*)::uAllocObject(sizeof(Set__char), Set__char__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__char__Perform(Set__char* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__char*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::uChar>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__char__set_Expression(Set__char* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__char__set_Increment(Set__char* __this, ::uChar value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__char(NULL);
    }
}

void Set__char__set_Target(Set__char* __this, ::app::Uno::UX::Property__char* value)
{
    __this->_Target = value;
}

void Set__char__set_UpdateRestValue(Set__char* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__char__set_Value(Set__char* __this, ::uChar value)
{
    __this->_Value = value;
}

void Set__char__Update(Set__char* __this, ::uChar value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__char*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__double__uType* Set__double__typeof()
{
    static ::uStaticStrong<Set__double__uType*> type;
    if (type != NULL) return type;

    type = (Set__double__uType*)::uAllocClassType(sizeof(Set__double__uType), "Fuse.Triggers.Actions.Set<double>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__double__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__double, _blender),
        "_Expression", offsetof(Set__double, _Expression),
        "_Target", offsetof(Set__double, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__double, _blender), ::app::Fuse::Internal::Blender__double__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__double, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__double, _increment), ::app::Uno::Double__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__double, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__double__get_Expression, 0, false, ::app::Uno::UX::Expression__double__typeof()),
        ::uNewFunction("get_Increment", Set__double__get_Increment, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Target", Set__double__get_Target, 0, false, ::app::Uno::UX::Property__double__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__double__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__double__get_Value, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", Set__double__New_1, 0, true, Set__double__typeof(), ::app::Uno::UX::Property__double__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__double__set_Expression, 0, false, ::app::Uno::UX::Expression__double__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__double__set_Increment, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Target", Set__double__set_Target, 0, false, ::app::Uno::UX::Property__double__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__double__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__double__set_Value, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__double___ObjInit_1(Set__double* __this, ::app::Uno::UX::Property__double* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__double__get_Expression(Set__double* __this)
{
    return __this->_Expression;
}

double Set__double__get_Increment(Set__double* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__double* Set__double__get_Target(Set__double* __this)
{
    return __this->_Target;
}

bool Set__double__get_UpdateRestValue(Set__double* __this)
{
    return __this->_updateRestValue;
}

double Set__double__get_Value(Set__double* __this)
{
    return __this->_Value;
}

Set__double* Set__double__New_1(::uStatic* __this, ::app::Uno::UX::Property__double* target)
{
    Set__double* inst = (Set__double*)::uAllocObject(sizeof(Set__double), Set__double__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__double__Perform(Set__double* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__double*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< double>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__double__set_Expression(Set__double* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__double__set_Increment(Set__double* __this, double value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__double(NULL);
    }
}

void Set__double__set_Target(Set__double* __this, ::app::Uno::UX::Property__double* value)
{
    __this->_Target = value;
}

void Set__double__set_UpdateRestValue(Set__double* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__double__set_Value(Set__double* __this, double value)
{
    __this->_Value = value;
}

void Set__double__Update(Set__double* __this, double value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__double*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__float__uType* Set__float__typeof()
{
    static ::uStaticStrong<Set__float__uType*> type;
    if (type != NULL) return type;

    type = (Set__float__uType*)::uAllocClassType(sizeof(Set__float__uType), "Fuse.Triggers.Actions.Set<float>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__float__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__float, _blender),
        "_Expression", offsetof(Set__float, _Expression),
        "_Target", offsetof(Set__float, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__float, _blender), ::app::Fuse::Internal::Blender__float__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__float, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__float, _increment), ::app::Uno::Float__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__float, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__float__get_Expression, 0, false, ::app::Uno::UX::Expression__float__typeof()),
        ::uNewFunction("get_Increment", Set__float__get_Increment, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Target", Set__float__get_Target, 0, false, ::app::Uno::UX::Property__float__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__float__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__float__get_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Set__float__New_1, 0, true, Set__float__typeof(), ::app::Uno::UX::Property__float__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__float__set_Expression, 0, false, ::app::Uno::UX::Expression__float__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__float__set_Increment, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", Set__float__set_Target, 0, false, ::app::Uno::UX::Property__float__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__float__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__float__set_Value, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__float___ObjInit_1(Set__float* __this, ::app::Uno::UX::Property__float* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__float__get_Expression(Set__float* __this)
{
    return __this->_Expression;
}

float Set__float__get_Increment(Set__float* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__float* Set__float__get_Target(Set__float* __this)
{
    return __this->_Target;
}

bool Set__float__get_UpdateRestValue(Set__float* __this)
{
    return __this->_updateRestValue;
}

float Set__float__get_Value(Set__float* __this)
{
    return __this->_Value;
}

Set__float* Set__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target)
{
    Set__float* inst = (Set__float*)::uAllocObject(sizeof(Set__float), Set__float__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__float__Perform(Set__float* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< float>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__float__set_Expression(Set__float* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__float__set_Increment(Set__float* __this, float value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float(NULL);
    }
}

void Set__float__set_Target(Set__float* __this, ::app::Uno::UX::Property__float* value)
{
    __this->_Target = value;
}

void Set__float__set_UpdateRestValue(Set__float* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__float__set_Value(Set__float* __this, float value)
{
    __this->_Value = value;
}

void Set__float__Update(Set__float* __this, float value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__float2__uType* Set__float2__typeof()
{
    static ::uStaticStrong<Set__float2__uType*> type;
    if (type != NULL) return type;

    type = (Set__float2__uType*)::uAllocClassType(sizeof(Set__float2__uType), "Fuse.Triggers.Actions.Set<float2>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__float2__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__float2, _blender),
        "_Expression", offsetof(Set__float2, _Expression),
        "_Target", offsetof(Set__float2, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__float2, _blender), ::app::Fuse::Internal::Blender__float2__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__float2, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__float2, _increment), ::app::Uno::Float2__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__float2, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__float2__get_Expression, 0, false, ::app::Uno::UX::Expression__float2__typeof()),
        ::uNewFunction("get_Increment", Set__float2__get_Increment, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Target", Set__float2__get_Target, 0, false, ::app::Uno::UX::Property__float2__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__float2__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__float2__get_Value, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", Set__float2__New_1, 0, true, Set__float2__typeof(), ::app::Uno::UX::Property__float2__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__float2__set_Expression, 0, false, ::app::Uno::UX::Expression__float2__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__float2__set_Increment, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Target", Set__float2__set_Target, 0, false, ::app::Uno::UX::Property__float2__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__float2__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__float2__set_Value, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__float2___ObjInit_1(Set__float2* __this, ::app::Uno::UX::Property__float2* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__float2__get_Expression(Set__float2* __this)
{
    return __this->_Expression;
}

::app::Uno::Float2 Set__float2__get_Increment(Set__float2* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__float2* Set__float2__get_Target(Set__float2* __this)
{
    return __this->_Target;
}

bool Set__float2__get_UpdateRestValue(Set__float2* __this)
{
    return __this->_updateRestValue;
}

::app::Uno::Float2 Set__float2__get_Value(Set__float2* __this)
{
    return __this->_Value;
}

Set__float2* Set__float2__New_1(::uStatic* __this, ::app::Uno::UX::Property__float2* target)
{
    Set__float2* inst = (Set__float2*)::uAllocObject(sizeof(Set__float2), Set__float2__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__float2__Perform(Set__float2* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Uno::Float2>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__float2__set_Expression(Set__float2* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__float2__set_Increment(Set__float2* __this, ::app::Uno::Float2 value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    }
}

void Set__float2__set_Target(Set__float2* __this, ::app::Uno::UX::Property__float2* value)
{
    __this->_Target = value;
}

void Set__float2__set_UpdateRestValue(Set__float2* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__float2__set_Value(Set__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Value = value;
}

void Set__float2__Update(Set__float2* __this, ::app::Uno::Float2 value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__float3__uType* Set__float3__typeof()
{
    static ::uStaticStrong<Set__float3__uType*> type;
    if (type != NULL) return type;

    type = (Set__float3__uType*)::uAllocClassType(sizeof(Set__float3__uType), "Fuse.Triggers.Actions.Set<float3>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__float3__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__float3, _blender),
        "_Expression", offsetof(Set__float3, _Expression),
        "_Target", offsetof(Set__float3, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__float3, _blender), ::app::Fuse::Internal::Blender__float3__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__float3, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__float3, _increment), ::app::Uno::Float3__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__float3, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__float3__get_Expression, 0, false, ::app::Uno::UX::Expression__float3__typeof()),
        ::uNewFunction("get_Increment", Set__float3__get_Increment, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_Target", Set__float3__get_Target, 0, false, ::app::Uno::UX::Property__float3__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__float3__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__float3__get_Value, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", Set__float3__New_1, 0, true, Set__float3__typeof(), ::app::Uno::UX::Property__float3__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__float3__set_Expression, 0, false, ::app::Uno::UX::Expression__float3__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__float3__set_Increment, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_Target", Set__float3__set_Target, 0, false, ::app::Uno::UX::Property__float3__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__float3__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__float3__set_Value, 0, false, ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__float3___ObjInit_1(Set__float3* __this, ::app::Uno::UX::Property__float3* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__float3__get_Expression(Set__float3* __this)
{
    return __this->_Expression;
}

::app::Uno::Float3 Set__float3__get_Increment(Set__float3* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__float3* Set__float3__get_Target(Set__float3* __this)
{
    return __this->_Target;
}

bool Set__float3__get_UpdateRestValue(Set__float3* __this)
{
    return __this->_updateRestValue;
}

::app::Uno::Float3 Set__float3__get_Value(Set__float3* __this)
{
    return __this->_Value;
}

Set__float3* Set__float3__New_1(::uStatic* __this, ::app::Uno::UX::Property__float3* target)
{
    Set__float3* inst = (Set__float3*)::uAllocObject(sizeof(Set__float3), Set__float3__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__float3__Perform(Set__float3* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__float3*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Uno::Float3>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__float3__set_Expression(Set__float3* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__float3__set_Increment(Set__float3* __this, ::app::Uno::Float3 value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float3(NULL);
    }
}

void Set__float3__set_Target(Set__float3* __this, ::app::Uno::UX::Property__float3* value)
{
    __this->_Target = value;
}

void Set__float3__set_UpdateRestValue(Set__float3* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__float3__set_Value(Set__float3* __this, ::app::Uno::Float3 value)
{
    __this->_Value = value;
}

void Set__float3__Update(Set__float3* __this, ::app::Uno::Float3 value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__float4__uType* Set__float4__typeof()
{
    static ::uStaticStrong<Set__float4__uType*> type;
    if (type != NULL) return type;

    type = (Set__float4__uType*)::uAllocClassType(sizeof(Set__float4__uType), "Fuse.Triggers.Actions.Set<float4>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__float4__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__float4, _blender),
        "_Expression", offsetof(Set__float4, _Expression),
        "_Target", offsetof(Set__float4, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__float4, _blender), ::app::Fuse::Internal::Blender__float4__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__float4, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__float4, _increment), ::app::Uno::Float4__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__float4, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__float4__get_Expression, 0, false, ::app::Uno::UX::Expression__float4__typeof()),
        ::uNewFunction("get_Increment", Set__float4__get_Increment, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Target", Set__float4__get_Target, 0, false, ::app::Uno::UX::Property__float4__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__float4__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__float4__get_Value, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", Set__float4__New_1, 0, true, Set__float4__typeof(), ::app::Uno::UX::Property__float4__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__float4__set_Expression, 0, false, ::app::Uno::UX::Expression__float4__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__float4__set_Increment, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Target", Set__float4__set_Target, 0, false, ::app::Uno::UX::Property__float4__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__float4__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__float4__set_Value, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__float4___ObjInit_1(Set__float4* __this, ::app::Uno::UX::Property__float4* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__float4__get_Expression(Set__float4* __this)
{
    return __this->_Expression;
}

::app::Uno::Float4 Set__float4__get_Increment(Set__float4* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__float4* Set__float4__get_Target(Set__float4* __this)
{
    return __this->_Target;
}

bool Set__float4__get_UpdateRestValue(Set__float4* __this)
{
    return __this->_updateRestValue;
}

::app::Uno::Float4 Set__float4__get_Value(Set__float4* __this)
{
    return __this->_Value;
}

Set__float4* Set__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target)
{
    Set__float4* inst = (Set__float4*)::uAllocObject(sizeof(Set__float4), Set__float4__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__float4__Perform(Set__float4* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Uno::Float4>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__float4__set_Expression(Set__float4* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__float4__set_Increment(Set__float4* __this, ::app::Uno::Float4 value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float4(NULL);
    }
}

void Set__float4__set_Target(Set__float4* __this, ::app::Uno::UX::Property__float4* value)
{
    __this->_Target = value;
}

void Set__float4__set_UpdateRestValue(Set__float4* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__float4__set_Value(Set__float4* __this, ::app::Uno::Float4 value)
{
    __this->_Value = value;
}

void Set__float4__Update(Set__float4* __this, ::app::Uno::Float4 value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Animations_AnimationVariant__uType* Set__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<Set__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(Set__Fuse_Animations_AnimationVariant__uType), "Fuse.Triggers.Actions.Set<Fuse.Animations.AnimationVariant>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Animations_AnimationVariant__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Animations_AnimationVariant, _blender),
        "_Expression", offsetof(Set__Fuse_Animations_AnimationVariant, _Expression),
        "_Target", offsetof(Set__Fuse_Animations_AnimationVariant, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Animations_AnimationVariant, _blender), ::app::Fuse::Internal::Blender__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Animations_AnimationVariant, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Animations_AnimationVariant, _increment), ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Animations_AnimationVariant, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Animations_AnimationVariant__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Animations_AnimationVariant__get_Increment, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Animations_AnimationVariant__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Animations_AnimationVariant__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Animations_AnimationVariant__get_Value, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Animations_AnimationVariant__New_1, 0, true, Set__Fuse_Animations_AnimationVariant__typeof(), ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Animations_AnimationVariant__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Animations_AnimationVariant__set_Increment, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Animations_AnimationVariant__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Animations_AnimationVariant__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Animations_AnimationVariant__set_Value, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Animations_AnimationVariant___ObjInit_1(Set__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Animations_AnimationVariant__get_Expression(Set__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Animations_AnimationVariant__get_Increment(Set__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* Set__Fuse_Animations_AnimationVariant__get_Target(Set__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Animations_AnimationVariant__get_UpdateRestValue(Set__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Animations_AnimationVariant__get_Value(Set__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_Value;
}

Set__Fuse_Animations_AnimationVariant* Set__Fuse_Animations_AnimationVariant__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* target)
{
    Set__Fuse_Animations_AnimationVariant* inst = (Set__Fuse_Animations_AnimationVariant*)::uAllocObject(sizeof(Set__Fuse_Animations_AnimationVariant), Set__Fuse_Animations_AnimationVariant__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Animations_AnimationVariant__Perform(Set__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Animations_AnimationVariant*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Animations_AnimationVariant__set_Expression(Set__Fuse_Animations_AnimationVariant* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Animations_AnimationVariant__set_Increment(Set__Fuse_Animations_AnimationVariant* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Animations_AnimationVariant(NULL);
    }
}

void Set__Fuse_Animations_AnimationVariant__set_Target(Set__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* value)
{
    __this->_Target = value;
}

void Set__Fuse_Animations_AnimationVariant__set_UpdateRestValue(Set__Fuse_Animations_AnimationVariant* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Animations_AnimationVariant__set_Value(Set__Fuse_Animations_AnimationVariant* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Animations_AnimationVariant__Update(Set__Fuse_Animations_AnimationVariant* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Animations_Easing__uType* Set__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<Set__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(Set__Fuse_Animations_Easing__uType), "Fuse.Triggers.Actions.Set<Fuse.Animations.Easing>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Animations_Easing__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Animations_Easing, _blender),
        "_Expression", offsetof(Set__Fuse_Animations_Easing, _Expression),
        "_Target", offsetof(Set__Fuse_Animations_Easing, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Animations_Easing, _blender), ::app::Fuse::Internal::Blender__Fuse_Animations_Easing__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Animations_Easing, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Animations_Easing, _increment), ::app::Fuse::Animations::Easing__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Animations_Easing, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Animations_Easing__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Animations_Easing__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Animations_Easing__get_Increment, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Animations_Easing__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Animations_Easing__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Animations_Easing__get_Value, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Animations_Easing__New_1, 0, true, Set__Fuse_Animations_Easing__typeof(), ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Animations_Easing__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Animations_Easing__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Animations_Easing__set_Increment, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Animations_Easing__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_Easing__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Animations_Easing__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Animations_Easing__set_Value, 0, false, ::app::Fuse::Animations::Easing__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Animations_Easing___ObjInit_1(Set__Fuse_Animations_Easing* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Animations_Easing__get_Expression(Set__Fuse_Animations_Easing* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Animations_Easing__get_Increment(Set__Fuse_Animations_Easing* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Animations_Easing* Set__Fuse_Animations_Easing__get_Target(Set__Fuse_Animations_Easing* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Animations_Easing__get_UpdateRestValue(Set__Fuse_Animations_Easing* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Animations_Easing__get_Value(Set__Fuse_Animations_Easing* __this)
{
    return __this->_Value;
}

Set__Fuse_Animations_Easing* Set__Fuse_Animations_Easing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* target)
{
    Set__Fuse_Animations_Easing* inst = (Set__Fuse_Animations_Easing*)::uAllocObject(sizeof(Set__Fuse_Animations_Easing), Set__Fuse_Animations_Easing__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Animations_Easing__Perform(Set__Fuse_Animations_Easing* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Animations_Easing*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Animations_Easing__set_Expression(Set__Fuse_Animations_Easing* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Animations_Easing__set_Increment(Set__Fuse_Animations_Easing* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Animations_Easing(NULL);
    }
}

void Set__Fuse_Animations_Easing__set_Target(Set__Fuse_Animations_Easing* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* value)
{
    __this->_Target = value;
}

void Set__Fuse_Animations_Easing__set_UpdateRestValue(Set__Fuse_Animations_Easing* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Animations_Easing__set_Value(Set__Fuse_Animations_Easing* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Animations_Easing__Update(Set__Fuse_Animations_Easing* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Animations_KeyframeInterpolation__uType* Set__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<Set__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(Set__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Triggers.Actions.Set<Fuse.Animations.KeyframeInterpolation>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Animations_KeyframeInterpolation__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Animations_KeyframeInterpolation, _blender),
        "_Expression", offsetof(Set__Fuse_Animations_KeyframeInterpolation, _Expression),
        "_Target", offsetof(Set__Fuse_Animations_KeyframeInterpolation, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Animations_KeyframeInterpolation, _blender), ::app::Fuse::Internal::Blender__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Animations_KeyframeInterpolation, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Animations_KeyframeInterpolation, _increment), ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Animations_KeyframeInterpolation, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Animations_KeyframeInterpolation__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Animations_KeyframeInterpolation__get_Increment, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Animations_KeyframeInterpolation__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Animations_KeyframeInterpolation__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Animations_KeyframeInterpolation__get_Value, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Animations_KeyframeInterpolation__New_1, 0, true, Set__Fuse_Animations_KeyframeInterpolation__typeof(), ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Animations_KeyframeInterpolation__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Animations_KeyframeInterpolation__set_Increment, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Animations_KeyframeInterpolation__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Animations_KeyframeInterpolation__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Animations_KeyframeInterpolation__set_Value, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Animations_KeyframeInterpolation___ObjInit_1(Set__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Animations_KeyframeInterpolation__get_Expression(Set__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Animations_KeyframeInterpolation__get_Increment(Set__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* Set__Fuse_Animations_KeyframeInterpolation__get_Target(Set__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Animations_KeyframeInterpolation__get_UpdateRestValue(Set__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Animations_KeyframeInterpolation__get_Value(Set__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_Value;
}

Set__Fuse_Animations_KeyframeInterpolation* Set__Fuse_Animations_KeyframeInterpolation__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* target)
{
    Set__Fuse_Animations_KeyframeInterpolation* inst = (Set__Fuse_Animations_KeyframeInterpolation*)::uAllocObject(sizeof(Set__Fuse_Animations_KeyframeInterpolation), Set__Fuse_Animations_KeyframeInterpolation__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Animations_KeyframeInterpolation__Perform(Set__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Animations_KeyframeInterpolation*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Animations_KeyframeInterpolation__set_Expression(Set__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Animations_KeyframeInterpolation__set_Increment(Set__Fuse_Animations_KeyframeInterpolation* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Animations_KeyframeInterpolation(NULL);
    }
}

void Set__Fuse_Animations_KeyframeInterpolation__set_Target(Set__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* value)
{
    __this->_Target = value;
}

void Set__Fuse_Animations_KeyframeInterpolation__set_UpdateRestValue(Set__Fuse_Animations_KeyframeInterpolation* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Animations_KeyframeInterpolation__set_Value(Set__Fuse_Animations_KeyframeInterpolation* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Animations_KeyframeInterpolation__Update(Set__Fuse_Animations_KeyframeInterpolation* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Animations_MixOp__uType* Set__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<Set__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(Set__Fuse_Animations_MixOp__uType), "Fuse.Triggers.Actions.Set<Fuse.Animations.MixOp>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Animations_MixOp__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Animations_MixOp, _blender),
        "_Expression", offsetof(Set__Fuse_Animations_MixOp, _Expression),
        "_Target", offsetof(Set__Fuse_Animations_MixOp, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Animations_MixOp, _blender), ::app::Fuse::Internal::Blender__Fuse_Animations_MixOp__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Animations_MixOp, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Animations_MixOp, _increment), ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Animations_MixOp, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Animations_MixOp__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Animations_MixOp__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Animations_MixOp__get_Increment, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Animations_MixOp__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Animations_MixOp__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Animations_MixOp__get_Value, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Animations_MixOp__New_1, 0, true, Set__Fuse_Animations_MixOp__typeof(), ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Animations_MixOp__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Animations_MixOp__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Animations_MixOp__set_Increment, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Animations_MixOp__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Animations_MixOp__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Animations_MixOp__set_Value, 0, false, ::app::Fuse::Animations::MixOp__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Animations_MixOp___ObjInit_1(Set__Fuse_Animations_MixOp* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Animations_MixOp__get_Expression(Set__Fuse_Animations_MixOp* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Animations_MixOp__get_Increment(Set__Fuse_Animations_MixOp* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Animations_MixOp* Set__Fuse_Animations_MixOp__get_Target(Set__Fuse_Animations_MixOp* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Animations_MixOp__get_UpdateRestValue(Set__Fuse_Animations_MixOp* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Animations_MixOp__get_Value(Set__Fuse_Animations_MixOp* __this)
{
    return __this->_Value;
}

Set__Fuse_Animations_MixOp* Set__Fuse_Animations_MixOp__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* target)
{
    Set__Fuse_Animations_MixOp* inst = (Set__Fuse_Animations_MixOp*)::uAllocObject(sizeof(Set__Fuse_Animations_MixOp), Set__Fuse_Animations_MixOp__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Animations_MixOp__Perform(Set__Fuse_Animations_MixOp* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Animations_MixOp*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Animations_MixOp__set_Expression(Set__Fuse_Animations_MixOp* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Animations_MixOp__set_Increment(Set__Fuse_Animations_MixOp* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Animations_MixOp(NULL);
    }
}

void Set__Fuse_Animations_MixOp__set_Target(Set__Fuse_Animations_MixOp* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* value)
{
    __this->_Target = value;
}

void Set__Fuse_Animations_MixOp__set_UpdateRestValue(Set__Fuse_Animations_MixOp* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Animations_MixOp__set_Value(Set__Fuse_Animations_MixOp* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Animations_MixOp__Update(Set__Fuse_Animations_MixOp* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Drawing_BlendMode__uType* Set__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<Set__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(Set__Fuse_Drawing_BlendMode__uType), "Fuse.Triggers.Actions.Set<Fuse.Drawing.BlendMode>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Drawing_BlendMode__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Drawing_BlendMode, _blender),
        "_Expression", offsetof(Set__Fuse_Drawing_BlendMode, _Expression),
        "_Target", offsetof(Set__Fuse_Drawing_BlendMode, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Drawing_BlendMode, _blender), ::app::Fuse::Internal::Blender__Fuse_Drawing_BlendMode__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Drawing_BlendMode, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Drawing_BlendMode, _increment), ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Drawing_BlendMode, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Drawing_BlendMode__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Drawing_BlendMode__get_Increment, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Drawing_BlendMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Drawing_BlendMode__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Drawing_BlendMode__get_Value, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Drawing_BlendMode__New_1, 0, true, Set__Fuse_Drawing_BlendMode__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Drawing_BlendMode__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Drawing_BlendMode__set_Increment, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Drawing_BlendMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Drawing_BlendMode__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Drawing_BlendMode__set_Value, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Drawing_BlendMode___ObjInit_1(Set__Fuse_Drawing_BlendMode* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Drawing_BlendMode__get_Expression(Set__Fuse_Drawing_BlendMode* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Drawing_BlendMode__get_Increment(Set__Fuse_Drawing_BlendMode* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Drawing_BlendMode* Set__Fuse_Drawing_BlendMode__get_Target(Set__Fuse_Drawing_BlendMode* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Drawing_BlendMode__get_UpdateRestValue(Set__Fuse_Drawing_BlendMode* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Drawing_BlendMode__get_Value(Set__Fuse_Drawing_BlendMode* __this)
{
    return __this->_Value;
}

Set__Fuse_Drawing_BlendMode* Set__Fuse_Drawing_BlendMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* target)
{
    Set__Fuse_Drawing_BlendMode* inst = (Set__Fuse_Drawing_BlendMode*)::uAllocObject(sizeof(Set__Fuse_Drawing_BlendMode), Set__Fuse_Drawing_BlendMode__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Drawing_BlendMode__Perform(Set__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Drawing_BlendMode*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Drawing_BlendMode__set_Expression(Set__Fuse_Drawing_BlendMode* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Drawing_BlendMode__set_Increment(Set__Fuse_Drawing_BlendMode* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Drawing_BlendMode(NULL);
    }
}

void Set__Fuse_Drawing_BlendMode__set_Target(Set__Fuse_Drawing_BlendMode* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* value)
{
    __this->_Target = value;
}

void Set__Fuse_Drawing_BlendMode__set_UpdateRestValue(Set__Fuse_Drawing_BlendMode* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Drawing_BlendMode__set_Value(Set__Fuse_Drawing_BlendMode* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Drawing_BlendMode__Update(Set__Fuse_Drawing_BlendMode* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Drawing_Brush__uType* Set__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<Set__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(Set__Fuse_Drawing_Brush__uType), "Fuse.Triggers.Actions.Set<Fuse.Drawing.Brush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Drawing_Brush__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Drawing_Brush, _blender),
        "_Expression", offsetof(Set__Fuse_Drawing_Brush, _Expression),
        "_increment", offsetof(Set__Fuse_Drawing_Brush, _increment),
        "_Target", offsetof(Set__Fuse_Drawing_Brush, _Target),
        "_Value", offsetof(Set__Fuse_Drawing_Brush, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Drawing_Brush, _blender), ::app::Fuse::Internal::Blender__Fuse_Drawing_Brush__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Drawing_Brush, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Drawing_Brush, _increment), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Drawing_Brush, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Drawing_Brush__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Drawing_Brush__get_Increment, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Drawing_Brush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Drawing_Brush__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Drawing_Brush__get_Value, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Drawing_Brush__New_1, 0, true, Set__Fuse_Drawing_Brush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Drawing_Brush__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_Brush__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Drawing_Brush__set_Increment, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Drawing_Brush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Drawing_Brush__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Drawing_Brush__set_Value, 0, false, ::app::Fuse::Drawing::Brush__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Drawing_Brush___ObjInit_1(Set__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Drawing_Brush__get_Expression(Set__Fuse_Drawing_Brush* __this)
{
    return __this->_Expression;
}

::app::Fuse::Drawing::Brush* Set__Fuse_Drawing_Brush__get_Increment(Set__Fuse_Drawing_Brush* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Drawing_Brush* Set__Fuse_Drawing_Brush__get_Target(Set__Fuse_Drawing_Brush* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Drawing_Brush__get_UpdateRestValue(Set__Fuse_Drawing_Brush* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Drawing::Brush* Set__Fuse_Drawing_Brush__get_Value(Set__Fuse_Drawing_Brush* __this)
{
    return __this->_Value;
}

Set__Fuse_Drawing_Brush* Set__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* target)
{
    Set__Fuse_Drawing_Brush* inst = (Set__Fuse_Drawing_Brush*)::uAllocObject(sizeof(Set__Fuse_Drawing_Brush), Set__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Drawing_Brush__Perform(Set__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Drawing_Brush*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Drawing::Brush*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Drawing_Brush__set_Expression(Set__Fuse_Drawing_Brush* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Drawing_Brush__set_Increment(Set__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Drawing_Brush(NULL);
    }
}

void Set__Fuse_Drawing_Brush__set_Target(Set__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* value)
{
    __this->_Target = value;
}

void Set__Fuse_Drawing_Brush__set_UpdateRestValue(Set__Fuse_Drawing_Brush* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Drawing_Brush__set_Value(Set__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value)
{
    __this->_Value = value;
}

void Set__Fuse_Drawing_Brush__Update(Set__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Drawing_DynamicBrush__uType* Set__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<Set__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(Set__Fuse_Drawing_DynamicBrush__uType), "Fuse.Triggers.Actions.Set<Fuse.Drawing.DynamicBrush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Drawing_DynamicBrush__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Drawing_DynamicBrush, _blender),
        "_Expression", offsetof(Set__Fuse_Drawing_DynamicBrush, _Expression),
        "_increment", offsetof(Set__Fuse_Drawing_DynamicBrush, _increment),
        "_Target", offsetof(Set__Fuse_Drawing_DynamicBrush, _Target),
        "_Value", offsetof(Set__Fuse_Drawing_DynamicBrush, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Drawing_DynamicBrush, _blender), ::app::Fuse::Internal::Blender__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Drawing_DynamicBrush, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Drawing_DynamicBrush, _increment), ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Drawing_DynamicBrush, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Drawing_DynamicBrush__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Drawing_DynamicBrush__get_Increment, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Drawing_DynamicBrush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Drawing_DynamicBrush__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Drawing_DynamicBrush__get_Value, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Drawing_DynamicBrush__New_1, 0, true, Set__Fuse_Drawing_DynamicBrush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Drawing_DynamicBrush__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Drawing_DynamicBrush__set_Increment, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Drawing_DynamicBrush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Drawing_DynamicBrush__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Drawing_DynamicBrush__set_Value, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Drawing_DynamicBrush___ObjInit_1(Set__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Drawing_DynamicBrush__get_Expression(Set__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_Expression;
}

::app::Fuse::Drawing::DynamicBrush* Set__Fuse_Drawing_DynamicBrush__get_Increment(Set__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* Set__Fuse_Drawing_DynamicBrush__get_Target(Set__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Drawing_DynamicBrush__get_UpdateRestValue(Set__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Drawing::DynamicBrush* Set__Fuse_Drawing_DynamicBrush__get_Value(Set__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_Value;
}

Set__Fuse_Drawing_DynamicBrush* Set__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* target)
{
    Set__Fuse_Drawing_DynamicBrush* inst = (Set__Fuse_Drawing_DynamicBrush*)::uAllocObject(sizeof(Set__Fuse_Drawing_DynamicBrush), Set__Fuse_Drawing_DynamicBrush__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Drawing_DynamicBrush__Perform(Set__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Drawing_DynamicBrush*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Drawing::DynamicBrush*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Drawing_DynamicBrush__set_Expression(Set__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Drawing_DynamicBrush__set_Increment(Set__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Drawing_DynamicBrush(NULL);
    }
}

void Set__Fuse_Drawing_DynamicBrush__set_Target(Set__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* value)
{
    __this->_Target = value;
}

void Set__Fuse_Drawing_DynamicBrush__set_UpdateRestValue(Set__Fuse_Drawing_DynamicBrush* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Drawing_DynamicBrush__set_Value(Set__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value)
{
    __this->_Value = value;
}

void Set__Fuse_Drawing_DynamicBrush__Update(Set__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Drawing_GradientStop__uType* Set__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<Set__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(Set__Fuse_Drawing_GradientStop__uType), "Fuse.Triggers.Actions.Set<Fuse.Drawing.GradientStop>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Drawing_GradientStop__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Drawing_GradientStop, _blender),
        "_Expression", offsetof(Set__Fuse_Drawing_GradientStop, _Expression),
        "_increment", offsetof(Set__Fuse_Drawing_GradientStop, _increment),
        "_Target", offsetof(Set__Fuse_Drawing_GradientStop, _Target),
        "_Value", offsetof(Set__Fuse_Drawing_GradientStop, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Drawing_GradientStop, _blender), ::app::Fuse::Internal::Blender__Fuse_Drawing_GradientStop__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Drawing_GradientStop, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Drawing_GradientStop, _increment), ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Drawing_GradientStop, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Drawing_GradientStop__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Drawing_GradientStop__get_Increment, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Drawing_GradientStop__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Drawing_GradientStop__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Drawing_GradientStop__get_Value, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Drawing_GradientStop__New_1, 0, true, Set__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Drawing_GradientStop__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Drawing_GradientStop__set_Increment, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Drawing_GradientStop__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Drawing_GradientStop__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Drawing_GradientStop__set_Value, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Drawing_GradientStop___ObjInit_1(Set__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Drawing_GradientStop__get_Expression(Set__Fuse_Drawing_GradientStop* __this)
{
    return __this->_Expression;
}

::app::Fuse::Drawing::GradientStop* Set__Fuse_Drawing_GradientStop__get_Increment(Set__Fuse_Drawing_GradientStop* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Drawing_GradientStop* Set__Fuse_Drawing_GradientStop__get_Target(Set__Fuse_Drawing_GradientStop* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Drawing_GradientStop__get_UpdateRestValue(Set__Fuse_Drawing_GradientStop* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Drawing::GradientStop* Set__Fuse_Drawing_GradientStop__get_Value(Set__Fuse_Drawing_GradientStop* __this)
{
    return __this->_Value;
}

Set__Fuse_Drawing_GradientStop* Set__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* target)
{
    Set__Fuse_Drawing_GradientStop* inst = (Set__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(Set__Fuse_Drawing_GradientStop), Set__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Drawing_GradientStop__Perform(Set__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Drawing_GradientStop*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Drawing::GradientStop*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Drawing_GradientStop__set_Expression(Set__Fuse_Drawing_GradientStop* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Drawing_GradientStop__set_Increment(Set__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Drawing_GradientStop(NULL);
    }
}

void Set__Fuse_Drawing_GradientStop__set_Target(Set__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* value)
{
    __this->_Target = value;
}

void Set__Fuse_Drawing_GradientStop__set_UpdateRestValue(Set__Fuse_Drawing_GradientStop* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Drawing_GradientStop__set_Value(Set__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value)
{
    __this->_Value = value;
}

void Set__Fuse_Drawing_GradientStop__Update(Set__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Drawing_LinearGradient__uType* Set__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<Set__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(Set__Fuse_Drawing_LinearGradient__uType), "Fuse.Triggers.Actions.Set<Fuse.Drawing.LinearGradient>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Drawing_LinearGradient__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Drawing_LinearGradient, _blender),
        "_Expression", offsetof(Set__Fuse_Drawing_LinearGradient, _Expression),
        "_increment", offsetof(Set__Fuse_Drawing_LinearGradient, _increment),
        "_Target", offsetof(Set__Fuse_Drawing_LinearGradient, _Target),
        "_Value", offsetof(Set__Fuse_Drawing_LinearGradient, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Drawing_LinearGradient, _blender), ::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Drawing_LinearGradient, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Drawing_LinearGradient, _increment), ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Drawing_LinearGradient, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Drawing_LinearGradient__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Drawing_LinearGradient__get_Increment, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Drawing_LinearGradient__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Drawing_LinearGradient__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Drawing_LinearGradient__get_Value, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Drawing_LinearGradient__New_1, 0, true, Set__Fuse_Drawing_LinearGradient__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Drawing_LinearGradient__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Drawing_LinearGradient__set_Increment, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Drawing_LinearGradient__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Drawing_LinearGradient__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Drawing_LinearGradient__set_Value, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Drawing_LinearGradient___ObjInit_1(Set__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Drawing_LinearGradient__get_Expression(Set__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_Expression;
}

::app::Fuse::Drawing::LinearGradient* Set__Fuse_Drawing_LinearGradient__get_Increment(Set__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* Set__Fuse_Drawing_LinearGradient__get_Target(Set__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Drawing_LinearGradient__get_UpdateRestValue(Set__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Drawing::LinearGradient* Set__Fuse_Drawing_LinearGradient__get_Value(Set__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_Value;
}

Set__Fuse_Drawing_LinearGradient* Set__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* target)
{
    Set__Fuse_Drawing_LinearGradient* inst = (Set__Fuse_Drawing_LinearGradient*)::uAllocObject(sizeof(Set__Fuse_Drawing_LinearGradient), Set__Fuse_Drawing_LinearGradient__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Drawing_LinearGradient__Perform(Set__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Drawing::LinearGradient*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Drawing_LinearGradient__set_Expression(Set__Fuse_Drawing_LinearGradient* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Drawing_LinearGradient__set_Increment(Set__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Drawing_LinearGradient(NULL);
    }
}

void Set__Fuse_Drawing_LinearGradient__set_Target(Set__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* value)
{
    __this->_Target = value;
}

void Set__Fuse_Drawing_LinearGradient__set_UpdateRestValue(Set__Fuse_Drawing_LinearGradient* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Drawing_LinearGradient__set_Value(Set__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value)
{
    __this->_Value = value;
}

void Set__Fuse_Drawing_LinearGradient__Update(Set__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Drawing_SolidColor__uType* Set__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<Set__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(Set__Fuse_Drawing_SolidColor__uType), "Fuse.Triggers.Actions.Set<Fuse.Drawing.SolidColor>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Drawing_SolidColor__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Drawing_SolidColor, _blender),
        "_Expression", offsetof(Set__Fuse_Drawing_SolidColor, _Expression),
        "_increment", offsetof(Set__Fuse_Drawing_SolidColor, _increment),
        "_Target", offsetof(Set__Fuse_Drawing_SolidColor, _Target),
        "_Value", offsetof(Set__Fuse_Drawing_SolidColor, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Drawing_SolidColor, _blender), ::app::Fuse::Internal::Blender__Fuse_Drawing_SolidColor__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Drawing_SolidColor, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Drawing_SolidColor, _increment), ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Drawing_SolidColor, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Drawing_SolidColor__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Drawing_SolidColor__get_Increment, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Drawing_SolidColor__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Drawing_SolidColor__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Drawing_SolidColor__get_Value, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Drawing_SolidColor__New_1, 0, true, Set__Fuse_Drawing_SolidColor__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Drawing_SolidColor__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Drawing_SolidColor__set_Increment, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Drawing_SolidColor__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Drawing_SolidColor__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Drawing_SolidColor__set_Value, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Drawing_SolidColor___ObjInit_1(Set__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Drawing_SolidColor__get_Expression(Set__Fuse_Drawing_SolidColor* __this)
{
    return __this->_Expression;
}

::app::Fuse::Drawing::SolidColor* Set__Fuse_Drawing_SolidColor__get_Increment(Set__Fuse_Drawing_SolidColor* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Drawing_SolidColor* Set__Fuse_Drawing_SolidColor__get_Target(Set__Fuse_Drawing_SolidColor* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Drawing_SolidColor__get_UpdateRestValue(Set__Fuse_Drawing_SolidColor* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Drawing::SolidColor* Set__Fuse_Drawing_SolidColor__get_Value(Set__Fuse_Drawing_SolidColor* __this)
{
    return __this->_Value;
}

Set__Fuse_Drawing_SolidColor* Set__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* target)
{
    Set__Fuse_Drawing_SolidColor* inst = (Set__Fuse_Drawing_SolidColor*)::uAllocObject(sizeof(Set__Fuse_Drawing_SolidColor), Set__Fuse_Drawing_SolidColor__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Drawing_SolidColor__Perform(Set__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Drawing_SolidColor*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Drawing::SolidColor*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Drawing_SolidColor__set_Expression(Set__Fuse_Drawing_SolidColor* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Drawing_SolidColor__set_Increment(Set__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Drawing_SolidColor(NULL);
    }
}

void Set__Fuse_Drawing_SolidColor__set_Target(Set__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* value)
{
    __this->_Target = value;
}

void Set__Fuse_Drawing_SolidColor__set_UpdateRestValue(Set__Fuse_Drawing_SolidColor* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Drawing_SolidColor__set_Value(Set__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value)
{
    __this->_Value = value;
}

void Set__Fuse_Drawing_SolidColor__Update(Set__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Drawing_StaticBrush__uType* Set__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<Set__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(Set__Fuse_Drawing_StaticBrush__uType), "Fuse.Triggers.Actions.Set<Fuse.Drawing.StaticBrush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Drawing_StaticBrush__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Drawing_StaticBrush, _blender),
        "_Expression", offsetof(Set__Fuse_Drawing_StaticBrush, _Expression),
        "_increment", offsetof(Set__Fuse_Drawing_StaticBrush, _increment),
        "_Target", offsetof(Set__Fuse_Drawing_StaticBrush, _Target),
        "_Value", offsetof(Set__Fuse_Drawing_StaticBrush, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Drawing_StaticBrush, _blender), ::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Drawing_StaticBrush, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Drawing_StaticBrush, _increment), ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Drawing_StaticBrush, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Drawing_StaticBrush__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Drawing_StaticBrush__get_Increment, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Drawing_StaticBrush__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Drawing_StaticBrush__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Drawing_StaticBrush__get_Value, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Drawing_StaticBrush__New_1, 0, true, Set__Fuse_Drawing_StaticBrush__typeof(), ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Drawing_StaticBrush__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Drawing_StaticBrush__set_Increment, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Drawing_StaticBrush__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Drawing_StaticBrush__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Drawing_StaticBrush__set_Value, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Drawing_StaticBrush___ObjInit_1(Set__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Drawing_StaticBrush__get_Expression(Set__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_Expression;
}

::app::Fuse::Drawing::StaticBrush* Set__Fuse_Drawing_StaticBrush__get_Increment(Set__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* Set__Fuse_Drawing_StaticBrush__get_Target(Set__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Drawing_StaticBrush__get_UpdateRestValue(Set__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Drawing::StaticBrush* Set__Fuse_Drawing_StaticBrush__get_Value(Set__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_Value;
}

Set__Fuse_Drawing_StaticBrush* Set__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target)
{
    Set__Fuse_Drawing_StaticBrush* inst = (Set__Fuse_Drawing_StaticBrush*)::uAllocObject(sizeof(Set__Fuse_Drawing_StaticBrush), Set__Fuse_Drawing_StaticBrush__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Drawing_StaticBrush__Perform(Set__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Drawing::StaticBrush*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Drawing_StaticBrush__set_Expression(Set__Fuse_Drawing_StaticBrush* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Drawing_StaticBrush__set_Increment(Set__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Drawing_StaticBrush(NULL);
    }
}

void Set__Fuse_Drawing_StaticBrush__set_Target(Set__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* value)
{
    __this->_Target = value;
}

void Set__Fuse_Drawing_StaticBrush__set_UpdateRestValue(Set__Fuse_Drawing_StaticBrush* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Drawing_StaticBrush__set_Value(Set__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value)
{
    __this->_Value = value;
}

void Set__Fuse_Drawing_StaticBrush__Update(Set__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_Alignment__uType* Set__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_Alignment__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.Alignment>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_Alignment__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_Alignment, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_Alignment, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_Alignment, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_Alignment, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_Alignment__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_Alignment, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_Alignment, _increment), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_Alignment, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_Alignment__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_Alignment__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_Alignment__get_Increment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_Alignment__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_Alignment__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_Alignment__get_Value, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_Alignment__New_1, 0, true, Set__Fuse_Elements_Alignment__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_Alignment__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_Alignment__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_Alignment__set_Increment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_Alignment__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_Alignment__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_Alignment__set_Value, 0, false, ::app::Fuse::Elements::Alignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_Alignment___ObjInit_1(Set__Fuse_Elements_Alignment* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_Alignment__get_Expression(Set__Fuse_Elements_Alignment* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_Alignment__get_Increment(Set__Fuse_Elements_Alignment* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_Alignment* Set__Fuse_Elements_Alignment__get_Target(Set__Fuse_Elements_Alignment* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_Alignment__get_UpdateRestValue(Set__Fuse_Elements_Alignment* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_Alignment__get_Value(Set__Fuse_Elements_Alignment* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_Alignment* Set__Fuse_Elements_Alignment__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* target)
{
    Set__Fuse_Elements_Alignment* inst = (Set__Fuse_Elements_Alignment*)::uAllocObject(sizeof(Set__Fuse_Elements_Alignment), Set__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_Alignment__Perform(Set__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_Alignment*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_Alignment__set_Expression(Set__Fuse_Elements_Alignment* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_Alignment__set_Increment(Set__Fuse_Elements_Alignment* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_Alignment(NULL);
    }
}

void Set__Fuse_Elements_Alignment__set_Target(Set__Fuse_Elements_Alignment* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_Alignment__set_UpdateRestValue(Set__Fuse_Elements_Alignment* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_Alignment__set_Value(Set__Fuse_Elements_Alignment* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_Alignment__Update(Set__Fuse_Elements_Alignment* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_CachingMode__uType* Set__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_CachingMode__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.CachingMode>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_CachingMode__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_CachingMode, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_CachingMode, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_CachingMode, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_CachingMode, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_CachingMode, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_CachingMode, _increment), ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_CachingMode, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_CachingMode__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_CachingMode__get_Increment, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_CachingMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_CachingMode__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_CachingMode__get_Value, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_CachingMode__New_1, 0, true, Set__Fuse_Elements_CachingMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_CachingMode__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_CachingMode__set_Increment, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_CachingMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_CachingMode__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_CachingMode__set_Value, 0, false, ::app::Fuse::Elements::CachingMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_CachingMode___ObjInit_1(Set__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_CachingMode__get_Expression(Set__Fuse_Elements_CachingMode* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_CachingMode__get_Increment(Set__Fuse_Elements_CachingMode* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_CachingMode* Set__Fuse_Elements_CachingMode__get_Target(Set__Fuse_Elements_CachingMode* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_CachingMode__get_UpdateRestValue(Set__Fuse_Elements_CachingMode* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_CachingMode__get_Value(Set__Fuse_Elements_CachingMode* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_CachingMode* Set__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* target)
{
    Set__Fuse_Elements_CachingMode* inst = (Set__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(Set__Fuse_Elements_CachingMode), Set__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_CachingMode__Perform(Set__Fuse_Elements_CachingMode* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_CachingMode__set_Expression(Set__Fuse_Elements_CachingMode* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_CachingMode__set_Increment(Set__Fuse_Elements_CachingMode* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_CachingMode(NULL);
    }
}

void Set__Fuse_Elements_CachingMode__set_Target(Set__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_CachingMode__set_UpdateRestValue(Set__Fuse_Elements_CachingMode* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_CachingMode__set_Value(Set__Fuse_Elements_CachingMode* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_CachingMode__Update(Set__Fuse_Elements_CachingMode* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_Element__uType* Set__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_Element__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.Element>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_Element__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_Element, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_Element, _Expression),
        "_increment", offsetof(Set__Fuse_Elements_Element, _increment),
        "_Target", offsetof(Set__Fuse_Elements_Element, _Target),
        "_Value", offsetof(Set__Fuse_Elements_Element, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_Element, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_Element__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_Element, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_Element, _increment), ::app::Fuse::Elements::Element__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_Element, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_Element__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_Element__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_Element__get_Increment, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_Element__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Element__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_Element__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_Element__get_Value, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_Element__New_1, 0, true, Set__Fuse_Elements_Element__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Element__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_Element__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_Element__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_Element__set_Increment, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_Element__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Element__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_Element__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_Element__set_Value, 0, false, ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_Element___ObjInit_1(Set__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_Element__get_Expression(Set__Fuse_Elements_Element* __this)
{
    return __this->_Expression;
}

::app::Fuse::Elements::Element* Set__Fuse_Elements_Element__get_Increment(Set__Fuse_Elements_Element* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_Element* Set__Fuse_Elements_Element__get_Target(Set__Fuse_Elements_Element* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_Element__get_UpdateRestValue(Set__Fuse_Elements_Element* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Elements::Element* Set__Fuse_Elements_Element__get_Value(Set__Fuse_Elements_Element* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_Element* Set__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* target)
{
    Set__Fuse_Elements_Element* inst = (Set__Fuse_Elements_Element*)::uAllocObject(sizeof(Set__Fuse_Elements_Element), Set__Fuse_Elements_Element__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_Element__Perform(Set__Fuse_Elements_Element* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_Element*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Elements::Element*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_Element__set_Expression(Set__Fuse_Elements_Element* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_Element__set_Increment(Set__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_Element(NULL);
    }
}

void Set__Fuse_Elements_Element__set_Target(Set__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_Element__set_UpdateRestValue(Set__Fuse_Elements_Element* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_Element__set_Value(Set__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_Element__Update(Set__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_HitTestMode__uType* Set__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_HitTestMode__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.HitTestMode>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_HitTestMode__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_HitTestMode, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_HitTestMode, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_HitTestMode, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_HitTestMode, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_HitTestMode__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_HitTestMode, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_HitTestMode, _increment), ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_HitTestMode, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_HitTestMode__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_HitTestMode__get_Increment, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_HitTestMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_HitTestMode__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_HitTestMode__get_Value, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_HitTestMode__New_1, 0, true, Set__Fuse_Elements_HitTestMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_HitTestMode__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_HitTestMode__set_Increment, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_HitTestMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_HitTestMode__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_HitTestMode__set_Value, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_HitTestMode___ObjInit_1(Set__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_HitTestMode__get_Expression(Set__Fuse_Elements_HitTestMode* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_HitTestMode__get_Increment(Set__Fuse_Elements_HitTestMode* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_HitTestMode* Set__Fuse_Elements_HitTestMode__get_Target(Set__Fuse_Elements_HitTestMode* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_HitTestMode__get_UpdateRestValue(Set__Fuse_Elements_HitTestMode* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_HitTestMode__get_Value(Set__Fuse_Elements_HitTestMode* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_HitTestMode* Set__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* target)
{
    Set__Fuse_Elements_HitTestMode* inst = (Set__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(Set__Fuse_Elements_HitTestMode), Set__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_HitTestMode__Perform(Set__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_HitTestMode*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_HitTestMode__set_Expression(Set__Fuse_Elements_HitTestMode* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_HitTestMode__set_Increment(Set__Fuse_Elements_HitTestMode* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_HitTestMode(NULL);
    }
}

void Set__Fuse_Elements_HitTestMode__set_Target(Set__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_HitTestMode__set_UpdateRestValue(Set__Fuse_Elements_HitTestMode* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_HitTestMode__set_Value(Set__Fuse_Elements_HitTestMode* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_HitTestMode__Update(Set__Fuse_Elements_HitTestMode* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_SizeUnit__uType* Set__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_SizeUnit__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.SizeUnit>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_SizeUnit__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_SizeUnit, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_SizeUnit, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_SizeUnit, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_SizeUnit, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_SizeUnit__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_SizeUnit, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_SizeUnit, _increment), ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_SizeUnit, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_SizeUnit__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_SizeUnit__get_Increment, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_SizeUnit__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_SizeUnit__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_SizeUnit__get_Value, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_SizeUnit__New_1, 0, true, Set__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_SizeUnit__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_SizeUnit__set_Increment, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_SizeUnit__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_SizeUnit__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_SizeUnit__set_Value, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_SizeUnit___ObjInit_1(Set__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_SizeUnit__get_Expression(Set__Fuse_Elements_SizeUnit* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_SizeUnit__get_Increment(Set__Fuse_Elements_SizeUnit* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_SizeUnit* Set__Fuse_Elements_SizeUnit__get_Target(Set__Fuse_Elements_SizeUnit* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_SizeUnit__get_UpdateRestValue(Set__Fuse_Elements_SizeUnit* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_SizeUnit__get_Value(Set__Fuse_Elements_SizeUnit* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_SizeUnit* Set__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* target)
{
    Set__Fuse_Elements_SizeUnit* inst = (Set__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(Set__Fuse_Elements_SizeUnit), Set__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_SizeUnit__Perform(Set__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_SizeUnit*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_SizeUnit__set_Expression(Set__Fuse_Elements_SizeUnit* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_SizeUnit__set_Increment(Set__Fuse_Elements_SizeUnit* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_SizeUnit(NULL);
    }
}

void Set__Fuse_Elements_SizeUnit__set_Target(Set__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_SizeUnit__set_UpdateRestValue(Set__Fuse_Elements_SizeUnit* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_SizeUnit__set_Value(Set__Fuse_Elements_SizeUnit* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_SizeUnit__Update(Set__Fuse_Elements_SizeUnit* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_StretchDirection__uType* Set__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_StretchDirection__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.StretchDirection>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_StretchDirection__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_StretchDirection, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_StretchDirection, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_StretchDirection, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_StretchDirection, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_StretchDirection__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_StretchDirection, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_StretchDirection, _increment), ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_StretchDirection, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_StretchDirection__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_StretchDirection__get_Increment, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_StretchDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_StretchDirection__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_StretchDirection__get_Value, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_StretchDirection__New_1, 0, true, Set__Fuse_Elements_StretchDirection__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_StretchDirection__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_StretchDirection__set_Increment, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_StretchDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_StretchDirection__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_StretchDirection__set_Value, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_StretchDirection___ObjInit_1(Set__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_StretchDirection__get_Expression(Set__Fuse_Elements_StretchDirection* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_StretchDirection__get_Increment(Set__Fuse_Elements_StretchDirection* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_StretchDirection* Set__Fuse_Elements_StretchDirection__get_Target(Set__Fuse_Elements_StretchDirection* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_StretchDirection__get_UpdateRestValue(Set__Fuse_Elements_StretchDirection* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_StretchDirection__get_Value(Set__Fuse_Elements_StretchDirection* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_StretchDirection* Set__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* target)
{
    Set__Fuse_Elements_StretchDirection* inst = (Set__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(Set__Fuse_Elements_StretchDirection), Set__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_StretchDirection__Perform(Set__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchDirection*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_StretchDirection__set_Expression(Set__Fuse_Elements_StretchDirection* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_StretchDirection__set_Increment(Set__Fuse_Elements_StretchDirection* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_StretchDirection(NULL);
    }
}

void Set__Fuse_Elements_StretchDirection__set_Target(Set__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_StretchDirection__set_UpdateRestValue(Set__Fuse_Elements_StretchDirection* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_StretchDirection__set_Value(Set__Fuse_Elements_StretchDirection* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_StretchDirection__Update(Set__Fuse_Elements_StretchDirection* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_StretchMode__uType* Set__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_StretchMode__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.StretchMode>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_StretchMode__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_StretchMode, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_StretchMode, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_StretchMode, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_StretchMode, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_StretchMode__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_StretchMode, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_StretchMode, _increment), ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_StretchMode, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_StretchMode__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_StretchMode__get_Increment, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_StretchMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_StretchMode__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_StretchMode__get_Value, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_StretchMode__New_1, 0, true, Set__Fuse_Elements_StretchMode__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_StretchMode__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_StretchMode__set_Increment, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_StretchMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_StretchMode__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_StretchMode__set_Value, 0, false, ::app::Fuse::Elements::StretchMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_StretchMode___ObjInit_1(Set__Fuse_Elements_StretchMode* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_StretchMode__get_Expression(Set__Fuse_Elements_StretchMode* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_StretchMode__get_Increment(Set__Fuse_Elements_StretchMode* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_StretchMode* Set__Fuse_Elements_StretchMode__get_Target(Set__Fuse_Elements_StretchMode* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_StretchMode__get_UpdateRestValue(Set__Fuse_Elements_StretchMode* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_StretchMode__get_Value(Set__Fuse_Elements_StretchMode* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_StretchMode* Set__Fuse_Elements_StretchMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* target)
{
    Set__Fuse_Elements_StretchMode* inst = (Set__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(Set__Fuse_Elements_StretchMode), Set__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_StretchMode__Perform(Set__Fuse_Elements_StretchMode* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchMode*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_StretchMode__set_Expression(Set__Fuse_Elements_StretchMode* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_StretchMode__set_Increment(Set__Fuse_Elements_StretchMode* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_StretchMode(NULL);
    }
}

void Set__Fuse_Elements_StretchMode__set_Target(Set__Fuse_Elements_StretchMode* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_StretchMode__set_UpdateRestValue(Set__Fuse_Elements_StretchMode* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_StretchMode__set_Value(Set__Fuse_Elements_StretchMode* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_StretchMode__Update(Set__Fuse_Elements_StretchMode* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_StretchSizing__uType* Set__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_StretchSizing__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.StretchSizing>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_StretchSizing__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_StretchSizing, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_StretchSizing, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_StretchSizing, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_StretchSizing, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_StretchSizing, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_StretchSizing, _increment), ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_StretchSizing, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_StretchSizing__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_StretchSizing__get_Increment, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_StretchSizing__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_StretchSizing__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_StretchSizing__get_Value, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_StretchSizing__New_1, 0, true, Set__Fuse_Elements_StretchSizing__typeof(), ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_StretchSizing__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_StretchSizing__set_Increment, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_StretchSizing__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_StretchSizing__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_StretchSizing__set_Value, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_StretchSizing___ObjInit_1(Set__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_StretchSizing__get_Expression(Set__Fuse_Elements_StretchSizing* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_StretchSizing__get_Increment(Set__Fuse_Elements_StretchSizing* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_StretchSizing* Set__Fuse_Elements_StretchSizing__get_Target(Set__Fuse_Elements_StretchSizing* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_StretchSizing__get_UpdateRestValue(Set__Fuse_Elements_StretchSizing* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_StretchSizing__get_Value(Set__Fuse_Elements_StretchSizing* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_StretchSizing* Set__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* target)
{
    Set__Fuse_Elements_StretchSizing* inst = (Set__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(Set__Fuse_Elements_StretchSizing), Set__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_StretchSizing__Perform(Set__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_StretchSizing__set_Expression(Set__Fuse_Elements_StretchSizing* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_StretchSizing__set_Increment(Set__Fuse_Elements_StretchSizing* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_StretchSizing(NULL);
    }
}

void Set__Fuse_Elements_StretchSizing__set_Target(Set__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_StretchSizing__set_UpdateRestValue(Set__Fuse_Elements_StretchSizing* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_StretchSizing__set_Value(Set__Fuse_Elements_StretchSizing* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_StretchSizing__Update(Set__Fuse_Elements_StretchSizing* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_TextAlignment__uType* Set__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_TextAlignment__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.TextAlignment>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_TextAlignment__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_TextAlignment, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_TextAlignment, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_TextAlignment, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_TextAlignment, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_TextAlignment__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_TextAlignment, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_TextAlignment, _increment), ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_TextAlignment, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_TextAlignment__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_TextAlignment__get_Increment, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_TextAlignment__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_TextAlignment__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_TextAlignment__get_Value, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_TextAlignment__New_1, 0, true, Set__Fuse_Elements_TextAlignment__typeof(), ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_TextAlignment__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_TextAlignment__set_Increment, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_TextAlignment__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_TextAlignment__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_TextAlignment__set_Value, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_TextAlignment___ObjInit_1(Set__Fuse_Elements_TextAlignment* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_TextAlignment__get_Expression(Set__Fuse_Elements_TextAlignment* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_TextAlignment__get_Increment(Set__Fuse_Elements_TextAlignment* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_TextAlignment* Set__Fuse_Elements_TextAlignment__get_Target(Set__Fuse_Elements_TextAlignment* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_TextAlignment__get_UpdateRestValue(Set__Fuse_Elements_TextAlignment* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_TextAlignment__get_Value(Set__Fuse_Elements_TextAlignment* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_TextAlignment* Set__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* target)
{
    Set__Fuse_Elements_TextAlignment* inst = (Set__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(Set__Fuse_Elements_TextAlignment), Set__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_TextAlignment__Perform(Set__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_TextAlignment*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_TextAlignment__set_Expression(Set__Fuse_Elements_TextAlignment* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_TextAlignment__set_Increment(Set__Fuse_Elements_TextAlignment* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_TextAlignment(NULL);
    }
}

void Set__Fuse_Elements_TextAlignment__set_Target(Set__Fuse_Elements_TextAlignment* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_TextAlignment__set_UpdateRestValue(Set__Fuse_Elements_TextAlignment* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_TextAlignment__set_Value(Set__Fuse_Elements_TextAlignment* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_TextAlignment__Update(Set__Fuse_Elements_TextAlignment* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_TextWrapping__uType* Set__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_TextWrapping__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.TextWrapping>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_TextWrapping__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_TextWrapping, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_TextWrapping, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_TextWrapping, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_TextWrapping, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_TextWrapping__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_TextWrapping, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_TextWrapping, _increment), ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_TextWrapping, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_TextWrapping__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_TextWrapping__get_Increment, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_TextWrapping__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_TextWrapping__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_TextWrapping__get_Value, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_TextWrapping__New_1, 0, true, Set__Fuse_Elements_TextWrapping__typeof(), ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_TextWrapping__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_TextWrapping__set_Increment, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_TextWrapping__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_TextWrapping__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_TextWrapping__set_Value, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_TextWrapping___ObjInit_1(Set__Fuse_Elements_TextWrapping* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_TextWrapping__get_Expression(Set__Fuse_Elements_TextWrapping* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_TextWrapping__get_Increment(Set__Fuse_Elements_TextWrapping* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_TextWrapping* Set__Fuse_Elements_TextWrapping__get_Target(Set__Fuse_Elements_TextWrapping* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_TextWrapping__get_UpdateRestValue(Set__Fuse_Elements_TextWrapping* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_TextWrapping__get_Value(Set__Fuse_Elements_TextWrapping* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_TextWrapping* Set__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* target)
{
    Set__Fuse_Elements_TextWrapping* inst = (Set__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(Set__Fuse_Elements_TextWrapping), Set__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_TextWrapping__Perform(Set__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_TextWrapping*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_TextWrapping__set_Expression(Set__Fuse_Elements_TextWrapping* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_TextWrapping__set_Increment(Set__Fuse_Elements_TextWrapping* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_TextWrapping(NULL);
    }
}

void Set__Fuse_Elements_TextWrapping__set_Target(Set__Fuse_Elements_TextWrapping* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_TextWrapping__set_UpdateRestValue(Set__Fuse_Elements_TextWrapping* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_TextWrapping__set_Value(Set__Fuse_Elements_TextWrapping* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_TextWrapping__Update(Set__Fuse_Elements_TextWrapping* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Elements_Visibility__uType* Set__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<Set__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(Set__Fuse_Elements_Visibility__uType), "Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Elements_Visibility__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Elements_Visibility, _blender),
        "_Expression", offsetof(Set__Fuse_Elements_Visibility, _Expression),
        "_Target", offsetof(Set__Fuse_Elements_Visibility, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Elements_Visibility, _blender), ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Elements_Visibility, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Elements_Visibility, _increment), ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Elements_Visibility, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Elements_Visibility__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_Visibility__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Elements_Visibility__get_Increment, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Elements_Visibility__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Elements_Visibility__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Elements_Visibility__get_Value, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Elements_Visibility__New_1, 0, true, Set__Fuse_Elements_Visibility__typeof(), ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Elements_Visibility__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Elements_Visibility__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Elements_Visibility__set_Increment, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Elements_Visibility__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Elements_Visibility__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Elements_Visibility__set_Value, 0, false, ::app::Fuse::Elements::Visibility__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Elements_Visibility___ObjInit_1(Set__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Elements_Visibility__get_Expression(Set__Fuse_Elements_Visibility* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Elements_Visibility__get_Increment(Set__Fuse_Elements_Visibility* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Elements_Visibility* Set__Fuse_Elements_Visibility__get_Target(Set__Fuse_Elements_Visibility* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Elements_Visibility__get_UpdateRestValue(Set__Fuse_Elements_Visibility* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Elements_Visibility__get_Value(Set__Fuse_Elements_Visibility* __this)
{
    return __this->_Value;
}

Set__Fuse_Elements_Visibility* Set__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target)
{
    Set__Fuse_Elements_Visibility* inst = (Set__Fuse_Elements_Visibility*)::uAllocObject(sizeof(Set__Fuse_Elements_Visibility), Set__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Elements_Visibility__Perform(Set__Fuse_Elements_Visibility* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Elements_Visibility__set_Expression(Set__Fuse_Elements_Visibility* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Elements_Visibility__set_Increment(Set__Fuse_Elements_Visibility* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_Visibility(NULL);
    }
}

void Set__Fuse_Elements_Visibility__set_Target(Set__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* value)
{
    __this->_Target = value;
}

void Set__Fuse_Elements_Visibility__set_UpdateRestValue(Set__Fuse_Elements_Visibility* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Elements_Visibility__set_Value(Set__Fuse_Elements_Visibility* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Elements_Visibility__Update(Set__Fuse_Elements_Visibility* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Font__uType* Set__Fuse_Font__typeof()
{
    static ::uStaticStrong<Set__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Font__uType*)::uAllocClassType(sizeof(Set__Fuse_Font__uType), "Fuse.Triggers.Actions.Set<Fuse.Font>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Font__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Font, _blender),
        "_Expression", offsetof(Set__Fuse_Font, _Expression),
        "_increment", offsetof(Set__Fuse_Font, _increment),
        "_Target", offsetof(Set__Fuse_Font, _Target),
        "_Value", offsetof(Set__Fuse_Font, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Font, _blender), ::app::Fuse::Internal::Blender__Fuse_Font__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Font, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Font, _increment), ::app::Fuse::Font__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Font, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Font__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Font__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Font__get_Increment, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Font__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Font__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Font__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Font__get_Value, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Font__New_1, 0, true, Set__Fuse_Font__typeof(), ::app::Uno::UX::Property__Fuse_Font__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Font__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Font__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Font__set_Increment, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Font__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Font__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Font__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Font__set_Value, 0, false, ::app::Fuse::Font__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Font___ObjInit_1(Set__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Font__get_Expression(Set__Fuse_Font* __this)
{
    return __this->_Expression;
}

::app::Fuse::Font* Set__Fuse_Font__get_Increment(Set__Fuse_Font* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Font* Set__Fuse_Font__get_Target(Set__Fuse_Font* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Font__get_UpdateRestValue(Set__Fuse_Font* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Font* Set__Fuse_Font__get_Value(Set__Fuse_Font* __this)
{
    return __this->_Value;
}

Set__Fuse_Font* Set__Fuse_Font__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Font* target)
{
    Set__Fuse_Font* inst = (Set__Fuse_Font*)::uAllocObject(sizeof(Set__Fuse_Font), Set__Fuse_Font__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Font__Perform(Set__Fuse_Font* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Font*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Font*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Font__set_Expression(Set__Fuse_Font* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Font__set_Increment(Set__Fuse_Font* __this, ::app::Fuse::Font* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Font(NULL);
    }
}

void Set__Fuse_Font__set_Target(Set__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* value)
{
    __this->_Target = value;
}

void Set__Fuse_Font__set_UpdateRestValue(Set__Fuse_Font* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Font__set_Value(Set__Fuse_Font* __this, ::app::Fuse::Font* value)
{
    __this->_Value = value;
}

void Set__Fuse_Font__Update(Set__Fuse_Font* __this, ::app::Fuse::Font* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Gestures_Edge__uType* Set__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<Set__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(Set__Fuse_Gestures_Edge__uType), "Fuse.Triggers.Actions.Set<Fuse.Gestures.Edge>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Gestures_Edge__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Gestures_Edge, _blender),
        "_Expression", offsetof(Set__Fuse_Gestures_Edge, _Expression),
        "_Target", offsetof(Set__Fuse_Gestures_Edge, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Gestures_Edge, _blender), ::app::Fuse::Internal::Blender__Fuse_Gestures_Edge__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Gestures_Edge, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Gestures_Edge, _increment), ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Gestures_Edge, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Gestures_Edge__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Gestures_Edge__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Gestures_Edge__get_Increment, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Gestures_Edge__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Gestures_Edge__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Gestures_Edge__get_Value, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Gestures_Edge__New_1, 0, true, Set__Fuse_Gestures_Edge__typeof(), ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Gestures_Edge__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Gestures_Edge__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Gestures_Edge__set_Increment, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Gestures_Edge__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Gestures_Edge__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Gestures_Edge__set_Value, 0, false, ::app::Fuse::Gestures::Edge__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Gestures_Edge___ObjInit_1(Set__Fuse_Gestures_Edge* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Gestures_Edge__get_Expression(Set__Fuse_Gestures_Edge* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Gestures_Edge__get_Increment(Set__Fuse_Gestures_Edge* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Gestures_Edge* Set__Fuse_Gestures_Edge__get_Target(Set__Fuse_Gestures_Edge* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Gestures_Edge__get_UpdateRestValue(Set__Fuse_Gestures_Edge* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Gestures_Edge__get_Value(Set__Fuse_Gestures_Edge* __this)
{
    return __this->_Value;
}

Set__Fuse_Gestures_Edge* Set__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* target)
{
    Set__Fuse_Gestures_Edge* inst = (Set__Fuse_Gestures_Edge*)::uAllocObject(sizeof(Set__Fuse_Gestures_Edge), Set__Fuse_Gestures_Edge__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Gestures_Edge__Perform(Set__Fuse_Gestures_Edge* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Gestures_Edge*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Gestures_Edge__set_Expression(Set__Fuse_Gestures_Edge* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Gestures_Edge__set_Increment(Set__Fuse_Gestures_Edge* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Gestures_Edge(NULL);
    }
}

void Set__Fuse_Gestures_Edge__set_Target(Set__Fuse_Gestures_Edge* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* value)
{
    __this->_Target = value;
}

void Set__Fuse_Gestures_Edge__set_UpdateRestValue(Set__Fuse_Gestures_Edge* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Gestures_Edge__set_Value(Set__Fuse_Gestures_Edge* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Gestures_Edge__Update(Set__Fuse_Gestures_Edge* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Gestures_ScrollDirections__uType* Set__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<Set__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(Set__Fuse_Gestures_ScrollDirections__uType), "Fuse.Triggers.Actions.Set<Fuse.Gestures.ScrollDirections>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Gestures_ScrollDirections__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Gestures_ScrollDirections, _blender),
        "_Expression", offsetof(Set__Fuse_Gestures_ScrollDirections, _Expression),
        "_Target", offsetof(Set__Fuse_Gestures_ScrollDirections, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Gestures_ScrollDirections, _blender), ::app::Fuse::Internal::Blender__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Gestures_ScrollDirections, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Gestures_ScrollDirections, _increment), ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Gestures_ScrollDirections, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Gestures_ScrollDirections__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Gestures_ScrollDirections__get_Increment, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Gestures_ScrollDirections__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Gestures_ScrollDirections__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Gestures_ScrollDirections__get_Value, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Gestures_ScrollDirections__New_1, 0, true, Set__Fuse_Gestures_ScrollDirections__typeof(), ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Gestures_ScrollDirections__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Gestures_ScrollDirections__set_Increment, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Gestures_ScrollDirections__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Gestures_ScrollDirections__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Gestures_ScrollDirections__set_Value, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Gestures_ScrollDirections___ObjInit_1(Set__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Gestures_ScrollDirections__get_Expression(Set__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Gestures_ScrollDirections__get_Increment(Set__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* Set__Fuse_Gestures_ScrollDirections__get_Target(Set__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Gestures_ScrollDirections__get_UpdateRestValue(Set__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Gestures_ScrollDirections__get_Value(Set__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_Value;
}

Set__Fuse_Gestures_ScrollDirections* Set__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* target)
{
    Set__Fuse_Gestures_ScrollDirections* inst = (Set__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(Set__Fuse_Gestures_ScrollDirections), Set__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Gestures_ScrollDirections__Perform(Set__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Gestures_ScrollDirections*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Gestures_ScrollDirections__set_Expression(Set__Fuse_Gestures_ScrollDirections* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Gestures_ScrollDirections__set_Increment(Set__Fuse_Gestures_ScrollDirections* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Gestures_ScrollDirections(NULL);
    }
}

void Set__Fuse_Gestures_ScrollDirections__set_Target(Set__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* value)
{
    __this->_Target = value;
}

void Set__Fuse_Gestures_ScrollDirections__set_UpdateRestValue(Set__Fuse_Gestures_ScrollDirections* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Gestures_ScrollDirections__set_Value(Set__Fuse_Gestures_ScrollDirections* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Gestures_ScrollDirections__Update(Set__Fuse_Gestures_ScrollDirections* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Layouts_Dock__uType* Set__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<Set__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(Set__Fuse_Layouts_Dock__uType), "Fuse.Triggers.Actions.Set<Fuse.Layouts.Dock>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Layouts_Dock__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Layouts_Dock, _blender),
        "_Expression", offsetof(Set__Fuse_Layouts_Dock, _Expression),
        "_Target", offsetof(Set__Fuse_Layouts_Dock, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Layouts_Dock, _blender), ::app::Fuse::Internal::Blender__Fuse_Layouts_Dock__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Layouts_Dock, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Layouts_Dock, _increment), ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Layouts_Dock, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Layouts_Dock__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Layouts_Dock__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Layouts_Dock__get_Increment, 0, false, ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Layouts_Dock__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Layouts_Dock__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Layouts_Dock__get_Value, 0, false, ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Layouts_Dock__New_1, 0, true, Set__Fuse_Layouts_Dock__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Layouts_Dock__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Layouts_Dock__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Layouts_Dock__set_Increment, 0, false, ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Layouts_Dock__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Layouts_Dock__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Layouts_Dock__set_Value, 0, false, ::app::Fuse::Layouts::Dock__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Layouts_Dock___ObjInit_1(Set__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Layouts_Dock__get_Expression(Set__Fuse_Layouts_Dock* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Layouts_Dock__get_Increment(Set__Fuse_Layouts_Dock* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Layouts_Dock* Set__Fuse_Layouts_Dock__get_Target(Set__Fuse_Layouts_Dock* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Layouts_Dock__get_UpdateRestValue(Set__Fuse_Layouts_Dock* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Layouts_Dock__get_Value(Set__Fuse_Layouts_Dock* __this)
{
    return __this->_Value;
}

Set__Fuse_Layouts_Dock* Set__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* target)
{
    Set__Fuse_Layouts_Dock* inst = (Set__Fuse_Layouts_Dock*)::uAllocObject(sizeof(Set__Fuse_Layouts_Dock), Set__Fuse_Layouts_Dock__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Layouts_Dock__Perform(Set__Fuse_Layouts_Dock* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Layouts_Dock*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Layouts_Dock__set_Expression(Set__Fuse_Layouts_Dock* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Layouts_Dock__set_Increment(Set__Fuse_Layouts_Dock* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Layouts_Dock(NULL);
    }
}

void Set__Fuse_Layouts_Dock__set_Target(Set__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* value)
{
    __this->_Target = value;
}

void Set__Fuse_Layouts_Dock__set_UpdateRestValue(Set__Fuse_Layouts_Dock* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Layouts_Dock__set_Value(Set__Fuse_Layouts_Dock* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Layouts_Dock__Update(Set__Fuse_Layouts_Dock* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Layouts_FlowDirection__uType* Set__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<Set__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(Set__Fuse_Layouts_FlowDirection__uType), "Fuse.Triggers.Actions.Set<Fuse.Layouts.FlowDirection>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Layouts_FlowDirection__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Layouts_FlowDirection, _blender),
        "_Expression", offsetof(Set__Fuse_Layouts_FlowDirection, _Expression),
        "_Target", offsetof(Set__Fuse_Layouts_FlowDirection, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Layouts_FlowDirection, _blender), ::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Layouts_FlowDirection, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Layouts_FlowDirection, _increment), ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Layouts_FlowDirection, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Layouts_FlowDirection__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Layouts_FlowDirection__get_Increment, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Layouts_FlowDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Layouts_FlowDirection__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Layouts_FlowDirection__get_Value, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Layouts_FlowDirection__New_1, 0, true, Set__Fuse_Layouts_FlowDirection__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Layouts_FlowDirection__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Layouts_FlowDirection__set_Increment, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Layouts_FlowDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Layouts_FlowDirection__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Layouts_FlowDirection__set_Value, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Layouts_FlowDirection___ObjInit_1(Set__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Layouts_FlowDirection__get_Expression(Set__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Layouts_FlowDirection__get_Increment(Set__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* Set__Fuse_Layouts_FlowDirection__get_Target(Set__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Layouts_FlowDirection__get_UpdateRestValue(Set__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Layouts_FlowDirection__get_Value(Set__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_Value;
}

Set__Fuse_Layouts_FlowDirection* Set__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* target)
{
    Set__Fuse_Layouts_FlowDirection* inst = (Set__Fuse_Layouts_FlowDirection*)::uAllocObject(sizeof(Set__Fuse_Layouts_FlowDirection), Set__Fuse_Layouts_FlowDirection__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Layouts_FlowDirection__Perform(Set__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Layouts_FlowDirection__set_Expression(Set__Fuse_Layouts_FlowDirection* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Layouts_FlowDirection__set_Increment(Set__Fuse_Layouts_FlowDirection* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Layouts_FlowDirection(NULL);
    }
}

void Set__Fuse_Layouts_FlowDirection__set_Target(Set__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* value)
{
    __this->_Target = value;
}

void Set__Fuse_Layouts_FlowDirection__set_UpdateRestValue(Set__Fuse_Layouts_FlowDirection* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Layouts_FlowDirection__set_Value(Set__Fuse_Layouts_FlowDirection* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Layouts_FlowDirection__Update(Set__Fuse_Layouts_FlowDirection* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Layouts_Metric__uType* Set__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<Set__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(Set__Fuse_Layouts_Metric__uType), "Fuse.Triggers.Actions.Set<Fuse.Layouts.Metric>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Layouts_Metric__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Layouts_Metric, _blender),
        "_Expression", offsetof(Set__Fuse_Layouts_Metric, _Expression),
        "_Target", offsetof(Set__Fuse_Layouts_Metric, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Layouts_Metric, _blender), ::app::Fuse::Internal::Blender__Fuse_Layouts_Metric__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Layouts_Metric, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Layouts_Metric, _increment), ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Layouts_Metric, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Layouts_Metric__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Layouts_Metric__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Layouts_Metric__get_Increment, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Layouts_Metric__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Layouts_Metric__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Layouts_Metric__get_Value, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Layouts_Metric__New_1, 0, true, Set__Fuse_Layouts_Metric__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Layouts_Metric__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Layouts_Metric__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Layouts_Metric__set_Increment, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Layouts_Metric__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Layouts_Metric__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Layouts_Metric__set_Value, 0, false, ::app::Fuse::Layouts::Metric__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Layouts_Metric___ObjInit_1(Set__Fuse_Layouts_Metric* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Layouts_Metric__get_Expression(Set__Fuse_Layouts_Metric* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Layouts_Metric__get_Increment(Set__Fuse_Layouts_Metric* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Layouts_Metric* Set__Fuse_Layouts_Metric__get_Target(Set__Fuse_Layouts_Metric* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Layouts_Metric__get_UpdateRestValue(Set__Fuse_Layouts_Metric* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Layouts_Metric__get_Value(Set__Fuse_Layouts_Metric* __this)
{
    return __this->_Value;
}

Set__Fuse_Layouts_Metric* Set__Fuse_Layouts_Metric__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* target)
{
    Set__Fuse_Layouts_Metric* inst = (Set__Fuse_Layouts_Metric*)::uAllocObject(sizeof(Set__Fuse_Layouts_Metric), Set__Fuse_Layouts_Metric__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Layouts_Metric__Perform(Set__Fuse_Layouts_Metric* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Layouts_Metric*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Layouts_Metric__set_Expression(Set__Fuse_Layouts_Metric* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Layouts_Metric__set_Increment(Set__Fuse_Layouts_Metric* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Layouts_Metric(NULL);
    }
}

void Set__Fuse_Layouts_Metric__set_Target(Set__Fuse_Layouts_Metric* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* value)
{
    __this->_Target = value;
}

void Set__Fuse_Layouts_Metric__set_UpdateRestValue(Set__Fuse_Layouts_Metric* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Layouts_Metric__set_Value(Set__Fuse_Layouts_Metric* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Layouts_Metric__Update(Set__Fuse_Layouts_Metric* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Layouts_Orientation__uType* Set__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<Set__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(Set__Fuse_Layouts_Orientation__uType), "Fuse.Triggers.Actions.Set<Fuse.Layouts.Orientation>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Layouts_Orientation__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Layouts_Orientation, _blender),
        "_Expression", offsetof(Set__Fuse_Layouts_Orientation, _Expression),
        "_Target", offsetof(Set__Fuse_Layouts_Orientation, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Layouts_Orientation, _blender), ::app::Fuse::Internal::Blender__Fuse_Layouts_Orientation__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Layouts_Orientation, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Layouts_Orientation, _increment), ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Layouts_Orientation, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Layouts_Orientation__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Layouts_Orientation__get_Increment, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Layouts_Orientation__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Layouts_Orientation__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Layouts_Orientation__get_Value, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Layouts_Orientation__New_1, 0, true, Set__Fuse_Layouts_Orientation__typeof(), ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Layouts_Orientation__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Layouts_Orientation__set_Increment, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Layouts_Orientation__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Layouts_Orientation__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Layouts_Orientation__set_Value, 0, false, ::app::Fuse::Layouts::Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Layouts_Orientation___ObjInit_1(Set__Fuse_Layouts_Orientation* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Layouts_Orientation__get_Expression(Set__Fuse_Layouts_Orientation* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Layouts_Orientation__get_Increment(Set__Fuse_Layouts_Orientation* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Layouts_Orientation* Set__Fuse_Layouts_Orientation__get_Target(Set__Fuse_Layouts_Orientation* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Layouts_Orientation__get_UpdateRestValue(Set__Fuse_Layouts_Orientation* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Layouts_Orientation__get_Value(Set__Fuse_Layouts_Orientation* __this)
{
    return __this->_Value;
}

Set__Fuse_Layouts_Orientation* Set__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* target)
{
    Set__Fuse_Layouts_Orientation* inst = (Set__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(Set__Fuse_Layouts_Orientation), Set__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Layouts_Orientation__Perform(Set__Fuse_Layouts_Orientation* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Layouts_Orientation*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Layouts_Orientation__set_Expression(Set__Fuse_Layouts_Orientation* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Layouts_Orientation__set_Increment(Set__Fuse_Layouts_Orientation* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Layouts_Orientation(NULL);
    }
}

void Set__Fuse_Layouts_Orientation__set_Target(Set__Fuse_Layouts_Orientation* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* value)
{
    __this->_Target = value;
}

void Set__Fuse_Layouts_Orientation__set_UpdateRestValue(Set__Fuse_Layouts_Orientation* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Layouts_Orientation__set_Value(Set__Fuse_Layouts_Orientation* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Layouts_Orientation__Update(Set__Fuse_Layouts_Orientation* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Navigation_NavigationDirection__uType* Set__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<Set__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(Set__Fuse_Navigation_NavigationDirection__uType), "Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationDirection>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Navigation_NavigationDirection__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Navigation_NavigationDirection, _blender),
        "_Expression", offsetof(Set__Fuse_Navigation_NavigationDirection, _Expression),
        "_Target", offsetof(Set__Fuse_Navigation_NavigationDirection, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Navigation_NavigationDirection, _blender), ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Navigation_NavigationDirection, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Navigation_NavigationDirection, _increment), ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Navigation_NavigationDirection, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Navigation_NavigationDirection__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Navigation_NavigationDirection__get_Increment, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Navigation_NavigationDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Navigation_NavigationDirection__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Navigation_NavigationDirection__get_Value, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Navigation_NavigationDirection__New_1, 0, true, Set__Fuse_Navigation_NavigationDirection__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Navigation_NavigationDirection__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Navigation_NavigationDirection__set_Increment, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Navigation_NavigationDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Navigation_NavigationDirection__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Navigation_NavigationDirection__set_Value, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Navigation_NavigationDirection___ObjInit_1(Set__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Navigation_NavigationDirection__get_Expression(Set__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Navigation_NavigationDirection__get_Increment(Set__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* Set__Fuse_Navigation_NavigationDirection__get_Target(Set__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Navigation_NavigationDirection__get_UpdateRestValue(Set__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Navigation_NavigationDirection__get_Value(Set__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_Value;
}

Set__Fuse_Navigation_NavigationDirection* Set__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* target)
{
    Set__Fuse_Navigation_NavigationDirection* inst = (Set__Fuse_Navigation_NavigationDirection*)::uAllocObject(sizeof(Set__Fuse_Navigation_NavigationDirection), Set__Fuse_Navigation_NavigationDirection__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Navigation_NavigationDirection__Perform(Set__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationDirection*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Navigation_NavigationDirection__set_Expression(Set__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Navigation_NavigationDirection__set_Increment(Set__Fuse_Navigation_NavigationDirection* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Navigation_NavigationDirection(NULL);
    }
}

void Set__Fuse_Navigation_NavigationDirection__set_Target(Set__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* value)
{
    __this->_Target = value;
}

void Set__Fuse_Navigation_NavigationDirection__set_UpdateRestValue(Set__Fuse_Navigation_NavigationDirection* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Navigation_NavigationDirection__set_Value(Set__Fuse_Navigation_NavigationDirection* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Navigation_NavigationDirection__Update(Set__Fuse_Navigation_NavigationDirection* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Navigation_NavigationEdge__uType* Set__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<Set__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(Set__Fuse_Navigation_NavigationEdge__uType), "Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationEdge>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Navigation_NavigationEdge__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Navigation_NavigationEdge, _blender),
        "_Expression", offsetof(Set__Fuse_Navigation_NavigationEdge, _Expression),
        "_Target", offsetof(Set__Fuse_Navigation_NavigationEdge, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Navigation_NavigationEdge, _blender), ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Navigation_NavigationEdge, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Navigation_NavigationEdge, _increment), ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Navigation_NavigationEdge, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Navigation_NavigationEdge__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Navigation_NavigationEdge__get_Increment, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Navigation_NavigationEdge__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Navigation_NavigationEdge__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Navigation_NavigationEdge__get_Value, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Navigation_NavigationEdge__New_1, 0, true, Set__Fuse_Navigation_NavigationEdge__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Navigation_NavigationEdge__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Navigation_NavigationEdge__set_Increment, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Navigation_NavigationEdge__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Navigation_NavigationEdge__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Navigation_NavigationEdge__set_Value, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Navigation_NavigationEdge___ObjInit_1(Set__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Navigation_NavigationEdge__get_Expression(Set__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Navigation_NavigationEdge__get_Increment(Set__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* Set__Fuse_Navigation_NavigationEdge__get_Target(Set__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Navigation_NavigationEdge__get_UpdateRestValue(Set__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Navigation_NavigationEdge__get_Value(Set__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_Value;
}

Set__Fuse_Navigation_NavigationEdge* Set__Fuse_Navigation_NavigationEdge__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* target)
{
    Set__Fuse_Navigation_NavigationEdge* inst = (Set__Fuse_Navigation_NavigationEdge*)::uAllocObject(sizeof(Set__Fuse_Navigation_NavigationEdge), Set__Fuse_Navigation_NavigationEdge__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Navigation_NavigationEdge__Perform(Set__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationEdge*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Navigation_NavigationEdge__set_Expression(Set__Fuse_Navigation_NavigationEdge* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Navigation_NavigationEdge__set_Increment(Set__Fuse_Navigation_NavigationEdge* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Navigation_NavigationEdge(NULL);
    }
}

void Set__Fuse_Navigation_NavigationEdge__set_Target(Set__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* value)
{
    __this->_Target = value;
}

void Set__Fuse_Navigation_NavigationEdge__set_UpdateRestValue(Set__Fuse_Navigation_NavigationEdge* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Navigation_NavigationEdge__set_Value(Set__Fuse_Navigation_NavigationEdge* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Navigation_NavigationEdge__Update(Set__Fuse_Navigation_NavigationEdge* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Navigation_NavigationGotoMode__uType* Set__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<Set__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(Set__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Triggers.Actions.Set<Fuse.Navigation.NavigationGotoMode>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Navigation_NavigationGotoMode__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Navigation_NavigationGotoMode, _blender),
        "_Expression", offsetof(Set__Fuse_Navigation_NavigationGotoMode, _Expression),
        "_Target", offsetof(Set__Fuse_Navigation_NavigationGotoMode, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Navigation_NavigationGotoMode, _blender), ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Navigation_NavigationGotoMode, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Navigation_NavigationGotoMode, _increment), ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Navigation_NavigationGotoMode, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Navigation_NavigationGotoMode__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Navigation_NavigationGotoMode__get_Increment, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Navigation_NavigationGotoMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Navigation_NavigationGotoMode__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Navigation_NavigationGotoMode__get_Value, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Navigation_NavigationGotoMode__New_1, 0, true, Set__Fuse_Navigation_NavigationGotoMode__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Navigation_NavigationGotoMode__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Navigation_NavigationGotoMode__set_Increment, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Navigation_NavigationGotoMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Navigation_NavigationGotoMode__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Navigation_NavigationGotoMode__set_Value, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Navigation_NavigationGotoMode___ObjInit_1(Set__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Navigation_NavigationGotoMode__get_Expression(Set__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Navigation_NavigationGotoMode__get_Increment(Set__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* Set__Fuse_Navigation_NavigationGotoMode__get_Target(Set__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Navigation_NavigationGotoMode__get_UpdateRestValue(Set__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Navigation_NavigationGotoMode__get_Value(Set__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_Value;
}

Set__Fuse_Navigation_NavigationGotoMode* Set__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* target)
{
    Set__Fuse_Navigation_NavigationGotoMode* inst = (Set__Fuse_Navigation_NavigationGotoMode*)::uAllocObject(sizeof(Set__Fuse_Navigation_NavigationGotoMode), Set__Fuse_Navigation_NavigationGotoMode__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Navigation_NavigationGotoMode__Perform(Set__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationGotoMode*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Navigation_NavigationGotoMode__set_Expression(Set__Fuse_Navigation_NavigationGotoMode* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Navigation_NavigationGotoMode__set_Increment(Set__Fuse_Navigation_NavigationGotoMode* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Navigation_NavigationGotoMode(NULL);
    }
}

void Set__Fuse_Navigation_NavigationGotoMode__set_Target(Set__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* value)
{
    __this->_Target = value;
}

void Set__Fuse_Navigation_NavigationGotoMode__set_UpdateRestValue(Set__Fuse_Navigation_NavigationGotoMode* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Navigation_NavigationGotoMode__set_Value(Set__Fuse_Navigation_NavigationGotoMode* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Navigation_NavigationGotoMode__Update(Set__Fuse_Navigation_NavigationGotoMode* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Navigation_SnapTo__uType* Set__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<Set__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(Set__Fuse_Navigation_SnapTo__uType), "Fuse.Triggers.Actions.Set<Fuse.Navigation.SnapTo>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Navigation_SnapTo__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Navigation_SnapTo, _blender),
        "_Expression", offsetof(Set__Fuse_Navigation_SnapTo, _Expression),
        "_Target", offsetof(Set__Fuse_Navigation_SnapTo, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Navigation_SnapTo, _blender), ::app::Fuse::Internal::Blender__Fuse_Navigation_SnapTo__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Navigation_SnapTo, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Navigation_SnapTo, _increment), ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Navigation_SnapTo, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Navigation_SnapTo__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Navigation_SnapTo__get_Increment, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Navigation_SnapTo__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Navigation_SnapTo__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Navigation_SnapTo__get_Value, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Navigation_SnapTo__New_1, 0, true, Set__Fuse_Navigation_SnapTo__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Navigation_SnapTo__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Navigation_SnapTo__set_Increment, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Navigation_SnapTo__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Navigation_SnapTo__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Navigation_SnapTo__set_Value, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Navigation_SnapTo___ObjInit_1(Set__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Navigation_SnapTo__get_Expression(Set__Fuse_Navigation_SnapTo* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Navigation_SnapTo__get_Increment(Set__Fuse_Navigation_SnapTo* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Navigation_SnapTo* Set__Fuse_Navigation_SnapTo__get_Target(Set__Fuse_Navigation_SnapTo* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Navigation_SnapTo__get_UpdateRestValue(Set__Fuse_Navigation_SnapTo* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Navigation_SnapTo__get_Value(Set__Fuse_Navigation_SnapTo* __this)
{
    return __this->_Value;
}

Set__Fuse_Navigation_SnapTo* Set__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* target)
{
    Set__Fuse_Navigation_SnapTo* inst = (Set__Fuse_Navigation_SnapTo*)::uAllocObject(sizeof(Set__Fuse_Navigation_SnapTo), Set__Fuse_Navigation_SnapTo__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Navigation_SnapTo__Perform(Set__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Navigation_SnapTo*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Navigation_SnapTo__set_Expression(Set__Fuse_Navigation_SnapTo* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Navigation_SnapTo__set_Increment(Set__Fuse_Navigation_SnapTo* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Navigation_SnapTo(NULL);
    }
}

void Set__Fuse_Navigation_SnapTo__set_Target(Set__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* value)
{
    __this->_Target = value;
}

void Set__Fuse_Navigation_SnapTo__set_UpdateRestValue(Set__Fuse_Navigation_SnapTo* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Navigation_SnapTo__set_Value(Set__Fuse_Navigation_SnapTo* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Navigation_SnapTo__Update(Set__Fuse_Navigation_SnapTo* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Navigation_SwipeDirection__uType* Set__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<Set__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(Set__Fuse_Navigation_SwipeDirection__uType), "Fuse.Triggers.Actions.Set<Fuse.Navigation.SwipeDirection>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Navigation_SwipeDirection__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Navigation_SwipeDirection, _blender),
        "_Expression", offsetof(Set__Fuse_Navigation_SwipeDirection, _Expression),
        "_Target", offsetof(Set__Fuse_Navigation_SwipeDirection, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Navigation_SwipeDirection, _blender), ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Navigation_SwipeDirection, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Navigation_SwipeDirection, _increment), ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Navigation_SwipeDirection, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Navigation_SwipeDirection__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Navigation_SwipeDirection__get_Increment, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Navigation_SwipeDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Navigation_SwipeDirection__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Navigation_SwipeDirection__get_Value, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Navigation_SwipeDirection__New_1, 0, true, Set__Fuse_Navigation_SwipeDirection__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Navigation_SwipeDirection__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Navigation_SwipeDirection__set_Increment, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Navigation_SwipeDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Navigation_SwipeDirection__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Navigation_SwipeDirection__set_Value, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Navigation_SwipeDirection___ObjInit_1(Set__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Navigation_SwipeDirection__get_Expression(Set__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Navigation_SwipeDirection__get_Increment(Set__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* Set__Fuse_Navigation_SwipeDirection__get_Target(Set__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Navigation_SwipeDirection__get_UpdateRestValue(Set__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Navigation_SwipeDirection__get_Value(Set__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_Value;
}

Set__Fuse_Navigation_SwipeDirection* Set__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* target)
{
    Set__Fuse_Navigation_SwipeDirection* inst = (Set__Fuse_Navigation_SwipeDirection*)::uAllocObject(sizeof(Set__Fuse_Navigation_SwipeDirection), Set__Fuse_Navigation_SwipeDirection__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Navigation_SwipeDirection__Perform(Set__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeDirection*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Navigation_SwipeDirection__set_Expression(Set__Fuse_Navigation_SwipeDirection* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Navigation_SwipeDirection__set_Increment(Set__Fuse_Navigation_SwipeDirection* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Navigation_SwipeDirection(NULL);
    }
}

void Set__Fuse_Navigation_SwipeDirection__set_Target(Set__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* value)
{
    __this->_Target = value;
}

void Set__Fuse_Navigation_SwipeDirection__set_UpdateRestValue(Set__Fuse_Navigation_SwipeDirection* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Navigation_SwipeDirection__set_Value(Set__Fuse_Navigation_SwipeDirection* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Navigation_SwipeDirection__Update(Set__Fuse_Navigation_SwipeDirection* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Navigation_SwipeEnds__uType* Set__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<Set__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(Set__Fuse_Navigation_SwipeEnds__uType), "Fuse.Triggers.Actions.Set<Fuse.Navigation.SwipeEnds>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Navigation_SwipeEnds__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Navigation_SwipeEnds, _blender),
        "_Expression", offsetof(Set__Fuse_Navigation_SwipeEnds, _Expression),
        "_Target", offsetof(Set__Fuse_Navigation_SwipeEnds, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Navigation_SwipeEnds, _blender), ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Navigation_SwipeEnds, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Navigation_SwipeEnds, _increment), ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Navigation_SwipeEnds, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Navigation_SwipeEnds__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Navigation_SwipeEnds__get_Increment, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Navigation_SwipeEnds__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Navigation_SwipeEnds__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Navigation_SwipeEnds__get_Value, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Navigation_SwipeEnds__New_1, 0, true, Set__Fuse_Navigation_SwipeEnds__typeof(), ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Navigation_SwipeEnds__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Navigation_SwipeEnds__set_Increment, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Navigation_SwipeEnds__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Navigation_SwipeEnds__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Navigation_SwipeEnds__set_Value, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Navigation_SwipeEnds___ObjInit_1(Set__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Navigation_SwipeEnds__get_Expression(Set__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Navigation_SwipeEnds__get_Increment(Set__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* Set__Fuse_Navigation_SwipeEnds__get_Target(Set__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Navigation_SwipeEnds__get_UpdateRestValue(Set__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Navigation_SwipeEnds__get_Value(Set__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_Value;
}

Set__Fuse_Navigation_SwipeEnds* Set__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* target)
{
    Set__Fuse_Navigation_SwipeEnds* inst = (Set__Fuse_Navigation_SwipeEnds*)::uAllocObject(sizeof(Set__Fuse_Navigation_SwipeEnds), Set__Fuse_Navigation_SwipeEnds__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Navigation_SwipeEnds__Perform(Set__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeEnds*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Navigation_SwipeEnds__set_Expression(Set__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Navigation_SwipeEnds__set_Increment(Set__Fuse_Navigation_SwipeEnds* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Navigation_SwipeEnds(NULL);
    }
}

void Set__Fuse_Navigation_SwipeEnds__set_Target(Set__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* value)
{
    __this->_Target = value;
}

void Set__Fuse_Navigation_SwipeEnds__set_UpdateRestValue(Set__Fuse_Navigation_SwipeEnds* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Navigation_SwipeEnds__set_Value(Set__Fuse_Navigation_SwipeEnds* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Navigation_SwipeEnds__Update(Set__Fuse_Navigation_SwipeEnds* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Node__uType* Set__Fuse_Node__typeof()
{
    static ::uStaticStrong<Set__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Node__uType*)::uAllocClassType(sizeof(Set__Fuse_Node__uType), "Fuse.Triggers.Actions.Set<Fuse.Node>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Node__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Node, _blender),
        "_Expression", offsetof(Set__Fuse_Node, _Expression),
        "_increment", offsetof(Set__Fuse_Node, _increment),
        "_Target", offsetof(Set__Fuse_Node, _Target),
        "_Value", offsetof(Set__Fuse_Node, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Node, _blender), ::app::Fuse::Internal::Blender__Fuse_Node__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Node, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Node, _increment), ::app::Fuse::Node__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Node, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Node__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Node__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Node__get_Increment, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Node__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Node__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Node__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Node__get_Value, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Node__New_1, 0, true, Set__Fuse_Node__typeof(), ::app::Uno::UX::Property__Fuse_Node__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Node__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Node__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Node__set_Increment, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Node__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Node__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Node__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Node__set_Value, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Node___ObjInit_1(Set__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Node__get_Expression(Set__Fuse_Node* __this)
{
    return __this->_Expression;
}

::app::Fuse::Node* Set__Fuse_Node__get_Increment(Set__Fuse_Node* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Node* Set__Fuse_Node__get_Target(Set__Fuse_Node* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Node__get_UpdateRestValue(Set__Fuse_Node* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Node* Set__Fuse_Node__get_Value(Set__Fuse_Node* __this)
{
    return __this->_Value;
}

Set__Fuse_Node* Set__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Node* target)
{
    Set__Fuse_Node* inst = (Set__Fuse_Node*)::uAllocObject(sizeof(Set__Fuse_Node), Set__Fuse_Node__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Node__Perform(Set__Fuse_Node* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Node*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Node*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Node__set_Expression(Set__Fuse_Node* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Node__set_Increment(Set__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Node(NULL);
    }
}

void Set__Fuse_Node__set_Target(Set__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* value)
{
    __this->_Target = value;
}

void Set__Fuse_Node__set_UpdateRestValue(Set__Fuse_Node* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Node__set_Value(Set__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    __this->_Value = value;
}

void Set__Fuse_Node__Update(Set__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Resources_ImageSource__uType* Set__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<Set__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(Set__Fuse_Resources_ImageSource__uType), "Fuse.Triggers.Actions.Set<Fuse.Resources.ImageSource>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Resources_ImageSource__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Resources_ImageSource, _blender),
        "_Expression", offsetof(Set__Fuse_Resources_ImageSource, _Expression),
        "_increment", offsetof(Set__Fuse_Resources_ImageSource, _increment),
        "_Target", offsetof(Set__Fuse_Resources_ImageSource, _Target),
        "_Value", offsetof(Set__Fuse_Resources_ImageSource, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Resources_ImageSource, _blender), ::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Resources_ImageSource, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Resources_ImageSource, _increment), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Resources_ImageSource, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Resources_ImageSource__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Resources_ImageSource__get_Increment, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Resources_ImageSource__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Resources_ImageSource__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Resources_ImageSource__get_Value, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Resources_ImageSource__New_1, 0, true, Set__Fuse_Resources_ImageSource__typeof(), ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Resources_ImageSource__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Resources_ImageSource__set_Increment, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Resources_ImageSource__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Resources_ImageSource__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Resources_ImageSource__set_Value, 0, false, ::app::Fuse::Resources::ImageSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Resources_ImageSource___ObjInit_1(Set__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Resources_ImageSource__get_Expression(Set__Fuse_Resources_ImageSource* __this)
{
    return __this->_Expression;
}

::app::Fuse::Resources::ImageSource* Set__Fuse_Resources_ImageSource__get_Increment(Set__Fuse_Resources_ImageSource* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Resources_ImageSource* Set__Fuse_Resources_ImageSource__get_Target(Set__Fuse_Resources_ImageSource* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Resources_ImageSource__get_UpdateRestValue(Set__Fuse_Resources_ImageSource* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Resources::ImageSource* Set__Fuse_Resources_ImageSource__get_Value(Set__Fuse_Resources_ImageSource* __this)
{
    return __this->_Value;
}

Set__Fuse_Resources_ImageSource* Set__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target)
{
    Set__Fuse_Resources_ImageSource* inst = (Set__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(Set__Fuse_Resources_ImageSource), Set__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Resources_ImageSource__Perform(Set__Fuse_Resources_ImageSource* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Resources::ImageSource*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Resources_ImageSource__set_Expression(Set__Fuse_Resources_ImageSource* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Resources_ImageSource__set_Increment(Set__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Resources_ImageSource(NULL);
    }
}

void Set__Fuse_Resources_ImageSource__set_Target(Set__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* value)
{
    __this->_Target = value;
}

void Set__Fuse_Resources_ImageSource__set_UpdateRestValue(Set__Fuse_Resources_ImageSource* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Resources_ImageSource__set_Value(Set__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value)
{
    __this->_Value = value;
}

void Set__Fuse_Resources_ImageSource__Update(Set__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Triggers_Actions_TriggerDirection__uType* Set__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<Set__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(Set__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Triggers.Actions.Set<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Triggers_Actions_TriggerDirection__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Triggers_Actions_TriggerDirection, _blender),
        "_Expression", offsetof(Set__Fuse_Triggers_Actions_TriggerDirection, _Expression),
        "_Target", offsetof(Set__Fuse_Triggers_Actions_TriggerDirection, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Triggers_Actions_TriggerDirection, _blender), ::app::Fuse::Internal::Blender__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Triggers_Actions_TriggerDirection, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Triggers_Actions_TriggerDirection, _increment), ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Triggers_Actions_TriggerDirection, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Triggers_Actions_TriggerDirection__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Triggers_Actions_TriggerDirection__get_Increment, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Triggers_Actions_TriggerDirection__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Triggers_Actions_TriggerDirection__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Triggers_Actions_TriggerDirection__get_Value, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Triggers_Actions_TriggerDirection__New_1, 0, true, Set__Fuse_Triggers_Actions_TriggerDirection__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Triggers_Actions_TriggerDirection__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Triggers_Actions_TriggerDirection__set_Increment, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Triggers_Actions_TriggerDirection__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Triggers_Actions_TriggerDirection__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Triggers_Actions_TriggerDirection__set_Value, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Triggers_Actions_TriggerDirection___ObjInit_1(Set__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Triggers_Actions_TriggerDirection__get_Expression(Set__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Triggers_Actions_TriggerDirection__get_Increment(Set__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* Set__Fuse_Triggers_Actions_TriggerDirection__get_Target(Set__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Triggers_Actions_TriggerDirection__get_UpdateRestValue(Set__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Triggers_Actions_TriggerDirection__get_Value(Set__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_Value;
}

Set__Fuse_Triggers_Actions_TriggerDirection* Set__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* target)
{
    Set__Fuse_Triggers_Actions_TriggerDirection* inst = (Set__Fuse_Triggers_Actions_TriggerDirection*)::uAllocObject(sizeof(Set__Fuse_Triggers_Actions_TriggerDirection), Set__Fuse_Triggers_Actions_TriggerDirection__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Triggers_Actions_TriggerDirection__Perform(Set__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Triggers_Actions_TriggerDirection*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Triggers_Actions_TriggerDirection__set_Expression(Set__Fuse_Triggers_Actions_TriggerDirection* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Triggers_Actions_TriggerDirection__set_Increment(Set__Fuse_Triggers_Actions_TriggerDirection* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Triggers_Actions_TriggerDirection(NULL);
    }
}

void Set__Fuse_Triggers_Actions_TriggerDirection__set_Target(Set__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* value)
{
    __this->_Target = value;
}

void Set__Fuse_Triggers_Actions_TriggerDirection__set_UpdateRestValue(Set__Fuse_Triggers_Actions_TriggerDirection* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Triggers_Actions_TriggerDirection__set_Value(Set__Fuse_Triggers_Actions_TriggerDirection* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Triggers_Actions_TriggerDirection__Update(Set__Fuse_Triggers_Actions_TriggerDirection* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Triggers_State__uType* Set__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<Set__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(Set__Fuse_Triggers_State__uType), "Fuse.Triggers.Actions.Set<Fuse.Triggers.State>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Triggers_State__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Triggers_State, _blender),
        "_Expression", offsetof(Set__Fuse_Triggers_State, _Expression),
        "_increment", offsetof(Set__Fuse_Triggers_State, _increment),
        "_Target", offsetof(Set__Fuse_Triggers_State, _Target),
        "_Value", offsetof(Set__Fuse_Triggers_State, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Triggers_State, _blender), ::app::Fuse::Internal::Blender__Fuse_Triggers_State__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Triggers_State, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Triggers_State, _increment), ::app::Fuse::Triggers::State__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Triggers_State, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Triggers_State__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Triggers_State__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Triggers_State__get_Increment, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Triggers_State__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_State__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Triggers_State__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Triggers_State__get_Value, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Triggers_State__New_1, 0, true, Set__Fuse_Triggers_State__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_State__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Triggers_State__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Triggers_State__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Triggers_State__set_Increment, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Triggers_State__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_State__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Triggers_State__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Triggers_State__set_Value, 0, false, ::app::Fuse::Triggers::State__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Triggers_State___ObjInit_1(Set__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Triggers_State__get_Expression(Set__Fuse_Triggers_State* __this)
{
    return __this->_Expression;
}

::app::Fuse::Triggers::State* Set__Fuse_Triggers_State__get_Increment(Set__Fuse_Triggers_State* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Triggers_State* Set__Fuse_Triggers_State__get_Target(Set__Fuse_Triggers_State* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Triggers_State__get_UpdateRestValue(Set__Fuse_Triggers_State* __this)
{
    return __this->_updateRestValue;
}

::app::Fuse::Triggers::State* Set__Fuse_Triggers_State__get_Value(Set__Fuse_Triggers_State* __this)
{
    return __this->_Value;
}

Set__Fuse_Triggers_State* Set__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* target)
{
    Set__Fuse_Triggers_State* inst = (Set__Fuse_Triggers_State*)::uAllocObject(sizeof(Set__Fuse_Triggers_State), Set__Fuse_Triggers_State__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Triggers_State__Perform(Set__Fuse_Triggers_State* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Triggers_State*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Fuse::Triggers::State*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Triggers_State__set_Expression(Set__Fuse_Triggers_State* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Triggers_State__set_Increment(Set__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Triggers_State(NULL);
    }
}

void Set__Fuse_Triggers_State__set_Target(Set__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* value)
{
    __this->_Target = value;
}

void Set__Fuse_Triggers_State__set_UpdateRestValue(Set__Fuse_Triggers_State* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Triggers_State__set_Value(Set__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value)
{
    __this->_Value = value;
}

void Set__Fuse_Triggers_State__Update(Set__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Triggers_StateTransition__uType* Set__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<Set__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(Set__Fuse_Triggers_StateTransition__uType), "Fuse.Triggers.Actions.Set<Fuse.Triggers.StateTransition>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Triggers_StateTransition__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Triggers_StateTransition, _blender),
        "_Expression", offsetof(Set__Fuse_Triggers_StateTransition, _Expression),
        "_Target", offsetof(Set__Fuse_Triggers_StateTransition, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Triggers_StateTransition, _blender), ::app::Fuse::Internal::Blender__Fuse_Triggers_StateTransition__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Triggers_StateTransition, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Triggers_StateTransition, _increment), ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Triggers_StateTransition, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Triggers_StateTransition__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Triggers_StateTransition__get_Increment, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Triggers_StateTransition__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Triggers_StateTransition__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Triggers_StateTransition__get_Value, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Triggers_StateTransition__New_1, 0, true, Set__Fuse_Triggers_StateTransition__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Triggers_StateTransition__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Triggers_StateTransition__set_Increment, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Triggers_StateTransition__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Triggers_StateTransition__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Triggers_StateTransition__set_Value, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Triggers_StateTransition___ObjInit_1(Set__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Triggers_StateTransition__get_Expression(Set__Fuse_Triggers_StateTransition* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Triggers_StateTransition__get_Increment(Set__Fuse_Triggers_StateTransition* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Triggers_StateTransition* Set__Fuse_Triggers_StateTransition__get_Target(Set__Fuse_Triggers_StateTransition* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Triggers_StateTransition__get_UpdateRestValue(Set__Fuse_Triggers_StateTransition* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Triggers_StateTransition__get_Value(Set__Fuse_Triggers_StateTransition* __this)
{
    return __this->_Value;
}

Set__Fuse_Triggers_StateTransition* Set__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* target)
{
    Set__Fuse_Triggers_StateTransition* inst = (Set__Fuse_Triggers_StateTransition*)::uAllocObject(sizeof(Set__Fuse_Triggers_StateTransition), Set__Fuse_Triggers_StateTransition__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Triggers_StateTransition__Perform(Set__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Triggers_StateTransition*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Triggers_StateTransition__set_Expression(Set__Fuse_Triggers_StateTransition* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Triggers_StateTransition__set_Increment(Set__Fuse_Triggers_StateTransition* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Triggers_StateTransition(NULL);
    }
}

void Set__Fuse_Triggers_StateTransition__set_Target(Set__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* value)
{
    __this->_Target = value;
}

void Set__Fuse_Triggers_StateTransition__set_UpdateRestValue(Set__Fuse_Triggers_StateTransition* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Triggers_StateTransition__set_Value(Set__Fuse_Triggers_StateTransition* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Triggers_StateTransition__Update(Set__Fuse_Triggers_StateTransition* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Fuse_Triggers_TriggerBypassMode__uType* Set__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<Set__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (Set__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(Set__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Triggers.Actions.Set<Fuse.Triggers.TriggerBypassMode>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Fuse_Triggers_TriggerBypassMode__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Fuse_Triggers_TriggerBypassMode, _blender),
        "_Expression", offsetof(Set__Fuse_Triggers_TriggerBypassMode, _Expression),
        "_Target", offsetof(Set__Fuse_Triggers_TriggerBypassMode, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Fuse_Triggers_TriggerBypassMode, _blender), ::app::Fuse::Internal::Blender__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Fuse_Triggers_TriggerBypassMode, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Fuse_Triggers_TriggerBypassMode, _increment), ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Fuse_Triggers_TriggerBypassMode, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Fuse_Triggers_TriggerBypassMode__get_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunction("get_Increment", Set__Fuse_Triggers_TriggerBypassMode__get_Increment, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunction("get_Target", Set__Fuse_Triggers_TriggerBypassMode__get_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Fuse_Triggers_TriggerBypassMode__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Fuse_Triggers_TriggerBypassMode__get_Value, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunction(".ctor", Set__Fuse_Triggers_TriggerBypassMode__New_1, 0, true, Set__Fuse_Triggers_TriggerBypassMode__typeof(), ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Fuse_Triggers_TriggerBypassMode__set_Expression, 0, false, ::app::Uno::UX::Expression__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Fuse_Triggers_TriggerBypassMode__set_Increment, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Fuse_Triggers_TriggerBypassMode__set_Target, 0, false, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Fuse_Triggers_TriggerBypassMode__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Fuse_Triggers_TriggerBypassMode__set_Value, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Fuse_Triggers_TriggerBypassMode___ObjInit_1(Set__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Fuse_Triggers_TriggerBypassMode__get_Expression(Set__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_Expression;
}

int Set__Fuse_Triggers_TriggerBypassMode__get_Increment(Set__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* Set__Fuse_Triggers_TriggerBypassMode__get_Target(Set__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_Target;
}

bool Set__Fuse_Triggers_TriggerBypassMode__get_UpdateRestValue(Set__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_updateRestValue;
}

int Set__Fuse_Triggers_TriggerBypassMode__get_Value(Set__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_Value;
}

Set__Fuse_Triggers_TriggerBypassMode* Set__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* target)
{
    Set__Fuse_Triggers_TriggerBypassMode* inst = (Set__Fuse_Triggers_TriggerBypassMode*)::uAllocObject(sizeof(Set__Fuse_Triggers_TriggerBypassMode), Set__Fuse_Triggers_TriggerBypassMode__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Fuse_Triggers_TriggerBypassMode__Perform(Set__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Fuse_Triggers_TriggerBypassMode*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Fuse_Triggers_TriggerBypassMode__set_Expression(Set__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Fuse_Triggers_TriggerBypassMode__set_Increment(Set__Fuse_Triggers_TriggerBypassMode* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Triggers_TriggerBypassMode(NULL);
    }
}

void Set__Fuse_Triggers_TriggerBypassMode__set_Target(Set__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* value)
{
    __this->_Target = value;
}

void Set__Fuse_Triggers_TriggerBypassMode__set_UpdateRestValue(Set__Fuse_Triggers_TriggerBypassMode* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Fuse_Triggers_TriggerBypassMode__set_Value(Set__Fuse_Triggers_TriggerBypassMode* __this, int value)
{
    __this->_Value = value;
}

void Set__Fuse_Triggers_TriggerBypassMode__Update(Set__Fuse_Triggers_TriggerBypassMode* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__int__uType* Set__int__typeof()
{
    static ::uStaticStrong<Set__int__uType*> type;
    if (type != NULL) return type;

    type = (Set__int__uType*)::uAllocClassType(sizeof(Set__int__uType), "Fuse.Triggers.Actions.Set<int>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__int__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__int, _blender),
        "_Expression", offsetof(Set__int, _Expression),
        "_Target", offsetof(Set__int, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__int, _blender), ::app::Fuse::Internal::Blender__int__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__int, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__int, _increment), ::app::Uno::Int__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__int, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__int__get_Expression, 0, false, ::app::Uno::UX::Expression__int__typeof()),
        ::uNewFunction("get_Increment", Set__int__get_Increment, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Target", Set__int__get_Target, 0, false, ::app::Uno::UX::Property__int__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__int__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__int__get_Value, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", Set__int__New_1, 0, true, Set__int__typeof(), ::app::Uno::UX::Property__int__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__int__set_Expression, 0, false, ::app::Uno::UX::Expression__int__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__int__set_Increment, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Target", Set__int__set_Target, 0, false, ::app::Uno::UX::Property__int__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__int__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__int__set_Value, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__int___ObjInit_1(Set__int* __this, ::app::Uno::UX::Property__int* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__int__get_Expression(Set__int* __this)
{
    return __this->_Expression;
}

int Set__int__get_Increment(Set__int* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__int* Set__int__get_Target(Set__int* __this)
{
    return __this->_Target;
}

bool Set__int__get_UpdateRestValue(Set__int* __this)
{
    return __this->_updateRestValue;
}

int Set__int__get_Value(Set__int* __this)
{
    return __this->_Value;
}

Set__int* Set__int__New_1(::uStatic* __this, ::app::Uno::UX::Property__int* target)
{
    Set__int* inst = (Set__int*)::uAllocObject(sizeof(Set__int), Set__int__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__int__Perform(Set__int* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__int*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__int__set_Expression(Set__int* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__int__set_Increment(Set__int* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__int(NULL);
    }
}

void Set__int__set_Target(Set__int* __this, ::app::Uno::UX::Property__int* value)
{
    __this->_Target = value;
}

void Set__int__set_UpdateRestValue(Set__int* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__int__set_Value(Set__int* __this, int value)
{
    __this->_Value = value;
}

void Set__int__Update(Set__int* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__int*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__int2__uType* Set__int2__typeof()
{
    static ::uStaticStrong<Set__int2__uType*> type;
    if (type != NULL) return type;

    type = (Set__int2__uType*)::uAllocClassType(sizeof(Set__int2__uType), "Fuse.Triggers.Actions.Set<int2>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__int2__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__int2, _blender),
        "_Expression", offsetof(Set__int2, _Expression),
        "_Target", offsetof(Set__int2, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__int2, _blender), ::app::Fuse::Internal::Blender__int2__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__int2, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__int2, _increment), ::app::Uno::Int2__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__int2, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__int2__get_Expression, 0, false, ::app::Uno::UX::Expression__int2__typeof()),
        ::uNewFunction("get_Increment", Set__int2__get_Increment, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_Target", Set__int2__get_Target, 0, false, ::app::Uno::UX::Property__int2__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__int2__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__int2__get_Value, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction(".ctor", Set__int2__New_1, 0, true, Set__int2__typeof(), ::app::Uno::UX::Property__int2__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__int2__set_Expression, 0, false, ::app::Uno::UX::Expression__int2__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__int2__set_Increment, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("set_Target", Set__int2__set_Target, 0, false, ::app::Uno::UX::Property__int2__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__int2__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__int2__set_Value, 0, false, ::app::Uno::Int2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__int2___ObjInit_1(Set__int2* __this, ::app::Uno::UX::Property__int2* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__int2__get_Expression(Set__int2* __this)
{
    return __this->_Expression;
}

::app::Uno::Int2 Set__int2__get_Increment(Set__int2* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__int2* Set__int2__get_Target(Set__int2* __this)
{
    return __this->_Target;
}

bool Set__int2__get_UpdateRestValue(Set__int2* __this)
{
    return __this->_updateRestValue;
}

::app::Uno::Int2 Set__int2__get_Value(Set__int2* __this)
{
    return __this->_Value;
}

Set__int2* Set__int2__New_1(::uStatic* __this, ::app::Uno::UX::Property__int2* target)
{
    Set__int2* inst = (Set__int2*)::uAllocObject(sizeof(Set__int2), Set__int2__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__int2__Perform(Set__int2* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__int2*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Uno::Int2>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__int2__set_Expression(Set__int2* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__int2__set_Increment(Set__int2* __this, ::app::Uno::Int2 value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__int2(NULL);
    }
}

void Set__int2__set_Target(Set__int2* __this, ::app::Uno::UX::Property__int2* value)
{
    __this->_Target = value;
}

void Set__int2__set_UpdateRestValue(Set__int2* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__int2__set_Value(Set__int2* __this, ::app::Uno::Int2 value)
{
    __this->_Value = value;
}

void Set__int2__Update(Set__int2* __this, ::app::Uno::Int2 value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__int3__uType* Set__int3__typeof()
{
    static ::uStaticStrong<Set__int3__uType*> type;
    if (type != NULL) return type;

    type = (Set__int3__uType*)::uAllocClassType(sizeof(Set__int3__uType), "Fuse.Triggers.Actions.Set<int3>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__int3__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__int3, _blender),
        "_Expression", offsetof(Set__int3, _Expression),
        "_Target", offsetof(Set__int3, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__int3, _blender), ::app::Fuse::Internal::Blender__int3__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__int3, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__int3, _increment), ::app::Uno::Int3__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__int3, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__int3__get_Expression, 0, false, ::app::Uno::UX::Expression__int3__typeof()),
        ::uNewFunction("get_Increment", Set__int3__get_Increment, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunction("get_Target", Set__int3__get_Target, 0, false, ::app::Uno::UX::Property__int3__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__int3__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__int3__get_Value, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunction(".ctor", Set__int3__New_1, 0, true, Set__int3__typeof(), ::app::Uno::UX::Property__int3__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__int3__set_Expression, 0, false, ::app::Uno::UX::Expression__int3__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__int3__set_Increment, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunctionVoid("set_Target", Set__int3__set_Target, 0, false, ::app::Uno::UX::Property__int3__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__int3__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__int3__set_Value, 0, false, ::app::Uno::Int3__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__int3___ObjInit_1(Set__int3* __this, ::app::Uno::UX::Property__int3* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__int3__get_Expression(Set__int3* __this)
{
    return __this->_Expression;
}

::app::Uno::Int3 Set__int3__get_Increment(Set__int3* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__int3* Set__int3__get_Target(Set__int3* __this)
{
    return __this->_Target;
}

bool Set__int3__get_UpdateRestValue(Set__int3* __this)
{
    return __this->_updateRestValue;
}

::app::Uno::Int3 Set__int3__get_Value(Set__int3* __this)
{
    return __this->_Value;
}

Set__int3* Set__int3__New_1(::uStatic* __this, ::app::Uno::UX::Property__int3* target)
{
    Set__int3* inst = (Set__int3*)::uAllocObject(sizeof(Set__int3), Set__int3__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__int3__Perform(Set__int3* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__int3*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Uno::Int3>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__int3__set_Expression(Set__int3* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__int3__set_Increment(Set__int3* __this, ::app::Uno::Int3 value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__int3(NULL);
    }
}

void Set__int3__set_Target(Set__int3* __this, ::app::Uno::UX::Property__int3* value)
{
    __this->_Target = value;
}

void Set__int3__set_UpdateRestValue(Set__int3* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__int3__set_Value(Set__int3* __this, ::app::Uno::Int3 value)
{
    __this->_Value = value;
}

void Set__int3__Update(Set__int3* __this, ::app::Uno::Int3 value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__int4__uType* Set__int4__typeof()
{
    static ::uStaticStrong<Set__int4__uType*> type;
    if (type != NULL) return type;

    type = (Set__int4__uType*)::uAllocClassType(sizeof(Set__int4__uType), "Fuse.Triggers.Actions.Set<int4>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__int4__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__int4, _blender),
        "_Expression", offsetof(Set__int4, _Expression),
        "_Target", offsetof(Set__int4, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__int4, _blender), ::app::Fuse::Internal::Blender__int4__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__int4, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__int4, _increment), ::app::Uno::Int4__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__int4, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__int4__get_Expression, 0, false, ::app::Uno::UX::Expression__int4__typeof()),
        ::uNewFunction("get_Increment", Set__int4__get_Increment, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunction("get_Target", Set__int4__get_Target, 0, false, ::app::Uno::UX::Property__int4__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__int4__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__int4__get_Value, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunction(".ctor", Set__int4__New_1, 0, true, Set__int4__typeof(), ::app::Uno::UX::Property__int4__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__int4__set_Expression, 0, false, ::app::Uno::UX::Expression__int4__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__int4__set_Increment, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunctionVoid("set_Target", Set__int4__set_Target, 0, false, ::app::Uno::UX::Property__int4__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__int4__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__int4__set_Value, 0, false, ::app::Uno::Int4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__int4___ObjInit_1(Set__int4* __this, ::app::Uno::UX::Property__int4* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__int4__get_Expression(Set__int4* __this)
{
    return __this->_Expression;
}

::app::Uno::Int4 Set__int4__get_Increment(Set__int4* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__int4* Set__int4__get_Target(Set__int4* __this)
{
    return __this->_Target;
}

bool Set__int4__get_UpdateRestValue(Set__int4* __this)
{
    return __this->_updateRestValue;
}

::app::Uno::Int4 Set__int4__get_Value(Set__int4* __this)
{
    return __this->_Value;
}

Set__int4* Set__int4__New_1(::uStatic* __this, ::app::Uno::UX::Property__int4* target)
{
    Set__int4* inst = (Set__int4*)::uAllocObject(sizeof(Set__int4), Set__int4__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__int4__Perform(Set__int4* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__int4*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Uno::Int4>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__int4__set_Expression(Set__int4* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__int4__set_Increment(Set__int4* __this, ::app::Uno::Int4 value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__int4(NULL);
    }
}

void Set__int4__set_Target(Set__int4* __this, ::app::Uno::UX::Property__int4* value)
{
    __this->_Target = value;
}

void Set__int4__set_UpdateRestValue(Set__int4* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__int4__set_Value(Set__int4* __this, ::app::Uno::Int4 value)
{
    __this->_Value = value;
}

void Set__int4__Update(Set__int4* __this, ::app::Uno::Int4 value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__long__uType* Set__long__typeof()
{
    static ::uStaticStrong<Set__long__uType*> type;
    if (type != NULL) return type;

    type = (Set__long__uType*)::uAllocClassType(sizeof(Set__long__uType), "Fuse.Triggers.Actions.Set<long>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__long__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__long, _blender),
        "_Expression", offsetof(Set__long, _Expression),
        "_Target", offsetof(Set__long, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__long, _blender), ::app::Fuse::Internal::Blender__long__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__long, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__long, _increment), ::app::Uno::Long__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__long, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__long__get_Expression, 0, false, ::app::Uno::UX::Expression__long__typeof()),
        ::uNewFunction("get_Increment", Set__long__get_Increment, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("get_Target", Set__long__get_Target, 0, false, ::app::Uno::UX::Property__long__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__long__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__long__get_Value, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction(".ctor", Set__long__New_1, 0, true, Set__long__typeof(), ::app::Uno::UX::Property__long__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__long__set_Expression, 0, false, ::app::Uno::UX::Expression__long__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__long__set_Increment, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("set_Target", Set__long__set_Target, 0, false, ::app::Uno::UX::Property__long__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__long__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__long__set_Value, 0, false, ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__long___ObjInit_1(Set__long* __this, ::app::Uno::UX::Property__long* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__long__get_Expression(Set__long* __this)
{
    return __this->_Expression;
}

::uLong Set__long__get_Increment(Set__long* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__long* Set__long__get_Target(Set__long* __this)
{
    return __this->_Target;
}

bool Set__long__get_UpdateRestValue(Set__long* __this)
{
    return __this->_updateRestValue;
}

::uLong Set__long__get_Value(Set__long* __this)
{
    return __this->_Value;
}

Set__long* Set__long__New_1(::uStatic* __this, ::app::Uno::UX::Property__long* target)
{
    Set__long* inst = (Set__long*)::uAllocObject(sizeof(Set__long), Set__long__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__long__Perform(Set__long* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__long*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::uLong>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__long__set_Expression(Set__long* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__long__set_Increment(Set__long* __this, ::uLong value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__long(NULL);
    }
}

void Set__long__set_Target(Set__long* __this, ::app::Uno::UX::Property__long* value)
{
    __this->_Target = value;
}

void Set__long__set_UpdateRestValue(Set__long* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__long__set_Value(Set__long* __this, ::uLong value)
{
    __this->_Value = value;
}

void Set__long__Update(Set__long* __this, ::uLong value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__long*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__object__uType* Set__object__typeof()
{
    static ::uStaticStrong<Set__object__uType*> type;
    if (type != NULL) return type;

    type = (Set__object__uType*)::uAllocClassType(sizeof(Set__object__uType), "Fuse.Triggers.Actions.Set<object>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__object__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__object, _blender),
        "_Expression", offsetof(Set__object, _Expression),
        "_increment", offsetof(Set__object, _increment),
        "_Target", offsetof(Set__object, _Target),
        "_Value", offsetof(Set__object, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__object, _blender), ::app::Fuse::Internal::Blender__object__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__object, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__object, _increment), ::uObject__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__object, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__object__get_Expression, 0, false, ::app::Uno::UX::Expression__object__typeof()),
        ::uNewFunction("get_Increment", Set__object__get_Increment, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Target", Set__object__get_Target, 0, false, ::app::Uno::UX::Property__object__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__object__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__object__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", Set__object__New_1, 0, true, Set__object__typeof(), ::app::Uno::UX::Property__object__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__object__set_Expression, 0, false, ::app::Uno::UX::Expression__object__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__object__set_Increment, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Target", Set__object__set_Target, 0, false, ::app::Uno::UX::Property__object__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__object__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__object__set_Value, 0, false, ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__object___ObjInit_1(Set__object* __this, ::app::Uno::UX::Property__object* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__object__get_Expression(Set__object* __this)
{
    return __this->_Expression;
}

::uObject* Set__object__get_Increment(Set__object* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__object* Set__object__get_Target(Set__object* __this)
{
    return __this->_Target;
}

bool Set__object__get_UpdateRestValue(Set__object* __this)
{
    return __this->_updateRestValue;
}

::uObject* Set__object__get_Value(Set__object* __this)
{
    return __this->_Value;
}

Set__object* Set__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* target)
{
    Set__object* inst = (Set__object*)::uAllocObject(sizeof(Set__object), Set__object__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__object__Perform(Set__object* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__object*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::uObject*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__object__set_Expression(Set__object* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__object__set_Increment(Set__object* __this, ::uObject* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__object(NULL);
    }
}

void Set__object__set_Target(Set__object* __this, ::app::Uno::UX::Property__object* value)
{
    __this->_Target = value;
}

void Set__object__set_UpdateRestValue(Set__object* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__object__set_Value(Set__object* __this, ::uObject* value)
{
    __this->_Value = value;
}

void Set__object__Update(Set__object* __this, ::uObject* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__object*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__short__uType* Set__short__typeof()
{
    static ::uStaticStrong<Set__short__uType*> type;
    if (type != NULL) return type;

    type = (Set__short__uType*)::uAllocClassType(sizeof(Set__short__uType), "Fuse.Triggers.Actions.Set<short>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__short__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__short, _blender),
        "_Expression", offsetof(Set__short, _Expression),
        "_Target", offsetof(Set__short, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__short, _blender), ::app::Fuse::Internal::Blender__short__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__short, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__short, _increment), ::app::Uno::Short__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__short, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__short__get_Expression, 0, false, ::app::Uno::UX::Expression__short__typeof()),
        ::uNewFunction("get_Increment", Set__short__get_Increment, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunction("get_Target", Set__short__get_Target, 0, false, ::app::Uno::UX::Property__short__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__short__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__short__get_Value, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunction(".ctor", Set__short__New_1, 0, true, Set__short__typeof(), ::app::Uno::UX::Property__short__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__short__set_Expression, 0, false, ::app::Uno::UX::Expression__short__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__short__set_Increment, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunctionVoid("set_Target", Set__short__set_Target, 0, false, ::app::Uno::UX::Property__short__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__short__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__short__set_Value, 0, false, ::app::Uno::Short__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__short___ObjInit_1(Set__short* __this, ::app::Uno::UX::Property__short* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__short__get_Expression(Set__short* __this)
{
    return __this->_Expression;
}

::uShort Set__short__get_Increment(Set__short* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__short* Set__short__get_Target(Set__short* __this)
{
    return __this->_Target;
}

bool Set__short__get_UpdateRestValue(Set__short* __this)
{
    return __this->_updateRestValue;
}

::uShort Set__short__get_Value(Set__short* __this)
{
    return __this->_Value;
}

Set__short* Set__short__New_1(::uStatic* __this, ::app::Uno::UX::Property__short* target)
{
    Set__short* inst = (Set__short*)::uAllocObject(sizeof(Set__short), Set__short__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__short__Perform(Set__short* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__short*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::uShort>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__short__set_Expression(Set__short* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__short__set_Increment(Set__short* __this, ::uShort value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__short(NULL);
    }
}

void Set__short__set_Target(Set__short* __this, ::app::Uno::UX::Property__short* value)
{
    __this->_Target = value;
}

void Set__short__set_UpdateRestValue(Set__short* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__short__set_Value(Set__short* __this, ::uShort value)
{
    __this->_Value = value;
}

void Set__short__Update(Set__short* __this, ::uShort value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__short*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__string__uType* Set__string__typeof()
{
    static ::uStaticStrong<Set__string__uType*> type;
    if (type != NULL) return type;

    type = (Set__string__uType*)::uAllocClassType(sizeof(Set__string__uType), "Fuse.Triggers.Actions.Set<string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__string__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__string, _blender),
        "_Expression", offsetof(Set__string, _Expression),
        "_increment", offsetof(Set__string, _increment),
        "_Target", offsetof(Set__string, _Target),
        "_Value", offsetof(Set__string, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__string, _blender), ::app::Fuse::Internal::Blender__string__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__string, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__string, _increment), ::app::Uno::String__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__string, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__string__get_Expression, 0, false, ::app::Uno::UX::Expression__string__typeof()),
        ::uNewFunction("get_Increment", Set__string__get_Increment, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Target", Set__string__get_Target, 0, false, ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__string__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", Set__string__New_1, 0, true, Set__string__typeof(), ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__string__set_Expression, 0, false, ::app::Uno::UX::Expression__string__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__string__set_Increment, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Target", Set__string__set_Target, 0, false, ::app::Uno::UX::Property__string__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__string__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__string__set_Value, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__string___ObjInit_1(Set__string* __this, ::app::Uno::UX::Property__string* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__string__get_Expression(Set__string* __this)
{
    return __this->_Expression;
}

::uString* Set__string__get_Increment(Set__string* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__string* Set__string__get_Target(Set__string* __this)
{
    return __this->_Target;
}

bool Set__string__get_UpdateRestValue(Set__string* __this)
{
    return __this->_updateRestValue;
}

::uString* Set__string__get_Value(Set__string* __this)
{
    return __this->_Value;
}

Set__string* Set__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target)
{
    Set__string* inst = (Set__string*)::uAllocObject(sizeof(Set__string), Set__string__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__string__Perform(Set__string* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__string*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::uString*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__string__set_Expression(Set__string* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__string__set_Increment(Set__string* __this, ::uString* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__string(NULL);
    }
}

void Set__string__set_Target(Set__string* __this, ::app::Uno::UX::Property__string* value)
{
    __this->_Target = value;
}

void Set__string__set_UpdateRestValue(Set__string* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__string__set_Value(Set__string* __this, ::uString* value)
{
    __this->_Value = value;
}

void Set__string__Update(Set__string* __this, ::uString* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Uno_EventArgs__uType* Set__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<Set__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (Set__Uno_EventArgs__uType*)::uAllocClassType(sizeof(Set__Uno_EventArgs__uType), "Fuse.Triggers.Actions.Set<Uno.EventArgs>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Uno_EventArgs__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Uno_EventArgs, _blender),
        "_Expression", offsetof(Set__Uno_EventArgs, _Expression),
        "_increment", offsetof(Set__Uno_EventArgs, _increment),
        "_Target", offsetof(Set__Uno_EventArgs, _Target),
        "_Value", offsetof(Set__Uno_EventArgs, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Uno_EventArgs, _blender), ::app::Fuse::Internal::Blender__Uno_EventArgs__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Uno_EventArgs, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Uno_EventArgs, _increment), ::app::Uno::EventArgs__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Uno_EventArgs, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Uno_EventArgs__get_Expression, 0, false, ::app::Uno::UX::Expression__Uno_EventArgs__typeof()),
        ::uNewFunction("get_Increment", Set__Uno_EventArgs__get_Increment, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunction("get_Target", Set__Uno_EventArgs__get_Target, 0, false, ::app::Uno::UX::Property__Uno_EventArgs__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Uno_EventArgs__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Uno_EventArgs__get_Value, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunction(".ctor", Set__Uno_EventArgs__New_1, 0, true, Set__Uno_EventArgs__typeof(), ::app::Uno::UX::Property__Uno_EventArgs__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Uno_EventArgs__set_Expression, 0, false, ::app::Uno::UX::Expression__Uno_EventArgs__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Uno_EventArgs__set_Increment, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Uno_EventArgs__set_Target, 0, false, ::app::Uno::UX::Property__Uno_EventArgs__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Uno_EventArgs__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Uno_EventArgs__set_Value, 0, false, ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Uno_EventArgs___ObjInit_1(Set__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Uno_EventArgs__get_Expression(Set__Uno_EventArgs* __this)
{
    return __this->_Expression;
}

::app::Uno::EventArgs* Set__Uno_EventArgs__get_Increment(Set__Uno_EventArgs* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Uno_EventArgs* Set__Uno_EventArgs__get_Target(Set__Uno_EventArgs* __this)
{
    return __this->_Target;
}

bool Set__Uno_EventArgs__get_UpdateRestValue(Set__Uno_EventArgs* __this)
{
    return __this->_updateRestValue;
}

::app::Uno::EventArgs* Set__Uno_EventArgs__get_Value(Set__Uno_EventArgs* __this)
{
    return __this->_Value;
}

Set__Uno_EventArgs* Set__Uno_EventArgs__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_EventArgs* target)
{
    Set__Uno_EventArgs* inst = (Set__Uno_EventArgs*)::uAllocObject(sizeof(Set__Uno_EventArgs), Set__Uno_EventArgs__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Uno_EventArgs__Perform(Set__Uno_EventArgs* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Uno_EventArgs*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Uno::EventArgs*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Uno_EventArgs__set_Expression(Set__Uno_EventArgs* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Uno_EventArgs__set_Increment(Set__Uno_EventArgs* __this, ::app::Uno::EventArgs* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Uno_EventArgs(NULL);
    }
}

void Set__Uno_EventArgs__set_Target(Set__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* value)
{
    __this->_Target = value;
}

void Set__Uno_EventArgs__set_UpdateRestValue(Set__Uno_EventArgs* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Uno_EventArgs__set_Value(Set__Uno_EventArgs* __this, ::app::Uno::EventArgs* value)
{
    __this->_Value = value;
}

void Set__Uno_EventArgs__Update(Set__Uno_EventArgs* __this, ::app::Uno::EventArgs* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Uno_Platform_iOS_StatusBarStyle__uType* Set__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<Set__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (Set__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(Set__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Triggers.Actions.Set<Uno.Platform.iOS.StatusBarStyle>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Uno_Platform_iOS_StatusBarStyle__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Uno_Platform_iOS_StatusBarStyle, _blender),
        "_Expression", offsetof(Set__Uno_Platform_iOS_StatusBarStyle, _Expression),
        "_Target", offsetof(Set__Uno_Platform_iOS_StatusBarStyle, _Target));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Uno_Platform_iOS_StatusBarStyle, _blender), ::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Uno_Platform_iOS_StatusBarStyle, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Uno_Platform_iOS_StatusBarStyle, _increment), ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Uno_Platform_iOS_StatusBarStyle, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Uno_Platform_iOS_StatusBarStyle__get_Expression, 0, false, ::app::Uno::UX::Expression__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunction("get_Increment", Set__Uno_Platform_iOS_StatusBarStyle__get_Increment, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunction("get_Target", Set__Uno_Platform_iOS_StatusBarStyle__get_Target, 0, false, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Uno_Platform_iOS_StatusBarStyle__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Uno_Platform_iOS_StatusBarStyle__get_Value, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunction(".ctor", Set__Uno_Platform_iOS_StatusBarStyle__New_1, 0, true, Set__Uno_Platform_iOS_StatusBarStyle__typeof(), ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Uno_Platform_iOS_StatusBarStyle__set_Expression, 0, false, ::app::Uno::UX::Expression__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Uno_Platform_iOS_StatusBarStyle__set_Increment, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Uno_Platform_iOS_StatusBarStyle__set_Target, 0, false, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Uno_Platform_iOS_StatusBarStyle__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Uno_Platform_iOS_StatusBarStyle__set_Value, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(Set__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Uno_Platform_iOS_StatusBarStyle__get_Expression(Set__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_Expression;
}

int Set__Uno_Platform_iOS_StatusBarStyle__get_Increment(Set__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* Set__Uno_Platform_iOS_StatusBarStyle__get_Target(Set__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_Target;
}

bool Set__Uno_Platform_iOS_StatusBarStyle__get_UpdateRestValue(Set__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_updateRestValue;
}

int Set__Uno_Platform_iOS_StatusBarStyle__get_Value(Set__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_Value;
}

Set__Uno_Platform_iOS_StatusBarStyle* Set__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* target)
{
    Set__Uno_Platform_iOS_StatusBarStyle* inst = (Set__Uno_Platform_iOS_StatusBarStyle*)::uAllocObject(sizeof(Set__Uno_Platform_iOS_StatusBarStyle), Set__Uno_Platform_iOS_StatusBarStyle__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Uno_Platform_iOS_StatusBarStyle__Perform(Set__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< int>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Uno_Platform_iOS_StatusBarStyle__set_Expression(Set__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Uno_Platform_iOS_StatusBarStyle__set_Increment(Set__Uno_Platform_iOS_StatusBarStyle* __this, int value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Uno_Platform_iOS_StatusBarStyle(NULL);
    }
}

void Set__Uno_Platform_iOS_StatusBarStyle__set_Target(Set__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* value)
{
    __this->_Target = value;
}

void Set__Uno_Platform_iOS_StatusBarStyle__set_UpdateRestValue(Set__Uno_Platform_iOS_StatusBarStyle* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Uno_Platform_iOS_StatusBarStyle__set_Value(Set__Uno_Platform_iOS_StatusBarStyle* __this, int value)
{
    __this->_Value = value;
}

void Set__Uno_Platform_iOS_StatusBarStyle__Update(Set__Uno_Platform_iOS_StatusBarStyle* __this, int value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__Uno_UX_FileSource__uType* Set__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<Set__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (Set__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(Set__Uno_UX_FileSource__uType), "Fuse.Triggers.Actions.Set<Uno.UX.FileSource>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__Uno_UX_FileSource__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__Uno_UX_FileSource, _blender),
        "_Expression", offsetof(Set__Uno_UX_FileSource, _Expression),
        "_increment", offsetof(Set__Uno_UX_FileSource, _increment),
        "_Target", offsetof(Set__Uno_UX_FileSource, _Target),
        "_Value", offsetof(Set__Uno_UX_FileSource, _Value));

    type->SetFields(4,
        ::uNewField("_blender", NULL, offsetof(Set__Uno_UX_FileSource, _blender), ::app::Fuse::Internal::Blender__Uno_UX_FileSource__typeof()),
        ::uNewField("_hasIncrement", NULL, offsetof(Set__Uno_UX_FileSource, _hasIncrement), ::app::Uno::Bool__typeof()),
        ::uNewField("_increment", NULL, offsetof(Set__Uno_UX_FileSource, _increment), ::app::Uno::UX::FileSource__typeof()),
        ::uNewField("_updateRestValue", NULL, offsetof(Set__Uno_UX_FileSource, _updateRestValue), ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_Expression", Set__Uno_UX_FileSource__get_Expression, 0, false, ::app::Uno::UX::Expression__Uno_UX_FileSource__typeof()),
        ::uNewFunction("get_Increment", Set__Uno_UX_FileSource__get_Increment, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Target", Set__Uno_UX_FileSource__get_Target, 0, false, ::app::Uno::UX::Property__Uno_UX_FileSource__typeof()),
        ::uNewFunction("get_UpdateRestValue", Set__Uno_UX_FileSource__get_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Value", Set__Uno_UX_FileSource__get_Value, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction(".ctor", Set__Uno_UX_FileSource__New_1, 0, true, Set__Uno_UX_FileSource__typeof(), ::app::Uno::UX::Property__Uno_UX_FileSource__typeof()),
        ::uNewFunctionVoid("set_Expression", Set__Uno_UX_FileSource__set_Expression, 0, false, ::app::Uno::UX::Expression__Uno_UX_FileSource__typeof()),
        ::uNewFunctionVoid("set_Increment", Set__Uno_UX_FileSource__set_Increment, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_Target", Set__Uno_UX_FileSource__set_Target, 0, false, ::app::Uno::UX::Property__Uno_UX_FileSource__typeof()),
        ::uNewFunctionVoid("set_UpdateRestValue", Set__Uno_UX_FileSource__set_UpdateRestValue, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Value", Set__Uno_UX_FileSource__set_Value, 0, false, ::app::Uno::UX::FileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void Set__Uno_UX_FileSource___ObjInit_1(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__Uno_UX_FileSource__get_Expression(Set__Uno_UX_FileSource* __this)
{
    return __this->_Expression;
}

::app::Uno::UX::FileSource* Set__Uno_UX_FileSource__get_Increment(Set__Uno_UX_FileSource* __this)
{
    return __this->_increment;
}

::app::Uno::UX::Property__Uno_UX_FileSource* Set__Uno_UX_FileSource__get_Target(Set__Uno_UX_FileSource* __this)
{
    return __this->_Target;
}

bool Set__Uno_UX_FileSource__get_UpdateRestValue(Set__Uno_UX_FileSource* __this)
{
    return __this->_updateRestValue;
}

::app::Uno::UX::FileSource* Set__Uno_UX_FileSource__get_Value(Set__Uno_UX_FileSource* __this)
{
    return __this->_Value;
}

Set__Uno_UX_FileSource* Set__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* target)
{
    Set__Uno_UX_FileSource* inst = (Set__Uno_UX_FileSource*)::uAllocObject(sizeof(Set__Uno_UX_FileSource), Set__Uno_UX_FileSource__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__Uno_UX_FileSource__Perform(Set__Uno_UX_FileSource* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__Uno_UX_FileSource*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< ::app::Uno::UX::FileSource*>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__Uno_UX_FileSource__set_Expression(Set__Uno_UX_FileSource* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__Uno_UX_FileSource__set_Increment(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value)
{
    __this->_increment = value;
    __this->_hasIncrement = true;

    if (__this->_blender == NULL)
    {
        __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__Uno_UX_FileSource(NULL);
    }
}

void Set__Uno_UX_FileSource__set_Target(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* value)
{
    __this->_Target = value;
}

void Set__Uno_UX_FileSource__set_UpdateRestValue(Set__Uno_UX_FileSource* __this, bool value)
{
    __this->_updateRestValue = value;
}

void Set__Uno_UX_FileSource__set_Value(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value)
{
    __this->_Value = value;
}

void Set__Uno_UX_FileSource__Update(Set__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

}}}}
