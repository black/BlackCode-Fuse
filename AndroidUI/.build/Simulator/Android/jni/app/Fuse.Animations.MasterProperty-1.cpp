#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.KeyframeInterpolation.h>
#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MasterProperty__char.h>
#include <app/Fuse.Animations.MasterProperty__double.h>
#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MasterProperty__float2.h>
#include <app/Fuse.Animations.MasterProperty__float3.h>
#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Font.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Node.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.MasterProperty__int.h>
#include <app/Fuse.Animations.MasterProperty__int2.h>
#include <app/Fuse.Animations.MasterProperty__int3.h>
#include <app/Fuse.Animations.MasterProperty__int4.h>
#include <app/Fuse.Animations.MasterProperty__long.h>
#include <app/Fuse.Animations.MasterProperty__object.h>
#include <app/Fuse.Animations.MasterProperty__short.h>
#include <app/Fuse.Animations.MasterProperty__string.h>
#include <app/Fuse.Animations.MasterProperty__Uno_EventArgs.h>
#include <app/Fuse.Animations.MasterProperty__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.MasterProperty__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.MixerBase.h>
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
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Int3.h>
#include <app/Uno.Int4.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
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
namespace Animations {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__bool__uType* MasterProperty__bool__typeof()
{
    static ::uStaticStrong<MasterProperty__bool__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__bool__uType*)::uAllocClassType(sizeof(MasterProperty__bool__uType), "Fuse.Animations.MasterProperty<bool>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__bool__typeof());
    type->__fp_get_RestValue = (bool(*)(::app::Fuse::Animations::MasterBase__bool*))MasterProperty__bool__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__bool*))MasterProperty__bool__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__bool__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__bool__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__bool__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__bool, Property));

    return type;
}

void MasterProperty__bool___ObjInit_1(MasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__bool___ObjInit(__this, mixerBase);
    __this->Property = property;
}

bool MasterProperty__bool__get_RestValue(MasterProperty__bool* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__bool__GetPropertyObject(MasterProperty__bool* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__bool__OnInactive(MasterProperty__bool* __this)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__char__uType* MasterProperty__char__typeof()
{
    static ::uStaticStrong<MasterProperty__char__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__char__uType*)::uAllocClassType(sizeof(MasterProperty__char__uType), "Fuse.Animations.MasterProperty<char>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__char__typeof());
    type->__fp_get_RestValue = (::uChar(*)(::app::Fuse::Animations::MasterBase__char*))MasterProperty__char__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__char*))MasterProperty__char__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__char__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__char__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__char__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__char, Property));

    return type;
}

void MasterProperty__char___ObjInit_1(MasterProperty__char* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__char___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::uChar MasterProperty__char__get_RestValue(MasterProperty__char* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__char*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__char__GetPropertyObject(MasterProperty__char* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__char__OnInactive(MasterProperty__char* __this)
{
    ::uPtr< ::app::Uno::UX::Property__char*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__double__uType* MasterProperty__double__typeof()
{
    static ::uStaticStrong<MasterProperty__double__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__double__uType*)::uAllocClassType(sizeof(MasterProperty__double__uType), "Fuse.Animations.MasterProperty<double>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__double__typeof());
    type->__fp_get_RestValue = (double(*)(::app::Fuse::Animations::MasterBase__double*))MasterProperty__double__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__double*))MasterProperty__double__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__double__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__double__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__double__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__double, Property));

    return type;
}

void MasterProperty__double___ObjInit_1(MasterProperty__double* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__double___ObjInit(__this, mixerBase);
    __this->Property = property;
}

double MasterProperty__double__get_RestValue(MasterProperty__double* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__double*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__double__GetPropertyObject(MasterProperty__double* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__double__OnInactive(MasterProperty__double* __this)
{
    ::uPtr< ::app::Uno::UX::Property__double*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__float__uType* MasterProperty__float__typeof()
{
    static ::uStaticStrong<MasterProperty__float__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__float__uType*)::uAllocClassType(sizeof(MasterProperty__float__uType), "Fuse.Animations.MasterProperty<float>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__float__typeof());
    type->__fp_get_RestValue = (float(*)(::app::Fuse::Animations::MasterBase__float*))MasterProperty__float__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__float*))MasterProperty__float__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__float__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__float__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__float__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__float, Property));

    return type;
}

void MasterProperty__float___ObjInit_1(MasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__float___ObjInit(__this, mixerBase);
    __this->Property = property;
}

float MasterProperty__float__get_RestValue(MasterProperty__float* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__float__GetPropertyObject(MasterProperty__float* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__float__OnInactive(MasterProperty__float* __this)
{
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__float2__uType* MasterProperty__float2__typeof()
{
    static ::uStaticStrong<MasterProperty__float2__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__float2__uType*)::uAllocClassType(sizeof(MasterProperty__float2__uType), "Fuse.Animations.MasterProperty<float2>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__float2__typeof());
    type->__fp_get_RestValue = (::app::Uno::Float2(*)(::app::Fuse::Animations::MasterBase__float2*))MasterProperty__float2__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__float2*))MasterProperty__float2__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__float2__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__float2__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__float2__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__float2, Property));

    return type;
}

void MasterProperty__float2___ObjInit_1(MasterProperty__float2* __this, ::app::Uno::UX::Property__float2* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__float2___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::Float2 MasterProperty__float2__get_RestValue(MasterProperty__float2* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__float2__GetPropertyObject(MasterProperty__float2* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__float2__OnInactive(MasterProperty__float2* __this)
{
    ::uPtr< ::app::Uno::UX::Property__float2*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__float3__uType* MasterProperty__float3__typeof()
{
    static ::uStaticStrong<MasterProperty__float3__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__float3__uType*)::uAllocClassType(sizeof(MasterProperty__float3__uType), "Fuse.Animations.MasterProperty<float3>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__float3__typeof());
    type->__fp_get_RestValue = (::app::Uno::Float3(*)(::app::Fuse::Animations::MasterBase__float3*))MasterProperty__float3__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__float3*))MasterProperty__float3__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__float3__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__float3__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__float3__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__float3, Property));

    return type;
}

void MasterProperty__float3___ObjInit_1(MasterProperty__float3* __this, ::app::Uno::UX::Property__float3* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__float3___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::Float3 MasterProperty__float3__get_RestValue(MasterProperty__float3* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__float3__GetPropertyObject(MasterProperty__float3* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__float3__OnInactive(MasterProperty__float3* __this)
{
    ::uPtr< ::app::Uno::UX::Property__float3*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__float4__uType* MasterProperty__float4__typeof()
{
    static ::uStaticStrong<MasterProperty__float4__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__float4__uType*)::uAllocClassType(sizeof(MasterProperty__float4__uType), "Fuse.Animations.MasterProperty<float4>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__float4__typeof());
    type->__fp_get_RestValue = (::app::Uno::Float4(*)(::app::Fuse::Animations::MasterBase__float4*))MasterProperty__float4__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__float4*))MasterProperty__float4__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__float4__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__float4__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__float4__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__float4, Property));

    return type;
}

void MasterProperty__float4___ObjInit_1(MasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__float4___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::Float4 MasterProperty__float4__get_RestValue(MasterProperty__float4* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__float4__GetPropertyObject(MasterProperty__float4* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__float4__OnInactive(MasterProperty__float4* __this)
{
    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Animations_AnimationVariant__uType* MasterProperty__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Animations_AnimationVariant__uType), "Fuse.Animations.MasterProperty<Fuse.Animations.AnimationVariant>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant*))MasterProperty__Fuse_Animations_AnimationVariant__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant*))MasterProperty__Fuse_Animations_AnimationVariant__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Animations_AnimationVariant__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Animations_AnimationVariant__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Animations_AnimationVariant__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Animations_AnimationVariant, Property));

    return type;
}

void MasterProperty__Fuse_Animations_AnimationVariant___ObjInit_1(MasterProperty__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Animations_AnimationVariant__get_RestValue(MasterProperty__Fuse_Animations_AnimationVariant* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Animations_AnimationVariant__GetPropertyObject(MasterProperty__Fuse_Animations_AnimationVariant* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Animations_AnimationVariant__OnInactive(MasterProperty__Fuse_Animations_AnimationVariant* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Animations_Easing__uType* MasterProperty__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Animations_Easing__uType), "Fuse.Animations.MasterProperty<Fuse.Animations.Easing>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing*))MasterProperty__Fuse_Animations_Easing__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing*))MasterProperty__Fuse_Animations_Easing__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Animations_Easing__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Animations_Easing__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Animations_Easing__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Animations_Easing, Property));

    return type;
}

void MasterProperty__Fuse_Animations_Easing___ObjInit_1(MasterProperty__Fuse_Animations_Easing* __this, ::app::Uno::UX::Property__Fuse_Animations_Easing* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Animations_Easing__get_RestValue(MasterProperty__Fuse_Animations_Easing* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Animations_Easing__GetPropertyObject(MasterProperty__Fuse_Animations_Easing* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Animations_Easing__OnInactive(MasterProperty__Fuse_Animations_Easing* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_Easing*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Animations_KeyframeInterpolation__uType* MasterProperty__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Animations.MasterProperty<Fuse.Animations.KeyframeInterpolation>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation*))MasterProperty__Fuse_Animations_KeyframeInterpolation__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation*))MasterProperty__Fuse_Animations_KeyframeInterpolation__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Animations_KeyframeInterpolation__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Animations_KeyframeInterpolation__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Animations_KeyframeInterpolation__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Animations_KeyframeInterpolation, Property));

    return type;
}

void MasterProperty__Fuse_Animations_KeyframeInterpolation___ObjInit_1(MasterProperty__Fuse_Animations_KeyframeInterpolation* __this, ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Animations_KeyframeInterpolation__get_RestValue(MasterProperty__Fuse_Animations_KeyframeInterpolation* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Animations_KeyframeInterpolation__GetPropertyObject(MasterProperty__Fuse_Animations_KeyframeInterpolation* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Animations_KeyframeInterpolation__OnInactive(MasterProperty__Fuse_Animations_KeyframeInterpolation* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Animations_MixOp__uType* MasterProperty__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Animations_MixOp__uType), "Fuse.Animations.MasterProperty<Fuse.Animations.MixOp>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp*))MasterProperty__Fuse_Animations_MixOp__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp*))MasterProperty__Fuse_Animations_MixOp__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Animations_MixOp__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Animations_MixOp__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Animations_MixOp__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Animations_MixOp, Property));

    return type;
}

void MasterProperty__Fuse_Animations_MixOp___ObjInit_1(MasterProperty__Fuse_Animations_MixOp* __this, ::app::Uno::UX::Property__Fuse_Animations_MixOp* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Animations_MixOp__get_RestValue(MasterProperty__Fuse_Animations_MixOp* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Animations_MixOp__GetPropertyObject(MasterProperty__Fuse_Animations_MixOp* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Animations_MixOp__OnInactive(MasterProperty__Fuse_Animations_MixOp* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Animations_MixOp*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Drawing_BlendMode__uType* MasterProperty__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Drawing_BlendMode__uType), "Fuse.Animations.MasterProperty<Fuse.Drawing.BlendMode>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode*))MasterProperty__Fuse_Drawing_BlendMode__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode*))MasterProperty__Fuse_Drawing_BlendMode__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Drawing_BlendMode__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Drawing_BlendMode__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Drawing_BlendMode__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Drawing_BlendMode, Property));

    return type;
}

void MasterProperty__Fuse_Drawing_BlendMode___ObjInit_1(MasterProperty__Fuse_Drawing_BlendMode* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Drawing_BlendMode__get_RestValue(MasterProperty__Fuse_Drawing_BlendMode* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Drawing_BlendMode__GetPropertyObject(MasterProperty__Fuse_Drawing_BlendMode* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Drawing_BlendMode__OnInactive(MasterProperty__Fuse_Drawing_BlendMode* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_BlendMode*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Drawing_Brush__uType* MasterProperty__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Drawing_Brush__uType), "Fuse.Animations.MasterProperty<Fuse.Drawing.Brush>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Drawing::Brush*(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*))MasterProperty__Fuse_Drawing_Brush__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*))MasterProperty__Fuse_Drawing_Brush__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Drawing_Brush__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Drawing_Brush__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Drawing_Brush__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Drawing_Brush, Property));

    return type;
}

void MasterProperty__Fuse_Drawing_Brush___ObjInit_1(MasterProperty__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Drawing::Brush* MasterProperty__Fuse_Drawing_Brush__get_RestValue(MasterProperty__Fuse_Drawing_Brush* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Drawing_Brush__GetPropertyObject(MasterProperty__Fuse_Drawing_Brush* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Drawing_Brush__OnInactive(MasterProperty__Fuse_Drawing_Brush* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_Brush*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Drawing_DynamicBrush__uType* MasterProperty__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Drawing_DynamicBrush__uType), "Fuse.Animations.MasterProperty<Fuse.Drawing.DynamicBrush>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Drawing::DynamicBrush*(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*))MasterProperty__Fuse_Drawing_DynamicBrush__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*))MasterProperty__Fuse_Drawing_DynamicBrush__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Drawing_DynamicBrush__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Drawing_DynamicBrush__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Drawing_DynamicBrush__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Drawing_DynamicBrush, Property));

    return type;
}

void MasterProperty__Fuse_Drawing_DynamicBrush___ObjInit_1(MasterProperty__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Drawing::DynamicBrush* MasterProperty__Fuse_Drawing_DynamicBrush__get_RestValue(MasterProperty__Fuse_Drawing_DynamicBrush* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Drawing_DynamicBrush__GetPropertyObject(MasterProperty__Fuse_Drawing_DynamicBrush* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Drawing_DynamicBrush__OnInactive(MasterProperty__Fuse_Drawing_DynamicBrush* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Drawing_GradientStop__uType* MasterProperty__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Drawing_GradientStop__uType), "Fuse.Animations.MasterProperty<Fuse.Drawing.GradientStop>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Drawing::GradientStop*(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop*))MasterProperty__Fuse_Drawing_GradientStop__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop*))MasterProperty__Fuse_Drawing_GradientStop__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Drawing_GradientStop__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Drawing_GradientStop__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Drawing_GradientStop__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Drawing_GradientStop, Property));

    return type;
}

void MasterProperty__Fuse_Drawing_GradientStop___ObjInit_1(MasterProperty__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Drawing::GradientStop* MasterProperty__Fuse_Drawing_GradientStop__get_RestValue(MasterProperty__Fuse_Drawing_GradientStop* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Drawing_GradientStop__GetPropertyObject(MasterProperty__Fuse_Drawing_GradientStop* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Drawing_GradientStop__OnInactive(MasterProperty__Fuse_Drawing_GradientStop* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Drawing_LinearGradient__uType* MasterProperty__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Drawing_LinearGradient__uType), "Fuse.Animations.MasterProperty<Fuse.Drawing.LinearGradient>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Drawing::LinearGradient*(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*))MasterProperty__Fuse_Drawing_LinearGradient__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*))MasterProperty__Fuse_Drawing_LinearGradient__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Drawing_LinearGradient__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Drawing_LinearGradient__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Drawing_LinearGradient__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Drawing_LinearGradient, Property));

    return type;
}

void MasterProperty__Fuse_Drawing_LinearGradient___ObjInit_1(MasterProperty__Fuse_Drawing_LinearGradient* __this, ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Drawing::LinearGradient* MasterProperty__Fuse_Drawing_LinearGradient__get_RestValue(MasterProperty__Fuse_Drawing_LinearGradient* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Drawing_LinearGradient__GetPropertyObject(MasterProperty__Fuse_Drawing_LinearGradient* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Drawing_LinearGradient__OnInactive(MasterProperty__Fuse_Drawing_LinearGradient* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Drawing_SolidColor__uType* MasterProperty__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Drawing_SolidColor__uType), "Fuse.Animations.MasterProperty<Fuse.Drawing.SolidColor>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Drawing::SolidColor*(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*))MasterProperty__Fuse_Drawing_SolidColor__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*))MasterProperty__Fuse_Drawing_SolidColor__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Drawing_SolidColor__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Drawing_SolidColor__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Drawing_SolidColor__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Drawing_SolidColor, Property));

    return type;
}

void MasterProperty__Fuse_Drawing_SolidColor___ObjInit_1(MasterProperty__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Drawing::SolidColor* MasterProperty__Fuse_Drawing_SolidColor__get_RestValue(MasterProperty__Fuse_Drawing_SolidColor* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Drawing_SolidColor__GetPropertyObject(MasterProperty__Fuse_Drawing_SolidColor* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Drawing_SolidColor__OnInactive(MasterProperty__Fuse_Drawing_SolidColor* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Drawing_StaticBrush__uType* MasterProperty__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Drawing_StaticBrush__uType), "Fuse.Animations.MasterProperty<Fuse.Drawing.StaticBrush>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Drawing::StaticBrush*(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush*))MasterProperty__Fuse_Drawing_StaticBrush__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush*))MasterProperty__Fuse_Drawing_StaticBrush__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Drawing_StaticBrush__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Drawing_StaticBrush__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Drawing_StaticBrush__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Drawing_StaticBrush, Property));

    return type;
}

void MasterProperty__Fuse_Drawing_StaticBrush___ObjInit_1(MasterProperty__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Drawing::StaticBrush* MasterProperty__Fuse_Drawing_StaticBrush__get_RestValue(MasterProperty__Fuse_Drawing_StaticBrush* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Drawing_StaticBrush__GetPropertyObject(MasterProperty__Fuse_Drawing_StaticBrush* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Drawing_StaticBrush__OnInactive(MasterProperty__Fuse_Drawing_StaticBrush* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_Alignment__uType* MasterProperty__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_Alignment__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.Alignment>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment*))MasterProperty__Fuse_Elements_Alignment__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment*))MasterProperty__Fuse_Elements_Alignment__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_Alignment__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_Alignment__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_Alignment__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_Alignment, Property));

    return type;
}

void MasterProperty__Fuse_Elements_Alignment___ObjInit_1(MasterProperty__Fuse_Elements_Alignment* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_Alignment__get_RestValue(MasterProperty__Fuse_Elements_Alignment* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_Alignment__GetPropertyObject(MasterProperty__Fuse_Elements_Alignment* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_Alignment__OnInactive(MasterProperty__Fuse_Elements_Alignment* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Alignment*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_CachingMode__uType* MasterProperty__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_CachingMode__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.CachingMode>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode*))MasterProperty__Fuse_Elements_CachingMode__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode*))MasterProperty__Fuse_Elements_CachingMode__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_CachingMode__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_CachingMode__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_CachingMode__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_CachingMode, Property));

    return type;
}

void MasterProperty__Fuse_Elements_CachingMode___ObjInit_1(MasterProperty__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_CachingMode__get_RestValue(MasterProperty__Fuse_Elements_CachingMode* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_CachingMode__GetPropertyObject(MasterProperty__Fuse_Elements_CachingMode* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_CachingMode__OnInactive(MasterProperty__Fuse_Elements_CachingMode* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_CachingMode*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_Element__uType* MasterProperty__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_Element__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.Element>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_Element__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Elements::Element*(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*))MasterProperty__Fuse_Elements_Element__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*))MasterProperty__Fuse_Elements_Element__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_Element__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_Element__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_Element__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_Element, Property));

    return type;
}

void MasterProperty__Fuse_Elements_Element___ObjInit_1(MasterProperty__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Elements::Element* MasterProperty__Fuse_Elements_Element__get_RestValue(MasterProperty__Fuse_Elements_Element* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_Element__GetPropertyObject(MasterProperty__Fuse_Elements_Element* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_Element__OnInactive(MasterProperty__Fuse_Elements_Element* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Element*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_HitTestMode__uType* MasterProperty__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_HitTestMode__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.HitTestMode>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode*))MasterProperty__Fuse_Elements_HitTestMode__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode*))MasterProperty__Fuse_Elements_HitTestMode__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_HitTestMode__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_HitTestMode__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_HitTestMode__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_HitTestMode, Property));

    return type;
}

void MasterProperty__Fuse_Elements_HitTestMode___ObjInit_1(MasterProperty__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_HitTestMode__get_RestValue(MasterProperty__Fuse_Elements_HitTestMode* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_HitTestMode__GetPropertyObject(MasterProperty__Fuse_Elements_HitTestMode* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_HitTestMode__OnInactive(MasterProperty__Fuse_Elements_HitTestMode* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_HitTestMode*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_SizeUnit__uType* MasterProperty__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_SizeUnit__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.SizeUnit>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*))MasterProperty__Fuse_Elements_SizeUnit__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*))MasterProperty__Fuse_Elements_SizeUnit__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_SizeUnit__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_SizeUnit__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_SizeUnit__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_SizeUnit, Property));

    return type;
}

void MasterProperty__Fuse_Elements_SizeUnit___ObjInit_1(MasterProperty__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_SizeUnit__get_RestValue(MasterProperty__Fuse_Elements_SizeUnit* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_SizeUnit__GetPropertyObject(MasterProperty__Fuse_Elements_SizeUnit* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_SizeUnit__OnInactive(MasterProperty__Fuse_Elements_SizeUnit* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_StretchDirection__uType* MasterProperty__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_StretchDirection__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.StretchDirection>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection*))MasterProperty__Fuse_Elements_StretchDirection__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection*))MasterProperty__Fuse_Elements_StretchDirection__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_StretchDirection__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_StretchDirection__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_StretchDirection__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_StretchDirection, Property));

    return type;
}

void MasterProperty__Fuse_Elements_StretchDirection___ObjInit_1(MasterProperty__Fuse_Elements_StretchDirection* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_StretchDirection__get_RestValue(MasterProperty__Fuse_Elements_StretchDirection* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_StretchDirection__GetPropertyObject(MasterProperty__Fuse_Elements_StretchDirection* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_StretchDirection__OnInactive(MasterProperty__Fuse_Elements_StretchDirection* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchDirection*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_StretchMode__uType* MasterProperty__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_StretchMode__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.StretchMode>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode*))MasterProperty__Fuse_Elements_StretchMode__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode*))MasterProperty__Fuse_Elements_StretchMode__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_StretchMode__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_StretchMode__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_StretchMode__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_StretchMode, Property));

    return type;
}

void MasterProperty__Fuse_Elements_StretchMode___ObjInit_1(MasterProperty__Fuse_Elements_StretchMode* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_StretchMode__get_RestValue(MasterProperty__Fuse_Elements_StretchMode* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_StretchMode__GetPropertyObject(MasterProperty__Fuse_Elements_StretchMode* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_StretchMode__OnInactive(MasterProperty__Fuse_Elements_StretchMode* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchMode*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_StretchSizing__uType* MasterProperty__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_StretchSizing__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.StretchSizing>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing*))MasterProperty__Fuse_Elements_StretchSizing__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing*))MasterProperty__Fuse_Elements_StretchSizing__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_StretchSizing__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_StretchSizing__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_StretchSizing__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_StretchSizing, Property));

    return type;
}

void MasterProperty__Fuse_Elements_StretchSizing___ObjInit_1(MasterProperty__Fuse_Elements_StretchSizing* __this, ::app::Uno::UX::Property__Fuse_Elements_StretchSizing* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_StretchSizing__get_RestValue(MasterProperty__Fuse_Elements_StretchSizing* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_StretchSizing__GetPropertyObject(MasterProperty__Fuse_Elements_StretchSizing* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_StretchSizing__OnInactive(MasterProperty__Fuse_Elements_StretchSizing* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_StretchSizing*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_TextAlignment__uType* MasterProperty__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_TextAlignment__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.TextAlignment>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment*))MasterProperty__Fuse_Elements_TextAlignment__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment*))MasterProperty__Fuse_Elements_TextAlignment__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_TextAlignment__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_TextAlignment__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_TextAlignment__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_TextAlignment, Property));

    return type;
}

void MasterProperty__Fuse_Elements_TextAlignment___ObjInit_1(MasterProperty__Fuse_Elements_TextAlignment* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_TextAlignment__get_RestValue(MasterProperty__Fuse_Elements_TextAlignment* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_TextAlignment__GetPropertyObject(MasterProperty__Fuse_Elements_TextAlignment* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_TextAlignment__OnInactive(MasterProperty__Fuse_Elements_TextAlignment* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextAlignment*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_TextWrapping__uType* MasterProperty__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_TextWrapping__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.TextWrapping>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping*))MasterProperty__Fuse_Elements_TextWrapping__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping*))MasterProperty__Fuse_Elements_TextWrapping__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_TextWrapping__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_TextWrapping__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_TextWrapping__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_TextWrapping, Property));

    return type;
}

void MasterProperty__Fuse_Elements_TextWrapping___ObjInit_1(MasterProperty__Fuse_Elements_TextWrapping* __this, ::app::Uno::UX::Property__Fuse_Elements_TextWrapping* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_TextWrapping__get_RestValue(MasterProperty__Fuse_Elements_TextWrapping* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_TextWrapping__GetPropertyObject(MasterProperty__Fuse_Elements_TextWrapping* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_TextWrapping__OnInactive(MasterProperty__Fuse_Elements_TextWrapping* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_TextWrapping*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_Visibility__uType* MasterProperty__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_Visibility__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.Visibility>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*))MasterProperty__Fuse_Elements_Visibility__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*))MasterProperty__Fuse_Elements_Visibility__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_Visibility__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_Visibility__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_Visibility__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_Visibility, Property));

    return type;
}

void MasterProperty__Fuse_Elements_Visibility___ObjInit_1(MasterProperty__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_Visibility__get_RestValue(MasterProperty__Fuse_Elements_Visibility* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_Visibility__GetPropertyObject(MasterProperty__Fuse_Elements_Visibility* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_Visibility__OnInactive(MasterProperty__Fuse_Elements_Visibility* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Font__uType* MasterProperty__Fuse_Font__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Font__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Font__uType), "Fuse.Animations.MasterProperty<Fuse.Font>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Font__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Font*(*)(::app::Fuse::Animations::MasterBase__Fuse_Font*))MasterProperty__Fuse_Font__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Font*))MasterProperty__Fuse_Font__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Font__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Font__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Font__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Font, Property));

    return type;
}

void MasterProperty__Fuse_Font___ObjInit_1(MasterProperty__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Font___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Font* MasterProperty__Fuse_Font__get_RestValue(MasterProperty__Fuse_Font* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Font__GetPropertyObject(MasterProperty__Fuse_Font* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Font__OnInactive(MasterProperty__Fuse_Font* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Font*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Gestures_Edge__uType* MasterProperty__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Gestures_Edge__uType), "Fuse.Animations.MasterProperty<Fuse.Gestures.Edge>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge*))MasterProperty__Fuse_Gestures_Edge__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge*))MasterProperty__Fuse_Gestures_Edge__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Gestures_Edge__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Gestures_Edge__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Gestures_Edge__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Gestures_Edge, Property));

    return type;
}

void MasterProperty__Fuse_Gestures_Edge___ObjInit_1(MasterProperty__Fuse_Gestures_Edge* __this, ::app::Uno::UX::Property__Fuse_Gestures_Edge* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Gestures_Edge__get_RestValue(MasterProperty__Fuse_Gestures_Edge* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Gestures_Edge__GetPropertyObject(MasterProperty__Fuse_Gestures_Edge* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Gestures_Edge__OnInactive(MasterProperty__Fuse_Gestures_Edge* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_Edge*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Gestures_ScrollDirections__uType* MasterProperty__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Gestures_ScrollDirections__uType), "Fuse.Animations.MasterProperty<Fuse.Gestures.ScrollDirections>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections*))MasterProperty__Fuse_Gestures_ScrollDirections__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections*))MasterProperty__Fuse_Gestures_ScrollDirections__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Gestures_ScrollDirections__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Gestures_ScrollDirections__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Gestures_ScrollDirections__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Gestures_ScrollDirections, Property));

    return type;
}

void MasterProperty__Fuse_Gestures_ScrollDirections___ObjInit_1(MasterProperty__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Gestures_ScrollDirections__get_RestValue(MasterProperty__Fuse_Gestures_ScrollDirections* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Gestures_ScrollDirections__GetPropertyObject(MasterProperty__Fuse_Gestures_ScrollDirections* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Gestures_ScrollDirections__OnInactive(MasterProperty__Fuse_Gestures_ScrollDirections* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Layouts_Dock__uType* MasterProperty__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Layouts_Dock__uType), "Fuse.Animations.MasterProperty<Fuse.Layouts.Dock>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock*))MasterProperty__Fuse_Layouts_Dock__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock*))MasterProperty__Fuse_Layouts_Dock__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Layouts_Dock__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Layouts_Dock__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Layouts_Dock__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Layouts_Dock, Property));

    return type;
}

void MasterProperty__Fuse_Layouts_Dock___ObjInit_1(MasterProperty__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Layouts_Dock__get_RestValue(MasterProperty__Fuse_Layouts_Dock* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Layouts_Dock__GetPropertyObject(MasterProperty__Fuse_Layouts_Dock* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Layouts_Dock__OnInactive(MasterProperty__Fuse_Layouts_Dock* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Dock*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Layouts_FlowDirection__uType* MasterProperty__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Layouts_FlowDirection__uType), "Fuse.Animations.MasterProperty<Fuse.Layouts.FlowDirection>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection*))MasterProperty__Fuse_Layouts_FlowDirection__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection*))MasterProperty__Fuse_Layouts_FlowDirection__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Layouts_FlowDirection__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Layouts_FlowDirection__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Layouts_FlowDirection__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Layouts_FlowDirection, Property));

    return type;
}

void MasterProperty__Fuse_Layouts_FlowDirection___ObjInit_1(MasterProperty__Fuse_Layouts_FlowDirection* __this, ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Layouts_FlowDirection__get_RestValue(MasterProperty__Fuse_Layouts_FlowDirection* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Layouts_FlowDirection__GetPropertyObject(MasterProperty__Fuse_Layouts_FlowDirection* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Layouts_FlowDirection__OnInactive(MasterProperty__Fuse_Layouts_FlowDirection* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Layouts_Metric__uType* MasterProperty__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Layouts_Metric__uType), "Fuse.Animations.MasterProperty<Fuse.Layouts.Metric>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric*))MasterProperty__Fuse_Layouts_Metric__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric*))MasterProperty__Fuse_Layouts_Metric__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Layouts_Metric__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Layouts_Metric__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Layouts_Metric__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Layouts_Metric, Property));

    return type;
}

void MasterProperty__Fuse_Layouts_Metric___ObjInit_1(MasterProperty__Fuse_Layouts_Metric* __this, ::app::Uno::UX::Property__Fuse_Layouts_Metric* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Layouts_Metric__get_RestValue(MasterProperty__Fuse_Layouts_Metric* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Layouts_Metric__GetPropertyObject(MasterProperty__Fuse_Layouts_Metric* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Layouts_Metric__OnInactive(MasterProperty__Fuse_Layouts_Metric* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Metric*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Layouts_Orientation__uType* MasterProperty__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Layouts_Orientation__uType), "Fuse.Animations.MasterProperty<Fuse.Layouts.Orientation>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*))MasterProperty__Fuse_Layouts_Orientation__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*))MasterProperty__Fuse_Layouts_Orientation__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Layouts_Orientation__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Layouts_Orientation__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Layouts_Orientation__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Layouts_Orientation, Property));

    return type;
}

void MasterProperty__Fuse_Layouts_Orientation___ObjInit_1(MasterProperty__Fuse_Layouts_Orientation* __this, ::app::Uno::UX::Property__Fuse_Layouts_Orientation* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Layouts_Orientation__get_RestValue(MasterProperty__Fuse_Layouts_Orientation* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Layouts_Orientation__GetPropertyObject(MasterProperty__Fuse_Layouts_Orientation* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Layouts_Orientation__OnInactive(MasterProperty__Fuse_Layouts_Orientation* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Layouts_Orientation*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Navigation_NavigationDirection__uType* MasterProperty__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Navigation_NavigationDirection__uType), "Fuse.Animations.MasterProperty<Fuse.Navigation.NavigationDirection>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection*))MasterProperty__Fuse_Navigation_NavigationDirection__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection*))MasterProperty__Fuse_Navigation_NavigationDirection__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Navigation_NavigationDirection__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Navigation_NavigationDirection__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Navigation_NavigationDirection__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Navigation_NavigationDirection, Property));

    return type;
}

void MasterProperty__Fuse_Navigation_NavigationDirection___ObjInit_1(MasterProperty__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Navigation_NavigationDirection__get_RestValue(MasterProperty__Fuse_Navigation_NavigationDirection* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Navigation_NavigationDirection__GetPropertyObject(MasterProperty__Fuse_Navigation_NavigationDirection* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Navigation_NavigationDirection__OnInactive(MasterProperty__Fuse_Navigation_NavigationDirection* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Navigation_NavigationEdge__uType* MasterProperty__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Navigation_NavigationEdge__uType), "Fuse.Animations.MasterProperty<Fuse.Navigation.NavigationEdge>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge*))MasterProperty__Fuse_Navigation_NavigationEdge__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge*))MasterProperty__Fuse_Navigation_NavigationEdge__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Navigation_NavigationEdge__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Navigation_NavigationEdge__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Navigation_NavigationEdge__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Navigation_NavigationEdge, Property));

    return type;
}

void MasterProperty__Fuse_Navigation_NavigationEdge___ObjInit_1(MasterProperty__Fuse_Navigation_NavigationEdge* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Navigation_NavigationEdge__get_RestValue(MasterProperty__Fuse_Navigation_NavigationEdge* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Navigation_NavigationEdge__GetPropertyObject(MasterProperty__Fuse_Navigation_NavigationEdge* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Navigation_NavigationEdge__OnInactive(MasterProperty__Fuse_Navigation_NavigationEdge* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Navigation_NavigationGotoMode__uType* MasterProperty__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Animations.MasterProperty<Fuse.Navigation.NavigationGotoMode>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode*))MasterProperty__Fuse_Navigation_NavigationGotoMode__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode*))MasterProperty__Fuse_Navigation_NavigationGotoMode__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Navigation_NavigationGotoMode__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Navigation_NavigationGotoMode__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Navigation_NavigationGotoMode__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Navigation_NavigationGotoMode, Property));

    return type;
}

void MasterProperty__Fuse_Navigation_NavigationGotoMode___ObjInit_1(MasterProperty__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Navigation_NavigationGotoMode__get_RestValue(MasterProperty__Fuse_Navigation_NavigationGotoMode* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Navigation_NavigationGotoMode__GetPropertyObject(MasterProperty__Fuse_Navigation_NavigationGotoMode* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Navigation_NavigationGotoMode__OnInactive(MasterProperty__Fuse_Navigation_NavigationGotoMode* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Navigation_SnapTo__uType* MasterProperty__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Navigation_SnapTo__uType), "Fuse.Animations.MasterProperty<Fuse.Navigation.SnapTo>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*))MasterProperty__Fuse_Navigation_SnapTo__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*))MasterProperty__Fuse_Navigation_SnapTo__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Navigation_SnapTo__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Navigation_SnapTo__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Navigation_SnapTo__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Navigation_SnapTo, Property));

    return type;
}

void MasterProperty__Fuse_Navigation_SnapTo___ObjInit_1(MasterProperty__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Navigation_SnapTo__get_RestValue(MasterProperty__Fuse_Navigation_SnapTo* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Navigation_SnapTo__GetPropertyObject(MasterProperty__Fuse_Navigation_SnapTo* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Navigation_SnapTo__OnInactive(MasterProperty__Fuse_Navigation_SnapTo* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Navigation_SwipeDirection__uType* MasterProperty__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Navigation_SwipeDirection__uType), "Fuse.Animations.MasterProperty<Fuse.Navigation.SwipeDirection>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection*))MasterProperty__Fuse_Navigation_SwipeDirection__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection*))MasterProperty__Fuse_Navigation_SwipeDirection__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Navigation_SwipeDirection__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Navigation_SwipeDirection__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Navigation_SwipeDirection__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Navigation_SwipeDirection, Property));

    return type;
}

void MasterProperty__Fuse_Navigation_SwipeDirection___ObjInit_1(MasterProperty__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Navigation_SwipeDirection__get_RestValue(MasterProperty__Fuse_Navigation_SwipeDirection* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Navigation_SwipeDirection__GetPropertyObject(MasterProperty__Fuse_Navigation_SwipeDirection* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Navigation_SwipeDirection__OnInactive(MasterProperty__Fuse_Navigation_SwipeDirection* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Navigation_SwipeEnds__uType* MasterProperty__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Navigation_SwipeEnds__uType), "Fuse.Animations.MasterProperty<Fuse.Navigation.SwipeEnds>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds*))MasterProperty__Fuse_Navigation_SwipeEnds__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds*))MasterProperty__Fuse_Navigation_SwipeEnds__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Navigation_SwipeEnds__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Navigation_SwipeEnds__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Navigation_SwipeEnds__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Navigation_SwipeEnds, Property));

    return type;
}

void MasterProperty__Fuse_Navigation_SwipeEnds___ObjInit_1(MasterProperty__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Navigation_SwipeEnds__get_RestValue(MasterProperty__Fuse_Navigation_SwipeEnds* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Navigation_SwipeEnds__GetPropertyObject(MasterProperty__Fuse_Navigation_SwipeEnds* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Navigation_SwipeEnds__OnInactive(MasterProperty__Fuse_Navigation_SwipeEnds* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Node__uType* MasterProperty__Fuse_Node__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Node__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Node__uType), "Fuse.Animations.MasterProperty<Fuse.Node>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Node__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Node*(*)(::app::Fuse::Animations::MasterBase__Fuse_Node*))MasterProperty__Fuse_Node__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Node*))MasterProperty__Fuse_Node__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Node__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Node__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Node__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Node, Property));

    return type;
}

void MasterProperty__Fuse_Node___ObjInit_1(MasterProperty__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Node___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Node* MasterProperty__Fuse_Node__get_RestValue(MasterProperty__Fuse_Node* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Node__GetPropertyObject(MasterProperty__Fuse_Node* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Node__OnInactive(MasterProperty__Fuse_Node* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Node*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Resources_ImageSource__uType* MasterProperty__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Resources_ImageSource__uType), "Fuse.Animations.MasterProperty<Fuse.Resources.ImageSource>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Resources::ImageSource*(*)(::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*))MasterProperty__Fuse_Resources_ImageSource__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*))MasterProperty__Fuse_Resources_ImageSource__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Resources_ImageSource__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Resources_ImageSource__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Resources_ImageSource, Property));

    return type;
}

void MasterProperty__Fuse_Resources_ImageSource___ObjInit_1(MasterProperty__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Resources::ImageSource* MasterProperty__Fuse_Resources_ImageSource__get_RestValue(MasterProperty__Fuse_Resources_ImageSource* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Resources_ImageSource__GetPropertyObject(MasterProperty__Fuse_Resources_ImageSource* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Resources_ImageSource__OnInactive(MasterProperty__Fuse_Resources_ImageSource* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType* MasterProperty__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Animations.MasterProperty<Fuse.Triggers.Actions.TriggerDirection>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*))MasterProperty__Fuse_Triggers_Actions_TriggerDirection__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*))MasterProperty__Fuse_Triggers_Actions_TriggerDirection__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Triggers_Actions_TriggerDirection__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Triggers_Actions_TriggerDirection, Property));

    return type;
}

void MasterProperty__Fuse_Triggers_Actions_TriggerDirection___ObjInit_1(MasterProperty__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Triggers_Actions_TriggerDirection__get_RestValue(MasterProperty__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Triggers_Actions_TriggerDirection__GetPropertyObject(MasterProperty__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Triggers_Actions_TriggerDirection__OnInactive(MasterProperty__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Triggers_State__uType* MasterProperty__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Triggers_State__uType), "Fuse.Animations.MasterProperty<Fuse.Triggers.State>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Triggers_State__typeof());
    type->__fp_get_RestValue = (::app::Fuse::Triggers::State*(*)(::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*))MasterProperty__Fuse_Triggers_State__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*))MasterProperty__Fuse_Triggers_State__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Triggers_State__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Triggers_State__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Triggers_State__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Triggers_State, Property));

    return type;
}

void MasterProperty__Fuse_Triggers_State___ObjInit_1(MasterProperty__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Fuse::Triggers::State* MasterProperty__Fuse_Triggers_State__get_RestValue(MasterProperty__Fuse_Triggers_State* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Triggers_State__GetPropertyObject(MasterProperty__Fuse_Triggers_State* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Triggers_State__OnInactive(MasterProperty__Fuse_Triggers_State* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_State*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Triggers_StateTransition__uType* MasterProperty__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Triggers_StateTransition__uType), "Fuse.Animations.MasterProperty<Fuse.Triggers.StateTransition>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*))MasterProperty__Fuse_Triggers_StateTransition__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*))MasterProperty__Fuse_Triggers_StateTransition__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Triggers_StateTransition__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Triggers_StateTransition__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Triggers_StateTransition__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Triggers_StateTransition, Property));

    return type;
}

void MasterProperty__Fuse_Triggers_StateTransition___ObjInit_1(MasterProperty__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Triggers_StateTransition__get_RestValue(MasterProperty__Fuse_Triggers_StateTransition* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Triggers_StateTransition__GetPropertyObject(MasterProperty__Fuse_Triggers_StateTransition* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Triggers_StateTransition__OnInactive(MasterProperty__Fuse_Triggers_StateTransition* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Triggers_TriggerBypassMode__uType* MasterProperty__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Animations.MasterProperty<Fuse.Triggers.TriggerBypassMode>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode*))MasterProperty__Fuse_Triggers_TriggerBypassMode__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode*))MasterProperty__Fuse_Triggers_TriggerBypassMode__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Triggers_TriggerBypassMode__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Triggers_TriggerBypassMode__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Triggers_TriggerBypassMode__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Triggers_TriggerBypassMode, Property));

    return type;
}

void MasterProperty__Fuse_Triggers_TriggerBypassMode___ObjInit_1(MasterProperty__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Triggers_TriggerBypassMode__get_RestValue(MasterProperty__Fuse_Triggers_TriggerBypassMode* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Triggers_TriggerBypassMode__GetPropertyObject(MasterProperty__Fuse_Triggers_TriggerBypassMode* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Triggers_TriggerBypassMode__OnInactive(MasterProperty__Fuse_Triggers_TriggerBypassMode* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__int__uType* MasterProperty__int__typeof()
{
    static ::uStaticStrong<MasterProperty__int__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__int__uType*)::uAllocClassType(sizeof(MasterProperty__int__uType), "Fuse.Animations.MasterProperty<int>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__int__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__int*))MasterProperty__int__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__int*))MasterProperty__int__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__int__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__int__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__int__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__int, Property));

    return type;
}

void MasterProperty__int___ObjInit_1(MasterProperty__int* __this, ::app::Uno::UX::Property__int* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__int___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__int__get_RestValue(MasterProperty__int* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__int*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__int__GetPropertyObject(MasterProperty__int* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__int__OnInactive(MasterProperty__int* __this)
{
    ::uPtr< ::app::Uno::UX::Property__int*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__int2__uType* MasterProperty__int2__typeof()
{
    static ::uStaticStrong<MasterProperty__int2__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__int2__uType*)::uAllocClassType(sizeof(MasterProperty__int2__uType), "Fuse.Animations.MasterProperty<int2>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__int2__typeof());
    type->__fp_get_RestValue = (::app::Uno::Int2(*)(::app::Fuse::Animations::MasterBase__int2*))MasterProperty__int2__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__int2*))MasterProperty__int2__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__int2__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__int2__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__int2__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__int2, Property));

    return type;
}

void MasterProperty__int2___ObjInit_1(MasterProperty__int2* __this, ::app::Uno::UX::Property__int2* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__int2___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::Int2 MasterProperty__int2__get_RestValue(MasterProperty__int2* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__int2__GetPropertyObject(MasterProperty__int2* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__int2__OnInactive(MasterProperty__int2* __this)
{
    ::uPtr< ::app::Uno::UX::Property__int2*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__int3__uType* MasterProperty__int3__typeof()
{
    static ::uStaticStrong<MasterProperty__int3__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__int3__uType*)::uAllocClassType(sizeof(MasterProperty__int3__uType), "Fuse.Animations.MasterProperty<int3>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__int3__typeof());
    type->__fp_get_RestValue = (::app::Uno::Int3(*)(::app::Fuse::Animations::MasterBase__int3*))MasterProperty__int3__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__int3*))MasterProperty__int3__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__int3__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__int3__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__int3__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__int3, Property));

    return type;
}

void MasterProperty__int3___ObjInit_1(MasterProperty__int3* __this, ::app::Uno::UX::Property__int3* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__int3___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::Int3 MasterProperty__int3__get_RestValue(MasterProperty__int3* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__int3__GetPropertyObject(MasterProperty__int3* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__int3__OnInactive(MasterProperty__int3* __this)
{
    ::uPtr< ::app::Uno::UX::Property__int3*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__int4__uType* MasterProperty__int4__typeof()
{
    static ::uStaticStrong<MasterProperty__int4__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__int4__uType*)::uAllocClassType(sizeof(MasterProperty__int4__uType), "Fuse.Animations.MasterProperty<int4>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__int4__typeof());
    type->__fp_get_RestValue = (::app::Uno::Int4(*)(::app::Fuse::Animations::MasterBase__int4*))MasterProperty__int4__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__int4*))MasterProperty__int4__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__int4__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__int4__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__int4__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__int4, Property));

    return type;
}

void MasterProperty__int4___ObjInit_1(MasterProperty__int4* __this, ::app::Uno::UX::Property__int4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__int4___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::Int4 MasterProperty__int4__get_RestValue(MasterProperty__int4* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__int4__GetPropertyObject(MasterProperty__int4* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__int4__OnInactive(MasterProperty__int4* __this)
{
    ::uPtr< ::app::Uno::UX::Property__int4*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__long__uType* MasterProperty__long__typeof()
{
    static ::uStaticStrong<MasterProperty__long__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__long__uType*)::uAllocClassType(sizeof(MasterProperty__long__uType), "Fuse.Animations.MasterProperty<long>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__long__typeof());
    type->__fp_get_RestValue = (::uLong(*)(::app::Fuse::Animations::MasterBase__long*))MasterProperty__long__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__long*))MasterProperty__long__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__long__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__long__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__long__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__long, Property));

    return type;
}

void MasterProperty__long___ObjInit_1(MasterProperty__long* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__long___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::uLong MasterProperty__long__get_RestValue(MasterProperty__long* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__long*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__long__GetPropertyObject(MasterProperty__long* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__long__OnInactive(MasterProperty__long* __this)
{
    ::uPtr< ::app::Uno::UX::Property__long*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__object__uType* MasterProperty__object__typeof()
{
    static ::uStaticStrong<MasterProperty__object__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__object__uType*)::uAllocClassType(sizeof(MasterProperty__object__uType), "Fuse.Animations.MasterProperty<object>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__object__typeof());
    type->__fp_get_RestValue = (::uObject*(*)(::app::Fuse::Animations::MasterBase__object*))MasterProperty__object__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__object*))MasterProperty__object__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__object__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__object__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__object__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__object, Property));

    return type;
}

void MasterProperty__object___ObjInit_1(MasterProperty__object* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__object___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::uObject* MasterProperty__object__get_RestValue(MasterProperty__object* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__object*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__object__GetPropertyObject(MasterProperty__object* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__object__OnInactive(MasterProperty__object* __this)
{
    ::uPtr< ::app::Uno::UX::Property__object*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__short__uType* MasterProperty__short__typeof()
{
    static ::uStaticStrong<MasterProperty__short__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__short__uType*)::uAllocClassType(sizeof(MasterProperty__short__uType), "Fuse.Animations.MasterProperty<short>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__short__typeof());
    type->__fp_get_RestValue = (::uShort(*)(::app::Fuse::Animations::MasterBase__short*))MasterProperty__short__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__short*))MasterProperty__short__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__short__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__short__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__short__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__short, Property));

    return type;
}

void MasterProperty__short___ObjInit_1(MasterProperty__short* __this, ::app::Uno::UX::Property__short* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__short___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::uShort MasterProperty__short__get_RestValue(MasterProperty__short* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__short*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__short__GetPropertyObject(MasterProperty__short* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__short__OnInactive(MasterProperty__short* __this)
{
    ::uPtr< ::app::Uno::UX::Property__short*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__string__uType* MasterProperty__string__typeof()
{
    static ::uStaticStrong<MasterProperty__string__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__string__uType*)::uAllocClassType(sizeof(MasterProperty__string__uType), "Fuse.Animations.MasterProperty<string>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__string__typeof());
    type->__fp_get_RestValue = (::uString*(*)(::app::Fuse::Animations::MasterBase__string*))MasterProperty__string__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__string*))MasterProperty__string__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__string__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__string__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__string__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__string, Property));

    return type;
}

void MasterProperty__string___ObjInit_1(MasterProperty__string* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__string___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::uString* MasterProperty__string__get_RestValue(MasterProperty__string* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__string*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__string__GetPropertyObject(MasterProperty__string* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__string__OnInactive(MasterProperty__string* __this)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Uno_EventArgs__uType* MasterProperty__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<MasterProperty__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Uno_EventArgs__uType*)::uAllocClassType(sizeof(MasterProperty__Uno_EventArgs__uType), "Fuse.Animations.MasterProperty<Uno.EventArgs>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Uno_EventArgs__typeof());
    type->__fp_get_RestValue = (::app::Uno::EventArgs*(*)(::app::Fuse::Animations::MasterBase__Uno_EventArgs*))MasterProperty__Uno_EventArgs__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Uno_EventArgs*))MasterProperty__Uno_EventArgs__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Uno_EventArgs__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Uno_EventArgs__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Uno_EventArgs__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Uno_EventArgs, Property));

    return type;
}

void MasterProperty__Uno_EventArgs___ObjInit_1(MasterProperty__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Uno_EventArgs___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::EventArgs* MasterProperty__Uno_EventArgs__get_RestValue(MasterProperty__Uno_EventArgs* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Uno_EventArgs__GetPropertyObject(MasterProperty__Uno_EventArgs* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Uno_EventArgs__OnInactive(MasterProperty__Uno_EventArgs* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_EventArgs*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType* MasterProperty__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Animations.MasterProperty<Uno.Platform.iOS.StatusBarStyle>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle__typeof());
    type->__fp_get_RestValue = (int(*)(::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*))MasterProperty__Uno_Platform_iOS_StatusBarStyle__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*))MasterProperty__Uno_Platform_iOS_StatusBarStyle__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Uno_Platform_iOS_StatusBarStyle__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Uno_Platform_iOS_StatusBarStyle, Property));

    return type;
}

void MasterProperty__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(MasterProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Uno_Platform_iOS_StatusBarStyle__get_RestValue(MasterProperty__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Uno_Platform_iOS_StatusBarStyle__GetPropertyObject(MasterProperty__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Uno_Platform_iOS_StatusBarStyle__OnInactive(MasterProperty__Uno_Platform_iOS_StatusBarStyle* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Uno_UX_FileSource__uType* MasterProperty__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<MasterProperty__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(MasterProperty__Uno_UX_FileSource__uType), "Fuse.Animations.MasterProperty<Uno.UX.FileSource>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Uno_UX_FileSource__typeof());
    type->__fp_get_RestValue = (::app::Uno::UX::FileSource*(*)(::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*))MasterProperty__Uno_UX_FileSource__get_RestValue;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*))MasterProperty__Uno_UX_FileSource__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Uno_UX_FileSource__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Uno_UX_FileSource__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Uno_UX_FileSource__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Uno_UX_FileSource, Property));

    return type;
}

void MasterProperty__Uno_UX_FileSource___ObjInit_1(MasterProperty__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::UX::FileSource* MasterProperty__Uno_UX_FileSource__get_RestValue(MasterProperty__Uno_UX_FileSource* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Uno_UX_FileSource__GetPropertyObject(MasterProperty__Uno_UX_FileSource* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Uno_UX_FileSource__OnInactive(MasterProperty__Uno_UX_FileSource* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Uno_UX_FileSource*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

}}}
