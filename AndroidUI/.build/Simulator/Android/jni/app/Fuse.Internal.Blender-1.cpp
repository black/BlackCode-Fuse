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
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__bool__uType* Blender__bool__typeof()
{
    static ::uStaticStrong<Blender__bool__uType*> type;
    if (type != NULL) return type;

    type = (Blender__bool__uType*)::uAllocClassType(sizeof(Blender__bool__uType), "Fuse.Internal.Blender<bool>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__char__uType* Blender__char__typeof()
{
    static ::uStaticStrong<Blender__char__uType*> type;
    if (type != NULL) return type;

    type = (Blender__char__uType*)::uAllocClassType(sizeof(Blender__char__uType), "Fuse.Internal.Blender<char>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__double__uType* Blender__double__typeof()
{
    static ::uStaticStrong<Blender__double__uType*> type;
    if (type != NULL) return type;

    type = (Blender__double__uType*)::uAllocClassType(sizeof(Blender__double__uType), "Fuse.Internal.Blender<double>", false, 0, 0, 0);

    return type;
}

void Blender__double___ObjInit(Blender__double* __this)
{
}

double Blender__double__UnitWeight(Blender__double* __this, double v, double w)
{
    double l = double();
    double unit = __this->ToUnit(v, &l);
    return __this->Weight(unit, w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__float__uType* Blender__float__typeof()
{
    static ::uStaticStrong<Blender__float__uType*> type;
    if (type != NULL) return type;

    type = (Blender__float__uType*)::uAllocClassType(sizeof(Blender__float__uType), "Fuse.Internal.Blender<float>", false, 0, 0, 0);

    return type;
}

void Blender__float___ObjInit(Blender__float* __this)
{
}

float Blender__float__UnitWeight(Blender__float* __this, float v, double w)
{
    double l = double();
    float unit = __this->ToUnit(v, &l);
    return __this->Weight(unit, w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__float2__uType* Blender__float2__typeof()
{
    static ::uStaticStrong<Blender__float2__uType*> type;
    if (type != NULL) return type;

    type = (Blender__float2__uType*)::uAllocClassType(sizeof(Blender__float2__uType), "Fuse.Internal.Blender<float2>", false, 0, 0, 0);

    return type;
}

void Blender__float2___ObjInit(Blender__float2* __this)
{
}

::app::Uno::Float2 Blender__float2__UnitWeight(Blender__float2* __this, ::app::Uno::Float2 v, double w)
{
    double l = double();
    ::app::Uno::Float2 unit = __this->ToUnit(v, &l);
    return __this->Weight(unit, w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__float3__uType* Blender__float3__typeof()
{
    static ::uStaticStrong<Blender__float3__uType*> type;
    if (type != NULL) return type;

    type = (Blender__float3__uType*)::uAllocClassType(sizeof(Blender__float3__uType), "Fuse.Internal.Blender<float3>", false, 0, 0, 0);

    return type;
}

void Blender__float3___ObjInit(Blender__float3* __this)
{
}

::app::Uno::Float3 Blender__float3__UnitWeight(Blender__float3* __this, ::app::Uno::Float3 v, double w)
{
    double l = double();
    ::app::Uno::Float3 unit = __this->ToUnit(v, &l);
    return __this->Weight(unit, w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__float4__uType* Blender__float4__typeof()
{
    static ::uStaticStrong<Blender__float4__uType*> type;
    if (type != NULL) return type;

    type = (Blender__float4__uType*)::uAllocClassType(sizeof(Blender__float4__uType), "Fuse.Internal.Blender<float4>", false, 0, 0, 0);

    return type;
}

void Blender__float4___ObjInit(Blender__float4* __this)
{
}

::app::Uno::Float4 Blender__float4__UnitWeight(Blender__float4* __this, ::app::Uno::Float4 v, double w)
{
    double l = double();
    ::app::Uno::Float4 unit = __this->ToUnit(v, &l);
    return __this->Weight(unit, w);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Animations_AnimationVariant__uType* Blender__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(Blender__Fuse_Animations_AnimationVariant__uType), "Fuse.Internal.Blender<Fuse.Animations.AnimationVariant>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Animations_Easing__uType* Blender__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(Blender__Fuse_Animations_Easing__uType), "Fuse.Internal.Blender<Fuse.Animations.Easing>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Animations_KeyframeInterpolation__uType* Blender__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(Blender__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Internal.Blender<Fuse.Animations.KeyframeInterpolation>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Animations_MixOp__uType* Blender__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(Blender__Fuse_Animations_MixOp__uType), "Fuse.Internal.Blender<Fuse.Animations.MixOp>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Drawing_BlendMode__uType* Blender__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(Blender__Fuse_Drawing_BlendMode__uType), "Fuse.Internal.Blender<Fuse.Drawing.BlendMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Drawing_Brush__uType* Blender__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(Blender__Fuse_Drawing_Brush__uType), "Fuse.Internal.Blender<Fuse.Drawing.Brush>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Drawing_DynamicBrush__uType* Blender__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(Blender__Fuse_Drawing_DynamicBrush__uType), "Fuse.Internal.Blender<Fuse.Drawing.DynamicBrush>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Drawing_GradientStop__uType* Blender__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(Blender__Fuse_Drawing_GradientStop__uType), "Fuse.Internal.Blender<Fuse.Drawing.GradientStop>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Drawing_LinearGradient__uType* Blender__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(Blender__Fuse_Drawing_LinearGradient__uType), "Fuse.Internal.Blender<Fuse.Drawing.LinearGradient>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Drawing_SolidColor__uType* Blender__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(Blender__Fuse_Drawing_SolidColor__uType), "Fuse.Internal.Blender<Fuse.Drawing.SolidColor>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Drawing_StaticBrush__uType* Blender__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(Blender__Fuse_Drawing_StaticBrush__uType), "Fuse.Internal.Blender<Fuse.Drawing.StaticBrush>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_Alignment__uType* Blender__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_Alignment__uType), "Fuse.Internal.Blender<Fuse.Elements.Alignment>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_CachingMode__uType* Blender__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_CachingMode__uType), "Fuse.Internal.Blender<Fuse.Elements.CachingMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_Element__uType* Blender__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_Element__uType), "Fuse.Internal.Blender<Fuse.Elements.Element>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_HitTestMode__uType* Blender__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_HitTestMode__uType), "Fuse.Internal.Blender<Fuse.Elements.HitTestMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_SizeUnit__uType* Blender__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_SizeUnit__uType), "Fuse.Internal.Blender<Fuse.Elements.SizeUnit>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_StretchDirection__uType* Blender__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_StretchDirection__uType), "Fuse.Internal.Blender<Fuse.Elements.StretchDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_StretchMode__uType* Blender__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_StretchMode__uType), "Fuse.Internal.Blender<Fuse.Elements.StretchMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_StretchSizing__uType* Blender__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_StretchSizing__uType), "Fuse.Internal.Blender<Fuse.Elements.StretchSizing>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_TextAlignment__uType* Blender__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_TextAlignment__uType), "Fuse.Internal.Blender<Fuse.Elements.TextAlignment>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_TextWrapping__uType* Blender__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_TextWrapping__uType), "Fuse.Internal.Blender<Fuse.Elements.TextWrapping>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Elements_Visibility__uType* Blender__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(Blender__Fuse_Elements_Visibility__uType), "Fuse.Internal.Blender<Fuse.Elements.Visibility>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Font__uType* Blender__Fuse_Font__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Font__uType*)::uAllocClassType(sizeof(Blender__Fuse_Font__uType), "Fuse.Internal.Blender<Fuse.Font>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Gestures_Edge__uType* Blender__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(Blender__Fuse_Gestures_Edge__uType), "Fuse.Internal.Blender<Fuse.Gestures.Edge>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Gestures_ScrollDirections__uType* Blender__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(Blender__Fuse_Gestures_ScrollDirections__uType), "Fuse.Internal.Blender<Fuse.Gestures.ScrollDirections>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Layouts_Dock__uType* Blender__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(Blender__Fuse_Layouts_Dock__uType), "Fuse.Internal.Blender<Fuse.Layouts.Dock>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Layouts_FlowDirection__uType* Blender__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(Blender__Fuse_Layouts_FlowDirection__uType), "Fuse.Internal.Blender<Fuse.Layouts.FlowDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Layouts_Metric__uType* Blender__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(Blender__Fuse_Layouts_Metric__uType), "Fuse.Internal.Blender<Fuse.Layouts.Metric>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Layouts_Orientation__uType* Blender__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(Blender__Fuse_Layouts_Orientation__uType), "Fuse.Internal.Blender<Fuse.Layouts.Orientation>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Navigation_NavigationDirection__uType* Blender__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(Blender__Fuse_Navigation_NavigationDirection__uType), "Fuse.Internal.Blender<Fuse.Navigation.NavigationDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Navigation_NavigationEdge__uType* Blender__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(Blender__Fuse_Navigation_NavigationEdge__uType), "Fuse.Internal.Blender<Fuse.Navigation.NavigationEdge>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Navigation_NavigationGotoMode__uType* Blender__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(Blender__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Internal.Blender<Fuse.Navigation.NavigationGotoMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Navigation_SnapTo__uType* Blender__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(Blender__Fuse_Navigation_SnapTo__uType), "Fuse.Internal.Blender<Fuse.Navigation.SnapTo>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Navigation_SwipeDirection__uType* Blender__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(Blender__Fuse_Navigation_SwipeDirection__uType), "Fuse.Internal.Blender<Fuse.Navigation.SwipeDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Navigation_SwipeEnds__uType* Blender__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(Blender__Fuse_Navigation_SwipeEnds__uType), "Fuse.Internal.Blender<Fuse.Navigation.SwipeEnds>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Node__uType* Blender__Fuse_Node__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Node__uType*)::uAllocClassType(sizeof(Blender__Fuse_Node__uType), "Fuse.Internal.Blender<Fuse.Node>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Resources_ImageSource__uType* Blender__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(Blender__Fuse_Resources_ImageSource__uType), "Fuse.Internal.Blender<Fuse.Resources.ImageSource>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Triggers_Actions_TriggerDirection__uType* Blender__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(Blender__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Internal.Blender<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Triggers_State__uType* Blender__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(Blender__Fuse_Triggers_State__uType), "Fuse.Internal.Blender<Fuse.Triggers.State>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Triggers_StateTransition__uType* Blender__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(Blender__Fuse_Triggers_StateTransition__uType), "Fuse.Internal.Blender<Fuse.Triggers.StateTransition>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Fuse_Triggers_TriggerBypassMode__uType* Blender__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<Blender__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(Blender__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Internal.Blender<Fuse.Triggers.TriggerBypassMode>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__int__uType* Blender__int__typeof()
{
    static ::uStaticStrong<Blender__int__uType*> type;
    if (type != NULL) return type;

    type = (Blender__int__uType*)::uAllocClassType(sizeof(Blender__int__uType), "Fuse.Internal.Blender<int>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__int2__uType* Blender__int2__typeof()
{
    static ::uStaticStrong<Blender__int2__uType*> type;
    if (type != NULL) return type;

    type = (Blender__int2__uType*)::uAllocClassType(sizeof(Blender__int2__uType), "Fuse.Internal.Blender<int2>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__int3__uType* Blender__int3__typeof()
{
    static ::uStaticStrong<Blender__int3__uType*> type;
    if (type != NULL) return type;

    type = (Blender__int3__uType*)::uAllocClassType(sizeof(Blender__int3__uType), "Fuse.Internal.Blender<int3>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__int4__uType* Blender__int4__typeof()
{
    static ::uStaticStrong<Blender__int4__uType*> type;
    if (type != NULL) return type;

    type = (Blender__int4__uType*)::uAllocClassType(sizeof(Blender__int4__uType), "Fuse.Internal.Blender<int4>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__long__uType* Blender__long__typeof()
{
    static ::uStaticStrong<Blender__long__uType*> type;
    if (type != NULL) return type;

    type = (Blender__long__uType*)::uAllocClassType(sizeof(Blender__long__uType), "Fuse.Internal.Blender<long>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__object__uType* Blender__object__typeof()
{
    static ::uStaticStrong<Blender__object__uType*> type;
    if (type != NULL) return type;

    type = (Blender__object__uType*)::uAllocClassType(sizeof(Blender__object__uType), "Fuse.Internal.Blender<object>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__short__uType* Blender__short__typeof()
{
    static ::uStaticStrong<Blender__short__uType*> type;
    if (type != NULL) return type;

    type = (Blender__short__uType*)::uAllocClassType(sizeof(Blender__short__uType), "Fuse.Internal.Blender<short>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__string__uType* Blender__string__typeof()
{
    static ::uStaticStrong<Blender__string__uType*> type;
    if (type != NULL) return type;

    type = (Blender__string__uType*)::uAllocClassType(sizeof(Blender__string__uType), "Fuse.Internal.Blender<string>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Uno_EventArgs__uType* Blender__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<Blender__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Uno_EventArgs__uType*)::uAllocClassType(sizeof(Blender__Uno_EventArgs__uType), "Fuse.Internal.Blender<Uno.EventArgs>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Uno_Platform_iOS_StatusBarStyle__uType* Blender__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<Blender__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(Blender__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Internal.Blender<Uno.Platform.iOS.StatusBarStyle>", false, 0, 0, 0);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Blender__Uno_UX_FileSource__uType* Blender__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<Blender__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (Blender__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(Blender__Uno_UX_FileSource__uType), "Fuse.Internal.Blender<Uno.UX.FileSource>", false, 0, 0, 0);

    return type;
}

}}}
