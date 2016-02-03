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
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__char.h>
#include <app/Uno.UX.ValueChangedArgs__double.h>
#include <app/Uno.UX.ValueChangedArgs__float.h>
#include <app/Uno.UX.ValueChangedArgs__float2.h>
#include <app/Uno.UX.ValueChangedArgs__float3.h>
#include <app/Uno.UX.ValueChangedArgs__float4.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_Easing.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Element.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Font.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Node.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_State.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.ValueChangedArgs__int.h>
#include <app/Uno.UX.ValueChangedArgs__int2.h>
#include <app/Uno.UX.ValueChangedArgs__int3.h>
#include <app/Uno.UX.ValueChangedArgs__int4.h>
#include <app/Uno.UX.ValueChangedArgs__long.h>
#include <app/Uno.UX.ValueChangedArgs__object.h>
#include <app/Uno.UX.ValueChangedArgs__short.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_EventArgs.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_UX_FileSource.h>

namespace app {
namespace Uno {
namespace UX {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__bool__uType* ValueChangedArgs__bool__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__bool__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__bool__uType*)::uAllocClassType(sizeof(ValueChangedArgs__bool__uType), "Uno.UX.ValueChangedArgs<bool>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__bool, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__bool__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__bool__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__bool__New_2, 0, true, ValueChangedArgs__bool__typeof(), ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__bool__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__bool__set_Value, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__bool___ObjInit_1(ValueChangedArgs__bool* __this, bool value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__bool__get_Origin(ValueChangedArgs__bool* __this)
{
    return __this->_Origin;
}

bool ValueChangedArgs__bool__get_Value(ValueChangedArgs__bool* __this)
{
    return __this->_Value;
}

ValueChangedArgs__bool* ValueChangedArgs__bool__New_2(::uStatic* __this, bool value, ::uObject* origin)
{
    ValueChangedArgs__bool* inst = (ValueChangedArgs__bool*)::uAllocObject(sizeof(ValueChangedArgs__bool), ValueChangedArgs__bool__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__bool__set_Origin(ValueChangedArgs__bool* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__bool__set_Value(ValueChangedArgs__bool* __this, bool value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__char__uType* ValueChangedArgs__char__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__char__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__char__uType*)::uAllocClassType(sizeof(ValueChangedArgs__char__uType), "Uno.UX.ValueChangedArgs<char>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__char, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__char__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__char__get_Value, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__char__New_2, 0, true, ValueChangedArgs__char__typeof(), ::app::Uno::Char__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__char__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__char__set_Value, 0, false, ::app::Uno::Char__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__char___ObjInit_1(ValueChangedArgs__char* __this, ::uChar value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__char__get_Origin(ValueChangedArgs__char* __this)
{
    return __this->_Origin;
}

::uChar ValueChangedArgs__char__get_Value(ValueChangedArgs__char* __this)
{
    return __this->_Value;
}

ValueChangedArgs__char* ValueChangedArgs__char__New_2(::uStatic* __this, ::uChar value, ::uObject* origin)
{
    ValueChangedArgs__char* inst = (ValueChangedArgs__char*)::uAllocObject(sizeof(ValueChangedArgs__char), ValueChangedArgs__char__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__char__set_Origin(ValueChangedArgs__char* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__char__set_Value(ValueChangedArgs__char* __this, ::uChar value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__double__uType* ValueChangedArgs__double__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__double__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__double__uType*)::uAllocClassType(sizeof(ValueChangedArgs__double__uType), "Uno.UX.ValueChangedArgs<double>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__double, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__double__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__double__get_Value, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__double__New_2, 0, true, ValueChangedArgs__double__typeof(), ::app::Uno::Double__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__double__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__double__set_Value, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__double___ObjInit_1(ValueChangedArgs__double* __this, double value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__double__get_Origin(ValueChangedArgs__double* __this)
{
    return __this->_Origin;
}

double ValueChangedArgs__double__get_Value(ValueChangedArgs__double* __this)
{
    return __this->_Value;
}

ValueChangedArgs__double* ValueChangedArgs__double__New_2(::uStatic* __this, double value, ::uObject* origin)
{
    ValueChangedArgs__double* inst = (ValueChangedArgs__double*)::uAllocObject(sizeof(ValueChangedArgs__double), ValueChangedArgs__double__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__double__set_Origin(ValueChangedArgs__double* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__double__set_Value(ValueChangedArgs__double* __this, double value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__float__uType* ValueChangedArgs__float__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__float__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__float__uType*)::uAllocClassType(sizeof(ValueChangedArgs__float__uType), "Uno.UX.ValueChangedArgs<float>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__float, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__float__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__float__get_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__float__New_2, 0, true, ValueChangedArgs__float__typeof(), ::app::Uno::Float__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__float__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__float__set_Value, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__float___ObjInit_1(ValueChangedArgs__float* __this, float value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__float__get_Origin(ValueChangedArgs__float* __this)
{
    return __this->_Origin;
}

float ValueChangedArgs__float__get_Value(ValueChangedArgs__float* __this)
{
    return __this->_Value;
}

ValueChangedArgs__float* ValueChangedArgs__float__New_2(::uStatic* __this, float value, ::uObject* origin)
{
    ValueChangedArgs__float* inst = (ValueChangedArgs__float*)::uAllocObject(sizeof(ValueChangedArgs__float), ValueChangedArgs__float__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__float__set_Origin(ValueChangedArgs__float* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__float__set_Value(ValueChangedArgs__float* __this, float value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__float2__uType* ValueChangedArgs__float2__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__float2__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__float2__uType*)::uAllocClassType(sizeof(ValueChangedArgs__float2__uType), "Uno.UX.ValueChangedArgs<float2>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__float2, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__float2__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__float2__get_Value, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__float2__New_2, 0, true, ValueChangedArgs__float2__typeof(), ::app::Uno::Float2__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__float2__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__float2__set_Value, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__float2___ObjInit_1(ValueChangedArgs__float2* __this, ::app::Uno::Float2 value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__float2__get_Origin(ValueChangedArgs__float2* __this)
{
    return __this->_Origin;
}

::app::Uno::Float2 ValueChangedArgs__float2__get_Value(ValueChangedArgs__float2* __this)
{
    return __this->_Value;
}

ValueChangedArgs__float2* ValueChangedArgs__float2__New_2(::uStatic* __this, ::app::Uno::Float2 value, ::uObject* origin)
{
    ValueChangedArgs__float2* inst = (ValueChangedArgs__float2*)::uAllocObject(sizeof(ValueChangedArgs__float2), ValueChangedArgs__float2__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__float2__set_Origin(ValueChangedArgs__float2* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__float2__set_Value(ValueChangedArgs__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__float3__uType* ValueChangedArgs__float3__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__float3__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__float3__uType*)::uAllocClassType(sizeof(ValueChangedArgs__float3__uType), "Uno.UX.ValueChangedArgs<float3>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__float3, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__float3__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__float3__get_Value, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__float3__New_2, 0, true, ValueChangedArgs__float3__typeof(), ::app::Uno::Float3__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__float3__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__float3__set_Value, 0, false, ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__float3___ObjInit_1(ValueChangedArgs__float3* __this, ::app::Uno::Float3 value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__float3__get_Origin(ValueChangedArgs__float3* __this)
{
    return __this->_Origin;
}

::app::Uno::Float3 ValueChangedArgs__float3__get_Value(ValueChangedArgs__float3* __this)
{
    return __this->_Value;
}

ValueChangedArgs__float3* ValueChangedArgs__float3__New_2(::uStatic* __this, ::app::Uno::Float3 value, ::uObject* origin)
{
    ValueChangedArgs__float3* inst = (ValueChangedArgs__float3*)::uAllocObject(sizeof(ValueChangedArgs__float3), ValueChangedArgs__float3__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__float3__set_Origin(ValueChangedArgs__float3* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__float3__set_Value(ValueChangedArgs__float3* __this, ::app::Uno::Float3 value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__float4__uType* ValueChangedArgs__float4__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__float4__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__float4__uType*)::uAllocClassType(sizeof(ValueChangedArgs__float4__uType), "Uno.UX.ValueChangedArgs<float4>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__float4, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__float4__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__float4__get_Value, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__float4__New_2, 0, true, ValueChangedArgs__float4__typeof(), ::app::Uno::Float4__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__float4__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__float4__set_Value, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__float4___ObjInit_1(ValueChangedArgs__float4* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__float4__get_Origin(ValueChangedArgs__float4* __this)
{
    return __this->_Origin;
}

::app::Uno::Float4 ValueChangedArgs__float4__get_Value(ValueChangedArgs__float4* __this)
{
    return __this->_Value;
}

ValueChangedArgs__float4* ValueChangedArgs__float4__New_2(::uStatic* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    ValueChangedArgs__float4* inst = (ValueChangedArgs__float4*)::uAllocObject(sizeof(ValueChangedArgs__float4), ValueChangedArgs__float4__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__float4__set_Origin(ValueChangedArgs__float4* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__float4__set_Value(ValueChangedArgs__float4* __this, ::app::Uno::Float4 value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Animations_AnimationVariant__uType* ValueChangedArgs__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Animations_AnimationVariant__uType), "Uno.UX.ValueChangedArgs<Fuse.Animations.AnimationVariant>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Animations_AnimationVariant, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Animations_AnimationVariant__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Animations_AnimationVariant__get_Value, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Animations_AnimationVariant__New_2, 0, true, ValueChangedArgs__Fuse_Animations_AnimationVariant__typeof(), ::app::Fuse::Animations::AnimationVariant__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Animations_AnimationVariant__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Animations_AnimationVariant__set_Value, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Animations_AnimationVariant___ObjInit_1(ValueChangedArgs__Fuse_Animations_AnimationVariant* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Animations_AnimationVariant__get_Origin(ValueChangedArgs__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Animations_AnimationVariant__get_Value(ValueChangedArgs__Fuse_Animations_AnimationVariant* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Animations_AnimationVariant* ValueChangedArgs__Fuse_Animations_AnimationVariant__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Animations_AnimationVariant* inst = (ValueChangedArgs__Fuse_Animations_AnimationVariant*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Animations_AnimationVariant), ValueChangedArgs__Fuse_Animations_AnimationVariant__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Animations_AnimationVariant__set_Origin(ValueChangedArgs__Fuse_Animations_AnimationVariant* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Animations_AnimationVariant__set_Value(ValueChangedArgs__Fuse_Animations_AnimationVariant* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Animations_Easing__uType* ValueChangedArgs__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Animations_Easing__uType), "Uno.UX.ValueChangedArgs<Fuse.Animations.Easing>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Animations_Easing, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Animations_Easing__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Animations_Easing__get_Value, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Animations_Easing__New_2, 0, true, ValueChangedArgs__Fuse_Animations_Easing__typeof(), ::app::Fuse::Animations::Easing__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Animations_Easing__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Animations_Easing__set_Value, 0, false, ::app::Fuse::Animations::Easing__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Animations_Easing___ObjInit_1(ValueChangedArgs__Fuse_Animations_Easing* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Animations_Easing__get_Origin(ValueChangedArgs__Fuse_Animations_Easing* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Animations_Easing__get_Value(ValueChangedArgs__Fuse_Animations_Easing* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Animations_Easing* ValueChangedArgs__Fuse_Animations_Easing__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Animations_Easing* inst = (ValueChangedArgs__Fuse_Animations_Easing*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Animations_Easing), ValueChangedArgs__Fuse_Animations_Easing__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Animations_Easing__set_Origin(ValueChangedArgs__Fuse_Animations_Easing* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Animations_Easing__set_Value(ValueChangedArgs__Fuse_Animations_Easing* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__uType* ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__uType), "Uno.UX.ValueChangedArgs<Fuse.Animations.KeyframeInterpolation>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__get_Value, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__New_2, 0, true, ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__typeof(), ::app::Fuse::Animations::KeyframeInterpolation__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__set_Value, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Animations_KeyframeInterpolation___ObjInit_1(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__get_Origin(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__get_Value(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* inst = (ValueChangedArgs__Fuse_Animations_KeyframeInterpolation*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation), ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__set_Origin(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__set_Value(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Animations_MixOp__uType* ValueChangedArgs__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Animations_MixOp__uType), "Uno.UX.ValueChangedArgs<Fuse.Animations.MixOp>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Animations_MixOp, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Animations_MixOp__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Animations_MixOp__get_Value, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Animations_MixOp__New_2, 0, true, ValueChangedArgs__Fuse_Animations_MixOp__typeof(), ::app::Fuse::Animations::MixOp__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Animations_MixOp__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Animations_MixOp__set_Value, 0, false, ::app::Fuse::Animations::MixOp__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Animations_MixOp___ObjInit_1(ValueChangedArgs__Fuse_Animations_MixOp* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Animations_MixOp__get_Origin(ValueChangedArgs__Fuse_Animations_MixOp* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Animations_MixOp__get_Value(ValueChangedArgs__Fuse_Animations_MixOp* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Animations_MixOp* ValueChangedArgs__Fuse_Animations_MixOp__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Animations_MixOp* inst = (ValueChangedArgs__Fuse_Animations_MixOp*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Animations_MixOp), ValueChangedArgs__Fuse_Animations_MixOp__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Animations_MixOp__set_Origin(ValueChangedArgs__Fuse_Animations_MixOp* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Animations_MixOp__set_Value(ValueChangedArgs__Fuse_Animations_MixOp* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Drawing_BlendMode__uType* ValueChangedArgs__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Drawing_BlendMode__uType), "Uno.UX.ValueChangedArgs<Fuse.Drawing.BlendMode>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Drawing_BlendMode, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Drawing_BlendMode__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Drawing_BlendMode__get_Value, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Drawing_BlendMode__New_2, 0, true, ValueChangedArgs__Fuse_Drawing_BlendMode__typeof(), ::app::Fuse::Drawing::BlendMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Drawing_BlendMode__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Drawing_BlendMode__set_Value, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Drawing_BlendMode___ObjInit_1(ValueChangedArgs__Fuse_Drawing_BlendMode* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Drawing_BlendMode__get_Origin(ValueChangedArgs__Fuse_Drawing_BlendMode* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Drawing_BlendMode__get_Value(ValueChangedArgs__Fuse_Drawing_BlendMode* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Drawing_BlendMode* ValueChangedArgs__Fuse_Drawing_BlendMode__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Drawing_BlendMode* inst = (ValueChangedArgs__Fuse_Drawing_BlendMode*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Drawing_BlendMode), ValueChangedArgs__Fuse_Drawing_BlendMode__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Drawing_BlendMode__set_Origin(ValueChangedArgs__Fuse_Drawing_BlendMode* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Drawing_BlendMode__set_Value(ValueChangedArgs__Fuse_Drawing_BlendMode* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Drawing_Brush__uType* ValueChangedArgs__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Drawing_Brush__uType), "Uno.UX.ValueChangedArgs<Fuse.Drawing.Brush>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Drawing_Brush, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Drawing_Brush, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Drawing_Brush__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Drawing_Brush__get_Value, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Drawing_Brush__New_2, 0, true, ValueChangedArgs__Fuse_Drawing_Brush__typeof(), ::app::Fuse::Drawing::Brush__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Drawing_Brush__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Drawing_Brush__set_Value, 0, false, ::app::Fuse::Drawing::Brush__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Drawing_Brush___ObjInit_1(ValueChangedArgs__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Drawing_Brush__get_Origin(ValueChangedArgs__Fuse_Drawing_Brush* __this)
{
    return __this->_Origin;
}

::app::Fuse::Drawing::Brush* ValueChangedArgs__Fuse_Drawing_Brush__get_Value(ValueChangedArgs__Fuse_Drawing_Brush* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Drawing_Brush* ValueChangedArgs__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Drawing_Brush* inst = (ValueChangedArgs__Fuse_Drawing_Brush*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Drawing_Brush), ValueChangedArgs__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Drawing_Brush__set_Origin(ValueChangedArgs__Fuse_Drawing_Brush* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Drawing_Brush__set_Value(ValueChangedArgs__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Drawing_DynamicBrush__uType* ValueChangedArgs__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Drawing_DynamicBrush__uType), "Uno.UX.ValueChangedArgs<Fuse.Drawing.DynamicBrush>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Drawing_DynamicBrush, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Drawing_DynamicBrush, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Drawing_DynamicBrush__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Drawing_DynamicBrush__get_Value, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Drawing_DynamicBrush__New_2, 0, true, ValueChangedArgs__Fuse_Drawing_DynamicBrush__typeof(), ::app::Fuse::Drawing::DynamicBrush__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Drawing_DynamicBrush__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Drawing_DynamicBrush__set_Value, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Drawing_DynamicBrush___ObjInit_1(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Drawing_DynamicBrush__get_Origin(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_Origin;
}

::app::Fuse::Drawing::DynamicBrush* ValueChangedArgs__Fuse_Drawing_DynamicBrush__get_Value(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Drawing_DynamicBrush* ValueChangedArgs__Fuse_Drawing_DynamicBrush__New_2(::uStatic* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Drawing_DynamicBrush* inst = (ValueChangedArgs__Fuse_Drawing_DynamicBrush*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Drawing_DynamicBrush), ValueChangedArgs__Fuse_Drawing_DynamicBrush__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Drawing_DynamicBrush__set_Origin(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Drawing_DynamicBrush__set_Value(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Drawing_GradientStop__uType* ValueChangedArgs__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Drawing_GradientStop__uType), "Uno.UX.ValueChangedArgs<Fuse.Drawing.GradientStop>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Drawing_GradientStop, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Drawing_GradientStop, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Drawing_GradientStop__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Drawing_GradientStop__get_Value, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Drawing_GradientStop__New_2, 0, true, ValueChangedArgs__Fuse_Drawing_GradientStop__typeof(), ::app::Fuse::Drawing::GradientStop__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Drawing_GradientStop__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Drawing_GradientStop__set_Value, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Drawing_GradientStop___ObjInit_1(ValueChangedArgs__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Drawing_GradientStop__get_Origin(ValueChangedArgs__Fuse_Drawing_GradientStop* __this)
{
    return __this->_Origin;
}

::app::Fuse::Drawing::GradientStop* ValueChangedArgs__Fuse_Drawing_GradientStop__get_Value(ValueChangedArgs__Fuse_Drawing_GradientStop* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Drawing_GradientStop* ValueChangedArgs__Fuse_Drawing_GradientStop__New_2(::uStatic* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Drawing_GradientStop* inst = (ValueChangedArgs__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Drawing_GradientStop), ValueChangedArgs__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Drawing_GradientStop__set_Origin(ValueChangedArgs__Fuse_Drawing_GradientStop* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Drawing_GradientStop__set_Value(ValueChangedArgs__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Drawing_LinearGradient__uType* ValueChangedArgs__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Drawing_LinearGradient__uType), "Uno.UX.ValueChangedArgs<Fuse.Drawing.LinearGradient>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Drawing_LinearGradient, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Drawing_LinearGradient, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Drawing_LinearGradient__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Drawing_LinearGradient__get_Value, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Drawing_LinearGradient__New_2, 0, true, ValueChangedArgs__Fuse_Drawing_LinearGradient__typeof(), ::app::Fuse::Drawing::LinearGradient__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Drawing_LinearGradient__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Drawing_LinearGradient__set_Value, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Drawing_LinearGradient___ObjInit_1(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Drawing_LinearGradient__get_Origin(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_Origin;
}

::app::Fuse::Drawing::LinearGradient* ValueChangedArgs__Fuse_Drawing_LinearGradient__get_Value(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Drawing_LinearGradient* ValueChangedArgs__Fuse_Drawing_LinearGradient__New_2(::uStatic* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Drawing_LinearGradient* inst = (ValueChangedArgs__Fuse_Drawing_LinearGradient*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Drawing_LinearGradient), ValueChangedArgs__Fuse_Drawing_LinearGradient__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Drawing_LinearGradient__set_Origin(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Drawing_LinearGradient__set_Value(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Drawing_SolidColor__uType* ValueChangedArgs__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Drawing_SolidColor__uType), "Uno.UX.ValueChangedArgs<Fuse.Drawing.SolidColor>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Drawing_SolidColor, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Drawing_SolidColor, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Drawing_SolidColor__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Drawing_SolidColor__get_Value, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Drawing_SolidColor__New_2, 0, true, ValueChangedArgs__Fuse_Drawing_SolidColor__typeof(), ::app::Fuse::Drawing::SolidColor__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Drawing_SolidColor__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Drawing_SolidColor__set_Value, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Drawing_SolidColor___ObjInit_1(ValueChangedArgs__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Drawing_SolidColor__get_Origin(ValueChangedArgs__Fuse_Drawing_SolidColor* __this)
{
    return __this->_Origin;
}

::app::Fuse::Drawing::SolidColor* ValueChangedArgs__Fuse_Drawing_SolidColor__get_Value(ValueChangedArgs__Fuse_Drawing_SolidColor* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Drawing_SolidColor* ValueChangedArgs__Fuse_Drawing_SolidColor__New_2(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Drawing_SolidColor* inst = (ValueChangedArgs__Fuse_Drawing_SolidColor*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Drawing_SolidColor), ValueChangedArgs__Fuse_Drawing_SolidColor__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Drawing_SolidColor__set_Origin(ValueChangedArgs__Fuse_Drawing_SolidColor* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Drawing_SolidColor__set_Value(ValueChangedArgs__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Drawing_StaticBrush__uType* ValueChangedArgs__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Drawing_StaticBrush__uType), "Uno.UX.ValueChangedArgs<Fuse.Drawing.StaticBrush>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Drawing_StaticBrush, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Drawing_StaticBrush, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Drawing_StaticBrush__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Drawing_StaticBrush__get_Value, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Drawing_StaticBrush__New_2, 0, true, ValueChangedArgs__Fuse_Drawing_StaticBrush__typeof(), ::app::Fuse::Drawing::StaticBrush__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Drawing_StaticBrush__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Drawing_StaticBrush__set_Value, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Drawing_StaticBrush___ObjInit_1(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Drawing_StaticBrush__get_Origin(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_Origin;
}

::app::Fuse::Drawing::StaticBrush* ValueChangedArgs__Fuse_Drawing_StaticBrush__get_Value(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Drawing_StaticBrush* ValueChangedArgs__Fuse_Drawing_StaticBrush__New_2(::uStatic* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Drawing_StaticBrush* inst = (ValueChangedArgs__Fuse_Drawing_StaticBrush*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Drawing_StaticBrush), ValueChangedArgs__Fuse_Drawing_StaticBrush__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Drawing_StaticBrush__set_Origin(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Drawing_StaticBrush__set_Value(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_Alignment__uType* ValueChangedArgs__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_Alignment__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.Alignment>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_Alignment, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_Alignment__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_Alignment__get_Value, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_Alignment__New_2, 0, true, ValueChangedArgs__Fuse_Elements_Alignment__typeof(), ::app::Fuse::Elements::Alignment__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_Alignment__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_Alignment__set_Value, 0, false, ::app::Fuse::Elements::Alignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_Alignment___ObjInit_1(ValueChangedArgs__Fuse_Elements_Alignment* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_Alignment__get_Origin(ValueChangedArgs__Fuse_Elements_Alignment* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_Alignment__get_Value(ValueChangedArgs__Fuse_Elements_Alignment* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_Alignment* ValueChangedArgs__Fuse_Elements_Alignment__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_Alignment* inst = (ValueChangedArgs__Fuse_Elements_Alignment*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_Alignment), ValueChangedArgs__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_Alignment__set_Origin(ValueChangedArgs__Fuse_Elements_Alignment* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_Alignment__set_Value(ValueChangedArgs__Fuse_Elements_Alignment* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_CachingMode__uType* ValueChangedArgs__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_CachingMode__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.CachingMode>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_CachingMode, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_CachingMode__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_CachingMode__get_Value, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_CachingMode__New_2, 0, true, ValueChangedArgs__Fuse_Elements_CachingMode__typeof(), ::app::Fuse::Elements::CachingMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_CachingMode__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_CachingMode__set_Value, 0, false, ::app::Fuse::Elements::CachingMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_CachingMode___ObjInit_1(ValueChangedArgs__Fuse_Elements_CachingMode* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_CachingMode__get_Origin(ValueChangedArgs__Fuse_Elements_CachingMode* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_CachingMode__get_Value(ValueChangedArgs__Fuse_Elements_CachingMode* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_CachingMode* ValueChangedArgs__Fuse_Elements_CachingMode__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_CachingMode* inst = (ValueChangedArgs__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_CachingMode), ValueChangedArgs__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_CachingMode__set_Origin(ValueChangedArgs__Fuse_Elements_CachingMode* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_CachingMode__set_Value(ValueChangedArgs__Fuse_Elements_CachingMode* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_Element__uType* ValueChangedArgs__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_Element__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.Element>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_Element, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Elements_Element, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_Element__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_Element__get_Value, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_Element__New_2, 0, true, ValueChangedArgs__Fuse_Elements_Element__typeof(), ::app::Fuse::Elements::Element__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_Element__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_Element__set_Value, 0, false, ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_Element___ObjInit_1(ValueChangedArgs__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_Element__get_Origin(ValueChangedArgs__Fuse_Elements_Element* __this)
{
    return __this->_Origin;
}

::app::Fuse::Elements::Element* ValueChangedArgs__Fuse_Elements_Element__get_Value(ValueChangedArgs__Fuse_Elements_Element* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_Element* ValueChangedArgs__Fuse_Elements_Element__New_2(::uStatic* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_Element* inst = (ValueChangedArgs__Fuse_Elements_Element*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_Element), ValueChangedArgs__Fuse_Elements_Element__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_Element__set_Origin(ValueChangedArgs__Fuse_Elements_Element* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_Element__set_Value(ValueChangedArgs__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_HitTestMode__uType* ValueChangedArgs__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_HitTestMode__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.HitTestMode>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_HitTestMode, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_HitTestMode__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_HitTestMode__get_Value, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_HitTestMode__New_2, 0, true, ValueChangedArgs__Fuse_Elements_HitTestMode__typeof(), ::app::Fuse::Elements::HitTestMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_HitTestMode__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_HitTestMode__set_Value, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_HitTestMode___ObjInit_1(ValueChangedArgs__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_HitTestMode__get_Origin(ValueChangedArgs__Fuse_Elements_HitTestMode* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_HitTestMode__get_Value(ValueChangedArgs__Fuse_Elements_HitTestMode* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_HitTestMode* ValueChangedArgs__Fuse_Elements_HitTestMode__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_HitTestMode* inst = (ValueChangedArgs__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_HitTestMode), ValueChangedArgs__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_HitTestMode__set_Origin(ValueChangedArgs__Fuse_Elements_HitTestMode* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_HitTestMode__set_Value(ValueChangedArgs__Fuse_Elements_HitTestMode* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_SizeUnit__uType* ValueChangedArgs__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_SizeUnit__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.SizeUnit>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_SizeUnit, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_SizeUnit__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_SizeUnit__get_Value, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_SizeUnit__New_2, 0, true, ValueChangedArgs__Fuse_Elements_SizeUnit__typeof(), ::app::Fuse::Elements::SizeUnit__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_SizeUnit__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_SizeUnit__set_Value, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_SizeUnit___ObjInit_1(ValueChangedArgs__Fuse_Elements_SizeUnit* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_SizeUnit__get_Origin(ValueChangedArgs__Fuse_Elements_SizeUnit* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_SizeUnit__get_Value(ValueChangedArgs__Fuse_Elements_SizeUnit* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_SizeUnit* ValueChangedArgs__Fuse_Elements_SizeUnit__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_SizeUnit* inst = (ValueChangedArgs__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_SizeUnit), ValueChangedArgs__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_SizeUnit__set_Origin(ValueChangedArgs__Fuse_Elements_SizeUnit* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_SizeUnit__set_Value(ValueChangedArgs__Fuse_Elements_SizeUnit* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_StretchDirection__uType* ValueChangedArgs__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_StretchDirection__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.StretchDirection>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_StretchDirection, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_StretchDirection__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_StretchDirection__get_Value, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_StretchDirection__New_2, 0, true, ValueChangedArgs__Fuse_Elements_StretchDirection__typeof(), ::app::Fuse::Elements::StretchDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_StretchDirection__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_StretchDirection__set_Value, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_StretchDirection___ObjInit_1(ValueChangedArgs__Fuse_Elements_StretchDirection* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_StretchDirection__get_Origin(ValueChangedArgs__Fuse_Elements_StretchDirection* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_StretchDirection__get_Value(ValueChangedArgs__Fuse_Elements_StretchDirection* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_StretchDirection* ValueChangedArgs__Fuse_Elements_StretchDirection__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_StretchDirection* inst = (ValueChangedArgs__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_StretchDirection), ValueChangedArgs__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_StretchDirection__set_Origin(ValueChangedArgs__Fuse_Elements_StretchDirection* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_StretchDirection__set_Value(ValueChangedArgs__Fuse_Elements_StretchDirection* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_StretchMode__uType* ValueChangedArgs__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_StretchMode__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.StretchMode>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_StretchMode, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_StretchMode__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_StretchMode__get_Value, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_StretchMode__New_2, 0, true, ValueChangedArgs__Fuse_Elements_StretchMode__typeof(), ::app::Fuse::Elements::StretchMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_StretchMode__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_StretchMode__set_Value, 0, false, ::app::Fuse::Elements::StretchMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_StretchMode___ObjInit_1(ValueChangedArgs__Fuse_Elements_StretchMode* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_StretchMode__get_Origin(ValueChangedArgs__Fuse_Elements_StretchMode* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_StretchMode__get_Value(ValueChangedArgs__Fuse_Elements_StretchMode* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_StretchMode* ValueChangedArgs__Fuse_Elements_StretchMode__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_StretchMode* inst = (ValueChangedArgs__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_StretchMode), ValueChangedArgs__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_StretchMode__set_Origin(ValueChangedArgs__Fuse_Elements_StretchMode* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_StretchMode__set_Value(ValueChangedArgs__Fuse_Elements_StretchMode* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_StretchSizing__uType* ValueChangedArgs__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_StretchSizing__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.StretchSizing>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_StretchSizing, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_StretchSizing__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_StretchSizing__get_Value, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_StretchSizing__New_2, 0, true, ValueChangedArgs__Fuse_Elements_StretchSizing__typeof(), ::app::Fuse::Elements::StretchSizing__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_StretchSizing__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_StretchSizing__set_Value, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_StretchSizing___ObjInit_1(ValueChangedArgs__Fuse_Elements_StretchSizing* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_StretchSizing__get_Origin(ValueChangedArgs__Fuse_Elements_StretchSizing* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_StretchSizing__get_Value(ValueChangedArgs__Fuse_Elements_StretchSizing* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_StretchSizing* ValueChangedArgs__Fuse_Elements_StretchSizing__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_StretchSizing* inst = (ValueChangedArgs__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_StretchSizing), ValueChangedArgs__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_StretchSizing__set_Origin(ValueChangedArgs__Fuse_Elements_StretchSizing* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_StretchSizing__set_Value(ValueChangedArgs__Fuse_Elements_StretchSizing* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_TextAlignment__uType* ValueChangedArgs__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_TextAlignment__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.TextAlignment>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_TextAlignment, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_TextAlignment__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_TextAlignment__get_Value, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_TextAlignment__New_2, 0, true, ValueChangedArgs__Fuse_Elements_TextAlignment__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_TextAlignment__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_TextAlignment__set_Value, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_TextAlignment___ObjInit_1(ValueChangedArgs__Fuse_Elements_TextAlignment* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_TextAlignment__get_Origin(ValueChangedArgs__Fuse_Elements_TextAlignment* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_TextAlignment__get_Value(ValueChangedArgs__Fuse_Elements_TextAlignment* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_TextAlignment* ValueChangedArgs__Fuse_Elements_TextAlignment__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_TextAlignment* inst = (ValueChangedArgs__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_TextAlignment), ValueChangedArgs__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_TextAlignment__set_Origin(ValueChangedArgs__Fuse_Elements_TextAlignment* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_TextAlignment__set_Value(ValueChangedArgs__Fuse_Elements_TextAlignment* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_TextWrapping__uType* ValueChangedArgs__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_TextWrapping__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.TextWrapping>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_TextWrapping, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_TextWrapping__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_TextWrapping__get_Value, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_TextWrapping__New_2, 0, true, ValueChangedArgs__Fuse_Elements_TextWrapping__typeof(), ::app::Fuse::Elements::TextWrapping__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_TextWrapping__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_TextWrapping__set_Value, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_TextWrapping___ObjInit_1(ValueChangedArgs__Fuse_Elements_TextWrapping* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_TextWrapping__get_Origin(ValueChangedArgs__Fuse_Elements_TextWrapping* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_TextWrapping__get_Value(ValueChangedArgs__Fuse_Elements_TextWrapping* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_TextWrapping* ValueChangedArgs__Fuse_Elements_TextWrapping__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_TextWrapping* inst = (ValueChangedArgs__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_TextWrapping), ValueChangedArgs__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_TextWrapping__set_Origin(ValueChangedArgs__Fuse_Elements_TextWrapping* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_TextWrapping__set_Value(ValueChangedArgs__Fuse_Elements_TextWrapping* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Elements_Visibility__uType* ValueChangedArgs__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Elements_Visibility__uType), "Uno.UX.ValueChangedArgs<Fuse.Elements.Visibility>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Elements_Visibility, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Elements_Visibility__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Elements_Visibility__get_Value, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Elements_Visibility__New_2, 0, true, ValueChangedArgs__Fuse_Elements_Visibility__typeof(), ::app::Fuse::Elements::Visibility__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Elements_Visibility__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Elements_Visibility__set_Value, 0, false, ::app::Fuse::Elements::Visibility__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Elements_Visibility___ObjInit_1(ValueChangedArgs__Fuse_Elements_Visibility* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Elements_Visibility__get_Origin(ValueChangedArgs__Fuse_Elements_Visibility* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Elements_Visibility__get_Value(ValueChangedArgs__Fuse_Elements_Visibility* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Elements_Visibility* ValueChangedArgs__Fuse_Elements_Visibility__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Elements_Visibility* inst = (ValueChangedArgs__Fuse_Elements_Visibility*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Elements_Visibility), ValueChangedArgs__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Elements_Visibility__set_Origin(ValueChangedArgs__Fuse_Elements_Visibility* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Elements_Visibility__set_Value(ValueChangedArgs__Fuse_Elements_Visibility* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Font__uType* ValueChangedArgs__Fuse_Font__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Font__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Font__uType), "Uno.UX.ValueChangedArgs<Fuse.Font>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Font, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Font, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Font__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Font__get_Value, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Font__New_2, 0, true, ValueChangedArgs__Fuse_Font__typeof(), ::app::Fuse::Font__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Font__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Font__set_Value, 0, false, ::app::Fuse::Font__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Font___ObjInit_1(ValueChangedArgs__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Font__get_Origin(ValueChangedArgs__Fuse_Font* __this)
{
    return __this->_Origin;
}

::app::Fuse::Font* ValueChangedArgs__Fuse_Font__get_Value(ValueChangedArgs__Fuse_Font* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Font* ValueChangedArgs__Fuse_Font__New_2(::uStatic* __this, ::app::Fuse::Font* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Font* inst = (ValueChangedArgs__Fuse_Font*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Font), ValueChangedArgs__Fuse_Font__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Font__set_Origin(ValueChangedArgs__Fuse_Font* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Font__set_Value(ValueChangedArgs__Fuse_Font* __this, ::app::Fuse::Font* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Gestures_Edge__uType* ValueChangedArgs__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Gestures_Edge__uType), "Uno.UX.ValueChangedArgs<Fuse.Gestures.Edge>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Gestures_Edge, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Gestures_Edge__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Gestures_Edge__get_Value, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Gestures_Edge__New_2, 0, true, ValueChangedArgs__Fuse_Gestures_Edge__typeof(), ::app::Fuse::Gestures::Edge__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Gestures_Edge__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Gestures_Edge__set_Value, 0, false, ::app::Fuse::Gestures::Edge__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Gestures_Edge___ObjInit_1(ValueChangedArgs__Fuse_Gestures_Edge* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Gestures_Edge__get_Origin(ValueChangedArgs__Fuse_Gestures_Edge* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Gestures_Edge__get_Value(ValueChangedArgs__Fuse_Gestures_Edge* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Gestures_Edge* ValueChangedArgs__Fuse_Gestures_Edge__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Gestures_Edge* inst = (ValueChangedArgs__Fuse_Gestures_Edge*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Gestures_Edge), ValueChangedArgs__Fuse_Gestures_Edge__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Gestures_Edge__set_Origin(ValueChangedArgs__Fuse_Gestures_Edge* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Gestures_Edge__set_Value(ValueChangedArgs__Fuse_Gestures_Edge* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Gestures_ScrollDirections__uType* ValueChangedArgs__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Gestures_ScrollDirections__uType), "Uno.UX.ValueChangedArgs<Fuse.Gestures.ScrollDirections>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Gestures_ScrollDirections, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Gestures_ScrollDirections__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Gestures_ScrollDirections__get_Value, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Gestures_ScrollDirections__New_2, 0, true, ValueChangedArgs__Fuse_Gestures_ScrollDirections__typeof(), ::app::Fuse::Gestures::ScrollDirections__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Gestures_ScrollDirections__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Gestures_ScrollDirections__set_Value, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Gestures_ScrollDirections___ObjInit_1(ValueChangedArgs__Fuse_Gestures_ScrollDirections* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Gestures_ScrollDirections__get_Origin(ValueChangedArgs__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Gestures_ScrollDirections__get_Value(ValueChangedArgs__Fuse_Gestures_ScrollDirections* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Gestures_ScrollDirections* ValueChangedArgs__Fuse_Gestures_ScrollDirections__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Gestures_ScrollDirections* inst = (ValueChangedArgs__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Gestures_ScrollDirections), ValueChangedArgs__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Gestures_ScrollDirections__set_Origin(ValueChangedArgs__Fuse_Gestures_ScrollDirections* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Gestures_ScrollDirections__set_Value(ValueChangedArgs__Fuse_Gestures_ScrollDirections* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Layouts_Dock__uType* ValueChangedArgs__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Layouts_Dock__uType), "Uno.UX.ValueChangedArgs<Fuse.Layouts.Dock>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Layouts_Dock, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Layouts_Dock__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Layouts_Dock__get_Value, 0, false, ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Layouts_Dock__New_2, 0, true, ValueChangedArgs__Fuse_Layouts_Dock__typeof(), ::app::Fuse::Layouts::Dock__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Layouts_Dock__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Layouts_Dock__set_Value, 0, false, ::app::Fuse::Layouts::Dock__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Layouts_Dock___ObjInit_1(ValueChangedArgs__Fuse_Layouts_Dock* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Layouts_Dock__get_Origin(ValueChangedArgs__Fuse_Layouts_Dock* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Layouts_Dock__get_Value(ValueChangedArgs__Fuse_Layouts_Dock* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Layouts_Dock* ValueChangedArgs__Fuse_Layouts_Dock__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Layouts_Dock* inst = (ValueChangedArgs__Fuse_Layouts_Dock*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Layouts_Dock), ValueChangedArgs__Fuse_Layouts_Dock__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Layouts_Dock__set_Origin(ValueChangedArgs__Fuse_Layouts_Dock* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Layouts_Dock__set_Value(ValueChangedArgs__Fuse_Layouts_Dock* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Layouts_FlowDirection__uType* ValueChangedArgs__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Layouts_FlowDirection__uType), "Uno.UX.ValueChangedArgs<Fuse.Layouts.FlowDirection>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Layouts_FlowDirection, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Layouts_FlowDirection__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Layouts_FlowDirection__get_Value, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Layouts_FlowDirection__New_2, 0, true, ValueChangedArgs__Fuse_Layouts_FlowDirection__typeof(), ::app::Fuse::Layouts::FlowDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Layouts_FlowDirection__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Layouts_FlowDirection__set_Value, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Layouts_FlowDirection___ObjInit_1(ValueChangedArgs__Fuse_Layouts_FlowDirection* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Layouts_FlowDirection__get_Origin(ValueChangedArgs__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Layouts_FlowDirection__get_Value(ValueChangedArgs__Fuse_Layouts_FlowDirection* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Layouts_FlowDirection* ValueChangedArgs__Fuse_Layouts_FlowDirection__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Layouts_FlowDirection* inst = (ValueChangedArgs__Fuse_Layouts_FlowDirection*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Layouts_FlowDirection), ValueChangedArgs__Fuse_Layouts_FlowDirection__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Layouts_FlowDirection__set_Origin(ValueChangedArgs__Fuse_Layouts_FlowDirection* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Layouts_FlowDirection__set_Value(ValueChangedArgs__Fuse_Layouts_FlowDirection* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Layouts_Metric__uType* ValueChangedArgs__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Layouts_Metric__uType), "Uno.UX.ValueChangedArgs<Fuse.Layouts.Metric>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Layouts_Metric, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Layouts_Metric__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Layouts_Metric__get_Value, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Layouts_Metric__New_2, 0, true, ValueChangedArgs__Fuse_Layouts_Metric__typeof(), ::app::Fuse::Layouts::Metric__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Layouts_Metric__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Layouts_Metric__set_Value, 0, false, ::app::Fuse::Layouts::Metric__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Layouts_Metric___ObjInit_1(ValueChangedArgs__Fuse_Layouts_Metric* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Layouts_Metric__get_Origin(ValueChangedArgs__Fuse_Layouts_Metric* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Layouts_Metric__get_Value(ValueChangedArgs__Fuse_Layouts_Metric* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Layouts_Metric* ValueChangedArgs__Fuse_Layouts_Metric__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Layouts_Metric* inst = (ValueChangedArgs__Fuse_Layouts_Metric*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Layouts_Metric), ValueChangedArgs__Fuse_Layouts_Metric__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Layouts_Metric__set_Origin(ValueChangedArgs__Fuse_Layouts_Metric* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Layouts_Metric__set_Value(ValueChangedArgs__Fuse_Layouts_Metric* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Layouts_Orientation__uType* ValueChangedArgs__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Layouts_Orientation__uType), "Uno.UX.ValueChangedArgs<Fuse.Layouts.Orientation>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Layouts_Orientation, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Layouts_Orientation__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Layouts_Orientation__get_Value, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Layouts_Orientation__New_2, 0, true, ValueChangedArgs__Fuse_Layouts_Orientation__typeof(), ::app::Fuse::Layouts::Orientation__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Layouts_Orientation__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Layouts_Orientation__set_Value, 0, false, ::app::Fuse::Layouts::Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Layouts_Orientation___ObjInit_1(ValueChangedArgs__Fuse_Layouts_Orientation* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Layouts_Orientation__get_Origin(ValueChangedArgs__Fuse_Layouts_Orientation* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Layouts_Orientation__get_Value(ValueChangedArgs__Fuse_Layouts_Orientation* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Layouts_Orientation* ValueChangedArgs__Fuse_Layouts_Orientation__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Layouts_Orientation* inst = (ValueChangedArgs__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Layouts_Orientation), ValueChangedArgs__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Layouts_Orientation__set_Origin(ValueChangedArgs__Fuse_Layouts_Orientation* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Layouts_Orientation__set_Value(ValueChangedArgs__Fuse_Layouts_Orientation* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Navigation_NavigationDirection__uType* ValueChangedArgs__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Navigation_NavigationDirection__uType), "Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationDirection>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Navigation_NavigationDirection, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Navigation_NavigationDirection__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Navigation_NavigationDirection__get_Value, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Navigation_NavigationDirection__New_2, 0, true, ValueChangedArgs__Fuse_Navigation_NavigationDirection__typeof(), ::app::Fuse::Navigation::NavigationDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Navigation_NavigationDirection__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Navigation_NavigationDirection__set_Value, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Navigation_NavigationDirection___ObjInit_1(ValueChangedArgs__Fuse_Navigation_NavigationDirection* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Navigation_NavigationDirection__get_Origin(ValueChangedArgs__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Navigation_NavigationDirection__get_Value(ValueChangedArgs__Fuse_Navigation_NavigationDirection* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Navigation_NavigationDirection* ValueChangedArgs__Fuse_Navigation_NavigationDirection__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Navigation_NavigationDirection* inst = (ValueChangedArgs__Fuse_Navigation_NavigationDirection*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Navigation_NavigationDirection), ValueChangedArgs__Fuse_Navigation_NavigationDirection__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Navigation_NavigationDirection__set_Origin(ValueChangedArgs__Fuse_Navigation_NavigationDirection* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Navigation_NavigationDirection__set_Value(ValueChangedArgs__Fuse_Navigation_NavigationDirection* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Navigation_NavigationEdge__uType* ValueChangedArgs__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Navigation_NavigationEdge__uType), "Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationEdge>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Navigation_NavigationEdge, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Navigation_NavigationEdge__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Navigation_NavigationEdge__get_Value, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Navigation_NavigationEdge__New_2, 0, true, ValueChangedArgs__Fuse_Navigation_NavigationEdge__typeof(), ::app::Fuse::Navigation::NavigationEdge__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Navigation_NavigationEdge__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Navigation_NavigationEdge__set_Value, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Navigation_NavigationEdge___ObjInit_1(ValueChangedArgs__Fuse_Navigation_NavigationEdge* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Navigation_NavigationEdge__get_Origin(ValueChangedArgs__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Navigation_NavigationEdge__get_Value(ValueChangedArgs__Fuse_Navigation_NavigationEdge* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Navigation_NavigationEdge* ValueChangedArgs__Fuse_Navigation_NavigationEdge__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Navigation_NavigationEdge* inst = (ValueChangedArgs__Fuse_Navigation_NavigationEdge*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Navigation_NavigationEdge), ValueChangedArgs__Fuse_Navigation_NavigationEdge__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Navigation_NavigationEdge__set_Origin(ValueChangedArgs__Fuse_Navigation_NavigationEdge* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Navigation_NavigationEdge__set_Value(ValueChangedArgs__Fuse_Navigation_NavigationEdge* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__uType* ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__uType), "Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationGotoMode>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Navigation_NavigationGotoMode, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__get_Value, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__New_2, 0, true, ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__typeof(), ::app::Fuse::Navigation::NavigationGotoMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__set_Value, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Navigation_NavigationGotoMode___ObjInit_1(ValueChangedArgs__Fuse_Navigation_NavigationGotoMode* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__get_Origin(ValueChangedArgs__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__get_Value(ValueChangedArgs__Fuse_Navigation_NavigationGotoMode* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Navigation_NavigationGotoMode* ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Navigation_NavigationGotoMode* inst = (ValueChangedArgs__Fuse_Navigation_NavigationGotoMode*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Navigation_NavigationGotoMode), ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__set_Origin(ValueChangedArgs__Fuse_Navigation_NavigationGotoMode* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__set_Value(ValueChangedArgs__Fuse_Navigation_NavigationGotoMode* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Navigation_SnapTo__uType* ValueChangedArgs__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Navigation_SnapTo__uType), "Uno.UX.ValueChangedArgs<Fuse.Navigation.SnapTo>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Navigation_SnapTo, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Navigation_SnapTo__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Navigation_SnapTo__get_Value, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Navigation_SnapTo__New_2, 0, true, ValueChangedArgs__Fuse_Navigation_SnapTo__typeof(), ::app::Fuse::Navigation::SnapTo__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Navigation_SnapTo__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Navigation_SnapTo__set_Value, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Navigation_SnapTo___ObjInit_1(ValueChangedArgs__Fuse_Navigation_SnapTo* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Navigation_SnapTo__get_Origin(ValueChangedArgs__Fuse_Navigation_SnapTo* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Navigation_SnapTo__get_Value(ValueChangedArgs__Fuse_Navigation_SnapTo* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Navigation_SnapTo* ValueChangedArgs__Fuse_Navigation_SnapTo__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Navigation_SnapTo* inst = (ValueChangedArgs__Fuse_Navigation_SnapTo*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Navigation_SnapTo), ValueChangedArgs__Fuse_Navigation_SnapTo__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Navigation_SnapTo__set_Origin(ValueChangedArgs__Fuse_Navigation_SnapTo* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Navigation_SnapTo__set_Value(ValueChangedArgs__Fuse_Navigation_SnapTo* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Navigation_SwipeDirection__uType* ValueChangedArgs__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Navigation_SwipeDirection__uType), "Uno.UX.ValueChangedArgs<Fuse.Navigation.SwipeDirection>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Navigation_SwipeDirection, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Navigation_SwipeDirection__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Navigation_SwipeDirection__get_Value, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Navigation_SwipeDirection__New_2, 0, true, ValueChangedArgs__Fuse_Navigation_SwipeDirection__typeof(), ::app::Fuse::Navigation::SwipeDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Navigation_SwipeDirection__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Navigation_SwipeDirection__set_Value, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Navigation_SwipeDirection___ObjInit_1(ValueChangedArgs__Fuse_Navigation_SwipeDirection* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Navigation_SwipeDirection__get_Origin(ValueChangedArgs__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Navigation_SwipeDirection__get_Value(ValueChangedArgs__Fuse_Navigation_SwipeDirection* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Navigation_SwipeDirection* ValueChangedArgs__Fuse_Navigation_SwipeDirection__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Navigation_SwipeDirection* inst = (ValueChangedArgs__Fuse_Navigation_SwipeDirection*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Navigation_SwipeDirection), ValueChangedArgs__Fuse_Navigation_SwipeDirection__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Navigation_SwipeDirection__set_Origin(ValueChangedArgs__Fuse_Navigation_SwipeDirection* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Navigation_SwipeDirection__set_Value(ValueChangedArgs__Fuse_Navigation_SwipeDirection* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Navigation_SwipeEnds__uType* ValueChangedArgs__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Navigation_SwipeEnds__uType), "Uno.UX.ValueChangedArgs<Fuse.Navigation.SwipeEnds>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Navigation_SwipeEnds, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Navigation_SwipeEnds__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Navigation_SwipeEnds__get_Value, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Navigation_SwipeEnds__New_2, 0, true, ValueChangedArgs__Fuse_Navigation_SwipeEnds__typeof(), ::app::Fuse::Navigation::SwipeEnds__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Navigation_SwipeEnds__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Navigation_SwipeEnds__set_Value, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Navigation_SwipeEnds___ObjInit_1(ValueChangedArgs__Fuse_Navigation_SwipeEnds* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Navigation_SwipeEnds__get_Origin(ValueChangedArgs__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Navigation_SwipeEnds__get_Value(ValueChangedArgs__Fuse_Navigation_SwipeEnds* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Navigation_SwipeEnds* ValueChangedArgs__Fuse_Navigation_SwipeEnds__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Navigation_SwipeEnds* inst = (ValueChangedArgs__Fuse_Navigation_SwipeEnds*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Navigation_SwipeEnds), ValueChangedArgs__Fuse_Navigation_SwipeEnds__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Navigation_SwipeEnds__set_Origin(ValueChangedArgs__Fuse_Navigation_SwipeEnds* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Navigation_SwipeEnds__set_Value(ValueChangedArgs__Fuse_Navigation_SwipeEnds* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Node__uType* ValueChangedArgs__Fuse_Node__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Node__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Node__uType), "Uno.UX.ValueChangedArgs<Fuse.Node>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Node, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Node, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Node__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Node__get_Value, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Node__New_2, 0, true, ValueChangedArgs__Fuse_Node__typeof(), ::app::Fuse::Node__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Node__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Node__set_Value, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Node___ObjInit_1(ValueChangedArgs__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Node__get_Origin(ValueChangedArgs__Fuse_Node* __this)
{
    return __this->_Origin;
}

::app::Fuse::Node* ValueChangedArgs__Fuse_Node__get_Value(ValueChangedArgs__Fuse_Node* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Node* ValueChangedArgs__Fuse_Node__New_2(::uStatic* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Node* inst = (ValueChangedArgs__Fuse_Node*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Node), ValueChangedArgs__Fuse_Node__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Node__set_Origin(ValueChangedArgs__Fuse_Node* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Node__set_Value(ValueChangedArgs__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Resources_ImageSource__uType* ValueChangedArgs__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Resources_ImageSource__uType), "Uno.UX.ValueChangedArgs<Fuse.Resources.ImageSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Resources_ImageSource, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Resources_ImageSource, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Resources_ImageSource__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Resources_ImageSource__get_Value, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Resources_ImageSource__New_2, 0, true, ValueChangedArgs__Fuse_Resources_ImageSource__typeof(), ::app::Fuse::Resources::ImageSource__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Resources_ImageSource__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Resources_ImageSource__set_Value, 0, false, ::app::Fuse::Resources::ImageSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Resources_ImageSource___ObjInit_1(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Resources_ImageSource__get_Origin(ValueChangedArgs__Fuse_Resources_ImageSource* __this)
{
    return __this->_Origin;
}

::app::Fuse::Resources::ImageSource* ValueChangedArgs__Fuse_Resources_ImageSource__get_Value(ValueChangedArgs__Fuse_Resources_ImageSource* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Resources_ImageSource* ValueChangedArgs__Fuse_Resources_ImageSource__New_2(::uStatic* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Resources_ImageSource* inst = (ValueChangedArgs__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Resources_ImageSource), ValueChangedArgs__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Resources_ImageSource__set_Origin(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Resources_ImageSource__set_Value(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__uType* ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__uType), "Uno.UX.ValueChangedArgs<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__get_Value, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__New_2, 0, true, ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__typeof(), ::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__set_Value, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection___ObjInit_1(ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__get_Origin(ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__get_Value(ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection* ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection* inst = (ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection), ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__set_Origin(ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__set_Value(ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Triggers_State__uType* ValueChangedArgs__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Triggers_State__uType), "Uno.UX.ValueChangedArgs<Fuse.Triggers.State>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Triggers_State, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Triggers_State, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Triggers_State__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Triggers_State__get_Value, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Triggers_State__New_2, 0, true, ValueChangedArgs__Fuse_Triggers_State__typeof(), ::app::Fuse::Triggers::State__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Triggers_State__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Triggers_State__set_Value, 0, false, ::app::Fuse::Triggers::State__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Triggers_State___ObjInit_1(ValueChangedArgs__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Triggers_State__get_Origin(ValueChangedArgs__Fuse_Triggers_State* __this)
{
    return __this->_Origin;
}

::app::Fuse::Triggers::State* ValueChangedArgs__Fuse_Triggers_State__get_Value(ValueChangedArgs__Fuse_Triggers_State* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Triggers_State* ValueChangedArgs__Fuse_Triggers_State__New_2(::uStatic* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Triggers_State* inst = (ValueChangedArgs__Fuse_Triggers_State*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Triggers_State), ValueChangedArgs__Fuse_Triggers_State__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Triggers_State__set_Origin(ValueChangedArgs__Fuse_Triggers_State* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Triggers_State__set_Value(ValueChangedArgs__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Triggers_StateTransition__uType* ValueChangedArgs__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Triggers_StateTransition__uType), "Uno.UX.ValueChangedArgs<Fuse.Triggers.StateTransition>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Triggers_StateTransition, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Triggers_StateTransition__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Triggers_StateTransition__get_Value, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Triggers_StateTransition__New_2, 0, true, ValueChangedArgs__Fuse_Triggers_StateTransition__typeof(), ::app::Fuse::Triggers::StateTransition__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Triggers_StateTransition__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Triggers_StateTransition__set_Value, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Triggers_StateTransition___ObjInit_1(ValueChangedArgs__Fuse_Triggers_StateTransition* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Triggers_StateTransition__get_Origin(ValueChangedArgs__Fuse_Triggers_StateTransition* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Triggers_StateTransition__get_Value(ValueChangedArgs__Fuse_Triggers_StateTransition* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Triggers_StateTransition* ValueChangedArgs__Fuse_Triggers_StateTransition__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Triggers_StateTransition* inst = (ValueChangedArgs__Fuse_Triggers_StateTransition*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Triggers_StateTransition), ValueChangedArgs__Fuse_Triggers_StateTransition__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Triggers_StateTransition__set_Origin(ValueChangedArgs__Fuse_Triggers_StateTransition* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Triggers_StateTransition__set_Value(ValueChangedArgs__Fuse_Triggers_StateTransition* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__uType* ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__uType), "Uno.UX.ValueChangedArgs<Fuse.Triggers.TriggerBypassMode>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Triggers_TriggerBypassMode, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__get_Value, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__New_2, 0, true, ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__typeof(), ::app::Fuse::Triggers::TriggerBypassMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__set_Value, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Fuse_Triggers_TriggerBypassMode___ObjInit_1(ValueChangedArgs__Fuse_Triggers_TriggerBypassMode* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__get_Origin(ValueChangedArgs__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__get_Value(ValueChangedArgs__Fuse_Triggers_TriggerBypassMode* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Fuse_Triggers_TriggerBypassMode* ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Fuse_Triggers_TriggerBypassMode* inst = (ValueChangedArgs__Fuse_Triggers_TriggerBypassMode*)::uAllocObject(sizeof(ValueChangedArgs__Fuse_Triggers_TriggerBypassMode), ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__set_Origin(ValueChangedArgs__Fuse_Triggers_TriggerBypassMode* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__set_Value(ValueChangedArgs__Fuse_Triggers_TriggerBypassMode* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__int__uType* ValueChangedArgs__int__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__int__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__int__uType*)::uAllocClassType(sizeof(ValueChangedArgs__int__uType), "Uno.UX.ValueChangedArgs<int>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__int, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__int__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__int__get_Value, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__int__New_2, 0, true, ValueChangedArgs__int__typeof(), ::app::Uno::Int__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__int__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__int__set_Value, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__int___ObjInit_1(ValueChangedArgs__int* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__int__get_Origin(ValueChangedArgs__int* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__int__get_Value(ValueChangedArgs__int* __this)
{
    return __this->_Value;
}

ValueChangedArgs__int* ValueChangedArgs__int__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__int* inst = (ValueChangedArgs__int*)::uAllocObject(sizeof(ValueChangedArgs__int), ValueChangedArgs__int__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__int__set_Origin(ValueChangedArgs__int* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__int__set_Value(ValueChangedArgs__int* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__int2__uType* ValueChangedArgs__int2__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__int2__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__int2__uType*)::uAllocClassType(sizeof(ValueChangedArgs__int2__uType), "Uno.UX.ValueChangedArgs<int2>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__int2, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__int2__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__int2__get_Value, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__int2__New_2, 0, true, ValueChangedArgs__int2__typeof(), ::app::Uno::Int2__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__int2__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__int2__set_Value, 0, false, ::app::Uno::Int2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__int2___ObjInit_1(ValueChangedArgs__int2* __this, ::app::Uno::Int2 value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__int2__get_Origin(ValueChangedArgs__int2* __this)
{
    return __this->_Origin;
}

::app::Uno::Int2 ValueChangedArgs__int2__get_Value(ValueChangedArgs__int2* __this)
{
    return __this->_Value;
}

ValueChangedArgs__int2* ValueChangedArgs__int2__New_2(::uStatic* __this, ::app::Uno::Int2 value, ::uObject* origin)
{
    ValueChangedArgs__int2* inst = (ValueChangedArgs__int2*)::uAllocObject(sizeof(ValueChangedArgs__int2), ValueChangedArgs__int2__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__int2__set_Origin(ValueChangedArgs__int2* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__int2__set_Value(ValueChangedArgs__int2* __this, ::app::Uno::Int2 value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__int3__uType* ValueChangedArgs__int3__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__int3__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__int3__uType*)::uAllocClassType(sizeof(ValueChangedArgs__int3__uType), "Uno.UX.ValueChangedArgs<int3>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__int3, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__int3__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__int3__get_Value, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__int3__New_2, 0, true, ValueChangedArgs__int3__typeof(), ::app::Uno::Int3__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__int3__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__int3__set_Value, 0, false, ::app::Uno::Int3__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__int3___ObjInit_1(ValueChangedArgs__int3* __this, ::app::Uno::Int3 value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__int3__get_Origin(ValueChangedArgs__int3* __this)
{
    return __this->_Origin;
}

::app::Uno::Int3 ValueChangedArgs__int3__get_Value(ValueChangedArgs__int3* __this)
{
    return __this->_Value;
}

ValueChangedArgs__int3* ValueChangedArgs__int3__New_2(::uStatic* __this, ::app::Uno::Int3 value, ::uObject* origin)
{
    ValueChangedArgs__int3* inst = (ValueChangedArgs__int3*)::uAllocObject(sizeof(ValueChangedArgs__int3), ValueChangedArgs__int3__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__int3__set_Origin(ValueChangedArgs__int3* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__int3__set_Value(ValueChangedArgs__int3* __this, ::app::Uno::Int3 value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__int4__uType* ValueChangedArgs__int4__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__int4__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__int4__uType*)::uAllocClassType(sizeof(ValueChangedArgs__int4__uType), "Uno.UX.ValueChangedArgs<int4>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__int4, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__int4__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__int4__get_Value, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__int4__New_2, 0, true, ValueChangedArgs__int4__typeof(), ::app::Uno::Int4__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__int4__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__int4__set_Value, 0, false, ::app::Uno::Int4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__int4___ObjInit_1(ValueChangedArgs__int4* __this, ::app::Uno::Int4 value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__int4__get_Origin(ValueChangedArgs__int4* __this)
{
    return __this->_Origin;
}

::app::Uno::Int4 ValueChangedArgs__int4__get_Value(ValueChangedArgs__int4* __this)
{
    return __this->_Value;
}

ValueChangedArgs__int4* ValueChangedArgs__int4__New_2(::uStatic* __this, ::app::Uno::Int4 value, ::uObject* origin)
{
    ValueChangedArgs__int4* inst = (ValueChangedArgs__int4*)::uAllocObject(sizeof(ValueChangedArgs__int4), ValueChangedArgs__int4__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__int4__set_Origin(ValueChangedArgs__int4* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__int4__set_Value(ValueChangedArgs__int4* __this, ::app::Uno::Int4 value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__long__uType* ValueChangedArgs__long__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__long__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__long__uType*)::uAllocClassType(sizeof(ValueChangedArgs__long__uType), "Uno.UX.ValueChangedArgs<long>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__long, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__long__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__long__get_Value, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__long__New_2, 0, true, ValueChangedArgs__long__typeof(), ::app::Uno::Long__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__long__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__long__set_Value, 0, false, ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__long___ObjInit_1(ValueChangedArgs__long* __this, ::uLong value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__long__get_Origin(ValueChangedArgs__long* __this)
{
    return __this->_Origin;
}

::uLong ValueChangedArgs__long__get_Value(ValueChangedArgs__long* __this)
{
    return __this->_Value;
}

ValueChangedArgs__long* ValueChangedArgs__long__New_2(::uStatic* __this, ::uLong value, ::uObject* origin)
{
    ValueChangedArgs__long* inst = (ValueChangedArgs__long*)::uAllocObject(sizeof(ValueChangedArgs__long), ValueChangedArgs__long__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__long__set_Origin(ValueChangedArgs__long* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__long__set_Value(ValueChangedArgs__long* __this, ::uLong value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__object__uType* ValueChangedArgs__object__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__object__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__object__uType*)::uAllocClassType(sizeof(ValueChangedArgs__object__uType), "Uno.UX.ValueChangedArgs<object>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__object, _Origin),
        "_Value", offsetof(ValueChangedArgs__object, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__object__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__object__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__object__New_2, 0, true, ValueChangedArgs__object__typeof(), ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__object__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__object__set_Value, 0, false, ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__object___ObjInit_1(ValueChangedArgs__object* __this, ::uObject* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__object__get_Origin(ValueChangedArgs__object* __this)
{
    return __this->_Origin;
}

::uObject* ValueChangedArgs__object__get_Value(ValueChangedArgs__object* __this)
{
    return __this->_Value;
}

ValueChangedArgs__object* ValueChangedArgs__object__New_2(::uStatic* __this, ::uObject* value, ::uObject* origin)
{
    ValueChangedArgs__object* inst = (ValueChangedArgs__object*)::uAllocObject(sizeof(ValueChangedArgs__object), ValueChangedArgs__object__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__object__set_Origin(ValueChangedArgs__object* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__object__set_Value(ValueChangedArgs__object* __this, ::uObject* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__short__uType* ValueChangedArgs__short__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__short__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__short__uType*)::uAllocClassType(sizeof(ValueChangedArgs__short__uType), "Uno.UX.ValueChangedArgs<short>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__short, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__short__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__short__get_Value, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__short__New_2, 0, true, ValueChangedArgs__short__typeof(), ::app::Uno::Short__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__short__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__short__set_Value, 0, false, ::app::Uno::Short__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__short___ObjInit_1(ValueChangedArgs__short* __this, ::uShort value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__short__get_Origin(ValueChangedArgs__short* __this)
{
    return __this->_Origin;
}

::uShort ValueChangedArgs__short__get_Value(ValueChangedArgs__short* __this)
{
    return __this->_Value;
}

ValueChangedArgs__short* ValueChangedArgs__short__New_2(::uStatic* __this, ::uShort value, ::uObject* origin)
{
    ValueChangedArgs__short* inst = (ValueChangedArgs__short*)::uAllocObject(sizeof(ValueChangedArgs__short), ValueChangedArgs__short__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__short__set_Origin(ValueChangedArgs__short* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__short__set_Value(ValueChangedArgs__short* __this, ::uShort value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__string__uType* ValueChangedArgs__string__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__string__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__string__uType*)::uAllocClassType(sizeof(ValueChangedArgs__string__uType), "Uno.UX.ValueChangedArgs<string>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__string, _Origin),
        "_Value", offsetof(ValueChangedArgs__string, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__string__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__string__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__string__New_2, 0, true, ValueChangedArgs__string__typeof(), ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__string__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__string__set_Value, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__string___ObjInit_1(ValueChangedArgs__string* __this, ::uString* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__string__get_Origin(ValueChangedArgs__string* __this)
{
    return __this->_Origin;
}

::uString* ValueChangedArgs__string__get_Value(ValueChangedArgs__string* __this)
{
    return __this->_Value;
}

ValueChangedArgs__string* ValueChangedArgs__string__New_2(::uStatic* __this, ::uString* value, ::uObject* origin)
{
    ValueChangedArgs__string* inst = (ValueChangedArgs__string*)::uAllocObject(sizeof(ValueChangedArgs__string), ValueChangedArgs__string__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__string__set_Origin(ValueChangedArgs__string* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__string__set_Value(ValueChangedArgs__string* __this, ::uString* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Uno_EventArgs__uType* ValueChangedArgs__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Uno_EventArgs__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Uno_EventArgs__uType), "Uno.UX.ValueChangedArgs<Uno.EventArgs>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Uno_EventArgs, _Origin),
        "_Value", offsetof(ValueChangedArgs__Uno_EventArgs, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Uno_EventArgs__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Uno_EventArgs__get_Value, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Uno_EventArgs__New_2, 0, true, ValueChangedArgs__Uno_EventArgs__typeof(), ::app::Uno::EventArgs__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Uno_EventArgs__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Uno_EventArgs__set_Value, 0, false, ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Uno_EventArgs___ObjInit_1(ValueChangedArgs__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Uno_EventArgs__get_Origin(ValueChangedArgs__Uno_EventArgs* __this)
{
    return __this->_Origin;
}

::app::Uno::EventArgs* ValueChangedArgs__Uno_EventArgs__get_Value(ValueChangedArgs__Uno_EventArgs* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Uno_EventArgs* ValueChangedArgs__Uno_EventArgs__New_2(::uStatic* __this, ::app::Uno::EventArgs* value, ::uObject* origin)
{
    ValueChangedArgs__Uno_EventArgs* inst = (ValueChangedArgs__Uno_EventArgs*)::uAllocObject(sizeof(ValueChangedArgs__Uno_EventArgs), ValueChangedArgs__Uno_EventArgs__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Uno_EventArgs__set_Origin(ValueChangedArgs__Uno_EventArgs* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Uno_EventArgs__set_Value(ValueChangedArgs__Uno_EventArgs* __this, ::app::Uno::EventArgs* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__uType* ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__uType), "Uno.UX.ValueChangedArgs<Uno.Platform.iOS.StatusBarStyle>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle, _Origin));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__get_Value, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__New_2, 0, true, ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__typeof(), ::app::Uno::Platform::iOS::StatusBarStyle__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__set_Value, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__get_Origin(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_Origin;
}

int ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__get_Value(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__New_2(::uStatic* __this, int value, ::uObject* origin)
{
    ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* inst = (ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle*)::uAllocObject(sizeof(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle), ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__set_Origin(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__set_Value(ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle* __this, int value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Uno_UX_FileSource__uType* ValueChangedArgs__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Uno_UX_FileSource__uType), "Uno.UX.ValueChangedArgs<Uno.UX.FileSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Uno_UX_FileSource, _Origin),
        "_Value", offsetof(ValueChangedArgs__Uno_UX_FileSource, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Origin", ValueChangedArgs__Uno_UX_FileSource__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Value", ValueChangedArgs__Uno_UX_FileSource__get_Value, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction(".ctor", ValueChangedArgs__Uno_UX_FileSource__New_2, 0, true, ValueChangedArgs__Uno_UX_FileSource__typeof(), ::app::Uno::UX::FileSource__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ValueChangedArgs__Uno_UX_FileSource__set_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Value", ValueChangedArgs__Uno_UX_FileSource__set_Value, 0, false, ::app::Uno::UX::FileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValueChangedArgs__Uno_UX_FileSource___ObjInit_1(ValueChangedArgs__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__Uno_UX_FileSource__get_Origin(ValueChangedArgs__Uno_UX_FileSource* __this)
{
    return __this->_Origin;
}

::app::Uno::UX::FileSource* ValueChangedArgs__Uno_UX_FileSource__get_Value(ValueChangedArgs__Uno_UX_FileSource* __this)
{
    return __this->_Value;
}

ValueChangedArgs__Uno_UX_FileSource* ValueChangedArgs__Uno_UX_FileSource__New_2(::uStatic* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin)
{
    ValueChangedArgs__Uno_UX_FileSource* inst = (ValueChangedArgs__Uno_UX_FileSource*)::uAllocObject(sizeof(ValueChangedArgs__Uno_UX_FileSource), ValueChangedArgs__Uno_UX_FileSource__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__Uno_UX_FileSource__set_Origin(ValueChangedArgs__Uno_UX_FileSource* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Uno_UX_FileSource__set_Value(ValueChangedArgs__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value)
{
    __this->_Value = value;
}

}}}
