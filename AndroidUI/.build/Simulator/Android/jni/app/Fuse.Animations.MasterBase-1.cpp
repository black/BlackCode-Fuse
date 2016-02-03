#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.KeyframeInterpolation.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase__char.h>
#include <app/Fuse.Animations.MasterBase__double.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase__float2.h>
#include <app/Fuse.Animations.MasterBase__float3.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Font.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Node.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.MasterBase__int.h>
#include <app/Fuse.Animations.MasterBase__int2.h>
#include <app/Fuse.Animations.MasterBase__int3.h>
#include <app/Fuse.Animations.MasterBase__int4.h>
#include <app/Fuse.Animations.MasterBase__long.h>
#include <app/Fuse.Animations.MasterBase__object.h>
#include <app/Fuse.Animations.MasterBase__short.h>
#include <app/Fuse.Animations.MasterBase__string.h>
#include <app/Fuse.Animations.MasterBase__Uno_EventArgs.h>
#include <app/Fuse.Animations.MasterBase__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.MasterBase__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__char.h>
#include <app/Fuse.Animations.MixerHandle__double.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float2.h>
#include <app/Fuse.Animations.MixerHandle__float3.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Animations_Easing.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Animations_MixOp.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_LinearGradient.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_StretchMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_TextWrapping.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Font.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Gestures_Edge.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Layouts_FlowDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Layouts_Metric.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Layouts_Orientation.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_NavigationEdge.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Node.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.MixerHandle__int.h>
#include <app/Fuse.Animations.MixerHandle__int2.h>
#include <app/Fuse.Animations.MixerHandle__int3.h>
#include <app/Fuse.Animations.MixerHandle__int4.h>
#include <app/Fuse.Animations.MixerHandle__long.h>
#include <app/Fuse.Animations.MixerHandle__object.h>
#include <app/Fuse.Animations.MixerHandle__short.h>
#include <app/Fuse.Animations.MixerHandle__string.h>
#include <app/Fuse.Animations.MixerHandle__Uno_EventArgs.h>
#include <app/Fuse.Animations.MixerHandle__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.MixerHandle__Uno_UX_FileSource.h>
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
#include <app/Fuse.Transform.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_char_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_double_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float2_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float3_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Animatio-1b1ceaef.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Animatio-c43422b7.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Animatio-de2b4376.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Drawing_-3f43563f.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Drawing_-7a791c6d.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Drawing_-818bbb98.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Drawing_-ab5b8893.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Drawing_-c2c4d18f.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Drawing_-c6ec7155.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-236ff2e8.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-2d323b6a.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-2ddaef72.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-66b5256c.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-9b8cf363.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-ae19f2c.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-dea964a1.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-e5ad418a.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-ee8d3288.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-fb40cafa.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Font_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Gestures-d0c56820.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Layouts_-14d19b1.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Layouts_-674d48c3.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Navigati-15d1b05f.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Navigati-5d642e47.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Navigati-722e3c28.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Navigati-90924e98.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Navigati-a2fb39d8.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Navigati-ebf2794b.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Node_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Resource-c3432dcb.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Triggers-24b0b685.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Triggers-7a15d5ab.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Triggers-bd665cb8.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_int_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_int2_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_int3_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_int4_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_long_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_object_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_short_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_string_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Uno_EventArgs_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Uno_Platform_-a51e53a8.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__bool__uType* MasterBase__bool__typeof()
{
    static ::uStaticStrong<MasterBase__bool__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__bool__uType*)::uAllocClassType(sizeof(MasterBase__bool__uType), "Fuse.Animations.MasterBase<bool>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__bool__Finalize;
    type->__fp_OnActive = MasterBase__bool__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__bool__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__bool__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__bool, _mixerBase),
        "Handles", offsetof(MasterBase__bool, Handles));

    return type;
}

void MasterBase__bool__Finalize(MasterBase__bool* __this)
{
}

void MasterBase__bool___ObjInit(MasterBase__bool* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__bool__Complete(MasterBase__bool* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__bool__get_PostLayout(MasterBase__bool* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__bool MasterBase__bool__GetFullWeight(MasterBase__bool* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__bool collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__bool();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__bool* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__bool>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__bool__OnActive(MasterBase__bool* __this)
{
}

void MasterBase__bool__Register(MasterBase__bool* __this, ::app::Fuse::Animations::MixerHandle__bool* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__bool__Unregister(MasterBase__bool* __this, ::app::Fuse::Animations::MixerHandle__bool* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__char__uType* MasterBase__char__typeof()
{
    static ::uStaticStrong<MasterBase__char__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__char__uType*)::uAllocClassType(sizeof(MasterBase__char__uType), "Fuse.Animations.MasterBase<char>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__char__Finalize;
    type->__fp_OnActive = MasterBase__char__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__char__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__char__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__char, _mixerBase),
        "Handles", offsetof(MasterBase__char, Handles));

    return type;
}

void MasterBase__char__Finalize(MasterBase__char* __this)
{
}

void MasterBase__char___ObjInit(MasterBase__char* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__char__Complete(MasterBase__char* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__char__get_PostLayout(MasterBase__char* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__char MasterBase__char__GetFullWeight(MasterBase__char* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__char collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__char();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__char* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__char*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__char*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__char*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__char>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__char__OnActive(MasterBase__char* __this)
{
}

void MasterBase__char__Register(MasterBase__char* __this, ::app::Fuse::Animations::MixerHandle__char* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__char*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__char*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__char__Unregister(MasterBase__char* __this, ::app::Fuse::Animations::MixerHandle__char* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__double__uType* MasterBase__double__typeof()
{
    static ::uStaticStrong<MasterBase__double__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__double__uType*)::uAllocClassType(sizeof(MasterBase__double__uType), "Fuse.Animations.MasterBase<double>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__double__Finalize;
    type->__fp_OnActive = MasterBase__double__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__double__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__double__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__double, _mixerBase),
        "Handles", offsetof(MasterBase__double, Handles));

    return type;
}

void MasterBase__double__Finalize(MasterBase__double* __this)
{
}

void MasterBase__double___ObjInit(MasterBase__double* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__double__Complete(MasterBase__double* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__double__get_PostLayout(MasterBase__double* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__double MasterBase__double__GetFullWeight(MasterBase__double* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__double collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__double();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__double* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__double*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__double*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__double*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__double>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__double__OnActive(MasterBase__double* __this)
{
}

void MasterBase__double__Register(MasterBase__double* __this, ::app::Fuse::Animations::MixerHandle__double* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__double*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__double*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__double__Unregister(MasterBase__double* __this, ::app::Fuse::Animations::MixerHandle__double* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__float__uType* MasterBase__float__typeof()
{
    static ::uStaticStrong<MasterBase__float__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__float__uType*)::uAllocClassType(sizeof(MasterBase__float__uType), "Fuse.Animations.MasterBase<float>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__float__Finalize;
    type->__fp_OnActive = MasterBase__float__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__float__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__float__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__float, _mixerBase),
        "Handles", offsetof(MasterBase__float, Handles));

    return type;
}

void MasterBase__float__Finalize(MasterBase__float* __this)
{
}

void MasterBase__float___ObjInit(MasterBase__float* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__float__Complete(MasterBase__float* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__float__get_PostLayout(MasterBase__float* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__float MasterBase__float__GetFullWeight(MasterBase__float* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__float();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__float* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__float>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__float__OnActive(MasterBase__float* __this)
{
}

void MasterBase__float__Register(MasterBase__float* __this, ::app::Fuse::Animations::MixerHandle__float* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__float__Unregister(MasterBase__float* __this, ::app::Fuse::Animations::MixerHandle__float* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__float2__uType* MasterBase__float2__typeof()
{
    static ::uStaticStrong<MasterBase__float2__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__float2__uType*)::uAllocClassType(sizeof(MasterBase__float2__uType), "Fuse.Animations.MasterBase<float2>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__float2__Finalize;
    type->__fp_OnActive = MasterBase__float2__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__float2__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__float2__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__float2, _mixerBase),
        "Handles", offsetof(MasterBase__float2, Handles));

    return type;
}

void MasterBase__float2__Finalize(MasterBase__float2* __this)
{
}

void MasterBase__float2___ObjInit(MasterBase__float2* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__float2__Complete(MasterBase__float2* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__float2__get_PostLayout(MasterBase__float2* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__float2 MasterBase__float2__GetFullWeight(MasterBase__float2* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float2 collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__float2();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__float2* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float2*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__float2*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__float2*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__float2>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__float2__OnActive(MasterBase__float2* __this)
{
}

void MasterBase__float2__Register(MasterBase__float2* __this, ::app::Fuse::Animations::MixerHandle__float2* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__float2*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__float2*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__float2__Unregister(MasterBase__float2* __this, ::app::Fuse::Animations::MixerHandle__float2* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__float3__uType* MasterBase__float3__typeof()
{
    static ::uStaticStrong<MasterBase__float3__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__float3__uType*)::uAllocClassType(sizeof(MasterBase__float3__uType), "Fuse.Animations.MasterBase<float3>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__float3__Finalize;
    type->__fp_OnActive = MasterBase__float3__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__float3__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__float3__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__float3, _mixerBase),
        "Handles", offsetof(MasterBase__float3, Handles));

    return type;
}

void MasterBase__float3__Finalize(MasterBase__float3* __this)
{
}

void MasterBase__float3___ObjInit(MasterBase__float3* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__float3__Complete(MasterBase__float3* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__float3__get_PostLayout(MasterBase__float3* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__float3 MasterBase__float3__GetFullWeight(MasterBase__float3* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float3 collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__float3();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__float3* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float3*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__float3*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__float3*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__float3>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__float3__OnActive(MasterBase__float3* __this)
{
}

void MasterBase__float3__Register(MasterBase__float3* __this, ::app::Fuse::Animations::MixerHandle__float3* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__float3*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__float3*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__float3__Unregister(MasterBase__float3* __this, ::app::Fuse::Animations::MixerHandle__float3* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__float4__uType* MasterBase__float4__typeof()
{
    static ::uStaticStrong<MasterBase__float4__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__float4__uType*)::uAllocClassType(sizeof(MasterBase__float4__uType), "Fuse.Animations.MasterBase<float4>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__float4__Finalize;
    type->__fp_OnActive = MasterBase__float4__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__float4__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__float4__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__float4, _mixerBase),
        "Handles", offsetof(MasterBase__float4, Handles));

    return type;
}

void MasterBase__float4__Finalize(MasterBase__float4* __this)
{
}

void MasterBase__float4___ObjInit(MasterBase__float4* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__float4__Complete(MasterBase__float4* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__float4__get_PostLayout(MasterBase__float4* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__float4 MasterBase__float4__GetFullWeight(MasterBase__float4* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float4 collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__float4();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__float4* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__float4>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__float4__OnActive(MasterBase__float4* __this)
{
}

void MasterBase__float4__Register(MasterBase__float4* __this, ::app::Fuse::Animations::MixerHandle__float4* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__float4__Unregister(MasterBase__float4* __this, ::app::Fuse::Animations::MixerHandle__float4* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Animations_AnimationVariant__uType* MasterBase__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Animations_AnimationVariant__uType), "Fuse.Animations.MasterBase<Fuse.Animations.AnimationVariant>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Animations_AnimationVariant__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Animations_AnimationVariant__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Animations_AnimationVariant__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Animations_AnimationVariant__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Animations_AnimationVariant, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Animations_AnimationVariant, Handles));

    return type;
}

void MasterBase__Fuse_Animations_AnimationVariant__Finalize(MasterBase__Fuse_Animations_AnimationVariant* __this)
{
}

void MasterBase__Fuse_Animations_AnimationVariant___ObjInit(MasterBase__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Animations_AnimationVariant__Complete(MasterBase__Fuse_Animations_AnimationVariant* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Animations_AnimationVariant__get_PostLayout(MasterBase__Fuse_Animations_AnimationVariant* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_AnimationVariant MasterBase__Fuse_Animations_AnimationVariant__GetFullWeight(MasterBase__Fuse_Animations_AnimationVariant* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_AnimationVariant collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_AnimationVariant();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_AnimationVariant>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Animations_AnimationVariant__OnActive(MasterBase__Fuse_Animations_AnimationVariant* __this)
{
}

void MasterBase__Fuse_Animations_AnimationVariant__Register(MasterBase__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Animations_AnimationVariant__Unregister(MasterBase__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Animations_Easing__uType* MasterBase__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Animations_Easing__uType), "Fuse.Animations.MasterBase<Fuse.Animations.Easing>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Animations_Easing__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Animations_Easing__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Animations_Easing__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Animations_Easing__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Animations_Easing, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Animations_Easing, Handles));

    return type;
}

void MasterBase__Fuse_Animations_Easing__Finalize(MasterBase__Fuse_Animations_Easing* __this)
{
}

void MasterBase__Fuse_Animations_Easing___ObjInit(MasterBase__Fuse_Animations_Easing* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_Easing___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Animations_Easing__Complete(MasterBase__Fuse_Animations_Easing* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Animations_Easing__get_PostLayout(MasterBase__Fuse_Animations_Easing* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_Easing MasterBase__Fuse_Animations_Easing__GetFullWeight(MasterBase__Fuse_Animations_Easing* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_Easing collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_Easing();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_Easing>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Animations_Easing__OnActive(MasterBase__Fuse_Animations_Easing* __this)
{
}

void MasterBase__Fuse_Animations_Easing__Register(MasterBase__Fuse_Animations_Easing* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Animations_Easing__Unregister(MasterBase__Fuse_Animations_Easing* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Animations_KeyframeInterpolation__uType* MasterBase__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Animations.MasterBase<Fuse.Animations.KeyframeInterpolation>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Animations_KeyframeInterpolation__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Animations_KeyframeInterpolation__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Animations_KeyframeInterpolation__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Animations_KeyframeInterpolation__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Animations_KeyframeInterpolation, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Animations_KeyframeInterpolation, Handles));

    return type;
}

void MasterBase__Fuse_Animations_KeyframeInterpolation__Finalize(MasterBase__Fuse_Animations_KeyframeInterpolation* __this)
{
}

void MasterBase__Fuse_Animations_KeyframeInterpolation___ObjInit(MasterBase__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Animations_KeyframeInterpolation__Complete(MasterBase__Fuse_Animations_KeyframeInterpolation* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Animations_KeyframeInterpolation__get_PostLayout(MasterBase__Fuse_Animations_KeyframeInterpolation* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_KeyframeInterpolation MasterBase__Fuse_Animations_KeyframeInterpolation__GetFullWeight(MasterBase__Fuse_Animations_KeyframeInterpolation* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_KeyframeInterpolation collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_KeyframeInterpolation();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_KeyframeInterpolation>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Animations_KeyframeInterpolation__OnActive(MasterBase__Fuse_Animations_KeyframeInterpolation* __this)
{
}

void MasterBase__Fuse_Animations_KeyframeInterpolation__Register(MasterBase__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Animations_KeyframeInterpolation__Unregister(MasterBase__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Animations_MixOp__uType* MasterBase__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Animations_MixOp__uType), "Fuse.Animations.MasterBase<Fuse.Animations.MixOp>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Animations_MixOp__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Animations_MixOp__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Animations_MixOp__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Animations_MixOp__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Animations_MixOp, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Animations_MixOp, Handles));

    return type;
}

void MasterBase__Fuse_Animations_MixOp__Finalize(MasterBase__Fuse_Animations_MixOp* __this)
{
}

void MasterBase__Fuse_Animations_MixOp___ObjInit(MasterBase__Fuse_Animations_MixOp* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Animations_MixOp__Complete(MasterBase__Fuse_Animations_MixOp* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Animations_MixOp__get_PostLayout(MasterBase__Fuse_Animations_MixOp* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_MixOp MasterBase__Fuse_Animations_MixOp__GetFullWeight(MasterBase__Fuse_Animations_MixOp* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_MixOp collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_MixOp();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_MixOp>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Animations_MixOp__OnActive(MasterBase__Fuse_Animations_MixOp* __this)
{
}

void MasterBase__Fuse_Animations_MixOp__Register(MasterBase__Fuse_Animations_MixOp* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Animations_MixOp__Unregister(MasterBase__Fuse_Animations_MixOp* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Drawing_BlendMode__uType* MasterBase__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Drawing_BlendMode__uType), "Fuse.Animations.MasterBase<Fuse.Drawing.BlendMode>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Drawing_BlendMode__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Drawing_BlendMode__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Drawing_BlendMode__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Drawing_BlendMode__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Drawing_BlendMode, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Drawing_BlendMode, Handles));

    return type;
}

void MasterBase__Fuse_Drawing_BlendMode__Finalize(MasterBase__Fuse_Drawing_BlendMode* __this)
{
}

void MasterBase__Fuse_Drawing_BlendMode___ObjInit(MasterBase__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Drawing_BlendMode__Complete(MasterBase__Fuse_Drawing_BlendMode* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Drawing_BlendMode__get_PostLayout(MasterBase__Fuse_Drawing_BlendMode* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_BlendMode MasterBase__Fuse_Drawing_BlendMode__GetFullWeight(MasterBase__Fuse_Drawing_BlendMode* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_BlendMode collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_BlendMode();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_BlendMode>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Drawing_BlendMode__OnActive(MasterBase__Fuse_Drawing_BlendMode* __this)
{
}

void MasterBase__Fuse_Drawing_BlendMode__Register(MasterBase__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Drawing_BlendMode__Unregister(MasterBase__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Drawing_Brush__uType* MasterBase__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Drawing_Brush__uType), "Fuse.Animations.MasterBase<Fuse.Drawing.Brush>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Drawing_Brush__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Drawing_Brush__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Drawing_Brush__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Drawing_Brush__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Drawing_Brush, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Drawing_Brush, Handles));

    return type;
}

void MasterBase__Fuse_Drawing_Brush__Finalize(MasterBase__Fuse_Drawing_Brush* __this)
{
}

void MasterBase__Fuse_Drawing_Brush___ObjInit(MasterBase__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Drawing_Brush__Complete(MasterBase__Fuse_Drawing_Brush* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Drawing_Brush__get_PostLayout(MasterBase__Fuse_Drawing_Brush* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_Brush MasterBase__Fuse_Drawing_Brush__GetFullWeight(MasterBase__Fuse_Drawing_Brush* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_Brush collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_Brush();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_Brush>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Drawing_Brush__OnActive(MasterBase__Fuse_Drawing_Brush* __this)
{
}

void MasterBase__Fuse_Drawing_Brush__Register(MasterBase__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Drawing_Brush__Unregister(MasterBase__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Drawing_DynamicBrush__uType* MasterBase__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Drawing_DynamicBrush__uType), "Fuse.Animations.MasterBase<Fuse.Drawing.DynamicBrush>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Drawing_DynamicBrush__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Drawing_DynamicBrush__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Drawing_DynamicBrush__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Drawing_DynamicBrush__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Drawing_DynamicBrush, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Drawing_DynamicBrush, Handles));

    return type;
}

void MasterBase__Fuse_Drawing_DynamicBrush__Finalize(MasterBase__Fuse_Drawing_DynamicBrush* __this)
{
}

void MasterBase__Fuse_Drawing_DynamicBrush___ObjInit(MasterBase__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Drawing_DynamicBrush__Complete(MasterBase__Fuse_Drawing_DynamicBrush* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Drawing_DynamicBrush__get_PostLayout(MasterBase__Fuse_Drawing_DynamicBrush* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_DynamicBrush MasterBase__Fuse_Drawing_DynamicBrush__GetFullWeight(MasterBase__Fuse_Drawing_DynamicBrush* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_DynamicBrush collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_DynamicBrush();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_DynamicBrush>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Drawing_DynamicBrush__OnActive(MasterBase__Fuse_Drawing_DynamicBrush* __this)
{
}

void MasterBase__Fuse_Drawing_DynamicBrush__Register(MasterBase__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Drawing_DynamicBrush__Unregister(MasterBase__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Drawing_GradientStop__uType* MasterBase__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Drawing_GradientStop__uType), "Fuse.Animations.MasterBase<Fuse.Drawing.GradientStop>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Drawing_GradientStop__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Drawing_GradientStop__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Drawing_GradientStop__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Drawing_GradientStop__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Drawing_GradientStop, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Drawing_GradientStop, Handles));

    return type;
}

void MasterBase__Fuse_Drawing_GradientStop__Finalize(MasterBase__Fuse_Drawing_GradientStop* __this)
{
}

void MasterBase__Fuse_Drawing_GradientStop___ObjInit(MasterBase__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Drawing_GradientStop__Complete(MasterBase__Fuse_Drawing_GradientStop* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Drawing_GradientStop__get_PostLayout(MasterBase__Fuse_Drawing_GradientStop* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_GradientStop MasterBase__Fuse_Drawing_GradientStop__GetFullWeight(MasterBase__Fuse_Drawing_GradientStop* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_GradientStop collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_GradientStop();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_GradientStop>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Drawing_GradientStop__OnActive(MasterBase__Fuse_Drawing_GradientStop* __this)
{
}

void MasterBase__Fuse_Drawing_GradientStop__Register(MasterBase__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Drawing_GradientStop__Unregister(MasterBase__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Drawing_LinearGradient__uType* MasterBase__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Drawing_LinearGradient__uType), "Fuse.Animations.MasterBase<Fuse.Drawing.LinearGradient>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Drawing_LinearGradient__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Drawing_LinearGradient__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Drawing_LinearGradient__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Drawing_LinearGradient__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Drawing_LinearGradient, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Drawing_LinearGradient, Handles));

    return type;
}

void MasterBase__Fuse_Drawing_LinearGradient__Finalize(MasterBase__Fuse_Drawing_LinearGradient* __this)
{
}

void MasterBase__Fuse_Drawing_LinearGradient___ObjInit(MasterBase__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Drawing_LinearGradient__Complete(MasterBase__Fuse_Drawing_LinearGradient* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Drawing_LinearGradient__get_PostLayout(MasterBase__Fuse_Drawing_LinearGradient* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_LinearGradient MasterBase__Fuse_Drawing_LinearGradient__GetFullWeight(MasterBase__Fuse_Drawing_LinearGradient* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_LinearGradient collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_LinearGradient();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_LinearGradient>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Drawing_LinearGradient__OnActive(MasterBase__Fuse_Drawing_LinearGradient* __this)
{
}

void MasterBase__Fuse_Drawing_LinearGradient__Register(MasterBase__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Drawing_LinearGradient__Unregister(MasterBase__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Drawing_SolidColor__uType* MasterBase__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Drawing_SolidColor__uType), "Fuse.Animations.MasterBase<Fuse.Drawing.SolidColor>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Drawing_SolidColor__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Drawing_SolidColor__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Drawing_SolidColor__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Drawing_SolidColor__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Drawing_SolidColor, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Drawing_SolidColor, Handles));

    return type;
}

void MasterBase__Fuse_Drawing_SolidColor__Finalize(MasterBase__Fuse_Drawing_SolidColor* __this)
{
}

void MasterBase__Fuse_Drawing_SolidColor___ObjInit(MasterBase__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Drawing_SolidColor__Complete(MasterBase__Fuse_Drawing_SolidColor* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Drawing_SolidColor__get_PostLayout(MasterBase__Fuse_Drawing_SolidColor* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_SolidColor MasterBase__Fuse_Drawing_SolidColor__GetFullWeight(MasterBase__Fuse_Drawing_SolidColor* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_SolidColor collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_SolidColor();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_SolidColor>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Drawing_SolidColor__OnActive(MasterBase__Fuse_Drawing_SolidColor* __this)
{
}

void MasterBase__Fuse_Drawing_SolidColor__Register(MasterBase__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Drawing_SolidColor__Unregister(MasterBase__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Drawing_StaticBrush__uType* MasterBase__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Drawing_StaticBrush__uType), "Fuse.Animations.MasterBase<Fuse.Drawing.StaticBrush>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Drawing_StaticBrush__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Drawing_StaticBrush__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Drawing_StaticBrush__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Drawing_StaticBrush__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Drawing_StaticBrush, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Drawing_StaticBrush, Handles));

    return type;
}

void MasterBase__Fuse_Drawing_StaticBrush__Finalize(MasterBase__Fuse_Drawing_StaticBrush* __this)
{
}

void MasterBase__Fuse_Drawing_StaticBrush___ObjInit(MasterBase__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Drawing_StaticBrush__Complete(MasterBase__Fuse_Drawing_StaticBrush* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Drawing_StaticBrush__get_PostLayout(MasterBase__Fuse_Drawing_StaticBrush* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_StaticBrush MasterBase__Fuse_Drawing_StaticBrush__GetFullWeight(MasterBase__Fuse_Drawing_StaticBrush* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_StaticBrush collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_StaticBrush();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_StaticBrush>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Drawing_StaticBrush__OnActive(MasterBase__Fuse_Drawing_StaticBrush* __this)
{
}

void MasterBase__Fuse_Drawing_StaticBrush__Register(MasterBase__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Drawing_StaticBrush__Unregister(MasterBase__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_Alignment__uType* MasterBase__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_Alignment__uType), "Fuse.Animations.MasterBase<Fuse.Elements.Alignment>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_Alignment__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_Alignment__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_Alignment__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_Alignment__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_Alignment, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_Alignment, Handles));

    return type;
}

void MasterBase__Fuse_Elements_Alignment__Finalize(MasterBase__Fuse_Elements_Alignment* __this)
{
}

void MasterBase__Fuse_Elements_Alignment___ObjInit(MasterBase__Fuse_Elements_Alignment* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_Alignment__Complete(MasterBase__Fuse_Elements_Alignment* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_Alignment__get_PostLayout(MasterBase__Fuse_Elements_Alignment* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Alignment MasterBase__Fuse_Elements_Alignment__GetFullWeight(MasterBase__Fuse_Elements_Alignment* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Alignment collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Alignment();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Alignment>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_Alignment__OnActive(MasterBase__Fuse_Elements_Alignment* __this)
{
}

void MasterBase__Fuse_Elements_Alignment__Register(MasterBase__Fuse_Elements_Alignment* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_Alignment__Unregister(MasterBase__Fuse_Elements_Alignment* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_CachingMode__uType* MasterBase__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_CachingMode__uType), "Fuse.Animations.MasterBase<Fuse.Elements.CachingMode>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_CachingMode__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_CachingMode__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_CachingMode__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_CachingMode__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_CachingMode, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_CachingMode, Handles));

    return type;
}

void MasterBase__Fuse_Elements_CachingMode__Finalize(MasterBase__Fuse_Elements_CachingMode* __this)
{
}

void MasterBase__Fuse_Elements_CachingMode___ObjInit(MasterBase__Fuse_Elements_CachingMode* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_CachingMode__Complete(MasterBase__Fuse_Elements_CachingMode* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_CachingMode__get_PostLayout(MasterBase__Fuse_Elements_CachingMode* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_CachingMode MasterBase__Fuse_Elements_CachingMode__GetFullWeight(MasterBase__Fuse_Elements_CachingMode* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_CachingMode collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_CachingMode();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_CachingMode>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_CachingMode__OnActive(MasterBase__Fuse_Elements_CachingMode* __this)
{
}

void MasterBase__Fuse_Elements_CachingMode__Register(MasterBase__Fuse_Elements_CachingMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_CachingMode__Unregister(MasterBase__Fuse_Elements_CachingMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_Element__uType* MasterBase__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_Element__uType), "Fuse.Animations.MasterBase<Fuse.Elements.Element>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_Element__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_Element__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_Element__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_Element__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_Element, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_Element, Handles));

    return type;
}

void MasterBase__Fuse_Elements_Element__Finalize(MasterBase__Fuse_Elements_Element* __this)
{
}

void MasterBase__Fuse_Elements_Element___ObjInit(MasterBase__Fuse_Elements_Element* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Element___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_Element__Complete(MasterBase__Fuse_Elements_Element* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_Element__get_PostLayout(MasterBase__Fuse_Elements_Element* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Element MasterBase__Fuse_Elements_Element__GetFullWeight(MasterBase__Fuse_Elements_Element* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Element collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Element();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Element>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_Element__OnActive(MasterBase__Fuse_Elements_Element* __this)
{
}

void MasterBase__Fuse_Elements_Element__Register(MasterBase__Fuse_Elements_Element* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_Element__Unregister(MasterBase__Fuse_Elements_Element* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Element_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_HitTestMode__uType* MasterBase__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_HitTestMode__uType), "Fuse.Animations.MasterBase<Fuse.Elements.HitTestMode>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_HitTestMode__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_HitTestMode__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_HitTestMode__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_HitTestMode__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_HitTestMode, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_HitTestMode, Handles));

    return type;
}

void MasterBase__Fuse_Elements_HitTestMode__Finalize(MasterBase__Fuse_Elements_HitTestMode* __this)
{
}

void MasterBase__Fuse_Elements_HitTestMode___ObjInit(MasterBase__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_HitTestMode__Complete(MasterBase__Fuse_Elements_HitTestMode* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_HitTestMode__get_PostLayout(MasterBase__Fuse_Elements_HitTestMode* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_HitTestMode MasterBase__Fuse_Elements_HitTestMode__GetFullWeight(MasterBase__Fuse_Elements_HitTestMode* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_HitTestMode collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_HitTestMode();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_HitTestMode>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_HitTestMode__OnActive(MasterBase__Fuse_Elements_HitTestMode* __this)
{
}

void MasterBase__Fuse_Elements_HitTestMode__Register(MasterBase__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_HitTestMode__Unregister(MasterBase__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_SizeUnit__uType* MasterBase__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_SizeUnit__uType), "Fuse.Animations.MasterBase<Fuse.Elements.SizeUnit>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_SizeUnit__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_SizeUnit__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_SizeUnit__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_SizeUnit__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_SizeUnit, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_SizeUnit, Handles));

    return type;
}

void MasterBase__Fuse_Elements_SizeUnit__Finalize(MasterBase__Fuse_Elements_SizeUnit* __this)
{
}

void MasterBase__Fuse_Elements_SizeUnit___ObjInit(MasterBase__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_SizeUnit__Complete(MasterBase__Fuse_Elements_SizeUnit* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_SizeUnit__get_PostLayout(MasterBase__Fuse_Elements_SizeUnit* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_SizeUnit MasterBase__Fuse_Elements_SizeUnit__GetFullWeight(MasterBase__Fuse_Elements_SizeUnit* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_SizeUnit collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_SizeUnit();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_SizeUnit>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_SizeUnit__OnActive(MasterBase__Fuse_Elements_SizeUnit* __this)
{
}

void MasterBase__Fuse_Elements_SizeUnit__Register(MasterBase__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_SizeUnit__Unregister(MasterBase__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_StretchDirection__uType* MasterBase__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_StretchDirection__uType), "Fuse.Animations.MasterBase<Fuse.Elements.StretchDirection>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_StretchDirection__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_StretchDirection__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_StretchDirection__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_StretchDirection__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_StretchDirection, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_StretchDirection, Handles));

    return type;
}

void MasterBase__Fuse_Elements_StretchDirection__Finalize(MasterBase__Fuse_Elements_StretchDirection* __this)
{
}

void MasterBase__Fuse_Elements_StretchDirection___ObjInit(MasterBase__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_StretchDirection__Complete(MasterBase__Fuse_Elements_StretchDirection* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_StretchDirection__get_PostLayout(MasterBase__Fuse_Elements_StretchDirection* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchDirection MasterBase__Fuse_Elements_StretchDirection__GetFullWeight(MasterBase__Fuse_Elements_StretchDirection* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchDirection collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchDirection();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchDirection>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_StretchDirection__OnActive(MasterBase__Fuse_Elements_StretchDirection* __this)
{
}

void MasterBase__Fuse_Elements_StretchDirection__Register(MasterBase__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_StretchDirection__Unregister(MasterBase__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_StretchMode__uType* MasterBase__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_StretchMode__uType), "Fuse.Animations.MasterBase<Fuse.Elements.StretchMode>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_StretchMode__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_StretchMode__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_StretchMode__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_StretchMode__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_StretchMode, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_StretchMode, Handles));

    return type;
}

void MasterBase__Fuse_Elements_StretchMode__Finalize(MasterBase__Fuse_Elements_StretchMode* __this)
{
}

void MasterBase__Fuse_Elements_StretchMode___ObjInit(MasterBase__Fuse_Elements_StretchMode* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_StretchMode__Complete(MasterBase__Fuse_Elements_StretchMode* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_StretchMode__get_PostLayout(MasterBase__Fuse_Elements_StretchMode* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchMode MasterBase__Fuse_Elements_StretchMode__GetFullWeight(MasterBase__Fuse_Elements_StretchMode* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchMode collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchMode();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchMode>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_StretchMode__OnActive(MasterBase__Fuse_Elements_StretchMode* __this)
{
}

void MasterBase__Fuse_Elements_StretchMode__Register(MasterBase__Fuse_Elements_StretchMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_StretchMode__Unregister(MasterBase__Fuse_Elements_StretchMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_StretchSizing__uType* MasterBase__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_StretchSizing__uType), "Fuse.Animations.MasterBase<Fuse.Elements.StretchSizing>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_StretchSizing__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_StretchSizing__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_StretchSizing__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_StretchSizing__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_StretchSizing, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_StretchSizing, Handles));

    return type;
}

void MasterBase__Fuse_Elements_StretchSizing__Finalize(MasterBase__Fuse_Elements_StretchSizing* __this)
{
}

void MasterBase__Fuse_Elements_StretchSizing___ObjInit(MasterBase__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_StretchSizing__Complete(MasterBase__Fuse_Elements_StretchSizing* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_StretchSizing__get_PostLayout(MasterBase__Fuse_Elements_StretchSizing* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchSizing MasterBase__Fuse_Elements_StretchSizing__GetFullWeight(MasterBase__Fuse_Elements_StretchSizing* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchSizing collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchSizing();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_StretchSizing>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_StretchSizing__OnActive(MasterBase__Fuse_Elements_StretchSizing* __this)
{
}

void MasterBase__Fuse_Elements_StretchSizing__Register(MasterBase__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_StretchSizing__Unregister(MasterBase__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_TextAlignment__uType* MasterBase__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_TextAlignment__uType), "Fuse.Animations.MasterBase<Fuse.Elements.TextAlignment>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_TextAlignment__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_TextAlignment__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_TextAlignment__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_TextAlignment__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_TextAlignment, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_TextAlignment, Handles));

    return type;
}

void MasterBase__Fuse_Elements_TextAlignment__Finalize(MasterBase__Fuse_Elements_TextAlignment* __this)
{
}

void MasterBase__Fuse_Elements_TextAlignment___ObjInit(MasterBase__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_TextAlignment__Complete(MasterBase__Fuse_Elements_TextAlignment* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_TextAlignment__get_PostLayout(MasterBase__Fuse_Elements_TextAlignment* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextAlignment MasterBase__Fuse_Elements_TextAlignment__GetFullWeight(MasterBase__Fuse_Elements_TextAlignment* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextAlignment collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextAlignment();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextAlignment>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_TextAlignment__OnActive(MasterBase__Fuse_Elements_TextAlignment* __this)
{
}

void MasterBase__Fuse_Elements_TextAlignment__Register(MasterBase__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_TextAlignment__Unregister(MasterBase__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_TextWrapping__uType* MasterBase__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_TextWrapping__uType), "Fuse.Animations.MasterBase<Fuse.Elements.TextWrapping>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_TextWrapping__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_TextWrapping__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_TextWrapping__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_TextWrapping__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_TextWrapping, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_TextWrapping, Handles));

    return type;
}

void MasterBase__Fuse_Elements_TextWrapping__Finalize(MasterBase__Fuse_Elements_TextWrapping* __this)
{
}

void MasterBase__Fuse_Elements_TextWrapping___ObjInit(MasterBase__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_TextWrapping__Complete(MasterBase__Fuse_Elements_TextWrapping* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_TextWrapping__get_PostLayout(MasterBase__Fuse_Elements_TextWrapping* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextWrapping MasterBase__Fuse_Elements_TextWrapping__GetFullWeight(MasterBase__Fuse_Elements_TextWrapping* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextWrapping collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextWrapping();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextWrapping>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_TextWrapping__OnActive(MasterBase__Fuse_Elements_TextWrapping* __this)
{
}

void MasterBase__Fuse_Elements_TextWrapping__Register(MasterBase__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_TextWrapping__Unregister(MasterBase__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_Visibility__uType* MasterBase__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_Visibility__uType), "Fuse.Animations.MasterBase<Fuse.Elements.Visibility>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_Visibility__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_Visibility__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_Visibility__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_Visibility__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_Visibility, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_Visibility, Handles));

    return type;
}

void MasterBase__Fuse_Elements_Visibility__Finalize(MasterBase__Fuse_Elements_Visibility* __this)
{
}

void MasterBase__Fuse_Elements_Visibility___ObjInit(MasterBase__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_Visibility__Complete(MasterBase__Fuse_Elements_Visibility* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_Visibility__get_PostLayout(MasterBase__Fuse_Elements_Visibility* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility MasterBase__Fuse_Elements_Visibility__GetFullWeight(MasterBase__Fuse_Elements_Visibility* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_Visibility__OnActive(MasterBase__Fuse_Elements_Visibility* __this)
{
}

void MasterBase__Fuse_Elements_Visibility__Register(MasterBase__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_Visibility__Unregister(MasterBase__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Font__uType* MasterBase__Fuse_Font__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Font__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Font__uType), "Fuse.Animations.MasterBase<Fuse.Font>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Font__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Font__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Font__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Font__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Font, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Font, Handles));

    return type;
}

void MasterBase__Fuse_Font__Finalize(MasterBase__Fuse_Font* __this)
{
}

void MasterBase__Fuse_Font___ObjInit(MasterBase__Fuse_Font* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Font__Complete(MasterBase__Fuse_Font* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Font__get_PostLayout(MasterBase__Fuse_Font* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Font MasterBase__Fuse_Font__GetFullWeight(MasterBase__Fuse_Font* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Font collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Font();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Font* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Font*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Font*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Font*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Font>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Font__OnActive(MasterBase__Fuse_Font* __this)
{
}

void MasterBase__Fuse_Font__Register(MasterBase__Fuse_Font* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Font*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Font*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Font__Unregister(MasterBase__Fuse_Font* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Gestures_Edge__uType* MasterBase__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Gestures_Edge__uType), "Fuse.Animations.MasterBase<Fuse.Gestures.Edge>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Gestures_Edge__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Gestures_Edge__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Gestures_Edge__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Gestures_Edge__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Gestures_Edge, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Gestures_Edge, Handles));

    return type;
}

void MasterBase__Fuse_Gestures_Edge__Finalize(MasterBase__Fuse_Gestures_Edge* __this)
{
}

void MasterBase__Fuse_Gestures_Edge___ObjInit(MasterBase__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Gestures_Edge__Complete(MasterBase__Fuse_Gestures_Edge* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Gestures_Edge__get_PostLayout(MasterBase__Fuse_Gestures_Edge* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_Edge MasterBase__Fuse_Gestures_Edge__GetFullWeight(MasterBase__Fuse_Gestures_Edge* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_Edge collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_Edge();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_Edge>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Gestures_Edge__OnActive(MasterBase__Fuse_Gestures_Edge* __this)
{
}

void MasterBase__Fuse_Gestures_Edge__Register(MasterBase__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Gestures_Edge__Unregister(MasterBase__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Gestures_ScrollDirections__uType* MasterBase__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Gestures_ScrollDirections__uType), "Fuse.Animations.MasterBase<Fuse.Gestures.ScrollDirections>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Gestures_ScrollDirections__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Gestures_ScrollDirections__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Gestures_ScrollDirections__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Gestures_ScrollDirections__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Gestures_ScrollDirections, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Gestures_ScrollDirections, Handles));

    return type;
}

void MasterBase__Fuse_Gestures_ScrollDirections__Finalize(MasterBase__Fuse_Gestures_ScrollDirections* __this)
{
}

void MasterBase__Fuse_Gestures_ScrollDirections___ObjInit(MasterBase__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Gestures_ScrollDirections__Complete(MasterBase__Fuse_Gestures_ScrollDirections* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Gestures_ScrollDirections__get_PostLayout(MasterBase__Fuse_Gestures_ScrollDirections* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_ScrollDirections MasterBase__Fuse_Gestures_ScrollDirections__GetFullWeight(MasterBase__Fuse_Gestures_ScrollDirections* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_ScrollDirections collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_ScrollDirections();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_ScrollDirections>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Gestures_ScrollDirections__OnActive(MasterBase__Fuse_Gestures_ScrollDirections* __this)
{
}

void MasterBase__Fuse_Gestures_ScrollDirections__Register(MasterBase__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Gestures_ScrollDirections__Unregister(MasterBase__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Layouts_Dock__uType* MasterBase__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Layouts_Dock__uType), "Fuse.Animations.MasterBase<Fuse.Layouts.Dock>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Layouts_Dock__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Layouts_Dock__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Layouts_Dock__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Layouts_Dock__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Layouts_Dock, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Layouts_Dock, Handles));

    return type;
}

void MasterBase__Fuse_Layouts_Dock__Finalize(MasterBase__Fuse_Layouts_Dock* __this)
{
}

void MasterBase__Fuse_Layouts_Dock___ObjInit(MasterBase__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Layouts_Dock__Complete(MasterBase__Fuse_Layouts_Dock* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Layouts_Dock__get_PostLayout(MasterBase__Fuse_Layouts_Dock* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Dock MasterBase__Fuse_Layouts_Dock__GetFullWeight(MasterBase__Fuse_Layouts_Dock* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Dock collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Dock();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Dock>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Layouts_Dock__OnActive(MasterBase__Fuse_Layouts_Dock* __this)
{
}

void MasterBase__Fuse_Layouts_Dock__Register(MasterBase__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Layouts_Dock__Unregister(MasterBase__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Layouts_FlowDirection__uType* MasterBase__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Layouts_FlowDirection__uType), "Fuse.Animations.MasterBase<Fuse.Layouts.FlowDirection>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Layouts_FlowDirection__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Layouts_FlowDirection__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Layouts_FlowDirection__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Layouts_FlowDirection__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Layouts_FlowDirection, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Layouts_FlowDirection, Handles));

    return type;
}

void MasterBase__Fuse_Layouts_FlowDirection__Finalize(MasterBase__Fuse_Layouts_FlowDirection* __this)
{
}

void MasterBase__Fuse_Layouts_FlowDirection___ObjInit(MasterBase__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Layouts_FlowDirection__Complete(MasterBase__Fuse_Layouts_FlowDirection* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Layouts_FlowDirection__get_PostLayout(MasterBase__Fuse_Layouts_FlowDirection* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_FlowDirection MasterBase__Fuse_Layouts_FlowDirection__GetFullWeight(MasterBase__Fuse_Layouts_FlowDirection* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_FlowDirection collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_FlowDirection();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_FlowDirection>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Layouts_FlowDirection__OnActive(MasterBase__Fuse_Layouts_FlowDirection* __this)
{
}

void MasterBase__Fuse_Layouts_FlowDirection__Register(MasterBase__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Layouts_FlowDirection__Unregister(MasterBase__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Layouts_Metric__uType* MasterBase__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Layouts_Metric__uType), "Fuse.Animations.MasterBase<Fuse.Layouts.Metric>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Layouts_Metric__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Layouts_Metric__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Layouts_Metric__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Layouts_Metric__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Layouts_Metric, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Layouts_Metric, Handles));

    return type;
}

void MasterBase__Fuse_Layouts_Metric__Finalize(MasterBase__Fuse_Layouts_Metric* __this)
{
}

void MasterBase__Fuse_Layouts_Metric___ObjInit(MasterBase__Fuse_Layouts_Metric* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Layouts_Metric__Complete(MasterBase__Fuse_Layouts_Metric* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Layouts_Metric__get_PostLayout(MasterBase__Fuse_Layouts_Metric* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Metric MasterBase__Fuse_Layouts_Metric__GetFullWeight(MasterBase__Fuse_Layouts_Metric* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Metric collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Metric();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Metric>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Layouts_Metric__OnActive(MasterBase__Fuse_Layouts_Metric* __this)
{
}

void MasterBase__Fuse_Layouts_Metric__Register(MasterBase__Fuse_Layouts_Metric* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Layouts_Metric__Unregister(MasterBase__Fuse_Layouts_Metric* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Layouts_Orientation__uType* MasterBase__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Layouts_Orientation__uType), "Fuse.Animations.MasterBase<Fuse.Layouts.Orientation>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Layouts_Orientation__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Layouts_Orientation__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Layouts_Orientation__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Layouts_Orientation__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Layouts_Orientation, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Layouts_Orientation, Handles));

    return type;
}

void MasterBase__Fuse_Layouts_Orientation__Finalize(MasterBase__Fuse_Layouts_Orientation* __this)
{
}

void MasterBase__Fuse_Layouts_Orientation___ObjInit(MasterBase__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Layouts_Orientation__Complete(MasterBase__Fuse_Layouts_Orientation* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Layouts_Orientation__get_PostLayout(MasterBase__Fuse_Layouts_Orientation* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Orientation MasterBase__Fuse_Layouts_Orientation__GetFullWeight(MasterBase__Fuse_Layouts_Orientation* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Orientation collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Orientation();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Orientation>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Layouts_Orientation__OnActive(MasterBase__Fuse_Layouts_Orientation* __this)
{
}

void MasterBase__Fuse_Layouts_Orientation__Register(MasterBase__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Layouts_Orientation__Unregister(MasterBase__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Navigation_NavigationDirection__uType* MasterBase__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Navigation_NavigationDirection__uType), "Fuse.Animations.MasterBase<Fuse.Navigation.NavigationDirection>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Navigation_NavigationDirection__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Navigation_NavigationDirection__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Navigation_NavigationDirection__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Navigation_NavigationDirection__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Navigation_NavigationDirection, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Navigation_NavigationDirection, Handles));

    return type;
}

void MasterBase__Fuse_Navigation_NavigationDirection__Finalize(MasterBase__Fuse_Navigation_NavigationDirection* __this)
{
}

void MasterBase__Fuse_Navigation_NavigationDirection___ObjInit(MasterBase__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Navigation_NavigationDirection__Complete(MasterBase__Fuse_Navigation_NavigationDirection* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Navigation_NavigationDirection__get_PostLayout(MasterBase__Fuse_Navigation_NavigationDirection* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationDirection MasterBase__Fuse_Navigation_NavigationDirection__GetFullWeight(MasterBase__Fuse_Navigation_NavigationDirection* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationDirection collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationDirection();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationDirection>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Navigation_NavigationDirection__OnActive(MasterBase__Fuse_Navigation_NavigationDirection* __this)
{
}

void MasterBase__Fuse_Navigation_NavigationDirection__Register(MasterBase__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Navigation_NavigationDirection__Unregister(MasterBase__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Navigation_NavigationEdge__uType* MasterBase__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Navigation_NavigationEdge__uType), "Fuse.Animations.MasterBase<Fuse.Navigation.NavigationEdge>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Navigation_NavigationEdge__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Navigation_NavigationEdge__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Navigation_NavigationEdge__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Navigation_NavigationEdge__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Navigation_NavigationEdge, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Navigation_NavigationEdge, Handles));

    return type;
}

void MasterBase__Fuse_Navigation_NavigationEdge__Finalize(MasterBase__Fuse_Navigation_NavigationEdge* __this)
{
}

void MasterBase__Fuse_Navigation_NavigationEdge___ObjInit(MasterBase__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Navigation_NavigationEdge__Complete(MasterBase__Fuse_Navigation_NavigationEdge* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Navigation_NavigationEdge__get_PostLayout(MasterBase__Fuse_Navigation_NavigationEdge* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationEdge MasterBase__Fuse_Navigation_NavigationEdge__GetFullWeight(MasterBase__Fuse_Navigation_NavigationEdge* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationEdge collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationEdge();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationEdge>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Navigation_NavigationEdge__OnActive(MasterBase__Fuse_Navigation_NavigationEdge* __this)
{
}

void MasterBase__Fuse_Navigation_NavigationEdge__Register(MasterBase__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Navigation_NavigationEdge__Unregister(MasterBase__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Navigation_NavigationGotoMode__uType* MasterBase__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Animations.MasterBase<Fuse.Navigation.NavigationGotoMode>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Navigation_NavigationGotoMode__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Navigation_NavigationGotoMode__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Navigation_NavigationGotoMode__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Navigation_NavigationGotoMode__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Navigation_NavigationGotoMode, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Navigation_NavigationGotoMode, Handles));

    return type;
}

void MasterBase__Fuse_Navigation_NavigationGotoMode__Finalize(MasterBase__Fuse_Navigation_NavigationGotoMode* __this)
{
}

void MasterBase__Fuse_Navigation_NavigationGotoMode___ObjInit(MasterBase__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Navigation_NavigationGotoMode__Complete(MasterBase__Fuse_Navigation_NavigationGotoMode* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Navigation_NavigationGotoMode__get_PostLayout(MasterBase__Fuse_Navigation_NavigationGotoMode* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationGotoMode MasterBase__Fuse_Navigation_NavigationGotoMode__GetFullWeight(MasterBase__Fuse_Navigation_NavigationGotoMode* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationGotoMode collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationGotoMode();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationGotoMode>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Navigation_NavigationGotoMode__OnActive(MasterBase__Fuse_Navigation_NavigationGotoMode* __this)
{
}

void MasterBase__Fuse_Navigation_NavigationGotoMode__Register(MasterBase__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Navigation_NavigationGotoMode__Unregister(MasterBase__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Navigation_SnapTo__uType* MasterBase__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Navigation_SnapTo__uType), "Fuse.Animations.MasterBase<Fuse.Navigation.SnapTo>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Navigation_SnapTo__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Navigation_SnapTo__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Navigation_SnapTo__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Navigation_SnapTo__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Navigation_SnapTo, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Navigation_SnapTo, Handles));

    return type;
}

void MasterBase__Fuse_Navigation_SnapTo__Finalize(MasterBase__Fuse_Navigation_SnapTo* __this)
{
}

void MasterBase__Fuse_Navigation_SnapTo___ObjInit(MasterBase__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Navigation_SnapTo__Complete(MasterBase__Fuse_Navigation_SnapTo* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Navigation_SnapTo__get_PostLayout(MasterBase__Fuse_Navigation_SnapTo* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SnapTo MasterBase__Fuse_Navigation_SnapTo__GetFullWeight(MasterBase__Fuse_Navigation_SnapTo* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SnapTo collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SnapTo();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SnapTo>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Navigation_SnapTo__OnActive(MasterBase__Fuse_Navigation_SnapTo* __this)
{
}

void MasterBase__Fuse_Navigation_SnapTo__Register(MasterBase__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Navigation_SnapTo__Unregister(MasterBase__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Navigation_SwipeDirection__uType* MasterBase__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Navigation_SwipeDirection__uType), "Fuse.Animations.MasterBase<Fuse.Navigation.SwipeDirection>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Navigation_SwipeDirection__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Navigation_SwipeDirection__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Navigation_SwipeDirection__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Navigation_SwipeDirection__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Navigation_SwipeDirection, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Navigation_SwipeDirection, Handles));

    return type;
}

void MasterBase__Fuse_Navigation_SwipeDirection__Finalize(MasterBase__Fuse_Navigation_SwipeDirection* __this)
{
}

void MasterBase__Fuse_Navigation_SwipeDirection___ObjInit(MasterBase__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Navigation_SwipeDirection__Complete(MasterBase__Fuse_Navigation_SwipeDirection* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Navigation_SwipeDirection__get_PostLayout(MasterBase__Fuse_Navigation_SwipeDirection* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SwipeDirection MasterBase__Fuse_Navigation_SwipeDirection__GetFullWeight(MasterBase__Fuse_Navigation_SwipeDirection* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SwipeDirection collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SwipeDirection();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SwipeDirection>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Navigation_SwipeDirection__OnActive(MasterBase__Fuse_Navigation_SwipeDirection* __this)
{
}

void MasterBase__Fuse_Navigation_SwipeDirection__Register(MasterBase__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Navigation_SwipeDirection__Unregister(MasterBase__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Navigation_SwipeEnds__uType* MasterBase__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Navigation_SwipeEnds__uType), "Fuse.Animations.MasterBase<Fuse.Navigation.SwipeEnds>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Navigation_SwipeEnds__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Navigation_SwipeEnds__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Navigation_SwipeEnds__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Navigation_SwipeEnds__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Navigation_SwipeEnds, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Navigation_SwipeEnds, Handles));

    return type;
}

void MasterBase__Fuse_Navigation_SwipeEnds__Finalize(MasterBase__Fuse_Navigation_SwipeEnds* __this)
{
}

void MasterBase__Fuse_Navigation_SwipeEnds___ObjInit(MasterBase__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Navigation_SwipeEnds__Complete(MasterBase__Fuse_Navigation_SwipeEnds* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Navigation_SwipeEnds__get_PostLayout(MasterBase__Fuse_Navigation_SwipeEnds* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SwipeEnds MasterBase__Fuse_Navigation_SwipeEnds__GetFullWeight(MasterBase__Fuse_Navigation_SwipeEnds* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SwipeEnds collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SwipeEnds();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_SwipeEnds>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Navigation_SwipeEnds__OnActive(MasterBase__Fuse_Navigation_SwipeEnds* __this)
{
}

void MasterBase__Fuse_Navigation_SwipeEnds__Register(MasterBase__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Navigation_SwipeEnds__Unregister(MasterBase__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Node__uType* MasterBase__Fuse_Node__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Node__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Node__uType), "Fuse.Animations.MasterBase<Fuse.Node>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Node__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Node__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Node__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Node__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Node, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Node, Handles));

    return type;
}

void MasterBase__Fuse_Node__Finalize(MasterBase__Fuse_Node* __this)
{
}

void MasterBase__Fuse_Node___ObjInit(MasterBase__Fuse_Node* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Node___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Node__Complete(MasterBase__Fuse_Node* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Node_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Node__get_PostLayout(MasterBase__Fuse_Node* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Node MasterBase__Fuse_Node__GetFullWeight(MasterBase__Fuse_Node* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Node collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Node();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Node_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Node* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Node_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Node*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Node*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Node*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Node>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Node__OnActive(MasterBase__Fuse_Node* __this)
{
}

void MasterBase__Fuse_Node__Register(MasterBase__Fuse_Node* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Node* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Node_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Node*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Node*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Node_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Node_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Node__Unregister(MasterBase__Fuse_Node* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Node* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Node_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Resources_ImageSource__uType* MasterBase__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Resources_ImageSource__uType), "Fuse.Animations.MasterBase<Fuse.Resources.ImageSource>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Resources_ImageSource__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Resources_ImageSource__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Resources_ImageSource__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Resources_ImageSource__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Resources_ImageSource, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Resources_ImageSource, Handles));

    return type;
}

void MasterBase__Fuse_Resources_ImageSource__Finalize(MasterBase__Fuse_Resources_ImageSource* __this)
{
}

void MasterBase__Fuse_Resources_ImageSource___ObjInit(MasterBase__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Resources_ImageSource__Complete(MasterBase__Fuse_Resources_ImageSource* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Resources_ImageSource__get_PostLayout(MasterBase__Fuse_Resources_ImageSource* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Resources_ImageSource MasterBase__Fuse_Resources_ImageSource__GetFullWeight(MasterBase__Fuse_Resources_ImageSource* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Resources_ImageSource collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Resources_ImageSource();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Resources_ImageSource>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Resources_ImageSource__OnActive(MasterBase__Fuse_Resources_ImageSource* __this)
{
}

void MasterBase__Fuse_Resources_ImageSource__Register(MasterBase__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Resources_ImageSource__Unregister(MasterBase__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Transform__uType* MasterBase__Fuse_Transform__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Transform__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Transform__uType), "Fuse.Animations.MasterBase<Fuse.Transform>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Transform__Finalize;
    type->__fp_get_PostLayout = MasterBase__Fuse_Transform__get_PostLayout;
    type->__fp_OnActive = MasterBase__Fuse_Transform__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Transform__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Transform__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Transform, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Transform, Handles));

    return type;
}

void MasterBase__Fuse_Transform__Finalize(MasterBase__Fuse_Transform* __this)
{
}

void MasterBase__Fuse_Transform___ObjInit(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Transform__Complete(MasterBase__Fuse_Transform* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Transform__get_PostLayout(MasterBase__Fuse_Transform* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform MasterBase__Fuse_Transform__GetFullWeight(MasterBase__Fuse_Transform* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Transform__OnActive(MasterBase__Fuse_Transform* __this)
{
}

void MasterBase__Fuse_Transform__Register(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Transform__Unregister(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Triggers_Actions_TriggerDirection__uType* MasterBase__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Animations.MasterBase<Fuse.Triggers.Actions.TriggerDirection>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Triggers_Actions_TriggerDirection__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Triggers_Actions_TriggerDirection__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Triggers_Actions_TriggerDirection__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Triggers_Actions_TriggerDirection__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Triggers_Actions_TriggerDirection, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Triggers_Actions_TriggerDirection, Handles));

    return type;
}

void MasterBase__Fuse_Triggers_Actions_TriggerDirection__Finalize(MasterBase__Fuse_Triggers_Actions_TriggerDirection* __this)
{
}

void MasterBase__Fuse_Triggers_Actions_TriggerDirection___ObjInit(MasterBase__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Triggers_Actions_TriggerDirection__Complete(MasterBase__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Triggers_Actions_TriggerDirection__get_PostLayout(MasterBase__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_Actions_TriggerDirection MasterBase__Fuse_Triggers_Actions_TriggerDirection__GetFullWeight(MasterBase__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_Actions_TriggerDirection collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_Actions_TriggerDirection();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_Actions_TriggerDirection>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Triggers_Actions_TriggerDirection__OnActive(MasterBase__Fuse_Triggers_Actions_TriggerDirection* __this)
{
}

void MasterBase__Fuse_Triggers_Actions_TriggerDirection__Register(MasterBase__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Triggers_Actions_TriggerDirection__Unregister(MasterBase__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Triggers_State__uType* MasterBase__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Triggers_State__uType), "Fuse.Animations.MasterBase<Fuse.Triggers.State>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Triggers_State__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Triggers_State__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Triggers_State__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Triggers_State__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Triggers_State, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Triggers_State, Handles));

    return type;
}

void MasterBase__Fuse_Triggers_State__Finalize(MasterBase__Fuse_Triggers_State* __this)
{
}

void MasterBase__Fuse_Triggers_State___ObjInit(MasterBase__Fuse_Triggers_State* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Triggers_State__Complete(MasterBase__Fuse_Triggers_State* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Triggers_State__get_PostLayout(MasterBase__Fuse_Triggers_State* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_State MasterBase__Fuse_Triggers_State__GetFullWeight(MasterBase__Fuse_Triggers_State* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_State collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_State();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_State>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Triggers_State__OnActive(MasterBase__Fuse_Triggers_State* __this)
{
}

void MasterBase__Fuse_Triggers_State__Register(MasterBase__Fuse_Triggers_State* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Triggers_State__Unregister(MasterBase__Fuse_Triggers_State* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Triggers_StateTransition__uType* MasterBase__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Triggers_StateTransition__uType), "Fuse.Animations.MasterBase<Fuse.Triggers.StateTransition>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Triggers_StateTransition__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Triggers_StateTransition__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Triggers_StateTransition__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Triggers_StateTransition__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Triggers_StateTransition, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Triggers_StateTransition, Handles));

    return type;
}

void MasterBase__Fuse_Triggers_StateTransition__Finalize(MasterBase__Fuse_Triggers_StateTransition* __this)
{
}

void MasterBase__Fuse_Triggers_StateTransition___ObjInit(MasterBase__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Triggers_StateTransition__Complete(MasterBase__Fuse_Triggers_StateTransition* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Triggers_StateTransition__get_PostLayout(MasterBase__Fuse_Triggers_StateTransition* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_StateTransition MasterBase__Fuse_Triggers_StateTransition__GetFullWeight(MasterBase__Fuse_Triggers_StateTransition* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_StateTransition collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_StateTransition();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_StateTransition>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Triggers_StateTransition__OnActive(MasterBase__Fuse_Triggers_StateTransition* __this)
{
}

void MasterBase__Fuse_Triggers_StateTransition__Register(MasterBase__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Triggers_StateTransition__Unregister(MasterBase__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Triggers_TriggerBypassMode__uType* MasterBase__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Animations.MasterBase<Fuse.Triggers.TriggerBypassMode>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Triggers_TriggerBypassMode__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Triggers_TriggerBypassMode__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Triggers_TriggerBypassMode__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Triggers_TriggerBypassMode__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Triggers_TriggerBypassMode, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Triggers_TriggerBypassMode, Handles));

    return type;
}

void MasterBase__Fuse_Triggers_TriggerBypassMode__Finalize(MasterBase__Fuse_Triggers_TriggerBypassMode* __this)
{
}

void MasterBase__Fuse_Triggers_TriggerBypassMode___ObjInit(MasterBase__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Triggers_TriggerBypassMode__Complete(MasterBase__Fuse_Triggers_TriggerBypassMode* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Triggers_TriggerBypassMode__get_PostLayout(MasterBase__Fuse_Triggers_TriggerBypassMode* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_TriggerBypassMode MasterBase__Fuse_Triggers_TriggerBypassMode__GetFullWeight(MasterBase__Fuse_Triggers_TriggerBypassMode* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_TriggerBypassMode collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_TriggerBypassMode();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_TriggerBypassMode>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Triggers_TriggerBypassMode__OnActive(MasterBase__Fuse_Triggers_TriggerBypassMode* __this)
{
}

void MasterBase__Fuse_Triggers_TriggerBypassMode__Register(MasterBase__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Triggers_TriggerBypassMode__Unregister(MasterBase__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__int__uType* MasterBase__int__typeof()
{
    static ::uStaticStrong<MasterBase__int__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__int__uType*)::uAllocClassType(sizeof(MasterBase__int__uType), "Fuse.Animations.MasterBase<int>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__int__Finalize;
    type->__fp_OnActive = MasterBase__int__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__int__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__int__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__int, _mixerBase),
        "Handles", offsetof(MasterBase__int, Handles));

    return type;
}

void MasterBase__int__Finalize(MasterBase__int* __this)
{
}

void MasterBase__int___ObjInit(MasterBase__int* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__int__Complete(MasterBase__int* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__int__get_PostLayout(MasterBase__int* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__int MasterBase__int__GetFullWeight(MasterBase__int* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__int collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__int();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__int* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__int*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__int*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__int*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__int>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__int__OnActive(MasterBase__int* __this)
{
}

void MasterBase__int__Register(MasterBase__int* __this, ::app::Fuse::Animations::MixerHandle__int* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__int*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__int*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__int__Unregister(MasterBase__int* __this, ::app::Fuse::Animations::MixerHandle__int* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__int2__uType* MasterBase__int2__typeof()
{
    static ::uStaticStrong<MasterBase__int2__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__int2__uType*)::uAllocClassType(sizeof(MasterBase__int2__uType), "Fuse.Animations.MasterBase<int2>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__int2__Finalize;
    type->__fp_OnActive = MasterBase__int2__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__int2__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__int2__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__int2, _mixerBase),
        "Handles", offsetof(MasterBase__int2, Handles));

    return type;
}

void MasterBase__int2__Finalize(MasterBase__int2* __this)
{
}

void MasterBase__int2___ObjInit(MasterBase__int2* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__int2__Complete(MasterBase__int2* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__int2__get_PostLayout(MasterBase__int2* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__int2 MasterBase__int2__GetFullWeight(MasterBase__int2* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__int2 collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__int2();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__int2* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__int2*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__int2*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__int2*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__int2>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__int2__OnActive(MasterBase__int2* __this)
{
}

void MasterBase__int2__Register(MasterBase__int2* __this, ::app::Fuse::Animations::MixerHandle__int2* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__int2*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__int2*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__int2__Unregister(MasterBase__int2* __this, ::app::Fuse::Animations::MixerHandle__int2* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__int3__uType* MasterBase__int3__typeof()
{
    static ::uStaticStrong<MasterBase__int3__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__int3__uType*)::uAllocClassType(sizeof(MasterBase__int3__uType), "Fuse.Animations.MasterBase<int3>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__int3__Finalize;
    type->__fp_OnActive = MasterBase__int3__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__int3__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__int3__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__int3, _mixerBase),
        "Handles", offsetof(MasterBase__int3, Handles));

    return type;
}

void MasterBase__int3__Finalize(MasterBase__int3* __this)
{
}

void MasterBase__int3___ObjInit(MasterBase__int3* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__int3__Complete(MasterBase__int3* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__int3__get_PostLayout(MasterBase__int3* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__int3 MasterBase__int3__GetFullWeight(MasterBase__int3* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__int3 collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__int3();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__int3* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__int3*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__int3*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__int3*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__int3>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__int3__OnActive(MasterBase__int3* __this)
{
}

void MasterBase__int3__Register(MasterBase__int3* __this, ::app::Fuse::Animations::MixerHandle__int3* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__int3*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__int3*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__int3__Unregister(MasterBase__int3* __this, ::app::Fuse::Animations::MixerHandle__int3* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__int4__uType* MasterBase__int4__typeof()
{
    static ::uStaticStrong<MasterBase__int4__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__int4__uType*)::uAllocClassType(sizeof(MasterBase__int4__uType), "Fuse.Animations.MasterBase<int4>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__int4__Finalize;
    type->__fp_OnActive = MasterBase__int4__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__int4__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__int4__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__int4, _mixerBase),
        "Handles", offsetof(MasterBase__int4, Handles));

    return type;
}

void MasterBase__int4__Finalize(MasterBase__int4* __this)
{
}

void MasterBase__int4___ObjInit(MasterBase__int4* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__int4__Complete(MasterBase__int4* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__int4__get_PostLayout(MasterBase__int4* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__int4 MasterBase__int4__GetFullWeight(MasterBase__int4* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__int4 collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__int4();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__int4* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__int4*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__int4*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__int4*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__int4>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__int4__OnActive(MasterBase__int4* __this)
{
}

void MasterBase__int4__Register(MasterBase__int4* __this, ::app::Fuse::Animations::MixerHandle__int4* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__int4*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__int4*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__int4__Unregister(MasterBase__int4* __this, ::app::Fuse::Animations::MixerHandle__int4* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__long__uType* MasterBase__long__typeof()
{
    static ::uStaticStrong<MasterBase__long__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__long__uType*)::uAllocClassType(sizeof(MasterBase__long__uType), "Fuse.Animations.MasterBase<long>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__long__Finalize;
    type->__fp_OnActive = MasterBase__long__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__long__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__long__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__long, _mixerBase),
        "Handles", offsetof(MasterBase__long, Handles));

    return type;
}

void MasterBase__long__Finalize(MasterBase__long* __this)
{
}

void MasterBase__long___ObjInit(MasterBase__long* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__long__Complete(MasterBase__long* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__long__get_PostLayout(MasterBase__long* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__long MasterBase__long__GetFullWeight(MasterBase__long* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__long collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__long();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__long* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__long*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__long*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__long*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__long>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__long__OnActive(MasterBase__long* __this)
{
}

void MasterBase__long__Register(MasterBase__long* __this, ::app::Fuse::Animations::MixerHandle__long* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__long*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__long*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__long__Unregister(MasterBase__long* __this, ::app::Fuse::Animations::MixerHandle__long* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__object__uType* MasterBase__object__typeof()
{
    static ::uStaticStrong<MasterBase__object__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__object__uType*)::uAllocClassType(sizeof(MasterBase__object__uType), "Fuse.Animations.MasterBase<object>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__object__Finalize;
    type->__fp_OnActive = MasterBase__object__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__object__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__object__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__object, _mixerBase),
        "Handles", offsetof(MasterBase__object, Handles));

    return type;
}

void MasterBase__object__Finalize(MasterBase__object* __this)
{
}

void MasterBase__object___ObjInit(MasterBase__object* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__object__Complete(MasterBase__object* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__object__get_PostLayout(MasterBase__object* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__object MasterBase__object__GetFullWeight(MasterBase__object* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__object collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__object();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__object* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__object*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__object*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__object*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__object>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__object__OnActive(MasterBase__object* __this)
{
}

void MasterBase__object__Register(MasterBase__object* __this, ::app::Fuse::Animations::MixerHandle__object* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__object*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__object*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__object__Unregister(MasterBase__object* __this, ::app::Fuse::Animations::MixerHandle__object* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__short__uType* MasterBase__short__typeof()
{
    static ::uStaticStrong<MasterBase__short__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__short__uType*)::uAllocClassType(sizeof(MasterBase__short__uType), "Fuse.Animations.MasterBase<short>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__short__Finalize;
    type->__fp_OnActive = MasterBase__short__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__short__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__short__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__short, _mixerBase),
        "Handles", offsetof(MasterBase__short, Handles));

    return type;
}

void MasterBase__short__Finalize(MasterBase__short* __this)
{
}

void MasterBase__short___ObjInit(MasterBase__short* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__short__Complete(MasterBase__short* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__short__get_PostLayout(MasterBase__short* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__short MasterBase__short__GetFullWeight(MasterBase__short* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__short collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__short();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__short* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__short*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__short*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__short*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__short>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__short__OnActive(MasterBase__short* __this)
{
}

void MasterBase__short__Register(MasterBase__short* __this, ::app::Fuse::Animations::MixerHandle__short* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__short*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__short*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__short__Unregister(MasterBase__short* __this, ::app::Fuse::Animations::MixerHandle__short* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__string__uType* MasterBase__string__typeof()
{
    static ::uStaticStrong<MasterBase__string__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__string__uType*)::uAllocClassType(sizeof(MasterBase__string__uType), "Fuse.Animations.MasterBase<string>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__string__Finalize;
    type->__fp_OnActive = MasterBase__string__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__string__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__string__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__string, _mixerBase),
        "Handles", offsetof(MasterBase__string, Handles));

    return type;
}

void MasterBase__string__Finalize(MasterBase__string* __this)
{
}

void MasterBase__string___ObjInit(MasterBase__string* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__string__Complete(MasterBase__string* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__string__get_PostLayout(MasterBase__string* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__string MasterBase__string__GetFullWeight(MasterBase__string* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__string collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__string();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__string* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__string*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__string*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__string*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__string>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__string__OnActive(MasterBase__string* __this)
{
}

void MasterBase__string__Register(MasterBase__string* __this, ::app::Fuse::Animations::MixerHandle__string* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__string*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__string*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__string__Unregister(MasterBase__string* __this, ::app::Fuse::Animations::MixerHandle__string* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Uno_EventArgs__uType* MasterBase__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<MasterBase__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Uno_EventArgs__uType*)::uAllocClassType(sizeof(MasterBase__Uno_EventArgs__uType), "Fuse.Animations.MasterBase<Uno.EventArgs>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Uno_EventArgs__Finalize;
    type->__fp_OnActive = MasterBase__Uno_EventArgs__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Uno_EventArgs__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Uno_EventArgs__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Uno_EventArgs, _mixerBase),
        "Handles", offsetof(MasterBase__Uno_EventArgs, Handles));

    return type;
}

void MasterBase__Uno_EventArgs__Finalize(MasterBase__Uno_EventArgs* __this)
{
}

void MasterBase__Uno_EventArgs___ObjInit(MasterBase__Uno_EventArgs* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Uno_EventArgs__Complete(MasterBase__Uno_EventArgs* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Uno_EventArgs__get_PostLayout(MasterBase__Uno_EventArgs* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Uno_EventArgs MasterBase__Uno_EventArgs__GetFullWeight(MasterBase__Uno_EventArgs* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_EventArgs collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_EventArgs();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_EventArgs*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_EventArgs*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_EventArgs*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_EventArgs>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Uno_EventArgs__OnActive(MasterBase__Uno_EventArgs* __this)
{
}

void MasterBase__Uno_EventArgs__Register(MasterBase__Uno_EventArgs* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_EventArgs*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_EventArgs*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Uno_EventArgs__Unregister(MasterBase__Uno_EventArgs* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Uno_Platform_iOS_StatusBarStyle__uType* MasterBase__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<MasterBase__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(MasterBase__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Animations.MasterBase<Uno.Platform.iOS.StatusBarStyle>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Uno_Platform_iOS_StatusBarStyle__Finalize;
    type->__fp_OnActive = MasterBase__Uno_Platform_iOS_StatusBarStyle__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Uno_Platform_iOS_StatusBarStyle__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Uno_Platform_iOS_StatusBarStyle__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Uno_Platform_iOS_StatusBarStyle, _mixerBase),
        "Handles", offsetof(MasterBase__Uno_Platform_iOS_StatusBarStyle, Handles));

    return type;
}

void MasterBase__Uno_Platform_iOS_StatusBarStyle__Finalize(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this)
{
}

void MasterBase__Uno_Platform_iOS_StatusBarStyle___ObjInit(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Uno_Platform_iOS_StatusBarStyle__Complete(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Uno_Platform_iOS_StatusBarStyle__get_PostLayout(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle MasterBase__Uno_Platform_iOS_StatusBarStyle__GetFullWeight(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Uno_Platform_iOS_StatusBarStyle__OnActive(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this)
{
}

void MasterBase__Uno_Platform_iOS_StatusBarStyle__Register(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Uno_Platform_iOS_StatusBarStyle__Unregister(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Uno_UX_FileSource__uType* MasterBase__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<MasterBase__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(MasterBase__Uno_UX_FileSource__uType), "Fuse.Animations.MasterBase<Uno.UX.FileSource>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Uno_UX_FileSource__Finalize;
    type->__fp_OnActive = MasterBase__Uno_UX_FileSource__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Uno_UX_FileSource__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Uno_UX_FileSource__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Uno_UX_FileSource, _mixerBase),
        "Handles", offsetof(MasterBase__Uno_UX_FileSource, Handles));

    return type;
}

void MasterBase__Uno_UX_FileSource__Finalize(MasterBase__Uno_UX_FileSource* __this)
{
}

void MasterBase__Uno_UX_FileSource___ObjInit(MasterBase__Uno_UX_FileSource* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Uno_UX_FileSource__Complete(MasterBase__Uno_UX_FileSource* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Uno_UX_FileSource__get_PostLayout(MasterBase__Uno_UX_FileSource* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Uno_UX_FileSource MasterBase__Uno_UX_FileSource__GetFullWeight(MasterBase__Uno_UX_FileSource* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_UX_FileSource collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_UX_FileSource();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_1(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_1(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_UX_FileSource>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Uno_UX_FileSource__OnActive(MasterBase__Uno_UX_FileSource* __this)
{
}

void MasterBase__Uno_UX_FileSource__Register(MasterBase__Uno_UX_FileSource* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Uno_UX_FileSource__Unregister(MasterBase__Uno_UX_FileSource* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*>(__this->Handles)->Remove(handle);
}

}}}
