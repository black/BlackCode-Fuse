#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.KeyframeInterpolation.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.ResampleMode.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticBrush.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.AlignmentHelpers.h>
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
#include <app/Fuse.Internal.DoubleBlender.h>
#include <app/Fuse.Internal.Float2Blender.h>
#include <app/Fuse.Internal.Float3Blender.h>
#include <app/Fuse.Internal.Float4Blender.h>
#include <app/Fuse.Internal.FloatBlender.h>
#include <app/Fuse.Internal.FrustumMatrix.h>
#include <app/Fuse.Internal.FuseConfig.h>
#include <app/Fuse.Internal.IImageContainerOwner.h>
#include <app/Fuse.Internal.ImageContainer.h>
#include <app/Fuse.Internal.RectExtensions.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.Internal.Statistics.h>
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
#include <app/Fuse.Resources.FileImageSource.h>
#include <app/Fuse.Resources.HttpImageSource.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Resources.MultiDensityImageSource.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Uno.Action__Uno_UX_FileSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__object.h>
#include <app/Uno.Collections.ICollection__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ICollection__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Uno_UX_FileSource.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_FileSource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Int3.h>
#include <app/Uno.Int4.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__object*> BlenderMap___blenders;

BlenderMap__uType* BlenderMap__typeof()
{
    static ::uStaticStrong<BlenderMap__uType*> type;
    if (type != NULL) return type;

    type = (BlenderMap__uType*)::uAllocClassType(sizeof(BlenderMap__uType), "Fuse.Internal.BlenderMap", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("_blenders", &BlenderMap___blenders, 0, ::app::Uno::Collections::Dictionary__Uno_Type__object__typeof()));

    type->SetFunctions(60,
        ::uNewFunction("Get", BlenderMap__Get__bool, 0, true, ::app::Fuse::Internal::Blender__bool__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__char, 0, true, ::app::Fuse::Internal::Blender__char__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__double, 0, true, ::app::Fuse::Internal::Blender__double__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__float, 0, true, ::app::Fuse::Internal::Blender__float__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__float2, 0, true, ::app::Fuse::Internal::Blender__float2__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__float3, 0, true, ::app::Fuse::Internal::Blender__float3__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__float4, 0, true, ::app::Fuse::Internal::Blender__float4__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Animations_AnimationVariant, 0, true, ::app::Fuse::Internal::Blender__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Animations_Easing, 0, true, ::app::Fuse::Internal::Blender__Fuse_Animations_Easing__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Animations_KeyframeInterpolation, 0, true, ::app::Fuse::Internal::Blender__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Animations_MixOp, 0, true, ::app::Fuse::Internal::Blender__Fuse_Animations_MixOp__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Drawing_BlendMode, 0, true, ::app::Fuse::Internal::Blender__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Drawing_Brush, 0, true, ::app::Fuse::Internal::Blender__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Drawing_DynamicBrush, 0, true, ::app::Fuse::Internal::Blender__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Drawing_GradientStop, 0, true, ::app::Fuse::Internal::Blender__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Drawing_LinearGradient, 0, true, ::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Drawing_SolidColor, 0, true, ::app::Fuse::Internal::Blender__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Drawing_StaticBrush, 0, true, ::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_Alignment, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_Alignment__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_CachingMode, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_Element, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_Element__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_HitTestMode, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_SizeUnit, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_StretchDirection, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_StretchMode, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_StretchSizing, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_TextAlignment, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_TextWrapping, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Elements_Visibility, 0, true, ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Font, 0, true, ::app::Fuse::Internal::Blender__Fuse_Font__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Gestures_Edge, 0, true, ::app::Fuse::Internal::Blender__Fuse_Gestures_Edge__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Gestures_ScrollDirections, 0, true, ::app::Fuse::Internal::Blender__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Layouts_Dock, 0, true, ::app::Fuse::Internal::Blender__Fuse_Layouts_Dock__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Layouts_FlowDirection, 0, true, ::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Layouts_Metric, 0, true, ::app::Fuse::Internal::Blender__Fuse_Layouts_Metric__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Layouts_Orientation, 0, true, ::app::Fuse::Internal::Blender__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Navigation_NavigationDirection, 0, true, ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Navigation_NavigationEdge, 0, true, ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Navigation_NavigationGotoMode, 0, true, ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Navigation_SnapTo, 0, true, ::app::Fuse::Internal::Blender__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Navigation_SwipeDirection, 0, true, ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Navigation_SwipeEnds, 0, true, ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Node, 0, true, ::app::Fuse::Internal::Blender__Fuse_Node__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Resources_ImageSource, 0, true, ::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Triggers_Actions_TriggerDirection, 0, true, ::app::Fuse::Internal::Blender__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Triggers_State, 0, true, ::app::Fuse::Internal::Blender__Fuse_Triggers_State__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Triggers_StateTransition, 0, true, ::app::Fuse::Internal::Blender__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Fuse_Triggers_TriggerBypassMode, 0, true, ::app::Fuse::Internal::Blender__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__int, 0, true, ::app::Fuse::Internal::Blender__int__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__int2, 0, true, ::app::Fuse::Internal::Blender__int2__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__int3, 0, true, ::app::Fuse::Internal::Blender__int3__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__int4, 0, true, ::app::Fuse::Internal::Blender__int4__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__long, 0, true, ::app::Fuse::Internal::Blender__long__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__object, 0, true, ::app::Fuse::Internal::Blender__object__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__short, 0, true, ::app::Fuse::Internal::Blender__short__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__string, 0, true, ::app::Fuse::Internal::Blender__string__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Uno_EventArgs, 0, true, ::app::Fuse::Internal::Blender__Uno_EventArgs__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Uno_Platform_iOS_StatusBarStyle, 0, true, ::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunction("Get", BlenderMap__Get__Uno_UX_FileSource, 0, true, ::app::Fuse::Internal::Blender__Uno_UX_FileSource__typeof()),
        ::uNewFunction(".ctor", BlenderMap__New_1, 0, true, BlenderMap__typeof()));

    ::uRegisterType(type);
    return type;
}

void BlenderMap___ObjInit(BlenderMap* __this)
{
}

void BlenderMap___TypeInit(::uStatic* __this)
{
    BlenderMap___blenders = ::app::Uno::Collections::Dictionary__Uno_Type__object__New_1(NULL);
}

::app::Fuse::Internal::Blender__bool* BlenderMap__Get__bool(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Bool__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Bool__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Bool__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__bool*>(blender, ::app::Fuse::Internal::Blender__bool__typeof());
}

::app::Fuse::Internal::Blender__char* BlenderMap__Get__char(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Char__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Char__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Char__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Char__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__char*>(blender, ::app::Fuse::Internal::Blender__char__typeof());
}

::app::Fuse::Internal::Blender__double* BlenderMap__Get__double(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Double__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Double__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Double__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Double__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__double*>(blender, ::app::Fuse::Internal::Blender__double__typeof());
}

::app::Fuse::Internal::Blender__float* BlenderMap__Get__float(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float*>(blender, ::app::Fuse::Internal::Blender__float__typeof());
}

::app::Fuse::Internal::Blender__float2* BlenderMap__Get__float2(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float2__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float2__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float2__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float2*>(blender, ::app::Fuse::Internal::Blender__float2__typeof());
}

::app::Fuse::Internal::Blender__float3* BlenderMap__Get__float3(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float3__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float3__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float3__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float3__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float3*>(blender, ::app::Fuse::Internal::Blender__float3__typeof());
}

::app::Fuse::Internal::Blender__float4* BlenderMap__Get__float4(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float4__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float4__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float4__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float4*>(blender, ::app::Fuse::Internal::Blender__float4__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Animations_AnimationVariant* BlenderMap__Get__Fuse_Animations_AnimationVariant(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Animations::AnimationVariant__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::AnimationVariant__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Animations::AnimationVariant__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Animations::AnimationVariant__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Animations_AnimationVariant*>(blender, ::app::Fuse::Internal::Blender__Fuse_Animations_AnimationVariant__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Animations_Easing* BlenderMap__Get__Fuse_Animations_Easing(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Animations::Easing__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::Easing__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Animations::Easing__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Animations::Easing__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Animations_Easing*>(blender, ::app::Fuse::Internal::Blender__Fuse_Animations_Easing__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Animations_KeyframeInterpolation* BlenderMap__Get__Fuse_Animations_KeyframeInterpolation(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Animations::KeyframeInterpolation__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Animations::KeyframeInterpolation__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Animations::KeyframeInterpolation__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Animations_KeyframeInterpolation*>(blender, ::app::Fuse::Internal::Blender__Fuse_Animations_KeyframeInterpolation__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Animations_MixOp* BlenderMap__Get__Fuse_Animations_MixOp(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Animations::MixOp__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Animations::MixOp__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Animations::MixOp__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Animations::MixOp__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Animations_MixOp*>(blender, ::app::Fuse::Internal::Blender__Fuse_Animations_MixOp__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Drawing_BlendMode* BlenderMap__Get__Fuse_Drawing_BlendMode(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Drawing::BlendMode__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::BlendMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::BlendMode__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Drawing::BlendMode__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Drawing_BlendMode*>(blender, ::app::Fuse::Internal::Blender__Fuse_Drawing_BlendMode__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Drawing_Brush* BlenderMap__Get__Fuse_Drawing_Brush(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Drawing::Brush__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::Brush__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::Brush__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Drawing::Brush__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Drawing_Brush*>(blender, ::app::Fuse::Internal::Blender__Fuse_Drawing_Brush__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Drawing_DynamicBrush* BlenderMap__Get__Fuse_Drawing_DynamicBrush(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Drawing::DynamicBrush__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::DynamicBrush__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::DynamicBrush__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Drawing::DynamicBrush__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Drawing_DynamicBrush*>(blender, ::app::Fuse::Internal::Blender__Fuse_Drawing_DynamicBrush__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Drawing_GradientStop* BlenderMap__Get__Fuse_Drawing_GradientStop(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Drawing::GradientStop__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::GradientStop__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::GradientStop__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Drawing::GradientStop__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Drawing_GradientStop*>(blender, ::app::Fuse::Internal::Blender__Fuse_Drawing_GradientStop__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient* BlenderMap__Get__Fuse_Drawing_LinearGradient(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Drawing::LinearGradient__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::LinearGradient__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::LinearGradient__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Drawing::LinearGradient__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient*>(blender, ::app::Fuse::Internal::Blender__Fuse_Drawing_LinearGradient__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Drawing_SolidColor* BlenderMap__Get__Fuse_Drawing_SolidColor(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Drawing::SolidColor__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::SolidColor__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::SolidColor__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Drawing::SolidColor__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Drawing_SolidColor*>(blender, ::app::Fuse::Internal::Blender__Fuse_Drawing_SolidColor__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush* BlenderMap__Get__Fuse_Drawing_StaticBrush(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Drawing::StaticBrush__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Drawing::StaticBrush__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Drawing::StaticBrush__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Drawing::StaticBrush__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush*>(blender, ::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_Alignment* BlenderMap__Get__Fuse_Elements_Alignment(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::Alignment__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Alignment__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::Alignment__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::Alignment__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_Alignment*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_Alignment__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode* BlenderMap__Get__Fuse_Elements_CachingMode(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::CachingMode__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::CachingMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::CachingMode__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::CachingMode__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_Element* BlenderMap__Get__Fuse_Elements_Element(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::Element__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Element__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::Element__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::Element__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_Element*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_Element__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_HitTestMode* BlenderMap__Get__Fuse_Elements_HitTestMode(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::HitTestMode__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::HitTestMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::HitTestMode__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::HitTestMode__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_HitTestMode*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_HitTestMode__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_SizeUnit* BlenderMap__Get__Fuse_Elements_SizeUnit(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::SizeUnit__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::SizeUnit__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::SizeUnit__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::SizeUnit__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_SizeUnit*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_SizeUnit__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_StretchDirection* BlenderMap__Get__Fuse_Elements_StretchDirection(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::StretchDirection__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::StretchDirection__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::StretchDirection__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchDirection*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_StretchDirection__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_StretchMode* BlenderMap__Get__Fuse_Elements_StretchMode(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::StretchMode__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::StretchMode__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::StretchMode__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchMode*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_StretchMode__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing* BlenderMap__Get__Fuse_Elements_StretchSizing(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::StretchSizing__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::StretchSizing__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::StretchSizing__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::StretchSizing__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_StretchSizing__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_TextAlignment* BlenderMap__Get__Fuse_Elements_TextAlignment(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::TextAlignment__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::TextAlignment__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::TextAlignment__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::TextAlignment__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_TextAlignment*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_TextAlignment__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_TextWrapping* BlenderMap__Get__Fuse_Elements_TextWrapping(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::TextWrapping__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::TextWrapping__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::TextWrapping__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::TextWrapping__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_TextWrapping*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_TextWrapping__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_Visibility* BlenderMap__Get__Fuse_Elements_Visibility(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::Visibility__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::Visibility__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::Visibility__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Font* BlenderMap__Get__Fuse_Font(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Font__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Font__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Font__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Font__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Font*>(blender, ::app::Fuse::Internal::Blender__Fuse_Font__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Gestures_Edge* BlenderMap__Get__Fuse_Gestures_Edge(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Gestures::Edge__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Gestures::Edge__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Gestures::Edge__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Gestures::Edge__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Gestures_Edge*>(blender, ::app::Fuse::Internal::Blender__Fuse_Gestures_Edge__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Gestures_ScrollDirections* BlenderMap__Get__Fuse_Gestures_ScrollDirections(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Gestures::ScrollDirections__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Gestures::ScrollDirections__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Gestures::ScrollDirections__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Gestures::ScrollDirections__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Gestures_ScrollDirections*>(blender, ::app::Fuse::Internal::Blender__Fuse_Gestures_ScrollDirections__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Layouts_Dock* BlenderMap__Get__Fuse_Layouts_Dock(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Layouts::Dock__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Dock__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Layouts::Dock__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Layouts::Dock__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Layouts_Dock*>(blender, ::app::Fuse::Internal::Blender__Fuse_Layouts_Dock__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection* BlenderMap__Get__Fuse_Layouts_FlowDirection(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Layouts::FlowDirection__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::FlowDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Layouts::FlowDirection__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Layouts::FlowDirection__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection*>(blender, ::app::Fuse::Internal::Blender__Fuse_Layouts_FlowDirection__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Layouts_Metric* BlenderMap__Get__Fuse_Layouts_Metric(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Layouts::Metric__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Metric__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Layouts::Metric__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Layouts::Metric__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Layouts_Metric*>(blender, ::app::Fuse::Internal::Blender__Fuse_Layouts_Metric__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Layouts_Orientation* BlenderMap__Get__Fuse_Layouts_Orientation(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Layouts::Orientation__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Layouts::Orientation__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Layouts::Orientation__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Layouts::Orientation__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Layouts_Orientation*>(blender, ::app::Fuse::Internal::Blender__Fuse_Layouts_Orientation__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationDirection* BlenderMap__Get__Fuse_Navigation_NavigationDirection(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Navigation::NavigationDirection__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::NavigationDirection__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Navigation::NavigationDirection__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationDirection*>(blender, ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationDirection__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationEdge* BlenderMap__Get__Fuse_Navigation_NavigationEdge(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Navigation::NavigationEdge__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationEdge__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::NavigationEdge__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Navigation::NavigationEdge__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationEdge*>(blender, ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationEdge__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationGotoMode* BlenderMap__Get__Fuse_Navigation_NavigationGotoMode(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Navigation::NavigationGotoMode__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::NavigationGotoMode__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Navigation::NavigationGotoMode__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationGotoMode*>(blender, ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationGotoMode__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Navigation_SnapTo* BlenderMap__Get__Fuse_Navigation_SnapTo(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Navigation::SnapTo__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SnapTo__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::SnapTo__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Navigation::SnapTo__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Navigation_SnapTo*>(blender, ::app::Fuse::Internal::Blender__Fuse_Navigation_SnapTo__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeDirection* BlenderMap__Get__Fuse_Navigation_SwipeDirection(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Navigation::SwipeDirection__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::SwipeDirection__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Navigation::SwipeDirection__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeDirection*>(blender, ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeDirection__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeEnds* BlenderMap__Get__Fuse_Navigation_SwipeEnds(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Navigation::SwipeEnds__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Navigation::SwipeEnds__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Navigation::SwipeEnds__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Navigation::SwipeEnds__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeEnds*>(blender, ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeEnds__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Node* BlenderMap__Get__Fuse_Node(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Node__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Node__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Node__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Node__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Node*>(blender, ::app::Fuse::Internal::Blender__Fuse_Node__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource* BlenderMap__Get__Fuse_Resources_ImageSource(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Resources::ImageSource__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Resources::ImageSource__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Resources::ImageSource__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Resources::ImageSource__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource*>(blender, ::app::Fuse::Internal::Blender__Fuse_Resources_ImageSource__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Triggers_Actions_TriggerDirection* BlenderMap__Get__Fuse_Triggers_Actions_TriggerDirection(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Triggers::Actions::TriggerDirection__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Triggers_Actions_TriggerDirection*>(blender, ::app::Fuse::Internal::Blender__Fuse_Triggers_Actions_TriggerDirection__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Triggers_State* BlenderMap__Get__Fuse_Triggers_State(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Triggers::State__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::State__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Triggers::State__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Triggers::State__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Triggers_State*>(blender, ::app::Fuse::Internal::Blender__Fuse_Triggers_State__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Triggers_StateTransition* BlenderMap__Get__Fuse_Triggers_StateTransition(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Triggers::StateTransition__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::StateTransition__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Triggers::StateTransition__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Triggers::StateTransition__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Triggers_StateTransition*>(blender, ::app::Fuse::Internal::Blender__Fuse_Triggers_StateTransition__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Triggers_TriggerBypassMode* BlenderMap__Get__Fuse_Triggers_TriggerBypassMode(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Triggers::TriggerBypassMode__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Triggers::TriggerBypassMode__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Triggers::TriggerBypassMode__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Triggers_TriggerBypassMode*>(blender, ::app::Fuse::Internal::Blender__Fuse_Triggers_TriggerBypassMode__typeof());
}

::app::Fuse::Internal::Blender__int* BlenderMap__Get__int(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Int__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Int__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Int__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__int*>(blender, ::app::Fuse::Internal::Blender__int__typeof());
}

::app::Fuse::Internal::Blender__int2* BlenderMap__Get__int2(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Int2__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int2__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Int2__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Int2__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__int2*>(blender, ::app::Fuse::Internal::Blender__int2__typeof());
}

::app::Fuse::Internal::Blender__int3* BlenderMap__Get__int3(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Int3__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int3__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Int3__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Int3__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__int3*>(blender, ::app::Fuse::Internal::Blender__int3__typeof());
}

::app::Fuse::Internal::Blender__int4* BlenderMap__Get__int4(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Int4__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Int4__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Int4__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Int4__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__int4*>(blender, ::app::Fuse::Internal::Blender__int4__typeof());
}

::app::Fuse::Internal::Blender__long* BlenderMap__Get__long(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Long__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Long__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Long__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Long__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__long*>(blender, ::app::Fuse::Internal::Blender__long__typeof());
}

::app::Fuse::Internal::Blender__object* BlenderMap__Get__object(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::uObject__typeof(), &blender))
    {
        if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::uObject__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::uObject__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::uObject__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__object*>(blender, ::app::Fuse::Internal::Blender__object__typeof());
}

::app::Fuse::Internal::Blender__short* BlenderMap__Get__short(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Short__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Short__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Short__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Short__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__short*>(blender, ::app::Fuse::Internal::Blender__short__typeof());
}

::app::Fuse::Internal::Blender__string* BlenderMap__Get__string(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::String__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::String__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::String__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::String__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__string*>(blender, ::app::Fuse::Internal::Blender__string__typeof());
}

::app::Fuse::Internal::Blender__Uno_EventArgs* BlenderMap__Get__Uno_EventArgs(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::EventArgs__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::EventArgs__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::EventArgs__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::EventArgs__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Uno_EventArgs*>(blender, ::app::Fuse::Internal::Blender__Uno_EventArgs__typeof());
}

::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle* BlenderMap__Get__Uno_Platform_iOS_StatusBarStyle(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Platform::iOS::StatusBarStyle__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle*>(blender, ::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle__typeof());
}

::app::Fuse::Internal::Blender__Uno_UX_FileSource* BlenderMap__Get__Uno_UX_FileSource(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::UX::FileSource__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::UX::FileSource__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::UX::FileSource__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::UX::FileSource__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Uno_UX_FileSource*>(blender, ::app::Fuse::Internal::Blender__Uno_UX_FileSource__typeof());
}

BlenderMap* BlenderMap__New_1(::uStatic* __this)
{
    BlenderMap* inst = (BlenderMap*)::uAllocObject(sizeof(BlenderMap), BlenderMap__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DoubleBlender__uType* DoubleBlender__typeof()
{
    static ::uStaticStrong<DoubleBlender__uType*> type;
    if (type != NULL) return type;

    type = (DoubleBlender__uType*)::uAllocClassType(sizeof(DoubleBlender__uType), "Fuse.Internal.DoubleBlender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__double__typeof());
    type->__fp_Add = (double(*)(::app::Fuse::Internal::Blender__double*, double, double))DoubleBlender__Add;
    type->__fp_get_One = (double(*)(::app::Fuse::Internal::Blender__double*))DoubleBlender__get_One;
    type->__fp_get_Zero = (double(*)(::app::Fuse::Internal::Blender__double*))DoubleBlender__get_Zero;
    type->__fp_Length = (double(*)(::app::Fuse::Internal::Blender__double*, double))DoubleBlender__Length;
    type->__fp_Lerp = (double(*)(::app::Fuse::Internal::Blender__double*, double, double, double))DoubleBlender__Lerp;
    type->__fp_Sub = (double(*)(::app::Fuse::Internal::Blender__double*, double, double))DoubleBlender__Sub;
    type->__fp_ToUnit = (double(*)(::app::Fuse::Internal::Blender__double*, double, double*))DoubleBlender__ToUnit;
    type->__fp_Weight = (double(*)(::app::Fuse::Internal::Blender__double*, double, double))DoubleBlender__Weight;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DoubleBlender__New_1, 0, true, DoubleBlender__typeof()));

    ::uRegisterType(type);
    return type;
}

void DoubleBlender___ObjInit_1(DoubleBlender* __this)
{
    ::app::Fuse::Internal::Blender__double___ObjInit(__this);
}

double DoubleBlender__Add(DoubleBlender* __this, double a, double b)
{
    return a + b;
}

double DoubleBlender__get_One(DoubleBlender* __this)
{
    return 1.0;
}

double DoubleBlender__get_Zero(DoubleBlender* __this)
{
    return 0.0;
}

double DoubleBlender__Length(DoubleBlender* __this, double a)
{
    return ::app::Uno::Math__Abs(NULL, a);
}

double DoubleBlender__Lerp(DoubleBlender* __this, double a, double b, double d)
{
    return a + ((b - a) * d);
}

DoubleBlender* DoubleBlender__New_1(::uStatic* __this)
{
    DoubleBlender* inst = (DoubleBlender*)::uAllocObject(sizeof(DoubleBlender), DoubleBlender__typeof());
    inst->_ObjInit_1();
    return inst;
}

double DoubleBlender__Sub(DoubleBlender* __this, double a, double b)
{
    return a - b;
}

double DoubleBlender__ToUnit(DoubleBlender* __this, double a, double* length)
{
    *length = ::app::Uno::Math__Abs(NULL, a);
    return (double)((a < 0.0) ? -1 : 1);
}

double DoubleBlender__Weight(DoubleBlender* __this, double v, double w)
{
    return v * w;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float2Blender__uType* Float2Blender__typeof()
{
    static ::uStaticStrong<Float2Blender__uType*> type;
    if (type != NULL) return type;

    type = (Float2Blender__uType*)::uAllocClassType(sizeof(Float2Blender__uType), "Fuse.Internal.Float2Blender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__float2__typeof());
    type->__fp_Add = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2))Float2Blender__Add;
    type->__fp_get_One = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*))Float2Blender__get_One;
    type->__fp_get_Zero = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*))Float2Blender__get_Zero;
    type->__fp_Length = (double(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2))Float2Blender__Length;
    type->__fp_Lerp = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2, double))Float2Blender__Lerp;
    type->__fp_Sub = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2))Float2Blender__Sub;
    type->__fp_ToUnit = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, double*))Float2Blender__ToUnit;
    type->__fp_Weight = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, double))Float2Blender__Weight;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Float2Blender__New_1, 0, true, Float2Blender__typeof()));

    ::uRegisterType(type);
    return type;
}

void Float2Blender___ObjInit_1(Float2Blender* __this)
{
    ::app::Fuse::Internal::Blender__float2___ObjInit(__this);
}

::app::Uno::Float2 Float2Blender__Add(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__op_Addition_2(NULL, a, b);
}

::app::Uno::Float2 Float2Blender__get_One(Float2Blender* __this)
{
    return ::app::Uno::Float2__New_1(NULL, 1.0f);
}

::app::Uno::Float2 Float2Blender__get_Zero(Float2Blender* __this)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

double Float2Blender__Length(Float2Blender* __this, ::app::Uno::Float2 a)
{
    return (double)::app::Uno::Vector__Length(NULL, a);
}

::app::Uno::Float2 Float2Blender__Lerp(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, double d)
{
    return ::app::Uno::Math__Lerp_2(NULL, a, b, (float)d);
}

Float2Blender* Float2Blender__New_1(::uStatic* __this)
{
    Float2Blender* inst = (Float2Blender*)::uAllocObject(sizeof(Float2Blender), Float2Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float2 Float2Blender__Sub(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__op_Subtraction_2(NULL, a, b);
}

::app::Uno::Float2 Float2Blender__ToUnit(Float2Blender* __this, ::app::Uno::Float2 a, double* length)
{
    *length = (double)::app::Uno::Vector__Length(NULL, a);
    return ::app::Uno::Vector__Normalize(NULL, a);
}

::app::Uno::Float2 Float2Blender__Weight(Float2Blender* __this, ::app::Uno::Float2 v, double w)
{
    return ::app::Uno::Float2__op_Multiply_1(NULL, v, (float)w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float3Blender__uType* Float3Blender__typeof()
{
    static ::uStaticStrong<Float3Blender__uType*> type;
    if (type != NULL) return type;

    type = (Float3Blender__uType*)::uAllocClassType(sizeof(Float3Blender__uType), "Fuse.Internal.Float3Blender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__float3__typeof());
    type->__fp_Add = (::app::Uno::Float3(*)(::app::Fuse::Internal::Blender__float3*, ::app::Uno::Float3, ::app::Uno::Float3))Float3Blender__Add;
    type->__fp_get_One = (::app::Uno::Float3(*)(::app::Fuse::Internal::Blender__float3*))Float3Blender__get_One;
    type->__fp_get_Zero = (::app::Uno::Float3(*)(::app::Fuse::Internal::Blender__float3*))Float3Blender__get_Zero;
    type->__fp_Length = (double(*)(::app::Fuse::Internal::Blender__float3*, ::app::Uno::Float3))Float3Blender__Length;
    type->__fp_Lerp = (::app::Uno::Float3(*)(::app::Fuse::Internal::Blender__float3*, ::app::Uno::Float3, ::app::Uno::Float3, double))Float3Blender__Lerp;
    type->__fp_Sub = (::app::Uno::Float3(*)(::app::Fuse::Internal::Blender__float3*, ::app::Uno::Float3, ::app::Uno::Float3))Float3Blender__Sub;
    type->__fp_ToUnit = (::app::Uno::Float3(*)(::app::Fuse::Internal::Blender__float3*, ::app::Uno::Float3, double*))Float3Blender__ToUnit;
    type->__fp_Weight = (::app::Uno::Float3(*)(::app::Fuse::Internal::Blender__float3*, ::app::Uno::Float3, double))Float3Blender__Weight;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Float3Blender__New_1, 0, true, Float3Blender__typeof()));

    ::uRegisterType(type);
    return type;
}

void Float3Blender___ObjInit_1(Float3Blender* __this)
{
    ::app::Fuse::Internal::Blender__float3___ObjInit(__this);
}

::app::Uno::Float3 Float3Blender__Add(Float3Blender* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b)
{
    return ::app::Uno::Float3__op_Addition_2(NULL, a, b);
}

::app::Uno::Float3 Float3Blender__get_One(Float3Blender* __this)
{
    return ::app::Uno::Float3__New_1(NULL, 1.0f);
}

::app::Uno::Float3 Float3Blender__get_Zero(Float3Blender* __this)
{
    return ::app::Uno::Float3__New_1(NULL, 0.0f);
}

double Float3Blender__Length(Float3Blender* __this, ::app::Uno::Float3 a)
{
    return (double)::app::Uno::Vector__Length_1(NULL, a);
}

::app::Uno::Float3 Float3Blender__Lerp(Float3Blender* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, double d)
{
    return ::app::Uno::Math__Lerp_4(NULL, a, b, (float)d);
}

Float3Blender* Float3Blender__New_1(::uStatic* __this)
{
    Float3Blender* inst = (Float3Blender*)::uAllocObject(sizeof(Float3Blender), Float3Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float3 Float3Blender__Sub(Float3Blender* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b)
{
    return ::app::Uno::Float3__op_Subtraction_2(NULL, a, b);
}

::app::Uno::Float3 Float3Blender__ToUnit(Float3Blender* __this, ::app::Uno::Float3 a, double* length)
{
    *length = (double)::app::Uno::Vector__Length_1(NULL, a);
    return ::app::Uno::Vector__Normalize_1(NULL, a);
}

::app::Uno::Float3 Float3Blender__Weight(Float3Blender* __this, ::app::Uno::Float3 v, double w)
{
    return ::app::Uno::Float3__op_Multiply_1(NULL, v, (float)w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float4Blender__uType* Float4Blender__typeof()
{
    static ::uStaticStrong<Float4Blender__uType*> type;
    if (type != NULL) return type;

    type = (Float4Blender__uType*)::uAllocClassType(sizeof(Float4Blender__uType), "Fuse.Internal.Float4Blender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__float4__typeof());
    type->__fp_Add = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4))Float4Blender__Add;
    type->__fp_get_One = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*))Float4Blender__get_One;
    type->__fp_get_Zero = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*))Float4Blender__get_Zero;
    type->__fp_Length = (double(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4))Float4Blender__Length;
    type->__fp_Lerp = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4, double))Float4Blender__Lerp;
    type->__fp_Sub = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4))Float4Blender__Sub;
    type->__fp_ToUnit = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, double*))Float4Blender__ToUnit;
    type->__fp_Weight = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, double))Float4Blender__Weight;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Float4Blender__New_1, 0, true, Float4Blender__typeof()));

    ::uRegisterType(type);
    return type;
}

void Float4Blender___ObjInit_1(Float4Blender* __this)
{
    ::app::Fuse::Internal::Blender__float4___ObjInit(__this);
}

::app::Uno::Float4 Float4Blender__Add(Float4Blender* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b)
{
    return ::app::Uno::Float4__op_Addition_2(NULL, a, b);
}

::app::Uno::Float4 Float4Blender__get_One(Float4Blender* __this)
{
    return ::app::Uno::Float4__New_1(NULL, 1.0f);
}

::app::Uno::Float4 Float4Blender__get_Zero(Float4Blender* __this)
{
    return ::app::Uno::Float4__New_1(NULL, 0.0f);
}

double Float4Blender__Length(Float4Blender* __this, ::app::Uno::Float4 a)
{
    return (double)::app::Uno::Vector__Length_2(NULL, a);
}

::app::Uno::Float4 Float4Blender__Lerp(Float4Blender* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b, double d)
{
    return ::app::Uno::Math__Lerp_6(NULL, a, b, (float)d);
}

Float4Blender* Float4Blender__New_1(::uStatic* __this)
{
    Float4Blender* inst = (Float4Blender*)::uAllocObject(sizeof(Float4Blender), Float4Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float4 Float4Blender__Sub(Float4Blender* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b)
{
    return ::app::Uno::Float4__op_Subtraction_2(NULL, a, b);
}

::app::Uno::Float4 Float4Blender__ToUnit(Float4Blender* __this, ::app::Uno::Float4 a, double* length)
{
    *length = (double)::app::Uno::Vector__Length_2(NULL, a);
    return ::app::Uno::Vector__Normalize_2(NULL, a);
}

::app::Uno::Float4 Float4Blender__Weight(Float4Blender* __this, ::app::Uno::Float4 v, double w)
{
    return ::app::Uno::Float4__op_Multiply_1(NULL, v, (float)w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FloatBlender__uType* FloatBlender__typeof()
{
    static ::uStaticStrong<FloatBlender__uType*> type;
    if (type != NULL) return type;

    type = (FloatBlender__uType*)::uAllocClassType(sizeof(FloatBlender__uType), "Fuse.Internal.FloatBlender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__float__typeof());
    type->__fp_Add = (float(*)(::app::Fuse::Internal::Blender__float*, float, float))FloatBlender__Add;
    type->__fp_get_One = (float(*)(::app::Fuse::Internal::Blender__float*))FloatBlender__get_One;
    type->__fp_get_Zero = (float(*)(::app::Fuse::Internal::Blender__float*))FloatBlender__get_Zero;
    type->__fp_Length = (double(*)(::app::Fuse::Internal::Blender__float*, float))FloatBlender__Length;
    type->__fp_Lerp = (float(*)(::app::Fuse::Internal::Blender__float*, float, float, double))FloatBlender__Lerp;
    type->__fp_Sub = (float(*)(::app::Fuse::Internal::Blender__float*, float, float))FloatBlender__Sub;
    type->__fp_ToUnit = (float(*)(::app::Fuse::Internal::Blender__float*, float, double*))FloatBlender__ToUnit;
    type->__fp_Weight = (float(*)(::app::Fuse::Internal::Blender__float*, float, double))FloatBlender__Weight;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FloatBlender__New_1, 0, true, FloatBlender__typeof()));

    ::uRegisterType(type);
    return type;
}

void FloatBlender___ObjInit_1(FloatBlender* __this)
{
    ::app::Fuse::Internal::Blender__float___ObjInit(__this);
}

float FloatBlender__Add(FloatBlender* __this, float a, float b)
{
    return a + b;
}

float FloatBlender__get_One(FloatBlender* __this)
{
    return 1.0f;
}

float FloatBlender__get_Zero(FloatBlender* __this)
{
    return 0.0f;
}

double FloatBlender__Length(FloatBlender* __this, float a)
{
    return (double)::app::Uno::Math__Abs_1(NULL, a);
}

float FloatBlender__Lerp(FloatBlender* __this, float a, float b, double d)
{
    return a + ((b - a) * (float)d);
}

FloatBlender* FloatBlender__New_1(::uStatic* __this)
{
    FloatBlender* inst = (FloatBlender*)::uAllocObject(sizeof(FloatBlender), FloatBlender__typeof());
    inst->_ObjInit_1();
    return inst;
}

float FloatBlender__Sub(FloatBlender* __this, float a, float b)
{
    return a - b;
}

float FloatBlender__ToUnit(FloatBlender* __this, float a, double* length)
{
    *length = (double)::app::Uno::Math__Abs_1(NULL, a);
    return (float)((a < 0.0f) ? -1 : 1);
}

float FloatBlender__Weight(FloatBlender* __this, float v, double w)
{
    return v * (float)w;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FrustumMatrix__uType* FrustumMatrix__typeof()
{
    static ::uStaticStrong<FrustumMatrix__uType*> type;
    if (type != NULL) return type;

    type = (FrustumMatrix__uType*)::uAllocClassType(sizeof(FrustumMatrix__uType), "Fuse.Internal.FrustumMatrix");

    type->SetFunctions(8,
        ::uNewFunction("OrthoLH", FrustumMatrix__OrthoLH, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("OrthoLHInverse", FrustumMatrix__OrthoLHInverse, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("OrthoRH", FrustumMatrix__OrthoRH, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("OrthoRHInverse", FrustumMatrix__OrthoRHInverse, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("PerspectiveProjection", FrustumMatrix__PerspectiveProjection, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("PerspectiveProjectionInverse", FrustumMatrix__PerspectiveProjectionInverse, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("PerspectiveView", FrustumMatrix__PerspectiveView, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("PerspectiveViewInverse", FrustumMatrix__PerspectiveViewInverse, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Float4x4 FrustumMatrix__OrthoLH(::uStatic* __this, float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    float left = -halfWidth;
    float right = halfWidth;
    float bottom = -halfHeight;
    float top = halfHeight;
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = 2.0f / (right - left);
    result.M22 = 2.0f / (top - bottom);
    result.M33 = -2.0f / (far - near);
    result.M41 = -(right + left) / (right - left);
    result.M42 = -(top + bottom) / (top - bottom);
    result.M43 = (far + near) / (far - near);
    return result;
}

::app::Uno::Float4x4 FrustumMatrix__OrthoLHInverse(::uStatic* __this, float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = halfWidth;
    result.M22 = halfHeight;
    result.M33 = -(far - near) / 2.0f;
    result.M43 = (near + far) / 2.0f;
    return result;
}

::app::Uno::Float4x4 FrustumMatrix__OrthoRH(::uStatic* __this, float width, float height, float zNear, float zFar)
{
    ::app::Uno::Float4x4 result = FrustumMatrix__OrthoLH(NULL, width, height, zNear, zFar);
    result.M33 = result.M33 * -1.0f;
    return result;
}

::app::Uno::Float4x4 FrustumMatrix__OrthoRHInverse(::uStatic* __this, float width, float height, float zNear, float zFar)
{
    ::app::Uno::Float4x4 result = FrustumMatrix__OrthoLHInverse(NULL, width, height, zNear, zFar);
    result.M33 = result.M33 * -1.0f;
    result.M43 = result.M43 * -1.0f;
    return result;
}

::app::Uno::Float4x4 FrustumMatrix__PerspectiveProjection(::uStatic* __this, ::app::Uno::Float2 viewSize, float znear, float zfar, float distance)
{
    ::app::Uno::Float4x4 r = ::uDefault< ::app::Uno::Float4x4>();
    r.M11 = (2.0f * distance) / viewSize.X;
    r.M22 = (2.0f * distance) / viewSize.Y;
    r.M33 = -(znear + zfar) / (znear - zfar);
    r.M34 = 1.0f;
    r.M43 = (2.0f * (zfar * znear)) / (znear - zfar);
    return r;
}

::app::Uno::Float4x4 FrustumMatrix__PerspectiveProjectionInverse(::uStatic* __this, ::app::Uno::Float2 viewSize, float znear, float zfar, float distance)
{
    ::app::Uno::Float4x4 r = ::uDefault< ::app::Uno::Float4x4>();
    r.M11 = viewSize.X / (2.0f * distance);
    r.M22 = viewSize.Y / (2.0f * distance);
    r.M34 = (znear - zfar) / ((2.0f * zfar) * znear);
    r.M43 = 1.0f;
    r.M44 = (znear + zfar) / ((2.0f * zfar) * znear);
    return r;
}

::app::Uno::Float4x4 FrustumMatrix__PerspectiveView(::uStatic* __this, ::app::Uno::Float2 viewSize, float distance, ::app::Uno::Float2 relOrigin)
{
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation(NULL, -relOrigin.X * viewSize.X, -relOrigin.Y * viewSize.Y, distance);
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling_1(NULL, 1.0f, -1.0f, 1.0f);
    return ::app::Uno::Matrix__Mul_8(NULL, t, s);
}

::app::Uno::Float4x4 FrustumMatrix__PerspectiveViewInverse(::uStatic* __this, ::app::Uno::Float2 viewSize, float distance, ::app::Uno::Float2 relOrigin)
{
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling_1(NULL, 1.0f, -1.0f, 1.0f);
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation(NULL, relOrigin.X * viewSize.X, relOrigin.Y * viewSize.Y, -distance);
    return ::app::Uno::Matrix__Mul_8(NULL, s, t);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FuseConfig__uType* FuseConfig__typeof()
{
    static ::uStaticStrong<FuseConfig__uType*> type;
    if (type != NULL) return type;

    type = (FuseConfig__uType*)::uAllocClassType(sizeof(FuseConfig__uType), "Fuse.Internal.FuseConfig");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IImageContainerOwner__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Internal.IImageContainerOwner");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageContainer__uType* ImageContainer__typeof()
{
    static ::uStaticStrong<ImageContainer__uType*> type;
    if (type != NULL) return type;

    type = (ImageContainer__uType*)::uAllocClassType(sizeof(ImageContainer__uType), "Fuse.Internal.ImageContainer", false, 0, 6, 1);

    type->SetStrongRefs(
        "_files", offsetof(ImageContainer, _files),
        "_memoryPolicy", offsetof(ImageContainer, _memoryPolicy),
        "_source", offsetof(ImageContainer, _source),
        "ParamChanged", offsetof(ImageContainer, ParamChanged),
        "Sizing", offsetof(ImageContainer, Sizing),
        "SourceChanged", offsetof(ImageContainer, SourceChanged));

    type->SetWeakRefs(
        "_owner", offsetof(ImageContainer, _owner));

    type->SetFields(10,
        ::uNewField("_density", NULL, offsetof(ImageContainer, _density), ::app::Uno::Float__typeof()),
        ::uNewField("_files", NULL, offsetof(ImageContainer, _files), ::app::Uno::Collections::ObservableList__Uno_UX_FileSource__typeof()),
        ::uNewField("_isRooted", NULL, offsetof(ImageContainer, _isRooted), ::app::Uno::Bool__typeof()),
        ::uNewField("_isVisible", NULL, offsetof(ImageContainer, _isVisible), ::app::Uno::Bool__typeof()),
        ::uNewField("_memoryPolicy", NULL, offsetof(ImageContainer, _memoryPolicy), ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewField("_owner", NULL, offsetof(ImageContainer, _owner), ::app::Fuse::Internal::IImageContainerOwner__typeof()),
        ::uNewField("_resampleMode", NULL, offsetof(ImageContainer, _resampleMode), ::app::Fuse::Drawing::ResampleMode__typeof()),
        ::uNewField("_source", NULL, offsetof(ImageContainer, _source), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewField("_sourcePinned", NULL, offsetof(ImageContainer, _sourcePinned), ::app::Uno::Bool__typeof()),
        ::uNewField("Sizing", NULL, offsetof(ImageContainer, Sizing), ::app::Fuse::Internal::SizingContainer__typeof()));

    type->SetFunctions(40,
        ::uNewFunctionVoid("add_ParamChanged", ImageContainer__add_ParamChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_SourceChanged", ImageContainer__add_SourceChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("CheckPinning", ImageContainer__CheckPinning, 0, false),
        ::uNewFunctionVoid("CreateMultiDensitySource", ImageContainer__CreateMultiDensitySource, 0, false),
        ::uNewFunction("get_ContentAlignment", ImageContainer__get_ContentAlignment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("get_Density", ImageContainer__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_File", ImageContainer__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Files", ImageContainer__get_Files, 0, false, ::app::Uno::Collections::IList__Uno_UX_FileSource__typeof()),
        ::uNewFunction("get_IsRooted", ImageContainer__get_IsRooted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsVisible", ImageContainer__get_IsVisible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MemoryPolicy", ImageContainer__get_MemoryPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction("get_ResampleMode", ImageContainer__get_ResampleMode, 0, false, ::app::Fuse::Drawing::ResampleMode__typeof()),
        ::uNewFunction("get_Source", ImageContainer__get_Source, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("get_StretchDirection", ImageContainer__get_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("get_StretchMode", ImageContainer__get_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("get_StretchSizing", ImageContainer__get_StretchSizing, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction("get_Url", ImageContainer__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetTexture", ImageContainer__GetTexture, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction(".ctor", ImageContainer__New_1, 0, true, ImageContainer__typeof(), ::app::Fuse::Internal::IImageContainerOwner__typeof()),
        ::uNewFunctionVoid("OnFileAdded", ImageContainer__OnFileAdded, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("OnFileRemoved", ImageContainer__OnFileRemoved, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("OnParamChanged", ImageContainer__OnParamChanged, 0, false),
        ::uNewFunctionVoid("OnSizingChanged", ImageContainer__OnSizingChanged, 0, false),
        ::uNewFunctionVoid("OnSourceChanged", ImageContainer__OnSourceChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("ReapplyOptions", ImageContainer__ReapplyOptions, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("ReleaseSource", ImageContainer__ReleaseSource, 0, false),
        ::uNewFunctionVoid("remove_ParamChanged", ImageContainer__remove_ParamChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_SourceChanged", ImageContainer__remove_SourceChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_ContentAlignment", ImageContainer__set_ContentAlignment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("set_Density", ImageContainer__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_File", ImageContainer__set_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_IsRooted", ImageContainer__set_IsRooted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsVisible", ImageContainer__set_IsVisible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_MemoryPolicy", ImageContainer__set_MemoryPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("set_ResampleMode", ImageContainer__set_ResampleMode, 0, false, ::app::Fuse::Drawing::ResampleMode__typeof()),
        ::uNewFunctionVoid("set_Source", ImageContainer__set_Source, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("set_StretchDirection", ImageContainer__set_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("set_StretchMode", ImageContainer__set_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunctionVoid("set_StretchSizing", ImageContainer__set_StretchSizing, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunctionVoid("set_Url", ImageContainer__set_Url, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImageContainer___ObjInit(ImageContainer* __this, ::uObject* owner)
{
    __this->Sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
    __this->_density = 1.0f;
    __this->_memoryPolicy = ::app::Fuse::Resources::MemoryPolicy__PreloadRetain;
    __this->_resampleMode = 2;
    __this->_isVisible = true;
    __this->_owner = owner;
}

void ImageContainer__add_ParamChanged(ImageContainer* __this, ::uDelegate* value)
{
    __this->ParamChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ParamChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageContainer__add_SourceChanged(ImageContainer* __this, ::uDelegate* value)
{
    __this->SourceChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->SourceChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageContainer__CheckPinning(ImageContainer* __this)
{
    if (__this->_source == NULL)
    {
        return;
    }

    bool on = __this->_isRooted;

    if (::uPtr< ::app::Fuse::Resources::MemoryPolicy*>(__this->MemoryPolicy())->UnpinInvisible() && !__this->_isVisible)
    {
        on = false;
    }

    if (on != __this->_sourcePinned)
    {
        if (on)
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Pin();
        }
        else
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Unpin();
        }

        __this->_sourcePinned = on;
    }
}

void ImageContainer__CreateMultiDensitySource(ImageContainer* __this)
{
    float ind_133 = float();
    ::app::Fuse::Resources::MemoryPolicy* ind_134;
    ::app::Fuse::Resources::FileImageSource* collection_128;
    ::app::Fuse::Resources::MultiDensityImageSource* s = ::app::Fuse::Resources::MultiDensityImageSource__New_1(NULL);

    for (::uObject* enum_127 = ::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
    {
        ::app::Uno::UX::FileSource* f = ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource::Current(::uPtr< ::uObject*>(enum_127));
        ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Resources::MultiDensityImageSource*>(s)->Sources()), (::app::Fuse::Resources::ImageSource*)(collection_128 = ::app::Fuse::Resources::FileImageSource__New_2(NULL, f), ind_133 = __this->Density(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_128)->Density(ind_133), ind_133, ind_134 = __this->MemoryPolicy(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_128)->DefaultPolicy(ind_134), ind_134, collection_128));
    }

    __this->Source((::app::Fuse::Resources::ImageSource*)s);
}

int ImageContainer__get_ContentAlignment(ImageContainer* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->align;
}

float ImageContainer__get_Density(ImageContainer* __this)
{
    return __this->_density;
}

::app::Uno::UX::FileSource* ImageContainer__get_File(ImageContainer* __this)
{
    if (__this->_files == NULL)
    {
        return NULL;
    }
    else
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Item(0);
    }
}

::uObject* ImageContainer__get_Files(ImageContainer* __this)
{
    if (__this->_files == NULL)
    {
        __this->_files = ::app::Uno::Collections::ObservableList__Uno_UX_FileSource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_FileSource__typeof(), (const void*)ImageContainer__OnFileAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_FileSource__typeof(), (const void*)ImageContainer__OnFileRemoved, __this));
    }

    return (::uObject*)__this->_files;
}

bool ImageContainer__get_IsRooted(ImageContainer* __this)
{
    return __this->_isRooted;
}

bool ImageContainer__get_IsVisible(ImageContainer* __this)
{
    return __this->_isVisible;
}

::app::Fuse::Resources::MemoryPolicy* ImageContainer__get_MemoryPolicy(ImageContainer* __this)
{
    return __this->_memoryPolicy;
}

int ImageContainer__get_ResampleMode(ImageContainer* __this)
{
    return __this->_resampleMode;
}

::app::Fuse::Resources::ImageSource* ImageContainer__get_Source(ImageContainer* __this)
{
    return __this->_source;
}

int ImageContainer__get_StretchDirection(ImageContainer* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->stretchDirection;
}

int ImageContainer__get_StretchMode(ImageContainer* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->stretchMode;
}

int ImageContainer__get_StretchSizing(ImageContainer* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->stretchSizing;
}

::uString* ImageContainer__get_Url(ImageContainer* __this)
{
    ::app::Fuse::Resources::HttpImageSource* http = ::uAs< ::app::Fuse::Resources::HttpImageSource*>(__this->Source(), ::app::Fuse::Resources::HttpImageSource__typeof());

    if (http == NULL)
    {
        return NULL;
    }

    return ::uPtr< ::app::Fuse::Resources::HttpImageSource*>(http)->Url();
}

::app::Uno::Graphics::Texture2D* ImageContainer__GetTexture(ImageContainer* __this)
{
    if (__this->Source() != NULL)
    {
        return ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->GetTexture();
    }

    return NULL;
}

ImageContainer* ImageContainer__New_1(::uStatic* __this, ::uObject* owner)
{
    ImageContainer* inst = (ImageContainer*)::uAllocObject(sizeof(ImageContainer), ImageContainer__typeof());
    inst->_ObjInit(owner);
    return inst;
}

void ImageContainer__OnFileAdded(ImageContainer* __this, ::app::Uno::UX::FileSource* file)
{
    float ind_129 = float();
    ::app::Fuse::Resources::MemoryPolicy* ind_130;
    ::app::Fuse::Resources::FileImageSource* collection_125;

    if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() == 1)
    {
        __this->Source((::app::Fuse::Resources::ImageSource*)(collection_125 = ::app::Fuse::Resources::FileImageSource__New_1(NULL), ind_129 = __this->Density(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_125)->Density(ind_129), ind_129, ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_125)->File(file), file, ind_130 = __this->MemoryPolicy(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_125)->DefaultPolicy(ind_130), ind_130, collection_125));
    }
    else
    {
        __this->CreateMultiDensitySource();
    }
}

void ImageContainer__OnFileRemoved(ImageContainer* __this, ::app::Uno::UX::FileSource* file)
{
    float ind_131 = float();
    ::app::Fuse::Resources::MemoryPolicy* ind_132;
    ::app::Fuse::Resources::FileImageSource* collection_126;

    if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() == 0)
    {
        __this->Source(NULL);
    }
    else if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() == 1)
    {
        __this->Source((::app::Fuse::Resources::ImageSource*)(collection_126 = ::app::Fuse::Resources::FileImageSource__New_1(NULL), ind_131 = __this->Density(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_126)->Density(ind_131), ind_131, ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_126)->File(file), file, ind_132 = __this->MemoryPolicy(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_126)->DefaultPolicy(ind_132), ind_132, collection_126));
    }
    else
    {
        __this->CreateMultiDensitySource();
    }
}

void ImageContainer__OnParamChanged(ImageContainer* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ParamChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ParamChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    if (__this->_owner != NULL)
    {
        ::app::Fuse::Internal::IImageContainerOwner::OnParamChanged(::uPtr< ::uObject*>(__this->_owner));
    }
}

void ImageContainer__OnSizingChanged(ImageContainer* __this)
{
    __this->OnParamChanged();

    if (__this->_owner != NULL)
    {
        ::app::Fuse::Internal::IImageContainerOwner::OnSizingChanged(::uPtr< ::uObject*>(__this->_owner));
    }
}

void ImageContainer__OnSourceChanged(ImageContainer* __this, ::uObject* s, ::uObject* a)
{
    __this->CheckPinning();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->SourceChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->SourceChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    if (__this->_owner != NULL)
    {
        ::app::Fuse::Internal::IImageContainerOwner::OnSourceChanged(::uPtr< ::uObject*>(__this->_owner));
    }
}

void ImageContainer__ReapplyOptions(ImageContainer* __this, ::app::Fuse::Resources::ImageSource* src)
{
    ::app::Fuse::Resources::FileImageSource* f = ::uAs< ::app::Fuse::Resources::FileImageSource*>(src, ::app::Fuse::Resources::FileImageSource__typeof());

    if ((f != NULL) && (__this->MemoryPolicy() != NULL))
    {
        ::uPtr< ::app::Fuse::Resources::FileImageSource*>(f)->DefaultPolicy(__this->MemoryPolicy());
    }

    ::app::Fuse::Resources::HttpImageSource* hf = ::uAs< ::app::Fuse::Resources::HttpImageSource*>(src, ::app::Fuse::Resources::HttpImageSource__typeof());

    if ((hf != NULL) && (__this->MemoryPolicy() != NULL))
    {
        ::uPtr< ::app::Fuse::Resources::HttpImageSource*>(hf)->DefaultPolicy(__this->MemoryPolicy());
    }

    ::app::Fuse::Resources::MultiDensityImageSource* mf = ::uAs< ::app::Fuse::Resources::MultiDensityImageSource*>(__this->Source(), ::app::Fuse::Resources::MultiDensityImageSource__typeof());

    if (mf != NULL)
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Resources::MultiDensityImageSource*>(mf)->Sources())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Resources::ImageSource* s = ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource::Current(::uPtr< ::uObject*>(enum_124));
            __this->ReapplyOptions(s);
        }
    }
}

void ImageContainer__ReleaseSource(ImageContainer* __this)
{
    if (__this->_source == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ImageContainer__OnSourceChanged, __this));

    if (__this->_sourcePinned)
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Unpin();
        __this->_sourcePinned = false;
    }

    __this->_source = NULL;
}

void ImageContainer__remove_ParamChanged(ImageContainer* __this, ::uDelegate* value)
{
    __this->ParamChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ParamChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageContainer__remove_SourceChanged(ImageContainer* __this, ::uDelegate* value)
{
    __this->SourceChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->SourceChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageContainer__set_ContentAlignment(ImageContainer* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->SetAlignment(value))
    {
        __this->OnSizingChanged();
    }
}

void ImageContainer__set_Density(ImageContainer* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->OnParamChanged();
    }
}

void ImageContainer__set_File(ImageContainer* __this, ::app::Uno::UX::FileSource* value)
{
    if ((((__this->_files == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() == 0)) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() > 1)) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Item(0) != value))
    {
        __this->_files = NULL;
        ::app::Uno::Collections::ICollection__Uno_UX_FileSource::Add(::uPtr< ::uObject*>(__this->Files()), value);
    }
}

void ImageContainer__set_IsRooted(ImageContainer* __this, bool value)
{
    __this->_isRooted = value;
    __this->CheckPinning();
}

void ImageContainer__set_IsVisible(ImageContainer* __this, bool value)
{
    if (__this->_isVisible != value)
    {
        __this->_isVisible = value;
        __this->CheckPinning();
    }
}

void ImageContainer__set_MemoryPolicy(ImageContainer* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    __this->_memoryPolicy = value;
    __this->ReapplyOptions(__this->Source());
    __this->CheckPinning();
}

void ImageContainer__set_ResampleMode(ImageContainer* __this, int value)
{
    if (__this->_resampleMode != value)
    {
        __this->_resampleMode = value;
        __this->OnParamChanged();
    }
}

void ImageContainer__set_Source(ImageContainer* __this, ::app::Fuse::Resources::ImageSource* value)
{
    if (__this->_source != value)
    {
        __this->ReleaseSource();
        __this->_source = value;

        if (__this->_source != NULL)
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->add_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ImageContainer__OnSourceChanged, __this));
        }

        __this->OnSourceChanged(NULL, NULL);
    }
}

void ImageContainer__set_StretchDirection(ImageContainer* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->SetStretchDirection(value))
    {
        __this->OnSizingChanged();
    }
}

void ImageContainer__set_StretchMode(ImageContainer* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->SetStretchMode(value))
    {
        __this->OnSizingChanged();
    }
}

void ImageContainer__set_StretchSizing(ImageContainer* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->SetStretchSizing(value))
    {
        __this->OnSizingChanged();
    }
}

void ImageContainer__set_Url(ImageContainer* __this, ::uString* value)
{
    float ind_135 = float();
    ::app::Fuse::Resources::MemoryPolicy* ind_136;
    ::app::Fuse::Resources::HttpImageSource* collection_123;
    __this->Source((::app::Fuse::Resources::ImageSource*)(collection_123 = ::app::Fuse::Resources::HttpImageSource__New_1(NULL), ::uPtr< ::app::Fuse::Resources::HttpImageSource*>(collection_123)->Url(value), value, ind_135 = __this->Density(), ::uPtr< ::app::Fuse::Resources::HttpImageSource*>(collection_123)->Density(ind_135), ind_135, ind_136 = __this->MemoryPolicy(), ::uPtr< ::app::Fuse::Resources::HttpImageSource*>(collection_123)->DefaultPolicy(ind_136), ind_136, collection_123));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RectExtensions__uType* RectExtensions__typeof()
{
    static ::uStaticStrong<RectExtensions__uType*> type;
    if (type != NULL) return type;

    type = (RectExtensions__uType*)::uAllocClassType(sizeof(RectExtensions__uType), "Fuse.Internal.RectExtensions");

    type->SetFunctions(2,
        ::uNewFunction("MoveRectInsideRect", RectExtensions__MoveRectInsideRect, 0, true, ::app::Uno::Rect__typeof(), ::app::Uno::Rect__typeof(), ::app::Uno::Rect__typeof()),
        ::uNewFunction("MoveRectToContainRect", RectExtensions__MoveRectToContainRect, 0, true, ::app::Uno::Rect__typeof(), ::app::Uno::Rect__typeof(), ::app::Uno::Rect__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Rect RectExtensions__MoveRectInsideRect(::uStatic* __this, ::app::Uno::Rect a, ::app::Uno::Rect b)
{
    ::app::Uno::Float2 pos = a.Position();
    float newX = pos.X;
    float newY = pos.Y;

    if (b.Left > a.Left)
    {
        newX = b.Left;
    }
    else if (b.Right < a.Right)
    {
        newX = newX - (a.Right - b.Right);
    }

    if (b.Top > a.Top)
    {
        newY = b.Left;
    }
    else if (b.Bottom < a.Bottom)
    {
        newY = newY - (a.Bottom - b.Bottom);
    }

    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_2(NULL, newX, newY), a.Size());
}

::app::Uno::Rect RectExtensions__MoveRectToContainRect(::uStatic* __this, ::app::Uno::Rect a, ::app::Uno::Rect b)
{
    ::app::Uno::Float2 pos = a.Position();
    float newX = pos.X;
    float newY = pos.Y;

    if ((a.Size().X < b.Size().X) || (b.Left < a.Left))
    {
        newX = b.Left;
    }
    else if (b.Right > a.Right)
    {
        newX = newX + (b.Right - a.Right);
    }

    if ((a.Size().Y < b.Size().Y) || (b.Top < a.Top))
    {
        newY = b.Top;
    }
    else if (b.Bottom > a.Bottom)
    {
        newY = newY + (b.Bottom - a.Bottom);
    }

    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_2(NULL, newX, newY), a.Size());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SizingContainer__uType* SizingContainer__typeof()
{
    static ::uStaticStrong<SizingContainer__uType*> type;
    if (type != NULL) return type;

    type = (SizingContainer__uType*)::uAllocClassType(sizeof(SizingContainer__uType), "Fuse.Internal.SizingContainer", false, 0, 0, 0);

    type->SetFields(7,
        ::uNewField("absoluteZoom", NULL, offsetof(SizingContainer, absoluteZoom), ::app::Uno::Float__typeof()),
        ::uNewField("align", NULL, offsetof(SizingContainer, align), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewField("padding", NULL, offsetof(SizingContainer, padding), ::app::Uno::Float4__typeof()),
        ::uNewField("snapToPixels", NULL, offsetof(SizingContainer, snapToPixels), ::app::Uno::Bool__typeof()),
        ::uNewField("stretchDirection", NULL, offsetof(SizingContainer, stretchDirection), ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewField("stretchMode", NULL, offsetof(SizingContainer, stretchMode), ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewField("stretchSizing", NULL, offsetof(SizingContainer, stretchSizing), ::app::Fuse::Elements::StretchSizing__typeof()));

    type->SetFunctions(14,
        ::uNewFunction("CalcClip", SizingContainer__CalcClip, 0, false, ::app::Uno::Float4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("CalcContentSize", SizingContainer__CalcContentSize, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Int2__typeof()),
        ::uNewFunction("CalcOrigin", SizingContainer__CalcOrigin, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("CalcScale", SizingContainer__CalcScale, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("CalcScale", SizingContainer__CalcScale_1, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("ExpandFillSize", SizingContainer__ExpandFillSize, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunction("get_PaddingHeight", SizingContainer__get_PaddingHeight, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_PaddingWidth", SizingContainer__get_PaddingWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", SizingContainer__New_1, 0, true, SizingContainer__typeof()),
        ::uNewFunction("SetAlignment", SizingContainer__SetAlignment, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("SetStretchDirection", SizingContainer__SetStretchDirection, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("SetStretchMode", SizingContainer__SetStretchMode, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("SetStretchSizing", SizingContainer__SetStretchSizing, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction("SnapSize", SizingContainer__SnapSize, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void SizingContainer___ObjInit(SizingContainer* __this)
{
    __this->stretchMode = 5;
    __this->align = 10;
    __this->stretchSizing = 1;
    __this->absoluteZoom = 1.0f;
}

::app::Uno::Float4 SizingContainer__CalcClip(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();

    if (((((*origin).X > availableSize.X) || (((*origin).X + (*contentActualSize).X) < 0.0f)) || ((*origin).Y > availableSize.Y)) || (((*origin).Y + (*contentActualSize).Y) < 0.0f))
    {
        *origin = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
        *contentActualSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
        return ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 1.0f, 1.0f);
    }

    ::app::Uno::Float2 tl = ::app::Uno::Math__Max_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_123 = __this->padding, ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), *origin), *contentActualSize));
    ::app::Uno::Float2 br = ::app::Uno::Math__Min_3(NULL, ::app::Uno::Float2__New_1(NULL, 1.0f), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, availableSize, *origin), (ind_124 = __this->padding, ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W))), *contentActualSize));
    float dx = __this->padding.X - (*origin).X;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = (*contentActualSize).X - dx;
        (*origin).X = __this->padding.X;
    }

    dx = (((*origin).X + (*contentActualSize).X) - availableSize.X) + __this->padding.Z;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = (*contentActualSize).X - dx;
    }

    float dy = __this->padding.Y - (*origin).Y;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = (*contentActualSize).Y - dy;
        (*origin).Y = __this->padding.Y;
    }

    dy = (((*origin).Y + (*contentActualSize).Y) - availableSize.Y) + __this->padding.W;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = (*contentActualSize).Y - dy;
    }

    return ::app::Uno::Float4__New_2(NULL, tl.X, tl.Y, br.X, br.Y);
}

::app::Uno::Float2 SizingContainer__CalcContentSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize)
{
    switch (__this->stretchMode)
    {
        case 1:
        {
            {
                if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                {
                    return ::app::Uno::Float2__New_1(NULL, 0.0f);
                }

                return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)pixelSize.X, (float)pixelSize.Y), __this->absoluteZoom);
            }
        }
        case 2:
        {
            {
                if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                {
                    return ::app::Uno::Float2__New_1(NULL, 0.0f);
                }

                ::app::Uno::Float2 exact = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)pixelSize.X, (float)pixelSize.Y), __this->absoluteZoom);
                ::app::Uno::Float2 scale = ::app::Uno::Float2__op_Division_2(NULL, size, exact);

                if (((double)scale.X > 0.75) && ((double)scale.X < 1.5))
                {
                    return exact;
                }

                break;
            }
        }
        default:
        {
            break;
        }
    }

    if (!__this->snapToPixels)
    {
        return size;
    }

    return __this->SnapSize(size);
}

::app::Uno::Float2 SizingContainer__CalcOrigin(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize)
{
    ::app::Uno::Float2 origin = ::app::Uno::Float2__New_1(NULL, 0.0f);

    switch (::app::Fuse::Elements::AlignmentHelpers__GetHorizontalAlign(NULL, __this->align))
    {
        case 0:
        case 1:
        {
            origin.X = __this->padding.Item(0);
            break;
        }
        case 2:
        {
            origin.X = ((((availableSize.X - __this->padding.Item(0)) - __this->padding.Item(2)) / 2.0f) - (contentActualSize.X / 2.0f)) + __this->padding.Item(0);
            break;
        }
        case 3:
        {
            origin.X = (availableSize.X - __this->padding.Item(2)) - contentActualSize.X;
            break;
        }
    }

    switch (::app::Fuse::Elements::AlignmentHelpers__GetVerticalAlign(NULL, __this->align))
    {
        case 0:
        case 4:
        {
            origin.Y = __this->padding.Item(1);
            break;
        }
        case 8:
        {
            origin.Y = ((((availableSize.Y - __this->padding.Item(1)) - __this->padding.Item(3)) / 2.0f) - (contentActualSize.Y / 2.0f)) + __this->padding.Item(1);
            break;
        }
        case 12:
        {
            origin.Y = (availableSize.Y - __this->padding.Item(3)) - contentActualSize.Y;
            break;
        }
    }

    if (__this->snapToPixels)
    {
        origin = __this->SnapSize(origin);
    }

    return origin;
}

::app::Uno::Float2 SizingContainer__CalcScale(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize)
{
    return __this->CalcScale_1(availableSize, desiredSize, false, false);
}

::app::Uno::Float2 SizingContainer__CalcScale_1(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight)
{
    ::app::Uno::Float2 d = availableSize;
    d.X = d.X - __this->PaddingWidth();
    d.Y = d.Y - __this->PaddingHeight();
    ::app::Uno::Float2 scale = ::app::Uno::Float2__New_1(NULL, 1.0f);

    if ((autoWidth && autoHeight) && !(((__this->stretchMode == 0) || (__this->stretchMode == 1)) || (__this->stretchMode == 2)))
    {
        if (__this->stretchSizing == 0)
        {
            scale = ::app::Uno::Float2__New_1(NULL, 0.0f);
        }
        else
        {
            scale = ::app::Uno::Float2__New_1(NULL, 1.0f);
        }
    }
    else
    {
        ::app::Uno::Float2 s = ::app::Uno::Float2__New_2(NULL, (desiredSize.X < 1e-05f) ? 0.0f : (d.X / desiredSize.X), (desiredSize.Y < 1e-05f) ? 0.0f : (d.Y / desiredSize.Y));

        switch (__this->stretchMode)
        {
            case 0:
            case 1:
            case 2:
            {
                scale = ::app::Uno::Float2__New_1(NULL, 1.0f);
                break;
            }
            case 4:
            case 3:
            {
                {
                    scale = autoWidth ? ::app::Uno::Float2__New_1(NULL, s.Y) : (autoHeight ? ::app::Uno::Float2__New_1(NULL, s.X) : s);
                    break;
                }
            }
            case 5:
            {
                {
                    float sm = autoWidth ? s.Y : (autoHeight ? s.X : ::app::Uno::Math__Min_1(NULL, s.X, s.Y));
                    scale = ::app::Uno::Float2__New_1(NULL, sm);
                    break;
                }
            }
            case 6:
            {
                {
                    float sm = autoWidth ? s.Y : (autoHeight ? s.X : ::app::Uno::Math__Max_1(NULL, s.X, s.Y));
                    scale = ::app::Uno::Float2__New_1(NULL, sm);
                    break;
                }
            }
        }
    }

    switch (__this->stretchDirection)
    {
        case 0:
        {
            break;
        }
        case 2:
        {
            scale.X = ::app::Uno::Math__Min_1(NULL, scale.X, 1.0f);
            scale.Y = ::app::Uno::Math__Min_1(NULL, scale.Y, 1.0f);
            break;
        }
        case 1:
        {
            scale.X = ::app::Uno::Math__Max_1(NULL, 1.0f, scale.X);
            scale.Y = ::app::Uno::Math__Max_1(NULL, 1.0f, scale.Y);
            break;
        }
    }

    if ((__this->snapToPixels && (desiredSize.X > 1e-05f)) && (desiredSize.Y > 1e-05f))
    {
        scale = ::app::Uno::Float2__op_Division_2(NULL, __this->SnapSize(::app::Uno::Float2__op_Multiply_2(NULL, scale, desiredSize)), desiredSize);
    }

    return scale;
}

::app::Uno::Float2 SizingContainer__ExpandFillSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet)
{
    bool autoWidth = !((fillSet & 1) == 1);
    bool autoHeight = !((fillSet & 2) == 2);
    ::app::Uno::Float2 scale = __this->CalcScale_1(fillSize, size, autoWidth, autoHeight);
    return ::app::Uno::Float2__op_Multiply_2(NULL, scale, size);
}

float SizingContainer__get_PaddingHeight(SizingContainer* __this)
{
    return __this->padding.Item(1) + __this->padding.Item(3);
}

float SizingContainer__get_PaddingWidth(SizingContainer* __this)
{
    return __this->padding.Item(0) + __this->padding.Item(2);
}

SizingContainer* SizingContainer__New_1(::uStatic* __this)
{
    SizingContainer* inst = (SizingContainer*)::uAllocObject(sizeof(SizingContainer), SizingContainer__typeof());
    inst->_ObjInit();
    return inst;
}

bool SizingContainer__SetAlignment(SizingContainer* __this, int a)
{
    if (a == __this->align)
    {
        return false;
    }

    __this->align = a;
    return true;
}

bool SizingContainer__SetStretchDirection(SizingContainer* __this, int dir)
{
    if (dir == __this->stretchDirection)
    {
        return false;
    }

    __this->stretchDirection = dir;
    return true;
}

bool SizingContainer__SetStretchMode(SizingContainer* __this, int mode)
{
    if (mode == __this->stretchMode)
    {
        return false;
    }

    __this->stretchMode = mode;
    return true;
}

bool SizingContainer__SetStretchSizing(SizingContainer* __this, int ss)
{
    if (ss == __this->stretchSizing)
    {
        return false;
    }

    __this->stretchSizing = ss;
    return true;
}

::app::Uno::Float2 SizingContainer__SnapSize(SizingContainer* __this, ::app::Uno::Float2 sz)
{
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Round_4(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, sz, __this->absoluteZoom)), __this->absoluteZoom);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Statistics__uType* Statistics__typeof()
{
    static ::uStaticStrong<Statistics__uType*> type;
    if (type != NULL) return type;

    type = (Statistics__uType*)::uAllocClassType(sizeof(Statistics__uType), "Fuse.Internal.Statistics");

    type->SetFunctions(2,
        ::uNewFunction("ContinuousFilterAlpha", Statistics__ContinuousFilterAlpha, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("ExponentialMovingAverage", Statistics__ExponentialMovingAverage, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

float Statistics__ContinuousFilterAlpha(::uStatic* __this, float elapsed, float period)
{
    return (float)(1.0 - ::app::Uno::Math__Pow(NULL, 2.7182818284590451, (double)(-elapsed / period)));
}

float Statistics__ExponentialMovingAverage(::uStatic* __this, float current, float sample, float elapsed, float period)
{
    float alpha = Statistics__ContinuousFilterAlpha(NULL, elapsed, period);
    return current + (alpha * (sample - current));
}

}}}
