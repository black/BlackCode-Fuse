#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__string.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_TimerEventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.EventModifiers.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.TimerEventArgs.h>
#include <app/Uno.Platform.ViewNativeHandle.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.ApplicationState.h>
#include <app/Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.Display_PrivateState.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
void uStartApp();

namespace app {
namespace Uno {
namespace Platform2 {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int Application___State;
::uStaticStrong< ::uString*> Application__DelayedUri;
::uStaticStrong< ::uDelegate*> Application__EnteringBackground;
::uStaticStrong< ::uDelegate*> Application__EnteringForeground;
::uStaticStrong< ::uDelegate*> Application__EnteringInteractive;
::uStaticStrong< ::uDelegate*> Application__ExitedInteractive;
::uStaticStrong< ::uDelegate*> Application__KeyDown;
::uStaticStrong< ::uDelegate*> Application__KeyUp;
::uStaticStrong< ::uDelegate*> Application__ReceivedLowMemoryWarning;
::uStaticStrong< ::uDelegate*> Application__ReceivedURI;
::uStaticStrong< ::uDelegate*> Application__Started;
::uStaticStrong< ::uDelegate*> Application__Terminating;

Application__uType* Application__typeof()
{
    static ::uStaticStrong<Application__uType*> type;
    if (type != NULL) return type;

    type = (Application__uType*)::uAllocClassType(sizeof(Application__uType), "Uno.Platform2.Application");

    type->SetFields(1,
        ::uNewField("DelayedUri", &Application__DelayedUri, 0, ::app::Uno::String__typeof()));

    type->SetFunctions(45,
        ::uNewFunctionVoid("_Start", Application___Start, 0, true),
        ::uNewFunctionVoid("add_EnteringBackground", Application__add_EnteringBackground, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("add_EnteringForeground", Application__add_EnteringForeground, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("add_EnteringInteractive", Application__add_EnteringInteractive, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("add_ExitedInteractive", Application__add_ExitedInteractive, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("add_KeyDown", Application__add_KeyDown, 0, true, ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof()),
        ::uNewFunctionVoid("add_KeyUp", Application__add_KeyUp, 0, true, ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof()),
        ::uNewFunctionVoid("add_ReceivedLowMemoryWarning", Application__add_ReceivedLowMemoryWarning, 0, true, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_ReceivedURI", Application__add_ReceivedURI, 0, true, ::app::Uno::EventHandler__string__typeof()),
        ::uNewFunctionVoid("add_Started", Application__add_Started, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("add_Terminating", Application__add_Terminating, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("DidEnterBackground", Application__DidEnterBackground, 0, true),
        ::uNewFunctionVoid("DidEnterForeground", Application__DidEnterForeground, 0, true),
        ::uNewFunctionVoid("DidEnterInteractive", Application__DidEnterInteractive, 0, true),
        ::uNewFunctionVoid("DidExitInteractive", Application__DidExitInteractive, 0, true),
        ::uNewFunctionVoid("DidStart", Application__DidStart, 0, true),
        ::uNewFunctionVoid("DispatchDelayedUri", Application__DispatchDelayedUri, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("EnterBackground", Application__EnterBackground, 0, true),
        ::uNewFunctionVoid("EnterForeground", Application__EnterForeground, 0, true),
        ::uNewFunctionVoid("EnterInteractive", Application__EnterInteractive, 0, true),
        ::uNewFunctionVoid("ExitInteractive", Application__ExitInteractive, 0, true),
        ::uNewFunction("get_RootView", Application__get_RootView, 0, true, ::app::Uno::Platform::ViewNativeHandle__typeof()),
        ::uNewFunction("get_State", Application__get_State, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunction("GetRootView", Application__GetRootView, 0, true, ::app::Uno::Platform::ViewNativeHandle__typeof()),
        ::uNewFunction("OnKeyDown", Application__OnKeyDown, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Platform::Key__typeof(), ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunction("OnKeyUp", Application__OnKeyUp, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Platform::Key__typeof(), ::app::Uno::Platform::EventModifiers__typeof()),
        ::uNewFunctionVoid("OnReceivedLowMemoryWarning", Application__OnReceivedLowMemoryWarning, 0, true),
        ::uNewFunctionVoid("OnReceivedURI", Application__OnReceivedURI, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("remove_EnteringBackground", Application__remove_EnteringBackground, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("remove_EnteringForeground", Application__remove_EnteringForeground, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("remove_EnteringInteractive", Application__remove_EnteringInteractive, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("remove_ExitedInteractive", Application__remove_ExitedInteractive, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("remove_KeyDown", Application__remove_KeyDown, 0, true, ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof()),
        ::uNewFunctionVoid("remove_KeyUp", Application__remove_KeyUp, 0, true, ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof()),
        ::uNewFunctionVoid("remove_ReceivedLowMemoryWarning", Application__remove_ReceivedLowMemoryWarning, 0, true, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_ReceivedURI", Application__remove_ReceivedURI, 0, true, ::app::Uno::EventHandler__string__typeof()),
        ::uNewFunctionVoid("remove_Started", Application__remove_Started, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("remove_Terminating", Application__remove_Terminating, 0, true, ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof()),
        ::uNewFunctionVoid("ResetContextState", Application__ResetContextState, 0, true),
        ::uNewFunctionVoid("set_RootView", Application__set_RootView, 0, true, ::app::Uno::Platform::ViewNativeHandle__typeof()),
        ::uNewFunctionVoid("set_State", Application__set_State, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("SetRootView", Application__SetRootView, 0, true, ::app::Uno::Platform::ViewNativeHandle__typeof()),
        ::uNewFunctionVoid("Start", Application__Start, 0, true),
        ::uNewFunctionVoid("Terminate", Application__Terminate, 0, true),
        ::uNewFunctionVoid("WillTerminate", Application__WillTerminate, 0, true));

    ::uRegisterType(type);
    return type;
}

void Application___Start(::uStatic* __this)
{
    ::uStartApp();
}

void Application___TypeInit(::uStatic* __this)
{
    Application__DelayedUri = ::uGetConstString("");
}

void Application__add_EnteringBackground(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringBackground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__EnteringBackground, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_EnteringForeground(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringForeground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__EnteringForeground, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_EnteringInteractive(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringInteractive = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__EnteringInteractive, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_ExitedInteractive(::uStatic* __this, ::uDelegate* value)
{
    Application__ExitedInteractive = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__ExitedInteractive, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_KeyDown(::uStatic* __this, ::uDelegate* value)
{
    Application__KeyDown = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__KeyDown, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Application__add_KeyUp(::uStatic* __this, ::uDelegate* value)
{
    Application__KeyUp = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__KeyUp, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Application__add_ReceivedLowMemoryWarning(::uStatic* __this, ::uDelegate* value)
{
    Application__ReceivedLowMemoryWarning = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__ReceivedLowMemoryWarning, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Application__add_ReceivedURI(::uStatic* __this, ::uDelegate* value)
{
    Application__ReceivedURI = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__ReceivedURI, (::uDelegate*)value), ::app::Uno::EventHandler__string__typeof());
}

void Application__add_Started(::uStatic* __this, ::uDelegate* value)
{
    Application__Started = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__Started, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__add_Terminating(::uStatic* __this, ::uDelegate* value)
{
    Application__Terminating = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)Application__Terminating, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__DidEnterBackground(::uStatic* __this)
{
}

void Application__DidEnterForeground(::uStatic* __this)
{
}

void Application__DidEnterInteractive(::uStatic* __this)
{
}

void Application__DidExitInteractive(::uStatic* __this)
{
}

void Application__DidStart(::uStatic* __this)
{
}

void Application__DispatchDelayedUri(::uStatic* __this, int state)
{
    ::uDelegate* handler = Application__ReceivedURI;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::uString*>(NULL, Application__DelayedUri);
    }

    Application__DelayedUri = ::uGetConstString("");
    Application__remove_EnteringForeground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)Application__DispatchDelayedUri));
}

void Application__EnterBackground(::uStatic* __this)
{
    ::uArray* array_143;
    ::uArray* array_144;
    int assert_131;
    int assert_132;

    switch (Application__get_State(NULL))
    {
        case -1:
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("EnterBackground() called on terminating application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 189);
            return;
        }
        case 0:
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("EnterBackground() called on uninitialized application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 193);
            return;
        }
        case 1:
        {
            return;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            Application__ExitInteractive(NULL);
            break;
        }
    }

    assert_131 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_131 == 2, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 207, (array_143 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_131), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 2), array_143));
    Application__set_State(NULL, 1);
    Application__DidEnterBackground(NULL);
    ::uDelegate* handler = Application__EnteringBackground;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_132 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_132 == 1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 216, (array_144 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_132), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 1), array_144));
}

void Application__EnterForeground(::uStatic* __this)
{
    ::uArray* array_137;
    ::uArray* array_138;
    int assert_125;
    int assert_126;

    switch (Application__get_State(NULL))
    {
        case -1:
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("EnterForeground() called on terminating application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 80);
            return;
        }
        case 0:
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("EnterForeground() called on uninitialized application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 84);
            return;
        }
        case 1:
        {
            break;
        }
        case 2:
        case 3:
        {
            return;
        }
    }

    assert_125 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_125 == 1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 96, (array_137 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_125), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 1), array_137));
    Application__set_State(NULL, 2);
    Application__DidEnterForeground(NULL);
    ::uDelegate* handler = Application__EnteringForeground;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_126 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_126 == 2, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 105, (array_138 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_126), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 2), array_138));
}

void Application__EnterInteractive(::uStatic* __this)
{
    ::uArray* array_139;
    ::uArray* array_140;
    int assert_127;
    int assert_128;
    {
        GLHelper::SwapBackToBackgroundSurface();
    }

    switch (Application__get_State(NULL))
    {
        case -1:
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("EnterInteractive() called on terminating application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 117);
            return;
        }
        case 0:
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("EnterInteractive() called on uninitialized application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 121);
            return;
        }
        case 1:
        {
            Application__EnterForeground(NULL);
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            return;
        }
    }

    assert_127 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_127 == 2, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 135, (array_139 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_127), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 2), array_139));
    Application__set_State(NULL, 3);
    Application__DidEnterInteractive(NULL);
    ::uDelegate* handler = Application__EnteringInteractive;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_128 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_128 == 3, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Interactive"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 144, (array_140 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_128), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 3), array_140));
}

void Application__ExitInteractive(::uStatic* __this)
{
    ::uArray* array_141;
    ::uArray* array_142;
    int assert_129;
    int assert_130;
    {
        GLHelper::SwapBackToBackgroundSurface();
    }

    switch (Application__get_State(NULL))
    {
        case -1:
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("ExitInteractive() called on terminating application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 156);
            return;
        }
        case 0:
        {
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("ExitInteractive() called on uninitialized application"), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 160);
            return;
        }
        case 1:
        case 2:
        {
            return;
        }
        case 3:
        {
            break;
        }
    }

    assert_129 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_129 == 3, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Interactive"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 171, (array_141 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_129), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 3), array_141));
    Application__set_State(NULL, 2);
    Application__DidExitInteractive(NULL);
    ::uDelegate* handler = Application__ExitedInteractive;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_130 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_130 == 2, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Foreground"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 180, (array_142 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_130), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 2), array_142));
}

uPlatform2::ViewNativeHandle Application__get_RootView(::uStatic* __this)
{
    return Application__GetRootView(NULL);
}

int Application__get_State(::uStatic* __this)
{
    return Application___State;
}

uPlatform2::ViewNativeHandle Application__GetRootView(::uStatic* __this)
{
    return uPlatform2::Application::GetRootView();
}

bool Application__OnKeyDown(::uStatic* __this, int key, int modifiers)
{
    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, modifiers);
    ::uDelegate* handler = Application__KeyDown;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>(NULL, args);
    }

    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

bool Application__OnKeyUp(::uStatic* __this, int key, int modifiers)
{
    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, modifiers);
    ::uDelegate* handler = Application__KeyUp;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>(NULL, args);
    }

    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

void Application__OnReceivedLowMemoryWarning(::uStatic* __this)
{
    ::uDelegate* handler = Application__ReceivedLowMemoryWarning;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>(NULL, ::app::Uno::EventArgs__Empty);
    }
}

void Application__OnReceivedURI(::uStatic* __this, ::uString* Uri)
{
    if ((Application__get_State(NULL) == 2) || (Application__get_State(NULL) == 3))
    {
        ::uDelegate* handler = Application__ReceivedURI;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
        {
            ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::uString*>(NULL, Uri);
        }
    }
    else
    {
        Application__DelayedUri = Uri;
        Application__add_EnteringForeground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)Application__DispatchDelayedUri));
    }
}

void Application__remove_EnteringBackground(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringBackground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__EnteringBackground, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_EnteringForeground(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringForeground = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__EnteringForeground, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_EnteringInteractive(::uStatic* __this, ::uDelegate* value)
{
    Application__EnteringInteractive = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__EnteringInteractive, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_ExitedInteractive(::uStatic* __this, ::uDelegate* value)
{
    Application__ExitedInteractive = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__ExitedInteractive, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_KeyDown(::uStatic* __this, ::uDelegate* value)
{
    Application__KeyDown = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__KeyDown, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Application__remove_KeyUp(::uStatic* __this, ::uDelegate* value)
{
    Application__KeyUp = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__KeyUp, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof());
}

void Application__remove_ReceivedLowMemoryWarning(::uStatic* __this, ::uDelegate* value)
{
    Application__ReceivedLowMemoryWarning = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__ReceivedLowMemoryWarning, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Application__remove_ReceivedURI(::uStatic* __this, ::uDelegate* value)
{
    Application__ReceivedURI = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__ReceivedURI, (::uDelegate*)value), ::app::Uno::EventHandler__string__typeof());
}

void Application__remove_Started(::uStatic* __this, ::uDelegate* value)
{
    Application__Started = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__Started, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__remove_Terminating(::uStatic* __this, ::uDelegate* value)
{
    Application__Terminating = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)Application__Terminating, (::uDelegate*)value), ::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof());
}

void Application__ResetContextState(::uStatic* __this)
{
    if ((::app::Uno::Application__get_Current(NULL) != NULL) && (::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext() != NULL))
    {
        ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->ForceResetState();
    }
}

void Application__set_RootView(::uStatic* __this, uPlatform2::ViewNativeHandle value)
{
    Application__SetRootView(NULL, value);
}

void Application__set_State(::uStatic* __this, int value)
{
    Application___State = value;
}

void Application__SetRootView(::uStatic* __this, uPlatform2::ViewNativeHandle viewHandle_)
{
    uPlatform2::Application::SetRootView(viewHandle_);
}

void Application__Start(::uStatic* __this)
{
    ::uArray* array_135;
    ::uArray* array_136;
    int assert_123;
    int assert_124;

    switch (Application__get_State(NULL))
    {
        case 1:
        {
            Application__Terminate(NULL);
            break;
        }
        case 0:
        case -1:
        {
            break;
        }
    }

    assert_123 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_123 == 0, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Uninitialized"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 56, (array_135 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_123), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 0), array_135));
    Application___Start(NULL);
    Application__set_State(NULL, 1);
    Application__DidStart(NULL);
    ::uDelegate* handler = Application__Started;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_124 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_124 == 1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 68, (array_136 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_124), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 1), array_136));
}

void Application__Terminate(::uStatic* __this)
{
    ::uArray* array_145;
    ::uArray* array_146;
    int assert_133;
    int assert_134;

    switch (Application__get_State(NULL))
    {
        case -1:
        case 0:
        {
            return;
        }
        case 1:
        {
            break;
        }
        case 2:
        case 3:
        {
            Application__EnterBackground(NULL);
            break;
        }
    }

    assert_133 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_133 == 1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Background"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 237, (array_145 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_133), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), 1), array_145));
    Application__set_State(NULL, -1);
    Application__WillTerminate(NULL);
    ::uDelegate* handler = Application__Terminating;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< int>(Application__get_State(NULL));
    }

    assert_134 = Application__get_State(NULL);
    ::app::Uno::Diagnostics::Debug__Assert(NULL, assert_134 == -1, ::uGetConstString("Uno.Platform2.Application.State == Uno.Platform2.ApplicationState.Terminating"), ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\UnoCore\\0.13.2\\Source\\Uno\\Platform2\\$.uno"), 246, (array_146 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), assert_134), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Platform2::ApplicationState__typeof(), -1), array_146));
    Application__set_State(NULL, 0);
}

void Application__WillTerminate(::uStatic* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ApplicationState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform2.ApplicationState", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ApplicationStateTransitionHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Platform2.ApplicationStateTransitionHandler", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Platform2::ApplicationState__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Display__uType* Display__typeof()
{
    static ::uStaticStrong<Display__uType*> type;
    if (type != NULL) return type;

    type = (Display__uType*)::uAllocClassType(sizeof(Display__uType), "Uno.Platform2.Display", false, 0, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))Display__Finalize;

    type->SetStrongRefs(
        "_tick", offsetof(Display, _tick),
        "FrameChanged", offsetof(Display, FrameChanged));

    type->SetFields(3,
        ::uNewField("_frame", NULL, offsetof(Display, _frame), ::app::Uno::Rect__typeof()),
        ::uNewField("_framesPerSecond", NULL, offsetof(Display, _framesPerSecond), ::app::Uno::UInt__typeof()),
        ::uNewField("_private", NULL, offsetof(Display, _private), ::app::Uno::Platform2::Display_PrivateState__typeof()));

    type->SetFunctions(21,
        ::uNewFunctionVoid("add__tick", Display__add__tick, 0, false, ::app::Uno::EventHandler__Uno_Platform_TimerEventArgs__typeof()),
        ::uNewFunctionVoid("add_FrameChanged", Display__add_FrameChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_Tick", Display__add_Tick, 0, false, ::app::Uno::EventHandler__Uno_Platform_TimerEventArgs__typeof()),
        ::uNewFunctionVoid("Destroy", Display__Destroy, 0, false),
        ::uNewFunctionVoid("DisableTickNotifications", Display__DisableTickNotifications, 0, false),
        ::uNewFunctionVoid("EnableTickNotifications", Display__EnableTickNotifications, 0, false),
        ::uNewFunction("get_Density", Display__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Frame", Display__get_Frame, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("get_FramesPerSecond", Display__get_FramesPerSecond, 0, false, ::app::Uno::UInt__typeof()),
        ::uNewFunction("get_MainDisplay", Display__get_MainDisplay, 0, true, Display__typeof()),
        ::uNewFunction("GetMainDisplay", Display__GetMainDisplay, 0, true, Display__typeof()),
        ::uNewFunctionVoid("Initialize", Display__Initialize, 0, false),
        ::uNewFunctionVoid("OnFrameChanged", Display__OnFrameChanged, 0, false),
        ::uNewFunctionVoid("OnTick", Display__OnTick, 0, false, ::app::Uno::Platform::TimerEventArgs__typeof()),
        ::uNewFunctionVoid("remove__tick", Display__remove__tick, 0, false, ::app::Uno::EventHandler__Uno_Platform_TimerEventArgs__typeof()),
        ::uNewFunctionVoid("remove_FrameChanged", Display__remove_FrameChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_Tick", Display__remove_Tick, 0, false, ::app::Uno::EventHandler__Uno_Platform_TimerEventArgs__typeof()),
        ::uNewFunctionVoid("set_Density", Display__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Frame", Display__set_Frame, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("set_FramesPerSecond", Display__set_FramesPerSecond, 0, false, ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("SetFramesPerSecond", Display__SetFramesPerSecond, 0, false, ::app::Uno::UInt__typeof()));

    ::uRegisterType(type);
    return type;
}

void Display__Finalize(Display* __this)
{
    __this->Destroy();
}

void Display___ObjInit(Display* __this)
{
    __this->Density(1.0f);
    __this->Initialize();
}

void Display__add__tick(Display* __this, ::uDelegate* value)
{
    __this->_tick = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->_tick, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_TimerEventArgs__typeof());
}

void Display__add_FrameChanged(Display* __this, ::uDelegate* value)
{
    __this->FrameChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->FrameChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Display__add_Tick(Display* __this, ::uDelegate* value)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_tick, NULL))
    {
        __this->EnableTickNotifications();
    }

    __this->add__tick(value);
}

void Display__Destroy(Display* __this)
{
    __this->_private.Destroy(__this);
}

void Display__DisableTickNotifications(Display* __this)
{
    __this->_private.DisableTickNotifications(__this);
}

void Display__EnableTickNotifications(Display* __this)
{
    __this->_private.EnableTickNotifications(__this);
}

float Display__get_Density(Display* __this)
{
    return __this->_Density;
}

::app::Uno::Rect Display__get_Frame(Display* __this)
{
    return __this->_frame;
}

::uUInt Display__get_FramesPerSecond(Display* __this)
{
    return __this->_framesPerSecond;
}

Display* Display__get_MainDisplay(::uStatic* __this)
{
    return Display__GetMainDisplay(NULL);
}

Display* Display__GetMainDisplay(::uStatic* __this)
{
    static Display* mainDisplay;
    if (uEnterCriticalIfNull(&mainDisplay))
    {
        mainDisplay = ::app::Uno::Platform2::Display__New_1(NULL);
        uRetainObject(mainDisplay);
    
        mainDisplay->_private.InitializeAsMainDisplay(mainDisplay);
    
        uExitCritical();
    }
    
    return mainDisplay;
}

void Display__Initialize(Display* __this)
{
    __this->_private.Initialize(__this);
}

Display* Display__New_1(::uStatic* __this)
{
    Display* inst = (Display*)::uAllocObject(sizeof(Display), Display__typeof());
    inst->_ObjInit();
    return inst;
}

void Display__OnFrameChanged(Display* __this)
{
    ::uDelegate* handler = __this->FrameChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Display__OnTick(Display* __this, ::app::Uno::Platform::TimerEventArgs* args)
{
    ::uDelegate* handler = __this->_tick;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::TimerEventArgs*>((::uObject*)__this, args);
    }
}

void Display__remove__tick(Display* __this, ::uDelegate* value)
{
    __this->_tick = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->_tick, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_TimerEventArgs__typeof());
}

void Display__remove_FrameChanged(Display* __this, ::uDelegate* value)
{
    __this->FrameChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->FrameChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Display__remove_Tick(Display* __this, ::uDelegate* value)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_tick, NULL))
    {
        return;
    }

    __this->remove__tick(value);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_tick, NULL))
    {
        __this->DisableTickNotifications();
    }
}

void Display__set_Density(Display* __this, float value)
{
    __this->_Density = value;
}

void Display__set_Frame(Display* __this, ::app::Uno::Rect value)
{
    if (::app::Uno::Rect__Equals_2(NULL, __this->_frame, value))
    {
        return;
    }

    __this->_frame = value;
    __this->OnFrameChanged();
}

void Display__set_FramesPerSecond(Display* __this, ::uUInt value)
{
    if (__this->_framesPerSecond == value)
    {
        return;
    }

    __this->_framesPerSecond = value;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_tick, NULL))
    {
        __this->SetFramesPerSecond(value);
    }
}

void Display__SetFramesPerSecond(Display* __this, ::uUInt value_)
{
    __this->_private.SetFramesPerSecond(__this, value_);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Display_PrivateState__uType* Display_PrivateState__typeof()
{
    static ::uStaticStrong<Display_PrivateState__uType*> type;
    if (type != NULL) return type;

    type = (Display_PrivateState__uType*)::uAllocStructType(sizeof(Display_PrivateState__uType), "Uno.Platform2.Display.PrivateState", sizeof(uPlatform2::Display), 0, 0, 0);

    return type;
}

}}}
