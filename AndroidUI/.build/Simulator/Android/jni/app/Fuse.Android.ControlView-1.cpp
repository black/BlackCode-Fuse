#include <app/Android.android.content.Context.h>
#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.view.inputmethod.InputMethodManager.h>
#include <app/Android.android.view.View.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_Button.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_Circle.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_Image.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_MapView.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_Slider.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_TextControl.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_TextInput.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_ToggleControl.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_WebView.h>
#include <app/Fuse.Android.FocusChangedHandler.h>
#include <app/Fuse.Android.FocusChangedListener.h>
#include <app/Fuse.Android.FocusManager.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.MapView.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.Controls.WebView.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-e88b1a1.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Fuse {
namespace Android {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_Button__uType* ControlView__Fuse_Controls_Button__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_Button__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_Button__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_Button__uType), "Fuse.Android.ControlView<Fuse.Controls.Button>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_Button__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Button__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Button__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_Button__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_Button, _control),
        "_view", offsetof(ControlView__Fuse_Controls_Button, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_Button, _control), ::app::Fuse::Controls::Button__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_Button, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_Button__get_Control, 0, false, ::app::Fuse::Controls::Button__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_Button__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_Button___ObjInit_2(ControlView__Fuse_Controls_Button* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_Button__Create(ControlView__Fuse_Controls_Button* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Button__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::Button* ControlView__Fuse_Controls_Button__FindControl(ControlView__Fuse_Controls_Button* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Button__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Button*>(p, ::app::Fuse::Controls::Button__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Button* ControlView__Fuse_Controls_Button__get_Control(ControlView__Fuse_Controls_Button* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_Button__get_ShowKeyboard(ControlView__Fuse_Controls_Button* __this)
{
    return false;
}

void ControlView__Fuse_Controls_Button__OnGotFocus(ControlView__Fuse_Controls_Button* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_Button__OnLostFocus(ControlView__Fuse_Controls_Button* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_Button__OnNativeFocusChanged(ControlView__Fuse_Controls_Button* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_Button__OnRooted(ControlView__Fuse_Controls_Button* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Button__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Button__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Button__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_Button__OnUnrooted(ControlView__Fuse_Controls_Button* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Button__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Button__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_Button__ScheduleFocusLoss(ControlView__Fuse_Controls_Button* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_Circle__uType* ControlView__Fuse_Controls_Circle__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_Circle__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_Circle__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_Circle__uType), "Fuse.Android.ControlView<Fuse.Controls.Circle>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_Circle__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Circle__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Circle__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_Circle__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_Circle, _control),
        "_view", offsetof(ControlView__Fuse_Controls_Circle, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_Circle, _control), ::app::Fuse::Controls::Circle__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_Circle, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_Circle__get_Control, 0, false, ::app::Fuse::Controls::Circle__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_Circle__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_Circle___ObjInit_2(ControlView__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_Circle__Create(ControlView__Fuse_Controls_Circle* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Circle__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::Circle* ControlView__Fuse_Controls_Circle__FindControl(ControlView__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Circle__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Circle*>(p, ::app::Fuse::Controls::Circle__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Circle* ControlView__Fuse_Controls_Circle__get_Control(ControlView__Fuse_Controls_Circle* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_Circle__get_ShowKeyboard(ControlView__Fuse_Controls_Circle* __this)
{
    return false;
}

void ControlView__Fuse_Controls_Circle__OnGotFocus(ControlView__Fuse_Controls_Circle* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_Circle__OnLostFocus(ControlView__Fuse_Controls_Circle* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_Circle__OnNativeFocusChanged(ControlView__Fuse_Controls_Circle* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_Circle__OnRooted(ControlView__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Circle__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Circle__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Circle__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_Circle__OnUnrooted(ControlView__Fuse_Controls_Circle* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Circle__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Circle__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_Circle__ScheduleFocusLoss(ControlView__Fuse_Controls_Circle* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_Image__uType* ControlView__Fuse_Controls_Image__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_Image__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_Image__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_Image__uType), "Fuse.Android.ControlView<Fuse.Controls.Image>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_Image__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Image__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Image__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_Image__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_Image, _control),
        "_view", offsetof(ControlView__Fuse_Controls_Image, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_Image, _control), ::app::Fuse::Controls::Image__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_Image, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_Image__get_Control, 0, false, ::app::Fuse::Controls::Image__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_Image__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_Image___ObjInit_2(ControlView__Fuse_Controls_Image* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_Image__Create(ControlView__Fuse_Controls_Image* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Image__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::Image* ControlView__Fuse_Controls_Image__FindControl(ControlView__Fuse_Controls_Image* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Image__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Image*>(p, ::app::Fuse::Controls::Image__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Image* ControlView__Fuse_Controls_Image__get_Control(ControlView__Fuse_Controls_Image* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_Image__get_ShowKeyboard(ControlView__Fuse_Controls_Image* __this)
{
    return false;
}

void ControlView__Fuse_Controls_Image__OnGotFocus(ControlView__Fuse_Controls_Image* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_Image__OnLostFocus(ControlView__Fuse_Controls_Image* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_Image__OnNativeFocusChanged(ControlView__Fuse_Controls_Image* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_Image__OnRooted(ControlView__Fuse_Controls_Image* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Image__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Image__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Image__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_Image__OnUnrooted(ControlView__Fuse_Controls_Image* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Image__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Image__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_Image__ScheduleFocusLoss(ControlView__Fuse_Controls_Image* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_MapView__uType* ControlView__Fuse_Controls_MapView__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_MapView__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_MapView__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_MapView__uType), "Fuse.Android.ControlView<Fuse.Controls.MapView>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_MapView__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_MapView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_MapView__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_MapView__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_MapView, _control),
        "_view", offsetof(ControlView__Fuse_Controls_MapView, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_MapView, _control), ::app::Fuse::Controls::MapView__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_MapView, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_MapView__get_Control, 0, false, ::app::Fuse::Controls::MapView__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_MapView__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_MapView___ObjInit_2(ControlView__Fuse_Controls_MapView* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_MapView__Create(ControlView__Fuse_Controls_MapView* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_MapView__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::MapView* ControlView__Fuse_Controls_MapView__FindControl(ControlView__Fuse_Controls_MapView* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::MapView__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::MapView*>(p, ::app::Fuse::Controls::MapView__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::MapView* ControlView__Fuse_Controls_MapView__get_Control(ControlView__Fuse_Controls_MapView* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_MapView__get_ShowKeyboard(ControlView__Fuse_Controls_MapView* __this)
{
    return false;
}

void ControlView__Fuse_Controls_MapView__OnGotFocus(ControlView__Fuse_Controls_MapView* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_MapView__OnLostFocus(ControlView__Fuse_Controls_MapView* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_MapView__OnNativeFocusChanged(ControlView__Fuse_Controls_MapView* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_MapView__OnRooted(ControlView__Fuse_Controls_MapView* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::MapView__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_MapView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_MapView__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_MapView__OnUnrooted(ControlView__Fuse_Controls_MapView* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_MapView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_MapView__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_MapView__ScheduleFocusLoss(ControlView__Fuse_Controls_MapView* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_Rectangle__uType* ControlView__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_Rectangle__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_Rectangle__uType), "Fuse.Android.ControlView<Fuse.Controls.Rectangle>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_Rectangle__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Rectangle__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Rectangle__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_Rectangle__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_Rectangle, _control),
        "_view", offsetof(ControlView__Fuse_Controls_Rectangle, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_Rectangle, _control), ::app::Fuse::Controls::Rectangle__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_Rectangle, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_Rectangle__get_Control, 0, false, ::app::Fuse::Controls::Rectangle__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_Rectangle__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_Rectangle___ObjInit_2(ControlView__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_Rectangle__Create(ControlView__Fuse_Controls_Rectangle* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Rectangle__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::Rectangle* ControlView__Fuse_Controls_Rectangle__FindControl(ControlView__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Rectangle__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Rectangle*>(p, ::app::Fuse::Controls::Rectangle__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Rectangle* ControlView__Fuse_Controls_Rectangle__get_Control(ControlView__Fuse_Controls_Rectangle* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_Rectangle__get_ShowKeyboard(ControlView__Fuse_Controls_Rectangle* __this)
{
    return false;
}

void ControlView__Fuse_Controls_Rectangle__OnGotFocus(ControlView__Fuse_Controls_Rectangle* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_Rectangle__OnLostFocus(ControlView__Fuse_Controls_Rectangle* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_Rectangle__OnNativeFocusChanged(ControlView__Fuse_Controls_Rectangle* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_Rectangle__OnRooted(ControlView__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Rectangle__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Rectangle__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Rectangle__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_Rectangle__OnUnrooted(ControlView__Fuse_Controls_Rectangle* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Rectangle__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Rectangle__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_Rectangle__ScheduleFocusLoss(ControlView__Fuse_Controls_Rectangle* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_Slider__uType* ControlView__Fuse_Controls_Slider__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_Slider__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_Slider__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_Slider__uType), "Fuse.Android.ControlView<Fuse.Controls.Slider>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_Slider__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Slider__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_Slider__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_Slider__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_Slider, _control),
        "_view", offsetof(ControlView__Fuse_Controls_Slider, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_Slider, _control), ::app::Fuse::Controls::Slider__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_Slider, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_Slider__get_Control, 0, false, ::app::Fuse::Controls::Slider__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_Slider__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_Slider___ObjInit_2(ControlView__Fuse_Controls_Slider* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_Slider__Create(ControlView__Fuse_Controls_Slider* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Slider__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::Slider* ControlView__Fuse_Controls_Slider__FindControl(ControlView__Fuse_Controls_Slider* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Slider__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Slider*>(p, ::app::Fuse::Controls::Slider__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Slider* ControlView__Fuse_Controls_Slider__get_Control(ControlView__Fuse_Controls_Slider* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_Slider__get_ShowKeyboard(ControlView__Fuse_Controls_Slider* __this)
{
    return false;
}

void ControlView__Fuse_Controls_Slider__OnGotFocus(ControlView__Fuse_Controls_Slider* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_Slider__OnLostFocus(ControlView__Fuse_Controls_Slider* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_Slider__OnNativeFocusChanged(ControlView__Fuse_Controls_Slider* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_Slider__OnRooted(ControlView__Fuse_Controls_Slider* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Slider__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Slider__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Slider__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_Slider__OnUnrooted(ControlView__Fuse_Controls_Slider* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_Slider__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_Slider__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_Slider__ScheduleFocusLoss(ControlView__Fuse_Controls_Slider* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_TextControl__uType* ControlView__Fuse_Controls_TextControl__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_TextControl__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_TextControl__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_TextControl__uType), "Fuse.Android.ControlView<Fuse.Controls.TextControl>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_TextControl__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_TextControl__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_TextControl__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_TextControl__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_TextControl, _control),
        "_view", offsetof(ControlView__Fuse_Controls_TextControl, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_TextControl, _control), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_TextControl, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_TextControl__get_Control, 0, false, ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_TextControl__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_TextControl___ObjInit_2(ControlView__Fuse_Controls_TextControl* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_TextControl__Create(ControlView__Fuse_Controls_TextControl* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextControl__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::TextControl* ControlView__Fuse_Controls_TextControl__FindControl(ControlView__Fuse_Controls_TextControl* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::TextControl__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::TextControl*>(p, ::app::Fuse::Controls::TextControl__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::TextControl* ControlView__Fuse_Controls_TextControl__get_Control(ControlView__Fuse_Controls_TextControl* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_TextControl__get_ShowKeyboard(ControlView__Fuse_Controls_TextControl* __this)
{
    return false;
}

void ControlView__Fuse_Controls_TextControl__OnGotFocus(ControlView__Fuse_Controls_TextControl* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_TextControl__OnLostFocus(ControlView__Fuse_Controls_TextControl* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_TextControl__OnNativeFocusChanged(ControlView__Fuse_Controls_TextControl* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_TextControl__OnRooted(ControlView__Fuse_Controls_TextControl* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::TextControl__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextControl__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextControl__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_TextControl__OnUnrooted(ControlView__Fuse_Controls_TextControl* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextControl__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextControl__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_TextControl__ScheduleFocusLoss(ControlView__Fuse_Controls_TextControl* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_TextInput__uType* ControlView__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_TextInput__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_TextInput__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_TextInput__uType), "Fuse.Android.ControlView<Fuse.Controls.TextInput>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_TextInput__Create;
    type->__fp_get_ShowKeyboard = ControlView__Fuse_Controls_TextInput__get_ShowKeyboard;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_TextInput__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_TextInput__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_TextInput__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_TextInput, _control),
        "_view", offsetof(ControlView__Fuse_Controls_TextInput, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_TextInput, _control), ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_TextInput, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_TextInput__get_Control, 0, false, ::app::Fuse::Controls::TextInput__typeof()),
        ::uNewFunction("get_ShowKeyboard", type->__fp_get_ShowKeyboard, offsetof(ControlView__Fuse_Controls_TextInput__uType, __fp_get_ShowKeyboard), false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_TextInput___ObjInit_2(ControlView__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_TextInput__Create(ControlView__Fuse_Controls_TextInput* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextInput__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::TextInput* ControlView__Fuse_Controls_TextInput__FindControl(ControlView__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::TextInput__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::TextInput*>(p, ::app::Fuse::Controls::TextInput__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::TextInput* ControlView__Fuse_Controls_TextInput__get_Control(ControlView__Fuse_Controls_TextInput* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_TextInput__get_ShowKeyboard(ControlView__Fuse_Controls_TextInput* __this)
{
    return false;
}

void ControlView__Fuse_Controls_TextInput__OnGotFocus(ControlView__Fuse_Controls_TextInput* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_TextInput__OnLostFocus(ControlView__Fuse_Controls_TextInput* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_TextInput__OnNativeFocusChanged(ControlView__Fuse_Controls_TextInput* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_TextInput__OnRooted(ControlView__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::TextInput__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextInput__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextInput__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_TextInput__OnUnrooted(ControlView__Fuse_Controls_TextInput* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextInput__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_TextInput__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_TextInput__ScheduleFocusLoss(ControlView__Fuse_Controls_TextInput* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_ToggleControl__uType* ControlView__Fuse_Controls_ToggleControl__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_ToggleControl__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_ToggleControl__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_ToggleControl__uType), "Fuse.Android.ControlView<Fuse.Controls.ToggleControl>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_ToggleControl__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_ToggleControl__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_ToggleControl__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_ToggleControl__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_ToggleControl, _control),
        "_view", offsetof(ControlView__Fuse_Controls_ToggleControl, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_ToggleControl, _control), ::app::Fuse::Controls::ToggleControl__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_ToggleControl, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_ToggleControl__get_Control, 0, false, ::app::Fuse::Controls::ToggleControl__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_ToggleControl__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_ToggleControl___ObjInit_2(ControlView__Fuse_Controls_ToggleControl* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_ToggleControl__Create(ControlView__Fuse_Controls_ToggleControl* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_ToggleControl__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::ToggleControl* ControlView__Fuse_Controls_ToggleControl__FindControl(ControlView__Fuse_Controls_ToggleControl* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::ToggleControl__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::ToggleControl*>(p, ::app::Fuse::Controls::ToggleControl__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::ToggleControl* ControlView__Fuse_Controls_ToggleControl__get_Control(ControlView__Fuse_Controls_ToggleControl* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_ToggleControl__get_ShowKeyboard(ControlView__Fuse_Controls_ToggleControl* __this)
{
    return false;
}

void ControlView__Fuse_Controls_ToggleControl__OnGotFocus(ControlView__Fuse_Controls_ToggleControl* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_ToggleControl__OnLostFocus(ControlView__Fuse_Controls_ToggleControl* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_ToggleControl__OnNativeFocusChanged(ControlView__Fuse_Controls_ToggleControl* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_ToggleControl__OnRooted(ControlView__Fuse_Controls_ToggleControl* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::ToggleControl__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_ToggleControl__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_ToggleControl__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_ToggleControl__OnUnrooted(ControlView__Fuse_Controls_ToggleControl* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_ToggleControl__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_ToggleControl__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_ToggleControl__ScheduleFocusLoss(ControlView__Fuse_Controls_ToggleControl* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_WebView__uType* ControlView__Fuse_Controls_WebView__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_WebView__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_WebView__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_WebView__uType), "Fuse.Android.ControlView<Fuse.Controls.WebView>", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::View__typeof());
    type->__fp_Create = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))ControlView__Fuse_Controls_WebView__Create;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_WebView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlView__Fuse_Controls_WebView__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_WebView__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlView__Fuse_Controls_WebView, _control),
        "_view", offsetof(ControlView__Fuse_Controls_WebView, _view));

    type->SetFields(2,
        ::uNewField("_control", NULL, offsetof(ControlView__Fuse_Controls_WebView, _control), ::app::Fuse::Controls::WebView__typeof()),
        ::uNewField("_view", NULL, offsetof(ControlView__Fuse_Controls_WebView, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Control", ControlView__Fuse_Controls_WebView__get_Control, 0, false, ::app::Fuse::Controls::WebView__typeof()),
        ::uNewFunction("get_ShowKeyboard", ControlView__Fuse_Controls_WebView__get_ShowKeyboard, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlView__Fuse_Controls_WebView___ObjInit_2(ControlView__Fuse_Controls_WebView* __this)
{
    ::app::Fuse::Android::View___ObjInit_1(__this);
}

::app::Android::android::view::View* ControlView__Fuse_Controls_WebView__Create(ControlView__Fuse_Controls_WebView* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        return __this->_view;
    }

    __this->_view = __this->CreateInternal();
    ::app::Fuse::Android::FocusChangedListener__AddHandler(NULL, __this->_view, ::uNewDelegateNonVirt(::app::Fuse::Android::FocusChangedHandler__typeof(), (const void*)ControlView__Fuse_Controls_WebView__OnNativeFocusChanged, __this));
    return __this->_view;
}

::app::Fuse::Controls::WebView* ControlView__Fuse_Controls_WebView__FindControl(ControlView__Fuse_Controls_WebView* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::WebView__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::WebView*>(p, ::app::Fuse::Controls::WebView__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::WebView* ControlView__Fuse_Controls_WebView__get_Control(ControlView__Fuse_Controls_WebView* __this)
{
    return __this->_control;
}

bool ControlView__Fuse_Controls_WebView__get_ShowKeyboard(ControlView__Fuse_Controls_WebView* __this)
{
    return false;
}

void ControlView__Fuse_Controls_WebView__OnGotFocus(ControlView__Fuse_Controls_WebView* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->requestFocus();
    }
}

void ControlView__Fuse_Controls_WebView__OnLostFocus(ControlView__Fuse_Controls_WebView* __this, ::uObject* s, ::uObject* a)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_view, NULL) && ::uPtr< ::app::Android::android::view::View*>(__this->_view)->hasFocus())
    {
        __this->ScheduleFocusLoss();
    }
}

void ControlView__Fuse_Controls_WebView__OnNativeFocusChanged(ControlView__Fuse_Controls_WebView* __this, ::uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
        __this->ScheduleFocusLoss();
    }
    else
    {
        ::app::Fuse::Input::Focus__Obtained(NULL, (::app::Fuse::Node*)__this);

        if (__this->ShowKeyboard())
        {
            ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = NULL;
            ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext())->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
            ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->showSoftInput(__this->_view, ::app::Android::android::view::inputmethod::InputMethodManager__get_SHOW_IMPLICIT(NULL));
        }
    }
}

void ControlView__Fuse_Controls_WebView__OnRooted(ControlView__Fuse_Controls_WebView* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::WebView__typeof())));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_WebView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_WebView__OnLostFocus, __this));
    __this->Attach();
}

void ControlView__Fuse_Controls_WebView__OnUnrooted(ControlView__Fuse_Controls_WebView* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)ControlView__Fuse_Controls_WebView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)ControlView__Fuse_Controls_WebView__OnLostFocus, __this));
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

void ControlView__Fuse_Controls_WebView__ScheduleFocusLoss(ControlView__Fuse_Controls_WebView* __this)
{
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->LoseFocus = __this->_view;
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardContext = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getContext();
    ::uPtr< ::app::Fuse::Android::FocusManager*>(::app::Fuse::Android::FocusManager__Singleton)->HideKeyboardWindowToken = ::uPtr< ::app::Android::android::view::View*>(__this->_view)->getWindowToken();
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::FocusManager__CompleteFocusLoss, ::app::Fuse::Android::FocusManager__Singleton));
}

}}}
