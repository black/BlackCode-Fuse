// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Graphics.GraphicsContext.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Platform2.Display.PrivateState.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
void uInitRtti();
void uStartApp();
static uString* STRINGS[15];
static uType* TYPES[12];

namespace g{
namespace Uno{
namespace Platform2{

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform2\$.uno(22)
// -------------------------------------------------------------------------

// public static class Application :22
// {
// static Application() :22
static void Application__cctor__fn(uType* __type)
{
    Application::DelayedUri_ = ::STRINGS[0/*""*/];
}

uClassType* Application_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform2.Application", options);
    type->fp_cctor_ = Application__cctor__fn;
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("EnterBackground() called on terminating application");
    ::STRINGS[2] = uString::Const("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.20.1\\Source\\Uno\\Platform2\\$.uno");
    ::STRINGS[3] = uString::Const("EnterBackground() called on uninitialized application");
    ::STRINGS[4] = uString::Const("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground");
    ::STRINGS[5] = uString::Const("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background");
    ::STRINGS[6] = uString::Const("EnterForeground() called on terminating application");
    ::STRINGS[7] = uString::Const("EnterForeground() called on uninitialized application");
    ::STRINGS[8] = uString::Const("EnterInteractive() called on terminating application");
    ::STRINGS[9] = uString::Const("EnterInteractive() called on uninitialized application");
    ::STRINGS[10] = uString::Const("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Interactive");
    ::STRINGS[11] = uString::Const("ExitInteractive() called on terminating application");
    ::STRINGS[12] = uString::Const("ExitInteractive() called on uninitialized application");
    ::STRINGS[13] = uString::Const("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Uninitialized");
    ::STRINGS[14] = uString::Const("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Terminating");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[4] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof());
    ::TYPES[7] = ::g::Uno::Platform::KeyEventArgs_typeof();
    ::TYPES[8] = ::g::Uno::EventHandler_typeof();
    ::TYPES[9] = ::g::Uno::EventArgs_typeof();
    ::TYPES[10] = ::g::Uno::Application_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::DelayedUri_, uFieldFlagsStatic,
        ::g::Uno::Platform2::ApplicationState_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::_State_, uFieldFlagsStatic,
        ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::EnteringBackground1_, uFieldFlagsStatic,
        ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::EnteringForeground1_, uFieldFlagsStatic,
        ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::EnteringInteractive1_, uFieldFlagsStatic,
        ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::ExitedInteractive1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof()), (uintptr_t)&::g::Uno::Platform2::Application::KeyDown1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof()), (uintptr_t)&::g::Uno::Platform2::Application::KeyUp1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::ReceivedLowMemoryWarning1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Platform2::Application::ReceivedURI1_, uFieldFlagsStatic,
        ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::Started1_, uFieldFlagsStatic,
        ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::Terminating1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(23,
        new uFunction("add_EnteringBackground", NULL, (void*)Application__add_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("remove_EnteringBackground", NULL, (void*)Application__remove_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("add_EnteringForeground", NULL, (void*)Application__add_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("remove_EnteringForeground", NULL, (void*)Application__remove_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("add_EnteringInteractive", NULL, (void*)Application__add_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("remove_EnteringInteractive", NULL, (void*)Application__remove_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("add_ExitedInteractive", NULL, (void*)Application__add_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("remove_ExitedInteractive", NULL, (void*)Application__remove_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("add_KeyDown", NULL, (void*)Application__add_KeyDown_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof())),
        new uFunction("remove_KeyDown", NULL, (void*)Application__remove_KeyDown_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof())),
        new uFunction("add_KeyUp", NULL, (void*)Application__add_KeyUp_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof())),
        new uFunction("remove_KeyUp", NULL, (void*)Application__remove_KeyUp_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof())),
        new uFunction("add_ReceivedLowMemoryWarning", NULL, (void*)Application__add_ReceivedLowMemoryWarning_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ReceivedLowMemoryWarning", NULL, (void*)Application__remove_ReceivedLowMemoryWarning_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_ReceivedURI", NULL, (void*)Application__add_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("remove_ReceivedURI", NULL, (void*)Application__remove_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_RootView", NULL, (void*)Application__get_RootView_fn, 0, true, ::g::Uno::Platform::ViewNativeHandle_typeof(), 0),
        new uFunction("set_RootView", NULL, (void*)Application__set_RootView_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform::ViewNativeHandle_typeof()),
        new uFunction("add_Started", NULL, (void*)Application__add_Started_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("remove_Started", NULL, (void*)Application__remove_Started_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("get_State", NULL, (void*)Application__get_State_fn, 0, true, ::g::Uno::Platform2::ApplicationState_typeof(), 0),
        new uFunction("add_Terminating", NULL, (void*)Application__add_Terminating_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()),
        new uFunction("remove_Terminating", NULL, (void*)Application__remove_Terminating_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof()));
    return type;
}

// private static void _Init() :74
void Application___Init_fn()
{
    Application::_Init();
}

// private static extern void _Start() :77
void Application___Start_fn()
{
    Application::_Start();
}

// private static void DidEnterBackground() :39
void Application__DidEnterBackground_fn()
{
    Application::DidEnterBackground();
}

// private static void DidEnterForeground() :36
void Application__DidEnterForeground_fn()
{
    Application::DidEnterForeground();
}

// private static void DidEnterInteractive() :37
void Application__DidEnterInteractive_fn()
{
    Application::DidEnterInteractive();
}

// private static void DidExitInteractive() :38
void Application__DidExitInteractive_fn()
{
    Application::DidExitInteractive();
}

// private static void DidStart() :35
void Application__DidStart_fn()
{
    Application::DidStart();
}

// private static void DispatchDelayedUri(Uno.Platform2.ApplicationState state) :339
void Application__DispatchDelayedUri_fn(int* state)
{
    Application::DispatchDelayedUri(*state);
}

// internal static void EnterBackground() :189
void Application__EnterBackground_fn()
{
    Application::EnterBackground();
}

// internal static void EnterForeground() :80
void Application__EnterForeground_fn()
{
    Application::EnterForeground();
}

// public static generated void add_EnteringBackground(Uno.Platform2.ApplicationStateTransitionHandler value) :31
void Application__add_EnteringBackground_fn(uDelegate* value)
{
    Application::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Platform2.ApplicationStateTransitionHandler value) :31
void Application__remove_EnteringBackground_fn(uDelegate* value)
{
    Application::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Platform2.ApplicationStateTransitionHandler value) :28
void Application__add_EnteringForeground_fn(uDelegate* value)
{
    Application::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Platform2.ApplicationStateTransitionHandler value) :28
void Application__remove_EnteringForeground_fn(uDelegate* value)
{
    Application::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) :29
void Application__add_EnteringInteractive_fn(uDelegate* value)
{
    Application::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) :29
void Application__remove_EnteringInteractive_fn(uDelegate* value)
{
    Application::remove_EnteringInteractive(value);
}

// internal static void EnterInteractive() :114
void Application__EnterInteractive_fn()
{
    Application::EnterInteractive();
}

// public static generated void add_ExitedInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) :30
void Application__add_ExitedInteractive_fn(uDelegate* value)
{
    Application::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) :30
void Application__remove_ExitedInteractive_fn(uDelegate* value)
{
    Application::remove_ExitedInteractive(value);
}

// internal static void ExitInteractive() :153
void Application__ExitInteractive_fn()
{
    Application::ExitInteractive();
}

// private static extern Uno.Platform.ViewNativeHandle GetRootView() :287
void Application__GetRootView_fn(uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = Application::GetRootView();
}

// public static generated void add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :298
void Application__add_KeyDown_fn(uDelegate* value)
{
    Application::add_KeyDown(value);
}

// public static generated void remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :298
void Application__remove_KeyDown_fn(uDelegate* value)
{
    Application::remove_KeyDown(value);
}

// public static generated void add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :299
void Application__add_KeyUp_fn(uDelegate* value)
{
    Application::add_KeyUp(value);
}

// public static generated void remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :299
void Application__remove_KeyUp_fn(uDelegate* value)
{
    Application::remove_KeyUp(value);
}

// internal static bool OnKeyDown(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :302
void Application__OnKeyDown_fn(int* key, int* modifiers, bool* __retval)
{
    *__retval = Application::OnKeyDown(*key, *modifiers);
}

// internal static bool OnKeyUp(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :313
void Application__OnKeyUp_fn(int* key, int* modifiers, bool* __retval)
{
    *__retval = Application::OnKeyUp(*key, *modifiers);
}

// internal static void OnReceivedLowMemoryWarning() :262
void Application__OnReceivedLowMemoryWarning_fn()
{
    Application::OnReceivedLowMemoryWarning();
}

// internal static void OnReceivedURI(string Uri) :325
void Application__OnReceivedURI_fn(uString* Uri)
{
    Application::OnReceivedURI(Uri);
}

// internal static extern void Quit() :293
void Application__Quit_fn()
{
    Application::Quit();
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) :259
void Application__add_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    Application::add_ReceivedLowMemoryWarning(value);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) :259
void Application__remove_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    Application::remove_ReceivedLowMemoryWarning(value);
}

// public static generated void add_ReceivedURI(Uno.EventHandler<string> value) :323
void Application__add_ReceivedURI_fn(uDelegate* value)
{
    Application::add_ReceivedURI(value);
}

// public static generated void remove_ReceivedURI(Uno.EventHandler<string> value) :323
void Application__remove_ReceivedURI_fn(uDelegate* value)
{
    Application::remove_ReceivedURI(value);
}

// private static void ResetContextState() :278
void Application__ResetContextState_fn()
{
    Application::ResetContextState();
}

// public static extern Uno.Platform.ViewNativeHandle get_RootView() :275
void Application__get_RootView_fn(uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = Application::RootView();
}

// public static extern void set_RootView(Uno.Platform.ViewNativeHandle value) :276
void Application__set_RootView_fn(uPlatform2::ViewNativeHandle* value)
{
    Application::RootView(*value);
}

// private static extern void SetRootView(Uno.Platform.ViewNativeHandle viewHandle) :290
void Application__SetRootView_fn(uPlatform2::ViewNativeHandle* viewHandle_)
{
    Application::SetRootView(*viewHandle_);
}

// internal static void Start() :43
void Application__Start_fn()
{
    Application::Start();
}

// public static generated void add_Started(Uno.Platform2.ApplicationStateTransitionHandler value) :26
void Application__add_Started_fn(uDelegate* value)
{
    Application::add_Started(value);
}

// public static generated void remove_Started(Uno.Platform2.ApplicationStateTransitionHandler value) :26
void Application__remove_Started_fn(uDelegate* value)
{
    Application::remove_Started(value);
}

// public static generated Uno.Platform2.ApplicationState get_State() :24
void Application__get_State_fn(int* __retval)
{
    *__retval = Application::State();
}

// private static generated void set_State(Uno.Platform2.ApplicationState value) :24
void Application__set_State_fn(int* value)
{
    Application::State(*value);
}

// internal static void Terminate() :225
void Application__Terminate_fn()
{
    Application::Terminate();
}

// public static generated void add_Terminating(Uno.Platform2.ApplicationStateTransitionHandler value) :33
void Application__add_Terminating_fn(uDelegate* value)
{
    Application::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Platform2.ApplicationStateTransitionHandler value) :33
void Application__remove_Terminating_fn(uDelegate* value)
{
    Application::remove_Terminating(value);
}

// private static void WillTerminate() :40
void Application__WillTerminate_fn()
{
    Application::WillTerminate();
}

uSStrong<uString*> Application::DelayedUri_;
int Application::_State_;
uSStrong<uDelegate*> Application::EnteringBackground1_;
uSStrong<uDelegate*> Application::EnteringForeground1_;
uSStrong<uDelegate*> Application::EnteringInteractive1_;
uSStrong<uDelegate*> Application::ExitedInteractive1_;
uSStrong<uDelegate*> Application::KeyDown1_;
uSStrong<uDelegate*> Application::KeyUp1_;
uSStrong<uDelegate*> Application::ReceivedLowMemoryWarning1_;
uSStrong<uDelegate*> Application::ReceivedURI1_;
uSStrong<uDelegate*> Application::Started1_;
uSStrong<uDelegate*> Application::Terminating1_;

// private static void _Init() [static] :74
void Application::_Init()
{
    Application_typeof()->Init();
    uInitRtti();
}

// private static extern void _Start() [static] :77
void Application::_Start()
{
    Application_typeof()->Init();
    uStartApp();
}

// private static void DidEnterBackground() [static] :39
void Application::DidEnterBackground()
{
    Application_typeof()->Init();
}

// private static void DidEnterForeground() [static] :36
void Application::DidEnterForeground()
{
    Application_typeof()->Init();
}

// private static void DidEnterInteractive() [static] :37
void Application::DidEnterInteractive()
{
    Application_typeof()->Init();
}

// private static void DidExitInteractive() [static] :38
void Application::DidExitInteractive()
{
    Application_typeof()->Init();
}

// private static void DidStart() [static] :35
void Application::DidStart()
{
    Application_typeof()->Init();
}

// private static void DispatchDelayedUri(Uno.Platform2.ApplicationState state) [static] :339
void Application::DispatchDelayedUri(int state)
{
    Application_typeof()->Init();
    uDelegate* handler = Application::ReceivedURI1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (uString*)Application::DelayedUri());

    Application::DelayedUri() = ::STRINGS[0/*""*/];
    Application::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedUri_fn));
}

// internal static void EnterBackground() [static] :189
void Application::EnterBackground()
{
    Application_typeof()->Init();
    int assert9;
    int assert10;

    switch (Application::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[1/*"EnterBackgr...*/], 1, ::STRINGS[2/*"C:\\Program...*/], 194);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[3/*"EnterBackgr...*/], 1, ::STRINGS[2/*"C:\\Program...*/], 198);
            return;
        }
        case 1:
            return;
        case 2:
            break;
        case 3:
        {
            Application::ExitInteractive();
            break;
        }
    }

    assert9 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert9 == 2, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 212, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert9), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 2)));
    Application::State(1);
    Application::DidEnterBackground();
    uDelegate* handler = Application::EnteringBackground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));

    assert10 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert10 == 1, ::STRINGS[5/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 221, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert10), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 1)));
}

// internal static void EnterForeground() [static] :80
void Application::EnterForeground()
{
    Application_typeof()->Init();
    int assert3;
    int assert4;

    switch (Application::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[6/*"EnterForegr...*/], 1, ::STRINGS[2/*"C:\\Program...*/], 85);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"EnterForegr...*/], 1, ::STRINGS[2/*"C:\\Program...*/], 89);
            return;
        }
        case 1:
            break;
        case 2:
        case 3:
            return;
    }

    assert3 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert3 == 1, ::STRINGS[5/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 101, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert3), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 1)));
    Application::State(2);
    Application::DidEnterForeground();
    uDelegate* handler = Application::EnteringForeground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));

    assert4 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert4 == 2, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 110, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert4), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 2)));
}

// internal static void EnterInteractive() [static] :114
void Application::EnterInteractive()
{
    Application_typeof()->Init();
    int assert5;
    int assert6;
    GLHelper::SwapBackToBackgroundSurface();

    switch (Application::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[8/*"EnterIntera...*/], 1, ::STRINGS[2/*"C:\\Program...*/], 122);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[9/*"EnterIntera...*/], 1, ::STRINGS[2/*"C:\\Program...*/], 126);
            return;
        }
        case 1:
        {
            Application::EnterForeground();
            break;
        }
        case 2:
            break;
        case 3:
            return;
    }

    assert5 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert5 == 2, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 140, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert5), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 2)));
    Application::State(3);
    Application::DidEnterInteractive();
    uDelegate* handler = Application::EnteringInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));

    assert6 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert6 == 3, ::STRINGS[10/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 149, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert6), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 3)));
}

// internal static void ExitInteractive() [static] :153
void Application::ExitInteractive()
{
    Application_typeof()->Init();
    int assert7;
    int assert8;
    GLHelper::SwapBackToBackgroundSurface();

    switch (Application::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[11/*"ExitInterac...*/], 1, ::STRINGS[2/*"C:\\Program...*/], 161);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[12/*"ExitInterac...*/], 1, ::STRINGS[2/*"C:\\Program...*/], 165);
            return;
        }
        case 1:
        case 2:
            return;
        case 3:
            break;
    }

    assert7 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert7 == 3, ::STRINGS[10/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 176, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert7), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 3)));
    Application::State(2);
    Application::DidExitInteractive();
    uDelegate* handler = Application::ExitedInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));

    assert8 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert8 == 2, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 185, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert8), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 2)));
}

// private static extern Uno.Platform.ViewNativeHandle GetRootView() [static] :287
uPlatform2::ViewNativeHandle Application::GetRootView()
{
    Application_typeof()->Init();
    return uPlatform2::Application::GetRootView();
}

// internal static bool OnKeyDown(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :302
bool Application::OnKeyDown(int key, int modifiers)
{
    Application_typeof()->Init();
    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, modifiers);
    uDelegate* handler = Application::KeyDown1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);

    return args->Handled();
}

// internal static bool OnKeyUp(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :313
bool Application::OnKeyUp(int key, int modifiers)
{
    Application_typeof()->Init();
    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, modifiers);
    uDelegate* handler = Application::KeyUp1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);

    return args->Handled();
}

// internal static void OnReceivedLowMemoryWarning() [static] :262
void Application::OnReceivedLowMemoryWarning()
{
    Application_typeof()->Init();
    uDelegate* handler = Application::ReceivedLowMemoryWarning1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal static void OnReceivedURI(string Uri) [static] :325
void Application::OnReceivedURI(uString* Uri)
{
    Application_typeof()->Init();

    if ((Application::State() == 2) || (Application::State() == 3))
    {
        uDelegate* handler = Application::ReceivedURI1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, Uri);
    }
    else
    {
        Application::DelayedUri() = Uri;
        Application::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedUri_fn));
    }
}

// internal static extern void Quit() [static] :293
void Application::Quit()
{
    Application_typeof()->Init();
    uPlatform2::Application::Quit();;
}

// private static void ResetContextState() [static] :278
void Application::ResetContextState()
{
    Application_typeof()->Init();

    if ((::g::Uno::Application::Current() != NULL) && (uPtr(::g::Uno::Application::Current())->GraphicsContext() != NULL))
        uPtr(uPtr(::g::Uno::Application::Current())->GraphicsContext())->ForceResetState();
}

// private static extern void SetRootView(Uno.Platform.ViewNativeHandle viewHandle) [static] :290
void Application::SetRootView(uPlatform2::ViewNativeHandle viewHandle_)
{
    Application_typeof()->Init();
    uPlatform2::Application::SetRootView(viewHandle_);
}

// internal static void Start() [static] :43
void Application::Start()
{
    Application_typeof()->Init();
    int assert1;
    int assert2;

    switch (Application::State())
    {
        case 1:
        {
            Application::Terminate();
            break;
        }
        case 0:
        case -1:
            break;
    }

    Application::_Init();
    assert1 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 == 0, ::STRINGS[13/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 58, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert1), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 0)));
    Application::_Start();
    Application::State(1);
    Application::DidStart();
    uDelegate* handler = Application::Started1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));

    assert2 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert2 == 1, ::STRINGS[5/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 70, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert2), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 1)));
}

// internal static void Terminate() [static] :225
void Application::Terminate()
{
    Application_typeof()->Init();
    int assert11;
    int assert12;

    switch (Application::State())
    {
        case -1:
        case 0:
            return;
        case 1:
            break;
        case 2:
        case 3:
        {
            Application::EnterBackground();
            break;
        }
    }

    assert11 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert11 == 1, ::STRINGS[5/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 242, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert11), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), 1)));
    Application::State(-1);
    Application::WillTerminate();
    uDelegate* handler = Application::Terminating1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));

    assert12 = Application::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert12 == -1, ::STRINGS[14/*"Uno.Platfor...*/], ::STRINGS[2/*"C:\\Program...*/], 251, uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), assert12), uBox<int>(::g::Uno::Platform2::ApplicationState_typeof(), -1)));
    Application::State(0);
}

// private static void WillTerminate() [static] :40
void Application::WillTerminate()
{
    Application_typeof()->Init();
}

// public static extern Uno.Platform.ViewNativeHandle get_RootView() [static] :275
uPlatform2::ViewNativeHandle Application::RootView()
{
    Application_typeof()->Init();
    return Application::GetRootView();
}

// public static extern void set_RootView(Uno.Platform.ViewNativeHandle value) [static] :276
void Application::RootView(uPlatform2::ViewNativeHandle value)
{
    Application_typeof()->Init();
    Application::SetRootView(value);
}

// public static generated Uno.Platform2.ApplicationState get_State() [static] :24
int Application::State()
{
    Application_typeof()->Init();
    return Application::_State();
}

// private static generated void set_State(Uno.Platform2.ApplicationState value) [static] :24
void Application::State(int value)
{
    Application_typeof()->Init();
    Application::_State() = value;
}

// public static generated void add_EnteringBackground(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :31
void Application::add_EnteringBackground(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::EnteringBackground1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringBackground(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :31
void Application::remove_EnteringBackground(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::EnteringBackground1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringForeground(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :28
void Application::add_EnteringForeground(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::EnteringForeground1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringForeground(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :28
void Application::remove_EnteringForeground(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::EnteringForeground1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :29
void Application::add_EnteringInteractive(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::EnteringInteractive1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :29
void Application::remove_EnteringInteractive(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::EnteringInteractive1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_ExitedInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :30
void Application::add_ExitedInteractive(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::ExitedInteractive1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :30
void Application::remove_ExitedInteractive(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::ExitedInteractive1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :298
void Application::add_KeyDown(uDelegate* value)
{
    Application_typeof()->Init();
    Application::KeyDown1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::KeyDown1(), value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :298
void Application::remove_KeyDown(uDelegate* value)
{
    Application_typeof()->Init();
    Application::KeyDown1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::KeyDown1(), value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :299
void Application::add_KeyUp(uDelegate* value)
{
    Application_typeof()->Init();
    Application::KeyUp1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::KeyUp1(), value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :299
void Application::remove_KeyUp(uDelegate* value)
{
    Application_typeof()->Init();
    Application::KeyUp1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::KeyUp1(), value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) [static] :259
void Application::add_ReceivedLowMemoryWarning(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ReceivedLowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::ReceivedLowMemoryWarning1(), value), ::TYPES[8/*Uno.EventHandler*/]);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) [static] :259
void Application::remove_ReceivedLowMemoryWarning(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ReceivedLowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::ReceivedLowMemoryWarning1(), value), ::TYPES[8/*Uno.EventHandler*/]);
}

// public static generated void add_ReceivedURI(Uno.EventHandler<string> value) [static] :323
void Application::add_ReceivedURI(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ReceivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::ReceivedURI1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_ReceivedURI(Uno.EventHandler<string> value) [static] :323
void Application::remove_ReceivedURI(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ReceivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::ReceivedURI1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// public static generated void add_Started(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :26
void Application::add_Started(uDelegate* value)
{
    Application_typeof()->Init();
    Application::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::Started1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Started(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :26
void Application::remove_Started(uDelegate* value)
{
    Application_typeof()->Init();
    Application::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::Started1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_Terminating(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :33
void Application::add_Terminating(uDelegate* value)
{
    Application_typeof()->Init();
    Application::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::Terminating1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Terminating(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :33
void Application::remove_Terminating(uDelegate* value)
{
    Application_typeof()->Init();
    Application::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::Terminating1(), value), ::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform2\$.uno(10)
// -------------------------------------------------------------------------

// public enum ApplicationState :10
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform2.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform2\$.uno(19)
// -------------------------------------------------------------------------

// public delegate void ApplicationStateTransitionHandler(Uno.Platform2.ApplicationState newState) :19
uDelegateType* ApplicationStateTransitionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Platform2.ApplicationStateTransitionHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Platform2::ApplicationState_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform2\$.uno(360)
// --------------------------------------------------------------------------

// public sealed extern class Display :360
// {
//  ~Display() :371
static void Display__Finalize_fn(Display* __this)
{
    __this->Destroy();
}

uType* Display_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Display);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform2.Display", options);
    type->fp_ctor_ = (void*)Display__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Display__Finalize_fn;
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[8] = ::g::Uno::EventHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::EventArgs_typeof();
    ::TYPES[11] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform2::Display, _frame), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Uno::Platform2::Display, _framesPerSecond), 0,
        Display__PrivateState_typeof(), offsetof(::g::Uno::Platform2::Display, _private), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Platform2::Display, _Density), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof()), offsetof(::g::Uno::Platform2::Display, _tick1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Uno::Platform2::Display, FrameChanged1), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Density", NULL, (void*)Display__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Frame", NULL, (void*)Display__get_Frame_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("add_FrameChanged", NULL, (void*)Display__add_FrameChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_FrameChanged", NULL, (void*)Display__remove_FrameChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_FramesPerSecond", NULL, (void*)Display__get_FramesPerSecond_fn, 0, false, ::g::Uno::UInt_typeof(), 0),
        new uFunction("set_FramesPerSecond", NULL, (void*)Display__set_FramesPerSecond_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UInt_typeof()),
        new uFunction("get_MainDisplay", NULL, (void*)Display__get_MainDisplay_fn, 0, true, Display_typeof(), 0),
        new uFunction("add_Tick", NULL, (void*)Display__add_Tick_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof())),
        new uFunction("remove_Tick", NULL, (void*)Display__remove_Tick_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof())));
    return type;
}

// private Display() :365
void Display__ctor__fn(Display* __this)
{
    __this->ctor_();
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :435
void Display__add__tick_fn(Display* __this, uDelegate* value)
{
    __this->add__tick(value);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :435
void Display__remove__tick_fn(Display* __this, uDelegate* value)
{
    __this->remove__tick(value);
}

// public generated float get_Density() :386
void Display__get_Density_fn(Display* __this, float* __retval)
{
    *__retval = __this->Density();
}

// private generated void set_Density(float value) :386
void Display__set_Density_fn(Display* __this, float* value)
{
    __this->Density(*value);
}

// private extern void Destroy() :377
void Display__Destroy_fn(Display* __this)
{
    __this->Destroy();
}

// private extern void DisableTickNotifications() :465
void Display__DisableTickNotifications_fn(Display* __this)
{
    __this->DisableTickNotifications();
}

// private extern void EnableTickNotifications() :464
void Display__EnableTickNotifications_fn(Display* __this)
{
    __this->EnableTickNotifications();
}

// public Uno.Rect get_Frame() :391
void Display__get_Frame_fn(Display* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Frame();
}

// private void set_Frame(Uno.Rect value) :392
void Display__set_Frame_fn(Display* __this, ::g::Uno::Rect* value)
{
    __this->Frame(*value);
}

// public generated void add_FrameChanged(Uno.EventHandler value) :402
void Display__add_FrameChanged_fn(Display* __this, uDelegate* value)
{
    __this->add_FrameChanged(value);
}

// public generated void remove_FrameChanged(Uno.EventHandler value) :402
void Display__remove_FrameChanged_fn(Display* __this, uDelegate* value)
{
    __this->remove_FrameChanged(value);
}

// public uint get_FramesPerSecond() :417
void Display__get_FramesPerSecond_fn(Display* __this, uint32_t* __retval)
{
    *__retval = __this->FramesPerSecond();
}

// public void set_FramesPerSecond(uint value) :418
void Display__set_FramesPerSecond_fn(Display* __this, uint32_t* value)
{
    __this->FramesPerSecond(*value);
}

// private static extern Uno.Platform2.Display GetMainDisplay() :380
void Display__GetMainDisplay_fn(Display** __retval)
{
    *__retval = Display::GetMainDisplay();
}

// private extern void Initialize() :376
void Display__Initialize_fn(Display* __this)
{
    __this->Initialize();
}

// public static Uno.Platform2.Display get_MainDisplay() :379
void Display__get_MainDisplay_fn(Display** __retval)
{
    *__retval = Display::MainDisplay();
}

// private Display New() :365
void Display__New1_fn(Display** __retval)
{
    *__retval = Display::New1();
}

// private void OnFrameChanged() :403
void Display__OnFrameChanged_fn(Display* __this)
{
    __this->OnFrameChanged();
}

// private void OnTick(Uno.Platform.TimerEventArgs args) :457
void Display__OnTick_fn(Display* __this, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(args);
}

// private extern void SetFramesPerSecond(uint value) :429
void Display__SetFramesPerSecond_fn(Display* __this, uint32_t* value_)
{
    __this->SetFramesPerSecond(*value_);
}

// public void add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :438
void Display__add_Tick_fn(Display* __this, uDelegate* value)
{
    __this->add_Tick(value);
}

// public void remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :445
void Display__remove_Tick_fn(Display* __this, uDelegate* value)
{
    __this->remove_Tick(value);
}

// private Display() [instance] :365
void Display::ctor_()
{
    Density(1.0f);
    Initialize();
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :435
void Display::add__tick(uDelegate* value)
{
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_tick1, value), ::TYPES[11/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :435
void Display::remove__tick(uDelegate* value)
{
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_tick1, value), ::TYPES[11/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// public generated float get_Density() [instance] :386
float Display::Density()
{
    return _Density;
}

// private generated void set_Density(float value) [instance] :386
void Display::Density(float value)
{
    _Density = value;
}

// private extern void Destroy() [instance] :377
void Display::Destroy()
{
    this->_private.Destroy(this);
}

// private extern void DisableTickNotifications() [instance] :465
void Display::DisableTickNotifications()
{
    this->_private.DisableTickNotifications(this);
}

// private extern void EnableTickNotifications() [instance] :464
void Display::EnableTickNotifications()
{
    this->_private.EnableTickNotifications(this);
}

// public Uno.Rect get_Frame() [instance] :391
::g::Uno::Rect Display::Frame()
{
    return _frame;
}

// private void set_Frame(Uno.Rect value) [instance] :392
void Display::Frame(::g::Uno::Rect value)
{
    if (::g::Uno::Rect::Equals2(_frame, value))
        return;

    _frame = value;
    OnFrameChanged();
}

// public generated void add_FrameChanged(Uno.EventHandler value) [instance] :402
void Display::add_FrameChanged(uDelegate* value)
{
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameChanged1, value), ::TYPES[8/*Uno.EventHandler*/]);
}

// public generated void remove_FrameChanged(Uno.EventHandler value) [instance] :402
void Display::remove_FrameChanged(uDelegate* value)
{
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameChanged1, value), ::TYPES[8/*Uno.EventHandler*/]);
}

// public uint get_FramesPerSecond() [instance] :417
uint32_t Display::FramesPerSecond()
{
    return _framesPerSecond;
}

// public void set_FramesPerSecond(uint value) [instance] :418
void Display::FramesPerSecond(uint32_t value)
{
    if (_framesPerSecond == value)
        return;

    _framesPerSecond = value;

    if (::g::Uno::Delegate::op_Inequality(_tick1, NULL))
        SetFramesPerSecond(value);
}

// private extern void Initialize() [instance] :376
void Display::Initialize()
{
    this->_private.Initialize(this);
}

// private void OnFrameChanged() [instance] :403
void Display::OnFrameChanged()
{
    uDelegate* handler = FrameChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnTick(Uno.Platform.TimerEventArgs args) [instance] :457
void Display::OnTick(::g::Uno::Platform::TimerEventArgs* args)
{
    uDelegate* handler = _tick1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, args);
}

// private extern void SetFramesPerSecond(uint value) [instance] :429
void Display::SetFramesPerSecond(uint32_t value_)
{
    this->_private.SetFramesPerSecond(this, value_);
}

// public void add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :438
void Display::add_Tick(uDelegate* value)
{
    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        EnableTickNotifications();

    add__tick(value);
}

// public void remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :445
void Display::remove_Tick(uDelegate* value)
{
    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        return;

    remove__tick(value);

    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        DisableTickNotifications();
}

// private static extern Uno.Platform2.Display GetMainDisplay() [static] :380
Display* Display::GetMainDisplay()
{
    static Display* mainDisplay;
    if (uEnterCriticalIfNull(&mainDisplay))
    {
        mainDisplay = Display::New1();
        uRetain(mainDisplay);
    
        mainDisplay->_private.InitializeAsMainDisplay(mainDisplay);
    
        uExitCritical();
    }
    
    return mainDisplay;
}

// private Display New() [static] :365
Display* Display::New1()
{
    Display* obj1 = (Display*)uNew(Display_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Platform2.Display get_MainDisplay() [static] :379
Display* Display::MainDisplay()
{
    return Display::GetMainDisplay();
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Platform2\$.uno(362)
// --------------------------------------------------------------------------

// private struct Display.PrivateState :362
// {
uStructType* Display__PrivateState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uPlatform2::Display);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Platform2.Display.PrivateState", options);
    return type;
}
// }

}}} // ::g::Uno::Platform2
