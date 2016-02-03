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
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Exception.h>
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

MixerHandle__bool__uType* MixerHandle__bool__typeof()
{
    static ::uStaticStrong<MixerHandle__bool__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__bool__uType*)::uAllocClassType(sizeof(MixerHandle__bool__uType), "Fuse.Animations.MixerHandle<bool>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__bool__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, bool, float))MixerHandle__bool__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__bool__typeof(), offsetof(MixerHandle__bool__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__bool, Master));

    return type;
}

void MixerHandle__bool___ObjInit(MixerHandle__bool* __this, ::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->Register(__this);
}

bool MixerHandle__bool__get_HasValue(MixerHandle__bool* __this)
{
    return __this->_hasValue;
}

int MixerHandle__bool__get_MixOp(MixerHandle__bool* __this)
{
    return __this->_MixOp;
}

int MixerHandle__bool__get_Priority(MixerHandle__bool* __this)
{
    return __this->_Priority;
}

bool MixerHandle__bool__get_RestValue(MixerHandle__bool* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->RestValue();
}

MixerHandle__bool* MixerHandle__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority)
{
    MixerHandle__bool* inst = (MixerHandle__bool*)::uAllocObject(sizeof(MixerHandle__bool), MixerHandle__bool__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__bool__Set(MixerHandle__bool* __this, bool value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__bool__set_MixOp(MixerHandle__bool* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__bool__set_Priority(MixerHandle__bool* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__bool__Unregister(MixerHandle__bool* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__char__uType* MixerHandle__char__typeof()
{
    static ::uStaticStrong<MixerHandle__char__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__char__uType*)::uAllocClassType(sizeof(MixerHandle__char__uType), "Fuse.Animations.MixerHandle<char>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__char__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::uChar, float))MixerHandle__char__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__char__typeof(), offsetof(MixerHandle__char__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__char, Master));

    return type;
}

void MixerHandle__char___ObjInit(MixerHandle__char* __this, ::app::Fuse::Animations::MasterBase__char* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__char*>(__this->Master)->Register(__this);
}

bool MixerHandle__char__get_HasValue(MixerHandle__char* __this)
{
    return __this->_hasValue;
}

int MixerHandle__char__get_MixOp(MixerHandle__char* __this)
{
    return __this->_MixOp;
}

int MixerHandle__char__get_Priority(MixerHandle__char* __this)
{
    return __this->_Priority;
}

::uChar MixerHandle__char__get_RestValue(MixerHandle__char* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__char*>(__this->Master)->RestValue();
}

MixerHandle__char* MixerHandle__char__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__char* master, int mode, int priority)
{
    MixerHandle__char* inst = (MixerHandle__char*)::uAllocObject(sizeof(MixerHandle__char), MixerHandle__char__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__char__Set(MixerHandle__char* __this, ::uChar value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__char*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__char__set_MixOp(MixerHandle__char* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__char__set_Priority(MixerHandle__char* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__char__Unregister(MixerHandle__char* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__char*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__char*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__double__uType* MixerHandle__double__typeof()
{
    static ::uStaticStrong<MixerHandle__double__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__double__uType*)::uAllocClassType(sizeof(MixerHandle__double__uType), "Fuse.Animations.MixerHandle<double>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__double__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, double, float))MixerHandle__double__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__double__typeof(), offsetof(MixerHandle__double__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__double, Master));

    return type;
}

void MixerHandle__double___ObjInit(MixerHandle__double* __this, ::app::Fuse::Animations::MasterBase__double* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__double*>(__this->Master)->Register(__this);
}

bool MixerHandle__double__get_HasValue(MixerHandle__double* __this)
{
    return __this->_hasValue;
}

int MixerHandle__double__get_MixOp(MixerHandle__double* __this)
{
    return __this->_MixOp;
}

int MixerHandle__double__get_Priority(MixerHandle__double* __this)
{
    return __this->_Priority;
}

double MixerHandle__double__get_RestValue(MixerHandle__double* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__double*>(__this->Master)->RestValue();
}

MixerHandle__double* MixerHandle__double__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__double* master, int mode, int priority)
{
    MixerHandle__double* inst = (MixerHandle__double*)::uAllocObject(sizeof(MixerHandle__double), MixerHandle__double__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__double__Set(MixerHandle__double* __this, double value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__double*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__double__set_MixOp(MixerHandle__double* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__double__set_Priority(MixerHandle__double* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__double__Unregister(MixerHandle__double* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__double*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__double*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__float__uType* MixerHandle__float__typeof()
{
    static ::uStaticStrong<MixerHandle__float__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__float__uType*)::uAllocClassType(sizeof(MixerHandle__float__uType), "Fuse.Animations.MixerHandle<float>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__float__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, float, float))MixerHandle__float__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__float__typeof(), offsetof(MixerHandle__float__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__float, Master));

    return type;
}

void MixerHandle__float___ObjInit(MixerHandle__float* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->Register(__this);
}

bool MixerHandle__float__get_HasValue(MixerHandle__float* __this)
{
    return __this->_hasValue;
}

int MixerHandle__float__get_MixOp(MixerHandle__float* __this)
{
    return __this->_MixOp;
}

int MixerHandle__float__get_Priority(MixerHandle__float* __this)
{
    return __this->_Priority;
}

float MixerHandle__float__get_RestValue(MixerHandle__float* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->RestValue();
}

MixerHandle__float* MixerHandle__float__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority)
{
    MixerHandle__float* inst = (MixerHandle__float*)::uAllocObject(sizeof(MixerHandle__float), MixerHandle__float__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__float__Set(MixerHandle__float* __this, float value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__float__set_MixOp(MixerHandle__float* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__float__set_Priority(MixerHandle__float* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__float__Unregister(MixerHandle__float* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__float2__uType* MixerHandle__float2__typeof()
{
    static ::uStaticStrong<MixerHandle__float2__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__float2__uType*)::uAllocClassType(sizeof(MixerHandle__float2__uType), "Fuse.Animations.MixerHandle<float2>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__float2__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::Float2, float))MixerHandle__float2__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__float2__typeof(), offsetof(MixerHandle__float2__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__float2, Master));

    return type;
}

void MixerHandle__float2___ObjInit(MixerHandle__float2* __this, ::app::Fuse::Animations::MasterBase__float2* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__float2*>(__this->Master)->Register(__this);
}

bool MixerHandle__float2__get_HasValue(MixerHandle__float2* __this)
{
    return __this->_hasValue;
}

int MixerHandle__float2__get_MixOp(MixerHandle__float2* __this)
{
    return __this->_MixOp;
}

int MixerHandle__float2__get_Priority(MixerHandle__float2* __this)
{
    return __this->_Priority;
}

::app::Uno::Float2 MixerHandle__float2__get_RestValue(MixerHandle__float2* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__float2*>(__this->Master)->RestValue();
}

MixerHandle__float2* MixerHandle__float2__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float2* master, int mode, int priority)
{
    MixerHandle__float2* inst = (MixerHandle__float2*)::uAllocObject(sizeof(MixerHandle__float2), MixerHandle__float2__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__float2__Set(MixerHandle__float2* __this, ::app::Uno::Float2 value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float2*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__float2__set_MixOp(MixerHandle__float2* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__float2__set_Priority(MixerHandle__float2* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__float2__Unregister(MixerHandle__float2* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__float2*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float2*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__float3__uType* MixerHandle__float3__typeof()
{
    static ::uStaticStrong<MixerHandle__float3__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__float3__uType*)::uAllocClassType(sizeof(MixerHandle__float3__uType), "Fuse.Animations.MixerHandle<float3>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__float3__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::Float3, float))MixerHandle__float3__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__float3__typeof(), offsetof(MixerHandle__float3__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__float3, Master));

    return type;
}

void MixerHandle__float3___ObjInit(MixerHandle__float3* __this, ::app::Fuse::Animations::MasterBase__float3* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__float3*>(__this->Master)->Register(__this);
}

bool MixerHandle__float3__get_HasValue(MixerHandle__float3* __this)
{
    return __this->_hasValue;
}

int MixerHandle__float3__get_MixOp(MixerHandle__float3* __this)
{
    return __this->_MixOp;
}

int MixerHandle__float3__get_Priority(MixerHandle__float3* __this)
{
    return __this->_Priority;
}

::app::Uno::Float3 MixerHandle__float3__get_RestValue(MixerHandle__float3* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__float3*>(__this->Master)->RestValue();
}

MixerHandle__float3* MixerHandle__float3__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float3* master, int mode, int priority)
{
    MixerHandle__float3* inst = (MixerHandle__float3*)::uAllocObject(sizeof(MixerHandle__float3), MixerHandle__float3__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__float3__Set(MixerHandle__float3* __this, ::app::Uno::Float3 value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float3*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__float3__set_MixOp(MixerHandle__float3* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__float3__set_Priority(MixerHandle__float3* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__float3__Unregister(MixerHandle__float3* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__float3*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float3*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__float4__uType* MixerHandle__float4__typeof()
{
    static ::uStaticStrong<MixerHandle__float4__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__float4__uType*)::uAllocClassType(sizeof(MixerHandle__float4__uType), "Fuse.Animations.MixerHandle<float4>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__float4__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::Float4, float))MixerHandle__float4__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__float4__typeof(), offsetof(MixerHandle__float4__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__float4, Master));

    return type;
}

void MixerHandle__float4___ObjInit(MixerHandle__float4* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->Register(__this);
}

bool MixerHandle__float4__get_HasValue(MixerHandle__float4* __this)
{
    return __this->_hasValue;
}

int MixerHandle__float4__get_MixOp(MixerHandle__float4* __this)
{
    return __this->_MixOp;
}

int MixerHandle__float4__get_Priority(MixerHandle__float4* __this)
{
    return __this->_Priority;
}

::app::Uno::Float4 MixerHandle__float4__get_RestValue(MixerHandle__float4* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->RestValue();
}

MixerHandle__float4* MixerHandle__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority)
{
    MixerHandle__float4* inst = (MixerHandle__float4*)::uAllocObject(sizeof(MixerHandle__float4), MixerHandle__float4__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__float4__Set(MixerHandle__float4* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__float4__set_MixOp(MixerHandle__float4* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__float4__set_Priority(MixerHandle__float4* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__float4__Unregister(MixerHandle__float4* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Animations_AnimationVariant__uType* MixerHandle__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Animations_AnimationVariant__uType), "Fuse.Animations.MixerHandle<Fuse.Animations.AnimationVariant>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Animations_AnimationVariant__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Animations_AnimationVariant__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_AnimationVariant__typeof(), offsetof(MixerHandle__Fuse_Animations_AnimationVariant__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Animations_AnimationVariant, Master));

    return type;
}

void MixerHandle__Fuse_Animations_AnimationVariant___ObjInit(MixerHandle__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Animations_AnimationVariant__get_HasValue(MixerHandle__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Animations_AnimationVariant__get_MixOp(MixerHandle__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Animations_AnimationVariant__get_Priority(MixerHandle__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Animations_AnimationVariant__get_RestValue(MixerHandle__Fuse_Animations_AnimationVariant* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Animations_AnimationVariant* MixerHandle__Fuse_Animations_AnimationVariant__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant* master, int mode, int priority)
{
    MixerHandle__Fuse_Animations_AnimationVariant* inst = (MixerHandle__Fuse_Animations_AnimationVariant*)::uAllocObject(sizeof(MixerHandle__Fuse_Animations_AnimationVariant), MixerHandle__Fuse_Animations_AnimationVariant__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Animations_AnimationVariant__Set(MixerHandle__Fuse_Animations_AnimationVariant* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Animations_AnimationVariant__set_MixOp(MixerHandle__Fuse_Animations_AnimationVariant* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Animations_AnimationVariant__set_Priority(MixerHandle__Fuse_Animations_AnimationVariant* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Animations_AnimationVariant__Unregister(MixerHandle__Fuse_Animations_AnimationVariant* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Animations_Easing__uType* MixerHandle__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Animations_Easing__uType), "Fuse.Animations.MixerHandle<Fuse.Animations.Easing>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Animations_Easing__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Animations_Easing__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_Easing__typeof(), offsetof(MixerHandle__Fuse_Animations_Easing__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Animations_Easing, Master));

    return type;
}

void MixerHandle__Fuse_Animations_Easing___ObjInit(MixerHandle__Fuse_Animations_Easing* __this, ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Animations_Easing__get_HasValue(MixerHandle__Fuse_Animations_Easing* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Animations_Easing__get_MixOp(MixerHandle__Fuse_Animations_Easing* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Animations_Easing__get_Priority(MixerHandle__Fuse_Animations_Easing* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Animations_Easing__get_RestValue(MixerHandle__Fuse_Animations_Easing* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Animations_Easing* MixerHandle__Fuse_Animations_Easing__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing* master, int mode, int priority)
{
    MixerHandle__Fuse_Animations_Easing* inst = (MixerHandle__Fuse_Animations_Easing*)::uAllocObject(sizeof(MixerHandle__Fuse_Animations_Easing), MixerHandle__Fuse_Animations_Easing__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Animations_Easing__Set(MixerHandle__Fuse_Animations_Easing* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Animations_Easing__set_MixOp(MixerHandle__Fuse_Animations_Easing* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Animations_Easing__set_Priority(MixerHandle__Fuse_Animations_Easing* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Animations_Easing__Unregister(MixerHandle__Fuse_Animations_Easing* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_Easing*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Animations_KeyframeInterpolation__uType* MixerHandle__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Animations_KeyframeInterpolation__uType), "Fuse.Animations.MixerHandle<Fuse.Animations.KeyframeInterpolation>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Animations_KeyframeInterpolation__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Animations_KeyframeInterpolation__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_KeyframeInterpolation__typeof(), offsetof(MixerHandle__Fuse_Animations_KeyframeInterpolation__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Animations_KeyframeInterpolation, Master));

    return type;
}

void MixerHandle__Fuse_Animations_KeyframeInterpolation___ObjInit(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this, ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Animations_KeyframeInterpolation__get_HasValue(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Animations_KeyframeInterpolation__get_MixOp(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Animations_KeyframeInterpolation__get_Priority(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Animations_KeyframeInterpolation__get_RestValue(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Animations_KeyframeInterpolation* MixerHandle__Fuse_Animations_KeyframeInterpolation__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation* master, int mode, int priority)
{
    MixerHandle__Fuse_Animations_KeyframeInterpolation* inst = (MixerHandle__Fuse_Animations_KeyframeInterpolation*)::uAllocObject(sizeof(MixerHandle__Fuse_Animations_KeyframeInterpolation), MixerHandle__Fuse_Animations_KeyframeInterpolation__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Animations_KeyframeInterpolation__Set(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Animations_KeyframeInterpolation__set_MixOp(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Animations_KeyframeInterpolation__set_Priority(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Animations_KeyframeInterpolation__Unregister(MixerHandle__Fuse_Animations_KeyframeInterpolation* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_KeyframeInterpolation*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Animations_MixOp__uType* MixerHandle__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Animations_MixOp__uType), "Fuse.Animations.MixerHandle<Fuse.Animations.MixOp>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Animations_MixOp__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Animations_MixOp__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Animations_MixOp__typeof(), offsetof(MixerHandle__Fuse_Animations_MixOp__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Animations_MixOp, Master));

    return type;
}

void MixerHandle__Fuse_Animations_MixOp___ObjInit(MixerHandle__Fuse_Animations_MixOp* __this, ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Animations_MixOp__get_HasValue(MixerHandle__Fuse_Animations_MixOp* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Animations_MixOp__get_MixOp(MixerHandle__Fuse_Animations_MixOp* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Animations_MixOp__get_Priority(MixerHandle__Fuse_Animations_MixOp* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Animations_MixOp__get_RestValue(MixerHandle__Fuse_Animations_MixOp* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Animations_MixOp* MixerHandle__Fuse_Animations_MixOp__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp* master, int mode, int priority)
{
    MixerHandle__Fuse_Animations_MixOp* inst = (MixerHandle__Fuse_Animations_MixOp*)::uAllocObject(sizeof(MixerHandle__Fuse_Animations_MixOp), MixerHandle__Fuse_Animations_MixOp__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Animations_MixOp__Set(MixerHandle__Fuse_Animations_MixOp* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Animations_MixOp__set_MixOp(MixerHandle__Fuse_Animations_MixOp* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Animations_MixOp__set_Priority(MixerHandle__Fuse_Animations_MixOp* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Animations_MixOp__Unregister(MixerHandle__Fuse_Animations_MixOp* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Animations_MixOp*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Drawing_BlendMode__uType* MixerHandle__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Drawing_BlendMode__uType), "Fuse.Animations.MixerHandle<Fuse.Drawing.BlendMode>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Drawing_BlendMode__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Drawing_BlendMode__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_BlendMode__typeof(), offsetof(MixerHandle__Fuse_Drawing_BlendMode__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Drawing_BlendMode, Master));

    return type;
}

void MixerHandle__Fuse_Drawing_BlendMode___ObjInit(MixerHandle__Fuse_Drawing_BlendMode* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Drawing_BlendMode__get_HasValue(MixerHandle__Fuse_Drawing_BlendMode* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Drawing_BlendMode__get_MixOp(MixerHandle__Fuse_Drawing_BlendMode* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Drawing_BlendMode__get_Priority(MixerHandle__Fuse_Drawing_BlendMode* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Drawing_BlendMode__get_RestValue(MixerHandle__Fuse_Drawing_BlendMode* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Drawing_BlendMode* MixerHandle__Fuse_Drawing_BlendMode__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode* master, int mode, int priority)
{
    MixerHandle__Fuse_Drawing_BlendMode* inst = (MixerHandle__Fuse_Drawing_BlendMode*)::uAllocObject(sizeof(MixerHandle__Fuse_Drawing_BlendMode), MixerHandle__Fuse_Drawing_BlendMode__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Drawing_BlendMode__Set(MixerHandle__Fuse_Drawing_BlendMode* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Drawing_BlendMode__set_MixOp(MixerHandle__Fuse_Drawing_BlendMode* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Drawing_BlendMode__set_Priority(MixerHandle__Fuse_Drawing_BlendMode* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Drawing_BlendMode__Unregister(MixerHandle__Fuse_Drawing_BlendMode* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_BlendMode*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Drawing_Brush__uType* MixerHandle__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Drawing_Brush__uType), "Fuse.Animations.MixerHandle<Fuse.Drawing.Brush>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Drawing_Brush__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Drawing::Brush*, float))MixerHandle__Fuse_Drawing_Brush__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_Brush__typeof(), offsetof(MixerHandle__Fuse_Drawing_Brush__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Drawing_Brush, Master),
        "Value", offsetof(MixerHandle__Fuse_Drawing_Brush, Value));

    return type;
}

void MixerHandle__Fuse_Drawing_Brush___ObjInit(MixerHandle__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Drawing_Brush__get_HasValue(MixerHandle__Fuse_Drawing_Brush* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Drawing_Brush__get_MixOp(MixerHandle__Fuse_Drawing_Brush* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Drawing_Brush__get_Priority(MixerHandle__Fuse_Drawing_Brush* __this)
{
    return __this->_Priority;
}

::app::Fuse::Drawing::Brush* MixerHandle__Fuse_Drawing_Brush__get_RestValue(MixerHandle__Fuse_Drawing_Brush* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Drawing_Brush* MixerHandle__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush* master, int mode, int priority)
{
    MixerHandle__Fuse_Drawing_Brush* inst = (MixerHandle__Fuse_Drawing_Brush*)::uAllocObject(sizeof(MixerHandle__Fuse_Drawing_Brush), MixerHandle__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Drawing_Brush__Set(MixerHandle__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Drawing_Brush__set_MixOp(MixerHandle__Fuse_Drawing_Brush* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Drawing_Brush__set_Priority(MixerHandle__Fuse_Drawing_Brush* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Drawing_Brush__Unregister(MixerHandle__Fuse_Drawing_Brush* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Drawing_DynamicBrush__uType* MixerHandle__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Drawing_DynamicBrush__uType), "Fuse.Animations.MixerHandle<Fuse.Drawing.DynamicBrush>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Drawing_DynamicBrush__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Drawing::DynamicBrush*, float))MixerHandle__Fuse_Drawing_DynamicBrush__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_DynamicBrush__typeof(), offsetof(MixerHandle__Fuse_Drawing_DynamicBrush__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Drawing_DynamicBrush, Master),
        "Value", offsetof(MixerHandle__Fuse_Drawing_DynamicBrush, Value));

    return type;
}

void MixerHandle__Fuse_Drawing_DynamicBrush___ObjInit(MixerHandle__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Drawing_DynamicBrush__get_HasValue(MixerHandle__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Drawing_DynamicBrush__get_MixOp(MixerHandle__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Drawing_DynamicBrush__get_Priority(MixerHandle__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_Priority;
}

::app::Fuse::Drawing::DynamicBrush* MixerHandle__Fuse_Drawing_DynamicBrush__get_RestValue(MixerHandle__Fuse_Drawing_DynamicBrush* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Drawing_DynamicBrush* MixerHandle__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush* master, int mode, int priority)
{
    MixerHandle__Fuse_Drawing_DynamicBrush* inst = (MixerHandle__Fuse_Drawing_DynamicBrush*)::uAllocObject(sizeof(MixerHandle__Fuse_Drawing_DynamicBrush), MixerHandle__Fuse_Drawing_DynamicBrush__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Drawing_DynamicBrush__Set(MixerHandle__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Drawing_DynamicBrush__set_MixOp(MixerHandle__Fuse_Drawing_DynamicBrush* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Drawing_DynamicBrush__set_Priority(MixerHandle__Fuse_Drawing_DynamicBrush* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Drawing_DynamicBrush__Unregister(MixerHandle__Fuse_Drawing_DynamicBrush* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Drawing_GradientStop__uType* MixerHandle__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Drawing_GradientStop__uType), "Fuse.Animations.MixerHandle<Fuse.Drawing.GradientStop>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Drawing_GradientStop__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Drawing::GradientStop*, float))MixerHandle__Fuse_Drawing_GradientStop__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_GradientStop__typeof(), offsetof(MixerHandle__Fuse_Drawing_GradientStop__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Drawing_GradientStop, Master),
        "Value", offsetof(MixerHandle__Fuse_Drawing_GradientStop, Value));

    return type;
}

void MixerHandle__Fuse_Drawing_GradientStop___ObjInit(MixerHandle__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Drawing_GradientStop__get_HasValue(MixerHandle__Fuse_Drawing_GradientStop* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Drawing_GradientStop__get_MixOp(MixerHandle__Fuse_Drawing_GradientStop* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Drawing_GradientStop__get_Priority(MixerHandle__Fuse_Drawing_GradientStop* __this)
{
    return __this->_Priority;
}

::app::Fuse::Drawing::GradientStop* MixerHandle__Fuse_Drawing_GradientStop__get_RestValue(MixerHandle__Fuse_Drawing_GradientStop* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Drawing_GradientStop* MixerHandle__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop* master, int mode, int priority)
{
    MixerHandle__Fuse_Drawing_GradientStop* inst = (MixerHandle__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(MixerHandle__Fuse_Drawing_GradientStop), MixerHandle__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Drawing_GradientStop__Set(MixerHandle__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Drawing_GradientStop__set_MixOp(MixerHandle__Fuse_Drawing_GradientStop* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Drawing_GradientStop__set_Priority(MixerHandle__Fuse_Drawing_GradientStop* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Drawing_GradientStop__Unregister(MixerHandle__Fuse_Drawing_GradientStop* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Drawing_LinearGradient__uType* MixerHandle__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Drawing_LinearGradient__uType), "Fuse.Animations.MixerHandle<Fuse.Drawing.LinearGradient>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Drawing_LinearGradient__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Drawing::LinearGradient*, float))MixerHandle__Fuse_Drawing_LinearGradient__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_LinearGradient__typeof(), offsetof(MixerHandle__Fuse_Drawing_LinearGradient__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Drawing_LinearGradient, Master),
        "Value", offsetof(MixerHandle__Fuse_Drawing_LinearGradient, Value));

    return type;
}

void MixerHandle__Fuse_Drawing_LinearGradient___ObjInit(MixerHandle__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Drawing_LinearGradient__get_HasValue(MixerHandle__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Drawing_LinearGradient__get_MixOp(MixerHandle__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Drawing_LinearGradient__get_Priority(MixerHandle__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_Priority;
}

::app::Fuse::Drawing::LinearGradient* MixerHandle__Fuse_Drawing_LinearGradient__get_RestValue(MixerHandle__Fuse_Drawing_LinearGradient* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Drawing_LinearGradient* MixerHandle__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient* master, int mode, int priority)
{
    MixerHandle__Fuse_Drawing_LinearGradient* inst = (MixerHandle__Fuse_Drawing_LinearGradient*)::uAllocObject(sizeof(MixerHandle__Fuse_Drawing_LinearGradient), MixerHandle__Fuse_Drawing_LinearGradient__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Drawing_LinearGradient__Set(MixerHandle__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Drawing_LinearGradient__set_MixOp(MixerHandle__Fuse_Drawing_LinearGradient* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Drawing_LinearGradient__set_Priority(MixerHandle__Fuse_Drawing_LinearGradient* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Drawing_LinearGradient__Unregister(MixerHandle__Fuse_Drawing_LinearGradient* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Drawing_SolidColor__uType* MixerHandle__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Drawing_SolidColor__uType), "Fuse.Animations.MixerHandle<Fuse.Drawing.SolidColor>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Drawing_SolidColor__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Drawing::SolidColor*, float))MixerHandle__Fuse_Drawing_SolidColor__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_SolidColor__typeof(), offsetof(MixerHandle__Fuse_Drawing_SolidColor__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Drawing_SolidColor, Master),
        "Value", offsetof(MixerHandle__Fuse_Drawing_SolidColor, Value));

    return type;
}

void MixerHandle__Fuse_Drawing_SolidColor___ObjInit(MixerHandle__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Drawing_SolidColor__get_HasValue(MixerHandle__Fuse_Drawing_SolidColor* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Drawing_SolidColor__get_MixOp(MixerHandle__Fuse_Drawing_SolidColor* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Drawing_SolidColor__get_Priority(MixerHandle__Fuse_Drawing_SolidColor* __this)
{
    return __this->_Priority;
}

::app::Fuse::Drawing::SolidColor* MixerHandle__Fuse_Drawing_SolidColor__get_RestValue(MixerHandle__Fuse_Drawing_SolidColor* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Drawing_SolidColor* MixerHandle__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor* master, int mode, int priority)
{
    MixerHandle__Fuse_Drawing_SolidColor* inst = (MixerHandle__Fuse_Drawing_SolidColor*)::uAllocObject(sizeof(MixerHandle__Fuse_Drawing_SolidColor), MixerHandle__Fuse_Drawing_SolidColor__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Drawing_SolidColor__Set(MixerHandle__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Drawing_SolidColor__set_MixOp(MixerHandle__Fuse_Drawing_SolidColor* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Drawing_SolidColor__set_Priority(MixerHandle__Fuse_Drawing_SolidColor* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Drawing_SolidColor__Unregister(MixerHandle__Fuse_Drawing_SolidColor* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Drawing_StaticBrush__uType* MixerHandle__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Drawing_StaticBrush__uType), "Fuse.Animations.MixerHandle<Fuse.Drawing.StaticBrush>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Drawing_StaticBrush__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Drawing::StaticBrush*, float))MixerHandle__Fuse_Drawing_StaticBrush__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_StaticBrush__typeof(), offsetof(MixerHandle__Fuse_Drawing_StaticBrush__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Drawing_StaticBrush, Master),
        "Value", offsetof(MixerHandle__Fuse_Drawing_StaticBrush, Value));

    return type;
}

void MixerHandle__Fuse_Drawing_StaticBrush___ObjInit(MixerHandle__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Drawing_StaticBrush__get_HasValue(MixerHandle__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Drawing_StaticBrush__get_MixOp(MixerHandle__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Drawing_StaticBrush__get_Priority(MixerHandle__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_Priority;
}

::app::Fuse::Drawing::StaticBrush* MixerHandle__Fuse_Drawing_StaticBrush__get_RestValue(MixerHandle__Fuse_Drawing_StaticBrush* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Drawing_StaticBrush* MixerHandle__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush* master, int mode, int priority)
{
    MixerHandle__Fuse_Drawing_StaticBrush* inst = (MixerHandle__Fuse_Drawing_StaticBrush*)::uAllocObject(sizeof(MixerHandle__Fuse_Drawing_StaticBrush), MixerHandle__Fuse_Drawing_StaticBrush__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Drawing_StaticBrush__Set(MixerHandle__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Drawing_StaticBrush__set_MixOp(MixerHandle__Fuse_Drawing_StaticBrush* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Drawing_StaticBrush__set_Priority(MixerHandle__Fuse_Drawing_StaticBrush* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Drawing_StaticBrush__Unregister(MixerHandle__Fuse_Drawing_StaticBrush* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_StaticBrush*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_Alignment__uType* MixerHandle__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_Alignment__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.Alignment>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_Alignment__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_Alignment__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Alignment__typeof(), offsetof(MixerHandle__Fuse_Elements_Alignment__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_Alignment, Master));

    return type;
}

void MixerHandle__Fuse_Elements_Alignment___ObjInit(MixerHandle__Fuse_Elements_Alignment* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_Alignment__get_HasValue(MixerHandle__Fuse_Elements_Alignment* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_Alignment__get_MixOp(MixerHandle__Fuse_Elements_Alignment* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_Alignment__get_Priority(MixerHandle__Fuse_Elements_Alignment* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_Alignment__get_RestValue(MixerHandle__Fuse_Elements_Alignment* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_Alignment* MixerHandle__Fuse_Elements_Alignment__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_Alignment* inst = (MixerHandle__Fuse_Elements_Alignment*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_Alignment), MixerHandle__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_Alignment__Set(MixerHandle__Fuse_Elements_Alignment* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_Alignment__set_MixOp(MixerHandle__Fuse_Elements_Alignment* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_Alignment__set_Priority(MixerHandle__Fuse_Elements_Alignment* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_Alignment__Unregister(MixerHandle__Fuse_Elements_Alignment* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Alignment*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_CachingMode__uType* MixerHandle__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_CachingMode__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.CachingMode>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_CachingMode__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_CachingMode__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_CachingMode__typeof(), offsetof(MixerHandle__Fuse_Elements_CachingMode__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_CachingMode, Master));

    return type;
}

void MixerHandle__Fuse_Elements_CachingMode___ObjInit(MixerHandle__Fuse_Elements_CachingMode* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_CachingMode__get_HasValue(MixerHandle__Fuse_Elements_CachingMode* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_CachingMode__get_MixOp(MixerHandle__Fuse_Elements_CachingMode* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_CachingMode__get_Priority(MixerHandle__Fuse_Elements_CachingMode* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_CachingMode__get_RestValue(MixerHandle__Fuse_Elements_CachingMode* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_CachingMode* MixerHandle__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_CachingMode* inst = (MixerHandle__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_CachingMode), MixerHandle__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_CachingMode__Set(MixerHandle__Fuse_Elements_CachingMode* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_CachingMode__set_MixOp(MixerHandle__Fuse_Elements_CachingMode* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_CachingMode__set_Priority(MixerHandle__Fuse_Elements_CachingMode* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_CachingMode__Unregister(MixerHandle__Fuse_Elements_CachingMode* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_CachingMode*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_Element__uType* MixerHandle__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_Element__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.Element>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_Element__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Elements::Element*, float))MixerHandle__Fuse_Elements_Element__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Element__typeof(), offsetof(MixerHandle__Fuse_Elements_Element__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_Element, Master),
        "Value", offsetof(MixerHandle__Fuse_Elements_Element, Value));

    return type;
}

void MixerHandle__Fuse_Elements_Element___ObjInit(MixerHandle__Fuse_Elements_Element* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_Element__get_HasValue(MixerHandle__Fuse_Elements_Element* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_Element__get_MixOp(MixerHandle__Fuse_Elements_Element* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_Element__get_Priority(MixerHandle__Fuse_Elements_Element* __this)
{
    return __this->_Priority;
}

::app::Fuse::Elements::Element* MixerHandle__Fuse_Elements_Element__get_RestValue(MixerHandle__Fuse_Elements_Element* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_Element* MixerHandle__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_Element* inst = (MixerHandle__Fuse_Elements_Element*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_Element), MixerHandle__Fuse_Elements_Element__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_Element__Set(MixerHandle__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_Element__set_MixOp(MixerHandle__Fuse_Elements_Element* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_Element__set_Priority(MixerHandle__Fuse_Elements_Element* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_Element__Unregister(MixerHandle__Fuse_Elements_Element* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_HitTestMode__uType* MixerHandle__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_HitTestMode__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.HitTestMode>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_HitTestMode__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_HitTestMode__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_HitTestMode__typeof(), offsetof(MixerHandle__Fuse_Elements_HitTestMode__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_HitTestMode, Master));

    return type;
}

void MixerHandle__Fuse_Elements_HitTestMode___ObjInit(MixerHandle__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_HitTestMode__get_HasValue(MixerHandle__Fuse_Elements_HitTestMode* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_HitTestMode__get_MixOp(MixerHandle__Fuse_Elements_HitTestMode* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_HitTestMode__get_Priority(MixerHandle__Fuse_Elements_HitTestMode* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_HitTestMode__get_RestValue(MixerHandle__Fuse_Elements_HitTestMode* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_HitTestMode* MixerHandle__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_HitTestMode* inst = (MixerHandle__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_HitTestMode), MixerHandle__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_HitTestMode__Set(MixerHandle__Fuse_Elements_HitTestMode* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_HitTestMode__set_MixOp(MixerHandle__Fuse_Elements_HitTestMode* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_HitTestMode__set_Priority(MixerHandle__Fuse_Elements_HitTestMode* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_HitTestMode__Unregister(MixerHandle__Fuse_Elements_HitTestMode* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_HitTestMode*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_SizeUnit__uType* MixerHandle__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_SizeUnit__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.SizeUnit>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_SizeUnit__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_SizeUnit__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_SizeUnit__typeof(), offsetof(MixerHandle__Fuse_Elements_SizeUnit__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_SizeUnit, Master));

    return type;
}

void MixerHandle__Fuse_Elements_SizeUnit___ObjInit(MixerHandle__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_SizeUnit__get_HasValue(MixerHandle__Fuse_Elements_SizeUnit* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_SizeUnit__get_MixOp(MixerHandle__Fuse_Elements_SizeUnit* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_SizeUnit__get_Priority(MixerHandle__Fuse_Elements_SizeUnit* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_SizeUnit__get_RestValue(MixerHandle__Fuse_Elements_SizeUnit* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_SizeUnit* MixerHandle__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_SizeUnit* inst = (MixerHandle__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_SizeUnit), MixerHandle__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_SizeUnit__Set(MixerHandle__Fuse_Elements_SizeUnit* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_SizeUnit__set_MixOp(MixerHandle__Fuse_Elements_SizeUnit* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_SizeUnit__set_Priority(MixerHandle__Fuse_Elements_SizeUnit* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_SizeUnit__Unregister(MixerHandle__Fuse_Elements_SizeUnit* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_StretchDirection__uType* MixerHandle__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_StretchDirection__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.StretchDirection>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_StretchDirection__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_StretchDirection__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchDirection__typeof(), offsetof(MixerHandle__Fuse_Elements_StretchDirection__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_StretchDirection, Master));

    return type;
}

void MixerHandle__Fuse_Elements_StretchDirection___ObjInit(MixerHandle__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_StretchDirection__get_HasValue(MixerHandle__Fuse_Elements_StretchDirection* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_StretchDirection__get_MixOp(MixerHandle__Fuse_Elements_StretchDirection* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_StretchDirection__get_Priority(MixerHandle__Fuse_Elements_StretchDirection* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_StretchDirection__get_RestValue(MixerHandle__Fuse_Elements_StretchDirection* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_StretchDirection* MixerHandle__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_StretchDirection* inst = (MixerHandle__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_StretchDirection), MixerHandle__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_StretchDirection__Set(MixerHandle__Fuse_Elements_StretchDirection* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_StretchDirection__set_MixOp(MixerHandle__Fuse_Elements_StretchDirection* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_StretchDirection__set_Priority(MixerHandle__Fuse_Elements_StretchDirection* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_StretchDirection__Unregister(MixerHandle__Fuse_Elements_StretchDirection* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchDirection*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_StretchMode__uType* MixerHandle__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_StretchMode__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.StretchMode>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_StretchMode__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_StretchMode__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchMode__typeof(), offsetof(MixerHandle__Fuse_Elements_StretchMode__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_StretchMode, Master));

    return type;
}

void MixerHandle__Fuse_Elements_StretchMode___ObjInit(MixerHandle__Fuse_Elements_StretchMode* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_StretchMode__get_HasValue(MixerHandle__Fuse_Elements_StretchMode* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_StretchMode__get_MixOp(MixerHandle__Fuse_Elements_StretchMode* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_StretchMode__get_Priority(MixerHandle__Fuse_Elements_StretchMode* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_StretchMode__get_RestValue(MixerHandle__Fuse_Elements_StretchMode* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_StretchMode* MixerHandle__Fuse_Elements_StretchMode__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_StretchMode* inst = (MixerHandle__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_StretchMode), MixerHandle__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_StretchMode__Set(MixerHandle__Fuse_Elements_StretchMode* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_StretchMode__set_MixOp(MixerHandle__Fuse_Elements_StretchMode* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_StretchMode__set_Priority(MixerHandle__Fuse_Elements_StretchMode* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_StretchMode__Unregister(MixerHandle__Fuse_Elements_StretchMode* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchMode*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_StretchSizing__uType* MixerHandle__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_StretchSizing__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.StretchSizing>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_StretchSizing__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_StretchSizing__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_StretchSizing__typeof(), offsetof(MixerHandle__Fuse_Elements_StretchSizing__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_StretchSizing, Master));

    return type;
}

void MixerHandle__Fuse_Elements_StretchSizing___ObjInit(MixerHandle__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_StretchSizing__get_HasValue(MixerHandle__Fuse_Elements_StretchSizing* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_StretchSizing__get_MixOp(MixerHandle__Fuse_Elements_StretchSizing* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_StretchSizing__get_Priority(MixerHandle__Fuse_Elements_StretchSizing* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_StretchSizing__get_RestValue(MixerHandle__Fuse_Elements_StretchSizing* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_StretchSizing* MixerHandle__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_StretchSizing* inst = (MixerHandle__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_StretchSizing), MixerHandle__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_StretchSizing__Set(MixerHandle__Fuse_Elements_StretchSizing* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_StretchSizing__set_MixOp(MixerHandle__Fuse_Elements_StretchSizing* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_StretchSizing__set_Priority(MixerHandle__Fuse_Elements_StretchSizing* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_StretchSizing__Unregister(MixerHandle__Fuse_Elements_StretchSizing* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_StretchSizing*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_TextAlignment__uType* MixerHandle__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_TextAlignment__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.TextAlignment>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_TextAlignment__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_TextAlignment__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextAlignment__typeof(), offsetof(MixerHandle__Fuse_Elements_TextAlignment__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_TextAlignment, Master));

    return type;
}

void MixerHandle__Fuse_Elements_TextAlignment___ObjInit(MixerHandle__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_TextAlignment__get_HasValue(MixerHandle__Fuse_Elements_TextAlignment* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_TextAlignment__get_MixOp(MixerHandle__Fuse_Elements_TextAlignment* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_TextAlignment__get_Priority(MixerHandle__Fuse_Elements_TextAlignment* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_TextAlignment__get_RestValue(MixerHandle__Fuse_Elements_TextAlignment* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_TextAlignment* MixerHandle__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_TextAlignment* inst = (MixerHandle__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_TextAlignment), MixerHandle__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_TextAlignment__Set(MixerHandle__Fuse_Elements_TextAlignment* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_TextAlignment__set_MixOp(MixerHandle__Fuse_Elements_TextAlignment* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_TextAlignment__set_Priority(MixerHandle__Fuse_Elements_TextAlignment* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_TextAlignment__Unregister(MixerHandle__Fuse_Elements_TextAlignment* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextAlignment*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_TextWrapping__uType* MixerHandle__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_TextWrapping__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.TextWrapping>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_TextWrapping__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_TextWrapping__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_TextWrapping__typeof(), offsetof(MixerHandle__Fuse_Elements_TextWrapping__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_TextWrapping, Master));

    return type;
}

void MixerHandle__Fuse_Elements_TextWrapping___ObjInit(MixerHandle__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_TextWrapping__get_HasValue(MixerHandle__Fuse_Elements_TextWrapping* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_TextWrapping__get_MixOp(MixerHandle__Fuse_Elements_TextWrapping* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_TextWrapping__get_Priority(MixerHandle__Fuse_Elements_TextWrapping* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_TextWrapping__get_RestValue(MixerHandle__Fuse_Elements_TextWrapping* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_TextWrapping* MixerHandle__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_TextWrapping* inst = (MixerHandle__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_TextWrapping), MixerHandle__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_TextWrapping__Set(MixerHandle__Fuse_Elements_TextWrapping* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_TextWrapping__set_MixOp(MixerHandle__Fuse_Elements_TextWrapping* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_TextWrapping__set_Priority(MixerHandle__Fuse_Elements_TextWrapping* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_TextWrapping__Unregister(MixerHandle__Fuse_Elements_TextWrapping* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_TextWrapping*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_Visibility__uType* MixerHandle__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_Visibility__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.Visibility>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_Visibility__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_Visibility__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility__typeof(), offsetof(MixerHandle__Fuse_Elements_Visibility__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_Visibility, Master));

    return type;
}

void MixerHandle__Fuse_Elements_Visibility___ObjInit(MixerHandle__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_Visibility__get_HasValue(MixerHandle__Fuse_Elements_Visibility* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_Visibility__get_MixOp(MixerHandle__Fuse_Elements_Visibility* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_Visibility__get_Priority(MixerHandle__Fuse_Elements_Visibility* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Elements_Visibility__get_RestValue(MixerHandle__Fuse_Elements_Visibility* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Elements_Visibility* MixerHandle__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_Visibility* inst = (MixerHandle__Fuse_Elements_Visibility*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_Visibility), MixerHandle__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_Visibility__Set(MixerHandle__Fuse_Elements_Visibility* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_Visibility__set_MixOp(MixerHandle__Fuse_Elements_Visibility* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_Visibility__set_Priority(MixerHandle__Fuse_Elements_Visibility* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_Visibility__Unregister(MixerHandle__Fuse_Elements_Visibility* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Font__uType* MixerHandle__Fuse_Font__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Font__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Font__uType), "Fuse.Animations.MixerHandle<Fuse.Font>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Font__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Font*, float))MixerHandle__Fuse_Font__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Font__typeof(), offsetof(MixerHandle__Fuse_Font__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Font, Master),
        "Value", offsetof(MixerHandle__Fuse_Font, Value));

    return type;
}

void MixerHandle__Fuse_Font___ObjInit(MixerHandle__Fuse_Font* __this, ::app::Fuse::Animations::MasterBase__Fuse_Font* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Font*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Font__get_HasValue(MixerHandle__Fuse_Font* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Font__get_MixOp(MixerHandle__Fuse_Font* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Font__get_Priority(MixerHandle__Fuse_Font* __this)
{
    return __this->_Priority;
}

::app::Fuse::Font* MixerHandle__Fuse_Font__get_RestValue(MixerHandle__Fuse_Font* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Font*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Font* MixerHandle__Fuse_Font__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Font* master, int mode, int priority)
{
    MixerHandle__Fuse_Font* inst = (MixerHandle__Fuse_Font*)::uAllocObject(sizeof(MixerHandle__Fuse_Font), MixerHandle__Fuse_Font__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Font__Set(MixerHandle__Fuse_Font* __this, ::app::Fuse::Font* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Font*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Font__set_MixOp(MixerHandle__Fuse_Font* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Font__set_Priority(MixerHandle__Fuse_Font* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Font__Unregister(MixerHandle__Fuse_Font* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Font*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Font*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Gestures_Edge__uType* MixerHandle__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Gestures_Edge__uType), "Fuse.Animations.MixerHandle<Fuse.Gestures.Edge>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Gestures_Edge__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Gestures_Edge__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_Edge__typeof(), offsetof(MixerHandle__Fuse_Gestures_Edge__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Gestures_Edge, Master));

    return type;
}

void MixerHandle__Fuse_Gestures_Edge___ObjInit(MixerHandle__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Gestures_Edge__get_HasValue(MixerHandle__Fuse_Gestures_Edge* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Gestures_Edge__get_MixOp(MixerHandle__Fuse_Gestures_Edge* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Gestures_Edge__get_Priority(MixerHandle__Fuse_Gestures_Edge* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Gestures_Edge__get_RestValue(MixerHandle__Fuse_Gestures_Edge* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Gestures_Edge* MixerHandle__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge* master, int mode, int priority)
{
    MixerHandle__Fuse_Gestures_Edge* inst = (MixerHandle__Fuse_Gestures_Edge*)::uAllocObject(sizeof(MixerHandle__Fuse_Gestures_Edge), MixerHandle__Fuse_Gestures_Edge__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Gestures_Edge__Set(MixerHandle__Fuse_Gestures_Edge* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Gestures_Edge__set_MixOp(MixerHandle__Fuse_Gestures_Edge* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Gestures_Edge__set_Priority(MixerHandle__Fuse_Gestures_Edge* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Gestures_Edge__Unregister(MixerHandle__Fuse_Gestures_Edge* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_Edge*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Gestures_ScrollDirections__uType* MixerHandle__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Gestures_ScrollDirections__uType), "Fuse.Animations.MixerHandle<Fuse.Gestures.ScrollDirections>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Gestures_ScrollDirections__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Gestures_ScrollDirections__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Gestures_ScrollDirections__typeof(), offsetof(MixerHandle__Fuse_Gestures_ScrollDirections__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Gestures_ScrollDirections, Master));

    return type;
}

void MixerHandle__Fuse_Gestures_ScrollDirections___ObjInit(MixerHandle__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Gestures_ScrollDirections__get_HasValue(MixerHandle__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Gestures_ScrollDirections__get_MixOp(MixerHandle__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Gestures_ScrollDirections__get_Priority(MixerHandle__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Gestures_ScrollDirections__get_RestValue(MixerHandle__Fuse_Gestures_ScrollDirections* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Gestures_ScrollDirections* MixerHandle__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections* master, int mode, int priority)
{
    MixerHandle__Fuse_Gestures_ScrollDirections* inst = (MixerHandle__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(MixerHandle__Fuse_Gestures_ScrollDirections), MixerHandle__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Gestures_ScrollDirections__Set(MixerHandle__Fuse_Gestures_ScrollDirections* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Gestures_ScrollDirections__set_MixOp(MixerHandle__Fuse_Gestures_ScrollDirections* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Gestures_ScrollDirections__set_Priority(MixerHandle__Fuse_Gestures_ScrollDirections* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Gestures_ScrollDirections__Unregister(MixerHandle__Fuse_Gestures_ScrollDirections* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Layouts_Dock__uType* MixerHandle__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Layouts_Dock__uType), "Fuse.Animations.MixerHandle<Fuse.Layouts.Dock>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Layouts_Dock__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Layouts_Dock__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Dock__typeof(), offsetof(MixerHandle__Fuse_Layouts_Dock__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Layouts_Dock, Master));

    return type;
}

void MixerHandle__Fuse_Layouts_Dock___ObjInit(MixerHandle__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Layouts_Dock__get_HasValue(MixerHandle__Fuse_Layouts_Dock* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Layouts_Dock__get_MixOp(MixerHandle__Fuse_Layouts_Dock* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Layouts_Dock__get_Priority(MixerHandle__Fuse_Layouts_Dock* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Layouts_Dock__get_RestValue(MixerHandle__Fuse_Layouts_Dock* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Layouts_Dock* MixerHandle__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock* master, int mode, int priority)
{
    MixerHandle__Fuse_Layouts_Dock* inst = (MixerHandle__Fuse_Layouts_Dock*)::uAllocObject(sizeof(MixerHandle__Fuse_Layouts_Dock), MixerHandle__Fuse_Layouts_Dock__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Layouts_Dock__Set(MixerHandle__Fuse_Layouts_Dock* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Layouts_Dock__set_MixOp(MixerHandle__Fuse_Layouts_Dock* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Layouts_Dock__set_Priority(MixerHandle__Fuse_Layouts_Dock* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Layouts_Dock__Unregister(MixerHandle__Fuse_Layouts_Dock* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Layouts_FlowDirection__uType* MixerHandle__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Layouts_FlowDirection__uType), "Fuse.Animations.MixerHandle<Fuse.Layouts.FlowDirection>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Layouts_FlowDirection__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Layouts_FlowDirection__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_FlowDirection__typeof(), offsetof(MixerHandle__Fuse_Layouts_FlowDirection__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Layouts_FlowDirection, Master));

    return type;
}

void MixerHandle__Fuse_Layouts_FlowDirection___ObjInit(MixerHandle__Fuse_Layouts_FlowDirection* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Layouts_FlowDirection__get_HasValue(MixerHandle__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Layouts_FlowDirection__get_MixOp(MixerHandle__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Layouts_FlowDirection__get_Priority(MixerHandle__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Layouts_FlowDirection__get_RestValue(MixerHandle__Fuse_Layouts_FlowDirection* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Layouts_FlowDirection* MixerHandle__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection* master, int mode, int priority)
{
    MixerHandle__Fuse_Layouts_FlowDirection* inst = (MixerHandle__Fuse_Layouts_FlowDirection*)::uAllocObject(sizeof(MixerHandle__Fuse_Layouts_FlowDirection), MixerHandle__Fuse_Layouts_FlowDirection__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Layouts_FlowDirection__Set(MixerHandle__Fuse_Layouts_FlowDirection* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Layouts_FlowDirection__set_MixOp(MixerHandle__Fuse_Layouts_FlowDirection* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Layouts_FlowDirection__set_Priority(MixerHandle__Fuse_Layouts_FlowDirection* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Layouts_FlowDirection__Unregister(MixerHandle__Fuse_Layouts_FlowDirection* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_FlowDirection*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Layouts_Metric__uType* MixerHandle__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Layouts_Metric__uType), "Fuse.Animations.MixerHandle<Fuse.Layouts.Metric>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Layouts_Metric__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Layouts_Metric__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Metric__typeof(), offsetof(MixerHandle__Fuse_Layouts_Metric__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Layouts_Metric, Master));

    return type;
}

void MixerHandle__Fuse_Layouts_Metric___ObjInit(MixerHandle__Fuse_Layouts_Metric* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Layouts_Metric__get_HasValue(MixerHandle__Fuse_Layouts_Metric* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Layouts_Metric__get_MixOp(MixerHandle__Fuse_Layouts_Metric* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Layouts_Metric__get_Priority(MixerHandle__Fuse_Layouts_Metric* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Layouts_Metric__get_RestValue(MixerHandle__Fuse_Layouts_Metric* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Layouts_Metric* MixerHandle__Fuse_Layouts_Metric__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric* master, int mode, int priority)
{
    MixerHandle__Fuse_Layouts_Metric* inst = (MixerHandle__Fuse_Layouts_Metric*)::uAllocObject(sizeof(MixerHandle__Fuse_Layouts_Metric), MixerHandle__Fuse_Layouts_Metric__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Layouts_Metric__Set(MixerHandle__Fuse_Layouts_Metric* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Layouts_Metric__set_MixOp(MixerHandle__Fuse_Layouts_Metric* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Layouts_Metric__set_Priority(MixerHandle__Fuse_Layouts_Metric* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Layouts_Metric__Unregister(MixerHandle__Fuse_Layouts_Metric* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Metric*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Layouts_Orientation__uType* MixerHandle__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Layouts_Orientation__uType), "Fuse.Animations.MixerHandle<Fuse.Layouts.Orientation>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Layouts_Orientation__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Layouts_Orientation__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Orientation__typeof(), offsetof(MixerHandle__Fuse_Layouts_Orientation__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Layouts_Orientation, Master));

    return type;
}

void MixerHandle__Fuse_Layouts_Orientation___ObjInit(MixerHandle__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Layouts_Orientation__get_HasValue(MixerHandle__Fuse_Layouts_Orientation* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Layouts_Orientation__get_MixOp(MixerHandle__Fuse_Layouts_Orientation* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Layouts_Orientation__get_Priority(MixerHandle__Fuse_Layouts_Orientation* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Layouts_Orientation__get_RestValue(MixerHandle__Fuse_Layouts_Orientation* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Layouts_Orientation* MixerHandle__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation* master, int mode, int priority)
{
    MixerHandle__Fuse_Layouts_Orientation* inst = (MixerHandle__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(MixerHandle__Fuse_Layouts_Orientation), MixerHandle__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Layouts_Orientation__Set(MixerHandle__Fuse_Layouts_Orientation* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Layouts_Orientation__set_MixOp(MixerHandle__Fuse_Layouts_Orientation* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Layouts_Orientation__set_Priority(MixerHandle__Fuse_Layouts_Orientation* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Layouts_Orientation__Unregister(MixerHandle__Fuse_Layouts_Orientation* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Navigation_NavigationDirection__uType* MixerHandle__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Navigation_NavigationDirection__uType), "Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationDirection>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Navigation_NavigationDirection__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Navigation_NavigationDirection__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationDirection__typeof(), offsetof(MixerHandle__Fuse_Navigation_NavigationDirection__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Navigation_NavigationDirection, Master));

    return type;
}

void MixerHandle__Fuse_Navigation_NavigationDirection___ObjInit(MixerHandle__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Navigation_NavigationDirection__get_HasValue(MixerHandle__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Navigation_NavigationDirection__get_MixOp(MixerHandle__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Navigation_NavigationDirection__get_Priority(MixerHandle__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Navigation_NavigationDirection__get_RestValue(MixerHandle__Fuse_Navigation_NavigationDirection* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Navigation_NavigationDirection* MixerHandle__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection* master, int mode, int priority)
{
    MixerHandle__Fuse_Navigation_NavigationDirection* inst = (MixerHandle__Fuse_Navigation_NavigationDirection*)::uAllocObject(sizeof(MixerHandle__Fuse_Navigation_NavigationDirection), MixerHandle__Fuse_Navigation_NavigationDirection__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Navigation_NavigationDirection__Set(MixerHandle__Fuse_Navigation_NavigationDirection* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Navigation_NavigationDirection__set_MixOp(MixerHandle__Fuse_Navigation_NavigationDirection* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Navigation_NavigationDirection__set_Priority(MixerHandle__Fuse_Navigation_NavigationDirection* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Navigation_NavigationDirection__Unregister(MixerHandle__Fuse_Navigation_NavigationDirection* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationDirection*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Navigation_NavigationEdge__uType* MixerHandle__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Navigation_NavigationEdge__uType), "Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationEdge>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Navigation_NavigationEdge__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Navigation_NavigationEdge__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationEdge__typeof(), offsetof(MixerHandle__Fuse_Navigation_NavigationEdge__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Navigation_NavigationEdge, Master));

    return type;
}

void MixerHandle__Fuse_Navigation_NavigationEdge___ObjInit(MixerHandle__Fuse_Navigation_NavigationEdge* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Navigation_NavigationEdge__get_HasValue(MixerHandle__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Navigation_NavigationEdge__get_MixOp(MixerHandle__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Navigation_NavigationEdge__get_Priority(MixerHandle__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Navigation_NavigationEdge__get_RestValue(MixerHandle__Fuse_Navigation_NavigationEdge* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Navigation_NavigationEdge* MixerHandle__Fuse_Navigation_NavigationEdge__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge* master, int mode, int priority)
{
    MixerHandle__Fuse_Navigation_NavigationEdge* inst = (MixerHandle__Fuse_Navigation_NavigationEdge*)::uAllocObject(sizeof(MixerHandle__Fuse_Navigation_NavigationEdge), MixerHandle__Fuse_Navigation_NavigationEdge__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Navigation_NavigationEdge__Set(MixerHandle__Fuse_Navigation_NavigationEdge* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Navigation_NavigationEdge__set_MixOp(MixerHandle__Fuse_Navigation_NavigationEdge* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Navigation_NavigationEdge__set_Priority(MixerHandle__Fuse_Navigation_NavigationEdge* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Navigation_NavigationEdge__Unregister(MixerHandle__Fuse_Navigation_NavigationEdge* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationEdge*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Navigation_NavigationGotoMode__uType* MixerHandle__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Navigation_NavigationGotoMode__uType), "Fuse.Animations.MixerHandle<Fuse.Navigation.NavigationGotoMode>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Navigation_NavigationGotoMode__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Navigation_NavigationGotoMode__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_NavigationGotoMode__typeof(), offsetof(MixerHandle__Fuse_Navigation_NavigationGotoMode__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Navigation_NavigationGotoMode, Master));

    return type;
}

void MixerHandle__Fuse_Navigation_NavigationGotoMode___ObjInit(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Navigation_NavigationGotoMode__get_HasValue(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Navigation_NavigationGotoMode__get_MixOp(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Navigation_NavigationGotoMode__get_Priority(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Navigation_NavigationGotoMode__get_RestValue(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Navigation_NavigationGotoMode* MixerHandle__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode* master, int mode, int priority)
{
    MixerHandle__Fuse_Navigation_NavigationGotoMode* inst = (MixerHandle__Fuse_Navigation_NavigationGotoMode*)::uAllocObject(sizeof(MixerHandle__Fuse_Navigation_NavigationGotoMode), MixerHandle__Fuse_Navigation_NavigationGotoMode__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Navigation_NavigationGotoMode__Set(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Navigation_NavigationGotoMode__set_MixOp(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Navigation_NavigationGotoMode__set_Priority(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Navigation_NavigationGotoMode__Unregister(MixerHandle__Fuse_Navigation_NavigationGotoMode* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_NavigationGotoMode*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Navigation_SnapTo__uType* MixerHandle__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Navigation_SnapTo__uType), "Fuse.Animations.MixerHandle<Fuse.Navigation.SnapTo>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Navigation_SnapTo__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Navigation_SnapTo__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SnapTo__typeof(), offsetof(MixerHandle__Fuse_Navigation_SnapTo__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Navigation_SnapTo, Master));

    return type;
}

void MixerHandle__Fuse_Navigation_SnapTo___ObjInit(MixerHandle__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Navigation_SnapTo__get_HasValue(MixerHandle__Fuse_Navigation_SnapTo* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Navigation_SnapTo__get_MixOp(MixerHandle__Fuse_Navigation_SnapTo* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Navigation_SnapTo__get_Priority(MixerHandle__Fuse_Navigation_SnapTo* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Navigation_SnapTo__get_RestValue(MixerHandle__Fuse_Navigation_SnapTo* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Navigation_SnapTo* MixerHandle__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo* master, int mode, int priority)
{
    MixerHandle__Fuse_Navigation_SnapTo* inst = (MixerHandle__Fuse_Navigation_SnapTo*)::uAllocObject(sizeof(MixerHandle__Fuse_Navigation_SnapTo), MixerHandle__Fuse_Navigation_SnapTo__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Navigation_SnapTo__Set(MixerHandle__Fuse_Navigation_SnapTo* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Navigation_SnapTo__set_MixOp(MixerHandle__Fuse_Navigation_SnapTo* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Navigation_SnapTo__set_Priority(MixerHandle__Fuse_Navigation_SnapTo* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Navigation_SnapTo__Unregister(MixerHandle__Fuse_Navigation_SnapTo* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Navigation_SwipeDirection__uType* MixerHandle__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Navigation_SwipeDirection__uType), "Fuse.Animations.MixerHandle<Fuse.Navigation.SwipeDirection>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Navigation_SwipeDirection__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Navigation_SwipeDirection__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeDirection__typeof(), offsetof(MixerHandle__Fuse_Navigation_SwipeDirection__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Navigation_SwipeDirection, Master));

    return type;
}

void MixerHandle__Fuse_Navigation_SwipeDirection___ObjInit(MixerHandle__Fuse_Navigation_SwipeDirection* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Navigation_SwipeDirection__get_HasValue(MixerHandle__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Navigation_SwipeDirection__get_MixOp(MixerHandle__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Navigation_SwipeDirection__get_Priority(MixerHandle__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Navigation_SwipeDirection__get_RestValue(MixerHandle__Fuse_Navigation_SwipeDirection* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Navigation_SwipeDirection* MixerHandle__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection* master, int mode, int priority)
{
    MixerHandle__Fuse_Navigation_SwipeDirection* inst = (MixerHandle__Fuse_Navigation_SwipeDirection*)::uAllocObject(sizeof(MixerHandle__Fuse_Navigation_SwipeDirection), MixerHandle__Fuse_Navigation_SwipeDirection__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Navigation_SwipeDirection__Set(MixerHandle__Fuse_Navigation_SwipeDirection* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Navigation_SwipeDirection__set_MixOp(MixerHandle__Fuse_Navigation_SwipeDirection* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Navigation_SwipeDirection__set_Priority(MixerHandle__Fuse_Navigation_SwipeDirection* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Navigation_SwipeDirection__Unregister(MixerHandle__Fuse_Navigation_SwipeDirection* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeDirection*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Navigation_SwipeEnds__uType* MixerHandle__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Navigation_SwipeEnds__uType), "Fuse.Animations.MixerHandle<Fuse.Navigation.SwipeEnds>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Navigation_SwipeEnds__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Navigation_SwipeEnds__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SwipeEnds__typeof(), offsetof(MixerHandle__Fuse_Navigation_SwipeEnds__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Navigation_SwipeEnds, Master));

    return type;
}

void MixerHandle__Fuse_Navigation_SwipeEnds___ObjInit(MixerHandle__Fuse_Navigation_SwipeEnds* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Navigation_SwipeEnds__get_HasValue(MixerHandle__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Navigation_SwipeEnds__get_MixOp(MixerHandle__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Navigation_SwipeEnds__get_Priority(MixerHandle__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Navigation_SwipeEnds__get_RestValue(MixerHandle__Fuse_Navigation_SwipeEnds* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Navigation_SwipeEnds* MixerHandle__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds* master, int mode, int priority)
{
    MixerHandle__Fuse_Navigation_SwipeEnds* inst = (MixerHandle__Fuse_Navigation_SwipeEnds*)::uAllocObject(sizeof(MixerHandle__Fuse_Navigation_SwipeEnds), MixerHandle__Fuse_Navigation_SwipeEnds__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Navigation_SwipeEnds__Set(MixerHandle__Fuse_Navigation_SwipeEnds* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Navigation_SwipeEnds__set_MixOp(MixerHandle__Fuse_Navigation_SwipeEnds* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Navigation_SwipeEnds__set_Priority(MixerHandle__Fuse_Navigation_SwipeEnds* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Navigation_SwipeEnds__Unregister(MixerHandle__Fuse_Navigation_SwipeEnds* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SwipeEnds*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Node__uType* MixerHandle__Fuse_Node__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Node__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Node__uType), "Fuse.Animations.MixerHandle<Fuse.Node>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Node__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Node*, float))MixerHandle__Fuse_Node__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Node__typeof(), offsetof(MixerHandle__Fuse_Node__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Node, Master),
        "Value", offsetof(MixerHandle__Fuse_Node, Value));

    return type;
}

void MixerHandle__Fuse_Node___ObjInit(MixerHandle__Fuse_Node* __this, ::app::Fuse::Animations::MasterBase__Fuse_Node* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Node*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Node__get_HasValue(MixerHandle__Fuse_Node* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Node__get_MixOp(MixerHandle__Fuse_Node* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Node__get_Priority(MixerHandle__Fuse_Node* __this)
{
    return __this->_Priority;
}

::app::Fuse::Node* MixerHandle__Fuse_Node__get_RestValue(MixerHandle__Fuse_Node* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Node*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Node* MixerHandle__Fuse_Node__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Node* master, int mode, int priority)
{
    MixerHandle__Fuse_Node* inst = (MixerHandle__Fuse_Node*)::uAllocObject(sizeof(MixerHandle__Fuse_Node), MixerHandle__Fuse_Node__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Node__Set(MixerHandle__Fuse_Node* __this, ::app::Fuse::Node* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Node*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Node__set_MixOp(MixerHandle__Fuse_Node* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Node__set_Priority(MixerHandle__Fuse_Node* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Node__Unregister(MixerHandle__Fuse_Node* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Node*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Node*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Resources_ImageSource__uType* MixerHandle__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Resources_ImageSource__uType), "Fuse.Animations.MixerHandle<Fuse.Resources.ImageSource>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Resources_ImageSource__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Resources::ImageSource*, float))MixerHandle__Fuse_Resources_ImageSource__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Resources_ImageSource__typeof(), offsetof(MixerHandle__Fuse_Resources_ImageSource__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Resources_ImageSource, Master),
        "Value", offsetof(MixerHandle__Fuse_Resources_ImageSource, Value));

    return type;
}

void MixerHandle__Fuse_Resources_ImageSource___ObjInit(MixerHandle__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Resources_ImageSource__get_HasValue(MixerHandle__Fuse_Resources_ImageSource* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Resources_ImageSource__get_MixOp(MixerHandle__Fuse_Resources_ImageSource* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Resources_ImageSource__get_Priority(MixerHandle__Fuse_Resources_ImageSource* __this)
{
    return __this->_Priority;
}

::app::Fuse::Resources::ImageSource* MixerHandle__Fuse_Resources_ImageSource__get_RestValue(MixerHandle__Fuse_Resources_ImageSource* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Resources_ImageSource* MixerHandle__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource* master, int mode, int priority)
{
    MixerHandle__Fuse_Resources_ImageSource* inst = (MixerHandle__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(MixerHandle__Fuse_Resources_ImageSource), MixerHandle__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Resources_ImageSource__Set(MixerHandle__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Resources_ImageSource__set_MixOp(MixerHandle__Fuse_Resources_ImageSource* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Resources_ImageSource__set_Priority(MixerHandle__Fuse_Resources_ImageSource* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Resources_ImageSource__Unregister(MixerHandle__Fuse_Resources_ImageSource* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Transform__uType* MixerHandle__Fuse_Transform__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Transform__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Transform__uType), "Fuse.Animations.MixerHandle<Fuse.Transform>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Transform__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Transform*, float))MixerHandle__Fuse_Transform__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Transform__typeof(), offsetof(MixerHandle__Fuse_Transform__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Transform, Master),
        "Value", offsetof(MixerHandle__Fuse_Transform, Value));

    return type;
}

void MixerHandle__Fuse_Transform___ObjInit(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Transform__get_HasValue(MixerHandle__Fuse_Transform* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Transform__get_MixOp(MixerHandle__Fuse_Transform* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Transform__get_Priority(MixerHandle__Fuse_Transform* __this)
{
    return __this->_Priority;
}

::app::Fuse::Transform* MixerHandle__Fuse_Transform__get_RestValue(MixerHandle__Fuse_Transform* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Transform* MixerHandle__Fuse_Transform__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority)
{
    MixerHandle__Fuse_Transform* inst = (MixerHandle__Fuse_Transform*)::uAllocObject(sizeof(MixerHandle__Fuse_Transform), MixerHandle__Fuse_Transform__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Transform__Set(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Transform* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Transform__set_MixOp(MixerHandle__Fuse_Transform* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Transform__set_Priority(MixerHandle__Fuse_Transform* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Transform__Unregister(MixerHandle__Fuse_Transform* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Triggers_Actions_TriggerDirection__uType* MixerHandle__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Triggers_Actions_TriggerDirection__uType), "Fuse.Animations.MixerHandle<Fuse.Triggers.Actions.TriggerDirection>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Triggers_Actions_TriggerDirection__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Triggers_Actions_TriggerDirection__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_Actions_TriggerDirection__typeof(), offsetof(MixerHandle__Fuse_Triggers_Actions_TriggerDirection__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Triggers_Actions_TriggerDirection, Master));

    return type;
}

void MixerHandle__Fuse_Triggers_Actions_TriggerDirection___ObjInit(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_HasValue(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_MixOp(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_Priority(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_RestValue(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Triggers_Actions_TriggerDirection* MixerHandle__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection* master, int mode, int priority)
{
    MixerHandle__Fuse_Triggers_Actions_TriggerDirection* inst = (MixerHandle__Fuse_Triggers_Actions_TriggerDirection*)::uAllocObject(sizeof(MixerHandle__Fuse_Triggers_Actions_TriggerDirection), MixerHandle__Fuse_Triggers_Actions_TriggerDirection__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Triggers_Actions_TriggerDirection__Set(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Triggers_Actions_TriggerDirection__set_MixOp(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Triggers_Actions_TriggerDirection__set_Priority(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Triggers_Actions_TriggerDirection__Unregister(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Triggers_State__uType* MixerHandle__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Triggers_State__uType), "Fuse.Animations.MixerHandle<Fuse.Triggers.State>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Triggers_State__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Triggers::State*, float))MixerHandle__Fuse_Triggers_State__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_State__typeof(), offsetof(MixerHandle__Fuse_Triggers_State__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Triggers_State, Master),
        "Value", offsetof(MixerHandle__Fuse_Triggers_State, Value));

    return type;
}

void MixerHandle__Fuse_Triggers_State___ObjInit(MixerHandle__Fuse_Triggers_State* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Triggers_State__get_HasValue(MixerHandle__Fuse_Triggers_State* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Triggers_State__get_MixOp(MixerHandle__Fuse_Triggers_State* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Triggers_State__get_Priority(MixerHandle__Fuse_Triggers_State* __this)
{
    return __this->_Priority;
}

::app::Fuse::Triggers::State* MixerHandle__Fuse_Triggers_State__get_RestValue(MixerHandle__Fuse_Triggers_State* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Triggers_State* MixerHandle__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State* master, int mode, int priority)
{
    MixerHandle__Fuse_Triggers_State* inst = (MixerHandle__Fuse_Triggers_State*)::uAllocObject(sizeof(MixerHandle__Fuse_Triggers_State), MixerHandle__Fuse_Triggers_State__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Triggers_State__Set(MixerHandle__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Triggers_State__set_MixOp(MixerHandle__Fuse_Triggers_State* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Triggers_State__set_Priority(MixerHandle__Fuse_Triggers_State* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Triggers_State__Unregister(MixerHandle__Fuse_Triggers_State* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Triggers_StateTransition__uType* MixerHandle__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Triggers_StateTransition__uType), "Fuse.Animations.MixerHandle<Fuse.Triggers.StateTransition>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Triggers_StateTransition__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Triggers_StateTransition__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_StateTransition__typeof(), offsetof(MixerHandle__Fuse_Triggers_StateTransition__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Triggers_StateTransition, Master));

    return type;
}

void MixerHandle__Fuse_Triggers_StateTransition___ObjInit(MixerHandle__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Triggers_StateTransition__get_HasValue(MixerHandle__Fuse_Triggers_StateTransition* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Triggers_StateTransition__get_MixOp(MixerHandle__Fuse_Triggers_StateTransition* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Triggers_StateTransition__get_Priority(MixerHandle__Fuse_Triggers_StateTransition* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Triggers_StateTransition__get_RestValue(MixerHandle__Fuse_Triggers_StateTransition* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Triggers_StateTransition* MixerHandle__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition* master, int mode, int priority)
{
    MixerHandle__Fuse_Triggers_StateTransition* inst = (MixerHandle__Fuse_Triggers_StateTransition*)::uAllocObject(sizeof(MixerHandle__Fuse_Triggers_StateTransition), MixerHandle__Fuse_Triggers_StateTransition__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Triggers_StateTransition__Set(MixerHandle__Fuse_Triggers_StateTransition* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Triggers_StateTransition__set_MixOp(MixerHandle__Fuse_Triggers_StateTransition* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Triggers_StateTransition__set_Priority(MixerHandle__Fuse_Triggers_StateTransition* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Triggers_StateTransition__Unregister(MixerHandle__Fuse_Triggers_StateTransition* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Triggers_TriggerBypassMode__uType* MixerHandle__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Triggers_TriggerBypassMode__uType), "Fuse.Animations.MixerHandle<Fuse.Triggers.TriggerBypassMode>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Triggers_TriggerBypassMode__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Triggers_TriggerBypassMode__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_TriggerBypassMode__typeof(), offsetof(MixerHandle__Fuse_Triggers_TriggerBypassMode__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Triggers_TriggerBypassMode, Master));

    return type;
}

void MixerHandle__Fuse_Triggers_TriggerBypassMode___ObjInit(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Triggers_TriggerBypassMode__get_HasValue(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Triggers_TriggerBypassMode__get_MixOp(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Triggers_TriggerBypassMode__get_Priority(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_Priority;
}

int MixerHandle__Fuse_Triggers_TriggerBypassMode__get_RestValue(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode*>(__this->Master)->RestValue();
}

MixerHandle__Fuse_Triggers_TriggerBypassMode* MixerHandle__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode* master, int mode, int priority)
{
    MixerHandle__Fuse_Triggers_TriggerBypassMode* inst = (MixerHandle__Fuse_Triggers_TriggerBypassMode*)::uAllocObject(sizeof(MixerHandle__Fuse_Triggers_TriggerBypassMode), MixerHandle__Fuse_Triggers_TriggerBypassMode__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Triggers_TriggerBypassMode__Set(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Triggers_TriggerBypassMode__set_MixOp(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Triggers_TriggerBypassMode__set_Priority(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Triggers_TriggerBypassMode__Unregister(MixerHandle__Fuse_Triggers_TriggerBypassMode* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_TriggerBypassMode*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__int__uType* MixerHandle__int__typeof()
{
    static ::uStaticStrong<MixerHandle__int__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__int__uType*)::uAllocClassType(sizeof(MixerHandle__int__uType), "Fuse.Animations.MixerHandle<int>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__int__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__int__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__int__typeof(), offsetof(MixerHandle__int__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__int, Master));

    return type;
}

void MixerHandle__int___ObjInit(MixerHandle__int* __this, ::app::Fuse::Animations::MasterBase__int* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__int*>(__this->Master)->Register(__this);
}

bool MixerHandle__int__get_HasValue(MixerHandle__int* __this)
{
    return __this->_hasValue;
}

int MixerHandle__int__get_MixOp(MixerHandle__int* __this)
{
    return __this->_MixOp;
}

int MixerHandle__int__get_Priority(MixerHandle__int* __this)
{
    return __this->_Priority;
}

int MixerHandle__int__get_RestValue(MixerHandle__int* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__int*>(__this->Master)->RestValue();
}

MixerHandle__int* MixerHandle__int__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__int* master, int mode, int priority)
{
    MixerHandle__int* inst = (MixerHandle__int*)::uAllocObject(sizeof(MixerHandle__int), MixerHandle__int__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__int__Set(MixerHandle__int* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__int*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__int__set_MixOp(MixerHandle__int* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__int__set_Priority(MixerHandle__int* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__int__Unregister(MixerHandle__int* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__int*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__int*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__int2__uType* MixerHandle__int2__typeof()
{
    static ::uStaticStrong<MixerHandle__int2__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__int2__uType*)::uAllocClassType(sizeof(MixerHandle__int2__uType), "Fuse.Animations.MixerHandle<int2>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__int2__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::Int2, float))MixerHandle__int2__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__int2__typeof(), offsetof(MixerHandle__int2__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__int2, Master));

    return type;
}

void MixerHandle__int2___ObjInit(MixerHandle__int2* __this, ::app::Fuse::Animations::MasterBase__int2* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__int2*>(__this->Master)->Register(__this);
}

bool MixerHandle__int2__get_HasValue(MixerHandle__int2* __this)
{
    return __this->_hasValue;
}

int MixerHandle__int2__get_MixOp(MixerHandle__int2* __this)
{
    return __this->_MixOp;
}

int MixerHandle__int2__get_Priority(MixerHandle__int2* __this)
{
    return __this->_Priority;
}

::app::Uno::Int2 MixerHandle__int2__get_RestValue(MixerHandle__int2* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__int2*>(__this->Master)->RestValue();
}

MixerHandle__int2* MixerHandle__int2__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__int2* master, int mode, int priority)
{
    MixerHandle__int2* inst = (MixerHandle__int2*)::uAllocObject(sizeof(MixerHandle__int2), MixerHandle__int2__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__int2__Set(MixerHandle__int2* __this, ::app::Uno::Int2 value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__int2*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__int2__set_MixOp(MixerHandle__int2* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__int2__set_Priority(MixerHandle__int2* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__int2__Unregister(MixerHandle__int2* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__int2*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__int2*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__int3__uType* MixerHandle__int3__typeof()
{
    static ::uStaticStrong<MixerHandle__int3__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__int3__uType*)::uAllocClassType(sizeof(MixerHandle__int3__uType), "Fuse.Animations.MixerHandle<int3>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__int3__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::Int3, float))MixerHandle__int3__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__int3__typeof(), offsetof(MixerHandle__int3__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__int3, Master));

    return type;
}

void MixerHandle__int3___ObjInit(MixerHandle__int3* __this, ::app::Fuse::Animations::MasterBase__int3* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__int3*>(__this->Master)->Register(__this);
}

bool MixerHandle__int3__get_HasValue(MixerHandle__int3* __this)
{
    return __this->_hasValue;
}

int MixerHandle__int3__get_MixOp(MixerHandle__int3* __this)
{
    return __this->_MixOp;
}

int MixerHandle__int3__get_Priority(MixerHandle__int3* __this)
{
    return __this->_Priority;
}

::app::Uno::Int3 MixerHandle__int3__get_RestValue(MixerHandle__int3* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__int3*>(__this->Master)->RestValue();
}

MixerHandle__int3* MixerHandle__int3__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__int3* master, int mode, int priority)
{
    MixerHandle__int3* inst = (MixerHandle__int3*)::uAllocObject(sizeof(MixerHandle__int3), MixerHandle__int3__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__int3__Set(MixerHandle__int3* __this, ::app::Uno::Int3 value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__int3*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__int3__set_MixOp(MixerHandle__int3* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__int3__set_Priority(MixerHandle__int3* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__int3__Unregister(MixerHandle__int3* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__int3*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__int3*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__int4__uType* MixerHandle__int4__typeof()
{
    static ::uStaticStrong<MixerHandle__int4__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__int4__uType*)::uAllocClassType(sizeof(MixerHandle__int4__uType), "Fuse.Animations.MixerHandle<int4>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__int4__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::Int4, float))MixerHandle__int4__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__int4__typeof(), offsetof(MixerHandle__int4__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__int4, Master));

    return type;
}

void MixerHandle__int4___ObjInit(MixerHandle__int4* __this, ::app::Fuse::Animations::MasterBase__int4* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__int4*>(__this->Master)->Register(__this);
}

bool MixerHandle__int4__get_HasValue(MixerHandle__int4* __this)
{
    return __this->_hasValue;
}

int MixerHandle__int4__get_MixOp(MixerHandle__int4* __this)
{
    return __this->_MixOp;
}

int MixerHandle__int4__get_Priority(MixerHandle__int4* __this)
{
    return __this->_Priority;
}

::app::Uno::Int4 MixerHandle__int4__get_RestValue(MixerHandle__int4* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__int4*>(__this->Master)->RestValue();
}

MixerHandle__int4* MixerHandle__int4__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__int4* master, int mode, int priority)
{
    MixerHandle__int4* inst = (MixerHandle__int4*)::uAllocObject(sizeof(MixerHandle__int4), MixerHandle__int4__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__int4__Set(MixerHandle__int4* __this, ::app::Uno::Int4 value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__int4*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__int4__set_MixOp(MixerHandle__int4* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__int4__set_Priority(MixerHandle__int4* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__int4__Unregister(MixerHandle__int4* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__int4*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__int4*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__long__uType* MixerHandle__long__typeof()
{
    static ::uStaticStrong<MixerHandle__long__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__long__uType*)::uAllocClassType(sizeof(MixerHandle__long__uType), "Fuse.Animations.MixerHandle<long>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__long__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::uLong, float))MixerHandle__long__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__long__typeof(), offsetof(MixerHandle__long__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__long, Master));

    return type;
}

void MixerHandle__long___ObjInit(MixerHandle__long* __this, ::app::Fuse::Animations::MasterBase__long* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__long*>(__this->Master)->Register(__this);
}

bool MixerHandle__long__get_HasValue(MixerHandle__long* __this)
{
    return __this->_hasValue;
}

int MixerHandle__long__get_MixOp(MixerHandle__long* __this)
{
    return __this->_MixOp;
}

int MixerHandle__long__get_Priority(MixerHandle__long* __this)
{
    return __this->_Priority;
}

::uLong MixerHandle__long__get_RestValue(MixerHandle__long* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__long*>(__this->Master)->RestValue();
}

MixerHandle__long* MixerHandle__long__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__long* master, int mode, int priority)
{
    MixerHandle__long* inst = (MixerHandle__long*)::uAllocObject(sizeof(MixerHandle__long), MixerHandle__long__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__long__Set(MixerHandle__long* __this, ::uLong value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__long*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__long__set_MixOp(MixerHandle__long* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__long__set_Priority(MixerHandle__long* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__long__Unregister(MixerHandle__long* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__long*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__long*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__object__uType* MixerHandle__object__typeof()
{
    static ::uStaticStrong<MixerHandle__object__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__object__uType*)::uAllocClassType(sizeof(MixerHandle__object__uType), "Fuse.Animations.MixerHandle<object>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__object__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::uObject*, float))MixerHandle__object__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__object__typeof(), offsetof(MixerHandle__object__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__object, Master),
        "Value", offsetof(MixerHandle__object, Value));

    return type;
}

void MixerHandle__object___ObjInit(MixerHandle__object* __this, ::app::Fuse::Animations::MasterBase__object* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__object*>(__this->Master)->Register(__this);
}

bool MixerHandle__object__get_HasValue(MixerHandle__object* __this)
{
    return __this->_hasValue;
}

int MixerHandle__object__get_MixOp(MixerHandle__object* __this)
{
    return __this->_MixOp;
}

int MixerHandle__object__get_Priority(MixerHandle__object* __this)
{
    return __this->_Priority;
}

::uObject* MixerHandle__object__get_RestValue(MixerHandle__object* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__object*>(__this->Master)->RestValue();
}

MixerHandle__object* MixerHandle__object__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__object* master, int mode, int priority)
{
    MixerHandle__object* inst = (MixerHandle__object*)::uAllocObject(sizeof(MixerHandle__object), MixerHandle__object__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__object__Set(MixerHandle__object* __this, ::uObject* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__object*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__object__set_MixOp(MixerHandle__object* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__object__set_Priority(MixerHandle__object* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__object__Unregister(MixerHandle__object* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__object*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__object*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__short__uType* MixerHandle__short__typeof()
{
    static ::uStaticStrong<MixerHandle__short__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__short__uType*)::uAllocClassType(sizeof(MixerHandle__short__uType), "Fuse.Animations.MixerHandle<short>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__short__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::uShort, float))MixerHandle__short__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__short__typeof(), offsetof(MixerHandle__short__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__short, Master));

    return type;
}

void MixerHandle__short___ObjInit(MixerHandle__short* __this, ::app::Fuse::Animations::MasterBase__short* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__short*>(__this->Master)->Register(__this);
}

bool MixerHandle__short__get_HasValue(MixerHandle__short* __this)
{
    return __this->_hasValue;
}

int MixerHandle__short__get_MixOp(MixerHandle__short* __this)
{
    return __this->_MixOp;
}

int MixerHandle__short__get_Priority(MixerHandle__short* __this)
{
    return __this->_Priority;
}

::uShort MixerHandle__short__get_RestValue(MixerHandle__short* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__short*>(__this->Master)->RestValue();
}

MixerHandle__short* MixerHandle__short__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__short* master, int mode, int priority)
{
    MixerHandle__short* inst = (MixerHandle__short*)::uAllocObject(sizeof(MixerHandle__short), MixerHandle__short__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__short__Set(MixerHandle__short* __this, ::uShort value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__short*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__short__set_MixOp(MixerHandle__short* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__short__set_Priority(MixerHandle__short* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__short__Unregister(MixerHandle__short* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__short*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__short*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__string__uType* MixerHandle__string__typeof()
{
    static ::uStaticStrong<MixerHandle__string__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__string__uType*)::uAllocClassType(sizeof(MixerHandle__string__uType), "Fuse.Animations.MixerHandle<string>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__string__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::uString*, float))MixerHandle__string__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__string__typeof(), offsetof(MixerHandle__string__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__string, Master),
        "Value", offsetof(MixerHandle__string, Value));

    return type;
}

void MixerHandle__string___ObjInit(MixerHandle__string* __this, ::app::Fuse::Animations::MasterBase__string* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__string*>(__this->Master)->Register(__this);
}

bool MixerHandle__string__get_HasValue(MixerHandle__string* __this)
{
    return __this->_hasValue;
}

int MixerHandle__string__get_MixOp(MixerHandle__string* __this)
{
    return __this->_MixOp;
}

int MixerHandle__string__get_Priority(MixerHandle__string* __this)
{
    return __this->_Priority;
}

::uString* MixerHandle__string__get_RestValue(MixerHandle__string* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__string*>(__this->Master)->RestValue();
}

MixerHandle__string* MixerHandle__string__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__string* master, int mode, int priority)
{
    MixerHandle__string* inst = (MixerHandle__string*)::uAllocObject(sizeof(MixerHandle__string), MixerHandle__string__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__string__Set(MixerHandle__string* __this, ::uString* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__string*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__string__set_MixOp(MixerHandle__string* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__string__set_Priority(MixerHandle__string* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__string__Unregister(MixerHandle__string* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__string*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__string*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Uno_EventArgs__uType* MixerHandle__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<MixerHandle__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Uno_EventArgs__uType*)::uAllocClassType(sizeof(MixerHandle__Uno_EventArgs__uType), "Fuse.Animations.MixerHandle<Uno.EventArgs>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Uno_EventArgs__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::EventArgs*, float))MixerHandle__Uno_EventArgs__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Uno_EventArgs__typeof(), offsetof(MixerHandle__Uno_EventArgs__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Uno_EventArgs, Master),
        "Value", offsetof(MixerHandle__Uno_EventArgs, Value));

    return type;
}

void MixerHandle__Uno_EventArgs___ObjInit(MixerHandle__Uno_EventArgs* __this, ::app::Fuse::Animations::MasterBase__Uno_EventArgs* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_EventArgs*>(__this->Master)->Register(__this);
}

bool MixerHandle__Uno_EventArgs__get_HasValue(MixerHandle__Uno_EventArgs* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Uno_EventArgs__get_MixOp(MixerHandle__Uno_EventArgs* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Uno_EventArgs__get_Priority(MixerHandle__Uno_EventArgs* __this)
{
    return __this->_Priority;
}

::app::Uno::EventArgs* MixerHandle__Uno_EventArgs__get_RestValue(MixerHandle__Uno_EventArgs* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_EventArgs*>(__this->Master)->RestValue();
}

MixerHandle__Uno_EventArgs* MixerHandle__Uno_EventArgs__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Uno_EventArgs* master, int mode, int priority)
{
    MixerHandle__Uno_EventArgs* inst = (MixerHandle__Uno_EventArgs*)::uAllocObject(sizeof(MixerHandle__Uno_EventArgs), MixerHandle__Uno_EventArgs__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Uno_EventArgs__Set(MixerHandle__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_EventArgs*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Uno_EventArgs__set_MixOp(MixerHandle__Uno_EventArgs* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Uno_EventArgs__set_Priority(MixerHandle__Uno_EventArgs* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Uno_EventArgs__Unregister(MixerHandle__Uno_EventArgs* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_EventArgs*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_EventArgs*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Uno_Platform_iOS_StatusBarStyle__uType* MixerHandle__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<MixerHandle__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(MixerHandle__Uno_Platform_iOS_StatusBarStyle__uType), "Fuse.Animations.MixerHandle<Uno.Platform.iOS.StatusBarStyle>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Uno_Platform_iOS_StatusBarStyle__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Uno_Platform_iOS_StatusBarStyle__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Uno_Platform_iOS_StatusBarStyle__typeof(), offsetof(MixerHandle__Uno_Platform_iOS_StatusBarStyle__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Uno_Platform_iOS_StatusBarStyle, Master));

    return type;
}

void MixerHandle__Uno_Platform_iOS_StatusBarStyle___ObjInit(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*>(__this->Master)->Register(__this);
}

bool MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_HasValue(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_MixOp(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_Priority(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_Priority;
}

int MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_RestValue(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*>(__this->Master)->RestValue();
}

MixerHandle__Uno_Platform_iOS_StatusBarStyle* MixerHandle__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle* master, int mode, int priority)
{
    MixerHandle__Uno_Platform_iOS_StatusBarStyle* inst = (MixerHandle__Uno_Platform_iOS_StatusBarStyle*)::uAllocObject(sizeof(MixerHandle__Uno_Platform_iOS_StatusBarStyle), MixerHandle__Uno_Platform_iOS_StatusBarStyle__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Uno_Platform_iOS_StatusBarStyle__Set(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Uno_Platform_iOS_StatusBarStyle__set_MixOp(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Uno_Platform_iOS_StatusBarStyle__set_Priority(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Uno_Platform_iOS_StatusBarStyle__Unregister(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Uno_UX_FileSource__uType* MixerHandle__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<MixerHandle__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(MixerHandle__Uno_UX_FileSource__uType), "Fuse.Animations.MixerHandle<Uno.UX.FileSource>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Uno_UX_FileSource__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::UX::FileSource*, float))MixerHandle__Uno_UX_FileSource__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Uno_UX_FileSource__typeof(), offsetof(MixerHandle__Uno_UX_FileSource__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Uno_UX_FileSource, Master),
        "Value", offsetof(MixerHandle__Uno_UX_FileSource, Value));

    return type;
}

void MixerHandle__Uno_UX_FileSource___ObjInit(MixerHandle__Uno_UX_FileSource* __this, ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*>(__this->Master)->Register(__this);
}

bool MixerHandle__Uno_UX_FileSource__get_HasValue(MixerHandle__Uno_UX_FileSource* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Uno_UX_FileSource__get_MixOp(MixerHandle__Uno_UX_FileSource* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Uno_UX_FileSource__get_Priority(MixerHandle__Uno_UX_FileSource* __this)
{
    return __this->_Priority;
}

::app::Uno::UX::FileSource* MixerHandle__Uno_UX_FileSource__get_RestValue(MixerHandle__Uno_UX_FileSource* __this)
{
    if (__this->Master == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid MixerHandle.RestValue post-Unregister")));
    }

    return ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*>(__this->Master)->RestValue();
}

MixerHandle__Uno_UX_FileSource* MixerHandle__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource* master, int mode, int priority)
{
    MixerHandle__Uno_UX_FileSource* inst = (MixerHandle__Uno_UX_FileSource*)::uAllocObject(sizeof(MixerHandle__Uno_UX_FileSource), MixerHandle__Uno_UX_FileSource__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Uno_UX_FileSource__Set(MixerHandle__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Animations\\0.11.3\\$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Uno_UX_FileSource__set_MixOp(MixerHandle__Uno_UX_FileSource* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Uno_UX_FileSource__set_Priority(MixerHandle__Uno_UX_FileSource* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Uno_UX_FileSource__Unregister(MixerHandle__Uno_UX_FileSource* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

}}}
