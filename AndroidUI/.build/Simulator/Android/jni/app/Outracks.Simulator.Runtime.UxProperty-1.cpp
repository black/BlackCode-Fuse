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
#include <app/Outracks.Simulator.Runtime.UxProperty__bool.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__char.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__double.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__float.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__float2.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__float3.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__float4.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Animations_AnimationVariant.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Animations_Easing.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Animations_Keyframe-aacdce7f.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Animations_MixOp.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Drawing_BlendMode.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Drawing_Brush.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Drawing_DynamicBrush.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Drawing_GradientStop.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Drawing_LinearGradient.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Drawing_SolidColor.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Drawing_StaticBrush.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_Alignment.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_CachingMode.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_Element.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_HitTestMode.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_SizeUnit.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_StretchDirection.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_StretchMode.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_StretchSizing.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_TextAlignment.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_TextWrapping.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Elements_Visibility.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Font.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Gestures_Edge.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Gestures_ScrollDirections.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Layouts_Dock.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Layouts_FlowDirection.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Layouts_Metric.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Layouts_Orientation.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Navigation_Navigati-3f8596c5.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Navigation_Navigati-4ac8365e.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Navigation_NavigationEdge.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Navigation_SnapTo.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Navigation_SwipeDirection.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Navigation_SwipeEnds.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Node.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Resources_ImageSource.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Triggers_Actions_Tr-d90c514d.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Triggers_State.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Triggers_StateTransition.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__int.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__int2.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__int3.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__int4.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__long.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__object.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__short.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__string.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Uno_EventArgs.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Outracks.Simulator.Runtime.UxProperty__Uno_UX_FileSource.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Action__object__object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Func__object.h>
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
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__char.h>
#include <app/Uno.UX.ValueChangedHandler__double.h>
#include <app/Uno.UX.ValueChangedHandler__float.h>
#include <app/Uno.UX.ValueChangedHandler__float2.h>
#include <app/Uno.UX.ValueChangedHandler__float3.h>
#include <app/Uno.UX.ValueChangedHandler__float4.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_Easing.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Element.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Font.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Node.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_State.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.ValueChangedHandler__int.h>
#include <app/Uno.UX.ValueChangedHandler__int2.h>
#include <app/Uno.UX.ValueChangedHandler__int3.h>
#include <app/Uno.UX.ValueChangedHandler__int4.h>
#include <app/Uno.UX.ValueChangedHandler__long.h>
#include <app/Uno.UX.ValueChangedHandler__object.h>
#include <app/Uno.UX.ValueChangedHandler__short.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_EventArgs.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_UX_FileSource.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__bool__uType* UxProperty__bool__typeof()
{
    static ::uStaticStrong<UxProperty__bool__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__bool__uType*)::uAllocClassType(sizeof(UxProperty__bool__uType), "Outracks.Simulator.Runtime.UxProperty<bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__bool*, ::uDelegate*))UxProperty__bool__OnAddListener;
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))UxProperty__bool__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__bool*, ::uDelegate*))UxProperty__bool__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))UxProperty__bool__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__bool, _adder),
        "_getter", offsetof(UxProperty__bool, _getter),
        "_remover", offsetof(UxProperty__bool, _remover),
        "_setter", offsetof(UxProperty__bool, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__bool, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__bool, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__bool, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__bool, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__bool__New_1, 0, true, UxProperty__bool__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__bool___ObjInit_1(UxProperty__bool* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__bool* UxProperty__bool__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__bool* inst = (UxProperty__bool*)::uAllocObject(sizeof(UxProperty__bool), UxProperty__bool__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__bool__OnAddListener(UxProperty__bool* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

bool UxProperty__bool__OnGet(UxProperty__bool* __this)
{
    return ::uUnbox< bool>(::app::Uno::Bool__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__bool__OnRemoveListener(UxProperty__bool* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__bool__OnSet(UxProperty__bool* __this, bool value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Bool__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__char__uType* UxProperty__char__typeof()
{
    static ::uStaticStrong<UxProperty__char__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__char__uType*)::uAllocClassType(sizeof(UxProperty__char__uType), "Outracks.Simulator.Runtime.UxProperty<char>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__char__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__char*, ::uDelegate*))UxProperty__char__OnAddListener;
    type->__fp_OnGet = (::uChar(*)(::app::Uno::UX::Property__char*))UxProperty__char__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__char*, ::uDelegate*))UxProperty__char__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__char*, ::uChar, ::uObject*))UxProperty__char__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__char, _adder),
        "_getter", offsetof(UxProperty__char, _getter),
        "_remover", offsetof(UxProperty__char, _remover),
        "_setter", offsetof(UxProperty__char, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__char, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__char, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__char, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__char, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__char__New_1, 0, true, UxProperty__char__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__char___ObjInit_1(UxProperty__char* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__char___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__char* UxProperty__char__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__char* inst = (UxProperty__char*)::uAllocObject(sizeof(UxProperty__char), UxProperty__char__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__char__OnAddListener(UxProperty__char* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::uChar UxProperty__char__OnGet(UxProperty__char* __this)
{
    return ::uUnbox< ::uChar>(::app::Uno::Char__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__char__OnRemoveListener(UxProperty__char* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__char__OnSet(UxProperty__char* __this, ::uChar value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< ::uChar>(::app::Uno::Char__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__double__uType* UxProperty__double__typeof()
{
    static ::uStaticStrong<UxProperty__double__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__double__uType*)::uAllocClassType(sizeof(UxProperty__double__uType), "Outracks.Simulator.Runtime.UxProperty<double>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__double__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__double*, ::uDelegate*))UxProperty__double__OnAddListener;
    type->__fp_OnGet = (double(*)(::app::Uno::UX::Property__double*))UxProperty__double__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__double*, ::uDelegate*))UxProperty__double__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__double*, double, ::uObject*))UxProperty__double__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__double, _adder),
        "_getter", offsetof(UxProperty__double, _getter),
        "_remover", offsetof(UxProperty__double, _remover),
        "_setter", offsetof(UxProperty__double, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__double, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__double, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__double, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__double, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__double__New_1, 0, true, UxProperty__double__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__double___ObjInit_1(UxProperty__double* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__double___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__double* UxProperty__double__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__double* inst = (UxProperty__double*)::uAllocObject(sizeof(UxProperty__double), UxProperty__double__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__double__OnAddListener(UxProperty__double* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

double UxProperty__double__OnGet(UxProperty__double* __this)
{
    return ::uUnbox< double>(::app::Uno::Double__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__double__OnRemoveListener(UxProperty__double* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__double__OnSet(UxProperty__double* __this, double value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Double__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__float__uType* UxProperty__float__typeof()
{
    static ::uStaticStrong<UxProperty__float__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__float__uType*)::uAllocClassType(sizeof(UxProperty__float__uType), "Outracks.Simulator.Runtime.UxProperty<float>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__float__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__float*, ::uDelegate*))UxProperty__float__OnAddListener;
    type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))UxProperty__float__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__float*, ::uDelegate*))UxProperty__float__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float, ::uObject*))UxProperty__float__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__float, _adder),
        "_getter", offsetof(UxProperty__float, _getter),
        "_remover", offsetof(UxProperty__float, _remover),
        "_setter", offsetof(UxProperty__float, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__float, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__float, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__float, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__float, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__float__New_1, 0, true, UxProperty__float__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__float___ObjInit_1(UxProperty__float* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__float___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__float* UxProperty__float__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__float* inst = (UxProperty__float*)::uAllocObject(sizeof(UxProperty__float), UxProperty__float__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__float__OnAddListener(UxProperty__float* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

float UxProperty__float__OnGet(UxProperty__float* __this)
{
    return ::uUnbox< float>(::app::Uno::Float__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__float__OnRemoveListener(UxProperty__float* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__float__OnSet(UxProperty__float* __this, float value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Float__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__float2__uType* UxProperty__float2__typeof()
{
    static ::uStaticStrong<UxProperty__float2__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__float2__uType*)::uAllocClassType(sizeof(UxProperty__float2__uType), "Outracks.Simulator.Runtime.UxProperty<float2>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__float2__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__float2*, ::uDelegate*))UxProperty__float2__OnAddListener;
    type->__fp_OnGet = (::app::Uno::Float2(*)(::app::Uno::UX::Property__float2*))UxProperty__float2__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__float2*, ::uDelegate*))UxProperty__float2__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float2*, ::app::Uno::Float2, ::uObject*))UxProperty__float2__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__float2, _adder),
        "_getter", offsetof(UxProperty__float2, _getter),
        "_remover", offsetof(UxProperty__float2, _remover),
        "_setter", offsetof(UxProperty__float2, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__float2, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__float2, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__float2, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__float2, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__float2__New_1, 0, true, UxProperty__float2__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__float2___ObjInit_1(UxProperty__float2* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__float2___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__float2* UxProperty__float2__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__float2* inst = (UxProperty__float2*)::uAllocObject(sizeof(UxProperty__float2), UxProperty__float2__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__float2__OnAddListener(UxProperty__float2* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Uno::Float2 UxProperty__float2__OnGet(UxProperty__float2* __this)
{
    return ::uUnbox< ::app::Uno::Float2>(::app::Uno::Float2__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__float2__OnRemoveListener(UxProperty__float2* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__float2__OnSet(UxProperty__float2* __this, ::app::Uno::Float2 value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Float2__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__float3__uType* UxProperty__float3__typeof()
{
    static ::uStaticStrong<UxProperty__float3__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__float3__uType*)::uAllocClassType(sizeof(UxProperty__float3__uType), "Outracks.Simulator.Runtime.UxProperty<float3>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__float3__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__float3*, ::uDelegate*))UxProperty__float3__OnAddListener;
    type->__fp_OnGet = (::app::Uno::Float3(*)(::app::Uno::UX::Property__float3*))UxProperty__float3__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__float3*, ::uDelegate*))UxProperty__float3__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float3*, ::app::Uno::Float3, ::uObject*))UxProperty__float3__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__float3, _adder),
        "_getter", offsetof(UxProperty__float3, _getter),
        "_remover", offsetof(UxProperty__float3, _remover),
        "_setter", offsetof(UxProperty__float3, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__float3, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__float3, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__float3, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__float3, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__float3__New_1, 0, true, UxProperty__float3__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__float3___ObjInit_1(UxProperty__float3* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__float3___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__float3* UxProperty__float3__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__float3* inst = (UxProperty__float3*)::uAllocObject(sizeof(UxProperty__float3), UxProperty__float3__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__float3__OnAddListener(UxProperty__float3* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Uno::Float3 UxProperty__float3__OnGet(UxProperty__float3* __this)
{
    return ::uUnbox< ::app::Uno::Float3>(::app::Uno::Float3__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__float3__OnRemoveListener(UxProperty__float3* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__float3__OnSet(UxProperty__float3* __this, ::app::Uno::Float3 value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Float3__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__float4__uType* UxProperty__float4__typeof()
{
    static ::uStaticStrong<UxProperty__float4__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__float4__uType*)::uAllocClassType(sizeof(UxProperty__float4__uType), "Outracks.Simulator.Runtime.UxProperty<float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__float4__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__float4*, ::uDelegate*))UxProperty__float4__OnAddListener;
    type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))UxProperty__float4__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__float4*, ::uDelegate*))UxProperty__float4__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4, ::uObject*))UxProperty__float4__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__float4, _adder),
        "_getter", offsetof(UxProperty__float4, _getter),
        "_remover", offsetof(UxProperty__float4, _remover),
        "_setter", offsetof(UxProperty__float4, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__float4, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__float4, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__float4, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__float4, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__float4__New_1, 0, true, UxProperty__float4__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__float4___ObjInit_1(UxProperty__float4* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__float4___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__float4* UxProperty__float4__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__float4* inst = (UxProperty__float4*)::uAllocObject(sizeof(UxProperty__float4), UxProperty__float4__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__float4__OnAddListener(UxProperty__float4* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Uno::Float4 UxProperty__float4__OnGet(UxProperty__float4* __this)
{
    return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__float4__OnRemoveListener(UxProperty__float4* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__float4__OnSet(UxProperty__float4* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Float4__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Animations_AnimationVariant__uType* UxProperty__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Animations_AnimationVariant__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.AnimationVariant>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Animations_AnimationVariant__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*, ::uDelegate*))UxProperty__Fuse_Animations_AnimationVariant__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*))UxProperty__Fuse_Animations_AnimationVariant__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*, ::uDelegate*))UxProperty__Fuse_Animations_AnimationVariant__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*, int, ::uObject*))UxProperty__Fuse_Animations_AnimationVariant__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Animations_AnimationVariant, _adder),
        "_getter", offsetof(UxProperty__Fuse_Animations_AnimationVariant, _getter),
        "_remover", offsetof(UxProperty__Fuse_Animations_AnimationVariant, _remover),
        "_setter", offsetof(UxProperty__Fuse_Animations_AnimationVariant, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Animations_AnimationVariant, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Animations_AnimationVariant, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Animations_AnimationVariant, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Animations_AnimationVariant, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Animations_AnimationVariant__New_1, 0, true, UxProperty__Fuse_Animations_AnimationVariant__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Animations_AnimationVariant___ObjInit_1(UxProperty__Fuse_Animations_AnimationVariant* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Animations_AnimationVariant* UxProperty__Fuse_Animations_AnimationVariant__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Animations_AnimationVariant* inst = (UxProperty__Fuse_Animations_AnimationVariant*)::uAllocObject(sizeof(UxProperty__Fuse_Animations_AnimationVariant), UxProperty__Fuse_Animations_AnimationVariant__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Animations_AnimationVariant__OnAddListener(UxProperty__Fuse_Animations_AnimationVariant* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Animations_AnimationVariant__OnGet(UxProperty__Fuse_Animations_AnimationVariant* __this)
{
    return ::uUnbox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Animations_AnimationVariant__OnRemoveListener(UxProperty__Fuse_Animations_AnimationVariant* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Animations_AnimationVariant__OnSet(UxProperty__Fuse_Animations_AnimationVariant* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Animations::AnimationVariant__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Animations_Easing__uType* UxProperty__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Animations_Easing__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.Easing>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Animations_Easing__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Animations_Easing*, ::uDelegate*))UxProperty__Fuse_Animations_Easing__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Animations_Easing*))UxProperty__Fuse_Animations_Easing__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Animations_Easing*, ::uDelegate*))UxProperty__Fuse_Animations_Easing__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Animations_Easing*, int, ::uObject*))UxProperty__Fuse_Animations_Easing__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Animations_Easing, _adder),
        "_getter", offsetof(UxProperty__Fuse_Animations_Easing, _getter),
        "_remover", offsetof(UxProperty__Fuse_Animations_Easing, _remover),
        "_setter", offsetof(UxProperty__Fuse_Animations_Easing, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Animations_Easing, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Animations_Easing, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Animations_Easing, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Animations_Easing, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Animations_Easing__New_1, 0, true, UxProperty__Fuse_Animations_Easing__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Animations_Easing___ObjInit_1(UxProperty__Fuse_Animations_Easing* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Animations_Easing___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Animations_Easing* UxProperty__Fuse_Animations_Easing__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Animations_Easing* inst = (UxProperty__Fuse_Animations_Easing*)::uAllocObject(sizeof(UxProperty__Fuse_Animations_Easing), UxProperty__Fuse_Animations_Easing__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Animations_Easing__OnAddListener(UxProperty__Fuse_Animations_Easing* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Animations_Easing__OnGet(UxProperty__Fuse_Animations_Easing* __this)
{
    return ::uUnbox< int>(::app::Fuse::Animations::Easing__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Animations_Easing__OnRemoveListener(UxProperty__Fuse_Animations_Easing* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Animations_Easing__OnSet(UxProperty__Fuse_Animations_Easing* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Animations::Easing__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Animations_KeyframeInterpolation__uType* UxProperty__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Animations_KeyframeInterpolation__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.KeyframeInterpolation>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*, ::uDelegate*))UxProperty__Fuse_Animations_KeyframeInterpolation__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*))UxProperty__Fuse_Animations_KeyframeInterpolation__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*, ::uDelegate*))UxProperty__Fuse_Animations_KeyframeInterpolation__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation*, int, ::uObject*))UxProperty__Fuse_Animations_KeyframeInterpolation__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Animations_KeyframeInterpolation, _adder),
        "_getter", offsetof(UxProperty__Fuse_Animations_KeyframeInterpolation, _getter),
        "_remover", offsetof(UxProperty__Fuse_Animations_KeyframeInterpolation, _remover),
        "_setter", offsetof(UxProperty__Fuse_Animations_KeyframeInterpolation, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Animations_KeyframeInterpolation, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Animations_KeyframeInterpolation, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Animations_KeyframeInterpolation, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Animations_KeyframeInterpolation, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Animations_KeyframeInterpolation__New_1, 0, true, UxProperty__Fuse_Animations_KeyframeInterpolation__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Animations_KeyframeInterpolation___ObjInit_1(UxProperty__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Animations_KeyframeInterpolation* UxProperty__Fuse_Animations_KeyframeInterpolation__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Animations_KeyframeInterpolation* inst = (UxProperty__Fuse_Animations_KeyframeInterpolation*)::uAllocObject(sizeof(UxProperty__Fuse_Animations_KeyframeInterpolation), UxProperty__Fuse_Animations_KeyframeInterpolation__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Animations_KeyframeInterpolation__OnAddListener(UxProperty__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Animations_KeyframeInterpolation__OnGet(UxProperty__Fuse_Animations_KeyframeInterpolation* __this)
{
    return ::uUnbox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Animations_KeyframeInterpolation__OnRemoveListener(UxProperty__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Animations_KeyframeInterpolation__OnSet(UxProperty__Fuse_Animations_KeyframeInterpolation* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Animations::KeyframeInterpolation__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Animations_MixOp__uType* UxProperty__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Animations_MixOp__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Animations.MixOp>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Animations_MixOp__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Animations_MixOp*, ::uDelegate*))UxProperty__Fuse_Animations_MixOp__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Animations_MixOp*))UxProperty__Fuse_Animations_MixOp__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Animations_MixOp*, ::uDelegate*))UxProperty__Fuse_Animations_MixOp__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Animations_MixOp*, int, ::uObject*))UxProperty__Fuse_Animations_MixOp__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Animations_MixOp, _adder),
        "_getter", offsetof(UxProperty__Fuse_Animations_MixOp, _getter),
        "_remover", offsetof(UxProperty__Fuse_Animations_MixOp, _remover),
        "_setter", offsetof(UxProperty__Fuse_Animations_MixOp, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Animations_MixOp, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Animations_MixOp, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Animations_MixOp, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Animations_MixOp, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Animations_MixOp__New_1, 0, true, UxProperty__Fuse_Animations_MixOp__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Animations_MixOp___ObjInit_1(UxProperty__Fuse_Animations_MixOp* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Animations_MixOp___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Animations_MixOp* UxProperty__Fuse_Animations_MixOp__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Animations_MixOp* inst = (UxProperty__Fuse_Animations_MixOp*)::uAllocObject(sizeof(UxProperty__Fuse_Animations_MixOp), UxProperty__Fuse_Animations_MixOp__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Animations_MixOp__OnAddListener(UxProperty__Fuse_Animations_MixOp* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Animations_MixOp__OnGet(UxProperty__Fuse_Animations_MixOp* __this)
{
    return ::uUnbox< int>(::app::Fuse::Animations::MixOp__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Animations_MixOp__OnRemoveListener(UxProperty__Fuse_Animations_MixOp* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Animations_MixOp__OnSet(UxProperty__Fuse_Animations_MixOp* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Animations::MixOp__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Drawing_BlendMode__uType* UxProperty__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Drawing_BlendMode__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.BlendMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Drawing_BlendMode__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_BlendMode*, ::uDelegate*))UxProperty__Fuse_Drawing_BlendMode__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Drawing_BlendMode*))UxProperty__Fuse_Drawing_BlendMode__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_BlendMode*, ::uDelegate*))UxProperty__Fuse_Drawing_BlendMode__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_BlendMode*, int, ::uObject*))UxProperty__Fuse_Drawing_BlendMode__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Drawing_BlendMode, _adder),
        "_getter", offsetof(UxProperty__Fuse_Drawing_BlendMode, _getter),
        "_remover", offsetof(UxProperty__Fuse_Drawing_BlendMode, _remover),
        "_setter", offsetof(UxProperty__Fuse_Drawing_BlendMode, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Drawing_BlendMode, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Drawing_BlendMode, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Drawing_BlendMode, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Drawing_BlendMode, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Drawing_BlendMode__New_1, 0, true, UxProperty__Fuse_Drawing_BlendMode__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Drawing_BlendMode___ObjInit_1(UxProperty__Fuse_Drawing_BlendMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Drawing_BlendMode___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Drawing_BlendMode* UxProperty__Fuse_Drawing_BlendMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Drawing_BlendMode* inst = (UxProperty__Fuse_Drawing_BlendMode*)::uAllocObject(sizeof(UxProperty__Fuse_Drawing_BlendMode), UxProperty__Fuse_Drawing_BlendMode__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Drawing_BlendMode__OnAddListener(UxProperty__Fuse_Drawing_BlendMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Drawing_BlendMode__OnGet(UxProperty__Fuse_Drawing_BlendMode* __this)
{
    return ::uUnbox< int>(::app::Fuse::Drawing::BlendMode__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Drawing_BlendMode__OnRemoveListener(UxProperty__Fuse_Drawing_BlendMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Drawing_BlendMode__OnSet(UxProperty__Fuse_Drawing_BlendMode* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Drawing::BlendMode__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Drawing_Brush__uType* UxProperty__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Drawing_Brush__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.Brush>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Drawing_Brush__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_Brush*, ::uDelegate*))UxProperty__Fuse_Drawing_Brush__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Drawing::Brush*(*)(::app::Uno::UX::Property__Fuse_Drawing_Brush*))UxProperty__Fuse_Drawing_Brush__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_Brush*, ::uDelegate*))UxProperty__Fuse_Drawing_Brush__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_Brush*, ::app::Fuse::Drawing::Brush*, ::uObject*))UxProperty__Fuse_Drawing_Brush__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Drawing_Brush, _adder),
        "_getter", offsetof(UxProperty__Fuse_Drawing_Brush, _getter),
        "_remover", offsetof(UxProperty__Fuse_Drawing_Brush, _remover),
        "_setter", offsetof(UxProperty__Fuse_Drawing_Brush, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Drawing_Brush, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Drawing_Brush, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Drawing_Brush, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Drawing_Brush, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Drawing_Brush__New_1, 0, true, UxProperty__Fuse_Drawing_Brush__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Drawing_Brush___ObjInit_1(UxProperty__Fuse_Drawing_Brush* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Drawing_Brush___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Drawing_Brush* UxProperty__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Drawing_Brush* inst = (UxProperty__Fuse_Drawing_Brush*)::uAllocObject(sizeof(UxProperty__Fuse_Drawing_Brush), UxProperty__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Drawing_Brush__OnAddListener(UxProperty__Fuse_Drawing_Brush* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Drawing::Brush* UxProperty__Fuse_Drawing_Brush__OnGet(UxProperty__Fuse_Drawing_Brush* __this)
{
    return ::uCast< ::app::Fuse::Drawing::Brush*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Drawing::Brush__typeof());
}

void UxProperty__Fuse_Drawing_Brush__OnRemoveListener(UxProperty__Fuse_Drawing_Brush* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Drawing_Brush__OnSet(UxProperty__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Drawing_DynamicBrush__uType* UxProperty__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Drawing_DynamicBrush__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.DynamicBrush>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*, ::uDelegate*))UxProperty__Fuse_Drawing_DynamicBrush__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Drawing::DynamicBrush*(*)(::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*))UxProperty__Fuse_Drawing_DynamicBrush__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*, ::uDelegate*))UxProperty__Fuse_Drawing_DynamicBrush__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*, ::app::Fuse::Drawing::DynamicBrush*, ::uObject*))UxProperty__Fuse_Drawing_DynamicBrush__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Drawing_DynamicBrush, _adder),
        "_getter", offsetof(UxProperty__Fuse_Drawing_DynamicBrush, _getter),
        "_remover", offsetof(UxProperty__Fuse_Drawing_DynamicBrush, _remover),
        "_setter", offsetof(UxProperty__Fuse_Drawing_DynamicBrush, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Drawing_DynamicBrush, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Drawing_DynamicBrush, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Drawing_DynamicBrush, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Drawing_DynamicBrush, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Drawing_DynamicBrush__New_1, 0, true, UxProperty__Fuse_Drawing_DynamicBrush__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Drawing_DynamicBrush___ObjInit_1(UxProperty__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Drawing_DynamicBrush* UxProperty__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Drawing_DynamicBrush* inst = (UxProperty__Fuse_Drawing_DynamicBrush*)::uAllocObject(sizeof(UxProperty__Fuse_Drawing_DynamicBrush), UxProperty__Fuse_Drawing_DynamicBrush__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Drawing_DynamicBrush__OnAddListener(UxProperty__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Drawing::DynamicBrush* UxProperty__Fuse_Drawing_DynamicBrush__OnGet(UxProperty__Fuse_Drawing_DynamicBrush* __this)
{
    return ::uCast< ::app::Fuse::Drawing::DynamicBrush*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Drawing::DynamicBrush__typeof());
}

void UxProperty__Fuse_Drawing_DynamicBrush__OnRemoveListener(UxProperty__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Drawing_DynamicBrush__OnSet(UxProperty__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Drawing_GradientStop__uType* UxProperty__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Drawing_GradientStop__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.GradientStop>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Drawing_GradientStop__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_GradientStop*, ::uDelegate*))UxProperty__Fuse_Drawing_GradientStop__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Drawing::GradientStop*(*)(::app::Uno::UX::Property__Fuse_Drawing_GradientStop*))UxProperty__Fuse_Drawing_GradientStop__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_GradientStop*, ::uDelegate*))UxProperty__Fuse_Drawing_GradientStop__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_GradientStop*, ::app::Fuse::Drawing::GradientStop*, ::uObject*))UxProperty__Fuse_Drawing_GradientStop__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Drawing_GradientStop, _adder),
        "_getter", offsetof(UxProperty__Fuse_Drawing_GradientStop, _getter),
        "_remover", offsetof(UxProperty__Fuse_Drawing_GradientStop, _remover),
        "_setter", offsetof(UxProperty__Fuse_Drawing_GradientStop, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Drawing_GradientStop, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Drawing_GradientStop, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Drawing_GradientStop, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Drawing_GradientStop, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Drawing_GradientStop__New_1, 0, true, UxProperty__Fuse_Drawing_GradientStop__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Drawing_GradientStop___ObjInit_1(UxProperty__Fuse_Drawing_GradientStop* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Drawing_GradientStop___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Drawing_GradientStop* UxProperty__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Drawing_GradientStop* inst = (UxProperty__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(UxProperty__Fuse_Drawing_GradientStop), UxProperty__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Drawing_GradientStop__OnAddListener(UxProperty__Fuse_Drawing_GradientStop* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Drawing::GradientStop* UxProperty__Fuse_Drawing_GradientStop__OnGet(UxProperty__Fuse_Drawing_GradientStop* __this)
{
    return ::uCast< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Drawing::GradientStop__typeof());
}

void UxProperty__Fuse_Drawing_GradientStop__OnRemoveListener(UxProperty__Fuse_Drawing_GradientStop* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Drawing_GradientStop__OnSet(UxProperty__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Drawing_LinearGradient__uType* UxProperty__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Drawing_LinearGradient__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.LinearGradient>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*, ::uDelegate*))UxProperty__Fuse_Drawing_LinearGradient__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Drawing::LinearGradient*(*)(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*))UxProperty__Fuse_Drawing_LinearGradient__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*, ::uDelegate*))UxProperty__Fuse_Drawing_LinearGradient__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_LinearGradient*, ::app::Fuse::Drawing::LinearGradient*, ::uObject*))UxProperty__Fuse_Drawing_LinearGradient__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Drawing_LinearGradient, _adder),
        "_getter", offsetof(UxProperty__Fuse_Drawing_LinearGradient, _getter),
        "_remover", offsetof(UxProperty__Fuse_Drawing_LinearGradient, _remover),
        "_setter", offsetof(UxProperty__Fuse_Drawing_LinearGradient, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Drawing_LinearGradient, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Drawing_LinearGradient, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Drawing_LinearGradient, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Drawing_LinearGradient, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Drawing_LinearGradient__New_1, 0, true, UxProperty__Fuse_Drawing_LinearGradient__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Drawing_LinearGradient___ObjInit_1(UxProperty__Fuse_Drawing_LinearGradient* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Drawing_LinearGradient* UxProperty__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Drawing_LinearGradient* inst = (UxProperty__Fuse_Drawing_LinearGradient*)::uAllocObject(sizeof(UxProperty__Fuse_Drawing_LinearGradient), UxProperty__Fuse_Drawing_LinearGradient__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Drawing_LinearGradient__OnAddListener(UxProperty__Fuse_Drawing_LinearGradient* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Drawing::LinearGradient* UxProperty__Fuse_Drawing_LinearGradient__OnGet(UxProperty__Fuse_Drawing_LinearGradient* __this)
{
    return ::uCast< ::app::Fuse::Drawing::LinearGradient*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Drawing::LinearGradient__typeof());
}

void UxProperty__Fuse_Drawing_LinearGradient__OnRemoveListener(UxProperty__Fuse_Drawing_LinearGradient* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Drawing_LinearGradient__OnSet(UxProperty__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Drawing_SolidColor__uType* UxProperty__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Drawing_SolidColor__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.SolidColor>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Drawing_SolidColor__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_SolidColor*, ::uDelegate*))UxProperty__Fuse_Drawing_SolidColor__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Drawing::SolidColor*(*)(::app::Uno::UX::Property__Fuse_Drawing_SolidColor*))UxProperty__Fuse_Drawing_SolidColor__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_SolidColor*, ::uDelegate*))UxProperty__Fuse_Drawing_SolidColor__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_SolidColor*, ::app::Fuse::Drawing::SolidColor*, ::uObject*))UxProperty__Fuse_Drawing_SolidColor__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Drawing_SolidColor, _adder),
        "_getter", offsetof(UxProperty__Fuse_Drawing_SolidColor, _getter),
        "_remover", offsetof(UxProperty__Fuse_Drawing_SolidColor, _remover),
        "_setter", offsetof(UxProperty__Fuse_Drawing_SolidColor, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Drawing_SolidColor, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Drawing_SolidColor, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Drawing_SolidColor, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Drawing_SolidColor, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Drawing_SolidColor__New_1, 0, true, UxProperty__Fuse_Drawing_SolidColor__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Drawing_SolidColor___ObjInit_1(UxProperty__Fuse_Drawing_SolidColor* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Drawing_SolidColor___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Drawing_SolidColor* UxProperty__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Drawing_SolidColor* inst = (UxProperty__Fuse_Drawing_SolidColor*)::uAllocObject(sizeof(UxProperty__Fuse_Drawing_SolidColor), UxProperty__Fuse_Drawing_SolidColor__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Drawing_SolidColor__OnAddListener(UxProperty__Fuse_Drawing_SolidColor* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Drawing::SolidColor* UxProperty__Fuse_Drawing_SolidColor__OnGet(UxProperty__Fuse_Drawing_SolidColor* __this)
{
    return ::uCast< ::app::Fuse::Drawing::SolidColor*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Drawing::SolidColor__typeof());
}

void UxProperty__Fuse_Drawing_SolidColor__OnRemoveListener(UxProperty__Fuse_Drawing_SolidColor* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Drawing_SolidColor__OnSet(UxProperty__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Drawing_StaticBrush__uType* UxProperty__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Drawing_StaticBrush__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Drawing.StaticBrush>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*, ::uDelegate*))UxProperty__Fuse_Drawing_StaticBrush__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Drawing::StaticBrush*(*)(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*))UxProperty__Fuse_Drawing_StaticBrush__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*, ::uDelegate*))UxProperty__Fuse_Drawing_StaticBrush__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*, ::app::Fuse::Drawing::StaticBrush*, ::uObject*))UxProperty__Fuse_Drawing_StaticBrush__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Drawing_StaticBrush, _adder),
        "_getter", offsetof(UxProperty__Fuse_Drawing_StaticBrush, _getter),
        "_remover", offsetof(UxProperty__Fuse_Drawing_StaticBrush, _remover),
        "_setter", offsetof(UxProperty__Fuse_Drawing_StaticBrush, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Drawing_StaticBrush, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Drawing_StaticBrush, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Drawing_StaticBrush, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Drawing_StaticBrush, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Drawing_StaticBrush__New_1, 0, true, UxProperty__Fuse_Drawing_StaticBrush__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Drawing_StaticBrush___ObjInit_1(UxProperty__Fuse_Drawing_StaticBrush* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Drawing_StaticBrush* UxProperty__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Drawing_StaticBrush* inst = (UxProperty__Fuse_Drawing_StaticBrush*)::uAllocObject(sizeof(UxProperty__Fuse_Drawing_StaticBrush), UxProperty__Fuse_Drawing_StaticBrush__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Drawing_StaticBrush__OnAddListener(UxProperty__Fuse_Drawing_StaticBrush* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Drawing::StaticBrush* UxProperty__Fuse_Drawing_StaticBrush__OnGet(UxProperty__Fuse_Drawing_StaticBrush* __this)
{
    return ::uCast< ::app::Fuse::Drawing::StaticBrush*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Drawing::StaticBrush__typeof());
}

void UxProperty__Fuse_Drawing_StaticBrush__OnRemoveListener(UxProperty__Fuse_Drawing_StaticBrush* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Drawing_StaticBrush__OnSet(UxProperty__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_Alignment__uType* UxProperty__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_Alignment__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Alignment>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_Alignment__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Alignment*, ::uDelegate*))UxProperty__Fuse_Elements_Alignment__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_Alignment*))UxProperty__Fuse_Elements_Alignment__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Alignment*, ::uDelegate*))UxProperty__Fuse_Elements_Alignment__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Alignment*, int, ::uObject*))UxProperty__Fuse_Elements_Alignment__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_Alignment, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_Alignment, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_Alignment, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_Alignment, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_Alignment, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_Alignment, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_Alignment, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_Alignment, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_Alignment__New_1, 0, true, UxProperty__Fuse_Elements_Alignment__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_Alignment___ObjInit_1(UxProperty__Fuse_Elements_Alignment* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_Alignment___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_Alignment* UxProperty__Fuse_Elements_Alignment__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_Alignment* inst = (UxProperty__Fuse_Elements_Alignment*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_Alignment), UxProperty__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_Alignment__OnAddListener(UxProperty__Fuse_Elements_Alignment* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_Alignment__OnGet(UxProperty__Fuse_Elements_Alignment* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_Alignment__OnRemoveListener(UxProperty__Fuse_Elements_Alignment* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_Alignment__OnSet(UxProperty__Fuse_Elements_Alignment* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_CachingMode__uType* UxProperty__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_CachingMode__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.CachingMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_CachingMode__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_CachingMode*, ::uDelegate*))UxProperty__Fuse_Elements_CachingMode__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_CachingMode*))UxProperty__Fuse_Elements_CachingMode__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_CachingMode*, ::uDelegate*))UxProperty__Fuse_Elements_CachingMode__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_CachingMode*, int, ::uObject*))UxProperty__Fuse_Elements_CachingMode__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_CachingMode, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_CachingMode, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_CachingMode, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_CachingMode, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_CachingMode, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_CachingMode, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_CachingMode, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_CachingMode, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_CachingMode__New_1, 0, true, UxProperty__Fuse_Elements_CachingMode__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_CachingMode___ObjInit_1(UxProperty__Fuse_Elements_CachingMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_CachingMode___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_CachingMode* UxProperty__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_CachingMode* inst = (UxProperty__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_CachingMode), UxProperty__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_CachingMode__OnAddListener(UxProperty__Fuse_Elements_CachingMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_CachingMode__OnGet(UxProperty__Fuse_Elements_CachingMode* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::CachingMode__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_CachingMode__OnRemoveListener(UxProperty__Fuse_Elements_CachingMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_CachingMode__OnSet(UxProperty__Fuse_Elements_CachingMode* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_Element__uType* UxProperty__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_Element__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Element>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_Element__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Element*, ::uDelegate*))UxProperty__Fuse_Elements_Element__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Elements::Element*(*)(::app::Uno::UX::Property__Fuse_Elements_Element*))UxProperty__Fuse_Elements_Element__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Element*, ::uDelegate*))UxProperty__Fuse_Elements_Element__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Element*, ::app::Fuse::Elements::Element*, ::uObject*))UxProperty__Fuse_Elements_Element__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_Element, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_Element, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_Element, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_Element, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_Element, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_Element, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_Element, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_Element, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_Element__New_1, 0, true, UxProperty__Fuse_Elements_Element__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_Element___ObjInit_1(UxProperty__Fuse_Elements_Element* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_Element___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_Element* UxProperty__Fuse_Elements_Element__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_Element* inst = (UxProperty__Fuse_Elements_Element*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_Element), UxProperty__Fuse_Elements_Element__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_Element__OnAddListener(UxProperty__Fuse_Elements_Element* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Elements::Element* UxProperty__Fuse_Elements_Element__OnGet(UxProperty__Fuse_Elements_Element* __this)
{
    return ::uCast< ::app::Fuse::Elements::Element*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Elements::Element__typeof());
}

void UxProperty__Fuse_Elements_Element__OnRemoveListener(UxProperty__Fuse_Elements_Element* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_Element__OnSet(UxProperty__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_HitTestMode__uType* UxProperty__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_HitTestMode__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.HitTestMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_HitTestMode__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_HitTestMode*, ::uDelegate*))UxProperty__Fuse_Elements_HitTestMode__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_HitTestMode*))UxProperty__Fuse_Elements_HitTestMode__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_HitTestMode*, ::uDelegate*))UxProperty__Fuse_Elements_HitTestMode__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_HitTestMode*, int, ::uObject*))UxProperty__Fuse_Elements_HitTestMode__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_HitTestMode, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_HitTestMode, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_HitTestMode, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_HitTestMode, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_HitTestMode, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_HitTestMode, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_HitTestMode, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_HitTestMode, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_HitTestMode__New_1, 0, true, UxProperty__Fuse_Elements_HitTestMode__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_HitTestMode___ObjInit_1(UxProperty__Fuse_Elements_HitTestMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_HitTestMode___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_HitTestMode* UxProperty__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_HitTestMode* inst = (UxProperty__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_HitTestMode), UxProperty__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_HitTestMode__OnAddListener(UxProperty__Fuse_Elements_HitTestMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_HitTestMode__OnGet(UxProperty__Fuse_Elements_HitTestMode* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::HitTestMode__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_HitTestMode__OnRemoveListener(UxProperty__Fuse_Elements_HitTestMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_HitTestMode__OnSet(UxProperty__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_SizeUnit__uType* UxProperty__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_SizeUnit__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.SizeUnit>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_SizeUnit__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_SizeUnit*, ::uDelegate*))UxProperty__Fuse_Elements_SizeUnit__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_SizeUnit*))UxProperty__Fuse_Elements_SizeUnit__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_SizeUnit*, ::uDelegate*))UxProperty__Fuse_Elements_SizeUnit__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_SizeUnit*, int, ::uObject*))UxProperty__Fuse_Elements_SizeUnit__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_SizeUnit, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_SizeUnit, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_SizeUnit, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_SizeUnit, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_SizeUnit, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_SizeUnit, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_SizeUnit, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_SizeUnit, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_SizeUnit__New_1, 0, true, UxProperty__Fuse_Elements_SizeUnit__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_SizeUnit___ObjInit_1(UxProperty__Fuse_Elements_SizeUnit* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_SizeUnit___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_SizeUnit* UxProperty__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_SizeUnit* inst = (UxProperty__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_SizeUnit), UxProperty__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_SizeUnit__OnAddListener(UxProperty__Fuse_Elements_SizeUnit* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_SizeUnit__OnGet(UxProperty__Fuse_Elements_SizeUnit* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_SizeUnit__OnRemoveListener(UxProperty__Fuse_Elements_SizeUnit* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_SizeUnit__OnSet(UxProperty__Fuse_Elements_SizeUnit* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_StretchDirection__uType* UxProperty__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_StretchDirection__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchDirection>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_StretchDirection__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchDirection*, ::uDelegate*))UxProperty__Fuse_Elements_StretchDirection__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_StretchDirection*))UxProperty__Fuse_Elements_StretchDirection__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchDirection*, ::uDelegate*))UxProperty__Fuse_Elements_StretchDirection__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchDirection*, int, ::uObject*))UxProperty__Fuse_Elements_StretchDirection__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_StretchDirection, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_StretchDirection, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_StretchDirection, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_StretchDirection, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_StretchDirection, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_StretchDirection, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_StretchDirection, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_StretchDirection, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_StretchDirection__New_1, 0, true, UxProperty__Fuse_Elements_StretchDirection__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_StretchDirection___ObjInit_1(UxProperty__Fuse_Elements_StretchDirection* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_StretchDirection___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_StretchDirection* UxProperty__Fuse_Elements_StretchDirection__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_StretchDirection* inst = (UxProperty__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_StretchDirection), UxProperty__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_StretchDirection__OnAddListener(UxProperty__Fuse_Elements_StretchDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_StretchDirection__OnGet(UxProperty__Fuse_Elements_StretchDirection* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::StretchDirection__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_StretchDirection__OnRemoveListener(UxProperty__Fuse_Elements_StretchDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_StretchDirection__OnSet(UxProperty__Fuse_Elements_StretchDirection* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_StretchMode__uType* UxProperty__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_StretchMode__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_StretchMode__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchMode*, ::uDelegate*))UxProperty__Fuse_Elements_StretchMode__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_StretchMode*))UxProperty__Fuse_Elements_StretchMode__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchMode*, ::uDelegate*))UxProperty__Fuse_Elements_StretchMode__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchMode*, int, ::uObject*))UxProperty__Fuse_Elements_StretchMode__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_StretchMode, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_StretchMode, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_StretchMode, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_StretchMode, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_StretchMode, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_StretchMode, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_StretchMode, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_StretchMode, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_StretchMode__New_1, 0, true, UxProperty__Fuse_Elements_StretchMode__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_StretchMode___ObjInit_1(UxProperty__Fuse_Elements_StretchMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_StretchMode___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_StretchMode* UxProperty__Fuse_Elements_StretchMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_StretchMode* inst = (UxProperty__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_StretchMode), UxProperty__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_StretchMode__OnAddListener(UxProperty__Fuse_Elements_StretchMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_StretchMode__OnGet(UxProperty__Fuse_Elements_StretchMode* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::StretchMode__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_StretchMode__OnRemoveListener(UxProperty__Fuse_Elements_StretchMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_StretchMode__OnSet(UxProperty__Fuse_Elements_StretchMode* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_StretchSizing__uType* UxProperty__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_StretchSizing__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.StretchSizing>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_StretchSizing__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchSizing*, ::uDelegate*))UxProperty__Fuse_Elements_StretchSizing__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_StretchSizing*))UxProperty__Fuse_Elements_StretchSizing__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchSizing*, ::uDelegate*))UxProperty__Fuse_Elements_StretchSizing__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_StretchSizing*, int, ::uObject*))UxProperty__Fuse_Elements_StretchSizing__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_StretchSizing, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_StretchSizing, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_StretchSizing, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_StretchSizing, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_StretchSizing, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_StretchSizing, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_StretchSizing, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_StretchSizing, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_StretchSizing__New_1, 0, true, UxProperty__Fuse_Elements_StretchSizing__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_StretchSizing___ObjInit_1(UxProperty__Fuse_Elements_StretchSizing* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_StretchSizing___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_StretchSizing* UxProperty__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_StretchSizing* inst = (UxProperty__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_StretchSizing), UxProperty__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_StretchSizing__OnAddListener(UxProperty__Fuse_Elements_StretchSizing* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_StretchSizing__OnGet(UxProperty__Fuse_Elements_StretchSizing* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::StretchSizing__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_StretchSizing__OnRemoveListener(UxProperty__Fuse_Elements_StretchSizing* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_StretchSizing__OnSet(UxProperty__Fuse_Elements_StretchSizing* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_TextAlignment__uType* UxProperty__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_TextAlignment__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.TextAlignment>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_TextAlignment__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_TextAlignment*, ::uDelegate*))UxProperty__Fuse_Elements_TextAlignment__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_TextAlignment*))UxProperty__Fuse_Elements_TextAlignment__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_TextAlignment*, ::uDelegate*))UxProperty__Fuse_Elements_TextAlignment__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_TextAlignment*, int, ::uObject*))UxProperty__Fuse_Elements_TextAlignment__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_TextAlignment, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_TextAlignment, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_TextAlignment, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_TextAlignment, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_TextAlignment, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_TextAlignment, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_TextAlignment, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_TextAlignment, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_TextAlignment__New_1, 0, true, UxProperty__Fuse_Elements_TextAlignment__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_TextAlignment___ObjInit_1(UxProperty__Fuse_Elements_TextAlignment* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_TextAlignment___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_TextAlignment* UxProperty__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_TextAlignment* inst = (UxProperty__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_TextAlignment), UxProperty__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_TextAlignment__OnAddListener(UxProperty__Fuse_Elements_TextAlignment* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_TextAlignment__OnGet(UxProperty__Fuse_Elements_TextAlignment* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::TextAlignment__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_TextAlignment__OnRemoveListener(UxProperty__Fuse_Elements_TextAlignment* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_TextAlignment__OnSet(UxProperty__Fuse_Elements_TextAlignment* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_TextWrapping__uType* UxProperty__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_TextWrapping__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.TextWrapping>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_TextWrapping__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_TextWrapping*, ::uDelegate*))UxProperty__Fuse_Elements_TextWrapping__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_TextWrapping*))UxProperty__Fuse_Elements_TextWrapping__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_TextWrapping*, ::uDelegate*))UxProperty__Fuse_Elements_TextWrapping__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_TextWrapping*, int, ::uObject*))UxProperty__Fuse_Elements_TextWrapping__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_TextWrapping, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_TextWrapping, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_TextWrapping, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_TextWrapping, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_TextWrapping, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_TextWrapping, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_TextWrapping, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_TextWrapping, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_TextWrapping__New_1, 0, true, UxProperty__Fuse_Elements_TextWrapping__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_TextWrapping___ObjInit_1(UxProperty__Fuse_Elements_TextWrapping* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_TextWrapping___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_TextWrapping* UxProperty__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_TextWrapping* inst = (UxProperty__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_TextWrapping), UxProperty__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_TextWrapping__OnAddListener(UxProperty__Fuse_Elements_TextWrapping* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_TextWrapping__OnGet(UxProperty__Fuse_Elements_TextWrapping* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::TextWrapping__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_TextWrapping__OnRemoveListener(UxProperty__Fuse_Elements_TextWrapping* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_TextWrapping__OnSet(UxProperty__Fuse_Elements_TextWrapping* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Elements_Visibility__uType* UxProperty__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Elements_Visibility__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Elements.Visibility>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Visibility*, ::uDelegate*))UxProperty__Fuse_Elements_Visibility__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_Visibility*))UxProperty__Fuse_Elements_Visibility__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Visibility*, ::uDelegate*))UxProperty__Fuse_Elements_Visibility__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Visibility*, int, ::uObject*))UxProperty__Fuse_Elements_Visibility__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Elements_Visibility, _adder),
        "_getter", offsetof(UxProperty__Fuse_Elements_Visibility, _getter),
        "_remover", offsetof(UxProperty__Fuse_Elements_Visibility, _remover),
        "_setter", offsetof(UxProperty__Fuse_Elements_Visibility, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Elements_Visibility, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Elements_Visibility, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Elements_Visibility, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Elements_Visibility, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Elements_Visibility__New_1, 0, true, UxProperty__Fuse_Elements_Visibility__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Elements_Visibility___ObjInit_1(UxProperty__Fuse_Elements_Visibility* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Elements_Visibility___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Elements_Visibility* UxProperty__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Elements_Visibility* inst = (UxProperty__Fuse_Elements_Visibility*)::uAllocObject(sizeof(UxProperty__Fuse_Elements_Visibility), UxProperty__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Elements_Visibility__OnAddListener(UxProperty__Fuse_Elements_Visibility* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Elements_Visibility__OnGet(UxProperty__Fuse_Elements_Visibility* __this)
{
    return ::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Elements_Visibility__OnRemoveListener(UxProperty__Fuse_Elements_Visibility* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Elements_Visibility__OnSet(UxProperty__Fuse_Elements_Visibility* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Font__uType* UxProperty__Fuse_Font__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Font__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Font__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Font>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Font__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Font*, ::uDelegate*))UxProperty__Fuse_Font__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Font*(*)(::app::Uno::UX::Property__Fuse_Font*))UxProperty__Fuse_Font__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Font*, ::uDelegate*))UxProperty__Fuse_Font__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Font*, ::app::Fuse::Font*, ::uObject*))UxProperty__Fuse_Font__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Font, _adder),
        "_getter", offsetof(UxProperty__Fuse_Font, _getter),
        "_remover", offsetof(UxProperty__Fuse_Font, _remover),
        "_setter", offsetof(UxProperty__Fuse_Font, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Font, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Font, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Font, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Font, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Font__New_1, 0, true, UxProperty__Fuse_Font__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Font___ObjInit_1(UxProperty__Fuse_Font* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Font___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Font* UxProperty__Fuse_Font__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Font* inst = (UxProperty__Fuse_Font*)::uAllocObject(sizeof(UxProperty__Fuse_Font), UxProperty__Fuse_Font__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Font__OnAddListener(UxProperty__Fuse_Font* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Font* UxProperty__Fuse_Font__OnGet(UxProperty__Fuse_Font* __this)
{
    return ::uCast< ::app::Fuse::Font*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Font__typeof());
}

void UxProperty__Fuse_Font__OnRemoveListener(UxProperty__Fuse_Font* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Font__OnSet(UxProperty__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Gestures_Edge__uType* UxProperty__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Gestures_Edge__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Gestures.Edge>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Gestures_Edge__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Gestures_Edge*, ::uDelegate*))UxProperty__Fuse_Gestures_Edge__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Gestures_Edge*))UxProperty__Fuse_Gestures_Edge__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Gestures_Edge*, ::uDelegate*))UxProperty__Fuse_Gestures_Edge__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Gestures_Edge*, int, ::uObject*))UxProperty__Fuse_Gestures_Edge__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Gestures_Edge, _adder),
        "_getter", offsetof(UxProperty__Fuse_Gestures_Edge, _getter),
        "_remover", offsetof(UxProperty__Fuse_Gestures_Edge, _remover),
        "_setter", offsetof(UxProperty__Fuse_Gestures_Edge, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Gestures_Edge, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Gestures_Edge, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Gestures_Edge, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Gestures_Edge, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Gestures_Edge__New_1, 0, true, UxProperty__Fuse_Gestures_Edge__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Gestures_Edge___ObjInit_1(UxProperty__Fuse_Gestures_Edge* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Gestures_Edge___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Gestures_Edge* UxProperty__Fuse_Gestures_Edge__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Gestures_Edge* inst = (UxProperty__Fuse_Gestures_Edge*)::uAllocObject(sizeof(UxProperty__Fuse_Gestures_Edge), UxProperty__Fuse_Gestures_Edge__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Gestures_Edge__OnAddListener(UxProperty__Fuse_Gestures_Edge* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Gestures_Edge__OnGet(UxProperty__Fuse_Gestures_Edge* __this)
{
    return ::uUnbox< int>(::app::Fuse::Gestures::Edge__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Gestures_Edge__OnRemoveListener(UxProperty__Fuse_Gestures_Edge* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Gestures_Edge__OnSet(UxProperty__Fuse_Gestures_Edge* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Gestures::Edge__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Gestures_ScrollDirections__uType* UxProperty__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Gestures_ScrollDirections__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Gestures.ScrollDirections>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*, ::uDelegate*))UxProperty__Fuse_Gestures_ScrollDirections__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*))UxProperty__Fuse_Gestures_ScrollDirections__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*, ::uDelegate*))UxProperty__Fuse_Gestures_ScrollDirections__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*, int, ::uObject*))UxProperty__Fuse_Gestures_ScrollDirections__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Gestures_ScrollDirections, _adder),
        "_getter", offsetof(UxProperty__Fuse_Gestures_ScrollDirections, _getter),
        "_remover", offsetof(UxProperty__Fuse_Gestures_ScrollDirections, _remover),
        "_setter", offsetof(UxProperty__Fuse_Gestures_ScrollDirections, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Gestures_ScrollDirections, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Gestures_ScrollDirections, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Gestures_ScrollDirections, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Gestures_ScrollDirections, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Gestures_ScrollDirections__New_1, 0, true, UxProperty__Fuse_Gestures_ScrollDirections__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Gestures_ScrollDirections___ObjInit_1(UxProperty__Fuse_Gestures_ScrollDirections* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Gestures_ScrollDirections* UxProperty__Fuse_Gestures_ScrollDirections__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Gestures_ScrollDirections* inst = (UxProperty__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(UxProperty__Fuse_Gestures_ScrollDirections), UxProperty__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Gestures_ScrollDirections__OnAddListener(UxProperty__Fuse_Gestures_ScrollDirections* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Gestures_ScrollDirections__OnGet(UxProperty__Fuse_Gestures_ScrollDirections* __this)
{
    return ::uUnbox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Gestures_ScrollDirections__OnRemoveListener(UxProperty__Fuse_Gestures_ScrollDirections* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Gestures_ScrollDirections__OnSet(UxProperty__Fuse_Gestures_ScrollDirections* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Layouts_Dock__uType* UxProperty__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Layouts_Dock__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Dock>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Layouts_Dock__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Dock*, ::uDelegate*))UxProperty__Fuse_Layouts_Dock__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Layouts_Dock*))UxProperty__Fuse_Layouts_Dock__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Dock*, ::uDelegate*))UxProperty__Fuse_Layouts_Dock__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Dock*, int, ::uObject*))UxProperty__Fuse_Layouts_Dock__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Layouts_Dock, _adder),
        "_getter", offsetof(UxProperty__Fuse_Layouts_Dock, _getter),
        "_remover", offsetof(UxProperty__Fuse_Layouts_Dock, _remover),
        "_setter", offsetof(UxProperty__Fuse_Layouts_Dock, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Layouts_Dock, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Layouts_Dock, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Layouts_Dock, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Layouts_Dock, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Layouts_Dock__New_1, 0, true, UxProperty__Fuse_Layouts_Dock__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Layouts_Dock___ObjInit_1(UxProperty__Fuse_Layouts_Dock* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Layouts_Dock___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Layouts_Dock* UxProperty__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Layouts_Dock* inst = (UxProperty__Fuse_Layouts_Dock*)::uAllocObject(sizeof(UxProperty__Fuse_Layouts_Dock), UxProperty__Fuse_Layouts_Dock__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Layouts_Dock__OnAddListener(UxProperty__Fuse_Layouts_Dock* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Layouts_Dock__OnGet(UxProperty__Fuse_Layouts_Dock* __this)
{
    return ::uUnbox< int>(::app::Fuse::Layouts::Dock__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Layouts_Dock__OnRemoveListener(UxProperty__Fuse_Layouts_Dock* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Layouts_Dock__OnSet(UxProperty__Fuse_Layouts_Dock* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Layouts::Dock__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Layouts_FlowDirection__uType* UxProperty__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Layouts_FlowDirection__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.FlowDirection>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*, ::uDelegate*))UxProperty__Fuse_Layouts_FlowDirection__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*))UxProperty__Fuse_Layouts_FlowDirection__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*, ::uDelegate*))UxProperty__Fuse_Layouts_FlowDirection__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_FlowDirection*, int, ::uObject*))UxProperty__Fuse_Layouts_FlowDirection__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Layouts_FlowDirection, _adder),
        "_getter", offsetof(UxProperty__Fuse_Layouts_FlowDirection, _getter),
        "_remover", offsetof(UxProperty__Fuse_Layouts_FlowDirection, _remover),
        "_setter", offsetof(UxProperty__Fuse_Layouts_FlowDirection, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Layouts_FlowDirection, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Layouts_FlowDirection, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Layouts_FlowDirection, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Layouts_FlowDirection, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Layouts_FlowDirection__New_1, 0, true, UxProperty__Fuse_Layouts_FlowDirection__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Layouts_FlowDirection___ObjInit_1(UxProperty__Fuse_Layouts_FlowDirection* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Layouts_FlowDirection___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Layouts_FlowDirection* UxProperty__Fuse_Layouts_FlowDirection__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Layouts_FlowDirection* inst = (UxProperty__Fuse_Layouts_FlowDirection*)::uAllocObject(sizeof(UxProperty__Fuse_Layouts_FlowDirection), UxProperty__Fuse_Layouts_FlowDirection__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Layouts_FlowDirection__OnAddListener(UxProperty__Fuse_Layouts_FlowDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Layouts_FlowDirection__OnGet(UxProperty__Fuse_Layouts_FlowDirection* __this)
{
    return ::uUnbox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Layouts_FlowDirection__OnRemoveListener(UxProperty__Fuse_Layouts_FlowDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Layouts_FlowDirection__OnSet(UxProperty__Fuse_Layouts_FlowDirection* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Layouts::FlowDirection__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Layouts_Metric__uType* UxProperty__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Layouts_Metric__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Metric>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Layouts_Metric__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Metric*, ::uDelegate*))UxProperty__Fuse_Layouts_Metric__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Layouts_Metric*))UxProperty__Fuse_Layouts_Metric__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Metric*, ::uDelegate*))UxProperty__Fuse_Layouts_Metric__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Metric*, int, ::uObject*))UxProperty__Fuse_Layouts_Metric__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Layouts_Metric, _adder),
        "_getter", offsetof(UxProperty__Fuse_Layouts_Metric, _getter),
        "_remover", offsetof(UxProperty__Fuse_Layouts_Metric, _remover),
        "_setter", offsetof(UxProperty__Fuse_Layouts_Metric, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Layouts_Metric, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Layouts_Metric, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Layouts_Metric, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Layouts_Metric, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Layouts_Metric__New_1, 0, true, UxProperty__Fuse_Layouts_Metric__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Layouts_Metric___ObjInit_1(UxProperty__Fuse_Layouts_Metric* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Layouts_Metric___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Layouts_Metric* UxProperty__Fuse_Layouts_Metric__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Layouts_Metric* inst = (UxProperty__Fuse_Layouts_Metric*)::uAllocObject(sizeof(UxProperty__Fuse_Layouts_Metric), UxProperty__Fuse_Layouts_Metric__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Layouts_Metric__OnAddListener(UxProperty__Fuse_Layouts_Metric* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Layouts_Metric__OnGet(UxProperty__Fuse_Layouts_Metric* __this)
{
    return ::uUnbox< int>(::app::Fuse::Layouts::Metric__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Layouts_Metric__OnRemoveListener(UxProperty__Fuse_Layouts_Metric* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Layouts_Metric__OnSet(UxProperty__Fuse_Layouts_Metric* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Layouts::Metric__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Layouts_Orientation__uType* UxProperty__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Layouts_Orientation__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Layouts.Orientation>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Layouts_Orientation__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Orientation*, ::uDelegate*))UxProperty__Fuse_Layouts_Orientation__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Layouts_Orientation*))UxProperty__Fuse_Layouts_Orientation__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Orientation*, ::uDelegate*))UxProperty__Fuse_Layouts_Orientation__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Layouts_Orientation*, int, ::uObject*))UxProperty__Fuse_Layouts_Orientation__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Layouts_Orientation, _adder),
        "_getter", offsetof(UxProperty__Fuse_Layouts_Orientation, _getter),
        "_remover", offsetof(UxProperty__Fuse_Layouts_Orientation, _remover),
        "_setter", offsetof(UxProperty__Fuse_Layouts_Orientation, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Layouts_Orientation, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Layouts_Orientation, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Layouts_Orientation, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Layouts_Orientation, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Layouts_Orientation__New_1, 0, true, UxProperty__Fuse_Layouts_Orientation__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Layouts_Orientation___ObjInit_1(UxProperty__Fuse_Layouts_Orientation* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Layouts_Orientation___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Layouts_Orientation* UxProperty__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Layouts_Orientation* inst = (UxProperty__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(UxProperty__Fuse_Layouts_Orientation), UxProperty__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Layouts_Orientation__OnAddListener(UxProperty__Fuse_Layouts_Orientation* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Layouts_Orientation__OnGet(UxProperty__Fuse_Layouts_Orientation* __this)
{
    return ::uUnbox< int>(::app::Fuse::Layouts::Orientation__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Layouts_Orientation__OnRemoveListener(UxProperty__Fuse_Layouts_Orientation* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Layouts_Orientation__OnSet(UxProperty__Fuse_Layouts_Orientation* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Navigation_NavigationDirection__uType* UxProperty__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Navigation_NavigationDirection__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationDirection>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*, ::uDelegate*))UxProperty__Fuse_Navigation_NavigationDirection__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*))UxProperty__Fuse_Navigation_NavigationDirection__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*, ::uDelegate*))UxProperty__Fuse_Navigation_NavigationDirection__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection*, int, ::uObject*))UxProperty__Fuse_Navigation_NavigationDirection__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Navigation_NavigationDirection, _adder),
        "_getter", offsetof(UxProperty__Fuse_Navigation_NavigationDirection, _getter),
        "_remover", offsetof(UxProperty__Fuse_Navigation_NavigationDirection, _remover),
        "_setter", offsetof(UxProperty__Fuse_Navigation_NavigationDirection, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationDirection, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationDirection, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationDirection, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationDirection, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Navigation_NavigationDirection__New_1, 0, true, UxProperty__Fuse_Navigation_NavigationDirection__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Navigation_NavigationDirection___ObjInit_1(UxProperty__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Navigation_NavigationDirection* UxProperty__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Navigation_NavigationDirection* inst = (UxProperty__Fuse_Navigation_NavigationDirection*)::uAllocObject(sizeof(UxProperty__Fuse_Navigation_NavigationDirection), UxProperty__Fuse_Navigation_NavigationDirection__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Navigation_NavigationDirection__OnAddListener(UxProperty__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Navigation_NavigationDirection__OnGet(UxProperty__Fuse_Navigation_NavigationDirection* __this)
{
    return ::uUnbox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Navigation_NavigationDirection__OnRemoveListener(UxProperty__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Navigation_NavigationDirection__OnSet(UxProperty__Fuse_Navigation_NavigationDirection* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Navigation::NavigationDirection__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Navigation_NavigationEdge__uType* UxProperty__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Navigation_NavigationEdge__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationEdge>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*, ::uDelegate*))UxProperty__Fuse_Navigation_NavigationEdge__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*))UxProperty__Fuse_Navigation_NavigationEdge__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*, ::uDelegate*))UxProperty__Fuse_Navigation_NavigationEdge__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge*, int, ::uObject*))UxProperty__Fuse_Navigation_NavigationEdge__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Navigation_NavigationEdge, _adder),
        "_getter", offsetof(UxProperty__Fuse_Navigation_NavigationEdge, _getter),
        "_remover", offsetof(UxProperty__Fuse_Navigation_NavigationEdge, _remover),
        "_setter", offsetof(UxProperty__Fuse_Navigation_NavigationEdge, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationEdge, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationEdge, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationEdge, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationEdge, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Navigation_NavigationEdge__New_1, 0, true, UxProperty__Fuse_Navigation_NavigationEdge__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Navigation_NavigationEdge___ObjInit_1(UxProperty__Fuse_Navigation_NavigationEdge* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Navigation_NavigationEdge___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Navigation_NavigationEdge* UxProperty__Fuse_Navigation_NavigationEdge__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Navigation_NavigationEdge* inst = (UxProperty__Fuse_Navigation_NavigationEdge*)::uAllocObject(sizeof(UxProperty__Fuse_Navigation_NavigationEdge), UxProperty__Fuse_Navigation_NavigationEdge__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Navigation_NavigationEdge__OnAddListener(UxProperty__Fuse_Navigation_NavigationEdge* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Navigation_NavigationEdge__OnGet(UxProperty__Fuse_Navigation_NavigationEdge* __this)
{
    return ::uUnbox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Navigation_NavigationEdge__OnRemoveListener(UxProperty__Fuse_Navigation_NavigationEdge* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Navigation_NavigationEdge__OnSet(UxProperty__Fuse_Navigation_NavigationEdge* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Navigation_NavigationGotoMode__uType* UxProperty__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Navigation_NavigationGotoMode__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.NavigationGotoMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*, ::uDelegate*))UxProperty__Fuse_Navigation_NavigationGotoMode__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*))UxProperty__Fuse_Navigation_NavigationGotoMode__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*, ::uDelegate*))UxProperty__Fuse_Navigation_NavigationGotoMode__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode*, int, ::uObject*))UxProperty__Fuse_Navigation_NavigationGotoMode__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Navigation_NavigationGotoMode, _adder),
        "_getter", offsetof(UxProperty__Fuse_Navigation_NavigationGotoMode, _getter),
        "_remover", offsetof(UxProperty__Fuse_Navigation_NavigationGotoMode, _remover),
        "_setter", offsetof(UxProperty__Fuse_Navigation_NavigationGotoMode, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationGotoMode, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationGotoMode, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationGotoMode, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Navigation_NavigationGotoMode, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Navigation_NavigationGotoMode__New_1, 0, true, UxProperty__Fuse_Navigation_NavigationGotoMode__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Navigation_NavigationGotoMode___ObjInit_1(UxProperty__Fuse_Navigation_NavigationGotoMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Navigation_NavigationGotoMode* UxProperty__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Navigation_NavigationGotoMode* inst = (UxProperty__Fuse_Navigation_NavigationGotoMode*)::uAllocObject(sizeof(UxProperty__Fuse_Navigation_NavigationGotoMode), UxProperty__Fuse_Navigation_NavigationGotoMode__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Navigation_NavigationGotoMode__OnAddListener(UxProperty__Fuse_Navigation_NavigationGotoMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Navigation_NavigationGotoMode__OnGet(UxProperty__Fuse_Navigation_NavigationGotoMode* __this)
{
    return ::uUnbox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Navigation_NavigationGotoMode__OnRemoveListener(UxProperty__Fuse_Navigation_NavigationGotoMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Navigation_NavigationGotoMode__OnSet(UxProperty__Fuse_Navigation_NavigationGotoMode* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Navigation::NavigationGotoMode__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Navigation_SnapTo__uType* UxProperty__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Navigation_SnapTo__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SnapTo>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Navigation_SnapTo__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SnapTo*, ::uDelegate*))UxProperty__Fuse_Navigation_SnapTo__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Navigation_SnapTo*))UxProperty__Fuse_Navigation_SnapTo__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SnapTo*, ::uDelegate*))UxProperty__Fuse_Navigation_SnapTo__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SnapTo*, int, ::uObject*))UxProperty__Fuse_Navigation_SnapTo__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Navigation_SnapTo, _adder),
        "_getter", offsetof(UxProperty__Fuse_Navigation_SnapTo, _getter),
        "_remover", offsetof(UxProperty__Fuse_Navigation_SnapTo, _remover),
        "_setter", offsetof(UxProperty__Fuse_Navigation_SnapTo, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Navigation_SnapTo, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Navigation_SnapTo, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Navigation_SnapTo, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Navigation_SnapTo, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Navigation_SnapTo__New_1, 0, true, UxProperty__Fuse_Navigation_SnapTo__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Navigation_SnapTo___ObjInit_1(UxProperty__Fuse_Navigation_SnapTo* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Navigation_SnapTo___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Navigation_SnapTo* UxProperty__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Navigation_SnapTo* inst = (UxProperty__Fuse_Navigation_SnapTo*)::uAllocObject(sizeof(UxProperty__Fuse_Navigation_SnapTo), UxProperty__Fuse_Navigation_SnapTo__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Navigation_SnapTo__OnAddListener(UxProperty__Fuse_Navigation_SnapTo* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Navigation_SnapTo__OnGet(UxProperty__Fuse_Navigation_SnapTo* __this)
{
    return ::uUnbox< int>(::app::Fuse::Navigation::SnapTo__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Navigation_SnapTo__OnRemoveListener(UxProperty__Fuse_Navigation_SnapTo* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Navigation_SnapTo__OnSet(UxProperty__Fuse_Navigation_SnapTo* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Navigation::SnapTo__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Navigation_SwipeDirection__uType* UxProperty__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Navigation_SwipeDirection__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SwipeDirection>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*, ::uDelegate*))UxProperty__Fuse_Navigation_SwipeDirection__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*))UxProperty__Fuse_Navigation_SwipeDirection__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*, ::uDelegate*))UxProperty__Fuse_Navigation_SwipeDirection__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection*, int, ::uObject*))UxProperty__Fuse_Navigation_SwipeDirection__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Navigation_SwipeDirection, _adder),
        "_getter", offsetof(UxProperty__Fuse_Navigation_SwipeDirection, _getter),
        "_remover", offsetof(UxProperty__Fuse_Navigation_SwipeDirection, _remover),
        "_setter", offsetof(UxProperty__Fuse_Navigation_SwipeDirection, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Navigation_SwipeDirection, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Navigation_SwipeDirection, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Navigation_SwipeDirection, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Navigation_SwipeDirection, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Navigation_SwipeDirection__New_1, 0, true, UxProperty__Fuse_Navigation_SwipeDirection__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Navigation_SwipeDirection___ObjInit_1(UxProperty__Fuse_Navigation_SwipeDirection* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Navigation_SwipeDirection* UxProperty__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Navigation_SwipeDirection* inst = (UxProperty__Fuse_Navigation_SwipeDirection*)::uAllocObject(sizeof(UxProperty__Fuse_Navigation_SwipeDirection), UxProperty__Fuse_Navigation_SwipeDirection__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Navigation_SwipeDirection__OnAddListener(UxProperty__Fuse_Navigation_SwipeDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Navigation_SwipeDirection__OnGet(UxProperty__Fuse_Navigation_SwipeDirection* __this)
{
    return ::uUnbox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Navigation_SwipeDirection__OnRemoveListener(UxProperty__Fuse_Navigation_SwipeDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Navigation_SwipeDirection__OnSet(UxProperty__Fuse_Navigation_SwipeDirection* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Navigation::SwipeDirection__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Navigation_SwipeEnds__uType* UxProperty__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Navigation_SwipeEnds__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Navigation.SwipeEnds>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*, ::uDelegate*))UxProperty__Fuse_Navigation_SwipeEnds__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*))UxProperty__Fuse_Navigation_SwipeEnds__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*, ::uDelegate*))UxProperty__Fuse_Navigation_SwipeEnds__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds*, int, ::uObject*))UxProperty__Fuse_Navigation_SwipeEnds__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Navigation_SwipeEnds, _adder),
        "_getter", offsetof(UxProperty__Fuse_Navigation_SwipeEnds, _getter),
        "_remover", offsetof(UxProperty__Fuse_Navigation_SwipeEnds, _remover),
        "_setter", offsetof(UxProperty__Fuse_Navigation_SwipeEnds, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Navigation_SwipeEnds, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Navigation_SwipeEnds, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Navigation_SwipeEnds, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Navigation_SwipeEnds, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Navigation_SwipeEnds__New_1, 0, true, UxProperty__Fuse_Navigation_SwipeEnds__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Navigation_SwipeEnds___ObjInit_1(UxProperty__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Navigation_SwipeEnds* UxProperty__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Navigation_SwipeEnds* inst = (UxProperty__Fuse_Navigation_SwipeEnds*)::uAllocObject(sizeof(UxProperty__Fuse_Navigation_SwipeEnds), UxProperty__Fuse_Navigation_SwipeEnds__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Navigation_SwipeEnds__OnAddListener(UxProperty__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Navigation_SwipeEnds__OnGet(UxProperty__Fuse_Navigation_SwipeEnds* __this)
{
    return ::uUnbox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Navigation_SwipeEnds__OnRemoveListener(UxProperty__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Navigation_SwipeEnds__OnSet(UxProperty__Fuse_Navigation_SwipeEnds* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Navigation::SwipeEnds__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Node__uType* UxProperty__Fuse_Node__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Node__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Node__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Node>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Node__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Node*, ::uDelegate*))UxProperty__Fuse_Node__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Node*(*)(::app::Uno::UX::Property__Fuse_Node*))UxProperty__Fuse_Node__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Node*, ::uDelegate*))UxProperty__Fuse_Node__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Node*, ::app::Fuse::Node*, ::uObject*))UxProperty__Fuse_Node__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Node, _adder),
        "_getter", offsetof(UxProperty__Fuse_Node, _getter),
        "_remover", offsetof(UxProperty__Fuse_Node, _remover),
        "_setter", offsetof(UxProperty__Fuse_Node, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Node, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Node, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Node, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Node, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Node__New_1, 0, true, UxProperty__Fuse_Node__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Node___ObjInit_1(UxProperty__Fuse_Node* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Node___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Node* UxProperty__Fuse_Node__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Node* inst = (UxProperty__Fuse_Node*)::uAllocObject(sizeof(UxProperty__Fuse_Node), UxProperty__Fuse_Node__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Node__OnAddListener(UxProperty__Fuse_Node* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Node* UxProperty__Fuse_Node__OnGet(UxProperty__Fuse_Node* __this)
{
    return ::uCast< ::app::Fuse::Node*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Node__typeof());
}

void UxProperty__Fuse_Node__OnRemoveListener(UxProperty__Fuse_Node* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Node__OnSet(UxProperty__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Resources_ImageSource__uType* UxProperty__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Resources_ImageSource__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Resources.ImageSource>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Resources_ImageSource*, ::uDelegate*))UxProperty__Fuse_Resources_ImageSource__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Resources::ImageSource*(*)(::app::Uno::UX::Property__Fuse_Resources_ImageSource*))UxProperty__Fuse_Resources_ImageSource__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Resources_ImageSource*, ::uDelegate*))UxProperty__Fuse_Resources_ImageSource__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Resources_ImageSource*, ::app::Fuse::Resources::ImageSource*, ::uObject*))UxProperty__Fuse_Resources_ImageSource__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Resources_ImageSource, _adder),
        "_getter", offsetof(UxProperty__Fuse_Resources_ImageSource, _getter),
        "_remover", offsetof(UxProperty__Fuse_Resources_ImageSource, _remover),
        "_setter", offsetof(UxProperty__Fuse_Resources_ImageSource, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Resources_ImageSource, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Resources_ImageSource, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Resources_ImageSource, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Resources_ImageSource, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Resources_ImageSource__New_1, 0, true, UxProperty__Fuse_Resources_ImageSource__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Resources_ImageSource___ObjInit_1(UxProperty__Fuse_Resources_ImageSource* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Resources_ImageSource___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Resources_ImageSource* UxProperty__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Resources_ImageSource* inst = (UxProperty__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(UxProperty__Fuse_Resources_ImageSource), UxProperty__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Resources_ImageSource__OnAddListener(UxProperty__Fuse_Resources_ImageSource* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Resources::ImageSource* UxProperty__Fuse_Resources_ImageSource__OnGet(UxProperty__Fuse_Resources_ImageSource* __this)
{
    return ::uCast< ::app::Fuse::Resources::ImageSource*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Resources::ImageSource__typeof());
}

void UxProperty__Fuse_Resources_ImageSource__OnRemoveListener(UxProperty__Fuse_Resources_ImageSource* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Resources_ImageSource__OnSet(UxProperty__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Triggers_Actions_TriggerDirection__uType* UxProperty__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Triggers_Actions_TriggerDirection__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*, ::uDelegate*))UxProperty__Fuse_Triggers_Actions_TriggerDirection__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*))UxProperty__Fuse_Triggers_Actions_TriggerDirection__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*, ::uDelegate*))UxProperty__Fuse_Triggers_Actions_TriggerDirection__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection*, int, ::uObject*))UxProperty__Fuse_Triggers_Actions_TriggerDirection__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Triggers_Actions_TriggerDirection, _adder),
        "_getter", offsetof(UxProperty__Fuse_Triggers_Actions_TriggerDirection, _getter),
        "_remover", offsetof(UxProperty__Fuse_Triggers_Actions_TriggerDirection, _remover),
        "_setter", offsetof(UxProperty__Fuse_Triggers_Actions_TriggerDirection, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Triggers_Actions_TriggerDirection, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Triggers_Actions_TriggerDirection, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Triggers_Actions_TriggerDirection, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Triggers_Actions_TriggerDirection, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Triggers_Actions_TriggerDirection__New_1, 0, true, UxProperty__Fuse_Triggers_Actions_TriggerDirection__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Triggers_Actions_TriggerDirection___ObjInit_1(UxProperty__Fuse_Triggers_Actions_TriggerDirection* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Triggers_Actions_TriggerDirection* UxProperty__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Triggers_Actions_TriggerDirection* inst = (UxProperty__Fuse_Triggers_Actions_TriggerDirection*)::uAllocObject(sizeof(UxProperty__Fuse_Triggers_Actions_TriggerDirection), UxProperty__Fuse_Triggers_Actions_TriggerDirection__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Triggers_Actions_TriggerDirection__OnAddListener(UxProperty__Fuse_Triggers_Actions_TriggerDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Triggers_Actions_TriggerDirection__OnGet(UxProperty__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return ::uUnbox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Triggers_Actions_TriggerDirection__OnRemoveListener(UxProperty__Fuse_Triggers_Actions_TriggerDirection* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Triggers_Actions_TriggerDirection__OnSet(UxProperty__Fuse_Triggers_Actions_TriggerDirection* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Triggers_State__uType* UxProperty__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Triggers_State__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.State>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Triggers_State__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_State*, ::uDelegate*))UxProperty__Fuse_Triggers_State__OnAddListener;
    type->__fp_OnGet = (::app::Fuse::Triggers::State*(*)(::app::Uno::UX::Property__Fuse_Triggers_State*))UxProperty__Fuse_Triggers_State__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_State*, ::uDelegate*))UxProperty__Fuse_Triggers_State__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_State*, ::app::Fuse::Triggers::State*, ::uObject*))UxProperty__Fuse_Triggers_State__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Triggers_State, _adder),
        "_getter", offsetof(UxProperty__Fuse_Triggers_State, _getter),
        "_remover", offsetof(UxProperty__Fuse_Triggers_State, _remover),
        "_setter", offsetof(UxProperty__Fuse_Triggers_State, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Triggers_State, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Triggers_State, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Triggers_State, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Triggers_State, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Triggers_State__New_1, 0, true, UxProperty__Fuse_Triggers_State__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Triggers_State___ObjInit_1(UxProperty__Fuse_Triggers_State* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Triggers_State___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Triggers_State* UxProperty__Fuse_Triggers_State__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Triggers_State* inst = (UxProperty__Fuse_Triggers_State*)::uAllocObject(sizeof(UxProperty__Fuse_Triggers_State), UxProperty__Fuse_Triggers_State__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Triggers_State__OnAddListener(UxProperty__Fuse_Triggers_State* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Fuse::Triggers::State* UxProperty__Fuse_Triggers_State__OnGet(UxProperty__Fuse_Triggers_State* __this)
{
    return ::uCast< ::app::Fuse::Triggers::State*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Fuse::Triggers::State__typeof());
}

void UxProperty__Fuse_Triggers_State__OnRemoveListener(UxProperty__Fuse_Triggers_State* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Triggers_State__OnSet(UxProperty__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Triggers_StateTransition__uType* UxProperty__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Triggers_StateTransition__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.StateTransition>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Triggers_StateTransition__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_StateTransition*, ::uDelegate*))UxProperty__Fuse_Triggers_StateTransition__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Triggers_StateTransition*))UxProperty__Fuse_Triggers_StateTransition__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_StateTransition*, ::uDelegate*))UxProperty__Fuse_Triggers_StateTransition__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_StateTransition*, int, ::uObject*))UxProperty__Fuse_Triggers_StateTransition__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Triggers_StateTransition, _adder),
        "_getter", offsetof(UxProperty__Fuse_Triggers_StateTransition, _getter),
        "_remover", offsetof(UxProperty__Fuse_Triggers_StateTransition, _remover),
        "_setter", offsetof(UxProperty__Fuse_Triggers_StateTransition, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Triggers_StateTransition, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Triggers_StateTransition, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Triggers_StateTransition, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Triggers_StateTransition, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Triggers_StateTransition__New_1, 0, true, UxProperty__Fuse_Triggers_StateTransition__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Triggers_StateTransition___ObjInit_1(UxProperty__Fuse_Triggers_StateTransition* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Triggers_StateTransition___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Triggers_StateTransition* UxProperty__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Triggers_StateTransition* inst = (UxProperty__Fuse_Triggers_StateTransition*)::uAllocObject(sizeof(UxProperty__Fuse_Triggers_StateTransition), UxProperty__Fuse_Triggers_StateTransition__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Triggers_StateTransition__OnAddListener(UxProperty__Fuse_Triggers_StateTransition* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Triggers_StateTransition__OnGet(UxProperty__Fuse_Triggers_StateTransition* __this)
{
    return ::uUnbox< int>(::app::Fuse::Triggers::StateTransition__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Triggers_StateTransition__OnRemoveListener(UxProperty__Fuse_Triggers_StateTransition* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Triggers_StateTransition__OnSet(UxProperty__Fuse_Triggers_StateTransition* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Triggers::StateTransition__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Fuse_Triggers_TriggerBypassMode__uType* UxProperty__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<UxProperty__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(UxProperty__Fuse_Triggers_TriggerBypassMode__uType), "Outracks.Simulator.Runtime.UxProperty<Fuse.Triggers.TriggerBypassMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*, ::uDelegate*))UxProperty__Fuse_Triggers_TriggerBypassMode__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*))UxProperty__Fuse_Triggers_TriggerBypassMode__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*, ::uDelegate*))UxProperty__Fuse_Triggers_TriggerBypassMode__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode*, int, ::uObject*))UxProperty__Fuse_Triggers_TriggerBypassMode__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Fuse_Triggers_TriggerBypassMode, _adder),
        "_getter", offsetof(UxProperty__Fuse_Triggers_TriggerBypassMode, _getter),
        "_remover", offsetof(UxProperty__Fuse_Triggers_TriggerBypassMode, _remover),
        "_setter", offsetof(UxProperty__Fuse_Triggers_TriggerBypassMode, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Fuse_Triggers_TriggerBypassMode, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Fuse_Triggers_TriggerBypassMode, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Fuse_Triggers_TriggerBypassMode, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Fuse_Triggers_TriggerBypassMode, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Fuse_Triggers_TriggerBypassMode__New_1, 0, true, UxProperty__Fuse_Triggers_TriggerBypassMode__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Fuse_Triggers_TriggerBypassMode___ObjInit_1(UxProperty__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Fuse_Triggers_TriggerBypassMode* UxProperty__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Fuse_Triggers_TriggerBypassMode* inst = (UxProperty__Fuse_Triggers_TriggerBypassMode*)::uAllocObject(sizeof(UxProperty__Fuse_Triggers_TriggerBypassMode), UxProperty__Fuse_Triggers_TriggerBypassMode__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Fuse_Triggers_TriggerBypassMode__OnAddListener(UxProperty__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Fuse_Triggers_TriggerBypassMode__OnGet(UxProperty__Fuse_Triggers_TriggerBypassMode* __this)
{
    return ::uUnbox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Fuse_Triggers_TriggerBypassMode__OnRemoveListener(UxProperty__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Fuse_Triggers_TriggerBypassMode__OnSet(UxProperty__Fuse_Triggers_TriggerBypassMode* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Fuse::Triggers::TriggerBypassMode__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__int__uType* UxProperty__int__typeof()
{
    static ::uStaticStrong<UxProperty__int__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__int__uType*)::uAllocClassType(sizeof(UxProperty__int__uType), "Outracks.Simulator.Runtime.UxProperty<int>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__int__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__int*, ::uDelegate*))UxProperty__int__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__int*))UxProperty__int__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__int*, ::uDelegate*))UxProperty__int__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__int*, int, ::uObject*))UxProperty__int__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__int, _adder),
        "_getter", offsetof(UxProperty__int, _getter),
        "_remover", offsetof(UxProperty__int, _remover),
        "_setter", offsetof(UxProperty__int, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__int, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__int, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__int, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__int, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__int__New_1, 0, true, UxProperty__int__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__int___ObjInit_1(UxProperty__int* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__int___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__int* UxProperty__int__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__int* inst = (UxProperty__int*)::uAllocObject(sizeof(UxProperty__int), UxProperty__int__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__int__OnAddListener(UxProperty__int* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__int__OnGet(UxProperty__int* __this)
{
    return ::uUnbox< int>(::app::Uno::Int__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__int__OnRemoveListener(UxProperty__int* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__int__OnSet(UxProperty__int* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Uno::Int__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__int2__uType* UxProperty__int2__typeof()
{
    static ::uStaticStrong<UxProperty__int2__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__int2__uType*)::uAllocClassType(sizeof(UxProperty__int2__uType), "Outracks.Simulator.Runtime.UxProperty<int2>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__int2__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__int2*, ::uDelegate*))UxProperty__int2__OnAddListener;
    type->__fp_OnGet = (::app::Uno::Int2(*)(::app::Uno::UX::Property__int2*))UxProperty__int2__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__int2*, ::uDelegate*))UxProperty__int2__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__int2*, ::app::Uno::Int2, ::uObject*))UxProperty__int2__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__int2, _adder),
        "_getter", offsetof(UxProperty__int2, _getter),
        "_remover", offsetof(UxProperty__int2, _remover),
        "_setter", offsetof(UxProperty__int2, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__int2, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__int2, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__int2, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__int2, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__int2__New_1, 0, true, UxProperty__int2__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__int2___ObjInit_1(UxProperty__int2* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__int2___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__int2* UxProperty__int2__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__int2* inst = (UxProperty__int2*)::uAllocObject(sizeof(UxProperty__int2), UxProperty__int2__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__int2__OnAddListener(UxProperty__int2* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Uno::Int2 UxProperty__int2__OnGet(UxProperty__int2* __this)
{
    return ::uUnbox< ::app::Uno::Int2>(::app::Uno::Int2__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__int2__OnRemoveListener(UxProperty__int2* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__int2__OnSet(UxProperty__int2* __this, ::app::Uno::Int2 value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Int2__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__int3__uType* UxProperty__int3__typeof()
{
    static ::uStaticStrong<UxProperty__int3__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__int3__uType*)::uAllocClassType(sizeof(UxProperty__int3__uType), "Outracks.Simulator.Runtime.UxProperty<int3>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__int3__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__int3*, ::uDelegate*))UxProperty__int3__OnAddListener;
    type->__fp_OnGet = (::app::Uno::Int3(*)(::app::Uno::UX::Property__int3*))UxProperty__int3__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__int3*, ::uDelegate*))UxProperty__int3__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__int3*, ::app::Uno::Int3, ::uObject*))UxProperty__int3__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__int3, _adder),
        "_getter", offsetof(UxProperty__int3, _getter),
        "_remover", offsetof(UxProperty__int3, _remover),
        "_setter", offsetof(UxProperty__int3, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__int3, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__int3, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__int3, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__int3, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__int3__New_1, 0, true, UxProperty__int3__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__int3___ObjInit_1(UxProperty__int3* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__int3___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__int3* UxProperty__int3__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__int3* inst = (UxProperty__int3*)::uAllocObject(sizeof(UxProperty__int3), UxProperty__int3__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__int3__OnAddListener(UxProperty__int3* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Uno::Int3 UxProperty__int3__OnGet(UxProperty__int3* __this)
{
    return ::uUnbox< ::app::Uno::Int3>(::app::Uno::Int3__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__int3__OnRemoveListener(UxProperty__int3* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__int3__OnSet(UxProperty__int3* __this, ::app::Uno::Int3 value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Int3__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__int4__uType* UxProperty__int4__typeof()
{
    static ::uStaticStrong<UxProperty__int4__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__int4__uType*)::uAllocClassType(sizeof(UxProperty__int4__uType), "Outracks.Simulator.Runtime.UxProperty<int4>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__int4__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__int4*, ::uDelegate*))UxProperty__int4__OnAddListener;
    type->__fp_OnGet = (::app::Uno::Int4(*)(::app::Uno::UX::Property__int4*))UxProperty__int4__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__int4*, ::uDelegate*))UxProperty__int4__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__int4*, ::app::Uno::Int4, ::uObject*))UxProperty__int4__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__int4, _adder),
        "_getter", offsetof(UxProperty__int4, _getter),
        "_remover", offsetof(UxProperty__int4, _remover),
        "_setter", offsetof(UxProperty__int4, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__int4, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__int4, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__int4, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__int4, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__int4__New_1, 0, true, UxProperty__int4__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__int4___ObjInit_1(UxProperty__int4* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__int4___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__int4* UxProperty__int4__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__int4* inst = (UxProperty__int4*)::uAllocObject(sizeof(UxProperty__int4), UxProperty__int4__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__int4__OnAddListener(UxProperty__int4* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Uno::Int4 UxProperty__int4__OnGet(UxProperty__int4* __this)
{
    return ::uUnbox< ::app::Uno::Int4>(::app::Uno::Int4__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__int4__OnRemoveListener(UxProperty__int4* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__int4__OnSet(UxProperty__int4* __this, ::app::Uno::Int4 value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox(::app::Uno::Int4__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__long__uType* UxProperty__long__typeof()
{
    static ::uStaticStrong<UxProperty__long__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__long__uType*)::uAllocClassType(sizeof(UxProperty__long__uType), "Outracks.Simulator.Runtime.UxProperty<long>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__long__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__long*, ::uDelegate*))UxProperty__long__OnAddListener;
    type->__fp_OnGet = (::uLong(*)(::app::Uno::UX::Property__long*))UxProperty__long__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__long*, ::uDelegate*))UxProperty__long__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__long*, ::uLong, ::uObject*))UxProperty__long__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__long, _adder),
        "_getter", offsetof(UxProperty__long, _getter),
        "_remover", offsetof(UxProperty__long, _remover),
        "_setter", offsetof(UxProperty__long, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__long, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__long, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__long, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__long, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__long__New_1, 0, true, UxProperty__long__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__long___ObjInit_1(UxProperty__long* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__long___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__long* UxProperty__long__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__long* inst = (UxProperty__long*)::uAllocObject(sizeof(UxProperty__long), UxProperty__long__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__long__OnAddListener(UxProperty__long* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::uLong UxProperty__long__OnGet(UxProperty__long* __this)
{
    return ::uUnbox< ::uLong>(::app::Uno::Long__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__long__OnRemoveListener(UxProperty__long* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__long__OnSet(UxProperty__long* __this, ::uLong value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< ::uLong>(::app::Uno::Long__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__object__uType* UxProperty__object__typeof()
{
    static ::uStaticStrong<UxProperty__object__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__object__uType*)::uAllocClassType(sizeof(UxProperty__object__uType), "Outracks.Simulator.Runtime.UxProperty<object>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__object__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__object*, ::uDelegate*))UxProperty__object__OnAddListener;
    type->__fp_OnGet = (::uObject*(*)(::app::Uno::UX::Property__object*))UxProperty__object__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__object*, ::uDelegate*))UxProperty__object__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__object*, ::uObject*, ::uObject*))UxProperty__object__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__object, _adder),
        "_getter", offsetof(UxProperty__object, _getter),
        "_remover", offsetof(UxProperty__object, _remover),
        "_setter", offsetof(UxProperty__object, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__object, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__object, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__object, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__object, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__object__New_1, 0, true, UxProperty__object__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__object___ObjInit_1(UxProperty__object* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__object___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__object* UxProperty__object__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__object* inst = (UxProperty__object*)::uAllocObject(sizeof(UxProperty__object), UxProperty__object__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__object__OnAddListener(UxProperty__object* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::uObject* UxProperty__object__OnGet(UxProperty__object* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>();
}

void UxProperty__object__OnRemoveListener(UxProperty__object* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__object__OnSet(UxProperty__object* __this, ::uObject* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__short__uType* UxProperty__short__typeof()
{
    static ::uStaticStrong<UxProperty__short__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__short__uType*)::uAllocClassType(sizeof(UxProperty__short__uType), "Outracks.Simulator.Runtime.UxProperty<short>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__short__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__short*, ::uDelegate*))UxProperty__short__OnAddListener;
    type->__fp_OnGet = (::uShort(*)(::app::Uno::UX::Property__short*))UxProperty__short__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__short*, ::uDelegate*))UxProperty__short__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__short*, ::uShort, ::uObject*))UxProperty__short__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__short, _adder),
        "_getter", offsetof(UxProperty__short, _getter),
        "_remover", offsetof(UxProperty__short, _remover),
        "_setter", offsetof(UxProperty__short, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__short, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__short, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__short, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__short, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__short__New_1, 0, true, UxProperty__short__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__short___ObjInit_1(UxProperty__short* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__short___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__short* UxProperty__short__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__short* inst = (UxProperty__short*)::uAllocObject(sizeof(UxProperty__short), UxProperty__short__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__short__OnAddListener(UxProperty__short* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::uShort UxProperty__short__OnGet(UxProperty__short* __this)
{
    return ::uUnbox< ::uShort>(::app::Uno::Short__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__short__OnRemoveListener(UxProperty__short* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__short__OnSet(UxProperty__short* __this, ::uShort value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< ::uShort>(::app::Uno::Short__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__string__uType* UxProperty__string__typeof()
{
    static ::uStaticStrong<UxProperty__string__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__string__uType*)::uAllocClassType(sizeof(UxProperty__string__uType), "Outracks.Simulator.Runtime.UxProperty<string>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__string__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__string*, ::uDelegate*))UxProperty__string__OnAddListener;
    type->__fp_OnGet = (::uString*(*)(::app::Uno::UX::Property__string*))UxProperty__string__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__string*, ::uDelegate*))UxProperty__string__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__string*, ::uString*, ::uObject*))UxProperty__string__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__string, _adder),
        "_getter", offsetof(UxProperty__string, _getter),
        "_remover", offsetof(UxProperty__string, _remover),
        "_setter", offsetof(UxProperty__string, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__string, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__string, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__string, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__string, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__string__New_1, 0, true, UxProperty__string__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__string___ObjInit_1(UxProperty__string* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__string___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__string* UxProperty__string__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__string* inst = (UxProperty__string*)::uAllocObject(sizeof(UxProperty__string), UxProperty__string__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__string__OnAddListener(UxProperty__string* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::uString* UxProperty__string__OnGet(UxProperty__string* __this)
{
    return ::uCast< ::uString*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Uno::String__typeof());
}

void UxProperty__string__OnRemoveListener(UxProperty__string* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__string__OnSet(UxProperty__string* __this, ::uString* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Uno_EventArgs__uType* UxProperty__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<UxProperty__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Uno_EventArgs__uType*)::uAllocClassType(sizeof(UxProperty__Uno_EventArgs__uType), "Outracks.Simulator.Runtime.UxProperty<Uno.EventArgs>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Uno_EventArgs__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Uno_EventArgs*, ::uDelegate*))UxProperty__Uno_EventArgs__OnAddListener;
    type->__fp_OnGet = (::app::Uno::EventArgs*(*)(::app::Uno::UX::Property__Uno_EventArgs*))UxProperty__Uno_EventArgs__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Uno_EventArgs*, ::uDelegate*))UxProperty__Uno_EventArgs__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Uno_EventArgs*, ::app::Uno::EventArgs*, ::uObject*))UxProperty__Uno_EventArgs__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Uno_EventArgs, _adder),
        "_getter", offsetof(UxProperty__Uno_EventArgs, _getter),
        "_remover", offsetof(UxProperty__Uno_EventArgs, _remover),
        "_setter", offsetof(UxProperty__Uno_EventArgs, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Uno_EventArgs, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Uno_EventArgs, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Uno_EventArgs, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Uno_EventArgs, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Uno_EventArgs__New_1, 0, true, UxProperty__Uno_EventArgs__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Uno_EventArgs___ObjInit_1(UxProperty__Uno_EventArgs* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Uno_EventArgs___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Uno_EventArgs* UxProperty__Uno_EventArgs__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Uno_EventArgs* inst = (UxProperty__Uno_EventArgs*)::uAllocObject(sizeof(UxProperty__Uno_EventArgs), UxProperty__Uno_EventArgs__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Uno_EventArgs__OnAddListener(UxProperty__Uno_EventArgs* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Uno::EventArgs* UxProperty__Uno_EventArgs__OnGet(UxProperty__Uno_EventArgs* __this)
{
    return ::uCast< ::app::Uno::EventArgs*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Uno::EventArgs__typeof());
}

void UxProperty__Uno_EventArgs__OnRemoveListener(UxProperty__Uno_EventArgs* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Uno_EventArgs__OnSet(UxProperty__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Uno_Platform_iOS_StatusBarStyle__uType* UxProperty__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<UxProperty__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(UxProperty__Uno_Platform_iOS_StatusBarStyle__uType), "Outracks.Simulator.Runtime.UxProperty<Uno.Platform.iOS.StatusBarStyle>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*, ::uDelegate*))UxProperty__Uno_Platform_iOS_StatusBarStyle__OnAddListener;
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*))UxProperty__Uno_Platform_iOS_StatusBarStyle__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*, ::uDelegate*))UxProperty__Uno_Platform_iOS_StatusBarStyle__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*, int, ::uObject*))UxProperty__Uno_Platform_iOS_StatusBarStyle__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Uno_Platform_iOS_StatusBarStyle, _adder),
        "_getter", offsetof(UxProperty__Uno_Platform_iOS_StatusBarStyle, _getter),
        "_remover", offsetof(UxProperty__Uno_Platform_iOS_StatusBarStyle, _remover),
        "_setter", offsetof(UxProperty__Uno_Platform_iOS_StatusBarStyle, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Uno_Platform_iOS_StatusBarStyle, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Uno_Platform_iOS_StatusBarStyle, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Uno_Platform_iOS_StatusBarStyle, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Uno_Platform_iOS_StatusBarStyle, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Uno_Platform_iOS_StatusBarStyle__New_1, 0, true, UxProperty__Uno_Platform_iOS_StatusBarStyle__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Uno_Platform_iOS_StatusBarStyle* UxProperty__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Uno_Platform_iOS_StatusBarStyle* inst = (UxProperty__Uno_Platform_iOS_StatusBarStyle*)::uAllocObject(sizeof(UxProperty__Uno_Platform_iOS_StatusBarStyle), UxProperty__Uno_Platform_iOS_StatusBarStyle__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Uno_Platform_iOS_StatusBarStyle__OnAddListener(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

int UxProperty__Uno_Platform_iOS_StatusBarStyle__OnGet(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return ::uUnbox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>());
}

void UxProperty__Uno_Platform_iOS_StatusBarStyle__OnRemoveListener(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Uno_Platform_iOS_StatusBarStyle__OnSet(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>(::uBox< int>(::app::Uno::Platform::iOS::StatusBarStyle__typeof(), value), origin);
}

// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UxProperty__Uno_UX_FileSource__uType* UxProperty__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<UxProperty__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (UxProperty__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(UxProperty__Uno_UX_FileSource__uType), "Outracks.Simulator.Runtime.UxProperty<Uno.UX.FileSource>", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::UX::Property__Uno_UX_FileSource__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__Uno_UX_FileSource*, ::uDelegate*))UxProperty__Uno_UX_FileSource__OnAddListener;
    type->__fp_OnGet = (::app::Uno::UX::FileSource*(*)(::app::Uno::UX::Property__Uno_UX_FileSource*))UxProperty__Uno_UX_FileSource__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__Uno_UX_FileSource*, ::uDelegate*))UxProperty__Uno_UX_FileSource__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Uno_UX_FileSource*, ::app::Uno::UX::FileSource*, ::uObject*))UxProperty__Uno_UX_FileSource__OnSet;

    type->SetStrongRefs(
        "_adder", offsetof(UxProperty__Uno_UX_FileSource, _adder),
        "_getter", offsetof(UxProperty__Uno_UX_FileSource, _getter),
        "_remover", offsetof(UxProperty__Uno_UX_FileSource, _remover),
        "_setter", offsetof(UxProperty__Uno_UX_FileSource, _setter));

    type->SetFields(4,
        ::uNewField("_adder", NULL, offsetof(UxProperty__Uno_UX_FileSource, _adder), ::app::Uno::Action__object__typeof()),
        ::uNewField("_getter", NULL, offsetof(UxProperty__Uno_UX_FileSource, _getter), ::app::Uno::Func__object__typeof()),
        ::uNewField("_remover", NULL, offsetof(UxProperty__Uno_UX_FileSource, _remover), ::app::Uno::Action__object__typeof()),
        ::uNewField("_setter", NULL, offsetof(UxProperty__Uno_UX_FileSource, _setter), ::app::Uno::Action__object__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UxProperty__Uno_UX_FileSource__New_1, 0, true, UxProperty__Uno_UX_FileSource__typeof(), ::app::Uno::Action__object__object__typeof(), ::app::Uno::Func__object__typeof(), ::app::Uno::Action__object__typeof(), ::app::Uno::Action__object__typeof()));

    ::uRegisterType(type);
    return type;
}

void UxProperty__Uno_UX_FileSource___ObjInit_1(UxProperty__Uno_UX_FileSource* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    ::app::Uno::UX::Property__Uno_UX_FileSource___ObjInit(__this);
    __this->_setter = setter;
    __this->_getter = getter;
    __this->_adder = adder;
    __this->_remover = remover;
}

UxProperty__Uno_UX_FileSource* UxProperty__Uno_UX_FileSource__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover)
{
    UxProperty__Uno_UX_FileSource* inst = (UxProperty__Uno_UX_FileSource*)::uAllocObject(sizeof(UxProperty__Uno_UX_FileSource), UxProperty__Uno_UX_FileSource__typeof());
    inst->_ObjInit_1(setter, getter, adder, remover);
    return inst;
}

void UxProperty__Uno_UX_FileSource__OnAddListener(UxProperty__Uno_UX_FileSource* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_adder, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_adder)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

::app::Uno::UX::FileSource* UxProperty__Uno_UX_FileSource__OnGet(UxProperty__Uno_UX_FileSource* __this)
{
    return ::uCast< ::app::Uno::UX::FileSource*>(::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*>(), ::app::Uno::UX::FileSource__typeof());
}

void UxProperty__Uno_UX_FileSource__OnRemoveListener(UxProperty__Uno_UX_FileSource* __this, ::uDelegate* listener)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_remover, NULL))
    {
        return;
    }

    ::uPtr< ::uDelegate*>(__this->_remover)->InvokeVoid< ::uObject*>((::uObject*)listener);
}

void UxProperty__Uno_UX_FileSource__OnSet(UxProperty__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin)
{
    ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::uObject*, ::uObject*>((::uObject*)value, origin);
}

}}}}
