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
#include <app/Uno.EventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
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
namespace Uno {
namespace UX {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__bool__uType* Property__bool__typeof()
{
    static ::uStaticStrong<Property__bool__uType*> type;
    if (type != NULL) return type;

    type = (Property__bool__uType*)::uAllocClassType(sizeof(Property__bool__uType), "Uno.UX.Property<bool>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__bool__OnAddListener;
    type->__fp_OnGet = Property__bool__OnGet;
    type->__fp_OnRemoveListener = Property__bool__OnRemoveListener;
    type->__fp_OnSet = Property__bool__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__bool, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__bool, _restState), ::app::Uno::Bool__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__bool__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__bool__typeof()),
        ::uNewFunction("Get", Property__bool__Get, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetRestState", Property__bool__GetRestState, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__bool__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__bool__typeof()),
        ::uNewFunctionVoid("Set", Property__bool__Set, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__bool__SetRestState, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__bool___ObjInit(Property__bool* __this)
{
}

void Property__bool__add_ValueChanged(Property__bool* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

bool Property__bool__Get(Property__bool* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

bool Property__bool__GetRestState(Property__bool* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__bool__OnAddListener(Property__bool* __this, ::uDelegate* listener)
{
}

bool Property__bool__OnGet(Property__bool* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__bool__OnRemoveListener(Property__bool* __this, ::uDelegate* listener)
{
}

void Property__bool__OnSet(Property__bool* __this, bool value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__bool__remove_ValueChanged(Property__bool* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__bool__RetainRestState(Property__bool* __this)
{
    if (!__this->_hasRestState)
    {
        bool v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__bool__Set(Property__bool* __this, bool value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__bool__SetRestState(Property__bool* __this, bool value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__char__uType* Property__char__typeof()
{
    static ::uStaticStrong<Property__char__uType*> type;
    if (type != NULL) return type;

    type = (Property__char__uType*)::uAllocClassType(sizeof(Property__char__uType), "Uno.UX.Property<char>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__char__OnAddListener;
    type->__fp_OnGet = Property__char__OnGet;
    type->__fp_OnRemoveListener = Property__char__OnRemoveListener;
    type->__fp_OnSet = Property__char__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__char, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__char, _restState), ::app::Uno::Char__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__char__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__char__typeof()),
        ::uNewFunction("Get", Property__char__Get, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("GetRestState", Property__char__GetRestState, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__char__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__char__typeof()),
        ::uNewFunctionVoid("Set", Property__char__Set, 0, false, ::app::Uno::Char__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__char__SetRestState, 0, false, ::app::Uno::Char__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__char___ObjInit(Property__char* __this)
{
}

void Property__char__add_ValueChanged(Property__char* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::uChar Property__char__Get(Property__char* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::uChar Property__char__GetRestState(Property__char* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__char__OnAddListener(Property__char* __this, ::uDelegate* listener)
{
}

::uChar Property__char__OnGet(Property__char* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__char__OnRemoveListener(Property__char* __this, ::uDelegate* listener)
{
}

void Property__char__OnSet(Property__char* __this, ::uChar value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__char__remove_ValueChanged(Property__char* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__char__RetainRestState(Property__char* __this)
{
    if (!__this->_hasRestState)
    {
        ::uChar v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__char__Set(Property__char* __this, ::uChar value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__char__SetRestState(Property__char* __this, ::uChar value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__double__uType* Property__double__typeof()
{
    static ::uStaticStrong<Property__double__uType*> type;
    if (type != NULL) return type;

    type = (Property__double__uType*)::uAllocClassType(sizeof(Property__double__uType), "Uno.UX.Property<double>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__double__OnAddListener;
    type->__fp_OnGet = Property__double__OnGet;
    type->__fp_OnRemoveListener = Property__double__OnRemoveListener;
    type->__fp_OnSet = Property__double__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__double, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__double, _restState), ::app::Uno::Double__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__double__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__double__typeof()),
        ::uNewFunction("Get", Property__double__Get, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("GetRestState", Property__double__GetRestState, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__double__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__double__typeof()),
        ::uNewFunctionVoid("Set", Property__double__Set, 0, false, ::app::Uno::Double__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__double__SetRestState, 0, false, ::app::Uno::Double__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__double___ObjInit(Property__double* __this)
{
}

void Property__double__add_ValueChanged(Property__double* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

double Property__double__Get(Property__double* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

double Property__double__GetRestState(Property__double* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__double__OnAddListener(Property__double* __this, ::uDelegate* listener)
{
}

double Property__double__OnGet(Property__double* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__double__OnRemoveListener(Property__double* __this, ::uDelegate* listener)
{
}

void Property__double__OnSet(Property__double* __this, double value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__double__remove_ValueChanged(Property__double* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__double__RetainRestState(Property__double* __this)
{
    if (!__this->_hasRestState)
    {
        double v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__double__Set(Property__double* __this, double value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__double__SetRestState(Property__double* __this, double value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__float__uType* Property__float__typeof()
{
    static ::uStaticStrong<Property__float__uType*> type;
    if (type != NULL) return type;

    type = (Property__float__uType*)::uAllocClassType(sizeof(Property__float__uType), "Uno.UX.Property<float>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__float__OnAddListener;
    type->__fp_OnGet = Property__float__OnGet;
    type->__fp_OnRemoveListener = Property__float__OnRemoveListener;
    type->__fp_OnSet = Property__float__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__float, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__float, _restState), ::app::Uno::Float__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__float__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float__typeof()),
        ::uNewFunction("Get", Property__float__Get, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("GetRestState", Property__float__GetRestState, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__float__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float__typeof()),
        ::uNewFunctionVoid("Set", Property__float__Set, 0, false, ::app::Uno::Float__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__float__SetRestState, 0, false, ::app::Uno::Float__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__float___ObjInit(Property__float* __this)
{
}

void Property__float__add_ValueChanged(Property__float* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

float Property__float__Get(Property__float* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

float Property__float__GetRestState(Property__float* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__float__OnAddListener(Property__float* __this, ::uDelegate* listener)
{
}

float Property__float__OnGet(Property__float* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float__OnRemoveListener(Property__float* __this, ::uDelegate* listener)
{
}

void Property__float__OnSet(Property__float* __this, float value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float__remove_ValueChanged(Property__float* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__float__RetainRestState(Property__float* __this)
{
    if (!__this->_hasRestState)
    {
        float v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__float__Set(Property__float* __this, float value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__float__SetRestState(Property__float* __this, float value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__float2__uType* Property__float2__typeof()
{
    static ::uStaticStrong<Property__float2__uType*> type;
    if (type != NULL) return type;

    type = (Property__float2__uType*)::uAllocClassType(sizeof(Property__float2__uType), "Uno.UX.Property<float2>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__float2__OnAddListener;
    type->__fp_OnGet = Property__float2__OnGet;
    type->__fp_OnRemoveListener = Property__float2__OnRemoveListener;
    type->__fp_OnSet = Property__float2__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__float2, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__float2, _restState), ::app::Uno::Float2__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__float2__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float2__typeof()),
        ::uNewFunction("Get", Property__float2__Get, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("GetRestState", Property__float2__GetRestState, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__float2__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float2__typeof()),
        ::uNewFunctionVoid("Set", Property__float2__Set, 0, false, ::app::Uno::Float2__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__float2__SetRestState, 0, false, ::app::Uno::Float2__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__float2___ObjInit(Property__float2* __this)
{
}

void Property__float2__add_ValueChanged(Property__float2* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Uno::Float2 Property__float2__Get(Property__float2* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Uno::Float2 Property__float2__GetRestState(Property__float2* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__float2__OnAddListener(Property__float2* __this, ::uDelegate* listener)
{
}

::app::Uno::Float2 Property__float2__OnGet(Property__float2* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float2__OnRemoveListener(Property__float2* __this, ::uDelegate* listener)
{
}

void Property__float2__OnSet(Property__float2* __this, ::app::Uno::Float2 value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float2__remove_ValueChanged(Property__float2* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__float2__RetainRestState(Property__float2* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::Float2 v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__float2__Set(Property__float2* __this, ::app::Uno::Float2 value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__float2__SetRestState(Property__float2* __this, ::app::Uno::Float2 value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__float3__uType* Property__float3__typeof()
{
    static ::uStaticStrong<Property__float3__uType*> type;
    if (type != NULL) return type;

    type = (Property__float3__uType*)::uAllocClassType(sizeof(Property__float3__uType), "Uno.UX.Property<float3>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__float3__OnAddListener;
    type->__fp_OnGet = Property__float3__OnGet;
    type->__fp_OnRemoveListener = Property__float3__OnRemoveListener;
    type->__fp_OnSet = Property__float3__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__float3, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__float3, _restState), ::app::Uno::Float3__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__float3__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float3__typeof()),
        ::uNewFunction("Get", Property__float3__Get, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("GetRestState", Property__float3__GetRestState, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__float3__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float3__typeof()),
        ::uNewFunctionVoid("Set", Property__float3__Set, 0, false, ::app::Uno::Float3__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__float3__SetRestState, 0, false, ::app::Uno::Float3__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__float3___ObjInit(Property__float3* __this)
{
}

void Property__float3__add_ValueChanged(Property__float3* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Uno::Float3 Property__float3__Get(Property__float3* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Uno::Float3 Property__float3__GetRestState(Property__float3* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__float3__OnAddListener(Property__float3* __this, ::uDelegate* listener)
{
}

::app::Uno::Float3 Property__float3__OnGet(Property__float3* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float3__OnRemoveListener(Property__float3* __this, ::uDelegate* listener)
{
}

void Property__float3__OnSet(Property__float3* __this, ::app::Uno::Float3 value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float3__remove_ValueChanged(Property__float3* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__float3__RetainRestState(Property__float3* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::Float3 v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__float3__Set(Property__float3* __this, ::app::Uno::Float3 value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__float3__SetRestState(Property__float3* __this, ::app::Uno::Float3 value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__float4__uType* Property__float4__typeof()
{
    static ::uStaticStrong<Property__float4__uType*> type;
    if (type != NULL) return type;

    type = (Property__float4__uType*)::uAllocClassType(sizeof(Property__float4__uType), "Uno.UX.Property<float4>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__float4__OnAddListener;
    type->__fp_OnGet = Property__float4__OnGet;
    type->__fp_OnRemoveListener = Property__float4__OnRemoveListener;
    type->__fp_OnSet = Property__float4__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__float4, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__float4, _restState), ::app::Uno::Float4__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__float4__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float4__typeof()),
        ::uNewFunction("Get", Property__float4__Get, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("GetRestState", Property__float4__GetRestState, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__float4__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float4__typeof()),
        ::uNewFunctionVoid("Set", Property__float4__Set, 0, false, ::app::Uno::Float4__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__float4__SetRestState, 0, false, ::app::Uno::Float4__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__float4___ObjInit(Property__float4* __this)
{
}

void Property__float4__add_ValueChanged(Property__float4* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Uno::Float4 Property__float4__Get(Property__float4* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Uno::Float4 Property__float4__GetRestState(Property__float4* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__float4__OnAddListener(Property__float4* __this, ::uDelegate* listener)
{
}

::app::Uno::Float4 Property__float4__OnGet(Property__float4* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float4__OnRemoveListener(Property__float4* __this, ::uDelegate* listener)
{
}

void Property__float4__OnSet(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__float4__remove_ValueChanged(Property__float4* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__float4__RetainRestState(Property__float4* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::Float4 v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__float4__Set(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__float4__SetRestState(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Animations_AnimationVariant__uType* Property__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong<Property__Fuse_Animations_AnimationVariant__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Animations_AnimationVariant__uType*)::uAllocClassType(sizeof(Property__Fuse_Animations_AnimationVariant__uType), "Uno.UX.Property<Fuse.Animations.AnimationVariant>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Animations_AnimationVariant__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Animations_AnimationVariant__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Animations_AnimationVariant__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Animations_AnimationVariant__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Animations_AnimationVariant, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Animations_AnimationVariant, _restState), ::app::Fuse::Animations::AnimationVariant__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Animations_AnimationVariant__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunction("Get", Property__Fuse_Animations_AnimationVariant__Get, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Animations_AnimationVariant__GetRestState, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Animations_AnimationVariant__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Animations_AnimationVariant__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Animations_AnimationVariant__Set, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Animations_AnimationVariant__SetRestState, 0, false, ::app::Fuse::Animations::AnimationVariant__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Animations_AnimationVariant___ObjInit(Property__Fuse_Animations_AnimationVariant* __this)
{
}

void Property__Fuse_Animations_AnimationVariant__add_ValueChanged(Property__Fuse_Animations_AnimationVariant* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Animations_AnimationVariant__Get(Property__Fuse_Animations_AnimationVariant* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Animations_AnimationVariant__GetRestState(Property__Fuse_Animations_AnimationVariant* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Animations_AnimationVariant__OnAddListener(Property__Fuse_Animations_AnimationVariant* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Animations_AnimationVariant__OnGet(Property__Fuse_Animations_AnimationVariant* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Animations_AnimationVariant__OnRemoveListener(Property__Fuse_Animations_AnimationVariant* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Animations_AnimationVariant__OnSet(Property__Fuse_Animations_AnimationVariant* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Animations_AnimationVariant__remove_ValueChanged(Property__Fuse_Animations_AnimationVariant* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Animations_AnimationVariant__RetainRestState(Property__Fuse_Animations_AnimationVariant* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Animations_AnimationVariant__Set(Property__Fuse_Animations_AnimationVariant* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Animations_AnimationVariant__SetRestState(Property__Fuse_Animations_AnimationVariant* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Animations_Easing__uType* Property__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong<Property__Fuse_Animations_Easing__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Animations_Easing__uType*)::uAllocClassType(sizeof(Property__Fuse_Animations_Easing__uType), "Uno.UX.Property<Fuse.Animations.Easing>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Animations_Easing__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Animations_Easing__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Animations_Easing__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Animations_Easing__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Animations_Easing, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Animations_Easing, _restState), ::app::Fuse::Animations::Easing__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Animations_Easing__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Animations_Easing__typeof()),
        ::uNewFunction("Get", Property__Fuse_Animations_Easing__Get, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Animations_Easing__GetRestState, 0, false, ::app::Fuse::Animations::Easing__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Animations_Easing__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Animations_Easing__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Animations_Easing__Set, 0, false, ::app::Fuse::Animations::Easing__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Animations_Easing__SetRestState, 0, false, ::app::Fuse::Animations::Easing__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Animations_Easing___ObjInit(Property__Fuse_Animations_Easing* __this)
{
}

void Property__Fuse_Animations_Easing__add_ValueChanged(Property__Fuse_Animations_Easing* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Animations_Easing__Get(Property__Fuse_Animations_Easing* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Animations_Easing__GetRestState(Property__Fuse_Animations_Easing* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Animations_Easing__OnAddListener(Property__Fuse_Animations_Easing* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Animations_Easing__OnGet(Property__Fuse_Animations_Easing* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Animations_Easing__OnRemoveListener(Property__Fuse_Animations_Easing* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Animations_Easing__OnSet(Property__Fuse_Animations_Easing* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Animations_Easing__remove_ValueChanged(Property__Fuse_Animations_Easing* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Animations_Easing__RetainRestState(Property__Fuse_Animations_Easing* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Animations_Easing__Set(Property__Fuse_Animations_Easing* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Animations_Easing__SetRestState(Property__Fuse_Animations_Easing* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Animations_KeyframeInterpolation__uType* Property__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong<Property__Fuse_Animations_KeyframeInterpolation__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Animations_KeyframeInterpolation__uType*)::uAllocClassType(sizeof(Property__Fuse_Animations_KeyframeInterpolation__uType), "Uno.UX.Property<Fuse.Animations.KeyframeInterpolation>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Animations_KeyframeInterpolation__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Animations_KeyframeInterpolation__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Animations_KeyframeInterpolation__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Animations_KeyframeInterpolation__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Animations_KeyframeInterpolation, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Animations_KeyframeInterpolation, _restState), ::app::Fuse::Animations::KeyframeInterpolation__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Animations_KeyframeInterpolation__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunction("Get", Property__Fuse_Animations_KeyframeInterpolation__Get, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Animations_KeyframeInterpolation__GetRestState, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Animations_KeyframeInterpolation__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Animations_KeyframeInterpolation__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Animations_KeyframeInterpolation__Set, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Animations_KeyframeInterpolation__SetRestState, 0, false, ::app::Fuse::Animations::KeyframeInterpolation__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Animations_KeyframeInterpolation___ObjInit(Property__Fuse_Animations_KeyframeInterpolation* __this)
{
}

void Property__Fuse_Animations_KeyframeInterpolation__add_ValueChanged(Property__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Animations_KeyframeInterpolation__Get(Property__Fuse_Animations_KeyframeInterpolation* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Animations_KeyframeInterpolation__GetRestState(Property__Fuse_Animations_KeyframeInterpolation* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Animations_KeyframeInterpolation__OnAddListener(Property__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Animations_KeyframeInterpolation__OnGet(Property__Fuse_Animations_KeyframeInterpolation* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Animations_KeyframeInterpolation__OnRemoveListener(Property__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Animations_KeyframeInterpolation__OnSet(Property__Fuse_Animations_KeyframeInterpolation* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Animations_KeyframeInterpolation__remove_ValueChanged(Property__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Animations_KeyframeInterpolation__RetainRestState(Property__Fuse_Animations_KeyframeInterpolation* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Animations_KeyframeInterpolation__Set(Property__Fuse_Animations_KeyframeInterpolation* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Animations_KeyframeInterpolation__SetRestState(Property__Fuse_Animations_KeyframeInterpolation* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Animations_MixOp__uType* Property__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong<Property__Fuse_Animations_MixOp__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Animations_MixOp__uType*)::uAllocClassType(sizeof(Property__Fuse_Animations_MixOp__uType), "Uno.UX.Property<Fuse.Animations.MixOp>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Animations_MixOp__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Animations_MixOp__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Animations_MixOp__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Animations_MixOp__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Animations_MixOp, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Animations_MixOp, _restState), ::app::Fuse::Animations::MixOp__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Animations_MixOp__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Animations_MixOp__typeof()),
        ::uNewFunction("Get", Property__Fuse_Animations_MixOp__Get, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Animations_MixOp__GetRestState, 0, false, ::app::Fuse::Animations::MixOp__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Animations_MixOp__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Animations_MixOp__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Animations_MixOp__Set, 0, false, ::app::Fuse::Animations::MixOp__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Animations_MixOp__SetRestState, 0, false, ::app::Fuse::Animations::MixOp__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Animations_MixOp___ObjInit(Property__Fuse_Animations_MixOp* __this)
{
}

void Property__Fuse_Animations_MixOp__add_ValueChanged(Property__Fuse_Animations_MixOp* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Animations_MixOp__Get(Property__Fuse_Animations_MixOp* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Animations_MixOp__GetRestState(Property__Fuse_Animations_MixOp* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Animations_MixOp__OnAddListener(Property__Fuse_Animations_MixOp* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Animations_MixOp__OnGet(Property__Fuse_Animations_MixOp* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Animations_MixOp__OnRemoveListener(Property__Fuse_Animations_MixOp* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Animations_MixOp__OnSet(Property__Fuse_Animations_MixOp* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Animations_MixOp__remove_ValueChanged(Property__Fuse_Animations_MixOp* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Animations_MixOp__RetainRestState(Property__Fuse_Animations_MixOp* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Animations_MixOp__Set(Property__Fuse_Animations_MixOp* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Animations_MixOp__SetRestState(Property__Fuse_Animations_MixOp* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Drawing_BlendMode__uType* Property__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong<Property__Fuse_Drawing_BlendMode__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Drawing_BlendMode__uType*)::uAllocClassType(sizeof(Property__Fuse_Drawing_BlendMode__uType), "Uno.UX.Property<Fuse.Drawing.BlendMode>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Drawing_BlendMode__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Drawing_BlendMode__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Drawing_BlendMode__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Drawing_BlendMode__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Drawing_BlendMode, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Drawing_BlendMode, _restState), ::app::Fuse::Drawing::BlendMode__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Drawing_BlendMode__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunction("Get", Property__Fuse_Drawing_BlendMode__Get, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Drawing_BlendMode__GetRestState, 0, false, ::app::Fuse::Drawing::BlendMode__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Drawing_BlendMode__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_BlendMode__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Drawing_BlendMode__Set, 0, false, ::app::Fuse::Drawing::BlendMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Drawing_BlendMode__SetRestState, 0, false, ::app::Fuse::Drawing::BlendMode__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Drawing_BlendMode___ObjInit(Property__Fuse_Drawing_BlendMode* __this)
{
}

void Property__Fuse_Drawing_BlendMode__add_ValueChanged(Property__Fuse_Drawing_BlendMode* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Drawing_BlendMode__Get(Property__Fuse_Drawing_BlendMode* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Drawing_BlendMode__GetRestState(Property__Fuse_Drawing_BlendMode* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Drawing_BlendMode__OnAddListener(Property__Fuse_Drawing_BlendMode* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Drawing_BlendMode__OnGet(Property__Fuse_Drawing_BlendMode* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_BlendMode__OnRemoveListener(Property__Fuse_Drawing_BlendMode* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Drawing_BlendMode__OnSet(Property__Fuse_Drawing_BlendMode* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_BlendMode__remove_ValueChanged(Property__Fuse_Drawing_BlendMode* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Drawing_BlendMode__RetainRestState(Property__Fuse_Drawing_BlendMode* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Drawing_BlendMode__Set(Property__Fuse_Drawing_BlendMode* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Drawing_BlendMode__SetRestState(Property__Fuse_Drawing_BlendMode* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Drawing_Brush__uType* Property__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<Property__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(Property__Fuse_Drawing_Brush__uType), "Uno.UX.Property<Fuse.Drawing.Brush>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Drawing_Brush__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Drawing_Brush__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Drawing_Brush__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Drawing_Brush__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Drawing_Brush, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Drawing_Brush, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Drawing_Brush, _restState), ::app::Fuse::Drawing::Brush__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Drawing_Brush__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("Get", Property__Fuse_Drawing_Brush__Get, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Drawing_Brush__GetRestState, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Drawing_Brush__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_Brush__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Drawing_Brush__Set, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Drawing_Brush__SetRestState, 0, false, ::app::Fuse::Drawing::Brush__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Drawing_Brush___ObjInit(Property__Fuse_Drawing_Brush* __this)
{
}

void Property__Fuse_Drawing_Brush__add_ValueChanged(Property__Fuse_Drawing_Brush* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Drawing::Brush* Property__Fuse_Drawing_Brush__Get(Property__Fuse_Drawing_Brush* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Drawing::Brush* Property__Fuse_Drawing_Brush__GetRestState(Property__Fuse_Drawing_Brush* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Drawing_Brush__OnAddListener(Property__Fuse_Drawing_Brush* __this, ::uDelegate* listener)
{
}

::app::Fuse::Drawing::Brush* Property__Fuse_Drawing_Brush__OnGet(Property__Fuse_Drawing_Brush* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_Brush__OnRemoveListener(Property__Fuse_Drawing_Brush* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Drawing_Brush__OnSet(Property__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_Brush__remove_ValueChanged(Property__Fuse_Drawing_Brush* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Drawing_Brush__RetainRestState(Property__Fuse_Drawing_Brush* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Drawing::Brush* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Drawing_Brush__Set(Property__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Drawing_Brush__SetRestState(Property__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Drawing_DynamicBrush__uType* Property__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong<Property__Fuse_Drawing_DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Drawing_DynamicBrush__uType*)::uAllocClassType(sizeof(Property__Fuse_Drawing_DynamicBrush__uType), "Uno.UX.Property<Fuse.Drawing.DynamicBrush>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Drawing_DynamicBrush__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Drawing_DynamicBrush__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Drawing_DynamicBrush__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Drawing_DynamicBrush__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Drawing_DynamicBrush, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Drawing_DynamicBrush, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Drawing_DynamicBrush, _restState), ::app::Fuse::Drawing::DynamicBrush__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Drawing_DynamicBrush__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunction("Get", Property__Fuse_Drawing_DynamicBrush__Get, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Drawing_DynamicBrush__GetRestState, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Drawing_DynamicBrush__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_DynamicBrush__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Drawing_DynamicBrush__Set, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Drawing_DynamicBrush__SetRestState, 0, false, ::app::Fuse::Drawing::DynamicBrush__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Drawing_DynamicBrush___ObjInit(Property__Fuse_Drawing_DynamicBrush* __this)
{
}

void Property__Fuse_Drawing_DynamicBrush__add_ValueChanged(Property__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Drawing::DynamicBrush* Property__Fuse_Drawing_DynamicBrush__Get(Property__Fuse_Drawing_DynamicBrush* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Drawing::DynamicBrush* Property__Fuse_Drawing_DynamicBrush__GetRestState(Property__Fuse_Drawing_DynamicBrush* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Drawing_DynamicBrush__OnAddListener(Property__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* listener)
{
}

::app::Fuse::Drawing::DynamicBrush* Property__Fuse_Drawing_DynamicBrush__OnGet(Property__Fuse_Drawing_DynamicBrush* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_DynamicBrush__OnRemoveListener(Property__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Drawing_DynamicBrush__OnSet(Property__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_DynamicBrush__remove_ValueChanged(Property__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Drawing_DynamicBrush__RetainRestState(Property__Fuse_Drawing_DynamicBrush* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Drawing::DynamicBrush* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Drawing_DynamicBrush__Set(Property__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Drawing_DynamicBrush__SetRestState(Property__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Drawing_GradientStop__uType* Property__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<Property__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(Property__Fuse_Drawing_GradientStop__uType), "Uno.UX.Property<Fuse.Drawing.GradientStop>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Drawing_GradientStop__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Drawing_GradientStop__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Drawing_GradientStop__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Drawing_GradientStop__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Drawing_GradientStop, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Drawing_GradientStop, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Drawing_GradientStop, _restState), ::app::Fuse::Drawing::GradientStop__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Drawing_GradientStop__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunction("Get", Property__Fuse_Drawing_GradientStop__Get, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Drawing_GradientStop__GetRestState, 0, false, ::app::Fuse::Drawing::GradientStop__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Drawing_GradientStop__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_GradientStop__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Drawing_GradientStop__Set, 0, false, ::app::Fuse::Drawing::GradientStop__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Drawing_GradientStop__SetRestState, 0, false, ::app::Fuse::Drawing::GradientStop__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Drawing_GradientStop___ObjInit(Property__Fuse_Drawing_GradientStop* __this)
{
}

void Property__Fuse_Drawing_GradientStop__add_ValueChanged(Property__Fuse_Drawing_GradientStop* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Drawing::GradientStop* Property__Fuse_Drawing_GradientStop__Get(Property__Fuse_Drawing_GradientStop* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Drawing::GradientStop* Property__Fuse_Drawing_GradientStop__GetRestState(Property__Fuse_Drawing_GradientStop* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Drawing_GradientStop__OnAddListener(Property__Fuse_Drawing_GradientStop* __this, ::uDelegate* listener)
{
}

::app::Fuse::Drawing::GradientStop* Property__Fuse_Drawing_GradientStop__OnGet(Property__Fuse_Drawing_GradientStop* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_GradientStop__OnRemoveListener(Property__Fuse_Drawing_GradientStop* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Drawing_GradientStop__OnSet(Property__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_GradientStop__remove_ValueChanged(Property__Fuse_Drawing_GradientStop* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Drawing_GradientStop__RetainRestState(Property__Fuse_Drawing_GradientStop* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Drawing::GradientStop* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Drawing_GradientStop__Set(Property__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Drawing_GradientStop__SetRestState(Property__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Drawing_LinearGradient__uType* Property__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong<Property__Fuse_Drawing_LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Drawing_LinearGradient__uType*)::uAllocClassType(sizeof(Property__Fuse_Drawing_LinearGradient__uType), "Uno.UX.Property<Fuse.Drawing.LinearGradient>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Drawing_LinearGradient__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Drawing_LinearGradient__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Drawing_LinearGradient__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Drawing_LinearGradient__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Drawing_LinearGradient, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Drawing_LinearGradient, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Drawing_LinearGradient, _restState), ::app::Fuse::Drawing::LinearGradient__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Drawing_LinearGradient__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunction("Get", Property__Fuse_Drawing_LinearGradient__Get, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Drawing_LinearGradient__GetRestState, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Drawing_LinearGradient__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_LinearGradient__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Drawing_LinearGradient__Set, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Drawing_LinearGradient__SetRestState, 0, false, ::app::Fuse::Drawing::LinearGradient__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Drawing_LinearGradient___ObjInit(Property__Fuse_Drawing_LinearGradient* __this)
{
}

void Property__Fuse_Drawing_LinearGradient__add_ValueChanged(Property__Fuse_Drawing_LinearGradient* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Drawing::LinearGradient* Property__Fuse_Drawing_LinearGradient__Get(Property__Fuse_Drawing_LinearGradient* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Drawing::LinearGradient* Property__Fuse_Drawing_LinearGradient__GetRestState(Property__Fuse_Drawing_LinearGradient* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Drawing_LinearGradient__OnAddListener(Property__Fuse_Drawing_LinearGradient* __this, ::uDelegate* listener)
{
}

::app::Fuse::Drawing::LinearGradient* Property__Fuse_Drawing_LinearGradient__OnGet(Property__Fuse_Drawing_LinearGradient* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_LinearGradient__OnRemoveListener(Property__Fuse_Drawing_LinearGradient* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Drawing_LinearGradient__OnSet(Property__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_LinearGradient__remove_ValueChanged(Property__Fuse_Drawing_LinearGradient* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Drawing_LinearGradient__RetainRestState(Property__Fuse_Drawing_LinearGradient* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Drawing::LinearGradient* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Drawing_LinearGradient__Set(Property__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Drawing_LinearGradient__SetRestState(Property__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Drawing_SolidColor__uType* Property__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong<Property__Fuse_Drawing_SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Drawing_SolidColor__uType*)::uAllocClassType(sizeof(Property__Fuse_Drawing_SolidColor__uType), "Uno.UX.Property<Fuse.Drawing.SolidColor>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Drawing_SolidColor__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Drawing_SolidColor__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Drawing_SolidColor__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Drawing_SolidColor__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Drawing_SolidColor, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Drawing_SolidColor, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Drawing_SolidColor, _restState), ::app::Fuse::Drawing::SolidColor__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Drawing_SolidColor__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunction("Get", Property__Fuse_Drawing_SolidColor__Get, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Drawing_SolidColor__GetRestState, 0, false, ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Drawing_SolidColor__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_SolidColor__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Drawing_SolidColor__Set, 0, false, ::app::Fuse::Drawing::SolidColor__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Drawing_SolidColor__SetRestState, 0, false, ::app::Fuse::Drawing::SolidColor__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Drawing_SolidColor___ObjInit(Property__Fuse_Drawing_SolidColor* __this)
{
}

void Property__Fuse_Drawing_SolidColor__add_ValueChanged(Property__Fuse_Drawing_SolidColor* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Drawing::SolidColor* Property__Fuse_Drawing_SolidColor__Get(Property__Fuse_Drawing_SolidColor* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Drawing::SolidColor* Property__Fuse_Drawing_SolidColor__GetRestState(Property__Fuse_Drawing_SolidColor* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Drawing_SolidColor__OnAddListener(Property__Fuse_Drawing_SolidColor* __this, ::uDelegate* listener)
{
}

::app::Fuse::Drawing::SolidColor* Property__Fuse_Drawing_SolidColor__OnGet(Property__Fuse_Drawing_SolidColor* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_SolidColor__OnRemoveListener(Property__Fuse_Drawing_SolidColor* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Drawing_SolidColor__OnSet(Property__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_SolidColor__remove_ValueChanged(Property__Fuse_Drawing_SolidColor* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Drawing_SolidColor__RetainRestState(Property__Fuse_Drawing_SolidColor* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Drawing::SolidColor* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Drawing_SolidColor__Set(Property__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Drawing_SolidColor__SetRestState(Property__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Drawing_StaticBrush__uType* Property__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong<Property__Fuse_Drawing_StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Drawing_StaticBrush__uType*)::uAllocClassType(sizeof(Property__Fuse_Drawing_StaticBrush__uType), "Uno.UX.Property<Fuse.Drawing.StaticBrush>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Drawing_StaticBrush__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Drawing_StaticBrush__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Drawing_StaticBrush__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Drawing_StaticBrush__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Drawing_StaticBrush, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Drawing_StaticBrush, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Drawing_StaticBrush, _restState), ::app::Fuse::Drawing::StaticBrush__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Drawing_StaticBrush__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunction("Get", Property__Fuse_Drawing_StaticBrush__Get, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Drawing_StaticBrush__GetRestState, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Drawing_StaticBrush__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Drawing_StaticBrush__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Drawing_StaticBrush__Set, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Drawing_StaticBrush__SetRestState, 0, false, ::app::Fuse::Drawing::StaticBrush__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Drawing_StaticBrush___ObjInit(Property__Fuse_Drawing_StaticBrush* __this)
{
}

void Property__Fuse_Drawing_StaticBrush__add_ValueChanged(Property__Fuse_Drawing_StaticBrush* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Drawing::StaticBrush* Property__Fuse_Drawing_StaticBrush__Get(Property__Fuse_Drawing_StaticBrush* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Drawing::StaticBrush* Property__Fuse_Drawing_StaticBrush__GetRestState(Property__Fuse_Drawing_StaticBrush* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Drawing_StaticBrush__OnAddListener(Property__Fuse_Drawing_StaticBrush* __this, ::uDelegate* listener)
{
}

::app::Fuse::Drawing::StaticBrush* Property__Fuse_Drawing_StaticBrush__OnGet(Property__Fuse_Drawing_StaticBrush* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_StaticBrush__OnRemoveListener(Property__Fuse_Drawing_StaticBrush* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Drawing_StaticBrush__OnSet(Property__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Drawing_StaticBrush__remove_ValueChanged(Property__Fuse_Drawing_StaticBrush* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Drawing_StaticBrush__RetainRestState(Property__Fuse_Drawing_StaticBrush* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Drawing::StaticBrush* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Drawing_StaticBrush__Set(Property__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Drawing_StaticBrush__SetRestState(Property__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_Alignment__uType* Property__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_Alignment__uType), "Uno.UX.Property<Fuse.Elements.Alignment>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_Alignment__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_Alignment__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_Alignment__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_Alignment__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_Alignment, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_Alignment, _restState), ::app::Fuse::Elements::Alignment__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_Alignment__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Alignment__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_Alignment__Get, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_Alignment__GetRestState, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_Alignment__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Alignment__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_Alignment__Set, 0, false, ::app::Fuse::Elements::Alignment__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_Alignment__SetRestState, 0, false, ::app::Fuse::Elements::Alignment__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_Alignment___ObjInit(Property__Fuse_Elements_Alignment* __this)
{
}

void Property__Fuse_Elements_Alignment__add_ValueChanged(Property__Fuse_Elements_Alignment* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_Alignment__Get(Property__Fuse_Elements_Alignment* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_Alignment__GetRestState(Property__Fuse_Elements_Alignment* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_Alignment__OnAddListener(Property__Fuse_Elements_Alignment* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_Alignment__OnGet(Property__Fuse_Elements_Alignment* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_Alignment__OnRemoveListener(Property__Fuse_Elements_Alignment* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_Alignment__OnSet(Property__Fuse_Elements_Alignment* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_Alignment__remove_ValueChanged(Property__Fuse_Elements_Alignment* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_Alignment__RetainRestState(Property__Fuse_Elements_Alignment* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_Alignment__Set(Property__Fuse_Elements_Alignment* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_Alignment__SetRestState(Property__Fuse_Elements_Alignment* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_CachingMode__uType* Property__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_CachingMode__uType), "Uno.UX.Property<Fuse.Elements.CachingMode>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_CachingMode__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_CachingMode__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_CachingMode__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_CachingMode__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_CachingMode, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_CachingMode, _restState), ::app::Fuse::Elements::CachingMode__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_CachingMode__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_CachingMode__Get, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_CachingMode__GetRestState, 0, false, ::app::Fuse::Elements::CachingMode__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_CachingMode__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_CachingMode__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_CachingMode__Set, 0, false, ::app::Fuse::Elements::CachingMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_CachingMode__SetRestState, 0, false, ::app::Fuse::Elements::CachingMode__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_CachingMode___ObjInit(Property__Fuse_Elements_CachingMode* __this)
{
}

void Property__Fuse_Elements_CachingMode__add_ValueChanged(Property__Fuse_Elements_CachingMode* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_CachingMode__Get(Property__Fuse_Elements_CachingMode* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_CachingMode__GetRestState(Property__Fuse_Elements_CachingMode* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_CachingMode__OnAddListener(Property__Fuse_Elements_CachingMode* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_CachingMode__OnGet(Property__Fuse_Elements_CachingMode* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_CachingMode__OnRemoveListener(Property__Fuse_Elements_CachingMode* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_CachingMode__OnSet(Property__Fuse_Elements_CachingMode* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_CachingMode__remove_ValueChanged(Property__Fuse_Elements_CachingMode* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_CachingMode__RetainRestState(Property__Fuse_Elements_CachingMode* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_CachingMode__Set(Property__Fuse_Elements_CachingMode* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_CachingMode__SetRestState(Property__Fuse_Elements_CachingMode* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_Element__uType* Property__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_Element__uType), "Uno.UX.Property<Fuse.Elements.Element>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_Element__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_Element__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_Element__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_Element__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Elements_Element, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_Element, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_Element, _restState), ::app::Fuse::Elements::Element__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_Element__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Element__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_Element__Get, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_Element__GetRestState, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_Element__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Element__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_Element__Set, 0, false, ::app::Fuse::Elements::Element__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_Element__SetRestState, 0, false, ::app::Fuse::Elements::Element__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_Element___ObjInit(Property__Fuse_Elements_Element* __this)
{
}

void Property__Fuse_Elements_Element__add_ValueChanged(Property__Fuse_Elements_Element* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Elements::Element* Property__Fuse_Elements_Element__Get(Property__Fuse_Elements_Element* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Elements::Element* Property__Fuse_Elements_Element__GetRestState(Property__Fuse_Elements_Element* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_Element__OnAddListener(Property__Fuse_Elements_Element* __this, ::uDelegate* listener)
{
}

::app::Fuse::Elements::Element* Property__Fuse_Elements_Element__OnGet(Property__Fuse_Elements_Element* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_Element__OnRemoveListener(Property__Fuse_Elements_Element* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_Element__OnSet(Property__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_Element__remove_ValueChanged(Property__Fuse_Elements_Element* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_Element__RetainRestState(Property__Fuse_Elements_Element* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Elements::Element* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_Element__Set(Property__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_Element__SetRestState(Property__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_HitTestMode__uType* Property__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_HitTestMode__uType), "Uno.UX.Property<Fuse.Elements.HitTestMode>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_HitTestMode__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_HitTestMode__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_HitTestMode__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_HitTestMode__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_HitTestMode, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_HitTestMode, _restState), ::app::Fuse::Elements::HitTestMode__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_HitTestMode__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_HitTestMode__Get, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_HitTestMode__GetRestState, 0, false, ::app::Fuse::Elements::HitTestMode__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_HitTestMode__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_HitTestMode__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_HitTestMode__Set, 0, false, ::app::Fuse::Elements::HitTestMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_HitTestMode__SetRestState, 0, false, ::app::Fuse::Elements::HitTestMode__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_HitTestMode___ObjInit(Property__Fuse_Elements_HitTestMode* __this)
{
}

void Property__Fuse_Elements_HitTestMode__add_ValueChanged(Property__Fuse_Elements_HitTestMode* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_HitTestMode__Get(Property__Fuse_Elements_HitTestMode* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_HitTestMode__GetRestState(Property__Fuse_Elements_HitTestMode* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_HitTestMode__OnAddListener(Property__Fuse_Elements_HitTestMode* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_HitTestMode__OnGet(Property__Fuse_Elements_HitTestMode* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_HitTestMode__OnRemoveListener(Property__Fuse_Elements_HitTestMode* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_HitTestMode__OnSet(Property__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_HitTestMode__remove_ValueChanged(Property__Fuse_Elements_HitTestMode* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_HitTestMode__RetainRestState(Property__Fuse_Elements_HitTestMode* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_HitTestMode__Set(Property__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_HitTestMode__SetRestState(Property__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_SizeUnit__uType* Property__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_SizeUnit__uType), "Uno.UX.Property<Fuse.Elements.SizeUnit>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_SizeUnit__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_SizeUnit__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_SizeUnit__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_SizeUnit__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_SizeUnit, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_SizeUnit, _restState), ::app::Fuse::Elements::SizeUnit__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_SizeUnit__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_SizeUnit__Get, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_SizeUnit__GetRestState, 0, false, ::app::Fuse::Elements::SizeUnit__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_SizeUnit__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_SizeUnit__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_SizeUnit__Set, 0, false, ::app::Fuse::Elements::SizeUnit__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_SizeUnit__SetRestState, 0, false, ::app::Fuse::Elements::SizeUnit__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_SizeUnit___ObjInit(Property__Fuse_Elements_SizeUnit* __this)
{
}

void Property__Fuse_Elements_SizeUnit__add_ValueChanged(Property__Fuse_Elements_SizeUnit* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_SizeUnit__Get(Property__Fuse_Elements_SizeUnit* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_SizeUnit__GetRestState(Property__Fuse_Elements_SizeUnit* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_SizeUnit__OnAddListener(Property__Fuse_Elements_SizeUnit* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_SizeUnit__OnGet(Property__Fuse_Elements_SizeUnit* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_SizeUnit__OnRemoveListener(Property__Fuse_Elements_SizeUnit* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_SizeUnit__OnSet(Property__Fuse_Elements_SizeUnit* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_SizeUnit__remove_ValueChanged(Property__Fuse_Elements_SizeUnit* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_SizeUnit__RetainRestState(Property__Fuse_Elements_SizeUnit* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_SizeUnit__Set(Property__Fuse_Elements_SizeUnit* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_SizeUnit__SetRestState(Property__Fuse_Elements_SizeUnit* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_StretchDirection__uType* Property__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_StretchDirection__uType), "Uno.UX.Property<Fuse.Elements.StretchDirection>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_StretchDirection__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_StretchDirection__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_StretchDirection__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_StretchDirection__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_StretchDirection, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_StretchDirection, _restState), ::app::Fuse::Elements::StretchDirection__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_StretchDirection__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_StretchDirection__Get, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_StretchDirection__GetRestState, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_StretchDirection__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchDirection__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_StretchDirection__Set, 0, false, ::app::Fuse::Elements::StretchDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_StretchDirection__SetRestState, 0, false, ::app::Fuse::Elements::StretchDirection__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_StretchDirection___ObjInit(Property__Fuse_Elements_StretchDirection* __this)
{
}

void Property__Fuse_Elements_StretchDirection__add_ValueChanged(Property__Fuse_Elements_StretchDirection* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_StretchDirection__Get(Property__Fuse_Elements_StretchDirection* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_StretchDirection__GetRestState(Property__Fuse_Elements_StretchDirection* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_StretchDirection__OnAddListener(Property__Fuse_Elements_StretchDirection* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_StretchDirection__OnGet(Property__Fuse_Elements_StretchDirection* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_StretchDirection__OnRemoveListener(Property__Fuse_Elements_StretchDirection* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_StretchDirection__OnSet(Property__Fuse_Elements_StretchDirection* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_StretchDirection__remove_ValueChanged(Property__Fuse_Elements_StretchDirection* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_StretchDirection__RetainRestState(Property__Fuse_Elements_StretchDirection* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_StretchDirection__Set(Property__Fuse_Elements_StretchDirection* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_StretchDirection__SetRestState(Property__Fuse_Elements_StretchDirection* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_StretchMode__uType* Property__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_StretchMode__uType), "Uno.UX.Property<Fuse.Elements.StretchMode>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_StretchMode__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_StretchMode__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_StretchMode__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_StretchMode__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_StretchMode, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_StretchMode, _restState), ::app::Fuse::Elements::StretchMode__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_StretchMode__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_StretchMode__Get, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_StretchMode__GetRestState, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_StretchMode__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchMode__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_StretchMode__Set, 0, false, ::app::Fuse::Elements::StretchMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_StretchMode__SetRestState, 0, false, ::app::Fuse::Elements::StretchMode__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_StretchMode___ObjInit(Property__Fuse_Elements_StretchMode* __this)
{
}

void Property__Fuse_Elements_StretchMode__add_ValueChanged(Property__Fuse_Elements_StretchMode* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_StretchMode__Get(Property__Fuse_Elements_StretchMode* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_StretchMode__GetRestState(Property__Fuse_Elements_StretchMode* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_StretchMode__OnAddListener(Property__Fuse_Elements_StretchMode* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_StretchMode__OnGet(Property__Fuse_Elements_StretchMode* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_StretchMode__OnRemoveListener(Property__Fuse_Elements_StretchMode* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_StretchMode__OnSet(Property__Fuse_Elements_StretchMode* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_StretchMode__remove_ValueChanged(Property__Fuse_Elements_StretchMode* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_StretchMode__RetainRestState(Property__Fuse_Elements_StretchMode* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_StretchMode__Set(Property__Fuse_Elements_StretchMode* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_StretchMode__SetRestState(Property__Fuse_Elements_StretchMode* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_StretchSizing__uType* Property__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_StretchSizing__uType), "Uno.UX.Property<Fuse.Elements.StretchSizing>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_StretchSizing__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_StretchSizing__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_StretchSizing__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_StretchSizing__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_StretchSizing, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_StretchSizing, _restState), ::app::Fuse::Elements::StretchSizing__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_StretchSizing__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_StretchSizing__Get, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_StretchSizing__GetRestState, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_StretchSizing__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_StretchSizing__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_StretchSizing__Set, 0, false, ::app::Fuse::Elements::StretchSizing__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_StretchSizing__SetRestState, 0, false, ::app::Fuse::Elements::StretchSizing__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_StretchSizing___ObjInit(Property__Fuse_Elements_StretchSizing* __this)
{
}

void Property__Fuse_Elements_StretchSizing__add_ValueChanged(Property__Fuse_Elements_StretchSizing* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_StretchSizing__Get(Property__Fuse_Elements_StretchSizing* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_StretchSizing__GetRestState(Property__Fuse_Elements_StretchSizing* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_StretchSizing__OnAddListener(Property__Fuse_Elements_StretchSizing* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_StretchSizing__OnGet(Property__Fuse_Elements_StretchSizing* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_StretchSizing__OnRemoveListener(Property__Fuse_Elements_StretchSizing* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_StretchSizing__OnSet(Property__Fuse_Elements_StretchSizing* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_StretchSizing__remove_ValueChanged(Property__Fuse_Elements_StretchSizing* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_StretchSizing__RetainRestState(Property__Fuse_Elements_StretchSizing* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_StretchSizing__Set(Property__Fuse_Elements_StretchSizing* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_StretchSizing__SetRestState(Property__Fuse_Elements_StretchSizing* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_TextAlignment__uType* Property__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_TextAlignment__uType), "Uno.UX.Property<Fuse.Elements.TextAlignment>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_TextAlignment__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_TextAlignment__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_TextAlignment__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_TextAlignment__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_TextAlignment, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_TextAlignment, _restState), ::app::Fuse::Elements::TextAlignment__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_TextAlignment__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_TextAlignment__Get, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_TextAlignment__GetRestState, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_TextAlignment__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_TextAlignment__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_TextAlignment__Set, 0, false, ::app::Fuse::Elements::TextAlignment__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_TextAlignment__SetRestState, 0, false, ::app::Fuse::Elements::TextAlignment__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_TextAlignment___ObjInit(Property__Fuse_Elements_TextAlignment* __this)
{
}

void Property__Fuse_Elements_TextAlignment__add_ValueChanged(Property__Fuse_Elements_TextAlignment* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_TextAlignment__Get(Property__Fuse_Elements_TextAlignment* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_TextAlignment__GetRestState(Property__Fuse_Elements_TextAlignment* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_TextAlignment__OnAddListener(Property__Fuse_Elements_TextAlignment* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_TextAlignment__OnGet(Property__Fuse_Elements_TextAlignment* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_TextAlignment__OnRemoveListener(Property__Fuse_Elements_TextAlignment* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_TextAlignment__OnSet(Property__Fuse_Elements_TextAlignment* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_TextAlignment__remove_ValueChanged(Property__Fuse_Elements_TextAlignment* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_TextAlignment__RetainRestState(Property__Fuse_Elements_TextAlignment* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_TextAlignment__Set(Property__Fuse_Elements_TextAlignment* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_TextAlignment__SetRestState(Property__Fuse_Elements_TextAlignment* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_TextWrapping__uType* Property__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_TextWrapping__uType), "Uno.UX.Property<Fuse.Elements.TextWrapping>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_TextWrapping__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_TextWrapping__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_TextWrapping__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_TextWrapping__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_TextWrapping, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_TextWrapping, _restState), ::app::Fuse::Elements::TextWrapping__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_TextWrapping__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_TextWrapping__Get, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_TextWrapping__GetRestState, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_TextWrapping__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_TextWrapping__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_TextWrapping__Set, 0, false, ::app::Fuse::Elements::TextWrapping__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_TextWrapping__SetRestState, 0, false, ::app::Fuse::Elements::TextWrapping__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_TextWrapping___ObjInit(Property__Fuse_Elements_TextWrapping* __this)
{
}

void Property__Fuse_Elements_TextWrapping__add_ValueChanged(Property__Fuse_Elements_TextWrapping* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_TextWrapping__Get(Property__Fuse_Elements_TextWrapping* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_TextWrapping__GetRestState(Property__Fuse_Elements_TextWrapping* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_TextWrapping__OnAddListener(Property__Fuse_Elements_TextWrapping* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_TextWrapping__OnGet(Property__Fuse_Elements_TextWrapping* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_TextWrapping__OnRemoveListener(Property__Fuse_Elements_TextWrapping* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_TextWrapping__OnSet(Property__Fuse_Elements_TextWrapping* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_TextWrapping__remove_ValueChanged(Property__Fuse_Elements_TextWrapping* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_TextWrapping__RetainRestState(Property__Fuse_Elements_TextWrapping* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_TextWrapping__Set(Property__Fuse_Elements_TextWrapping* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_TextWrapping__SetRestState(Property__Fuse_Elements_TextWrapping* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Elements_Visibility__uType* Property__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<Property__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(Property__Fuse_Elements_Visibility__uType), "Uno.UX.Property<Fuse.Elements.Visibility>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Elements_Visibility__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Elements_Visibility__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Elements_Visibility__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Elements_Visibility__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Elements_Visibility, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Elements_Visibility, _restState), ::app::Fuse::Elements::Visibility__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Elements_Visibility__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Visibility__typeof()),
        ::uNewFunction("Get", Property__Fuse_Elements_Visibility__Get, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Elements_Visibility__GetRestState, 0, false, ::app::Fuse::Elements::Visibility__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Elements_Visibility__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Elements_Visibility__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Elements_Visibility__Set, 0, false, ::app::Fuse::Elements::Visibility__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Elements_Visibility__SetRestState, 0, false, ::app::Fuse::Elements::Visibility__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Elements_Visibility___ObjInit(Property__Fuse_Elements_Visibility* __this)
{
}

void Property__Fuse_Elements_Visibility__add_ValueChanged(Property__Fuse_Elements_Visibility* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Elements_Visibility__Get(Property__Fuse_Elements_Visibility* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Elements_Visibility__GetRestState(Property__Fuse_Elements_Visibility* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Elements_Visibility__OnAddListener(Property__Fuse_Elements_Visibility* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Elements_Visibility__OnGet(Property__Fuse_Elements_Visibility* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_Visibility__OnRemoveListener(Property__Fuse_Elements_Visibility* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Elements_Visibility__OnSet(Property__Fuse_Elements_Visibility* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Elements_Visibility__remove_ValueChanged(Property__Fuse_Elements_Visibility* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Elements_Visibility__RetainRestState(Property__Fuse_Elements_Visibility* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Elements_Visibility__Set(Property__Fuse_Elements_Visibility* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Elements_Visibility__SetRestState(Property__Fuse_Elements_Visibility* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Font__uType* Property__Fuse_Font__typeof()
{
    static ::uStaticStrong<Property__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Font__uType*)::uAllocClassType(sizeof(Property__Fuse_Font__uType), "Uno.UX.Property<Fuse.Font>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Font__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Font__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Font__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Font__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Font, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Font, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Font, _restState), ::app::Fuse::Font__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Font__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Font__typeof()),
        ::uNewFunction("Get", Property__Fuse_Font__Get, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Font__GetRestState, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Font__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Font__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Font__Set, 0, false, ::app::Fuse::Font__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Font__SetRestState, 0, false, ::app::Fuse::Font__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Font___ObjInit(Property__Fuse_Font* __this)
{
}

void Property__Fuse_Font__add_ValueChanged(Property__Fuse_Font* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Font* Property__Fuse_Font__Get(Property__Fuse_Font* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Font* Property__Fuse_Font__GetRestState(Property__Fuse_Font* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Font__OnAddListener(Property__Fuse_Font* __this, ::uDelegate* listener)
{
}

::app::Fuse::Font* Property__Fuse_Font__OnGet(Property__Fuse_Font* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Font__OnRemoveListener(Property__Fuse_Font* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Font__OnSet(Property__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Font__remove_ValueChanged(Property__Fuse_Font* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Font__RetainRestState(Property__Fuse_Font* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Font* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Font__Set(Property__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Font__SetRestState(Property__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Gestures_Edge__uType* Property__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong<Property__Fuse_Gestures_Edge__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Gestures_Edge__uType*)::uAllocClassType(sizeof(Property__Fuse_Gestures_Edge__uType), "Uno.UX.Property<Fuse.Gestures.Edge>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Gestures_Edge__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Gestures_Edge__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Gestures_Edge__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Gestures_Edge__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Gestures_Edge, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Gestures_Edge, _restState), ::app::Fuse::Gestures::Edge__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Gestures_Edge__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Gestures_Edge__typeof()),
        ::uNewFunction("Get", Property__Fuse_Gestures_Edge__Get, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Gestures_Edge__GetRestState, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Gestures_Edge__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Gestures_Edge__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Gestures_Edge__Set, 0, false, ::app::Fuse::Gestures::Edge__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Gestures_Edge__SetRestState, 0, false, ::app::Fuse::Gestures::Edge__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Gestures_Edge___ObjInit(Property__Fuse_Gestures_Edge* __this)
{
}

void Property__Fuse_Gestures_Edge__add_ValueChanged(Property__Fuse_Gestures_Edge* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Gestures_Edge__Get(Property__Fuse_Gestures_Edge* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Gestures_Edge__GetRestState(Property__Fuse_Gestures_Edge* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Gestures_Edge__OnAddListener(Property__Fuse_Gestures_Edge* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Gestures_Edge__OnGet(Property__Fuse_Gestures_Edge* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Gestures_Edge__OnRemoveListener(Property__Fuse_Gestures_Edge* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Gestures_Edge__OnSet(Property__Fuse_Gestures_Edge* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Gestures_Edge__remove_ValueChanged(Property__Fuse_Gestures_Edge* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Gestures_Edge__RetainRestState(Property__Fuse_Gestures_Edge* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Gestures_Edge__Set(Property__Fuse_Gestures_Edge* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Gestures_Edge__SetRestState(Property__Fuse_Gestures_Edge* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Gestures_ScrollDirections__uType* Property__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<Property__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(Property__Fuse_Gestures_ScrollDirections__uType), "Uno.UX.Property<Fuse.Gestures.ScrollDirections>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Gestures_ScrollDirections__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Gestures_ScrollDirections__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Gestures_ScrollDirections__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Gestures_ScrollDirections__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Gestures_ScrollDirections, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Gestures_ScrollDirections, _restState), ::app::Fuse::Gestures::ScrollDirections__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Gestures_ScrollDirections__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunction("Get", Property__Fuse_Gestures_ScrollDirections__Get, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Gestures_ScrollDirections__GetRestState, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Gestures_ScrollDirections__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Gestures_ScrollDirections__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Gestures_ScrollDirections__Set, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Gestures_ScrollDirections__SetRestState, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Gestures_ScrollDirections___ObjInit(Property__Fuse_Gestures_ScrollDirections* __this)
{
}

void Property__Fuse_Gestures_ScrollDirections__add_ValueChanged(Property__Fuse_Gestures_ScrollDirections* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Gestures_ScrollDirections__Get(Property__Fuse_Gestures_ScrollDirections* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Gestures_ScrollDirections__GetRestState(Property__Fuse_Gestures_ScrollDirections* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Gestures_ScrollDirections__OnAddListener(Property__Fuse_Gestures_ScrollDirections* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Gestures_ScrollDirections__OnGet(Property__Fuse_Gestures_ScrollDirections* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Gestures_ScrollDirections__OnRemoveListener(Property__Fuse_Gestures_ScrollDirections* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Gestures_ScrollDirections__OnSet(Property__Fuse_Gestures_ScrollDirections* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Gestures_ScrollDirections__remove_ValueChanged(Property__Fuse_Gestures_ScrollDirections* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Gestures_ScrollDirections__RetainRestState(Property__Fuse_Gestures_ScrollDirections* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Gestures_ScrollDirections__Set(Property__Fuse_Gestures_ScrollDirections* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Gestures_ScrollDirections__SetRestState(Property__Fuse_Gestures_ScrollDirections* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Layouts_Dock__uType* Property__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong<Property__Fuse_Layouts_Dock__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Layouts_Dock__uType*)::uAllocClassType(sizeof(Property__Fuse_Layouts_Dock__uType), "Uno.UX.Property<Fuse.Layouts.Dock>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Layouts_Dock__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Layouts_Dock__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Layouts_Dock__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Layouts_Dock__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Layouts_Dock, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Layouts_Dock, _restState), ::app::Fuse::Layouts::Dock__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Layouts_Dock__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Dock__typeof()),
        ::uNewFunction("Get", Property__Fuse_Layouts_Dock__Get, 0, false, ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Layouts_Dock__GetRestState, 0, false, ::app::Fuse::Layouts::Dock__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Layouts_Dock__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Dock__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Layouts_Dock__Set, 0, false, ::app::Fuse::Layouts::Dock__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Layouts_Dock__SetRestState, 0, false, ::app::Fuse::Layouts::Dock__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Layouts_Dock___ObjInit(Property__Fuse_Layouts_Dock* __this)
{
}

void Property__Fuse_Layouts_Dock__add_ValueChanged(Property__Fuse_Layouts_Dock* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Layouts_Dock__Get(Property__Fuse_Layouts_Dock* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Layouts_Dock__GetRestState(Property__Fuse_Layouts_Dock* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Layouts_Dock__OnAddListener(Property__Fuse_Layouts_Dock* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Layouts_Dock__OnGet(Property__Fuse_Layouts_Dock* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Layouts_Dock__OnRemoveListener(Property__Fuse_Layouts_Dock* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Layouts_Dock__OnSet(Property__Fuse_Layouts_Dock* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Layouts_Dock__remove_ValueChanged(Property__Fuse_Layouts_Dock* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Layouts_Dock__RetainRestState(Property__Fuse_Layouts_Dock* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Layouts_Dock__Set(Property__Fuse_Layouts_Dock* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Layouts_Dock__SetRestState(Property__Fuse_Layouts_Dock* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Layouts_FlowDirection__uType* Property__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong<Property__Fuse_Layouts_FlowDirection__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Layouts_FlowDirection__uType*)::uAllocClassType(sizeof(Property__Fuse_Layouts_FlowDirection__uType), "Uno.UX.Property<Fuse.Layouts.FlowDirection>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Layouts_FlowDirection__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Layouts_FlowDirection__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Layouts_FlowDirection__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Layouts_FlowDirection__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Layouts_FlowDirection, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Layouts_FlowDirection, _restState), ::app::Fuse::Layouts::FlowDirection__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Layouts_FlowDirection__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunction("Get", Property__Fuse_Layouts_FlowDirection__Get, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Layouts_FlowDirection__GetRestState, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Layouts_FlowDirection__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_FlowDirection__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Layouts_FlowDirection__Set, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Layouts_FlowDirection__SetRestState, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Layouts_FlowDirection___ObjInit(Property__Fuse_Layouts_FlowDirection* __this)
{
}

void Property__Fuse_Layouts_FlowDirection__add_ValueChanged(Property__Fuse_Layouts_FlowDirection* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Layouts_FlowDirection__Get(Property__Fuse_Layouts_FlowDirection* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Layouts_FlowDirection__GetRestState(Property__Fuse_Layouts_FlowDirection* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Layouts_FlowDirection__OnAddListener(Property__Fuse_Layouts_FlowDirection* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Layouts_FlowDirection__OnGet(Property__Fuse_Layouts_FlowDirection* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Layouts_FlowDirection__OnRemoveListener(Property__Fuse_Layouts_FlowDirection* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Layouts_FlowDirection__OnSet(Property__Fuse_Layouts_FlowDirection* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Layouts_FlowDirection__remove_ValueChanged(Property__Fuse_Layouts_FlowDirection* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Layouts_FlowDirection__RetainRestState(Property__Fuse_Layouts_FlowDirection* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Layouts_FlowDirection__Set(Property__Fuse_Layouts_FlowDirection* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Layouts_FlowDirection__SetRestState(Property__Fuse_Layouts_FlowDirection* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Layouts_Metric__uType* Property__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong<Property__Fuse_Layouts_Metric__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Layouts_Metric__uType*)::uAllocClassType(sizeof(Property__Fuse_Layouts_Metric__uType), "Uno.UX.Property<Fuse.Layouts.Metric>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Layouts_Metric__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Layouts_Metric__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Layouts_Metric__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Layouts_Metric__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Layouts_Metric, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Layouts_Metric, _restState), ::app::Fuse::Layouts::Metric__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Layouts_Metric__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Metric__typeof()),
        ::uNewFunction("Get", Property__Fuse_Layouts_Metric__Get, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Layouts_Metric__GetRestState, 0, false, ::app::Fuse::Layouts::Metric__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Layouts_Metric__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Metric__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Layouts_Metric__Set, 0, false, ::app::Fuse::Layouts::Metric__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Layouts_Metric__SetRestState, 0, false, ::app::Fuse::Layouts::Metric__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Layouts_Metric___ObjInit(Property__Fuse_Layouts_Metric* __this)
{
}

void Property__Fuse_Layouts_Metric__add_ValueChanged(Property__Fuse_Layouts_Metric* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Layouts_Metric__Get(Property__Fuse_Layouts_Metric* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Layouts_Metric__GetRestState(Property__Fuse_Layouts_Metric* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Layouts_Metric__OnAddListener(Property__Fuse_Layouts_Metric* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Layouts_Metric__OnGet(Property__Fuse_Layouts_Metric* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Layouts_Metric__OnRemoveListener(Property__Fuse_Layouts_Metric* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Layouts_Metric__OnSet(Property__Fuse_Layouts_Metric* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Layouts_Metric__remove_ValueChanged(Property__Fuse_Layouts_Metric* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Layouts_Metric__RetainRestState(Property__Fuse_Layouts_Metric* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Layouts_Metric__Set(Property__Fuse_Layouts_Metric* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Layouts_Metric__SetRestState(Property__Fuse_Layouts_Metric* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Layouts_Orientation__uType* Property__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<Property__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(Property__Fuse_Layouts_Orientation__uType), "Uno.UX.Property<Fuse.Layouts.Orientation>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Layouts_Orientation__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Layouts_Orientation__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Layouts_Orientation__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Layouts_Orientation__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Layouts_Orientation, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Layouts_Orientation, _restState), ::app::Fuse::Layouts::Orientation__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Layouts_Orientation__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunction("Get", Property__Fuse_Layouts_Orientation__Get, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Layouts_Orientation__GetRestState, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Layouts_Orientation__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Layouts_Orientation__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Layouts_Orientation__Set, 0, false, ::app::Fuse::Layouts::Orientation__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Layouts_Orientation__SetRestState, 0, false, ::app::Fuse::Layouts::Orientation__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Layouts_Orientation___ObjInit(Property__Fuse_Layouts_Orientation* __this)
{
}

void Property__Fuse_Layouts_Orientation__add_ValueChanged(Property__Fuse_Layouts_Orientation* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Layouts_Orientation__Get(Property__Fuse_Layouts_Orientation* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Layouts_Orientation__GetRestState(Property__Fuse_Layouts_Orientation* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Layouts_Orientation__OnAddListener(Property__Fuse_Layouts_Orientation* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Layouts_Orientation__OnGet(Property__Fuse_Layouts_Orientation* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Layouts_Orientation__OnRemoveListener(Property__Fuse_Layouts_Orientation* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Layouts_Orientation__OnSet(Property__Fuse_Layouts_Orientation* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Layouts_Orientation__remove_ValueChanged(Property__Fuse_Layouts_Orientation* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Layouts_Orientation__RetainRestState(Property__Fuse_Layouts_Orientation* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Layouts_Orientation__Set(Property__Fuse_Layouts_Orientation* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Layouts_Orientation__SetRestState(Property__Fuse_Layouts_Orientation* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Navigation_NavigationDirection__uType* Property__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong<Property__Fuse_Navigation_NavigationDirection__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Navigation_NavigationDirection__uType*)::uAllocClassType(sizeof(Property__Fuse_Navigation_NavigationDirection__uType), "Uno.UX.Property<Fuse.Navigation.NavigationDirection>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Navigation_NavigationDirection__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Navigation_NavigationDirection__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Navigation_NavigationDirection__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Navigation_NavigationDirection__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Navigation_NavigationDirection, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Navigation_NavigationDirection, _restState), ::app::Fuse::Navigation::NavigationDirection__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Navigation_NavigationDirection__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunction("Get", Property__Fuse_Navigation_NavigationDirection__Get, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Navigation_NavigationDirection__GetRestState, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Navigation_NavigationDirection__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationDirection__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Navigation_NavigationDirection__Set, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Navigation_NavigationDirection__SetRestState, 0, false, ::app::Fuse::Navigation::NavigationDirection__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Navigation_NavigationDirection___ObjInit(Property__Fuse_Navigation_NavigationDirection* __this)
{
}

void Property__Fuse_Navigation_NavigationDirection__add_ValueChanged(Property__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Navigation_NavigationDirection__Get(Property__Fuse_Navigation_NavigationDirection* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Navigation_NavigationDirection__GetRestState(Property__Fuse_Navigation_NavigationDirection* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Navigation_NavigationDirection__OnAddListener(Property__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Navigation_NavigationDirection__OnGet(Property__Fuse_Navigation_NavigationDirection* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_NavigationDirection__OnRemoveListener(Property__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Navigation_NavigationDirection__OnSet(Property__Fuse_Navigation_NavigationDirection* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_NavigationDirection__remove_ValueChanged(Property__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Navigation_NavigationDirection__RetainRestState(Property__Fuse_Navigation_NavigationDirection* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Navigation_NavigationDirection__Set(Property__Fuse_Navigation_NavigationDirection* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Navigation_NavigationDirection__SetRestState(Property__Fuse_Navigation_NavigationDirection* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Navigation_NavigationEdge__uType* Property__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong<Property__Fuse_Navigation_NavigationEdge__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Navigation_NavigationEdge__uType*)::uAllocClassType(sizeof(Property__Fuse_Navigation_NavigationEdge__uType), "Uno.UX.Property<Fuse.Navigation.NavigationEdge>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Navigation_NavigationEdge__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Navigation_NavigationEdge__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Navigation_NavigationEdge__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Navigation_NavigationEdge__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Navigation_NavigationEdge, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Navigation_NavigationEdge, _restState), ::app::Fuse::Navigation::NavigationEdge__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Navigation_NavigationEdge__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunction("Get", Property__Fuse_Navigation_NavigationEdge__Get, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Navigation_NavigationEdge__GetRestState, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Navigation_NavigationEdge__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationEdge__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Navigation_NavigationEdge__Set, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Navigation_NavigationEdge__SetRestState, 0, false, ::app::Fuse::Navigation::NavigationEdge__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Navigation_NavigationEdge___ObjInit(Property__Fuse_Navigation_NavigationEdge* __this)
{
}

void Property__Fuse_Navigation_NavigationEdge__add_ValueChanged(Property__Fuse_Navigation_NavigationEdge* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Navigation_NavigationEdge__Get(Property__Fuse_Navigation_NavigationEdge* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Navigation_NavigationEdge__GetRestState(Property__Fuse_Navigation_NavigationEdge* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Navigation_NavigationEdge__OnAddListener(Property__Fuse_Navigation_NavigationEdge* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Navigation_NavigationEdge__OnGet(Property__Fuse_Navigation_NavigationEdge* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_NavigationEdge__OnRemoveListener(Property__Fuse_Navigation_NavigationEdge* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Navigation_NavigationEdge__OnSet(Property__Fuse_Navigation_NavigationEdge* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_NavigationEdge__remove_ValueChanged(Property__Fuse_Navigation_NavigationEdge* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Navigation_NavigationEdge__RetainRestState(Property__Fuse_Navigation_NavigationEdge* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Navigation_NavigationEdge__Set(Property__Fuse_Navigation_NavigationEdge* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Navigation_NavigationEdge__SetRestState(Property__Fuse_Navigation_NavigationEdge* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Navigation_NavigationGotoMode__uType* Property__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong<Property__Fuse_Navigation_NavigationGotoMode__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Navigation_NavigationGotoMode__uType*)::uAllocClassType(sizeof(Property__Fuse_Navigation_NavigationGotoMode__uType), "Uno.UX.Property<Fuse.Navigation.NavigationGotoMode>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Navigation_NavigationGotoMode__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Navigation_NavigationGotoMode__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Navigation_NavigationGotoMode__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Navigation_NavigationGotoMode__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Navigation_NavigationGotoMode, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Navigation_NavigationGotoMode, _restState), ::app::Fuse::Navigation::NavigationGotoMode__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Navigation_NavigationGotoMode__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunction("Get", Property__Fuse_Navigation_NavigationGotoMode__Get, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Navigation_NavigationGotoMode__GetRestState, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Navigation_NavigationGotoMode__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Navigation_NavigationGotoMode__Set, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Navigation_NavigationGotoMode__SetRestState, 0, false, ::app::Fuse::Navigation::NavigationGotoMode__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Navigation_NavigationGotoMode___ObjInit(Property__Fuse_Navigation_NavigationGotoMode* __this)
{
}

void Property__Fuse_Navigation_NavigationGotoMode__add_ValueChanged(Property__Fuse_Navigation_NavigationGotoMode* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Navigation_NavigationGotoMode__Get(Property__Fuse_Navigation_NavigationGotoMode* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Navigation_NavigationGotoMode__GetRestState(Property__Fuse_Navigation_NavigationGotoMode* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Navigation_NavigationGotoMode__OnAddListener(Property__Fuse_Navigation_NavigationGotoMode* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Navigation_NavigationGotoMode__OnGet(Property__Fuse_Navigation_NavigationGotoMode* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_NavigationGotoMode__OnRemoveListener(Property__Fuse_Navigation_NavigationGotoMode* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Navigation_NavigationGotoMode__OnSet(Property__Fuse_Navigation_NavigationGotoMode* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_NavigationGotoMode__remove_ValueChanged(Property__Fuse_Navigation_NavigationGotoMode* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Navigation_NavigationGotoMode__RetainRestState(Property__Fuse_Navigation_NavigationGotoMode* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Navigation_NavigationGotoMode__Set(Property__Fuse_Navigation_NavigationGotoMode* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Navigation_NavigationGotoMode__SetRestState(Property__Fuse_Navigation_NavigationGotoMode* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Navigation_SnapTo__uType* Property__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong<Property__Fuse_Navigation_SnapTo__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Navigation_SnapTo__uType*)::uAllocClassType(sizeof(Property__Fuse_Navigation_SnapTo__uType), "Uno.UX.Property<Fuse.Navigation.SnapTo>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Navigation_SnapTo__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Navigation_SnapTo__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Navigation_SnapTo__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Navigation_SnapTo__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Navigation_SnapTo, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Navigation_SnapTo, _restState), ::app::Fuse::Navigation::SnapTo__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Navigation_SnapTo__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunction("Get", Property__Fuse_Navigation_SnapTo__Get, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Navigation_SnapTo__GetRestState, 0, false, ::app::Fuse::Navigation::SnapTo__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Navigation_SnapTo__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SnapTo__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Navigation_SnapTo__Set, 0, false, ::app::Fuse::Navigation::SnapTo__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Navigation_SnapTo__SetRestState, 0, false, ::app::Fuse::Navigation::SnapTo__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Navigation_SnapTo___ObjInit(Property__Fuse_Navigation_SnapTo* __this)
{
}

void Property__Fuse_Navigation_SnapTo__add_ValueChanged(Property__Fuse_Navigation_SnapTo* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Navigation_SnapTo__Get(Property__Fuse_Navigation_SnapTo* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Navigation_SnapTo__GetRestState(Property__Fuse_Navigation_SnapTo* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Navigation_SnapTo__OnAddListener(Property__Fuse_Navigation_SnapTo* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Navigation_SnapTo__OnGet(Property__Fuse_Navigation_SnapTo* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_SnapTo__OnRemoveListener(Property__Fuse_Navigation_SnapTo* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Navigation_SnapTo__OnSet(Property__Fuse_Navigation_SnapTo* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_SnapTo__remove_ValueChanged(Property__Fuse_Navigation_SnapTo* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Navigation_SnapTo__RetainRestState(Property__Fuse_Navigation_SnapTo* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Navigation_SnapTo__Set(Property__Fuse_Navigation_SnapTo* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Navigation_SnapTo__SetRestState(Property__Fuse_Navigation_SnapTo* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Navigation_SwipeDirection__uType* Property__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong<Property__Fuse_Navigation_SwipeDirection__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Navigation_SwipeDirection__uType*)::uAllocClassType(sizeof(Property__Fuse_Navigation_SwipeDirection__uType), "Uno.UX.Property<Fuse.Navigation.SwipeDirection>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Navigation_SwipeDirection__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Navigation_SwipeDirection__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Navigation_SwipeDirection__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Navigation_SwipeDirection__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Navigation_SwipeDirection, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Navigation_SwipeDirection, _restState), ::app::Fuse::Navigation::SwipeDirection__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Navigation_SwipeDirection__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunction("Get", Property__Fuse_Navigation_SwipeDirection__Get, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Navigation_SwipeDirection__GetRestState, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Navigation_SwipeDirection__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SwipeDirection__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Navigation_SwipeDirection__Set, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Navigation_SwipeDirection__SetRestState, 0, false, ::app::Fuse::Navigation::SwipeDirection__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Navigation_SwipeDirection___ObjInit(Property__Fuse_Navigation_SwipeDirection* __this)
{
}

void Property__Fuse_Navigation_SwipeDirection__add_ValueChanged(Property__Fuse_Navigation_SwipeDirection* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Navigation_SwipeDirection__Get(Property__Fuse_Navigation_SwipeDirection* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Navigation_SwipeDirection__GetRestState(Property__Fuse_Navigation_SwipeDirection* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Navigation_SwipeDirection__OnAddListener(Property__Fuse_Navigation_SwipeDirection* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Navigation_SwipeDirection__OnGet(Property__Fuse_Navigation_SwipeDirection* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_SwipeDirection__OnRemoveListener(Property__Fuse_Navigation_SwipeDirection* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Navigation_SwipeDirection__OnSet(Property__Fuse_Navigation_SwipeDirection* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_SwipeDirection__remove_ValueChanged(Property__Fuse_Navigation_SwipeDirection* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Navigation_SwipeDirection__RetainRestState(Property__Fuse_Navigation_SwipeDirection* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Navigation_SwipeDirection__Set(Property__Fuse_Navigation_SwipeDirection* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Navigation_SwipeDirection__SetRestState(Property__Fuse_Navigation_SwipeDirection* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Navigation_SwipeEnds__uType* Property__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong<Property__Fuse_Navigation_SwipeEnds__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Navigation_SwipeEnds__uType*)::uAllocClassType(sizeof(Property__Fuse_Navigation_SwipeEnds__uType), "Uno.UX.Property<Fuse.Navigation.SwipeEnds>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Navigation_SwipeEnds__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Navigation_SwipeEnds__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Navigation_SwipeEnds__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Navigation_SwipeEnds__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Navigation_SwipeEnds, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Navigation_SwipeEnds, _restState), ::app::Fuse::Navigation::SwipeEnds__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Navigation_SwipeEnds__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunction("Get", Property__Fuse_Navigation_SwipeEnds__Get, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Navigation_SwipeEnds__GetRestState, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Navigation_SwipeEnds__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Navigation_SwipeEnds__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Navigation_SwipeEnds__Set, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Navigation_SwipeEnds__SetRestState, 0, false, ::app::Fuse::Navigation::SwipeEnds__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Navigation_SwipeEnds___ObjInit(Property__Fuse_Navigation_SwipeEnds* __this)
{
}

void Property__Fuse_Navigation_SwipeEnds__add_ValueChanged(Property__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Navigation_SwipeEnds__Get(Property__Fuse_Navigation_SwipeEnds* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Navigation_SwipeEnds__GetRestState(Property__Fuse_Navigation_SwipeEnds* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Navigation_SwipeEnds__OnAddListener(Property__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Navigation_SwipeEnds__OnGet(Property__Fuse_Navigation_SwipeEnds* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_SwipeEnds__OnRemoveListener(Property__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Navigation_SwipeEnds__OnSet(Property__Fuse_Navigation_SwipeEnds* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Navigation_SwipeEnds__remove_ValueChanged(Property__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Navigation_SwipeEnds__RetainRestState(Property__Fuse_Navigation_SwipeEnds* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Navigation_SwipeEnds__Set(Property__Fuse_Navigation_SwipeEnds* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Navigation_SwipeEnds__SetRestState(Property__Fuse_Navigation_SwipeEnds* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Node__uType* Property__Fuse_Node__typeof()
{
    static ::uStaticStrong<Property__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Node__uType*)::uAllocClassType(sizeof(Property__Fuse_Node__uType), "Uno.UX.Property<Fuse.Node>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Node__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Node__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Node__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Node__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Node, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Node, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Node, _restState), ::app::Fuse::Node__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Node__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Node__typeof()),
        ::uNewFunction("Get", Property__Fuse_Node__Get, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Node__GetRestState, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Node__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Node__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Node__Set, 0, false, ::app::Fuse::Node__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Node__SetRestState, 0, false, ::app::Fuse::Node__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Node___ObjInit(Property__Fuse_Node* __this)
{
}

void Property__Fuse_Node__add_ValueChanged(Property__Fuse_Node* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Node* Property__Fuse_Node__Get(Property__Fuse_Node* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Node* Property__Fuse_Node__GetRestState(Property__Fuse_Node* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Node__OnAddListener(Property__Fuse_Node* __this, ::uDelegate* listener)
{
}

::app::Fuse::Node* Property__Fuse_Node__OnGet(Property__Fuse_Node* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Node__OnRemoveListener(Property__Fuse_Node* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Node__OnSet(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Node__remove_ValueChanged(Property__Fuse_Node* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Node__RetainRestState(Property__Fuse_Node* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Node* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Node__Set(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Node__SetRestState(Property__Fuse_Node* __this, ::app::Fuse::Node* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Resources_ImageSource__uType* Property__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<Property__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(Property__Fuse_Resources_ImageSource__uType), "Uno.UX.Property<Fuse.Resources.ImageSource>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Resources_ImageSource__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Resources_ImageSource__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Resources_ImageSource__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Resources_ImageSource__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Resources_ImageSource, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Resources_ImageSource, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Resources_ImageSource, _restState), ::app::Fuse::Resources::ImageSource__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Resources_ImageSource__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunction("Get", Property__Fuse_Resources_ImageSource__Get, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Resources_ImageSource__GetRestState, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Resources_ImageSource__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Resources_ImageSource__Set, 0, false, ::app::Fuse::Resources::ImageSource__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Resources_ImageSource__SetRestState, 0, false, ::app::Fuse::Resources::ImageSource__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Resources_ImageSource___ObjInit(Property__Fuse_Resources_ImageSource* __this)
{
}

void Property__Fuse_Resources_ImageSource__add_ValueChanged(Property__Fuse_Resources_ImageSource* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Resources::ImageSource* Property__Fuse_Resources_ImageSource__Get(Property__Fuse_Resources_ImageSource* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Resources::ImageSource* Property__Fuse_Resources_ImageSource__GetRestState(Property__Fuse_Resources_ImageSource* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Resources_ImageSource__OnAddListener(Property__Fuse_Resources_ImageSource* __this, ::uDelegate* listener)
{
}

::app::Fuse::Resources::ImageSource* Property__Fuse_Resources_ImageSource__OnGet(Property__Fuse_Resources_ImageSource* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Resources_ImageSource__OnRemoveListener(Property__Fuse_Resources_ImageSource* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Resources_ImageSource__OnSet(Property__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Resources_ImageSource__remove_ValueChanged(Property__Fuse_Resources_ImageSource* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Resources_ImageSource__RetainRestState(Property__Fuse_Resources_ImageSource* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Resources::ImageSource* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Resources_ImageSource__Set(Property__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Resources_ImageSource__SetRestState(Property__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Triggers_Actions_TriggerDirection__uType* Property__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong<Property__Fuse_Triggers_Actions_TriggerDirection__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Triggers_Actions_TriggerDirection__uType*)::uAllocClassType(sizeof(Property__Fuse_Triggers_Actions_TriggerDirection__uType), "Uno.UX.Property<Fuse.Triggers.Actions.TriggerDirection>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Triggers_Actions_TriggerDirection__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Triggers_Actions_TriggerDirection__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Triggers_Actions_TriggerDirection__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Triggers_Actions_TriggerDirection__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Triggers_Actions_TriggerDirection, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Triggers_Actions_TriggerDirection, _restState), ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Triggers_Actions_TriggerDirection__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunction("Get", Property__Fuse_Triggers_Actions_TriggerDirection__Get, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Triggers_Actions_TriggerDirection__GetRestState, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Triggers_Actions_TriggerDirection__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_Actions_TriggerDirection__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Triggers_Actions_TriggerDirection__Set, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Triggers_Actions_TriggerDirection__SetRestState, 0, false, ::app::Fuse::Triggers::Actions::TriggerDirection__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Triggers_Actions_TriggerDirection___ObjInit(Property__Fuse_Triggers_Actions_TriggerDirection* __this)
{
}

void Property__Fuse_Triggers_Actions_TriggerDirection__add_ValueChanged(Property__Fuse_Triggers_Actions_TriggerDirection* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Triggers_Actions_TriggerDirection__Get(Property__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Triggers_Actions_TriggerDirection__GetRestState(Property__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Triggers_Actions_TriggerDirection__OnAddListener(Property__Fuse_Triggers_Actions_TriggerDirection* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Triggers_Actions_TriggerDirection__OnGet(Property__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Triggers_Actions_TriggerDirection__OnRemoveListener(Property__Fuse_Triggers_Actions_TriggerDirection* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Triggers_Actions_TriggerDirection__OnSet(Property__Fuse_Triggers_Actions_TriggerDirection* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Triggers_Actions_TriggerDirection__remove_ValueChanged(Property__Fuse_Triggers_Actions_TriggerDirection* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Triggers_Actions_TriggerDirection__RetainRestState(Property__Fuse_Triggers_Actions_TriggerDirection* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Triggers_Actions_TriggerDirection__Set(Property__Fuse_Triggers_Actions_TriggerDirection* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Triggers_Actions_TriggerDirection__SetRestState(Property__Fuse_Triggers_Actions_TriggerDirection* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Triggers_State__uType* Property__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong<Property__Fuse_Triggers_State__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Triggers_State__uType*)::uAllocClassType(sizeof(Property__Fuse_Triggers_State__uType), "Uno.UX.Property<Fuse.Triggers.State>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Fuse_Triggers_State__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Triggers_State__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Triggers_State__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Triggers_State__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Fuse_Triggers_State, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Triggers_State, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Triggers_State, _restState), ::app::Fuse::Triggers::State__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Triggers_State__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_State__typeof()),
        ::uNewFunction("Get", Property__Fuse_Triggers_State__Get, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Triggers_State__GetRestState, 0, false, ::app::Fuse::Triggers::State__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Triggers_State__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_State__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Triggers_State__Set, 0, false, ::app::Fuse::Triggers::State__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Triggers_State__SetRestState, 0, false, ::app::Fuse::Triggers::State__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Triggers_State___ObjInit(Property__Fuse_Triggers_State* __this)
{
}

void Property__Fuse_Triggers_State__add_ValueChanged(Property__Fuse_Triggers_State* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Fuse::Triggers::State* Property__Fuse_Triggers_State__Get(Property__Fuse_Triggers_State* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Fuse::Triggers::State* Property__Fuse_Triggers_State__GetRestState(Property__Fuse_Triggers_State* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Triggers_State__OnAddListener(Property__Fuse_Triggers_State* __this, ::uDelegate* listener)
{
}

::app::Fuse::Triggers::State* Property__Fuse_Triggers_State__OnGet(Property__Fuse_Triggers_State* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Triggers_State__OnRemoveListener(Property__Fuse_Triggers_State* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Triggers_State__OnSet(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Triggers_State__remove_ValueChanged(Property__Fuse_Triggers_State* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Triggers_State__RetainRestState(Property__Fuse_Triggers_State* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Triggers::State* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Triggers_State__Set(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Triggers_State__SetRestState(Property__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Triggers_StateTransition__uType* Property__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong<Property__Fuse_Triggers_StateTransition__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Triggers_StateTransition__uType*)::uAllocClassType(sizeof(Property__Fuse_Triggers_StateTransition__uType), "Uno.UX.Property<Fuse.Triggers.StateTransition>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Triggers_StateTransition__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Triggers_StateTransition__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Triggers_StateTransition__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Triggers_StateTransition__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Triggers_StateTransition, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Triggers_StateTransition, _restState), ::app::Fuse::Triggers::StateTransition__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Triggers_StateTransition__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunction("Get", Property__Fuse_Triggers_StateTransition__Get, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Triggers_StateTransition__GetRestState, 0, false, ::app::Fuse::Triggers::StateTransition__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Triggers_StateTransition__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_StateTransition__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Triggers_StateTransition__Set, 0, false, ::app::Fuse::Triggers::StateTransition__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Triggers_StateTransition__SetRestState, 0, false, ::app::Fuse::Triggers::StateTransition__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Triggers_StateTransition___ObjInit(Property__Fuse_Triggers_StateTransition* __this)
{
}

void Property__Fuse_Triggers_StateTransition__add_ValueChanged(Property__Fuse_Triggers_StateTransition* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Triggers_StateTransition__Get(Property__Fuse_Triggers_StateTransition* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Triggers_StateTransition__GetRestState(Property__Fuse_Triggers_StateTransition* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Triggers_StateTransition__OnAddListener(Property__Fuse_Triggers_StateTransition* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Triggers_StateTransition__OnGet(Property__Fuse_Triggers_StateTransition* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Triggers_StateTransition__OnRemoveListener(Property__Fuse_Triggers_StateTransition* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Triggers_StateTransition__OnSet(Property__Fuse_Triggers_StateTransition* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Triggers_StateTransition__remove_ValueChanged(Property__Fuse_Triggers_StateTransition* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Triggers_StateTransition__RetainRestState(Property__Fuse_Triggers_StateTransition* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Triggers_StateTransition__Set(Property__Fuse_Triggers_StateTransition* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Triggers_StateTransition__SetRestState(Property__Fuse_Triggers_StateTransition* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Fuse_Triggers_TriggerBypassMode__uType* Property__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong<Property__Fuse_Triggers_TriggerBypassMode__uType*> type;
    if (type != NULL) return type;

    type = (Property__Fuse_Triggers_TriggerBypassMode__uType*)::uAllocClassType(sizeof(Property__Fuse_Triggers_TriggerBypassMode__uType), "Uno.UX.Property<Fuse.Triggers.TriggerBypassMode>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Fuse_Triggers_TriggerBypassMode__OnAddListener;
    type->__fp_OnGet = Property__Fuse_Triggers_TriggerBypassMode__OnGet;
    type->__fp_OnRemoveListener = Property__Fuse_Triggers_TriggerBypassMode__OnRemoveListener;
    type->__fp_OnSet = Property__Fuse_Triggers_TriggerBypassMode__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Fuse_Triggers_TriggerBypassMode, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Fuse_Triggers_TriggerBypassMode, _restState), ::app::Fuse::Triggers::TriggerBypassMode__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Fuse_Triggers_TriggerBypassMode__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunction("Get", Property__Fuse_Triggers_TriggerBypassMode__Get, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunction("GetRestState", Property__Fuse_Triggers_TriggerBypassMode__GetRestState, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Fuse_Triggers_TriggerBypassMode__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Fuse_Triggers_TriggerBypassMode__typeof()),
        ::uNewFunctionVoid("Set", Property__Fuse_Triggers_TriggerBypassMode__Set, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Fuse_Triggers_TriggerBypassMode__SetRestState, 0, false, ::app::Fuse::Triggers::TriggerBypassMode__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Fuse_Triggers_TriggerBypassMode___ObjInit(Property__Fuse_Triggers_TriggerBypassMode* __this)
{
}

void Property__Fuse_Triggers_TriggerBypassMode__add_ValueChanged(Property__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Fuse_Triggers_TriggerBypassMode__Get(Property__Fuse_Triggers_TriggerBypassMode* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Fuse_Triggers_TriggerBypassMode__GetRestState(Property__Fuse_Triggers_TriggerBypassMode* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Fuse_Triggers_TriggerBypassMode__OnAddListener(Property__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* listener)
{
}

int Property__Fuse_Triggers_TriggerBypassMode__OnGet(Property__Fuse_Triggers_TriggerBypassMode* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Triggers_TriggerBypassMode__OnRemoveListener(Property__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* listener)
{
}

void Property__Fuse_Triggers_TriggerBypassMode__OnSet(Property__Fuse_Triggers_TriggerBypassMode* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Fuse_Triggers_TriggerBypassMode__remove_ValueChanged(Property__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Fuse_Triggers_TriggerBypassMode__RetainRestState(Property__Fuse_Triggers_TriggerBypassMode* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Triggers_TriggerBypassMode__Set(Property__Fuse_Triggers_TriggerBypassMode* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Fuse_Triggers_TriggerBypassMode__SetRestState(Property__Fuse_Triggers_TriggerBypassMode* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__int__uType* Property__int__typeof()
{
    static ::uStaticStrong<Property__int__uType*> type;
    if (type != NULL) return type;

    type = (Property__int__uType*)::uAllocClassType(sizeof(Property__int__uType), "Uno.UX.Property<int>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__int__OnAddListener;
    type->__fp_OnGet = Property__int__OnGet;
    type->__fp_OnRemoveListener = Property__int__OnRemoveListener;
    type->__fp_OnSet = Property__int__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__int, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__int, _restState), ::app::Uno::Int__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__int__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__int__typeof()),
        ::uNewFunction("Get", Property__int__Get, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetRestState", Property__int__GetRestState, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__int__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__int__typeof()),
        ::uNewFunctionVoid("Set", Property__int__Set, 0, false, ::app::Uno::Int__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__int__SetRestState, 0, false, ::app::Uno::Int__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__int___ObjInit(Property__int* __this)
{
}

void Property__int__add_ValueChanged(Property__int* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__int__Get(Property__int* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__int__GetRestState(Property__int* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__int__OnAddListener(Property__int* __this, ::uDelegate* listener)
{
}

int Property__int__OnGet(Property__int* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__int__OnRemoveListener(Property__int* __this, ::uDelegate* listener)
{
}

void Property__int__OnSet(Property__int* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__int__remove_ValueChanged(Property__int* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__int__RetainRestState(Property__int* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__int__Set(Property__int* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__int__SetRestState(Property__int* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__int2__uType* Property__int2__typeof()
{
    static ::uStaticStrong<Property__int2__uType*> type;
    if (type != NULL) return type;

    type = (Property__int2__uType*)::uAllocClassType(sizeof(Property__int2__uType), "Uno.UX.Property<int2>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__int2__OnAddListener;
    type->__fp_OnGet = Property__int2__OnGet;
    type->__fp_OnRemoveListener = Property__int2__OnRemoveListener;
    type->__fp_OnSet = Property__int2__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__int2, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__int2, _restState), ::app::Uno::Int2__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__int2__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__int2__typeof()),
        ::uNewFunction("Get", Property__int2__Get, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("GetRestState", Property__int2__GetRestState, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__int2__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__int2__typeof()),
        ::uNewFunctionVoid("Set", Property__int2__Set, 0, false, ::app::Uno::Int2__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__int2__SetRestState, 0, false, ::app::Uno::Int2__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__int2___ObjInit(Property__int2* __this)
{
}

void Property__int2__add_ValueChanged(Property__int2* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Uno::Int2 Property__int2__Get(Property__int2* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Uno::Int2 Property__int2__GetRestState(Property__int2* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__int2__OnAddListener(Property__int2* __this, ::uDelegate* listener)
{
}

::app::Uno::Int2 Property__int2__OnGet(Property__int2* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__int2__OnRemoveListener(Property__int2* __this, ::uDelegate* listener)
{
}

void Property__int2__OnSet(Property__int2* __this, ::app::Uno::Int2 value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__int2__remove_ValueChanged(Property__int2* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__int2__RetainRestState(Property__int2* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::Int2 v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__int2__Set(Property__int2* __this, ::app::Uno::Int2 value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__int2__SetRestState(Property__int2* __this, ::app::Uno::Int2 value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__int3__uType* Property__int3__typeof()
{
    static ::uStaticStrong<Property__int3__uType*> type;
    if (type != NULL) return type;

    type = (Property__int3__uType*)::uAllocClassType(sizeof(Property__int3__uType), "Uno.UX.Property<int3>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__int3__OnAddListener;
    type->__fp_OnGet = Property__int3__OnGet;
    type->__fp_OnRemoveListener = Property__int3__OnRemoveListener;
    type->__fp_OnSet = Property__int3__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__int3, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__int3, _restState), ::app::Uno::Int3__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__int3__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__int3__typeof()),
        ::uNewFunction("Get", Property__int3__Get, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunction("GetRestState", Property__int3__GetRestState, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__int3__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__int3__typeof()),
        ::uNewFunctionVoid("Set", Property__int3__Set, 0, false, ::app::Uno::Int3__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__int3__SetRestState, 0, false, ::app::Uno::Int3__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__int3___ObjInit(Property__int3* __this)
{
}

void Property__int3__add_ValueChanged(Property__int3* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Uno::Int3 Property__int3__Get(Property__int3* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Uno::Int3 Property__int3__GetRestState(Property__int3* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__int3__OnAddListener(Property__int3* __this, ::uDelegate* listener)
{
}

::app::Uno::Int3 Property__int3__OnGet(Property__int3* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__int3__OnRemoveListener(Property__int3* __this, ::uDelegate* listener)
{
}

void Property__int3__OnSet(Property__int3* __this, ::app::Uno::Int3 value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__int3__remove_ValueChanged(Property__int3* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__int3__RetainRestState(Property__int3* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::Int3 v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__int3__Set(Property__int3* __this, ::app::Uno::Int3 value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__int3__SetRestState(Property__int3* __this, ::app::Uno::Int3 value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__int4__uType* Property__int4__typeof()
{
    static ::uStaticStrong<Property__int4__uType*> type;
    if (type != NULL) return type;

    type = (Property__int4__uType*)::uAllocClassType(sizeof(Property__int4__uType), "Uno.UX.Property<int4>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__int4__OnAddListener;
    type->__fp_OnGet = Property__int4__OnGet;
    type->__fp_OnRemoveListener = Property__int4__OnRemoveListener;
    type->__fp_OnSet = Property__int4__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__int4, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__int4, _restState), ::app::Uno::Int4__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__int4__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__int4__typeof()),
        ::uNewFunction("Get", Property__int4__Get, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunction("GetRestState", Property__int4__GetRestState, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__int4__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__int4__typeof()),
        ::uNewFunctionVoid("Set", Property__int4__Set, 0, false, ::app::Uno::Int4__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__int4__SetRestState, 0, false, ::app::Uno::Int4__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__int4___ObjInit(Property__int4* __this)
{
}

void Property__int4__add_ValueChanged(Property__int4* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Uno::Int4 Property__int4__Get(Property__int4* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Uno::Int4 Property__int4__GetRestState(Property__int4* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__int4__OnAddListener(Property__int4* __this, ::uDelegate* listener)
{
}

::app::Uno::Int4 Property__int4__OnGet(Property__int4* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__int4__OnRemoveListener(Property__int4* __this, ::uDelegate* listener)
{
}

void Property__int4__OnSet(Property__int4* __this, ::app::Uno::Int4 value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__int4__remove_ValueChanged(Property__int4* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__int4__RetainRestState(Property__int4* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::Int4 v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__int4__Set(Property__int4* __this, ::app::Uno::Int4 value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__int4__SetRestState(Property__int4* __this, ::app::Uno::Int4 value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__long__uType* Property__long__typeof()
{
    static ::uStaticStrong<Property__long__uType*> type;
    if (type != NULL) return type;

    type = (Property__long__uType*)::uAllocClassType(sizeof(Property__long__uType), "Uno.UX.Property<long>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__long__OnAddListener;
    type->__fp_OnGet = Property__long__OnGet;
    type->__fp_OnRemoveListener = Property__long__OnRemoveListener;
    type->__fp_OnSet = Property__long__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__long, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__long, _restState), ::app::Uno::Long__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__long__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__long__typeof()),
        ::uNewFunction("Get", Property__long__Get, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("GetRestState", Property__long__GetRestState, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__long__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__long__typeof()),
        ::uNewFunctionVoid("Set", Property__long__Set, 0, false, ::app::Uno::Long__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__long__SetRestState, 0, false, ::app::Uno::Long__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__long___ObjInit(Property__long* __this)
{
}

void Property__long__add_ValueChanged(Property__long* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::uLong Property__long__Get(Property__long* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::uLong Property__long__GetRestState(Property__long* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__long__OnAddListener(Property__long* __this, ::uDelegate* listener)
{
}

::uLong Property__long__OnGet(Property__long* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__long__OnRemoveListener(Property__long* __this, ::uDelegate* listener)
{
}

void Property__long__OnSet(Property__long* __this, ::uLong value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__long__remove_ValueChanged(Property__long* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__long__RetainRestState(Property__long* __this)
{
    if (!__this->_hasRestState)
    {
        ::uLong v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__long__Set(Property__long* __this, ::uLong value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__long__SetRestState(Property__long* __this, ::uLong value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__object__uType* Property__object__typeof()
{
    static ::uStaticStrong<Property__object__uType*> type;
    if (type != NULL) return type;

    type = (Property__object__uType*)::uAllocClassType(sizeof(Property__object__uType), "Uno.UX.Property<object>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__object__OnAddListener;
    type->__fp_OnGet = Property__object__OnGet;
    type->__fp_OnRemoveListener = Property__object__OnRemoveListener;
    type->__fp_OnSet = Property__object__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__object, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__object, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__object, _restState), ::uObject__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__object__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__object__typeof()),
        ::uNewFunction("Get", Property__object__Get, 0, false, ::uObject__typeof()),
        ::uNewFunction("GetRestState", Property__object__GetRestState, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__object__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__object__typeof()),
        ::uNewFunctionVoid("Set", Property__object__Set, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__object__SetRestState, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__object___ObjInit(Property__object* __this)
{
}

void Property__object__add_ValueChanged(Property__object* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::uObject* Property__object__Get(Property__object* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::uObject* Property__object__GetRestState(Property__object* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__object__OnAddListener(Property__object* __this, ::uDelegate* listener)
{
}

::uObject* Property__object__OnGet(Property__object* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__object__OnRemoveListener(Property__object* __this, ::uDelegate* listener)
{
}

void Property__object__OnSet(Property__object* __this, ::uObject* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__object__remove_ValueChanged(Property__object* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__object__RetainRestState(Property__object* __this)
{
    if (!__this->_hasRestState)
    {
        ::uObject* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__object__Set(Property__object* __this, ::uObject* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__object__SetRestState(Property__object* __this, ::uObject* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__short__uType* Property__short__typeof()
{
    static ::uStaticStrong<Property__short__uType*> type;
    if (type != NULL) return type;

    type = (Property__short__uType*)::uAllocClassType(sizeof(Property__short__uType), "Uno.UX.Property<short>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__short__OnAddListener;
    type->__fp_OnGet = Property__short__OnGet;
    type->__fp_OnRemoveListener = Property__short__OnRemoveListener;
    type->__fp_OnSet = Property__short__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__short, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__short, _restState), ::app::Uno::Short__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__short__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__short__typeof()),
        ::uNewFunction("Get", Property__short__Get, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunction("GetRestState", Property__short__GetRestState, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__short__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__short__typeof()),
        ::uNewFunctionVoid("Set", Property__short__Set, 0, false, ::app::Uno::Short__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__short__SetRestState, 0, false, ::app::Uno::Short__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__short___ObjInit(Property__short* __this)
{
}

void Property__short__add_ValueChanged(Property__short* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::uShort Property__short__Get(Property__short* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::uShort Property__short__GetRestState(Property__short* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__short__OnAddListener(Property__short* __this, ::uDelegate* listener)
{
}

::uShort Property__short__OnGet(Property__short* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__short__OnRemoveListener(Property__short* __this, ::uDelegate* listener)
{
}

void Property__short__OnSet(Property__short* __this, ::uShort value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__short__remove_ValueChanged(Property__short* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__short__RetainRestState(Property__short* __this)
{
    if (!__this->_hasRestState)
    {
        ::uShort v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__short__Set(Property__short* __this, ::uShort value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__short__SetRestState(Property__short* __this, ::uShort value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__string__uType* Property__string__typeof()
{
    static ::uStaticStrong<Property__string__uType*> type;
    if (type != NULL) return type;

    type = (Property__string__uType*)::uAllocClassType(sizeof(Property__string__uType), "Uno.UX.Property<string>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__string__OnAddListener;
    type->__fp_OnGet = Property__string__OnGet;
    type->__fp_OnRemoveListener = Property__string__OnRemoveListener;
    type->__fp_OnSet = Property__string__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__string, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__string, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__string, _restState), ::app::Uno::String__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__string__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__string__typeof()),
        ::uNewFunction("Get", Property__string__Get, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetRestState", Property__string__GetRestState, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__string__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__string__typeof()),
        ::uNewFunctionVoid("Set", Property__string__Set, 0, false, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__string__SetRestState, 0, false, ::app::Uno::String__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__string___ObjInit(Property__string* __this)
{
}

void Property__string__add_ValueChanged(Property__string* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::uString* Property__string__Get(Property__string* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::uString* Property__string__GetRestState(Property__string* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__string__OnAddListener(Property__string* __this, ::uDelegate* listener)
{
}

::uString* Property__string__OnGet(Property__string* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__string__OnRemoveListener(Property__string* __this, ::uDelegate* listener)
{
}

void Property__string__OnSet(Property__string* __this, ::uString* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__string__remove_ValueChanged(Property__string* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__string__RetainRestState(Property__string* __this)
{
    if (!__this->_hasRestState)
    {
        ::uString* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__string__Set(Property__string* __this, ::uString* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__string__SetRestState(Property__string* __this, ::uString* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Uno_EventArgs__uType* Property__Uno_EventArgs__typeof()
{
    static ::uStaticStrong<Property__Uno_EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (Property__Uno_EventArgs__uType*)::uAllocClassType(sizeof(Property__Uno_EventArgs__uType), "Uno.UX.Property<Uno.EventArgs>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Uno_EventArgs__OnAddListener;
    type->__fp_OnGet = Property__Uno_EventArgs__OnGet;
    type->__fp_OnRemoveListener = Property__Uno_EventArgs__OnRemoveListener;
    type->__fp_OnSet = Property__Uno_EventArgs__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Uno_EventArgs, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Uno_EventArgs, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Uno_EventArgs, _restState), ::app::Uno::EventArgs__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Uno_EventArgs__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Uno_EventArgs__typeof()),
        ::uNewFunction("Get", Property__Uno_EventArgs__Get, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunction("GetRestState", Property__Uno_EventArgs__GetRestState, 0, false, ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Uno_EventArgs__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Uno_EventArgs__typeof()),
        ::uNewFunctionVoid("Set", Property__Uno_EventArgs__Set, 0, false, ::app::Uno::EventArgs__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Uno_EventArgs__SetRestState, 0, false, ::app::Uno::EventArgs__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Uno_EventArgs___ObjInit(Property__Uno_EventArgs* __this)
{
}

void Property__Uno_EventArgs__add_ValueChanged(Property__Uno_EventArgs* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Uno::EventArgs* Property__Uno_EventArgs__Get(Property__Uno_EventArgs* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Uno::EventArgs* Property__Uno_EventArgs__GetRestState(Property__Uno_EventArgs* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Uno_EventArgs__OnAddListener(Property__Uno_EventArgs* __this, ::uDelegate* listener)
{
}

::app::Uno::EventArgs* Property__Uno_EventArgs__OnGet(Property__Uno_EventArgs* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Uno_EventArgs__OnRemoveListener(Property__Uno_EventArgs* __this, ::uDelegate* listener)
{
}

void Property__Uno_EventArgs__OnSet(Property__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Uno_EventArgs__remove_ValueChanged(Property__Uno_EventArgs* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Uno_EventArgs__RetainRestState(Property__Uno_EventArgs* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::EventArgs* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Uno_EventArgs__Set(Property__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Uno_EventArgs__SetRestState(Property__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Uno_Platform_iOS_StatusBarStyle__uType* Property__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong<Property__Uno_Platform_iOS_StatusBarStyle__uType*> type;
    if (type != NULL) return type;

    type = (Property__Uno_Platform_iOS_StatusBarStyle__uType*)::uAllocClassType(sizeof(Property__Uno_Platform_iOS_StatusBarStyle__uType), "Uno.UX.Property<Uno.Platform.iOS.StatusBarStyle>", false, 0, 0, 0);

    type->__fp_OnAddListener = Property__Uno_Platform_iOS_StatusBarStyle__OnAddListener;
    type->__fp_OnGet = Property__Uno_Platform_iOS_StatusBarStyle__OnGet;
    type->__fp_OnRemoveListener = Property__Uno_Platform_iOS_StatusBarStyle__OnRemoveListener;
    type->__fp_OnSet = Property__Uno_Platform_iOS_StatusBarStyle__OnSet;

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Uno_Platform_iOS_StatusBarStyle, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Uno_Platform_iOS_StatusBarStyle, _restState), ::app::Uno::Platform::iOS::StatusBarStyle__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Uno_Platform_iOS_StatusBarStyle__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunction("Get", Property__Uno_Platform_iOS_StatusBarStyle__Get, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunction("GetRestState", Property__Uno_Platform_iOS_StatusBarStyle__GetRestState, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Uno_Platform_iOS_StatusBarStyle__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Uno_Platform_iOS_StatusBarStyle__typeof()),
        ::uNewFunctionVoid("Set", Property__Uno_Platform_iOS_StatusBarStyle__Set, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Uno_Platform_iOS_StatusBarStyle__SetRestState, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Uno_Platform_iOS_StatusBarStyle___ObjInit(Property__Uno_Platform_iOS_StatusBarStyle* __this)
{
}

void Property__Uno_Platform_iOS_StatusBarStyle__add_ValueChanged(Property__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

int Property__Uno_Platform_iOS_StatusBarStyle__Get(Property__Uno_Platform_iOS_StatusBarStyle* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

int Property__Uno_Platform_iOS_StatusBarStyle__GetRestState(Property__Uno_Platform_iOS_StatusBarStyle* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Uno_Platform_iOS_StatusBarStyle__OnAddListener(Property__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* listener)
{
}

int Property__Uno_Platform_iOS_StatusBarStyle__OnGet(Property__Uno_Platform_iOS_StatusBarStyle* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Uno_Platform_iOS_StatusBarStyle__OnRemoveListener(Property__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* listener)
{
}

void Property__Uno_Platform_iOS_StatusBarStyle__OnSet(Property__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Uno_Platform_iOS_StatusBarStyle__remove_ValueChanged(Property__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Uno_Platform_iOS_StatusBarStyle__RetainRestState(Property__Uno_Platform_iOS_StatusBarStyle* __this)
{
    if (!__this->_hasRestState)
    {
        int v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Uno_Platform_iOS_StatusBarStyle__Set(Property__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Uno_Platform_iOS_StatusBarStyle__SetRestState(Property__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Property__Uno_UX_FileSource__uType* Property__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<Property__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (Property__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(Property__Uno_UX_FileSource__uType), "Uno.UX.Property<Uno.UX.FileSource>", false, 0, 1, 0);

    type->__fp_OnAddListener = Property__Uno_UX_FileSource__OnAddListener;
    type->__fp_OnGet = Property__Uno_UX_FileSource__OnGet;
    type->__fp_OnRemoveListener = Property__Uno_UX_FileSource__OnRemoveListener;
    type->__fp_OnSet = Property__Uno_UX_FileSource__OnSet;

    type->SetStrongRefs(
        "_restState", offsetof(Property__Uno_UX_FileSource, _restState));

    type->SetFields(2,
        ::uNewField("_hasRestState", NULL, offsetof(Property__Uno_UX_FileSource, _hasRestState), ::app::Uno::Bool__typeof()),
        ::uNewField("_restState", NULL, offsetof(Property__Uno_UX_FileSource, _restState), ::app::Uno::UX::FileSource__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_ValueChanged", Property__Uno_UX_FileSource__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Uno_UX_FileSource__typeof()),
        ::uNewFunction("Get", Property__Uno_UX_FileSource__Get, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("GetRestState", Property__Uno_UX_FileSource__GetRestState, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Property__Uno_UX_FileSource__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__Uno_UX_FileSource__typeof()),
        ::uNewFunctionVoid("Set", Property__Uno_UX_FileSource__Set, 0, false, ::app::Uno::UX::FileSource__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetRestState", Property__Uno_UX_FileSource__SetRestState, 0, false, ::app::Uno::UX::FileSource__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Property__Uno_UX_FileSource___ObjInit(Property__Uno_UX_FileSource* __this)
{
}

void Property__Uno_UX_FileSource__add_ValueChanged(Property__Uno_UX_FileSource* __this, ::uDelegate* value)
{
    __this->OnAddListener(value);
}

::app::Uno::UX::FileSource* Property__Uno_UX_FileSource__Get(Property__Uno_UX_FileSource* __this)
{
    __this->RetainRestState();
    return __this->OnGet();
}

::app::Uno::UX::FileSource* Property__Uno_UX_FileSource__GetRestState(Property__Uno_UX_FileSource* __this)
{
    __this->RetainRestState();
    return __this->_restState;
}

void Property__Uno_UX_FileSource__OnAddListener(Property__Uno_UX_FileSource* __this, ::uDelegate* listener)
{
}

::app::Uno::UX::FileSource* Property__Uno_UX_FileSource__OnGet(Property__Uno_UX_FileSource* __this)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Uno_UX_FileSource__OnRemoveListener(Property__Uno_UX_FileSource* __this, ::uDelegate* listener)
{
}

void Property__Uno_UX_FileSource__OnSet(Property__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

void Property__Uno_UX_FileSource__remove_ValueChanged(Property__Uno_UX_FileSource* __this, ::uDelegate* value)
{
    __this->OnRemoveListener(value);
}

void Property__Uno_UX_FileSource__RetainRestState(Property__Uno_UX_FileSource* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Uno::UX::FileSource* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Uno_UX_FileSource__Set(Property__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin)
{
    __this->RetainRestState();
    __this->OnSet(value, origin);
}

void Property__Uno_UX_FileSource__SetRestState(Property__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin)
{
    __this->OnSet(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

}}}
