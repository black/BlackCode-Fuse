#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Converter__bool.h>
#include <app/Fuse.Animations.Converter__char.h>
#include <app/Fuse.Animations.Converter__double.h>
#include <app/Fuse.Animations.Converter__float.h>
#include <app/Fuse.Animations.Converter__float2.h>
#include <app/Fuse.Animations.Converter__float3.h>
#include <app/Fuse.Animations.Converter__float4.h>
#include <app/Fuse.Animations.Converter__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.Converter__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.Converter__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.Converter__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.Converter__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.Converter__Fuse_Font.h>
#include <app/Fuse.Animations.Converter__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.Converter__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.Converter__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.Converter__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.Converter__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.Converter__Fuse_Node.h>
#include <app/Fuse.Animations.Converter__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.Converter__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.Converter__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.Converter__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.Converter__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.Converter__int.h>
#include <app/Fuse.Animations.Converter__int2.h>
#include <app/Fuse.Animations.Converter__int3.h>
#include <app/Fuse.Animations.Converter__int4.h>
#include <app/Fuse.Animations.Converter__long.h>
#include <app/Fuse.Animations.Converter__object.h>
#include <app/Fuse.Animations.Converter__short.h>
#include <app/Fuse.Animations.Converter__string.h>
#include <app/Fuse.Animations.Converter__Uno_EventArgs.h>
#include <app/Fuse.Animations.Converter__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.Converter__Uno_UX_FileSource.h>
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
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__bool__uType* Converter__bool__typeof()
{
    static ::uStaticStrong<Converter__bool__uType*> type;
    if (type != NULL) return type;

    type = (Converter__bool__uType*)::uAllocClassType(sizeof(Converter__bool__uType), "Fuse.Animations.Converter<bool>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__char__uType* Converter__char__typeof()
{
    static ::uStaticStrong<Converter__char__uType*> type;
    if (type != NULL) return type;

    type = (Converter__char__uType*)::uAllocClassType(sizeof(Converter__char__uType), "Fuse.Animations.Converter<char>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__double__uType* Converter__double__typeof()
{
    static ::uStaticStrong<Converter__double__uType*> type;
    if (type != NULL) return type;

    type = (Converter__double__uType*)::uAllocClassType(sizeof(Converter__double__uType), "Fuse.Animations.Converter<double>", false, 0, 0, 0);

    return type;
}

void Converter__double___ObjInit(Converter__double* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__float__uType* Converter__float__typeof()
{
    static ::uStaticStrong<Converter__float__uType*> type;
    if (type != NULL) return type;

    type = (Converter__float__uType*)::uAllocClassType(sizeof(Converter__float__uType), "Fuse.Animations.Converter<float>", false, 0, 0, 0);

    return type;
}

void Converter__float___ObjInit(Converter__float* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__float2__uType* Converter__float2__typeof()
{
    static ::uStaticStrong<Converter__float2__uType*> type;
    if (type != NULL) return type;

    type = (Converter__float2__uType*)::uAllocClassType(sizeof(Converter__float2__uType), "Fuse.Animations.Converter<float2>", false, 0, 0, 0);

    return type;
}

void Converter__float2___ObjInit(Converter__float2* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__float3__uType* Converter__float3__typeof()
{
    static ::uStaticStrong<Converter__float3__uType*> type;
    if (type != NULL) return type;

    type = (Converter__float3__uType*)::uAllocClassType(sizeof(Converter__float3__uType), "Fuse.Animations.Converter<float3>", false, 0, 0, 0);

    return type;
}

void Converter__float3___ObjInit(Converter__float3* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__float4__uType* Converter__float4__typeof()
{
    static ::uStaticStrong<Converter__float4__uType*> type;
    if (type != NULL) return type;

    type = (Converter__float4__uType*)::uAllocClassType(sizeof(Converter__float4__uType), "Fuse.Animations.Converter<float4>", false, 0, 0, 0);

    return type;
}

void Converter__float4___ObjInit(Converter__float4* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Animations_AnimationVariant__uType* Converter__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(Converter__Fuse_Animations_AnimationVariant__uType), "Fuse.Animations.Converter<Fuse.Animations.AnimationVariant>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Animations_Easing__uType* Converter__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(Converter__Fuse_Animations_Easing__uType), "Fuse.Animations.Converter<Fuse.Animations.Easing>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Animations_KeyframeInterpolation__uType* Converter__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(Converter__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Animations.Converter<Fuse.Animations.KeyframeInterpolation>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Animations_MixOp__uType* Converter__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(Converter__Fuse_Animations_MixOp__uType), "Fuse.Animations.Converter<Fuse.Animations.MixOp>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Drawing_BlendMode__uType* Converter__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(Converter__Fuse_Drawing_BlendMode__uType), "Fuse.Animations.Converter<Fuse.Drawing.BlendMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Drawing_Brush__uType* Converter__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(Converter__Fuse_Drawing_Brush__uType), "Fuse.Animations.Converter<Fuse.Drawing.Brush>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Drawing_DynamicBrush__uType* Converter__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(Converter__Fuse_Drawing_DynamicBrush__uType), "Fuse.Animations.Converter<Fuse.Drawing.DynamicBrush>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Drawing_GradientStop__uType* Converter__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(Converter__Fuse_Drawing_GradientStop__uType), "Fuse.Animations.Converter<Fuse.Drawing.GradientStop>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Drawing_LinearGradient__uType* Converter__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(Converter__Fuse_Drawing_LinearGradient__uType), "Fuse.Animations.Converter<Fuse.Drawing.LinearGradient>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Drawing_SolidColor__uType* Converter__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(Converter__Fuse_Drawing_SolidColor__uType), "Fuse.Animations.Converter<Fuse.Drawing.SolidColor>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Drawing_StaticBrush__uType* Converter__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(Converter__Fuse_Drawing_StaticBrush__uType), "Fuse.Animations.Converter<Fuse.Drawing.StaticBrush>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_Alignment__uType* Converter__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_Alignment__uType), "Fuse.Animations.Converter<Fuse.Elements.Alignment>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_CachingMode__uType* Converter__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_CachingMode__uType), "Fuse.Animations.Converter<Fuse.Elements.CachingMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_Element__uType* Converter__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_Element__uType), "Fuse.Animations.Converter<Fuse.Elements.Element>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_HitTestMode__uType* Converter__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_HitTestMode__uType), "Fuse.Animations.Converter<Fuse.Elements.HitTestMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_SizeUnit__uType* Converter__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_SizeUnit__uType), "Fuse.Animations.Converter<Fuse.Elements.SizeUnit>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_StretchDirection__uType* Converter__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_StretchDirection__uType), "Fuse.Animations.Converter<Fuse.Elements.StretchDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_StretchMode__uType* Converter__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_StretchMode__uType), "Fuse.Animations.Converter<Fuse.Elements.StretchMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_StretchSizing__uType* Converter__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_StretchSizing__uType), "Fuse.Animations.Converter<Fuse.Elements.StretchSizing>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_TextAlignment__uType* Converter__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_TextAlignment__uType), "Fuse.Animations.Converter<Fuse.Elements.TextAlignment>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_TextWrapping__uType* Converter__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_TextWrapping__uType), "Fuse.Animations.Converter<Fuse.Elements.TextWrapping>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Elements_Visibility__uType* Converter__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(Converter__Fuse_Elements_Visibility__uType), "Fuse.Animations.Converter<Fuse.Elements.Visibility>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Font__uType* Converter__Fuse_Font__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Font__uType*)::uAllocClassType(sizeof(Converter__Fuse_Font__uType), "Fuse.Animations.Converter<Fuse.Font>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Gestures_Edge__uType* Converter__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(Converter__Fuse_Gestures_Edge__uType), "Fuse.Animations.Converter<Fuse.Gestures.Edge>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Gestures_ScrollDirections__uType* Converter__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(Converter__Fuse_Gestures_ScrollDirections__uType), "Fuse.Animations.Converter<Fuse.Gestures.ScrollDirections>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Layouts_Dock__uType* Converter__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(Converter__Fuse_Layouts_Dock__uType), "Fuse.Animations.Converter<Fuse.Layouts.Dock>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Layouts_FlowDirection__uType* Converter__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(Converter__Fuse_Layouts_FlowDirection__uType), "Fuse.Animations.Converter<Fuse.Layouts.FlowDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Layouts_Metric__uType* Converter__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(Converter__Fuse_Layouts_Metric__uType), "Fuse.Animations.Converter<Fuse.Layouts.Metric>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Layouts_Orientation__uType* Converter__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(Converter__Fuse_Layouts_Orientation__uType), "Fuse.Animations.Converter<Fuse.Layouts.Orientation>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Navigation_NavigationDirection__uType* Converter__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(Converter__Fuse_Navigation_NavigationDirection__uType), "Fuse.Animations.Converter<Fuse.Navigation.NavigationDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Navigation_NavigationEdge__uType* Converter__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(Converter__Fuse_Navigation_NavigationEdge__uType), "Fuse.Animations.Converter<Fuse.Navigation.NavigationEdge>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Navigation_NavigationGotoMode__uType* Converter__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(Converter__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Animations.Converter<Fuse.Navigation.NavigationGotoMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Navigation_SnapTo__uType* Converter__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(Converter__Fuse_Navigation_SnapTo__uType), "Fuse.Animations.Converter<Fuse.Navigation.SnapTo>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Navigation_SwipeDirection__uType* Converter__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(Converter__Fuse_Navigation_SwipeDirection__uType), "Fuse.Animations.Converter<Fuse.Navigation.SwipeDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Navigation_SwipeEnds__uType* Converter__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(Converter__Fuse_Navigation_SwipeEnds__uType), "Fuse.Animations.Converter<Fuse.Navigation.SwipeEnds>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Node__uType* Converter__Fuse_Node__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Node__uType*)::uAllocClassType(sizeof(Converter__Fuse_Node__uType), "Fuse.Animations.Converter<Fuse.Node>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Resources_ImageSource__uType* Converter__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(Converter__Fuse_Resources_ImageSource__uType), "Fuse.Animations.Converter<Fuse.Resources.ImageSource>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Triggers_Actions_TriggerDirection__uType* Converter__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(Converter__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Animations.Converter<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Triggers_State__uType* Converter__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(Converter__Fuse_Triggers_State__uType), "Fuse.Animations.Converter<Fuse.Triggers.State>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Triggers_StateTransition__uType* Converter__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(Converter__Fuse_Triggers_StateTransition__uType), "Fuse.Animations.Converter<Fuse.Triggers.StateTransition>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Fuse_Triggers_TriggerBypassMode__uType* Converter__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<Converter__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(Converter__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Animations.Converter<Fuse.Triggers.TriggerBypassMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__int__uType* Converter__int__typeof()
{
    static ::uStaticStrong<Converter__int__uType*> type;
    if (type != NULL) return type;

    type = (Converter__int__uType*)::uAllocClassType(sizeof(Converter__int__uType), "Fuse.Animations.Converter<int>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__int2__uType* Converter__int2__typeof()
{
    static ::uStaticStrong<Converter__int2__uType*> type;
    if (type != NULL) return type;

    type = (Converter__int2__uType*)::uAllocClassType(sizeof(Converter__int2__uType), "Fuse.Animations.Converter<int2>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__int3__uType* Converter__int3__typeof()
{
    static ::uStaticStrong<Converter__int3__uType*> type;
    if (type != NULL) return type;

    type = (Converter__int3__uType*)::uAllocClassType(sizeof(Converter__int3__uType), "Fuse.Animations.Converter<int3>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__int4__uType* Converter__int4__typeof()
{
    static ::uStaticStrong<Converter__int4__uType*> type;
    if (type != NULL) return type;

    type = (Converter__int4__uType*)::uAllocClassType(sizeof(Converter__int4__uType), "Fuse.Animations.Converter<int4>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__long__uType* Converter__long__typeof()
{
    static ::uStaticStrong<Converter__long__uType*> type;
    if (type != NULL) return type;

    type = (Converter__long__uType*)::uAllocClassType(sizeof(Converter__long__uType), "Fuse.Animations.Converter<long>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__object__uType* Converter__object__typeof()
{
    static ::uStaticStrong<Converter__object__uType*> type;
    if (type != NULL) return type;

    type = (Converter__object__uType*)::uAllocClassType(sizeof(Converter__object__uType), "Fuse.Animations.Converter<object>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__short__uType* Converter__short__typeof()
{
    static ::uStaticStrong<Converter__short__uType*> type;
    if (type != NULL) return type;

    type = (Converter__short__uType*)::uAllocClassType(sizeof(Converter__short__uType), "Fuse.Animations.Converter<short>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__string__uType* Converter__string__typeof()
{
    static ::uStaticStrong<Converter__string__uType*> type;
    if (type != NULL) return type;

    type = (Converter__string__uType*)::uAllocClassType(sizeof(Converter__string__uType), "Fuse.Animations.Converter<string>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Uno_EventArgs__uType* Converter__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<Converter__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Uno_EventArgs__uType*)::uAllocClassType(sizeof(Converter__Uno_EventArgs__uType), "Fuse.Animations.Converter<Uno.EventArgs>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Uno_Platform_iOS_StatusBarStyle__uType* Converter__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<Converter__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(Converter__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Animations.Converter<Uno.Platform.iOS.StatusBarStyle>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__Uno_UX_FileSource__uType* Converter__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<Converter__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (Converter__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(Converter__Uno_UX_FileSource__uType), "Fuse.Animations.Converter<Uno.UX.FileSource>", false, 0, 0, 0);

    return type;
}

}}}
