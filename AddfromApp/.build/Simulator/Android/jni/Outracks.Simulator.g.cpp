// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Outracks_Simulator_Client_Uno_bundle.h>
#include <Android.android.os.Build.h>
#include <Android.java.lang.String.h>
#include <Fuse.App.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicStyle.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.Preview.ISelection.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Fuse.Theme.h>
#include <Fuse.Time.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Outracks.Simulator.AggregateConnectError.h>
#include <Outracks.Simulator.Application.h>
#include <Outracks.Simulator.Apply-1.h>
#include <Outracks.Simulator.ApplyFirst-2.h>
#include <Outracks.Simulator.ApplySecond-2.h>
#include <Outracks.Simulator.ArrayStream.h>
#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.Optional.h>
#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Outracks.Simulator.BytecodeCache.h>
#include <Outracks.Simulator.ChangeIp.h>
#include <Outracks.Simulator.Closure.h>
#include <Outracks.Simulator.ConcurrentQueue-1.h>
#include <Outracks.Simulator.Connected.h>
#include <Outracks.Simulator.Connecting.h>
#include <Outracks.Simulator.ConnectingToHost.h>
#include <Outracks.Simulator.ConnectingToProxy.h>
#include <Outracks.Simulator.ConnectionLost.h>
#include <Outracks.Simulator.ConnectToSimulator.h>
#include <Outracks.Simulator.Context.h>
#include <Outracks.Simulator.DeviceInfo.h>
#include <Outracks.Simulator.DialogButton.h>
#include <Outracks.Simulator.DummyApplication.h>
#include <Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure.h>
#include <Outracks.Simulator.EnumerableHitTestExtension.h>
#include <Outracks.Simulator.Exceptions.h>
#include <Outracks.Simulator.FailedToConnect.h>
#include <Outracks.Simulator.FailedToConnectToEndPoint.h>
#include <Outracks.Simulator.FailedToConnectToProxy.h>
#include <Outracks.Simulator.FailedToConnectToSimulator.h>
#include <Outracks.Simulator.FakeApp.h>
#include <Outracks.Simulator.Faulted.h>
#include <Outracks.Simulator.Flasher.h>
#include <Outracks.Simulator.Forget-2.h>
#include <Outracks.Simulator.Forget-3.h>
#include <Outracks.Simulator.ForgetAction-2.h>
#include <Outracks.Simulator.GetSimulatorEndpoint.h>
#include <Outracks.Simulator.GoOffline.h>
#include <Outracks.Simulator.Idle.h>
#include <Outracks.Simulator.IEquatable-1.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.IndentString.h>
#include <Outracks.Simulator.InputMode.h>
#include <Outracks.Simulator.InvalidDataException.h>
#include <Outracks.Simulator.ISimulatorClient.h>
#include <Outracks.Simulator.List.h>
#include <Outracks.Simulator.LoadingScreen.h>
#include <Outracks.Simulator.ModalDialog.h>
#include <Outracks.Simulator.NonExhaustiveMatch.h>
#include <Outracks.Simulator.OfflineSimulatorClient.h>
#include <Outracks.Simulator.Protocol.DebugLog.h>
#include <Outracks.Simulator.Protocol.Error.h>
#include <Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <Outracks.Simulator.Protocol.Execute.h>
#include <Outracks.Simulator.Protocol.MessageFromClient.h>
#include <Outracks.Simulator.Protocol.MessageToClient.h>
#include <Outracks.Simulator.Protocol.RegisterName.h>
#include <Outracks.Simulator.Protocol.Reify.h>
#include <Outracks.Simulator.Protocol.SetSelection.h>
#include <Outracks.Simulator.Protocol.UnhandledException.h>
#include <Outracks.Simulator.ProxyClient.h>
#include <Outracks.Simulator.Reifying.h>
#include <Outracks.Simulator.Running.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Outracks.Simulator.Runtime.ObjectTagRegistry.h>
#include <Outracks.Simulator.Runtime.Selection.h>
#include <Outracks.Simulator.Runtime.VirtualMachine.h>
#include <Outracks.Simulator.Serialization.h>
#include <Outracks.Simulator.ShowingModalDialog.h>
#include <Outracks.Simulator.ShowingPrompt.h>
#include <Outracks.Simulator.SimulatorClient.h>
#include <Outracks.Simulator.State.h>
#include <Outracks.Simulator.StringSplitting.h>
#include <Outracks.Simulator.Task-1.h>
#include <Outracks.Simulator.Tasks.h>
#include <Outracks.Simulator.TaskThread-1.h>
#include <Outracks.Simulator.Uninitialized.h>
#include <Outracks.Simulator.UserAppState.h>
#include <Outracks.Simulator.WaitForFirstResult-1.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Color.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.EndOfStreamException.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[40];
static uType* TYPES[156];

namespace g{
namespace Outracks{
namespace Simulator{

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1214)
// ---------------------------------------------------------------------------

// internal static class AggregateConnectError :1214
// {
uClassType* AggregateConnectError_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.AggregateConnectError", options);
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("    ");
    ::STRINGS[2] = uString::Const("\n"
        "");
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    return type;
}

// public static string ToIndentedLines(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :1216
void AggregateConnectError__ToIndentedLines_fn(uObject* innerExceptions, uString** __retval)
{
    *__retval = AggregateConnectError::ToIndentedLines(innerExceptions);
}

// public static string ToIndentedLines(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :1216
uString* AggregateConnectError::ToIndentedLines(uObject* innerExceptions)
{
    ::g::Uno::Exception* ret2;
    uString* s = ::STRINGS[0/*""*/];

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(innerExceptions), ::TYPES[65/*Uno.Collections.IEnumerable<Uno.Exception>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::Exception* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[0/*Uno.Collections.IEnumerator<Uno.Exception>*/]), &ret2), ret2);
        s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"    "*/], uPtr(e)->Message()), ::STRINGS[2/*"\n"*/]));
    }

    return s;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(324)
// --------------------------------------------------------------------------

// public class Application :324
// {
Application_type* Application_typeof()
{
    static uSStrong<Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Application);
    options.TypeSize = sizeof(Application_type);
    type = (Application_type*)uClassType::New("Outracks.Simulator.Application", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_OnUpdate = (void(*)(::g::Fuse::AppBase*))Application__OnUpdate_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))Application__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))Application__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))Application__OnPointerReleased_fn;
    type->interface0.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))Application__OnPointerWheelMoved_fn;
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[3] = ::g::Fuse::App_typeof();
    ::TYPES[4] = ::g::Fuse::AppBase_typeof();
    ::TYPES[5] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    ::TYPES[6] = ::g::Outracks::Simulator::FakeApp_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Outracks::Simulator::UserAppState_typeof();
    ::TYPES[9] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[10] = ::g::Fuse::Input::IPointerEventResponder_typeof();
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[13] = ::g::Fuse::UnhandledExceptionArgs_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(Application_type, interface0));
    type->SetFields(16,
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(::g::Outracks::Simulator::Application, _defaultPointerEventResponder), 0,
        ::g::Outracks::Simulator::State_typeof(), offsetof(::g::Outracks::Simulator::Application, _state), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)Application__New1_fn, 0, true, Application_typeof(), 2, ::g::Uno::Net::IPEndPoint_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("OnPointerMoved", NULL, (void*)Application__OnPointerMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerMovedArgs_typeof()),
        new uFunction("OnPointerPressed", NULL, (void*)Application__OnPointerPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerPressedArgs_typeof()),
        new uFunction("OnPointerReleased", NULL, (void*)Application__OnPointerReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerReleasedArgs_typeof()),
        new uFunction("OnPointerWheelMoved", NULL, (void*)Application__OnPointerWheelMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerWheelMovedArgs_typeof()),
        new uFunction("get_Reflection", NULL, (void*)Application__get_Reflection_fn, 0, false, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), 0),
        new uFunction("set_Reflection", NULL, (void*)Application__set_Reflection_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Runtime::IReflection_typeof()));
    return type;
}

// public Application(Uno.Net.IPEndPoint[] proxyEndpoints, string project) :335
void Application__ctor_3_fn(Application* __this, uArray* proxyEndpoints, uString* project)
{
    __this->ctor_3(proxyEndpoints, project);
}

// public Application New(Uno.Net.IPEndPoint[] proxyEndpoints, string project) :335
void Application__New1_fn(uArray* proxyEndpoints, uString* project, Application** __retval)
{
    *__retval = Application::New1(proxyEndpoints, project);
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) :354
void Application__OnPointerMoved_fn(Application* __this, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) :347
void Application__OnPointerPressed_fn(Application* __this, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :361
void Application__OnPointerReleased_fn(Application* __this, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) :368
void Application__OnPointerWheelMoved_fn(Application* __this, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    __this->OnPointerWheelMoved(args);
}

// private void OnUnhandledException(object sender, Fuse.UnhandledExceptionArgs args) :375
void Application__OnUnhandledException1_fn(Application* __this, uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args)
{
    __this->OnUnhandledException1(sender, args);
}

// protected override sealed void OnUpdate() :381
void Application__OnUpdate_fn(Application* __this)
{
    __this->SetState(uPtr(__this->_state)->OnUpdate());
    ::g::Fuse::AppBase__OnUpdate_fn(__this);
}

// public Outracks.Simulator.Runtime.IReflection get_Reflection() :331
void Application__get_Reflection_fn(Application* __this, uObject** __retval)
{
    *__retval = __this->Reflection();
}

// public void set_Reflection(Outracks.Simulator.Runtime.IReflection value) :332
void Application__set_Reflection_fn(Application* __this, uObject* value)
{
    __this->Reflection(value);
}

// private void SetState(Outracks.Simulator.State nextState) :387
void Application__SetState_fn(Application* __this, ::g::Outracks::Simulator::State* nextState)
{
    __this->SetState(nextState);
}

// public Application(Uno.Net.IPEndPoint[] proxyEndpoints, string project) [instance] :335
void Application::ctor_3(uArray* proxyEndpoints, uString* project)
{
    _state = ::g::Outracks::Simulator::Uninitialized::New1();
    ctor_2();
    ::g::Outracks::Simulator::FakeApp* fakeApp = ::g::Outracks::Simulator::FakeApp::New2(this);
    ::g::Outracks::Simulator::Context::Initialize(fakeApp, proxyEndpoints, project);
    add_UnhandledException(uDelegate::New(::TYPES[5/*Fuse.UnhandledExceptionHandler*/], (void*)Application__OnUnhandledException1_fn, this));
    fakeApp->RootNode(::g::Fuse::Controls::Panel::New1());
    ::g::Outracks::Simulator::UserAppState::Default(::g::Outracks::Simulator::UserAppState::Save(fakeApp));
    _defaultPointerEventResponder = ::g::Fuse::Input::Pointer::EventResponder();
    ::g::Fuse::Input::Pointer::EventResponder((uObject*)this);
    RootNode(fakeApp);
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) [instance] :354
void Application::OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args)
{
    ::g::Fuse::Input::IPointerEventResponder::OnPointerMoved(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[10/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) [instance] :347
void Application::OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args)
{
    SetState(uPtr(_state)->OnPointerPressed(args));

    if (!uPtr(args)->IsHandled())
        ::g::Fuse::Input::IPointerEventResponder::OnPointerPressed(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[10/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) [instance] :361
void Application::OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args)
{
    ::g::Fuse::Input::IPointerEventResponder::OnPointerReleased(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[10/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) [instance] :368
void Application::OnPointerWheelMoved(::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    ::g::Fuse::Input::IPointerEventResponder::OnPointerWheelMoved(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[10/*Fuse.Input.IPointerEventResponder*/]), args);
}

// private void OnUnhandledException(object sender, Fuse.UnhandledExceptionArgs args) [instance] :375
void Application::OnUnhandledException1(uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args)
{
    uPtr(args)->IsHandled(true);
    SetState(uPtr(_state)->OnException(args->Exception()));
}

// public Outracks.Simulator.Runtime.IReflection get_Reflection() [instance] :331
uObject* Application::Reflection()
{
    return ::g::Outracks::Simulator::Context::Reflection();
}

// public void set_Reflection(Outracks.Simulator.Runtime.IReflection value) [instance] :332
void Application::Reflection(uObject* value)
{
    ::g::Outracks::Simulator::Context::Reflection(value);
}

// private void SetState(Outracks.Simulator.State nextState) [instance] :387
void Application::SetState(::g::Outracks::Simulator::State* nextState)
{
    if (nextState != _state)
    {
        uPtr(_state)->OnLeaveState();
        _state = nextState;
        SetState(uPtr(_state)->OnEnterState());
    }
}

// public Application New(Uno.Net.IPEndPoint[] proxyEndpoints, string project) [static] :335
Application* Application::New1(uArray* proxyEndpoints, uString* project)
{
    Application* obj1 = (Application*)uNew(Application_typeof());
    obj1->ctor_3(proxyEndpoints, project);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(83)
// ----------------------------------------------------------------------------------

// internal sealed class Apply<TArg1> :83
// {
uType* Apply_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Apply);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Apply`1", options);
    ::TYPES[15] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::TYPES[15/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Outracks::Simulator::Apply, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Apply(Uno.Action<TArg1> action, TArg1 arg1) :88
void Apply__ctor__fn(Apply* __this, uDelegate* action, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_action = action;
    __this->_arg1() = arg1;
}

// public void Execute() :94
void Apply__Execute_fn(Apply* __this)
{
    __this->Execute();
}

// public Apply New(Uno.Action<TArg1> action, TArg1 arg1) :88
void Apply__New1_fn(uType* __type, uDelegate* action, void* arg1, Apply** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    Apply* obj1 = (Apply*)uNew(__type);
    Apply__ctor__fn(obj1, action, arg1);
    return *__retval = obj1, void();
}

// public void Execute() [instance] :94
void Apply::Execute()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<TArg1>*/),
        __type->T(0),
    };
    uPtr(_action)->InvokeVoid(_arg1());
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(100)
// -----------------------------------------------------------------------------------

// internal sealed class ApplyFirst<TArg1, TArg2> :100
// {
uType* ApplyFirst_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ApplyFirst);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ApplyFirst`2", options);
    ::TYPES[16] = ::g::Uno::Action2_typeof();
    type->SetPrecalc(
        ::TYPES[16/*Uno.Action`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Outracks::Simulator::ApplyFirst, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public ApplyFirst(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :104
void ApplyFirst__ctor__fn(ApplyFirst* __this, uDelegate* action, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_action = action;
    __this->_arg1() = arg1;
}

// public void Execute(TArg2 arg2) :110
void ApplyFirst__Execute_fn(ApplyFirst* __this, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Action<TArg1, TArg2>*/),
        __this->__type->T(0),
    };
    uPtr(__this->_action)->Invoke(2, (void*)__this->_arg1(), arg2);
}

// public ApplyFirst New(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :104
void ApplyFirst__New1_fn(uType* __type, uDelegate* action, void* arg1, ApplyFirst** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    ApplyFirst* obj1 = (ApplyFirst*)uNew(__type);
    ApplyFirst__ctor__fn(obj1, action, arg1);
    return *__retval = obj1, void();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(116)
// -----------------------------------------------------------------------------------

// internal sealed class ApplySecond<TArg1, TArg2> :116
// {
uType* ApplySecond_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ApplySecond);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ApplySecond`2", options);
    ::TYPES[16] = ::g::Uno::Action2_typeof();
    type->SetPrecalc(
        ::TYPES[16/*Uno.Action`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Outracks::Simulator::ApplySecond, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public ApplySecond(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :120
void ApplySecond__ctor__fn(ApplySecond* __this, uDelegate* action, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    __this->_action = action;
    __this->_arg2() = arg2;
}

// public void Execute(TArg1 arg1) :126
void ApplySecond__Execute_fn(ApplySecond* __this, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Action<TArg1, TArg2>*/),
        __this->__type->T(1),
    };
    uPtr(__this->_action)->Invoke(2, arg1, (void*)__this->_arg2());
}

// public ApplySecond New(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :120
void ApplySecond__New1_fn(uType* __type, uDelegate* action, void* arg2, ApplySecond** __retval)
{
    uType* __types[] = {
        __type->T(1),
    };
    ApplySecond* obj1 = (ApplySecond*)uNew(__type);
    ApplySecond__ctor__fn(obj1, action, arg2);
    return *__retval = obj1, void();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1403)
// ---------------------------------------------------------------------------

// public sealed class ArrayStream :1403
// {
::g::Uno::IO::Stream_type* ArrayStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ArrayStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Outracks.Simulator.ArrayStream", options);
    type->SetBase(::g::Uno::IO::Stream_typeof());
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanSeek_fn;
    type->fp_get_CanTimeout = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanTimeout_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))ArrayStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))ArrayStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))ArrayStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))ArrayStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    ::TYPES[17] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[18] = ::g::Uno::Long_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Array_typeof()->MakeMethod(1, ::g::Uno::Byte_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Outracks::Simulator::ArrayStream, _buffer), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Outracks::Simulator::ArrayStream, _length), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Outracks::Simulator::ArrayStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Outracks::Simulator::ArrayStream, _Position), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Capacity", NULL, (void*)ArrayStream__get_Capacity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)ArrayStream__GetBuffer_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction(".ctor", NULL, (void*)ArrayStream__New1_fn, 0, true, ArrayStream_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
    return type;
}

// public ArrayStream(byte[] buffer) :1448
void ArrayStream__ctor_1_fn(ArrayStream* __this, uArray* buffer)
{
    __this->ctor_1(buffer);
}

// public override sealed bool get_CanRead() :1412
void ArrayStream__get_CanRead_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :1422
void ArrayStream__get_CanSeek_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanTimeout() :1427
void ArrayStream__get_CanTimeout_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :1417
void ArrayStream__get_CanWrite_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public int get_Capacity() :1440
void ArrayStream__get_Capacity_fn(ArrayStream* __this, int* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :1496
void ArrayStream__EnsureCapacity_fn(ArrayStream* __this, int* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :1530
void ArrayStream__Flush_fn(ArrayStream* __this)
{
}

// public byte[] GetBuffer() :1520
void ArrayStream__GetBuffer_fn(ArrayStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :1432
void ArrayStream__get_Length_fn(ArrayStream* __this, int64_t* __retval)
{
    return *__retval = __this->_length, void();
}

// public ArrayStream New(byte[] buffer) :1448
void ArrayStream__New1_fn(uArray* buffer, ArrayStream** __retval)
{
    *__retval = ArrayStream::New1(buffer);
}

// public generated override sealed long get_Position() :1446
void ArrayStream__get_Position_fn(ArrayStream* __this, int64_t* __retval)
{
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :1446
void ArrayStream__set_Position_fn(ArrayStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :1468
void ArrayStream__Read_fn(ArrayStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    int i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :1512
void ArrayStream__ResizeTo_fn(ArrayStream* __this, int* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :1479
void ArrayStream__Seek_fn(ArrayStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    int origin_ = *origin;
    int64_t byteOffset_ = *byteOffset;

    switch (origin_)
    {
        case 0:
        {
            __this->Position(byteOffset_);
            break;
        }
        case 2:
        {
            __this->Position(__this->Length() + byteOffset_);
            break;
        }
        default:
        {
            __this->Position(__this->Position() + byteOffset_);
            break;
        }
    }

    return *__retval = __this->Position(), void();
}

// public override sealed void SetLength(long value) :1525
void ArrayStream__SetLength_fn(ArrayStream* __this, int64_t* value)
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :1454
void ArrayStream__Write_fn(ArrayStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    __this->EnsureCapacity(byteCount_);

    for (int i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public ArrayStream(byte[] buffer) [instance] :1448
void ArrayStream::ctor_1(uArray* buffer)
{
    _buffer = uArray::New(::TYPES[17/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
    _buffer = buffer;
    _length = (int64_t)uPtr(_buffer)->Length();
}

// public int get_Capacity() [instance] :1440
int ArrayStream::Capacity()
{
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :1496
void ArrayStream::EnsureCapacity(int byteCount)
{
    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :1520
uArray* ArrayStream::GetBuffer()
{
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :1512
void ArrayStream::ResizeTo(int newSize)
{
    uArray* newBuffer = uArray::New(::TYPES[17/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[20/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public ArrayStream New(byte[] buffer) [static] :1448
ArrayStream* ArrayStream::New1(uArray* buffer)
{
    ArrayStream* obj1 = (ArrayStream*)uNew(ArrayStream_typeof());
    obj1->ctor_1(buffer);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1856)
// ---------------------------------------------------------------------------

// public static class BytecodeCache :1856
// {
uClassType* BytecodeCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.BytecodeCache", options);
    ::STRINGS[3] = uString::Const("The impossible has happened");
    ::STRINGS[4] = uString::Const(".");
    ::STRINGS[5] = uString::Const("/");
    ::STRINGS[6] = uString::Const("Fusetools");
    ::STRINGS[7] = uString::Const("Fuse");
    ::TYPES[21] = ::g::Uno::IDisposable_typeof();
    ::TYPES[22] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::Protocol::Reify_typeof());
    ::TYPES[23] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Reify_typeof());
    ::TYPES[24] = uObject_typeof();
    ::TYPES[25] = ::g::Outracks::Simulator::Protocol::Reify_typeof();
    ::TYPES[26] = ::g::Uno::UInt_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[27] = ::g::Uno::String_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("TryLoad", NULL, (void*)BytecodeCache__TryLoad_fn, 0, true, ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Reify_typeof()), 0),
        new uFunction("TrySave", NULL, (void*)BytecodeCache__TrySave_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::Protocol::Reify_typeof()));
    return type;
}

// private static string get_CacheFileName() :1917
void BytecodeCache__get_CacheFileName_fn(uString** __retval)
{
    *__retval = BytecodeCache::CacheFileName();
}

// private static string get_CachePath() :1907
void BytecodeCache__get_CachePath_fn(uString** __retval)
{
    *__retval = BytecodeCache::CachePath();
}

// private static string get_FuseDataDirectory() :1912
void BytecodeCache__get_FuseDataDirectory_fn(uString** __retval)
{
    *__retval = BytecodeCache::FuseDataDirectory();
}

// private static Outracks.Simulator.Protocol.Reify Load() :1895
void BytecodeCache__Load_fn(::g::Outracks::Simulator::Protocol::Reify** __retval)
{
    *__retval = BytecodeCache::Load();
}

// private static uint get_ProjectHash() :1922
void BytecodeCache__get_ProjectHash_fn(uint32_t* __retval)
{
    *__retval = BytecodeCache::ProjectHash();
}

// private static void Save(Outracks.Simulator.Protocol.Reify reify) :1871
void BytecodeCache__Save_fn(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    BytecodeCache::Save(reify);
}

// public static Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify> TryLoad() :1883
void BytecodeCache__TryLoad_fn(::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> >* __retval)
{
    *__retval = BytecodeCache::TryLoad();
}

// public static void TrySave(Outracks.Simulator.Protocol.Reify reify) :1859
void BytecodeCache__TrySave_fn(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    BytecodeCache::TrySave(reify);
}

// private static Outracks.Simulator.Protocol.Reify Load() [static] :1895
::g::Outracks::Simulator::Protocol::Reify* BytecodeCache::Load()
{
    ::g::Uno::IO::Stream* stream = ::g::Uno::IO::File::OpenRead(BytecodeCache::CachePath());
    ::g::Uno::IO::BinaryReader* reader = ::g::Uno::IO::BinaryReader::New1(stream);

    try
    {
        return ::g::Outracks::Simulator::Protocol::Reify::Read1(reader);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[21/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[21/*Uno.IDisposable*/]));
    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"The impossi...*/]));
}

// private static void Save(Outracks.Simulator.Protocol.Reify reify) [static] :1871
void BytecodeCache::Save(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    ::g::Uno::IO::Directory::CreateDirectory(BytecodeCache::FuseDataDirectory());
    ::g::Uno::IO::Stream* stream = ::g::Uno::IO::File::Open(BytecodeCache::CachePath(), 4);
    ::g::Uno::IO::BinaryWriter* writer = ::g::Uno::IO::BinaryWriter::New1(stream);

    try
    {
        ::g::Outracks::Simulator::Protocol::Reify::Write1(reify, writer);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)writer), ::TYPES[21/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)writer), ::TYPES[21/*Uno.IDisposable*/]));
}

// public static Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify> TryLoad() [static] :1883
::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > BytecodeCache::TryLoad()
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > ret1;
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > ret2;

    try
    {
        return (::g::Outracks::Simulator::Bytecode::Optional__Some_fn(::TYPES[22/*Outracks.Simulator.Bytecode.Optional.Some<Outracks.Simulator.Protocol.Reify>*/], BytecodeCache::Load(), &ret1), ret1);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* _ = __t.Exception;
        return (::g::Outracks::Simulator::Bytecode::Optional1__op_Implicit_fn(::TYPES[23/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify>*/], ::g::Outracks::Simulator::Bytecode::Optional::None(), &ret2), ret2);
    }
}

// public static void TrySave(Outracks.Simulator.Protocol.Reify reify) [static] :1859
void BytecodeCache::TrySave(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    try
    {
        BytecodeCache::Save(reify);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* _ = __t.Exception;
    }
}

// private static string get_CacheFileName() [static] :1917
uString* BytecodeCache::CacheFileName()
{
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(uBox<uint32_t>(::TYPES[26/*uint*/], BytecodeCache::ProjectHash()), ::STRINGS[4/*"."*/]), ::g::Outracks::Simulator::Protocol::Reify::BinaryFormat());
}

// private static string get_CachePath() [static] :1907
uString* BytecodeCache::CachePath()
{
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(BytecodeCache::FuseDataDirectory(), ::STRINGS[5/*"/"*/]), BytecodeCache::CacheFileName());
}

// private static string get_FuseDataDirectory() [static] :1912
uString* BytecodeCache::FuseDataDirectory()
{
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[5/*"/"*/]), ::STRINGS[6/*"Fusetools"*/]), ::STRINGS[5/*"/"*/]), ::STRINGS[7/*"Fuse"*/]);
}

// private static uint get_ProjectHash() [static] :1922
uint32_t BytecodeCache::ProjectHash()
{
    return (uint32_t)(uPtr(::g::Outracks::Simulator::Context::Project())->GetHashCode() ^ uPtr(::g::Outracks::Simulator::Context::Project())->Length());
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(884)
// --------------------------------------------------------------------------

// internal sealed class ChangeIp :884
// {
::g::Outracks::Simulator::ShowingPrompt_type* ChangeIp_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::ShowingPrompt_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ChangeIp);
    options.TypeSize = sizeof(::g::Outracks::Simulator::ShowingPrompt_type);
    type = (::g::Outracks::Simulator::ShowingPrompt_type*)uClassType::New("Outracks.Simulator.ChangeIp", options);
    type->SetBase(::g::Outracks::Simulator::ShowingPrompt_typeof());
    type->fp_OnCancel = (void(*)(::g::Outracks::Simulator::ShowingPrompt*, ::g::Outracks::Simulator::State**))ChangeIp__OnCancel_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))ChangeIp__OnException_fn;
    type->fp_OnOk = (void(*)(::g::Outracks::Simulator::ShowingPrompt*, uString*, ::g::Outracks::Simulator::State**))ChangeIp__OnOk_fn;
    ::STRINGS[8] = uString::Const("Connect to IP");
    ::STRINGS[9] = uString::Const("\n"
        "E.g. '192.168.1.1'");
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[28] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[29] = ::g::Uno::Net::IPEndPoint_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    type->SetFields(5);
    return type;
}

// public ChangeIp([string body]) :886
void ChangeIp__ctor_2_fn(ChangeIp* __this, uString* body)
{
    __this->ctor_2(body);
}

// public ChangeIp New([string body]) :886
void ChangeIp__New1_fn(uString* body, ChangeIp** __retval)
{
    *__retval = ChangeIp::New1(body);
}

// protected override sealed Outracks.Simulator.State OnCancel() :900
void ChangeIp__OnCancel_fn(ChangeIp* __this, ::g::Outracks::Simulator::State** __retval)
{
    return *__retval = ::g::Outracks::Simulator::ConnectingToProxy::New1(), void();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :905
void ChangeIp__OnException_fn(ChangeIp* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    return *__retval = ChangeIp::New1(uPtr(e)->Message()), void();
}

// protected override sealed Outracks.Simulator.State OnOk(string input) :891
void ChangeIp__OnOk_fn(ChangeIp* __this, uString* input, ::g::Outracks::Simulator::State** __retval)
{
    uArray* endpoints = uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[28/*Uno.Net.IPEndPoint[]*/], 1, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(input), uPtr(uPtr(::g::Outracks::Simulator::Context::ProxyEndpoints())->Strong< ::g::Uno::Net::IPEndPoint*>(0))->Port()));
    return *__retval = ::g::Outracks::Simulator::ConnectingToProxy::New2(endpoints), void();
}

// public ChangeIp([string body]) [instance] :886
void ChangeIp::ctor_2(uString* body)
{
    ctor_1(::STRINGS[8/*"Connect to IP"*/], ::g::Uno::String::op_Addition2(body, ::STRINGS[9/*"\nE.g. '192...*/]));
}

// public ChangeIp New([string body]) [static] :886
ChangeIp* ChangeIp::New1(uString* body)
{
    ChangeIp* obj1 = (ChangeIp*)uNew(ChangeIp_typeof());
    obj1->ctor_2(body);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(9)
// ---------------------------------------------------------------------------------

// public static class Closure :9
// {
uClassType* Closure_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Closure", options);
    ::TYPES[30] = ::g::Uno::Action_typeof();
    ::TYPES[31] = ::g::Outracks::Simulator::Apply_typeof();
    ::TYPES[15] = ::g::Uno::Action1_typeof();
    ::TYPES[32] = ::g::Outracks::Simulator::ApplyFirst_typeof();
    ::TYPES[33] = ::g::Outracks::Simulator::ApplySecond_typeof();
    ::TYPES[16] = ::g::Uno::Action2_typeof();
    ::TYPES[34] = ::g::Outracks::Simulator::ForgetAction_typeof();
    ::TYPES[35] = ::g::Uno::Func1_typeof();
    ::TYPES[36] = ::g::Outracks::Simulator::Forget_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("Apply`1", type, (void*)Closure__Apply_fn, 0, true, ::g::Uno::Action_typeof(), 2, ::g::Uno::Action1_typeof()->MakeType(type->U(0)), type->U(0)),
        new uFunction("ApplyFirst`2", type, (void*)Closure__ApplyFirst_fn, 0, true, ::g::Uno::Action1_typeof()->MakeType(type->U(1)), 2, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1)), type->U(0)),
        new uFunction("ApplySecond`2", type, (void*)Closure__ApplySecond_fn, 0, true, ::g::Uno::Action1_typeof()->MakeType(type->U(0)), 2, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1)), type->U(1)),
        new uFunction("Forget`2", type, (void*)Closure__Forget_fn, 0, true, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1)), 1, ::g::Uno::Action_typeof()),
        new uFunction("Return`2", type, (void*)Closure__Return_fn, 0, true, ::g::Uno::Func1_typeof()->MakeType(type->U(0), type->U(1)), 1, type->U(1)));
    return type;
}

// public static Uno.Action Apply<T>(Uno.Action<T> action, T arg) :26
void Closure__Apply_fn(uType* __type, uDelegate* action, void* arg, uDelegate** __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[31/*Outracks.Simulator.Apply`1*/]->MakeType(__type->U(0)),
    };
    ::g::Outracks::Simulator::Apply* ret1;
    return *__retval = uDelegate::New(::TYPES[30/*Uno.Action*/], (void*)::g::Outracks::Simulator::Apply__Execute_fn, (::g::Outracks::Simulator::Apply__New1_fn(__types[1], action, arg, &ret1), ret1)), void();
}

// public static Uno.Action<TArg2> ApplyFirst<TArg1, TArg2>(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :11
void Closure__ApplyFirst_fn(uType* __type, uDelegate* action, void* arg1, uDelegate** __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[15/*Uno.Action`1*/]->MakeType(__type->U(1)),
        __type->U(1),
        ::TYPES[32/*Outracks.Simulator.ApplyFirst`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    ::g::Outracks::Simulator::ApplyFirst* ret2;
    return *__retval = uDelegate::New(__types[1], (void*)::g::Outracks::Simulator::ApplyFirst__Execute_fn, (::g::Outracks::Simulator::ApplyFirst__New1_fn(__types[3], action, arg1, &ret2), ret2)), void();
}

// public static Uno.Action<TArg1> ApplySecond<TArg1, TArg2>(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :16
void Closure__ApplySecond_fn(uType* __type, uDelegate* action, void* arg2, uDelegate** __retval)
{
    uType* __types[] = {
        __type->U(1),
        ::TYPES[15/*Uno.Action`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[33/*Outracks.Simulator.ApplySecond`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    ::g::Outracks::Simulator::ApplySecond* ret3;
    return *__retval = uDelegate::New(__types[1], (void*)::g::Outracks::Simulator::ApplySecond__Execute_fn, (::g::Outracks::Simulator::ApplySecond__New1_fn(__types[3], action, arg2, &ret3), ret3)), void();
}

// public static Uno.Action<TArg1, TArg2> Forget<TArg1, TArg2>(Uno.Action action) :31
void Closure__Forget_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = Closure::Forget(__type, action);
}

// public static Uno.Func<TArg, TResult> Return<TArg, TResult>(TResult result) :21
void Closure__Return_fn(uType* __type, void* result, uDelegate** __retval)
{
    uType* __types[] = {
        __type->U(1),
        ::TYPES[35/*Uno.Func`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
        ::TYPES[36/*Outracks.Simulator.Forget`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    ::g::Outracks::Simulator::Forget* ret4;
    return *__retval = uDelegate::New(__types[1], (void*)::g::Outracks::Simulator::Forget__Execute_fn, (::g::Outracks::Simulator::Forget__New1_fn(__types[3], result, &ret4), ret4)), void();
}

// public static Uno.Action<TArg1, TArg2> Forget<TArg1, TArg2>(Uno.Action action) [static] :31
uDelegate* Closure::Forget(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        ::TYPES[16/*Uno.Action`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
        __type->U(1),
        ::TYPES[34/*Outracks.Simulator.ForgetAction`2*/]->MakeType(__type->U(0), __type->U(1)),
    };
    return uDelegate::New(__types[0], (void*)::g::Outracks::Simulator::ForgetAction__Execute_fn, (::g::Outracks::Simulator::ForgetAction*)::g::Outracks::Simulator::ForgetAction::New1(__types[3], action));
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(99)
// -------------------------------------------------------------------------

// private sealed class EnumerableHitTestExtension.CollectHitNodesClosure :99
// {
uType* EnumerableHitTestExtension__CollectHitNodesClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EnumerableHitTestExtension__CollectHitNodesClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure", options);
    ::TYPES[37] = ::g::Fuse::HitTestResult_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Outracks::Simulator::EnumerableHitTestExtension__CollectHitNodesClosure, _nodes), 0);
    return type;
}

// public CollectHitNodesClosure(Uno.Collections.List<Fuse.Node> nodes) :103
void EnumerableHitTestExtension__CollectHitNodesClosure__ctor__fn(EnumerableHitTestExtension__CollectHitNodesClosure* __this, ::g::Uno::Collections::List* nodes)
{
    __this->ctor_(nodes);
}

// public void HitTestCallback(Fuse.HitTestResult result) :108
void EnumerableHitTestExtension__CollectHitNodesClosure__HitTestCallback_fn(EnumerableHitTestExtension__CollectHitNodesClosure* __this, ::g::Fuse::HitTestResult* result)
{
    __this->HitTestCallback(result);
}

// public CollectHitNodesClosure New(Uno.Collections.List<Fuse.Node> nodes) :103
void EnumerableHitTestExtension__CollectHitNodesClosure__New1_fn(::g::Uno::Collections::List* nodes, EnumerableHitTestExtension__CollectHitNodesClosure** __retval)
{
    *__retval = EnumerableHitTestExtension__CollectHitNodesClosure::New1(nodes);
}

// public CollectHitNodesClosure(Uno.Collections.List<Fuse.Node> nodes) [instance] :103
void EnumerableHitTestExtension__CollectHitNodesClosure::ctor_(::g::Uno::Collections::List* nodes)
{
    _nodes = nodes;
}

// public void HitTestCallback(Fuse.HitTestResult result) [instance] :108
void EnumerableHitTestExtension__CollectHitNodesClosure::HitTestCallback(::g::Fuse::HitTestResult* result)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_nodes), uPtr(result)->HitObject());
}

// public CollectHitNodesClosure New(Uno.Collections.List<Fuse.Node> nodes) [static] :103
EnumerableHitTestExtension__CollectHitNodesClosure* EnumerableHitTestExtension__CollectHitNodesClosure::New1(::g::Uno::Collections::List* nodes)
{
    EnumerableHitTestExtension__CollectHitNodesClosure* obj1 = (EnumerableHitTestExtension__CollectHitNodesClosure*)uNew(EnumerableHitTestExtension__CollectHitNodesClosure_typeof());
    obj1->ctor_(nodes);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno(10)
// -------------------------------------------------------------------------------------

// public sealed class ConcurrentQueue<T> :10
// {
uType* ConcurrentQueue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ConcurrentQueue`1", options);
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    ::TYPES[38] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::TYPES[38/*Uno.Collections.Queue`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Outracks::Simulator::ConcurrentQueue, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0)), offsetof(::g::Outracks::Simulator::ConcurrentQueue, _queue), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Enqueue", NULL, (void*)ConcurrentQueue__Enqueue_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)ConcurrentQueue__New1_fn, 0, true, type, 0),
        new uFunction("TryDequeue", NULL, (void*)ConcurrentQueue__TryDequeue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
    return type;
}

// public ConcurrentQueue() :15
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public void Enqueue(T data) :21
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* data)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uPtr(__this->_mutex)->Lock();
    ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), data);
    uPtr(__this->_mutex)->Unlock();
}

// public ConcurrentQueue New() :15
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& data) :28
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef data, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    uPtr(__this->_mutex)->Lock();
    bool result = false;

    if (uPtr(__this->_queue)->Count() != 0)
    {
        data.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
        result = true;
    }
    else
        data.Default(__types[0]);

    uPtr(__this->_mutex)->Unlock();
    return *__retval = result, void();
}

// public ConcurrentQueue() [instance] :15
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
}

// public ConcurrentQueue New() [static] :15
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(571)
// --------------------------------------------------------------------------

// internal abstract class Connected :571
// {
Connected_type* Connected_typeof()
{
    static uSStrong<Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Connected);
    options.TypeSize = sizeof(Connected_type);
    type = (Connected_type*)uClassType::New("Outracks.Simulator.Connected", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Connected__OnEnterState_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Connected__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Connected__OnUpdate_fn;
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[39] = ::g::Outracks::Simulator::Protocol::Error_typeof();
    ::TYPES[8] = ::g::Outracks::Simulator::UserAppState_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[41] = ::g::Outracks::Simulator::Protocol::Execute_typeof();
    ::TYPES[42] = uObject_typeof()->Array();
    ::TYPES[43] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[44] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof()->MakeMethod(1, ::g::Outracks::Simulator::State_typeof());
    ::TYPES[45] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Reify_typeof(), ::g::Outracks::Simulator::State_typeof());
    ::TYPES[46] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Execute_typeof(), ::g::Outracks::Simulator::State_typeof());
    ::TYPES[47] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Error_typeof(), ::g::Outracks::Simulator::State_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::ISimulatorClient_typeof(), offsetof(::g::Outracks::Simulator::Connected, Client), 0);
    return type;
}

// protected Connected(Outracks.Simulator.ISimulatorClient client) :575
void Connected__ctor_1_fn(Connected* __this, uObject* client)
{
    __this->ctor_1(client);
}

// protected Outracks.Simulator.State OnConnectionError(Outracks.Simulator.Protocol.Error error) :625
void Connected__OnConnectionError_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Error* error, ::g::Outracks::Simulator::State** __retval)
{
    *__retval = __this->OnConnectionError(error);
}

// public override Outracks.Simulator.State OnEnterState() :581
void Connected__OnEnterState_fn(Connected* __this, ::g::Outracks::Simulator::State** __retval)
{
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Context::App());
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :587
void Connected__OnException_fn(Connected* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    ::g::Uno::Exception* ret1;
    ::g::Uno::Collections::List* exceptions = ::g::Outracks::Simulator::Exceptions::Unpack(e);
    ::g::Outracks::Simulator::Exceptions::Send(__this->Client, exceptions);
    ::g::Uno::Exception* f = (uPtr(exceptions)->Count() == 1) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(exceptions), uCRef<int>(0), &ret1), ret1) : e;
    return *__retval = __this->OnFaulted(f), void();
}

// protected Outracks.Simulator.State OnExecute(Outracks.Simulator.Protocol.Execute args) :619
void Connected__OnExecute_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Execute* args, ::g::Outracks::Simulator::State** __retval)
{
    *__retval = __this->OnExecute(args);
}

// protected Outracks.Simulator.State OnReify(Outracks.Simulator.Protocol.Reify reify) :614
void Connected__OnReify_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Reify* reify, ::g::Outracks::Simulator::State** __retval)
{
    *__retval = __this->OnReify(reify);
}

// public override Outracks.Simulator.State OnUpdate() :597
void Connected__OnUpdate_fn(Connected* __this, ::g::Outracks::Simulator::State** __retval)
{
    bool ret2;
    ::g::Outracks::Simulator::State* ret3;
    ::g::Outracks::Simulator::Protocol::MessageToClient* message;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(::g::Outracks::Simulator::ISimulatorClient::IncommingMessages(uInterface(uPtr(__this->Client), ::TYPES[43/*Outracks.Simulator.ISimulatorClient*/]))), (void**)(&message), &ret2), ret2))
    {
        ::g::Outracks::Simulator::State* newState = (::g::Outracks::Simulator::Protocol::MessageToClient__Match1_fn(uPtr(message), ::TYPES[44/*Outracks.Simulator.Protocol.MessageToClient.Match<Outracks.Simulator.State>*/], uDelegate::New(::TYPES[45/*Uno.Func<Outracks.Simulator.Protocol.Reify, Outracks.Simulator.State>*/], (void*)Connected__OnReify_fn, __this), uDelegate::New(::TYPES[46/*Uno.Func<Outracks.Simulator.Protocol.Execute, Outracks.Simulator.State>*/], (void*)Connected__OnExecute_fn, __this), uDelegate::New(::TYPES[47/*Uno.Func<Outracks.Simulator.Protocol.Error, Outracks.Simulator.State>*/], (void*)Connected__OnConnectionError_fn, __this), &ret3), ret3);

        if (newState != __this)
            return *__retval = newState, void();
    }

    return *__retval = __this, void();
}

// protected Connected(Outracks.Simulator.ISimulatorClient client) [instance] :575
void Connected::ctor_1(uObject* client)
{
    ctor_();
    Client = client;
}

// protected Outracks.Simulator.State OnConnectionError(Outracks.Simulator.Protocol.Error error) [instance] :625
::g::Outracks::Simulator::State* Connected::OnConnectionError(::g::Outracks::Simulator::Protocol::Error* error)
{
    return ::g::Outracks::Simulator::ConnectionLost::New2(uPtr(error)->Exception);
}

// protected Outracks.Simulator.State OnExecute(Outracks.Simulator.Protocol.Execute args) [instance] :619
::g::Outracks::Simulator::State* Connected::OnExecute(::g::Outracks::Simulator::Protocol::Execute* args)
{
    ::g::Outracks::Simulator::Runtime::VirtualMachine::Execute(uPtr(args)->Function, uArray::New(::TYPES[42/*object[]*/], 0));
    return this;
}

// protected Outracks.Simulator.State OnReify(Outracks.Simulator.Protocol.Reify reify) [instance] :614
::g::Outracks::Simulator::State* Connected::OnReify(::g::Outracks::Simulator::Protocol::Reify* reify)
{
    return ::g::Outracks::Simulator::Reifying::New1(Client, reify);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(502)
// --------------------------------------------------------------------------

// internal abstract class Connecting :502
// {
::g::Outracks::Simulator::State_type* Connecting_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Connecting);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.Connecting", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Connecting__OnException_fn;
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    return type;
}

// protected generated Connecting() :502
void Connecting__ctor_1_fn(Connecting* __this)
{
    __this->ctor_1();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :504
void Connecting__OnException_fn(Connecting* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    return *__retval = ::g::Outracks::Simulator::FailedToConnect::New2(e), void();
}

// protected generated Connecting() [instance] :502
void Connecting::ctor_1()
{
    ctor_();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(542)
// --------------------------------------------------------------------------

// internal sealed class ConnectingToHost :542
// {
::g::Outracks::Simulator::State_type* ConnectingToHost_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConnectingToHost);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.ConnectingToHost", options);
    type->SetBase(::g::Outracks::Simulator::Connecting_typeof());
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ConnectingToHost__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ConnectingToHost__OnUpdate_fn;
    ::STRINGS[10] = uString::Const("Connecting");
    ::STRINGS[11] = uString::Const("Connecting to host...");
    ::TYPES[48] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[49] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[50] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[51] = ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Outracks::Simulator::ISimulatorClient_typeof());
    type->SetFields(0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Outracks::Simulator::ISimulatorClient_typeof()), offsetof(::g::Outracks::Simulator::ConnectingToHost, _connecting), 0,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), offsetof(::g::Outracks::Simulator::ConnectingToHost, _simulatorEndpoints), 0);
    return type;
}

// public ConnectingToHost(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :546
void ConnectingToHost__ctor_2_fn(ConnectingToHost* __this, uObject* simulatorEndpoints)
{
    __this->ctor_2(simulatorEndpoints);
}

// public ConnectingToHost New(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :546
void ConnectingToHost__New1_fn(uObject* simulatorEndpoints, ConnectingToHost** __retval)
{
    *__retval = ConnectingToHost::New1(simulatorEndpoints);
}

// public override sealed Outracks.Simulator.State OnEnterState() :553
void ConnectingToHost__OnEnterState_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::State** __retval)
{
    __this->_connecting = ::g::Outracks::Simulator::SimulatorClient::Connect((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[50/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], __this->_simulatorEndpoints)));
    ::g::Outracks::Simulator::LoadingScreen::Show(::g::Outracks::Simulator::Context::App(), ::STRINGS[10/*"Connecting"*/], ::STRINGS[11/*"Connecting ...*/]);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :560
void ConnectingToHost__OnUpdate_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::State** __retval)
{
    uObject* ret2;

    if (uPtr(__this->_connecting)->IsCompleted())
        return *__retval = ::g::Outracks::Simulator::Idle::New1((::g::Outracks::Simulator::Task__get_Result_fn(uPtr(__this->_connecting), &ret2), ret2)), void();

    return *__retval = __this, void();
}

// public ConnectingToHost(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [instance] :546
void ConnectingToHost::ctor_2(uObject* simulatorEndpoints)
{
    ctor_1();
    _simulatorEndpoints = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[48/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Net.IPEndPoint>*/], simulatorEndpoints));
}

// public ConnectingToHost New(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [static] :546
ConnectingToHost* ConnectingToHost::New1(uObject* simulatorEndpoints)
{
    ConnectingToHost* obj1 = (ConnectingToHost*)uNew(ConnectingToHost_typeof());
    obj1->ctor_2(simulatorEndpoints);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(511)
// --------------------------------------------------------------------------

// internal sealed class ConnectingToProxy :511
// {
::g::Outracks::Simulator::State_type* ConnectingToProxy_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConnectingToProxy);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.ConnectingToProxy", options);
    type->SetBase(::g::Outracks::Simulator::Connecting_typeof());
    type->fp_ctor_ = (void*)ConnectingToProxy__New1_fn;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ConnectingToProxy__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ConnectingToProxy__OnUpdate_fn;
    ::STRINGS[10] = uString::Const("Connecting");
    ::STRINGS[12] = uString::Const("Connecting to proxy...");
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[49] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[50] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[52] = ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array());
    type->SetFields(0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array()), offsetof(::g::Outracks::Simulator::ConnectingToProxy, _connecting), 0,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), offsetof(::g::Outracks::Simulator::ConnectingToProxy, _proxyEndpoints), 0);
    return type;
}

// public ConnectingToProxy() :521
void ConnectingToProxy__ctor_2_fn(ConnectingToProxy* __this)
{
    __this->ctor_2();
}

// public ConnectingToProxy(Uno.Net.IPEndPoint[] proxyEndpoints) :516
void ConnectingToProxy__ctor_3_fn(ConnectingToProxy* __this, uArray* proxyEndpoints)
{
    __this->ctor_3(proxyEndpoints);
}

// public ConnectingToProxy New() :521
void ConnectingToProxy__New1_fn(ConnectingToProxy** __retval)
{
    *__retval = ConnectingToProxy::New1();
}

// public ConnectingToProxy New(Uno.Net.IPEndPoint[] proxyEndpoints) :516
void ConnectingToProxy__New2_fn(uArray* proxyEndpoints, ConnectingToProxy** __retval)
{
    *__retval = ConnectingToProxy::New2(proxyEndpoints);
}

// public override sealed Outracks.Simulator.State OnEnterState() :526
void ConnectingToProxy__OnEnterState_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::State** __retval)
{
    __this->_connecting = ::g::Outracks::Simulator::ProxyClient::GetSimulatorEndpoint((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[50/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], __this->_proxyEndpoints)), ::g::Outracks::Simulator::Context::Project());
    ::g::Outracks::Simulator::LoadingScreen::Show(::g::Outracks::Simulator::Context::App(), ::STRINGS[10/*"Connecting"*/], ::STRINGS[12/*"Connecting ...*/]);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :533
void ConnectingToProxy__OnUpdate_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::State** __retval)
{
    uArray* ret3;

    if (uPtr(__this->_connecting)->IsCompleted())
        return *__retval = ::g::Outracks::Simulator::ConnectingToHost::New1((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[50/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], (::g::Outracks::Simulator::Task__get_Result_fn(uPtr(__this->_connecting), &ret3), ret3)))), void();

    return *__retval = __this, void();
}

// public ConnectingToProxy() [instance] :521
void ConnectingToProxy::ctor_2()
{
    ctor_1();
    _proxyEndpoints = ::g::Outracks::Simulator::Context::ProxyEndpoints();
}

// public ConnectingToProxy(Uno.Net.IPEndPoint[] proxyEndpoints) [instance] :516
void ConnectingToProxy::ctor_3(uArray* proxyEndpoints)
{
    ctor_1();
    _proxyEndpoints = proxyEndpoints;
}

// public ConnectingToProxy New() [static] :521
ConnectingToProxy* ConnectingToProxy::New1()
{
    ConnectingToProxy* obj2 = (ConnectingToProxy*)uNew(ConnectingToProxy_typeof());
    obj2->ctor_2();
    return obj2;
}

// public ConnectingToProxy New(Uno.Net.IPEndPoint[] proxyEndpoints) [static] :516
ConnectingToProxy* ConnectingToProxy::New2(uArray* proxyEndpoints)
{
    ConnectingToProxy* obj1 = (ConnectingToProxy*)uNew(ConnectingToProxy_typeof());
    obj1->ctor_3(proxyEndpoints);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(854)
// --------------------------------------------------------------------------

// internal sealed class ConnectionLost :854
// {
::g::Outracks::Simulator::State_type* ConnectionLost_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ConnectionLost);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.ConnectionLost", options);
    type->SetBase(::g::Outracks::Simulator::ShowingModalDialog_typeof());
    ::STRINGS[13] = uString::Const("Connection lost");
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[14] = uString::Const("Change IP");
    ::STRINGS[15] = uString::Const("Reconnect");
    ::TYPES[53] = ::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof();
    ::TYPES[54] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    type->SetFields(5);
    return type;
}

// public ConnectionLost(Outracks.Simulator.Protocol.ExceptionInfo exception) :860
void ConnectionLost__ctor_2_fn(ConnectionLost* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    __this->ctor_2(exception);
}

// public ConnectionLost(Uno.Exception exception) :856
void ConnectionLost__ctor_3_fn(ConnectionLost* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_3(exception);
}

// public ConnectionLost New(Outracks.Simulator.Protocol.ExceptionInfo exception) :860
void ConnectionLost__New2_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, ConnectionLost** __retval)
{
    *__retval = ConnectionLost::New2(exception);
}

// public ConnectionLost New(Uno.Exception exception) :856
void ConnectionLost__New3_fn(::g::Uno::Exception* exception, ConnectionLost** __retval)
{
    *__retval = ConnectionLost::New3(exception);
}

// public ConnectionLost(Outracks.Simulator.Protocol.ExceptionInfo exception) [instance] :860
void ConnectionLost::ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ctor_1(::STRINGS[13/*"Connection ...*/], uPtr(exception)->Message, ::STRINGS[0/*""*/], ::g::Outracks::Simulator::GoOffline::PrependOption(uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[54/*Outracks.Simulator.DialogButton[]*/], 2, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[14/*"Change IP"*/], ::g::Outracks::Simulator::ChangeIp::New1(::STRINGS[0/*""*/])), (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[15/*"Reconnect"*/], ::g::Outracks::Simulator::ConnectingToProxy::New1()))));
}

// public ConnectionLost(Uno.Exception exception) [instance] :856
void ConnectionLost::ctor_3(::g::Uno::Exception* exception)
{
    ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(exception));
}

// public ConnectionLost New(Outracks.Simulator.Protocol.ExceptionInfo exception) [static] :860
ConnectionLost* ConnectionLost::New2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ConnectionLost* obj2 = (ConnectionLost*)uNew(ConnectionLost_typeof());
    obj2->ctor_2(exception);
    return obj2;
}

// public ConnectionLost New(Uno.Exception exception) [static] :856
ConnectionLost* ConnectionLost::New3(::g::Uno::Exception* exception)
{
    ConnectionLost* obj1 = (ConnectionLost*)uNew(ConnectionLost_typeof());
    obj1->ctor_3(exception);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1232)
// ---------------------------------------------------------------------------

// internal sealed class ConnectToSimulator :1232
// {
uType* ConnectToSimulator_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConnectToSimulator);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ConnectToSimulator", options);
    ::TYPES[55] = ::g::Uno::Net::EndPoint_typeof();
    ::TYPES[43] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    type->SetFields(0,
        ::g::Uno::Net::IPEndPoint_typeof(), offsetof(::g::Outracks::Simulator::ConnectToSimulator, _endpoint), 0);
    return type;
}

// public ConnectToSimulator(Uno.Net.IPEndPoint endpoint) :1236
void ConnectToSimulator__ctor__fn(ConnectToSimulator* __this, ::g::Uno::Net::IPEndPoint* endpoint)
{
    __this->ctor_(endpoint);
}

// public Outracks.Simulator.ISimulatorClient Execute() :1241
void ConnectToSimulator__Execute_fn(ConnectToSimulator* __this, uObject** __retval)
{
    *__retval = __this->Execute();
}

// public ConnectToSimulator New(Uno.Net.IPEndPoint endpoint) :1236
void ConnectToSimulator__New1_fn(::g::Uno::Net::IPEndPoint* endpoint, ConnectToSimulator** __retval)
{
    *__retval = ConnectToSimulator::New1(endpoint);
}

// public ConnectToSimulator(Uno.Net.IPEndPoint endpoint) [instance] :1236
void ConnectToSimulator::ctor_(::g::Uno::Net::IPEndPoint* endpoint)
{
    _endpoint = endpoint;
}

// public Outracks.Simulator.ISimulatorClient Execute() [instance] :1241
uObject* ConnectToSimulator::Execute()
{
    try
    {
        ::g::Uno::Net::Sockets::Socket* socket = ::g::Uno::Net::Sockets::Socket::Create(2, 1, 6);
        uPtr(socket)->Connect1(_endpoint);
        return (uObject*)::g::Outracks::Simulator::SimulatorClient::New1(socket);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Outracks::Simulator::FailedToConnectToEndPoint::New4(_endpoint, e));
    }
}

// public ConnectToSimulator New(Uno.Net.IPEndPoint endpoint) [static] :1236
ConnectToSimulator* ConnectToSimulator::New1(::g::Uno::Net::IPEndPoint* endpoint)
{
    ConnectToSimulator* obj1 = (ConnectToSimulator*)uNew(ConnectToSimulator_typeof());
    obj1->ctor_(endpoint);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(404)
// --------------------------------------------------------------------------

// public static class Context :404
// {
uClassType* Context_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Context", options);
    ::STRINGS[16] = uString::Const("N/A");
    ::STRINGS[17] = uString::Const("DESIGN MODE");
    ::STRINGS[18] = uString::Const("PREVIEW MODE");
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[56] = ::g::Fuse::Preview::ISelection_typeof();
    type->SetFields(0,
        ::g::Outracks::Simulator::FakeApp_typeof(), (uintptr_t)&::g::Outracks::Simulator::Context::_App_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::InputMode_typeof(), (uintptr_t)&::g::Outracks::Simulator::Context::_InputMode_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Outracks::Simulator::Context::_Project_, uFieldFlagsStatic,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), (uintptr_t)&::g::Outracks::Simulator::Context::_ProxyEndpoints_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), (uintptr_t)&::g::Outracks::Simulator::Context::_Reflection_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("get_App", NULL, (void*)Context__get_App_fn, 0, true, ::g::Outracks::Simulator::FakeApp_typeof(), 0),
        new uFunction("Initialize", NULL, (void*)Context__Initialize_fn, 0, true, uVoid_typeof(), 3, ::g::Outracks::Simulator::FakeApp_typeof(), ::g::Uno::Net::IPEndPoint_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("get_InputMode", NULL, (void*)Context__get_InputMode_fn, 0, true, ::g::Outracks::Simulator::InputMode_typeof(), 0),
        new uFunction("get_Project", NULL, (void*)Context__get_Project_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_ProxyEndpoints", NULL, (void*)Context__get_ProxyEndpoints_fn, 0, true, ::g::Uno::Net::IPEndPoint_typeof()->Array(), 0),
        new uFunction("get_Reflection", NULL, (void*)Context__get_Reflection_fn, 0, true, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), 0),
        new uFunction("set_Reflection", NULL, (void*)Context__set_Reflection_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::Runtime::IReflection_typeof()),
        new uFunction("SetDesignMode", NULL, (void*)Context__SetDesignMode_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("SetInteractiveMode", NULL, (void*)Context__SetInteractiveMode_fn, 0, true, uVoid_typeof(), 0));
    return type;
}

// public static generated Outracks.Simulator.FakeApp get_App() :407
void Context__get_App_fn(::g::Outracks::Simulator::FakeApp** __retval)
{
    *__retval = Context::App();
}

// private static generated void set_App(Outracks.Simulator.FakeApp value) :407
void Context__set_App_fn(::g::Outracks::Simulator::FakeApp* value)
{
    Context::App(value);
}

// public static void Initialize(Outracks.Simulator.FakeApp app, Uno.Net.IPEndPoint[] proxyEndpoints, string project) :429
void Context__Initialize_fn(::g::Outracks::Simulator::FakeApp* app, uArray* proxyEndpoints, uString* project)
{
    Context::Initialize(app, proxyEndpoints, project);
}

// public static generated Outracks.Simulator.InputMode get_InputMode() :406
void Context__get_InputMode_fn(int* __retval)
{
    *__retval = Context::InputMode();
}

// private static generated void set_InputMode(Outracks.Simulator.InputMode value) :406
void Context__set_InputMode_fn(int* value)
{
    Context::InputMode(*value);
}

// public static generated string get_Project() :409
void Context__get_Project_fn(uString** __retval)
{
    *__retval = Context::Project();
}

// private static generated void set_Project(string value) :409
void Context__set_Project_fn(uString* value)
{
    Context::Project(value);
}

// public static generated Uno.Net.IPEndPoint[] get_ProxyEndpoints() :408
void Context__get_ProxyEndpoints_fn(uArray** __retval)
{
    *__retval = Context::ProxyEndpoints();
}

// private static generated void set_ProxyEndpoints(Uno.Net.IPEndPoint[] value) :408
void Context__set_ProxyEndpoints_fn(uArray* value)
{
    Context::ProxyEndpoints(value);
}

// public static generated Outracks.Simulator.Runtime.IReflection get_Reflection() :411
void Context__get_Reflection_fn(uObject** __retval)
{
    *__retval = Context::Reflection();
}

// public static generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) :411
void Context__set_Reflection_fn(uObject* value)
{
    Context::Reflection(value);
}

// public static void SetDesignMode() :413
void Context__SetDesignMode_fn()
{
    Context::SetDesignMode();
}

// public static void SetInteractiveMode() :421
void Context__SetInteractiveMode_fn()
{
    Context::SetInteractiveMode();
}

uSStrong< ::g::Outracks::Simulator::FakeApp*> Context::_App_;
int Context::_InputMode_;
uSStrong<uString*> Context::_Project_;
uSStrong<uArray*> Context::_ProxyEndpoints_;
uSStrong<uObject*> Context::_Reflection_;

// public static void Initialize(Outracks.Simulator.FakeApp app, Uno.Net.IPEndPoint[] proxyEndpoints, string project) [static] :429
void Context::Initialize(::g::Outracks::Simulator::FakeApp* app, uArray* proxyEndpoints, uString* project)
{
    Context::App(app);
    Context::ProxyEndpoints(proxyEndpoints);
    Context::Project(project);
}

// public static void SetDesignMode() [static] :413
void Context::SetDesignMode()
{
    if (Context::InputMode() == 1)
        return;

    Context::InputMode(1);
    ::g::Fuse::Preview::SelectionManager::SetSelection((uObject*)::g::Outracks::Simulator::Runtime::Selection::New1(::STRINGS[16/*"N/A"*/], NULL));
    uPtr(Context::App())->Flash(::STRINGS[17/*"DESIGN MODE"*/]);
}

// public static void SetInteractiveMode() [static] :421
void Context::SetInteractiveMode()
{
    if (Context::InputMode() == 0)
        return;

    Context::InputMode(0);
    ::g::Fuse::Preview::SelectionManager::SetSelection((uObject*)::g::Outracks::Simulator::Runtime::Selection::New1(::STRINGS[16/*"N/A"*/], NULL));
    uPtr(Context::App())->Flash(::STRINGS[18/*"PREVIEW MODE"*/]);
}

// public static generated Outracks.Simulator.FakeApp get_App() [static] :407
::g::Outracks::Simulator::FakeApp* Context::App()
{
    return Context::_App();
}

// private static generated void set_App(Outracks.Simulator.FakeApp value) [static] :407
void Context::App(::g::Outracks::Simulator::FakeApp* value)
{
    Context::_App() = value;
}

// public static generated Outracks.Simulator.InputMode get_InputMode() [static] :406
int Context::InputMode()
{
    return Context::_InputMode();
}

// private static generated void set_InputMode(Outracks.Simulator.InputMode value) [static] :406
void Context::InputMode(int value)
{
    Context::_InputMode() = value;
}

// public static generated string get_Project() [static] :409
uString* Context::Project()
{
    return Context::_Project();
}

// private static generated void set_Project(string value) [static] :409
void Context::Project(uString* value)
{
    Context::_Project() = value;
}

// public static generated Uno.Net.IPEndPoint[] get_ProxyEndpoints() [static] :408
uArray* Context::ProxyEndpoints()
{
    return Context::_ProxyEndpoints();
}

// private static generated void set_ProxyEndpoints(Uno.Net.IPEndPoint[] value) [static] :408
void Context::ProxyEndpoints(uArray* value)
{
    Context::_ProxyEndpoints() = value;
}

// public static generated Outracks.Simulator.Runtime.IReflection get_Reflection() [static] :411
uObject* Context::Reflection()
{
    return Context::_Reflection();
}

// public static generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) [static] :411
void Context::Reflection(uObject* value)
{
    Context::_Reflection() = value;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1961)
// ---------------------------------------------------------------------------

// public static extern class DeviceInfo :1961
// {
uClassType* DeviceInfo_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.DeviceInfo", options);
    ::TYPES[57] = ::g::Android::android::os::Build_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("get_GUID", NULL, (void*)DeviceInfo__get_GUID_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)DeviceInfo__get_Name_fn, 0, true, ::g::Uno::String_typeof(), 0));
    return type;
}

// public static string get_GUID() :1973
void DeviceInfo__get_GUID_fn(uString** __retval)
{
    *__retval = DeviceInfo::GUID();
}

// public static string get_Name() :1965
void DeviceInfo__get_Name_fn(uString** __retval)
{
    *__retval = DeviceInfo::Name();
}

// public static string get_GUID() [static] :1973
uString* DeviceInfo::GUID()
{
    return ::g::Android::java::lang::String::op_Implicit(::g::Android::android::os::Build::SERIAL());
}

// public static string get_Name() [static] :1965
uString* DeviceInfo::Name()
{
    return ::g::Android::java::lang::String::op_Implicit(::g::Android::android::os::Build::MODEL());
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1827)
// ---------------------------------------------------------------------------

// internal sealed class DialogButton :1827
// {
uType* DialogButton_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DialogButton);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.DialogButton", options);
    type->SetFields(0,
        ::g::Outracks::Simulator::State_typeof(), offsetof(::g::Outracks::Simulator::DialogButton, Destination), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::DialogButton, Text), 0);
    return type;
}

// public DialogButton(string text, Outracks.Simulator.State destination) :1832
void DialogButton__ctor__fn(DialogButton* __this, uString* text, ::g::Outracks::Simulator::State* destination)
{
    __this->ctor_(text, destination);
}

// public DialogButton New(string text, Outracks.Simulator.State destination) :1832
void DialogButton__New1_fn(uString* text, ::g::Outracks::Simulator::State* destination, DialogButton** __retval)
{
    *__retval = DialogButton::New1(text, destination);
}

// public DialogButton(string text, Outracks.Simulator.State destination) [instance] :1832
void DialogButton::ctor_(uString* text, ::g::Outracks::Simulator::State* destination)
{
    Text = text;
    Destination = destination;
}

// public DialogButton New(string text, Outracks.Simulator.State destination) [static] :1832
DialogButton* DialogButton::New1(uString* text, ::g::Outracks::Simulator::State* destination)
{
    DialogButton* obj1 = (DialogButton*)uNew(DialogButton_typeof());
    obj1->ctor_(text, destination);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(559)
// -----------------------------------------------------------------------------------

// public sealed class DummyApplication :559
// {
uType* DummyApplication_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DummyApplication);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.DummyApplication", options);
    type->SetBase(::g::Uno::Application_typeof());
    type->fp_ctor_ = (void*)DummyApplication__New1_fn;
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DummyApplication__New1_fn, 0, true, DummyApplication_typeof(), 0));
    return type;
}

// public generated DummyApplication() :559
void DummyApplication__ctor_1_fn(DummyApplication* __this)
{
    __this->ctor_1();
}

// public generated DummyApplication New() :559
void DummyApplication__New1_fn(DummyApplication** __retval)
{
    *__retval = DummyApplication::New1();
}

// public generated DummyApplication() [instance] :559
void DummyApplication::ctor_1()
{
    ctor_();
}

// public generated DummyApplication New() [static] :559
DummyApplication* DummyApplication::New1()
{
    DummyApplication* obj1 = (DummyApplication*)uNew(DummyApplication_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(89)
// -------------------------------------------------------------------------

// internal static class EnumerableHitTestExtension :89
// {
uClassType* EnumerableHitTestExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.EnumerableHitTestExtension", options);
    ::TYPES[58] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[59] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[60] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    return type;
}

// public static Uno.Collections.IList<Fuse.Node> HitTest2(Fuse.Node node, float2 windowPoint) :91
void EnumerableHitTestExtension__HitTest2_fn(::g::Fuse::Node* node, ::g::Uno::Float2* windowPoint, uObject** __retval)
{
    *__retval = EnumerableHitTestExtension::HitTest2(node, *windowPoint);
}

// public static Uno.Collections.IList<Fuse.Node> HitTest2(Fuse.Node node, float2 windowPoint) [static] :91
uObject* EnumerableHitTestExtension::HitTest2(::g::Fuse::Node* node, ::g::Uno::Float2 windowPoint)
{
    ::g::Uno::Collections::List* nodes = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[58/*Uno.Collections.List<Fuse.Node>*/]);
    ::g::Fuse::HitTestContext* htc = ::g::Fuse::HitTestContext::New1(windowPoint, uDelegate::New(::TYPES[59/*Fuse.HitTestCallback*/], (void*)EnumerableHitTestExtension__CollectHitNodesClosure__HitTestCallback_fn, EnumerableHitTestExtension__CollectHitNodesClosure::New1(nodes)));
    uPtr(node)->HitTest(htc);
    return (uObject*)nodes;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(810)
// --------------------------------------------------------------------------

// internal static class Exceptions :810
// {
uClassType* Exceptions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Exceptions", options);
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[61] = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    ::TYPES[62] = ::g::Outracks::Simulator::DeviceInfo_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[63] = ::g::Uno::AggregateException_typeof();
    ::TYPES[64] = ::g::Uno::Collections::ReadOnlyCollection_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[65] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof());
    return type;
}

// public static void Send(Outracks.Simulator.ISimulatorClient client, Uno.Collections.List<Uno.Exception> exceptions) :812
void Exceptions__Send_fn(uObject* client, ::g::Uno::Collections::List* exceptions)
{
    Exceptions::Send(client, exceptions);
}

// public static Uno.Collections.List<Uno.Exception> Unpack(Uno.Exception e) :821
void Exceptions__Unpack_fn(::g::Uno::Exception* e, ::g::Uno::Collections::List** __retval)
{
    *__retval = Exceptions::Unpack(e);
}

// public static void Send(Outracks.Simulator.ISimulatorClient client, Uno.Collections.List<Uno.Exception> exceptions) [static] :812
void Exceptions::Send(uObject* client, ::g::Uno::Collections::List* exceptions)
{
    ::g::Uno::Exception* ret1;

    for (int i = 0; i < uPtr(exceptions)->Count(); ++i)
    {
        ::g::Uno::Exception* unpacked = (::g::Uno::Collections::List__get_Item_fn(uPtr(exceptions), uCRef<int>(i), &ret1), ret1);
        ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(client), ::TYPES[43/*Outracks.Simulator.ISimulatorClient*/]), ::g::Outracks::Simulator::Protocol::UnhandledException::New1(::g::Outracks::Simulator::DeviceInfo::GUID(), ::g::Outracks::Simulator::DeviceInfo::Name(), uPtr(unpacked)->Message(), uPtr(unpacked)->StackTrace(), uPtr(::g::Uno::Object::GetType(uPtr(unpacked)))->ToString()));
    }
}

// public static Uno.Collections.List<Uno.Exception> Unpack(Uno.Exception e) [static] :821
::g::Uno::Collections::List* Exceptions::Unpack(::g::Uno::Exception* e)
{
    ::g::Uno::Exception* ret2;
    ::g::Uno::Collections::List* exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Uno.Exception>*/]);

    if (uIs(e, ::TYPES[63/*Uno.AggregateException*/]))
    {
        ::g::Uno::AggregateException* aggregate = uCast< ::g::Uno::AggregateException*>(e, ::TYPES[63/*Uno.AggregateException*/]);

        for (int i = 0; i < uPtr(uPtr(aggregate)->InnerExceptions())->Count(); ++i)
            uPtr(exceptions)->AddRange((uObject*)Exceptions::Unpack((::g::Uno::Collections::ReadOnlyCollection__get_Item_fn(uPtr(uPtr(aggregate)->InnerExceptions()), uCRef<int>(i), &ret2), ret2)));
    }
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(exceptions), e);

    return exceptions;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(871)
// --------------------------------------------------------------------------

// internal sealed class FailedToConnect :871
// {
::g::Outracks::Simulator::State_type* FailedToConnect_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FailedToConnect);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.FailedToConnect", options);
    type->SetBase(::g::Outracks::Simulator::ShowingModalDialog_typeof());
    ::STRINGS[19] = uString::Const("Failed to connect");
    ::STRINGS[20] = uString::Const("Please check that this device is connected to the same network as your computer.");
    ::STRINGS[14] = uString::Const("Change IP");
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[21] = uString::Const("Try again");
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[54] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    type->SetFields(5);
    return type;
}

// public FailedToConnect(Uno.Exception exception) :873
void FailedToConnect__ctor_2_fn(FailedToConnect* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_2(exception);
}

// public FailedToConnect New(Uno.Exception exception) :873
void FailedToConnect__New2_fn(::g::Uno::Exception* exception, FailedToConnect** __retval)
{
    *__retval = FailedToConnect::New2(exception);
}

// public FailedToConnect(Uno.Exception exception) [instance] :873
void FailedToConnect::ctor_2(::g::Uno::Exception* exception)
{
    ctor_1(::STRINGS[19/*"Failed to c...*/], ::STRINGS[20/*"Please chec...*/], uPtr(exception)->Message(), ::g::Outracks::Simulator::GoOffline::PrependOption(uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[54/*Outracks.Simulator.DialogButton[]*/], 2, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[14/*"Change IP"*/], ::g::Outracks::Simulator::ChangeIp::New1(::STRINGS[0/*""*/])), (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[21/*"Try again"*/], ::g::Outracks::Simulator::ConnectingToProxy::New1()))));
}

// public FailedToConnect New(Uno.Exception exception) [static] :873
FailedToConnect* FailedToConnect::New2(::g::Uno::Exception* exception)
{
    FailedToConnect* obj1 = (FailedToConnect*)uNew(FailedToConnect_typeof());
    obj1->ctor_2(exception);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1225)
// ---------------------------------------------------------------------------

// internal sealed class FailedToConnectToEndPoint :1225
// {
::g::Uno::Exception_type* FailedToConnectToEndPoint_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FailedToConnectToEndPoint);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToEndPoint", options);
    type->SetBase(::g::Uno::Exception_typeof());
    ::STRINGS[22] = uString::Const(": ");
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    type->SetFields(3);
    return type;
}

// public FailedToConnectToEndPoint(Uno.Net.IPEndPoint endpoint, Uno.Exception e) :1227
void FailedToConnectToEndPoint__ctor_3_fn(FailedToConnectToEndPoint* __this, ::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    __this->ctor_3(endpoint, e);
}

// public FailedToConnectToEndPoint New(Uno.Net.IPEndPoint endpoint, Uno.Exception e) :1227
void FailedToConnectToEndPoint__New4_fn(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e, FailedToConnectToEndPoint** __retval)
{
    *__retval = FailedToConnectToEndPoint::New4(endpoint, e);
}

// public FailedToConnectToEndPoint(Uno.Net.IPEndPoint endpoint, Uno.Exception e) [instance] :1227
void FailedToConnectToEndPoint::ctor_3(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(endpoint)->ToString(), ::STRINGS[22/*": "*/]), uPtr(e)->Message()));
}

// public FailedToConnectToEndPoint New(Uno.Net.IPEndPoint endpoint, Uno.Exception e) [static] :1227
FailedToConnectToEndPoint* FailedToConnectToEndPoint::New4(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    FailedToConnectToEndPoint* obj1 = (FailedToConnectToEndPoint*)uNew(FailedToConnectToEndPoint_typeof());
    obj1->ctor_3(endpoint, e);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1044)
// ---------------------------------------------------------------------------

// public sealed class FailedToConnectToProxy :1044
// {
::g::Uno::Exception_type* FailedToConnectToProxy_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FailedToConnectToProxy);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToProxy", options);
    type->SetBase(::g::Uno::Exception_typeof());
    ::STRINGS[23] = uString::Const("Failed to connect to proxy:\n"
        "");
    ::TYPES[66] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Uno::Exception_typeof());
    type->SetFields(3,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Outracks::Simulator::FailedToConnectToProxy, InnerExceptions), 0);
    type->Reflection.SetFields(1,
        new uField("InnerExceptions", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FailedToConnectToProxy__New4_fn, 0, true, FailedToConnectToProxy_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof())));
    return type;
}

// public FailedToConnectToProxy(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :1048
void FailedToConnectToProxy__ctor_3_fn(FailedToConnectToProxy* __this, uObject* innerExceptions)
{
    __this->ctor_3(innerExceptions);
}

// public FailedToConnectToProxy New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :1048
void FailedToConnectToProxy__New4_fn(uObject* innerExceptions, FailedToConnectToProxy** __retval)
{
    *__retval = FailedToConnectToProxy::New4(innerExceptions);
}

// public FailedToConnectToProxy(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [instance] :1048
void FailedToConnectToProxy::ctor_3(uObject* innerExceptions)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[23/*"Failed to c...*/], ::g::Outracks::Simulator::AggregateConnectError::ToIndentedLines(innerExceptions)));
    InnerExceptions = ((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[66/*Outracks.Simulator.List.ToImmutableList<Uno.Exception>*/], innerExceptions));
}

// public FailedToConnectToProxy New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :1048
FailedToConnectToProxy* FailedToConnectToProxy::New4(uObject* innerExceptions)
{
    FailedToConnectToProxy* obj1 = (FailedToConnectToProxy*)uNew(FailedToConnectToProxy_typeof());
    obj1->ctor_3(innerExceptions);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1203)
// ---------------------------------------------------------------------------

// public sealed class FailedToConnectToSimulator :1203
// {
::g::Uno::Exception_type* FailedToConnectToSimulator_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FailedToConnectToSimulator);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToSimulator", options);
    type->SetBase(::g::Uno::Exception_typeof());
    ::STRINGS[24] = uString::Const("Failed to connect to simulator host: ");
    ::TYPES[66] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1, ::g::Uno::Exception_typeof());
    type->SetFields(3,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Outracks::Simulator::FailedToConnectToSimulator, InnerExceptions), 0);
    type->Reflection.SetFields(1,
        new uField("InnerExceptions", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FailedToConnectToSimulator__New4_fn, 0, true, FailedToConnectToSimulator_typeof(), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof())));
    return type;
}

// public FailedToConnectToSimulator(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :1207
void FailedToConnectToSimulator__ctor_3_fn(FailedToConnectToSimulator* __this, uObject* innerExceptions)
{
    __this->ctor_3(innerExceptions);
}

// public FailedToConnectToSimulator New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :1207
void FailedToConnectToSimulator__New4_fn(uObject* innerExceptions, FailedToConnectToSimulator** __retval)
{
    *__retval = FailedToConnectToSimulator::New4(innerExceptions);
}

// public FailedToConnectToSimulator(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [instance] :1207
void FailedToConnectToSimulator::ctor_3(uObject* innerExceptions)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[24/*"Failed to c...*/], ::g::Outracks::Simulator::AggregateConnectError::ToIndentedLines(innerExceptions)));
    InnerExceptions = ((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[66/*Outracks.Simulator.List.ToImmutableList<Uno.Exception>*/], innerExceptions));
}

// public FailedToConnectToSimulator New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :1207
FailedToConnectToSimulator* FailedToConnectToSimulator::New4(uObject* innerExceptions)
{
    FailedToConnectToSimulator* obj1 = (FailedToConnectToSimulator*)uNew(FailedToConnectToSimulator_typeof());
    obj1->ctor_3(innerExceptions);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(115)
// --------------------------------------------------------------------------

// public sealed class FakeApp :115
// {
::g::Fuse::Controls::Panel_type* FakeApp_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 105;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(FakeApp);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Outracks.Simulator.FakeApp", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))FakeApp__OnDraw_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))FakeApp__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))FakeApp__OnUnrooted_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[67] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[68] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[30] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[4] = ::g::Fuse::AppBase_typeof();
    ::TYPES[69] = ::g::Uno::Application_typeof();
    ::TYPES[70] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[71] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[72] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Fuse::App_typeof(), offsetof(::g::Outracks::Simulator::FakeApp, _app), 0,
        ::g::Outracks::Simulator::Flasher_typeof(), offsetof(::g::Outracks::Simulator::FakeApp, _currentFlash), 0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Outracks::Simulator::FakeApp, _flashes), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Outracks::Simulator::FakeApp, _overlayPlaceholde), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Outracks::Simulator::FakeApp, _rootPlaceholder), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Background", NULL, (void*)FakeApp__get_Background1_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Background", NULL, (void*)FakeApp__set_Background1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Behaviors", NULL, (void*)FakeApp__get_Behaviors1_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), 0),
        new uFunction("get_ClearColor", NULL, (void*)FakeApp__get_ClearColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ClearColor", NULL, (void*)FakeApp__set_ClearColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ClearDepth", NULL, (void*)FakeApp__get_ClearDepth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ClearDepth", NULL, (void*)FakeApp__set_ClearDepth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Flash", NULL, (void*)FakeApp__Flash_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)FakeApp__New2_fn, 0, true, FakeApp_typeof(), 1, ::g::Fuse::App_typeof()),
        new uFunction("get_Overlay", NULL, (void*)FakeApp__get_Overlay_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Overlay", NULL, (void*)FakeApp__set_Overlay_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Resources", NULL, (void*)FakeApp__get_Resources1_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), 0),
        new uFunction("get_RootNode", NULL, (void*)FakeApp__get_RootNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_RootNode", NULL, (void*)FakeApp__set_RootNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Theme", NULL, (void*)FakeApp__get_Theme_fn, 0, false, ::g::Fuse::Theme_typeof(), 0),
        new uFunction("set_Theme", NULL, (void*)FakeApp__set_Theme_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Theme_typeof()));
    return type;
}

// public FakeApp(Fuse.App app) :135
void FakeApp__ctor_4_fn(FakeApp* __this, ::g::Fuse::App* app)
{
    __this->ctor_4(app);
}

// private void AddNewFlashes() :188
void FakeApp__AddNewFlashes_fn(FakeApp* __this)
{
    __this->AddNewFlashes();
}

// public new float4 get_Background() :202
void FakeApp__get_Background1_fn(FakeApp* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background1();
}

// public new void set_Background(float4 value) :203
void FakeApp__set_Background1_fn(FakeApp* __this, ::g::Uno::Float4* value)
{
    __this->Background1(*value);
}

// public new Uno.Collections.IList<Fuse.Behavior> get_Behaviors() :208
void FakeApp__get_Behaviors1_fn(FakeApp* __this, uObject** __retval)
{
    *__retval = __this->Behaviors1();
}

// public float4 get_ClearColor() :252
void FakeApp__get_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public void set_ClearColor(float4 value) :253
void FakeApp__set_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// public float get_ClearDepth() :258
void FakeApp__get_ClearDepth_fn(FakeApp* __this, float* __retval)
{
    *__retval = __this->ClearDepth();
}

// public void set_ClearDepth(float value) :259
void FakeApp__set_ClearDepth_fn(FakeApp* __this, float* value)
{
    __this->ClearDepth(*value);
}

// public void Flash(string message) :162
void FakeApp__Flash_fn(FakeApp* __this, uString* message)
{
    __this->Flash(message);
}

// private bool get_HasFlash() :176
void FakeApp__get_HasFlash_fn(FakeApp* __this, bool* __retval)
{
    *__retval = __this->HasFlash();
}

// public FakeApp New(Fuse.App app) :135
void FakeApp__New2_fn(::g::Fuse::App* app, FakeApp** __retval)
{
    *__retval = FakeApp::New2(app);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :266
void FakeApp__OnDraw_fn(FakeApp* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Controls::Control__OnDraw_fn(__this, dc);
}

// protected override sealed void OnRooted() :143
void FakeApp__OnRooted_fn(FakeApp* __this)
{
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[30/*Uno.Action*/], (void*)FakeApp__OnUpdate_fn, __this), 0);
}

// protected override sealed void OnUnrooted() :149
void FakeApp__OnUnrooted_fn(FakeApp* __this)
{
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[30/*Uno.Action*/], (void*)FakeApp__OnUpdate_fn, __this), 0);
    ::g::Fuse::Controls::Panel__OnUnrooted_fn(__this);
}

// private void OnUpdate() :155
void FakeApp__OnUpdate_fn(FakeApp* __this)
{
    __this->OnUpdate();
}

// public Fuse.Node get_Overlay() :230
void FakeApp__get_Overlay_fn(FakeApp* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Overlay();
}

// public void set_Overlay(Fuse.Node value) :231
void FakeApp__set_Overlay_fn(FakeApp* __this, ::g::Fuse::Node* value)
{
    __this->Overlay(value);
}

// private bool get_OverlayVisible() :127
void FakeApp__get_OverlayVisible_fn(FakeApp* __this, bool* __retval)
{
    *__retval = __this->OverlayVisible();
}

// private void set_OverlayVisible(bool value) :128
void FakeApp__set_OverlayVisible_fn(FakeApp* __this, bool* value)
{
    __this->OverlayVisible(*value);
}

// private void RemoveExpiredFlashes() :179
void FakeApp__RemoveExpiredFlashes_fn(FakeApp* __this)
{
    __this->RemoveExpiredFlashes();
}

// public new Uno.Collections.IList<Uno.UX.Resource> get_Resources() :215
void FakeApp__get_Resources1_fn(FakeApp* __this, uObject** __retval)
{
    *__retval = __this->Resources1();
}

// public Fuse.Node get_RootNode() :220
void FakeApp__get_RootNode_fn(FakeApp* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RootNode();
}

// public void set_RootNode(Fuse.Node value) :221
void FakeApp__set_RootNode_fn(FakeApp* __this, ::g::Fuse::Node* value)
{
    __this->RootNode(value);
}

// public Fuse.Theme get_Theme() :246
void FakeApp__get_Theme_fn(FakeApp* __this, ::g::Fuse::Theme** __retval)
{
    *__retval = __this->Theme();
}

// public void set_Theme(Fuse.Theme value) :247
void FakeApp__set_Theme_fn(FakeApp* __this, ::g::Fuse::Theme* value)
{
    __this->Theme(value);
}

// private void UpdateFlashes() :167
void FakeApp__UpdateFlashes_fn(FakeApp* __this)
{
    __this->UpdateFlashes();
}

// public FakeApp(Fuse.App app) [instance] :135
void FakeApp::ctor_4(::g::Fuse::App* app)
{
    _rootPlaceholder = ::g::Fuse::Controls::Panel::New1();
    _overlayPlaceholde = ::g::Fuse::Controls::Panel::New1();
    _flashes = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[67/*Outracks.Simulator.ConcurrentQueue<string>*/]));
    ctor_3();
    _app = app;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), _overlayPlaceholde);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), _rootPlaceholder);
    OverlayVisible(false);
}

// private void AddNewFlashes() [instance] :188
void FakeApp::AddNewFlashes()
{
    bool ret2;
    uString* flashText;

    if ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(_flashes), (void**)(&flashText), &ret2), ret2))
        Overlay(_currentFlash = ::g::Outracks::Simulator::Flasher::New2(flashText));
}

// public new float4 get_Background() [instance] :202
::g::Uno::Float4 FakeApp::Background1()
{
    return uPtr(_app)->Background();
}

// public new void set_Background(float4 value) [instance] :203
void FakeApp::Background1(::g::Uno::Float4 value)
{
    uPtr(_app)->Background(value);
}

// public new Uno.Collections.IList<Fuse.Behavior> get_Behaviors() [instance] :208
uObject* FakeApp::Behaviors1()
{
    return uPtr(_app)->Behaviors();
}

// public float4 get_ClearColor() [instance] :252
::g::Uno::Float4 FakeApp::ClearColor()
{
    return uPtr(_app)->ClearColor();
}

// public void set_ClearColor(float4 value) [instance] :253
void FakeApp::ClearColor(::g::Uno::Float4 value)
{
    uPtr(_app)->ClearColor(value);
}

// public float get_ClearDepth() [instance] :258
float FakeApp::ClearDepth()
{
    return uPtr(_app)->ClearDepth();
}

// public void set_ClearDepth(float value) [instance] :259
void FakeApp::ClearDepth(float value)
{
}

// public void Flash(string message) [instance] :162
void FakeApp::Flash(uString* message)
{
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_flashes), message);
}

// private bool get_HasFlash() [instance] :176
bool FakeApp::HasFlash()
{
    return _currentFlash != NULL;
}

// private void OnUpdate() [instance] :155
void FakeApp::OnUpdate()
{
    UpdateFlashes();
}

// public Fuse.Node get_Overlay() [instance] :230
::g::Fuse::Node* FakeApp::Overlay()
{
    ::g::Fuse::Node* ret3;
    return (::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[70/*Uno.Collections.EnumerableExtensions.FirstOrDefault<Fuse.Node>*/], uPtr(_overlayPlaceholde)->Children(), &ret3), ret3);
}

// public void set_Overlay(Fuse.Node value) [instance] :231
void FakeApp::Overlay(::g::Fuse::Node* value)
{
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(_overlayPlaceholde)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]));
    OverlayVisible(false);

    if (value != NULL)
    {
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_overlayPlaceholde)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), value);
        OverlayVisible(true);
    }
}

// private bool get_OverlayVisible() [instance] :127
bool FakeApp::OverlayVisible()
{
    return uPtr(_overlayPlaceholde)->Visibility() == 0;
}

// private void set_OverlayVisible(bool value) [instance] :128
void FakeApp::OverlayVisible(bool value)
{
    if (value)
        uPtr(_overlayPlaceholde)->Visibility(0);
    else
        uPtr(_overlayPlaceholde)->Visibility(2);
}

// private void RemoveExpiredFlashes() [instance] :179
void FakeApp::RemoveExpiredFlashes()
{
    if ((_currentFlash != NULL) && uPtr(_currentFlash)->IsExpired())
    {
        Overlay(NULL);
        _currentFlash = NULL;
    }
}

// public new Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :215
uObject* FakeApp::Resources1()
{
    return uPtr(_app)->Resources();
}

// public Fuse.Node get_RootNode() [instance] :220
::g::Fuse::Node* FakeApp::RootNode()
{
    ::g::Fuse::Node* ret4;
    return (::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[70/*Uno.Collections.EnumerableExtensions.FirstOrDefault<Fuse.Node>*/], uPtr(_rootPlaceholder)->Children(), &ret4), ret4);
}

// public void set_RootNode(Fuse.Node value) [instance] :221
void FakeApp::RootNode(::g::Fuse::Node* value)
{
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(_rootPlaceholder)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]));

    if (value != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_rootPlaceholder)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), value);
}

// public Fuse.Theme get_Theme() [instance] :246
::g::Fuse::Theme* FakeApp::Theme()
{
    return uPtr(_app)->Theme();
}

// public void set_Theme(Fuse.Theme value) [instance] :247
void FakeApp::Theme(::g::Fuse::Theme* value)
{
    uPtr(_app)->Theme(value);
}

// private void UpdateFlashes() [instance] :167
void FakeApp::UpdateFlashes()
{
    RemoveExpiredFlashes();

    if (!HasFlash())
        AddNewFlashes();
}

// public FakeApp New(Fuse.App app) [static] :135
FakeApp* FakeApp::New2(::g::Fuse::App* app)
{
    FakeApp* obj1 = (FakeApp*)uNew(FakeApp_typeof());
    obj1->ctor_4(app);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(843)
// --------------------------------------------------------------------------

// internal sealed class Faulted :843
// {
::g::Outracks::Simulator::State_type* Faulted_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Faulted);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.Faulted", options);
    type->SetBase(::g::Outracks::Simulator::ShowingModalDialog_typeof());
    ::STRINGS[25] = uString::Const("Oops! Something went wrong here.");
    ::STRINGS[26] = uString::Const("\n"
        "\n"
        "Please see the Fuse Monitor for details.");
    ::STRINGS[0] = uString::Const("");
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    type->SetFields(5);
    return type;
}

// public Faulted(bool isOnline, Uno.Exception exception, Outracks.Simulator.DialogButton[] buttons) :845
void Faulted__ctor_2_fn(Faulted* __this, bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    __this->ctor_2(*isOnline, exception, buttons);
}

// public Faulted New(bool isOnline, Uno.Exception exception, Outracks.Simulator.DialogButton[] buttons) :845
void Faulted__New2_fn(bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons, Faulted** __retval)
{
    *__retval = Faulted::New2(*isOnline, exception, buttons);
}

// public Faulted(bool isOnline, Uno.Exception exception, Outracks.Simulator.DialogButton[] buttons) [instance] :845
void Faulted::ctor_2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    ctor_1(::STRINGS[25/*"Oops! Somet...*/], ::g::Uno::String::op_Addition2(uPtr(exception)->Message(), isOnline ? ::STRINGS[26/*"\n\nPlease ...*/] : ::STRINGS[0/*""*/]), ::STRINGS[0/*""*/], buttons);
}

// public Faulted New(bool isOnline, Uno.Exception exception, Outracks.Simulator.DialogButton[] buttons) [static] :845
Faulted* Faulted::New2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    Faulted* obj1 = (Faulted*)uNew(Faulted_typeof());
    obj1->ctor_2(isOnline, exception, buttons);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(272)
// --------------------------------------------------------------------------

// internal sealed class Flasher :272
// {
::g::Fuse::Controls::Panel_type* Flasher_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Flasher);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Outracks.Simulator.Flasher", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Flasher__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Flasher__OnUnrooted_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[27] = uString::Const("#222");
    ::TYPES[73] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[74] = ::g::Uno::Float4_typeof();
    ::TYPES[75] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[76] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[68] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[77] = ::g::Fuse::BasicTheme::BasicStyle_typeof();
    ::TYPES[78] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[72] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[79] = ::g::Fuse::Time_typeof();
    ::TYPES[30] = ::g::Uno::Action_typeof();
    ::TYPES[80] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Uno::Double_typeof(), offsetof(::g::Outracks::Simulator::Flasher, _lastRooted), 0);
    return type;
}

// public Flasher(string text) :276
void Flasher__ctor_4_fn(Flasher* __this, uString* text)
{
    __this->ctor_4(text);
}

// private double get_AnimationParameter() :320
void Flasher__get_AnimationParameter_fn(Flasher* __this, double* __retval)
{
    *__retval = __this->AnimationParameter();
}

// public bool IsExpired() :313
void Flasher__IsExpired_fn(Flasher* __this, bool* __retval)
{
    *__retval = __this->IsExpired();
}

// public Flasher New(string text) :276
void Flasher__New2_fn(uString* text, Flasher** __retval)
{
    *__retval = Flasher::New2(text);
}

// protected override sealed void OnRooted() :295
void Flasher__OnRooted_fn(Flasher* __this)
{
    __this->_lastRooted = ::g::Fuse::Time::FrameTime();
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[30/*Uno.Action*/], (void*)Flasher__OnUpdate_fn, __this), 0);
    uPtr(__this->Background())->Pin();
}

// protected override sealed void OnUnrooted() :302
void Flasher__OnUnrooted_fn(Flasher* __this)
{
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[30/*Uno.Action*/], (void*)Flasher__OnUpdate_fn, __this), 0);
    uPtr(__this->Background())->Unpin();
}

// private void OnUpdate() :308
void Flasher__OnUpdate_fn(Flasher* __this)
{
    __this->OnUpdate();
}

// public Flasher(string text) [instance] :276
void Flasher::ctor_4(uString* text)
{
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Text* collection1;
    ::g::Fuse::Font* ind4;
    ::g::Uno::Float4 ind5;
    ctor_3();
    ::g::Fuse::Drawing::LinearGradient* linearGradient = ::g::Fuse::Drawing::LinearGradient::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(linearGradient->Stops()), ::TYPES[152/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Drawing::GradientStop_typeof())), ::g::Fuse::Drawing::GradientStop::New2(::g::Uno::Float4__New8((ind2 = ::g::Uno::Color::FromHex(::STRINGS[27/*"#222"*/]), ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z)), 0.9f), 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(linearGradient->Stops()), ::TYPES[152/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Drawing::GradientStop_typeof())), ::g::Fuse::Drawing::GradientStop::New2(::g::Uno::Float4__New8((ind3 = ::g::Uno::Color::FromHex(::STRINGS[27/*"#222"*/]), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z)), 0.9f), 1.0f));
    Background(linearGradient);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection1 = ::g::Fuse::Controls::Text::New2(), ind4 = ::g::Fuse::BasicTheme::BasicStyle::RobotoRegular(), uPtr(collection1)->Font(ind4), ind4, uPtr(collection1)->FontSize(25.0f), 25.0f, uPtr(collection1)->Value(text), text, ind5 = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f), uPtr(collection1)->TextColor(ind5), ind5, uPtr(collection1)->Alignment(10), 10, collection1));
}

// private double get_AnimationParameter() [instance] :320
double Flasher::AnimationParameter()
{
    return (::g::Fuse::Time::FrameTime() - _lastRooted) / 0.3;
}

// public bool IsExpired() [instance] :313
bool Flasher::IsExpired()
{
    return AnimationParameter() >= 1.1;
}

// private void OnUpdate() [instance] :308
void Flasher::OnUpdate()
{
    Opacity(::g::Uno::Math::Saturate1((1.0f - (float)AnimationParameter()) * 3.0f));
}

// public Flasher New(string text) [static] :276
Flasher* Flasher::New2(uString* text)
{
    Flasher* obj6 = (Flasher*)uNew(Flasher_typeof());
    obj6->ctor_4(text);
    return obj6;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(39)
// ----------------------------------------------------------------------------------

// internal sealed class Forget<TArg, TResult> :39
// {
uType* Forget_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(Forget);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Forget`2", options);
    type->SetFields(0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Forget(TResult result) :42
void Forget__ctor__fn(Forget* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    __this->_result() = result;
}

// public TResult Execute(TArg _) :47
void Forget__Execute_fn(Forget* __this, void* _, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    return __retval.Store(__this->_result()), void();
}

// public Forget New(TResult result) :42
void Forget__New1_fn(uType* __type, void* result, Forget** __retval)
{
    uType* __types[] = {
        __type->T(1),
    };
    Forget* obj1 = (Forget*)uNew(__type);
    Forget__ctor__fn(obj1, result);
    return *__retval = obj1, void();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(69)
// ----------------------------------------------------------------------------------

// internal sealed class Forget<TArg1, TArg2, TResult> :69
// {
uType* Forget1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(Forget1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Forget`3", options);
    type->SetFields(0,
        type->T(2), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Forget(TResult result) :72
void Forget1__ctor__fn(Forget1* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(2),
    };
    __this->_result() = result;
}

// public TResult Execute(TArg1 arg1, TArg2 arg2) :77
void Forget1__Execute_fn(Forget1* __this, void* arg1, void* arg2, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    return __retval.Store(__this->_result()), void();
}

// public Forget New(TResult result) :72
void Forget1__New1_fn(uType* __type, void* result, Forget1** __retval)
{
    uType* __types[] = {
        __type->T(2),
    };
    Forget1* obj1 = (Forget1*)uNew(__type);
    Forget1__ctor__fn(obj1, result);
    return *__retval = obj1, void();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(54)
// ----------------------------------------------------------------------------------

// public sealed class ForgetAction<TArg1, TArg2> :54
// {
uType* ForgetAction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ForgetAction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ForgetAction`2", options);
    ::TYPES[30] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Outracks::Simulator::ForgetAction, _action), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)ForgetAction__Execute_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)ForgetAction__New1_fn, 0, true, type, 1, ::g::Uno::Action_typeof()));
    return type;
}

// public ForgetAction(Uno.Action action) :58
void ForgetAction__ctor__fn(ForgetAction* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public void Execute(TArg1 arg1, TArg2 arg2) :63
void ForgetAction__Execute_fn(ForgetAction* __this, void* arg1, void* arg2)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uPtr(__this->_action)->InvokeVoid();
}

// public ForgetAction New(Uno.Action action) :58
void ForgetAction__New1_fn(uType* __type, uDelegate* action, ForgetAction** __retval)
{
    *__retval = ForgetAction::New1(__type, action);
}

// public ForgetAction(Uno.Action action) [instance] :58
void ForgetAction::ctor_(uDelegate* action)
{
    _action = action;
}

// public ForgetAction New(Uno.Action action) [static] :58
ForgetAction* ForgetAction::New1(uType* __type, uDelegate* action)
{
    ForgetAction* obj1 = (ForgetAction*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1075)
// ---------------------------------------------------------------------------

// internal sealed class GetSimulatorEndpoint :1075
// {
uType* GetSimulatorEndpoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GetSimulatorEndpoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.GetSimulatorEndpoint", options);
    ::STRINGS[28] = uString::Const("Call Tom Curise");
    ::TYPES[55] = ::g::Uno::Net::EndPoint_typeof();
    ::TYPES[81] = ::g::Uno::IO::Stream_typeof();
    ::TYPES[28] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[21] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::GetSimulatorEndpoint, project), 0,
        ::g::Uno::Net::IPEndPoint_typeof(), offsetof(::g::Outracks::Simulator::GetSimulatorEndpoint, proxy), 0);
    return type;
}

// public GetSimulatorEndpoint(Uno.Net.IPEndPoint proxy, string project) :1081
void GetSimulatorEndpoint__ctor__fn(GetSimulatorEndpoint* __this, ::g::Uno::Net::IPEndPoint* proxy1, uString* project1)
{
    __this->ctor_(proxy1, project1);
}

// public Uno.Net.IPEndPoint[] Execute() :1087
void GetSimulatorEndpoint__Execute_fn(GetSimulatorEndpoint* __this, uArray** __retval)
{
    *__retval = __this->Execute();
}

// public GetSimulatorEndpoint New(Uno.Net.IPEndPoint proxy, string project) :1081
void GetSimulatorEndpoint__New1_fn(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, GetSimulatorEndpoint** __retval)
{
    *__retval = GetSimulatorEndpoint::New1(proxy1, project1);
}

// public GetSimulatorEndpoint(Uno.Net.IPEndPoint proxy, string project) [instance] :1081
void GetSimulatorEndpoint::ctor_(::g::Uno::Net::IPEndPoint* proxy1, uString* project1)
{
    proxy = proxy1;
    project = project1;
}

// public Uno.Net.IPEndPoint[] Execute() [instance] :1087
uArray* GetSimulatorEndpoint::Execute()
{
    try
    {
        ::g::Uno::Net::Sockets::Socket* socket = ::g::Uno::Net::Sockets::Socket::Create(2, 1, 6);
        uPtr(socket)->Connect1(proxy);
        ::g::Uno::Net::Sockets::NetworkStream* stream = ::g::Uno::Net::Sockets::NetworkStream::New1(socket);

        try
        {
            ::g::Uno::IO::StreamWriter* writer = ::g::Uno::IO::StreamWriter::New1(stream);

            try
            {
                ::g::Uno::IO::StreamReader* reader = ::g::Uno::IO::StreamReader::New1(stream);

                try
                {
                    uPtr(writer)->WriteLine10(project);
                    writer->Flush();
                    uString* endpointCount = uPtr(reader)->ReadLine();

                    if (::g::Uno::String::op_Equality(endpointCount, NULL))
                        U_THROW(::g::Uno::IO::EndOfStreamException::New5());

                    uArray* endpoints = uArray::New(::TYPES[28/*Uno.Net.IPEndPoint[]*/], ::g::Uno::Int::Parse(endpointCount));

                    for (int i = 0; i < endpoints->Length(); i++)
                    {
                        uString* simulatorAddress = uPtr(reader)->ReadLine();

                        if (::g::Uno::String::op_Equality(simulatorAddress, NULL))
                            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

                        uString* simulatorPort = reader->ReadLine();

                        if (::g::Uno::String::op_Equality(simulatorPort, NULL))
                            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

                        uPtr(endpoints)->Strong< ::g::Uno::Net::IPEndPoint*>(i) = ::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(simulatorAddress), ::g::Uno::Int::Parse(simulatorPort));
                    }

                    try
                    {
                        uPtr(socket)->Shutdown(2);
                    }
                    catch (const uThrowable& __t)
                    {
                        ::g::Uno::Exception* e1 = __t.Exception;
                    }

                    return endpoints;
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[21/*Uno.IDisposable*/]));
                    throw __t;
                }
                // finally
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[21/*Uno.IDisposable*/]));
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)writer), ::TYPES[21/*Uno.IDisposable*/]));
                throw __t;
            }
            // finally
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)writer), ::TYPES[21/*Uno.IDisposable*/]));
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[21/*Uno.IDisposable*/]));
            throw __t;
        }
        // finally
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[21/*Uno.IDisposable*/]));
        U_THROW(::g::Uno::Exception::New2(::STRINGS[28/*"Call Tom Cu...*/]));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Outracks::Simulator::FailedToConnectToEndPoint::New4(proxy, e));
    }
}

// public GetSimulatorEndpoint New(Uno.Net.IPEndPoint proxy, string project) [static] :1081
GetSimulatorEndpoint* GetSimulatorEndpoint::New1(::g::Uno::Net::IPEndPoint* proxy1, uString* project1)
{
    GetSimulatorEndpoint* obj1 = (GetSimulatorEndpoint*)uNew(GetSimulatorEndpoint_typeof());
    obj1->ctor_(proxy1, project1);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(911)
// --------------------------------------------------------------------------

// internal static class GoOffline :911
// {
uClassType* GoOffline_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.GoOffline", options);
    ::STRINGS[29] = uString::Const("Go offline");
    ::TYPES[23] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Reify_typeof());
    ::TYPES[82] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[83] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[84] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[54] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[43] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[85] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof()->Array();
    ::TYPES[86] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof();
    ::TYPES[87] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[88] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof());
    return type;
}

// public static Outracks.Simulator.DialogButton[] PrependOption(Outracks.Simulator.DialogButton[] otherButtons) :913
void GoOffline__PrependOption_fn(uArray* otherButtons, uArray** __retval)
{
    *__retval = GoOffline::PrependOption(otherButtons);
}

// public static Outracks.Simulator.DialogButton[] PrependOption(Outracks.Simulator.DialogButton[] otherButtons) [static] :913
uArray* GoOffline::PrependOption(uArray* otherButtons)
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > oldReify = ::g::Outracks::Simulator::BytecodeCache::TryLoad();
    return oldReify.HasValue(::TYPES[23/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify>*/]) ? (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[82/*Uno.Collections.EnumerableExtensions.ToArray<Outracks.Simulator.DialogButton>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Union(::TYPES[83/*Uno.Collections.EnumerableExtensions.Union<Outracks.Simulator.DialogButton>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::AsEnumerable(::TYPES[84/*Uno.Collections.EnumerableExtensions.AsEnumerable<Outracks.Simulator.DialogButton>*/], uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[54/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[29/*"Go offline"*/], ::g::Outracks::Simulator::Idle::New1((uObject*)::g::Outracks::Simulator::OfflineSimulatorClient::New1(uArray::Init< ::g::Outracks::Simulator::Protocol::MessageToClient*>(::TYPES[85/*Outracks.Simulator.Protocol.MessageToClient[]*/], 1, (::g::Outracks::Simulator::Protocol::Reify*)oldReify.Value(::TYPES[23/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Protocol.Reify>*/]))))))), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[88/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Outracks.Simulator.DialogButton>*/], otherButtons)))) : otherButtons;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(632)
// --------------------------------------------------------------------------

// internal sealed class Idle :632
// {
::g::Outracks::Simulator::Connected_type* Idle_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Idle);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Connected_type);
    type = (::g::Outracks::Simulator::Connected_type*)uClassType::New("Outracks.Simulator.Idle", options);
    type->SetBase(::g::Outracks::Simulator::Connected_typeof());
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Idle__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Idle__OnFaulted_fn;
    ::STRINGS[30] = uString::Const("Loading");
    ::STRINGS[31] = uString::Const("Host is loading project...");
    ::STRINGS[21] = uString::Const("Try again");
    ::TYPES[89] = ::g::Uno::Diagnostics::LogHandler_typeof();
    ::TYPES[90] = ::g::Outracks::Simulator::Connected_typeof();
    ::TYPES[61] = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    ::TYPES[62] = ::g::Outracks::Simulator::DeviceInfo_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[43] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[54] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    type->SetFields(1);
    return type;
}

// public Idle(Outracks.Simulator.ISimulatorClient client) :634
void Idle__ctor_2_fn(Idle* __this, uObject* client)
{
    __this->ctor_2(client);
}

// public Idle New(Outracks.Simulator.ISimulatorClient client) :634
void Idle__New1_fn(uObject* client, Idle** __retval)
{
    *__retval = Idle::New1(client);
}

// public override sealed Outracks.Simulator.State OnEnterState() :638
void Idle__OnEnterState_fn(Idle* __this, ::g::Outracks::Simulator::State** __retval)
{
    ::g::Uno::Diagnostics::Debug::SetLogHandler(uDelegate::New(::TYPES[89/*Uno.Diagnostics.LogHandler*/], (void*)Idle__SendDebugLog_fn, __this));
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(__this->Client), ::TYPES[43/*Outracks.Simulator.ISimulatorClient*/]), ::g::Outracks::Simulator::Protocol::RegisterName::New1(::g::Outracks::Simulator::DeviceInfo::GUID(), ::g::Outracks::Simulator::DeviceInfo::Name()));
    ::g::Outracks::Simulator::LoadingScreen::Show(::g::Outracks::Simulator::Context::App(), ::STRINGS[30/*"Loading"*/], ::STRINGS[31/*"Host is loa...*/]);
    return *__retval = __this, void();
}

// protected override sealed Outracks.Simulator.State OnFaulted(Uno.Exception e) :651
void Idle__OnFaulted_fn(Idle* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    return *__retval = ::g::Outracks::Simulator::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[43/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[54/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[21/*"Try again"*/], __this))), void();
}

// private void SendDebugLog(string text, Uno.Diagnostics.DebugMessageType type) :646
void Idle__SendDebugLog_fn(Idle* __this, uString* text, int* type)
{
    __this->SendDebugLog(text, *type);
}

// public Idle(Outracks.Simulator.ISimulatorClient client) [instance] :634
void Idle::ctor_2(uObject* client)
{
    ctor_1(client);
}

// private void SendDebugLog(string text, Uno.Diagnostics.DebugMessageType type) [instance] :646
void Idle::SendDebugLog(uString* text, int type)
{
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[43/*Outracks.Simulator.ISimulatorClient*/]), ::g::Outracks::Simulator::Protocol::DebugLog::New1(::g::Outracks::Simulator::DeviceInfo::GUID(), ::g::Outracks::Simulator::DeviceInfo::Name(), text));
}

// public Idle New(Outracks.Simulator.ISimulatorClient client) [static] :634
Idle* Idle::New1(uObject* client)
{
    Idle* obj1 = (Idle*)uNew(Idle_typeof());
    obj1->ctor_2(client);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(544)
// -----------------------------------------------------------------------------------

// internal abstract interface IEquatable<T> :544
// {
uInterfaceType* IEquatable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.IEquatable`1", 1, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(141)
// -----------------------------------------------------------------------------------

// public sealed class ImmutableList<T> :141
// {
ImmutableList_type* ImmutableList_typeof()
{
    static uSStrong<ImmutableList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(ImmutableList);
    options.TypeSize = sizeof(ImmutableList_type);
    type = (ImmutableList_type*)uClassType::New("Outracks.Simulator.ImmutableList`1", options);
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ImmutableList__GetEnumerator_fn;
    ::TYPES[42] = uObject_typeof()->Array();
    ::TYPES[91] = ::g::Uno::Array_typeof();
    ::TYPES[92] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[93] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[94] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[24] = uObject_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::TYPES[91/*Uno.Array*/]->MakeMethod(1, type->T(0)),
        ::TYPES[92/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0)),
        ::TYPES[93/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->T(0)),
        ::TYPES[94/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ImmutableList_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Outracks::Simulator::ImmutableList, _array), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Add", NULL, (void*)ImmutableList__Add_fn, 0, false, type, 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)ImmutableList__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Empty", type, (void*)ImmutableList__get_Empty_fn, 0, true, type, 0),
        new uFunction("Get", NULL, (void*)ImmutableList__Get_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetEnumerator", NULL, (void*)ImmutableList__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("InsertRange", NULL, (void*)ImmutableList__InsertRange_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0))),
        new uFunction("get_Item", NULL, (void*)ImmutableList__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("Replace", NULL, (void*)ImmutableList__Replace_fn, 0, false, type, 2, type->T(0), type->T(0)));
    return type;
}

// internal ImmutableList(T[] array) :150
void ImmutableList__ctor__fn(ImmutableList* __this, uArray* array)
{
    __this->ctor_(array);
}

// public Outracks.Simulator.ImmutableList<T> Add(T element) :165
void ImmutableList__Add_fn(ImmutableList* __this, void* element, ImmutableList** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*T[]*/),
        __this->__type->Precalced(1/*Uno.Array.Copy<T>*/),
    };
    uArray* copy = uArray::New(__types[1], __this->Count() + 1);
    ::g::Uno::Array::Copy1(__types[2], __this->_array, copy, __this->Count());
    copy->TItem(__this->Count()) = element;
    return *__retval = ImmutableList::New1(__this->__type, copy), void();
}

// public int get_Count() :157
void ImmutableList__get_Count_fn(ImmutableList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public static Outracks.Simulator.ImmutableList<T> get_Empty() :145
void ImmutableList__get_Empty_fn(uType* __type, ImmutableList** __retval)
{
    *__retval = ImmutableList::Empty(__type);
}

// public T Get(int i) :194
void ImmutableList__Get_fn(ImmutableList* __this, int* i, uTRef __retval)
{
    int i_ = *i;
    return __retval.Store(uPtr(__this->_array)->TItem(i_)), void();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :160
void ImmutableList__GetEnumerator_fn(ImmutableList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Outracks.Simulator.ImmutableList<T> InsertRange(int index, Uno.Collections.IEnumerable<T> items) :173
void ImmutableList__InsertRange_fn(ImmutableList* __this, int* index, uObject* items, ImmutableList** __retval)
{
    *__retval = __this->InsertRange(*index, items);
}

// public T get_Item(int i) :201
void ImmutableList__get_Item_fn(ImmutableList* __this, int* i, uTRef __retval)
{
    int i_ = *i;
    return __retval.Store(uPtr(__this->_array)->TItem(i_)), void();
}

// internal ImmutableList New(T[] array) :150
void ImmutableList__New1_fn(uType* __type, uArray* array, ImmutableList** __retval)
{
    *__retval = ImmutableList::New1(__type, array);
}

// public Outracks.Simulator.ImmutableList<T> Replace(T element, T replacement) :184
void ImmutableList__Replace_fn(ImmutableList* __this, void* element, void* replacement, ImmutableList** __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*T[]*/),
    };
    uArray* copy = uArray::New(__types[1], __this->Count());

    for (int i = 0; i < __this->Count(); i++)
        copy->TItem(i) = ::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr(__this->_array)->TItem(i), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], element)) ? replacement : (void*)uPtr(__this->_array)->TItem(i);

    return *__retval = ImmutableList::New1(__this->__type, copy), void();
}

// internal ImmutableList(T[] array) [instance] :150
void ImmutableList::ctor_(uArray* array)
{
    _array = array;
}

// public int get_Count() [instance] :157
int ImmutableList::Count()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    return uPtr(_array)->Length();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :160
uObject* ImmutableList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.IEnumerable<T>*/),
        __type->T(0),
        __type->Precalced(3/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    return (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[2], _array)), __types[0]));
}

// public Outracks.Simulator.ImmutableList<T> InsertRange(int index, Uno.Collections.IEnumerable<T> items) [instance] :173
ImmutableList* ImmutableList::InsertRange(int index, uObject* items)
{
    uType* __types[] = {
        __type->Precalced(4/*Uno.Collections.EnumerableExtensions.ToArray<T>*/),
        __type->T(0),
        __type->Precalced(0/*T[]*/),
    };
    uArray* itemsArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(__types[0], items);
    uArray* copy = uArray::New(__types[2], Count() + uPtr(itemsArray)->Length());

    for (int i = 0; i < itemsArray->Length(); i++)
        copy->TItem(i) = itemsArray->TItem(i);

    for (int i1 = 0; i1 < Count(); i1++)
        copy->TItem(itemsArray->Length() + i1) = uPtr(_array)->TItem(i1);

    return ImmutableList::New1(__type, copy);
}

// internal ImmutableList New(T[] array) [static] :150
ImmutableList* ImmutableList::New1(uType* __type, uArray* array)
{
    ImmutableList* obj1 = (ImmutableList*)uNew(__type);
    obj1->ctor_(array);
    return obj1;
}

// public static Outracks.Simulator.ImmutableList<T> get_Empty() [static] :145
ImmutableList* ImmutableList::Empty(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    return ImmutableList::New1(__type, uArray::New(__types[0], 0));
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(432)
// -----------------------------------------------------------------------------------

// public static class IndentString :432
// {
uClassType* IndentString_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.IndentString", options);
    ::STRINGS[2] = uString::Const("\n"
        "");
    ::STRINGS[32] = uString::Const("\t");
    ::TYPES[95] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[96] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[97] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[98] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[99] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    type->Reflection.SetFunctions(1,
        new uFunction("Indent", NULL, (void*)IndentString__Indent_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public static string Indent(string str) :434
void IndentString__Indent_fn(uString* str, uString** __retval)
{
    *__retval = IndentString::Indent(str);
}

// private static string PrefixWithTab(string s) :439
void IndentString__PrefixWithTab_fn(uString* s, uString** __retval)
{
    *__retval = IndentString::PrefixWithTab(s);
}

// public static string Indent(string str) [static] :434
uString* IndentString::Indent(uString* str)
{
    return ::g::Outracks::Simulator::StringSplitting::Join((uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[95/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[97/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], ::g::Uno::String::Split(uPtr(str), uArray::Init<int>(::TYPES[98/*char[]*/], 1, 10)))), uDelegate::New(::TYPES[99/*Uno.Func<string, string>*/], (void*)IndentString__PrefixWithTab_fn)), ::STRINGS[2/*"\n"*/]);
}

// private static string PrefixWithTab(string s) [static] :439
uString* IndentString::PrefixWithTab(uString* s)
{
    return ::g::Uno::String::op_Addition2(::STRINGS[32/*"\t"*/], s);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(398)
// --------------------------------------------------------------------------

// public enum InputMode :398
uEnumType* InputMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Outracks.Simulator.InputMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Interactive", 0LL,
        "Design", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\$.uno(8)
// --------------------------------------------------------------------------

// public sealed class InvalidDataException :8
// {
::g::Uno::Exception_type* InvalidDataException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidDataException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.InvalidDataException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)InvalidDataException__New4_fn;
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InvalidDataException__New4_fn, 0, true, InvalidDataException_typeof(), 0));
    return type;
}

// public generated InvalidDataException() :8
void InvalidDataException__ctor_3_fn(InvalidDataException* __this)
{
    __this->ctor_3();
}

// public generated InvalidDataException New() :8
void InvalidDataException__New4_fn(InvalidDataException** __retval)
{
    *__retval = InvalidDataException::New4();
}

// public generated InvalidDataException() [instance] :8
void InvalidDataException::ctor_3()
{
    ctor_();
}

// public generated InvalidDataException New() [static] :8
InvalidDataException* InvalidDataException::New4()
{
    InvalidDataException* obj1 = (InvalidDataException*)uNew(InvalidDataException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1159)
// ---------------------------------------------------------------------------

// public abstract interface ISimulatorClient :1159
// {
uInterfaceType* ISimulatorClient_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.ISimulatorClient", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_IncommingMessages", NULL, NULL, offsetof(ISimulatorClient, fp_get_IncommingMessages), false, ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), 0),
        new uFunction("get_IsOnline", NULL, NULL, offsetof(ISimulatorClient, fp_get_IsOnline), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Send", NULL, NULL, offsetof(ISimulatorClient, fp_Send), false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(206)
// -----------------------------------------------------------------------------------

// public static class List :206
// {
uClassType* List_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.List", options);
    ::TYPES[100] = ::g::Outracks::Simulator::ImmutableList_typeof();
    ::TYPES[42] = uObject_typeof()->Array();
    ::TYPES[35] = ::g::Uno::Func1_typeof();
    ::TYPES[101] = ::g::Uno::IO::BinaryReader_typeof();
    ::TYPES[94] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[102] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[16] = ::g::Uno::Action2_typeof();
    ::TYPES[103] = ::g::Uno::IO::BinaryWriter_typeof();
    type->Reflection.SetFunctions(6,
        new uFunction("Create`1", type, (void*)List__Create_fn, 0, true, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), 1, type->U(0)->Array()),
        new uFunction("Read`1", type, (void*)List__Read_fn, 0, true, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), 2, ::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), type->U(0))),
        new uFunction("ReadImmutableList`1", type, (void*)List__ReadImmutableList_fn, 0, true, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), 2, ::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), type->U(0))),
        new uFunction("ToImmutableList`1", type, (void*)List__ToImmutableList_fn, 0, true, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0))),
        new uFunction("Write`1", type, (void*)List__Write_fn, 0, true, uVoid_typeof(), 3, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), ::g::Uno::IO::BinaryWriter_typeof(), ::g::Uno::Action2_typeof()->MakeType(type->U(0), ::g::Uno::IO::BinaryWriter_typeof())),
        new uFunction("Write`1", type, (void*)List__Write1_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::IO::BinaryWriter_typeof(), ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type->U(0)), ::g::Uno::Action2_typeof()->MakeType(type->U(0), ::g::Uno::IO::BinaryWriter_typeof())));
    return type;
}

// public static Outracks.Simulator.ImmutableList<T> Create<T>(T[] elements) :208
void List__Create_fn(uType* __type, uArray* elements, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::Create(__type, elements);
}

// public static Outracks.Simulator.ImmutableList<T> Read<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> elementReader) :230
void List__Read_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::Read(__type, reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ReadImmutableList<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> elementReader) :235
void List__ReadImmutableList_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::ReadImmutableList(__type, reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ToImmutableList<T>(Uno.Collections.IEnumerable<T> self) :213
void List__ToImmutableList_fn(uType* __type, uObject* self, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::ToImmutableList(__type, self);
}

// public static void Write<T>(Outracks.Simulator.ImmutableList<T> array, Uno.IO.BinaryWriter writer, Uno.Action<T, Uno.IO.BinaryWriter> elementWriter) :218
void List__Write_fn(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::Uno::IO::BinaryWriter* writer, uDelegate* elementWriter)
{
    List::Write(__type, array, writer, elementWriter);
}

// public static void Write<T>(Uno.IO.BinaryWriter writer, Outracks.Simulator.ImmutableList<T> array, Uno.Action<T, Uno.IO.BinaryWriter> elementWriter) :223
void List__Write1_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter)
{
    List::Write1(__type, writer, array, elementWriter);
}

// public static Outracks.Simulator.ImmutableList<T> Create<T>(T[] elements) [static] :208
::g::Outracks::Simulator::ImmutableList* List::Create(uType* __type, uArray* elements)
{
    uType* __types[] = {
        ::TYPES[100/*Outracks.Simulator.ImmutableList`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[0], elements);
}

// public static Outracks.Simulator.ImmutableList<T> Read<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> elementReader) [static] :230
::g::Outracks::Simulator::ImmutableList* List::Read(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader)
{
    uType* __types[] = {
        List_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
    };
    return (::g::Outracks::Simulator::ImmutableList*)List::ReadImmutableList(__types[0], reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ReadImmutableList<T>(Uno.IO.BinaryReader reader, Uno.Func<Uno.IO.BinaryReader, T> elementReader) [static] :235
::g::Outracks::Simulator::ImmutableList* List::ReadImmutableList(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader)
{
    uType* __types[] = {
        __type->U(0),
        __type->U(0)->Array(),
        ::TYPES[35/*Uno.Func`2*/]->MakeType(::TYPES[101/*Uno.IO.BinaryReader*/], __type->U(0)),
        ::TYPES[100/*Outracks.Simulator.ImmutableList`1*/]->MakeType(__type->U(0)),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    uArray* array = uArray::New(__types[1], uPtr(reader)->ReadInt());

    for (int i = 0; i < array->Length(); i++)
        array->TItem(i) = (uPtr(elementReader)->Invoke(&ret1, 1, reader), ret1);

    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[3], array);
}

// public static Outracks.Simulator.ImmutableList<T> ToImmutableList<T>(Uno.Collections.IEnumerable<T> self) [static] :213
::g::Outracks::Simulator::ImmutableList* List::ToImmutableList(uType* __type, uObject* self)
{
    uType* __types[] = {
        ::TYPES[100/*Outracks.Simulator.ImmutableList`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[94/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(1, __type->U(0)),
    };
    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[0], (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(__types[2], self));
}

// public static void Write<T>(Outracks.Simulator.ImmutableList<T> array, Uno.IO.BinaryWriter writer, Uno.Action<T, Uno.IO.BinaryWriter> elementWriter) [static] :218
void List::Write(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::Uno::IO::BinaryWriter* writer, uDelegate* elementWriter)
{
    uType* __types[] = {
        List_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
    };
    List::Write1(__types[0], writer, array, elementWriter);
}

// public static void Write<T>(Uno.IO.BinaryWriter writer, Outracks.Simulator.ImmutableList<T> array, Uno.Action<T, Uno.IO.BinaryWriter> elementWriter) [static] :223
void List::Write1(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[100/*Outracks.Simulator.ImmutableList`1*/]->MakeType(__type->U(0)),
        ::TYPES[102/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
        ::TYPES[16/*Uno.Action`2*/]->MakeType(__type->U(0), ::TYPES[103/*Uno.IO.BinaryWriter*/]),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT elm(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    uPtr(writer)->Write13(uPtr(array)->Count());

    for (uObject* enum1 = (uObject*)array->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        elm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret2), ret2);
        uPtr(elementWriter)->Invoke(2, (void*)elm, writer);
    }
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1553)
// ---------------------------------------------------------------------------

// internal sealed class LoadingScreen :1553
// {
uType* LoadingScreen_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LoadingScreen);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.LoadingScreen", options);
    type->fp_ctor_ = (void*)LoadingScreen__New1_fn;
    ::TYPES[8] = ::g::Outracks::Simulator::UserAppState_typeof();
    ::TYPES[6] = ::g::Outracks::Simulator::FakeApp_typeof();
    ::TYPES[104] = ::g::Fuse::Theme_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[72] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[68] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[78] = ::g::Fuse::Controls::TextControl_typeof();
    return type;
}

// public generated LoadingScreen() :1553
void LoadingScreen__ctor__fn(LoadingScreen* __this)
{
    __this->ctor_();
}

// public generated LoadingScreen New() :1553
void LoadingScreen__New1_fn(LoadingScreen** __retval)
{
    *__retval = LoadingScreen::New1();
}

// public static void Show(Outracks.Simulator.FakeApp app, string header, string message) :1555
void LoadingScreen__Show_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* message)
{
    LoadingScreen::Show(app, header, message);
}

// public generated LoadingScreen() [instance] :1553
void LoadingScreen::ctor_()
{
}

// public generated LoadingScreen New() [static] :1553
LoadingScreen* LoadingScreen::New1()
{
    LoadingScreen* obj8 = (LoadingScreen*)uNew(LoadingScreen_typeof());
    obj8->ctor_();
    return obj8;
}

// public static void Show(Outracks.Simulator.FakeApp app, string header, string message) [static] :1555
void LoadingScreen::Show(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* message)
{
    ::g::Fuse::Controls::StackPanel* collection1;
    ::g::Uno::Float4 ind5;
    uObject* array2;
    ::g::Fuse::Controls::Text* collection3;
    ::g::Uno::Float4 ind6;
    ::g::Fuse::Controls::Text* collection4;
    ::g::Uno::Float4 ind7;
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(app);
    uPtr(app)->Theme(::g::Fuse::BasicTheme::BasicTheme::New3());
    app->RootNode((collection1 = ::g::Fuse::Controls::StackPanel::New2(), uPtr(collection1)->Alignment(10), 10, ind5 = ::g::Uno::Float4__New1(40.0f), uPtr(collection1)->Padding(ind5), ind5, array2 = uPtr(collection1)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection3 = ::g::Fuse::Controls::Text::New2(), ind6 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection3)->Margin(ind6), ind6, uPtr(collection3)->Value(header), header, uPtr(collection3)->FontSize(40.0f), 40.0f, uPtr(collection3)->TextAlignment(1), 1, uPtr(collection3)->TextWrapping(1), 1, collection3)), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection4 = ::g::Fuse::Controls::Text::New2(), ind7 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection4)->Margin(ind7), ind7, uPtr(collection4)->Value(message), message, uPtr(collection4)->TextWrapping(1), 1, collection4)), collection1));
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1585)
// ---------------------------------------------------------------------------

// internal sealed class ModalDialog :1585
// {
uType* ModalDialog_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ModalDialog);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ModalDialog", options);
    type->fp_ctor_ = (void*)ModalDialog__New1_fn;
    ::TYPES[72] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[68] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[105] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[106] = ::g::Outracks_Simulator_Client_Uno_bundle_typeof();
    ::TYPES[107] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[78] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[108] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[109] = ::g::Fuse::Controls::StackPanel_typeof();
    ::TYPES[110] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[8] = ::g::Outracks::Simulator::UserAppState_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[6] = ::g::Outracks::Simulator::FakeApp_typeof();
    ::TYPES[104] = ::g::Fuse::Theme_typeof();
    return type;
}

// public generated ModalDialog() :1585
void ModalDialog__ctor__fn(ModalDialog* __this)
{
    __this->ctor_();
}

// public generated ModalDialog New() :1585
void ModalDialog__New1_fn(ModalDialog** __retval)
{
    *__retval = ModalDialog::New1();
}

// public static void Show(Outracks.Simulator.FakeApp app, string header, string body, string details, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) :1630
void ModalDialog__Show_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons)
{
    ModalDialog::Show(app, header, body, details, buttons);
}

// public static void ShowPrompt(Outracks.Simulator.FakeApp app, string header, string body, Fuse.Controls.Control inputControl, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) :1587
void ModalDialog__ShowPrompt_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons)
{
    ModalDialog::ShowPrompt(app, header, body, inputControl, buttons);
}

// public generated ModalDialog() [instance] :1585
void ModalDialog::ctor_()
{
}

// public generated ModalDialog New() [static] :1585
ModalDialog* ModalDialog::New1()
{
    ModalDialog* obj28 = (ModalDialog*)uNew(ModalDialog_typeof());
    obj28->ctor_();
    return obj28;
}

// public static void Show(Outracks.Simulator.FakeApp app, string header, string body, string details, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) [static] :1630
void ModalDialog::Show(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons)
{
    ::g::Fuse::Controls::StackPanel* collection7;
    uObject* array8;
    ::g::Fuse::Controls::Image* collection9;
    ::g::Uno::Float4 ind21;
    ::g::Uno::UX::FileSource* ind22;
    ::g::Fuse::Controls::Text* collection10;
    ::g::Uno::Float4 ind23;
    ::g::Fuse::Controls::Text* collection11;
    ::g::Uno::Float4 ind24;
    ::g::Fuse::Controls::ScrollView* collection12;
    ::g::Fuse::Controls::Text* collection13;
    ::g::Fuse::Controls::StackPanel* collection14;
    ::g::Fuse::Controls::Control* ret29;
    collection7 = ::g::Fuse::Controls::StackPanel::New2();
    uPtr(collection7)->Alignment(10);
    10;
    ::g::Uno::Float4 ind20 = ::g::Uno::Float4__New1(40.0f);
    uPtr(collection7)->Padding(ind20);
    ;
    array8 = uPtr(collection7)->Children();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array8), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection9 = ::g::Fuse::Controls::Image::New2(), ind21 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f), uPtr(collection9)->Margin(ind21), ind21, ind22 = ::g::Uno::UX::BundleFileSource::New1(::g::Outracks_Simulator_Client_Uno_bundle::fightfc762f98()), uPtr(collection9)->File(ind22), ind22, collection9));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array8), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection10 = ::g::Fuse::Controls::Text::New2(), ind23 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection10)->Margin(ind23), ind23, uPtr(collection10)->Value(header), header, uPtr(collection10)->FontSize(25.0f), 25.0f, uPtr(collection10)->TextAlignment(1), 1, uPtr(collection10)->TextWrapping(1), 1, collection10));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array8), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection11 = ::g::Fuse::Controls::Text::New2(), ind24 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection11)->Margin(ind24), ind24, uPtr(collection11)->Value(body), body, uPtr(collection11)->FontSize(15.0f), 15.0f, uPtr(collection11)->TextWrapping(1), 1, collection11));
    ::g::Fuse::Controls::StackPanel* root = collection7;

    if (!::g::Uno::String::IsNullOrWhiteSpace(details))
    {
        collection12 = ::g::Fuse::Controls::ScrollView::New2();
        ::g::Uno::Float4 ind25 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f);
        uPtr(collection12)->Margin(ind25);
        ;
        uPtr(collection12)->AllowedScrollDirections(15);
        15;
        uPtr(collection12)->MaxHeight(200.0f);
        200.0f;
        ::g::Fuse::Elements::Element* ind26 = (collection13 = ::g::Fuse::Controls::Text::New2(), uPtr(collection13)->FontSize(10.0f), 10.0f, uPtr(collection13)->Value(details), details, collection13);
        uPtr(collection12)->Content1(ind26);
        ;
        ::g::Fuse::Controls::ScrollView* detailsScroller = collection12;
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(root)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), detailsScroller);
    }

    collection14 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Uno::Float4 ind27 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f);
    uPtr(collection14)->Margin(ind27);
    ;
    uPtr(collection14)->Orientation(0);
    0;
    uPtr(collection14)->Alignment(10);
    10;
    ::g::Fuse::Controls::StackPanel* buttonPanel = collection14;

    for (uObject* enum15 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(buttons), ::TYPES[131/*Uno.Collections.IEnumerable<Fuse.Controls.Control>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum15), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Controls::Control* btn = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum15), ::TYPES[110/*Uno.Collections.IEnumerator<Fuse.Controls.Control>*/]), &ret29), ret29);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buttonPanel)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), btn);
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(root)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), buttonPanel);
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Context::App());
    uPtr(app)->Theme(::g::Fuse::BasicTheme::BasicTheme::New3());
    app->RootNode(root);
}

// public static void ShowPrompt(Outracks.Simulator.FakeApp app, string header, string body, Fuse.Controls.Control inputControl, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) [static] :1587
void ModalDialog::ShowPrompt(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons)
{
    ::g::Fuse::Controls::StackPanel* collection1;
    uObject* array2;
    ::g::Fuse::Controls::Text* collection3;
    ::g::Uno::Float4 ind17;
    ::g::Fuse::Controls::Text* collection4;
    ::g::Uno::Float4 ind18;
    ::g::Fuse::Controls::StackPanel* collection5;
    ::g::Fuse::Controls::Control* ret30;
    collection1 = ::g::Fuse::Controls::StackPanel::New2();
    uPtr(collection1)->Alignment(10);
    10;
    ::g::Uno::Float4 ind16 = ::g::Uno::Float4__New1(40.0f);
    uPtr(collection1)->Padding(ind16);
    ;
    array2 = uPtr(collection1)->Children();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection3 = ::g::Fuse::Controls::Text::New2(), ind17 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection3)->Margin(ind17), ind17, uPtr(collection3)->Value(header), header, uPtr(collection3)->FontSize(40.0f), 40.0f, uPtr(collection3)->TextAlignment(1), 1, uPtr(collection3)->TextWrapping(1), 1, collection3));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection4 = ::g::Fuse::Controls::Text::New2(), ind18 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection4)->Margin(ind18), ind18, uPtr(collection4)->Value(body), body, uPtr(collection4)->TextWrapping(1), 1, collection4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), inputControl);
    ::g::Fuse::Controls::StackPanel* root = collection1;
    collection5 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Uno::Float4 ind19 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f);
    uPtr(collection5)->Margin(ind19);
    ;
    uPtr(collection5)->Orientation(0);
    0;
    uPtr(collection5)->Alignment(10);
    10;
    ::g::Fuse::Controls::StackPanel* buttonPanel = collection5;

    for (uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(buttons), ::TYPES[131/*Uno.Collections.IEnumerable<Fuse.Controls.Control>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Controls::Control* btn = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::TYPES[110/*Uno.Collections.IEnumerator<Fuse.Controls.Control>*/]), &ret30), ret30);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buttonPanel)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), btn);
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(root)->Children()), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/]), buttonPanel);
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Context::App());
    uPtr(app)->Theme(::g::Fuse::BasicTheme::BasicTheme::New3());
    app->RootNode(root);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\$.uno(13)
// ---------------------------------------------------------------------------

// public sealed class NonExhaustiveMatch :13
// {
::g::Uno::Exception_type* NonExhaustiveMatch_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NonExhaustiveMatch);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.NonExhaustiveMatch", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)NonExhaustiveMatch__New4_fn;
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NonExhaustiveMatch__New4_fn, 0, true, NonExhaustiveMatch_typeof(), 0));
    return type;
}

// public generated NonExhaustiveMatch() :13
void NonExhaustiveMatch__ctor_3_fn(NonExhaustiveMatch* __this)
{
    __this->ctor_3();
}

// public generated NonExhaustiveMatch New() :13
void NonExhaustiveMatch__New4_fn(NonExhaustiveMatch** __retval)
{
    *__retval = NonExhaustiveMatch::New4();
}

// public generated NonExhaustiveMatch() [instance] :13
void NonExhaustiveMatch::ctor_3()
{
    ctor_();
}

// public generated NonExhaustiveMatch New() [static] :13
NonExhaustiveMatch* NonExhaustiveMatch::New4()
{
    NonExhaustiveMatch* obj1 = (NonExhaustiveMatch*)uNew(NonExhaustiveMatch_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1168)
// ---------------------------------------------------------------------------

// public sealed class OfflineSimulatorClient :1168
// {
OfflineSimulatorClient_type* OfflineSimulatorClient_typeof()
{
    static uSStrong<OfflineSimulatorClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(OfflineSimulatorClient);
    options.TypeSize = sizeof(OfflineSimulatorClient_type);
    type = (OfflineSimulatorClient_type*)uClassType::New("Outracks.Simulator.OfflineSimulatorClient", options);
    type->interface0.fp_Send = (void(*)(uObject*, ::g::Outracks::Simulator::Protocol::MessageFromClient*))OfflineSimulatorClient__Send_fn;
    type->interface0.fp_get_IncommingMessages = (void(*)(uObject*, ::g::Outracks::Simulator::ConcurrentQueue**))OfflineSimulatorClient__get_IncommingMessages_fn;
    type->interface0.fp_get_IsOnline = (void(*)(uObject*, bool*))OfflineSimulatorClient__get_IsOnline_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))OfflineSimulatorClient__Dispose_fn;
    ::TYPES[111] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageFromClient_typeof());
    ::TYPES[112] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof());
    ::TYPES[85] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof()->Array();
    type->SetInterfaces(
        ::g::Outracks::Simulator::ISimulatorClient_typeof(), offsetof(OfflineSimulatorClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(OfflineSimulatorClient_type, interface1));
    type->SetFields(0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()), offsetof(::g::Outracks::Simulator::OfflineSimulatorClient, _messagesFromClient), 0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), offsetof(::g::Outracks::Simulator::OfflineSimulatorClient, _messagesToClient), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Dispose", NULL, (void*)OfflineSimulatorClient__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IncommingMessages", NULL, (void*)OfflineSimulatorClient__get_IncommingMessages_fn, 0, false, ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), 0),
        new uFunction("get_IsOnline", NULL, (void*)OfflineSimulatorClient__get_IsOnline_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)OfflineSimulatorClient__New1_fn, 0, true, OfflineSimulatorClient_typeof(), 1, ::g::Outracks::Simulator::Protocol::MessageToClient_typeof()->Array()),
        new uFunction("Send", NULL, (void*)OfflineSimulatorClient__Send_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()));
    return type;
}

// public OfflineSimulatorClient(Outracks.Simulator.Protocol.MessageToClient[] initialMessages) :1173
void OfflineSimulatorClient__ctor__fn(OfflineSimulatorClient* __this, uArray* initialMessages)
{
    __this->ctor_(initialMessages);
}

// public void Dispose() :1189
void OfflineSimulatorClient__Dispose_fn(OfflineSimulatorClient* __this)
{
    __this->Dispose();
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient> get_IncommingMessages() :1181
void OfflineSimulatorClient__get_IncommingMessages_fn(OfflineSimulatorClient* __this, ::g::Outracks::Simulator::ConcurrentQueue** __retval)
{
    *__retval = __this->IncommingMessages();
}

// public bool get_IsOnline() :1196
void OfflineSimulatorClient__get_IsOnline_fn(OfflineSimulatorClient* __this, bool* __retval)
{
    *__retval = __this->IsOnline();
}

// public OfflineSimulatorClient New(Outracks.Simulator.Protocol.MessageToClient[] initialMessages) :1173
void OfflineSimulatorClient__New1_fn(uArray* initialMessages, OfflineSimulatorClient** __retval)
{
    *__retval = OfflineSimulatorClient::New1(initialMessages);
}

// public void Send(Outracks.Simulator.Protocol.MessageFromClient message) :1184
void OfflineSimulatorClient__Send_fn(OfflineSimulatorClient* __this, ::g::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    __this->Send(message);
}

// public OfflineSimulatorClient(Outracks.Simulator.Protocol.MessageToClient[] initialMessages) [instance] :1173
void OfflineSimulatorClient::ctor_(uArray* initialMessages)
{
    uArray* array1;
    int index2;
    int length3;
    _messagesFromClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[111/*Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageFromClient>*/]));
    _messagesToClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[112/*Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient>*/]));

    for (array1 = initialMessages, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Outracks::Simulator::Protocol::MessageToClient* msg = uPtr(array1)->Strong< ::g::Outracks::Simulator::Protocol::MessageToClient*>(index2);
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), msg);
    }
}

// public void Dispose() [instance] :1189
void OfflineSimulatorClient::Dispose()
{
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient> get_IncommingMessages() [instance] :1181
::g::Outracks::Simulator::ConcurrentQueue* OfflineSimulatorClient::IncommingMessages()
{
    return _messagesToClient;
}

// public bool get_IsOnline() [instance] :1196
bool OfflineSimulatorClient::IsOnline()
{
    return false;
}

// public void Send(Outracks.Simulator.Protocol.MessageFromClient message) [instance] :1184
void OfflineSimulatorClient::Send(::g::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesFromClient), message);
}

// public OfflineSimulatorClient New(Outracks.Simulator.Protocol.MessageToClient[] initialMessages) [static] :1173
OfflineSimulatorClient* OfflineSimulatorClient::New1(uArray* initialMessages)
{
    OfflineSimulatorClient* obj4 = (OfflineSimulatorClient*)uNew(OfflineSimulatorClient_typeof());
    obj4->ctor_(initialMessages);
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1055)
// ---------------------------------------------------------------------------

// public sealed class ProxyClient :1055
// {
uType* ProxyClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ProxyClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ProxyClient", options);
    type->fp_ctor_ = (void*)ProxyClient__New1_fn;
    ::TYPES[113] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array()));
    ::TYPES[114] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[115] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1, ::g::Uno::Net::IPEndPoint_typeof()->Array());
    ::TYPES[116] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array());
    ::TYPES[117] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1, ::g::Uno::Net::IPEndPoint_typeof()->Array());
    ::TYPES[118] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array()));
    ::TYPES[119] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof()), ::g::Uno::Net::IPEndPoint_typeof()->Array());
    type->Reflection.SetFunctions(2,
        new uFunction("GetSimulatorEndpoint", NULL, (void*)ProxyClient__GetSimulatorEndpoint_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array()), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()), ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ProxyClient__New1_fn, 0, true, ProxyClient_typeof(), 0));
    return type;
}

// public generated ProxyClient() :1055
void ProxyClient__ctor__fn(ProxyClient* __this)
{
    __this->ctor_();
}

// public static Outracks.Simulator.Task<Uno.Net.IPEndPoint[]> GetSimulatorEndpoint(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> proxyEndpoints, string project) :1057
void ProxyClient__GetSimulatorEndpoint_fn(uObject* proxyEndpoints, uString* project, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = ProxyClient::GetSimulatorEndpoint(proxyEndpoints, project);
}

// public generated ProxyClient New() :1055
void ProxyClient__New1_fn(ProxyClient** __retval)
{
    *__retval = ProxyClient::New1();
}

// private static Uno.Net.IPEndPoint[] OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) :1069
void ProxyClient__OnNoResult_fn(uObject* exceptions, uArray** __retval)
{
    *__retval = ProxyClient::OnNoResult(exceptions);
}

// public generated ProxyClient() [instance] :1055
void ProxyClient::ctor_()
{
}

// public static Outracks.Simulator.Task<Uno.Net.IPEndPoint[]> GetSimulatorEndpoint(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> proxyEndpoints, string project) [static] :1057
::g::Outracks::Simulator::Task* ProxyClient::GetSimulatorEndpoint(uObject* proxyEndpoints, uString* project)
{
    ::g::Uno::Net::IPEndPoint* ret3;
    ::g::Uno::Collections::List* tasks = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[113/*Uno.Collections.List<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(proxyEndpoints), ::TYPES[49/*Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::Net::IPEndPoint* endpoint = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[114/*Uno.Collections.IEnumerator<Uno.Net.IPEndPoint>*/]), &ret3), ret3);
        ::g::Uno::Collections::List__Add_fn(uPtr(tasks), (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::Run(::TYPES[115/*Outracks.Simulator.Tasks.Run<Uno.Net.IPEndPoint[]>*/], uDelegate::New(::TYPES[116/*Uno.Func<Uno.Net.IPEndPoint[]>*/], (void*)::g::Outracks::Simulator::GetSimulatorEndpoint__Execute_fn, ::g::Outracks::Simulator::GetSimulatorEndpoint::New1(endpoint, project))));
    }

    return (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::WaitForFirstResult(::TYPES[117/*Outracks.Simulator.Tasks.WaitForFirstResult<Uno.Net.IPEndPoint[]>*/], (uObject*)tasks, uDelegate::New(::TYPES[119/*Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, Uno.Net.IPEndPoint[]>*/], (void*)ProxyClient__OnNoResult_fn));
}

// public generated ProxyClient New() [static] :1055
ProxyClient* ProxyClient::New1()
{
    ProxyClient* obj2 = (ProxyClient*)uNew(ProxyClient_typeof());
    obj2->ctor_();
    return obj2;
}

// private static Uno.Net.IPEndPoint[] OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) [static] :1069
uArray* ProxyClient::OnNoResult(uObject* exceptions)
{
    U_THROW(::g::Outracks::Simulator::FailedToConnectToProxy::New4(exceptions));
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(695)
// --------------------------------------------------------------------------

// internal sealed class Reifying :695
// {
::g::Outracks::Simulator::Connected_type* Reifying_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Reifying);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Connected_type);
    type = (::g::Outracks::Simulator::Connected_type*)uClassType::New("Outracks.Simulator.Reifying", options);
    type->SetBase(::g::Outracks::Simulator::Connected_typeof());
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Reifying__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Reifying__OnFaulted_fn;
    ::STRINGS[21] = uString::Const("Try again");
    ::TYPES[8] = ::g::Outracks::Simulator::UserAppState_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[25] = ::g::Outracks::Simulator::Protocol::Reify_typeof();
    ::TYPES[42] = uObject_typeof()->Array();
    ::TYPES[24] = uObject_typeof();
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[90] = ::g::Outracks::Simulator::Connected_typeof();
    ::TYPES[43] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[54] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    type->SetFields(1,
        ::g::Outracks::Simulator::Protocol::Reify_typeof(), offsetof(::g::Outracks::Simulator::Reifying, _reify), 0);
    return type;
}

// public Reifying(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.Reify reify) :699
void Reifying__ctor_2_fn(Reifying* __this, uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify)
{
    __this->ctor_2(client, reify);
}

// public Reifying New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.Reify reify) :699
void Reifying__New1_fn(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify, Reifying** __retval)
{
    *__retval = Reifying::New1(client, reify);
}

// public override sealed Outracks.Simulator.State OnEnterState() :705
void Reifying__OnEnterState_fn(Reifying* __this, ::g::Outracks::Simulator::State** __retval)
{
    ::g::Outracks::Simulator::BytecodeCache::TrySave(__this->_reify);
    uPtr(::g::Outracks::Simulator::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Context::App());
    ::g::Outracks::Simulator::Runtime::VirtualMachine::Execute(uPtr(__this->_reify)->AppMutator, uArray::Init<uObject*>(::TYPES[42/*object[]*/], 1, (::g::Outracks::Simulator::FakeApp*)::g::Outracks::Simulator::Context::App()));
    ::g::Outracks::Simulator::UserAppState* userState = ::g::Outracks::Simulator::UserAppState::Save(::g::Outracks::Simulator::Context::App());
    return *__retval = ::g::Outracks::Simulator::Running::New1(__this->Client, userState, __this->_reify), void();
}

// protected override sealed Outracks.Simulator.State OnFaulted(Uno.Exception e) :717
void Reifying__OnFaulted_fn(Reifying* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    return *__retval = ::g::Outracks::Simulator::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[43/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[54/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[21/*"Try again"*/], ::g::Outracks::Simulator::ConnectingToProxy::New1()))), void();
}

// public Reifying(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.Reify reify) [instance] :699
void Reifying::ctor_2(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify)
{
    ctor_1(client);
    _reify = reify;
}

// public Reifying New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.Reify reify) [static] :699
Reifying* Reifying::New1(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify)
{
    Reifying* obj1 = (Reifying*)uNew(Reifying_typeof());
    obj1->ctor_2(client, reify);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(723)
// --------------------------------------------------------------------------

// internal sealed class Running :723
// {
::g::Outracks::Simulator::Connected_type* Running_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Running);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Connected_type);
    type = (::g::Outracks::Simulator::Connected_type*)uClassType::New("Outracks.Simulator.Running", options);
    type->SetBase(::g::Outracks::Simulator::Connected_typeof());
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Running__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Running__OnFaulted_fn;
    type->fp_OnLeaveState = (void(*)(::g::Outracks::Simulator::State*))Running__OnLeaveState_fn;
    type->fp_OnPointerPressed = (void(*)(::g::Outracks::Simulator::State*, ::g::Fuse::Input::PointerPressedArgs*, ::g::Outracks::Simulator::State**))Running__OnPointerPressed_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Running__OnUpdate_fn;
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[33] = uString::Const("Ignore");
    ::STRINGS[34] = uString::Const("Restart");
    ::STRINGS[16] = uString::Const("N/A");
    ::STRINGS[35] = uString::Const("Density changed, reifying");
    ::STRINGS[36] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Outracks.Simulator.Client.Uno\\0.1.0\\$.uno");
    ::TYPES[24] = uObject_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[43] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[90] = ::g::Outracks::Simulator::Connected_typeof();
    ::TYPES[54] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Outracks::Simulator::UserAppState_typeof();
    ::TYPES[120] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[121] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[60] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[61] = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    ::TYPES[56] = ::g::Fuse::Preview::ISelection_typeof();
    ::TYPES[12] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[69] = ::g::Uno::Application_typeof();
    ::TYPES[4] = ::g::Fuse::AppBase_typeof();
    type->SetFields(1,
        ::g::Outracks::Simulator::Protocol::Reify_typeof(), offsetof(::g::Outracks::Simulator::Running, _runningReify), 0,
        ::g::Outracks::Simulator::UserAppState_typeof(), offsetof(::g::Outracks::Simulator::Running, _userApp), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Outracks::Simulator::Running, _zoomWhenRooted), 0);
    return type;
}

// public Running(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.UserAppState userApp, Outracks.Simulator.Protocol.Reify runningReify) :730
void Running__ctor_2_fn(Running* __this, uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify)
{
    __this->ctor_2(client, userApp, runningReify);
}

// private static string GetTag(Fuse.Node node) :798
void Running__GetTag_fn(::g::Fuse::Node* node, uString** __retval)
{
    *__retval = Running::GetTag(node);
}

// public Running New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.UserAppState userApp, Outracks.Simulator.Protocol.Reify runningReify) :730
void Running__New1_fn(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify, Running** __retval)
{
    *__retval = Running::New1(client, userApp, runningReify);
}

// public override sealed Outracks.Simulator.State OnEnterState() :740
void Running__OnEnterState_fn(Running* __this, ::g::Outracks::Simulator::State** __retval)
{
    uPtr(__this->_userApp)->ApplyTo(::g::Outracks::Simulator::Context::App());
    __this->_zoomWhenRooted = Running::QueryDensity();
    return *__retval = __this, void();
}

// protected override sealed Outracks.Simulator.State OnFaulted(Uno.Exception e) :764
void Running__OnFaulted_fn(Running* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    return *__retval = ::g::Outracks::Simulator::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[43/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[54/*Outracks.Simulator.DialogButton[]*/], 2, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[33/*"Ignore"*/], __this), (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[34/*"Restart"*/], ::g::Outracks::Simulator::ConnectingToProxy::New1()))), void();
}

// public override sealed void OnLeaveState() :747
void Running__OnLeaveState_fn(Running* __this)
{
    __this->_userApp = ::g::Outracks::Simulator::UserAppState::Save(::g::Outracks::Simulator::Context::App());
}

// public override sealed Outracks.Simulator.State OnPointerPressed(Fuse.Input.PointerPressedArgs args) :777
void Running__OnPointerPressed_fn(Running* __this, ::g::Fuse::Input::PointerPressedArgs* args, ::g::Outracks::Simulator::State** __retval)
{
    ::g::Fuse::Node* ret2;

    if (::g::Outracks::Simulator::Context::InputMode() != 1)
        return *__retval = __this, void();

    ::g::Fuse::Node* root = uPtr(__this->_userApp)->RootNode;

    if (root == NULL)
        return *__retval = __this, void();

    uObject* nodes = ::g::Outracks::Simulator::EnumerableHitTestExtension::HitTest2(root, uPtr(args)->WindowPoint());
    uString* selectedTag = (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::TYPES[121/*Uno.Collections.ICollection<Fuse.Node>*/])) >= 1) ? (uString*)Running::GetTag((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::TYPES[60/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), &ret2), ret2)) : ::STRINGS[16/*"N/A"*/];
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(__this->Client), ::TYPES[43/*Outracks.Simulator.ISimulatorClient*/]), ::g::Outracks::Simulator::Protocol::SetSelection::New1(selectedTag));
    ::g::Fuse::Preview::SelectionManager::SetSelection((uObject*)::g::Outracks::Simulator::Runtime::Selection::New1(selectedTag, NULL));
    args->IsHandled(true);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :752
void Running__OnUpdate_fn(Running* __this, ::g::Outracks::Simulator::State** __retval)
{
    ::g::Outracks::Simulator::State* ret3;
    float currentZoom = Running::QueryDensity();

    if (currentZoom != __this->_zoomWhenRooted)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[35/*"Density cha...*/], 1, ::STRINGS[36/*"C:\\Program...*/], 757);
        return *__retval = ::g::Outracks::Simulator::Reifying::New1(__this->Client, __this->_runningReify), void();
    }

    return *__retval = (::g::Outracks::Simulator::Connected__OnUpdate_fn(__this, &ret3), ret3), void();
}

// private static float QueryDensity() :771
void Running__QueryDensity_fn(float* __retval)
{
    *__retval = Running::QueryDensity();
}

// public Running(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.UserAppState userApp, Outracks.Simulator.Protocol.Reify runningReify) [instance] :730
void Running::ctor_2(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify)
{
    ctor_1(client);
    _userApp = userApp;
    _runningReify = runningReify;
}

// private static string GetTag(Fuse.Node node) [static] :798
uString* Running::GetTag(::g::Fuse::Node* node)
{
    if (node == NULL)
        return ::STRINGS[0/*""*/];

    uString* tag = ::g::Outracks::Simulator::Runtime::ObjectTagRegistry::GetTagHash(node);
    return ::g::Uno::String::op_Equality(tag, NULL) ? (uString*)Running::GetTag(uPtr(node)->Parent()) : tag;
}

// public Running New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.UserAppState userApp, Outracks.Simulator.Protocol.Reify runningReify) [static] :730
Running* Running::New1(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify)
{
    Running* obj1 = (Running*)uNew(Running_typeof());
    obj1->ctor_2(client, userApp, runningReify);
    return obj1;
}

// private static float QueryDensity() [static] :771
float Running::QueryDensity()
{
    ::Xli::Window* wnd = ::g::Uno::Runtime::Implementation::Internal::WindowHelpers::GetPlatformWindowHandle(uPtr(::g::Fuse::AppBase::Current1())->Window());
    return ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetDensity(wnd);
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(549)
// -----------------------------------------------------------------------------------

// internal static class Serialization :549
// {
// static Serialization() :549
static void Serialization__cctor__fn(uType* __type)
{
    Serialization::ReadString_ = uDelegate::New(::TYPES[122/*Uno.Func<Uno.IO.BinaryReader, string>*/], (void*)Serialization___ReadString_fn);
}

uClassType* Serialization_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Serialization", options);
    type->fp_cctor_ = Serialization__cctor__fn;
    ::TYPES[122] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Outracks::Simulator::Serialization::ReadString_, uFieldFlagsStatic);
    return type;
}

// public static string _ReadString(Uno.IO.BinaryReader reader) :553
void Serialization___ReadString_fn(::g::Uno::IO::BinaryReader* reader, uString** __retval)
{
    *__retval = Serialization::_ReadString(reader);
}

uSStrong<uDelegate*> Serialization::ReadString_;

// public static string _ReadString(Uno.IO.BinaryReader reader) [static] :553
uString* Serialization::_ReadString(::g::Uno::IO::BinaryReader* reader)
{
    Serialization_typeof()->Init();
    return uPtr(reader)->ReadString();
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1765)
// ---------------------------------------------------------------------------

// internal class ShowingModalDialog :1765
// {
::g::Outracks::Simulator::State_type* ShowingModalDialog_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ShowingModalDialog);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.ShowingModalDialog", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ShowingModalDialog__OnEnterState_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))ShowingModalDialog__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ShowingModalDialog__OnUpdate_fn;
    ::STRINGS[36] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Outracks.Simulator.Client.Uno\\0.1.0\\$.uno");
    ::TYPES[123] = ::g::Outracks::Simulator::Bytecode::Optional_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[124] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[54] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[125] = ::g::Outracks::Simulator::DialogButton_typeof();
    ::TYPES[126] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[127] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(1, ::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[128] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof());
    ::TYPES[129] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[130] = ::g::Outracks::Simulator::ForgetAction_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Gestures::ClickedArgs_typeof());
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[75] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[131] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[132] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingModalDialog, _body), 0,
        ::g::Outracks::Simulator::DialogButton_typeof()->Array(), offsetof(::g::Outracks::Simulator::ShowingModalDialog, _buttons), 0,
        ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::DialogButton_typeof()), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingModalDialog, _details), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingModalDialog, _header), 0);
    return type;
}

// public ShowingModalDialog(string header, string body, string details, Outracks.Simulator.DialogButton[] buttons) :1774
void ShowingModalDialog__ctor_1_fn(ShowingModalDialog* __this, uString* header, uString* body, uString* details, uArray* buttons)
{
    __this->ctor_1(header, body, details, buttons);
}

// public ShowingModalDialog New(string header, string body, string details, Outracks.Simulator.DialogButton[] buttons) :1774
void ShowingModalDialog__New1_fn(uString* header, uString* body, uString* details, uArray* buttons, ShowingModalDialog** __retval)
{
    *__retval = ShowingModalDialog::New1(header, body, details, buttons);
}

// private void OnButtonClicked(Outracks.Simulator.DialogButton button) :1807
void ShowingModalDialog__OnButtonClicked_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::DialogButton* button)
{
    __this->OnButtonClicked(button);
}

// public override sealed Outracks.Simulator.State OnEnterState() :1786
void ShowingModalDialog__OnEnterState_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::State** __retval)
{
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Controls::Button* collection4;
    uDelegate* ret8;
    ::g::Uno::Collections::List* buttons = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[124/*Uno.Collections.List<Fuse.Controls.Control>*/]);

    for (array1 = __this->_buttons, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Outracks::Simulator::DialogButton* button = uPtr(array1)->Strong< ::g::Outracks::Simulator::DialogButton*>(index2);
        collection4 = ::g::Fuse::Controls::Button::New2();
        uString* ind5 = uPtr(button)->Text;
        uPtr(collection4)->Text(ind5);
        ;
        ::g::Fuse::Controls::Button* node = collection4;
        uDelegate* action = (::g::Outracks::Simulator::Closure__Apply_fn(::TYPES[127/*Outracks.Simulator.Closure.Apply<Outracks.Simulator.DialogButton>*/], uDelegate::New(::TYPES[128/*Uno.Action<Outracks.Simulator.DialogButton>*/], (void*)ShowingModalDialog__OnButtonClicked_fn, __this), button, &ret8), ret8);
        uDelegate* handler = uDelegate::New(::TYPES[129/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Outracks::Simulator::ForgetAction__Execute_fn, (::g::Outracks::Simulator::ForgetAction*)::g::Outracks::Simulator::ForgetAction::New1(::TYPES[130/*Outracks.Simulator.ForgetAction<object, Fuse.Gestures.ClickedArgs>*/], action));
        ::g::Fuse::Gestures::Clicked::AddHandler(node, handler);
        ::g::Uno::Collections::List__Add_fn(uPtr(buttons), node);
    }

    ::g::Outracks::Simulator::ModalDialog::Show(::g::Outracks::Simulator::Context::App(), __this->_header, __this->_body, __this->_details, (uObject*)buttons);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :1820
void ShowingModalDialog__OnException_fn(ShowingModalDialog* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->Message(), 1, ::STRINGS[36/*"C:\\Program...*/], 1822);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :1812
void ShowingModalDialog__OnUpdate_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::State** __retval)
{
    if (__this->_clickedButton().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::DialogButton*> > >().HasValue(::TYPES[132/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.DialogButton>*/]))
        return *__retval = uPtr(__this->_clickedButton().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::DialogButton*> > >().Value(::TYPES[132/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.DialogButton>*/]))->Destination, void();

    return *__retval = __this, void();
}

// public ShowingModalDialog(string header, string body, string details, Outracks.Simulator.DialogButton[] buttons) [instance] :1774
void ShowingModalDialog::ctor_1(uString* header, uString* body, uString* details, uArray* buttons)
{
    ctor_();
    _header = header;
    _body = body;
    _details = details;
    _buttons = buttons;
}

// private void OnButtonClicked(Outracks.Simulator.DialogButton button) [instance] :1807
void ShowingModalDialog::OnButtonClicked(::g::Outracks::Simulator::DialogButton* button)
{
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::DialogButton*> > ret7;
    _clickedButton().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::DialogButton*> > >() = (::g::Outracks::Simulator::Bytecode::Optional__Some_fn(::TYPES[123/*Outracks.Simulator.Bytecode.Optional.Some<Outracks.Simulator.DialogButton>*/], button, &ret7), ret7);
}

// public ShowingModalDialog New(string header, string body, string details, Outracks.Simulator.DialogButton[] buttons) [static] :1774
ShowingModalDialog* ShowingModalDialog::New1(uString* header, uString* body, uString* details, uArray* buttons)
{
    ShowingModalDialog* obj6 = (ShowingModalDialog*)uNew(ShowingModalDialog_typeof());
    obj6->ctor_1(header, body, details, buttons);
    return obj6;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1696)
// ---------------------------------------------------------------------------

// internal abstract class ShowingPrompt :1696
// {
ShowingPrompt_type* ShowingPrompt_typeof()
{
    static uSStrong<ShowingPrompt_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ShowingPrompt);
    options.TypeSize = sizeof(ShowingPrompt_type);
    type = (ShowingPrompt_type*)uClassType::New("Outracks.Simulator.ShowingPrompt", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ShowingPrompt__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))ShowingPrompt__OnUpdate_fn;
    ::STRINGS[37] = uString::Const("Ok");
    ::STRINGS[38] = uString::Const("Cancel");
    ::STRINGS[39] = uString::Const("# ");
    ::STRINGS[36] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Outracks.Simulator.Client.Uno\\0.1.0\\$.uno");
    ::TYPES[126] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[129] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    ::TYPES[75] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[131] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[133] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[134] = ::g::Fuse::Controls::Control_typeof()->Array();
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[78] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _body), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _cancelClicked), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _header), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _input), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::ShowingPrompt, _okClicked), 0);
    return type;
}

// protected ShowingPrompt(string header, string body) :1705
void ShowingPrompt__ctor_1_fn(ShowingPrompt* __this, uString* header, uString* body)
{
    __this->ctor_1(header, body);
}

// private void OnCancelClicked(object s, Fuse.Gestures.ClickedArgs args) :1744
void ShowingPrompt__OnCancelClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    __this->OnCancelClicked(s, args);
}

// public override sealed Outracks.Simulator.State OnEnterState() :1713
void ShowingPrompt__OnEnterState_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::State** __retval)
{
    ::g::Fuse::Controls::Button* collection1;
    ::g::Fuse::Controls::Button* collection2;
    collection1 = ::g::Fuse::Controls::Button::New2();
    uPtr(collection1)->Text(::STRINGS[37/*"Ok"*/]);
    ::STRINGS[37/*"Ok"*/];
    ::g::Fuse::Controls::Button* ok = collection1;
    ::g::Fuse::Gestures::Clicked::AddHandler(ok, uDelegate::New(::TYPES[129/*Fuse.Gestures.ClickedHandler*/], (void*)ShowingPrompt__OnOkClicked_fn, __this));
    collection2 = ::g::Fuse::Controls::Button::New2();
    uPtr(collection2)->Text(::STRINGS[38/*"Cancel"*/]);
    ::STRINGS[38/*"Cancel"*/];
    ::g::Fuse::Controls::Button* cancel = collection2;
    ::g::Fuse::Gestures::Clicked::AddHandler(cancel, uDelegate::New(::TYPES[129/*Fuse.Gestures.ClickedHandler*/], (void*)ShowingPrompt__OnCancelClicked_fn, __this));
    __this->_input = ::g::Fuse::Controls::TextInput::New3();
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[39/*"# "*/], __this->_header), 1, ::STRINGS[36/*"C:\\Program...*/], 1732);
    ::g::Uno::Diagnostics::Debug::Log5(__this->_body, 1, ::STRINGS[36/*"C:\\Program...*/], 1733);
    ::g::Outracks::Simulator::ModalDialog::ShowPrompt(::g::Outracks::Simulator::Context::App(), __this->_header, __this->_body, __this->_input, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[133/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Control>*/], uArray::Init< ::g::Fuse::Controls::Control*>(::TYPES[134/*Fuse.Controls.Control[]*/], 2, cancel, ok))));
    return *__retval = __this, void();
}

// private void OnOkClicked(object s, Fuse.Gestures.ClickedArgs args) :1739
void ShowingPrompt__OnOkClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    __this->OnOkClicked(s, args);
}

// public override sealed Outracks.Simulator.State OnUpdate() :1753
void ShowingPrompt__OnUpdate_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::State** __retval)
{
    if (__this->_cancelClicked)
        return *__retval = __this->OnCancel(), void();

    if (__this->_okClicked)
        return *__retval = __this->OnOk(uPtr(__this->_input)->Value()), void();

    return *__retval = __this, void();
}

// protected ShowingPrompt(string header, string body) [instance] :1705
void ShowingPrompt::ctor_1(uString* header, uString* body)
{
    ctor_();
    _header = header;
    _body = body;
}

// private void OnCancelClicked(object s, Fuse.Gestures.ClickedArgs args) [instance] :1744
void ShowingPrompt::OnCancelClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    _cancelClicked = true;
}

// private void OnOkClicked(object s, Fuse.Gestures.ClickedArgs args) [instance] :1739
void ShowingPrompt::OnOkClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    _okClicked = true;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(1256)
// ---------------------------------------------------------------------------

// public sealed class SimulatorClient :1256
// {
SimulatorClient_type* SimulatorClient_typeof()
{
    static uSStrong<SimulatorClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SimulatorClient);
    options.TypeSize = sizeof(SimulatorClient_type);
    type = (SimulatorClient_type*)uClassType::New("Outracks.Simulator.SimulatorClient", options);
    type->interface0.fp_Send = (void(*)(uObject*, ::g::Outracks::Simulator::Protocol::MessageFromClient*))SimulatorClient__Send_fn;
    type->interface0.fp_get_IncommingMessages = (void(*)(uObject*, ::g::Outracks::Simulator::ConcurrentQueue**))SimulatorClient__get_IncommingMessages_fn;
    type->interface0.fp_get_IsOnline = (void(*)(uObject*, bool*))SimulatorClient__get_IsOnline_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SimulatorClient__Dispose_fn;
    ::STRINGS[36] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Outracks.Simulator.Client.Uno\\0.1.0\\$.uno");
    ::TYPES[111] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageFromClient_typeof());
    ::TYPES[112] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof());
    ::TYPES[81] = ::g::Uno::IO::Stream_typeof();
    ::TYPES[30] = ::g::Uno::Action_typeof();
    ::TYPES[135] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Outracks::Simulator::ISimulatorClient_typeof()));
    ::TYPES[114] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof());
    ::TYPES[136] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1, ::g::Outracks::Simulator::ISimulatorClient_typeof());
    ::TYPES[137] = ::g::Uno::Func_typeof()->MakeType(::g::Outracks::Simulator::ISimulatorClient_typeof());
    ::TYPES[138] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1, ::g::Outracks::Simulator::ISimulatorClient_typeof());
    ::TYPES[139] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Outracks::Simulator::ISimulatorClient_typeof()));
    ::TYPES[140] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof()), ::g::Outracks::Simulator::ISimulatorClient_typeof());
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[86] = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof();
    type->SetInterfaces(
        ::g::Outracks::Simulator::ISimulatorClient_typeof(), offsetof(SimulatorClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SimulatorClient_type, interface1));
    type->SetFields(0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()), offsetof(::g::Outracks::Simulator::SimulatorClient, _messagesFromClient), 0,
        ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), offsetof(::g::Outracks::Simulator::SimulatorClient, _messagesToClient), 0,
        ::g::Uno::IO::BinaryReader_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _reader), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _readWorker), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _running), 0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _socket), 0,
        ::g::Uno::Net::Sockets::NetworkStream_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _stream), 0,
        ::g::Uno::IO::BinaryWriter_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _writer), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Outracks::Simulator::SimulatorClient, _writeWorker), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("Connect", NULL, (void*)SimulatorClient__Connect_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Outracks::Simulator::ISimulatorClient_typeof()), 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof())),
        new uFunction("Dispose", NULL, (void*)SimulatorClient__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IncommingMessages", NULL, (void*)SimulatorClient__get_IncommingMessages_fn, 0, false, ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::Simulator::Protocol::MessageToClient_typeof()), 0),
        new uFunction("get_IsOnline", NULL, (void*)SimulatorClient__get_IsOnline_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)SimulatorClient__New1_fn, 0, true, SimulatorClient_typeof(), 1, ::g::Uno::Net::Sockets::Socket_typeof()),
        new uFunction("Send", NULL, (void*)SimulatorClient__Send_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof()));
    return type;
}

// public SimulatorClient(Uno.Net.Sockets.Socket socket) :1294
void SimulatorClient__ctor__fn(SimulatorClient* __this, ::g::Uno::Net::Sockets::Socket* socket)
{
    __this->ctor_(socket);
}

// public static Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient> Connect(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :1258
void SimulatorClient__Connect_fn(uObject* simulatorEndpoints, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = SimulatorClient::Connect(simulatorEndpoints);
}

// public void Dispose() :1355
void SimulatorClient__Dispose_fn(SimulatorClient* __this)
{
    __this->Dispose();
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient> get_IncommingMessages() :1286
void SimulatorClient__get_IncommingMessages_fn(SimulatorClient* __this, ::g::Outracks::Simulator::ConcurrentQueue** __retval)
{
    *__retval = __this->IncommingMessages();
}

// public bool get_IsOnline() :1376
void SimulatorClient__get_IsOnline_fn(SimulatorClient* __this, bool* __retval)
{
    *__retval = __this->IsOnline();
}

// public SimulatorClient New(Uno.Net.Sockets.Socket socket) :1294
void SimulatorClient__New1_fn(::g::Uno::Net::Sockets::Socket* socket, SimulatorClient** __retval)
{
    *__retval = SimulatorClient::New1(socket);
}

// private static Outracks.Simulator.ISimulatorClient OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) :1270
void SimulatorClient__OnNoResult_fn(uObject* exceptions, uObject** __retval)
{
    *__retval = SimulatorClient::OnNoResult(exceptions);
}

// private void ReadLoop() :1317
void SimulatorClient__ReadLoop_fn(SimulatorClient* __this)
{
    __this->ReadLoop();
}

// public void Send(Outracks.Simulator.Protocol.MessageFromClient message) :1289
void SimulatorClient__Send_fn(SimulatorClient* __this, ::g::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    __this->Send(message);
}

// private void WriteLoop() :1335
void SimulatorClient__WriteLoop_fn(SimulatorClient* __this)
{
    __this->WriteLoop();
}

// public SimulatorClient(Uno.Net.Sockets.Socket socket) [instance] :1294
void SimulatorClient::ctor_(::g::Uno::Net::Sockets::Socket* socket)
{
    _messagesFromClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[111/*Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageFromClient>*/]));
    _messagesToClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[112/*Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient>*/]));
    _running = true;
    _socket = socket;
    _stream = ::g::Uno::Net::Sockets::NetworkStream::New1(_socket);
    _writer = ::g::Uno::IO::BinaryWriter::New1(_stream);
    _reader = ::g::Uno::IO::BinaryReader::New1(_stream);
    _readWorker = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[30/*Uno.Action*/], (void*)SimulatorClient__ReadLoop_fn, this));
    _writeWorker = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[30/*Uno.Action*/], (void*)SimulatorClient__WriteLoop_fn, this));
    uPtr(_readWorker)->Start();
    uPtr(_writeWorker)->Start();
}

// public void Dispose() [instance] :1355
void SimulatorClient::Dispose()
{
    _running = false;
    uPtr(_readWorker)->Join();
    uPtr(_writeWorker)->Join();
    uPtr(_stream)->Dispose();

    try
    {
        uPtr(_socket)->Shutdown(2);
        uPtr(_socket)->Close();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->Message(), 1, ::STRINGS[36/*"C:\\Program...*/], 1370);
    }
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient> get_IncommingMessages() [instance] :1286
::g::Outracks::Simulator::ConcurrentQueue* SimulatorClient::IncommingMessages()
{
    return _messagesToClient;
}

// public bool get_IsOnline() [instance] :1376
bool SimulatorClient::IsOnline()
{
    return true;
}

// private void ReadLoop() [instance] :1317
void SimulatorClient::ReadLoop()
{
    try
    {
        while (_running)
        {
            while (uPtr(_socket)->Poll(0, 0))
                ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), ::g::Outracks::Simulator::Protocol::MessageToClient::Read(_reader));

            ::g::Uno::Threading::Thread::Sleep(10);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), ::g::Outracks::Simulator::Protocol::Error::New1(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(e)));
    }
}

// public void Send(Outracks.Simulator.Protocol.MessageFromClient message) [instance] :1289
void SimulatorClient::Send(::g::Outracks::Simulator::Protocol::MessageFromClient* message)
{
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesFromClient), message);
}

// private void WriteLoop() [instance] :1335
void SimulatorClient::WriteLoop()
{
    bool ret4;

    try
    {
        while (_running)
        {
            ::g::Outracks::Simulator::Protocol::MessageFromClient* message;

            while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(_messagesFromClient), (void**)(&message), &ret4), ret4))
                ::g::Outracks::Simulator::Protocol::MessageFromClient::Write(message, _writer);

            ::g::Uno::Threading::Thread::Sleep(10);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), ::g::Outracks::Simulator::Protocol::Error::New1(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(e)));
        _running = false;
    }
}

// public static Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient> Connect(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [static] :1258
::g::Outracks::Simulator::Task* SimulatorClient::Connect(uObject* simulatorEndpoints)
{
    ::g::Uno::Net::IPEndPoint* ret3;
    ::g::Uno::Collections::List* tasks = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[135/*Uno.Collections.List<Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient>>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(simulatorEndpoints), ::TYPES[49/*Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::Net::IPEndPoint* endpoint = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[114/*Uno.Collections.IEnumerator<Uno.Net.IPEndPoint>*/]), &ret3), ret3);
        ::g::Uno::Collections::List__Add_fn(uPtr(tasks), (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::Run(::TYPES[136/*Outracks.Simulator.Tasks.Run<Outracks.Simulator.ISimulatorClient>*/], uDelegate::New(::TYPES[137/*Uno.Func<Outracks.Simulator.ISimulatorClient>*/], (void*)::g::Outracks::Simulator::ConnectToSimulator__Execute_fn, ::g::Outracks::Simulator::ConnectToSimulator::New1(endpoint))));
    }

    return (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::WaitForFirstResult(::TYPES[138/*Outracks.Simulator.Tasks.WaitForFirstResult<Outracks.Simulator.ISimulatorClient>*/], (uObject*)tasks, uDelegate::New(::TYPES[140/*Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, Outracks.Simulator.ISimulatorClient>*/], (void*)SimulatorClient__OnNoResult_fn));
}

// public SimulatorClient New(Uno.Net.Sockets.Socket socket) [static] :1294
SimulatorClient* SimulatorClient::New1(::g::Uno::Net::Sockets::Socket* socket)
{
    SimulatorClient* obj2 = (SimulatorClient*)uNew(SimulatorClient_typeof());
    obj2->ctor_(socket);
    return obj2;
}

// private static Outracks.Simulator.ISimulatorClient OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) [static] :1270
uObject* SimulatorClient::OnNoResult(uObject* exceptions)
{
    U_THROW(::g::Outracks::Simulator::FailedToConnectToSimulator::New4(exceptions));
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(437)
// --------------------------------------------------------------------------

// internal abstract class State :437
// {
State_type* State_typeof()
{
    static uSStrong<State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(State_type);
    type = (State_type*)uClassType::New("Outracks.Simulator.State", options);
    type->fp_OnEnterState = State__OnEnterState_fn;
    type->fp_OnLeaveState = State__OnLeaveState_fn;
    type->fp_OnPointerPressed = State__OnPointerPressed_fn;
    type->fp_OnUpdate = State__OnUpdate_fn;
    return type;
}

// protected generated State() :437
void State__ctor__fn(State* __this)
{
    __this->ctor_();
}

// public virtual Outracks.Simulator.State OnEnterState() :439
void State__OnEnterState_fn(State* __this, State** __retval)
{
    return *__retval = __this, void();
}

// public virtual void OnLeaveState() :444
void State__OnLeaveState_fn(State* __this)
{
}

// public virtual Outracks.Simulator.State OnPointerPressed(Fuse.Input.PointerPressedArgs args) :453
void State__OnPointerPressed_fn(State* __this, ::g::Fuse::Input::PointerPressedArgs* args, State** __retval)
{
    return *__retval = __this, void();
}

// public virtual Outracks.Simulator.State OnUpdate() :448
void State__OnUpdate_fn(State* __this, State** __retval)
{
    return *__retval = __this, void();
}

// protected generated State() [instance] :437
void State::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno(445)
// -----------------------------------------------------------------------------------

// public static class StringSplitting :445
// {
uClassType* StringSplitting_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.StringSplitting", options);
    ::TYPES[27] = ::g::Uno::String_typeof();
    ::TYPES[141] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[102] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->Reflection.SetFunctions(8,
        new uFunction("AfterFirst", NULL, (void*)StringSplitting__AfterFirst_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("AfterLast", NULL, (void*)StringSplitting__AfterLast_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("BeforeFirst", NULL, (void*)StringSplitting__BeforeFirst_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("BeforeLast", NULL, (void*)StringSplitting__BeforeLast_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Join", NULL, (void*)StringSplitting__Join_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof()), ::g::Uno::String_typeof()),
        new uFunction("JoinToString`1", type, (void*)StringSplitting__JoinToString_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), ::g::Uno::String_typeof()),
        new uFunction("OrdinalIndexOf", NULL, (void*)StringSplitting__OrdinalIndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("OrdinalLastIndexOf", NULL, (void*)StringSplitting__OrdinalLastIndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public static string AfterFirst(string s, string seperator) :482
void StringSplitting__AfterFirst_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::AfterFirst(s, seperator);
}

// public static string AfterLast(string s, string seperator) :465
void StringSplitting__AfterLast_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::AfterLast(s, seperator);
}

// public static string BeforeFirst(string s, string seperator) :490
void StringSplitting__BeforeFirst_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::BeforeFirst(s, seperator);
}

// public static string BeforeLast(string s, string seperator) :473
void StringSplitting__BeforeLast_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::BeforeLast(s, seperator);
}

// public static string Join(Uno.Collections.IEnumerable<string> si, string separator) :516
void StringSplitting__Join_fn(uObject* si, uString* separator, uString** __retval)
{
    *__retval = StringSplitting::Join(si, separator);
}

// public static string JoinToString<T>(Uno.Collections.IEnumerable<T> objects, string separator) :499
void StringSplitting__JoinToString_fn(uType* __type, uObject* objects, uString* separator, uString** __retval)
{
    *__retval = StringSplitting::JoinToString(__type, objects, separator);
}

// public static int OrdinalIndexOf(string str, string seperator) :460
void StringSplitting__OrdinalIndexOf_fn(uString* str, uString* seperator, int* __retval)
{
    *__retval = StringSplitting::OrdinalIndexOf(str, seperator);
}

// public static int OrdinalLastIndexOf(string str, string seperator) :447
void StringSplitting__OrdinalLastIndexOf_fn(uString* str, uString* seperator, int* __retval)
{
    *__retval = StringSplitting::OrdinalLastIndexOf(str, seperator);
}

// public static string AfterFirst(string s, string seperator) [static] :482
uString* StringSplitting::AfterFirst(uString* s, uString* seperator)
{
    int index = ::g::Uno::String::IndexOf1(uPtr(s), seperator, 0);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring(s, index + uPtr(seperator)->Length());
}

// public static string AfterLast(string s, string seperator) [static] :465
uString* StringSplitting::AfterLast(uString* s, uString* seperator)
{
    int index = StringSplitting::OrdinalLastIndexOf(s, seperator);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring(uPtr(s), index + uPtr(seperator)->Length());
}

// public static string BeforeFirst(string s, string seperator) [static] :490
uString* StringSplitting::BeforeFirst(uString* s, uString* seperator)
{
    int index = ::g::Uno::String::IndexOf1(uPtr(s), seperator, 0);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring1(s, 0, index);
}

// public static string BeforeLast(string s, string seperator) [static] :473
uString* StringSplitting::BeforeLast(uString* s, uString* seperator)
{
    int index = StringSplitting::OrdinalLastIndexOf(s, seperator);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring1(uPtr(s), 0, index);
}

// public static string Join(Uno.Collections.IEnumerable<string> si, string separator) [static] :516
uString* StringSplitting::Join(uObject* si, uString* separator)
{
    uString* ret2;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    bool isFirst = true;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(si), ::TYPES[96/*Uno.Collections.IEnumerable<string>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        uString* part = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[141/*Uno.Collections.IEnumerator<string>*/]), &ret2), ret2);

        if (isFirst)
            isFirst = false;
        else
            uPtr(sb)->Append1(separator);

        sb->Append1(part);
    }

    return sb->ToString();
}

// public static string JoinToString<T>(Uno.Collections.IEnumerable<T> objects, string separator) [static] :499
uString* StringSplitting::JoinToString(uType* __type, uObject* objects, uString* separator)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[102/*Uno.Collections.IEnumerator`1*/]->MakeType(__type->U(0)),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT obj(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    bool isFirst = true;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(objects), ::TYPES[92/*Uno.Collections.IEnumerable`1*/]->MakeType(__types[0]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret3), ret3);

        if (isFirst)
            isFirst = false;
        else
            uPtr(sb)->Append1(separator);

        sb->Append1(::g::Uno::Object::ToString(uBoxPtr(__types[0], obj, U_ALLOCA(__types[0]->ObjectSize))));
    }

    return sb->ToString();
}

// public static int OrdinalIndexOf(string str, string seperator) [static] :460
int StringSplitting::OrdinalIndexOf(uString* str, uString* seperator)
{
    return ::g::Uno::String::IndexOf1(uPtr(str), seperator, 0);
}

// public static int OrdinalLastIndexOf(string str, string seperator) [static] :447
int StringSplitting::OrdinalLastIndexOf(uString* str, uString* seperator)
{
    for (int i = uPtr(str)->Length() - uPtr(seperator)->Length(); (i--) > 0; )
    {
        int j = 0;

        while ((j < uPtr(seperator)->Length()) && (uPtr(str)->Item(i + j) == uPtr(seperator)->Item(j)))
            j++;

        if (j == uPtr(seperator)->Length())
            return i;
    }

    return -1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno(56)
// -------------------------------------------------------------------------------------

// public sealed class Task<T> :56
// {
uType* Task_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Task);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Task`1", options);
    ::TYPES[30] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Action_typeof(), offsetof(::g::Outracks::Simulator::Task, _wait), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Outracks::Simulator::Task, Mutex), 0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Outracks::Simulator::Task, _Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Task, _IsCompleted), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Task, _IsFaulted), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Exception", NULL, (void*)Task__get_Exception_fn, 0, false, ::g::Uno::Exception_typeof(), 0),
        new uFunction("get_IsCompleted", NULL, (void*)Task__get_IsCompleted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsFaulted", NULL, (void*)Task__get_IsFaulted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Result", NULL, (void*)Task__get_Result_fn, 0, false, type->T(0), 0));
    return type;
}

// internal Task(Uno.Action wait) :62
void Task__ctor__fn(Task* __this, uDelegate* wait)
{
    __this->ctor_(wait);
}

// public generated Uno.Exception get_Exception() :71
void Task__get_Exception_fn(Task* __this, ::g::Uno::Exception** __retval)
{
    *__retval = __this->Exception();
}

// internal generated void set_Exception(Uno.Exception value) :71
void Task__set_Exception_fn(Task* __this, ::g::Uno::Exception* value)
{
    __this->Exception(value);
}

// public generated bool get_IsCompleted() :67
void Task__get_IsCompleted_fn(Task* __this, bool* __retval)
{
    *__retval = __this->IsCompleted();
}

// internal generated void set_IsCompleted(bool value) :67
void Task__set_IsCompleted_fn(Task* __this, bool* value)
{
    __this->IsCompleted(*value);
}

// public generated bool get_IsFaulted() :69
void Task__get_IsFaulted_fn(Task* __this, bool* __retval)
{
    *__retval = __this->IsFaulted();
}

// internal generated void set_IsFaulted(bool value) :69
void Task__set_IsFaulted_fn(Task* __this, bool* value)
{
    __this->IsFaulted(*value);
}

// internal Task New(Uno.Action wait) :62
void Task__New1_fn(uType* __type, uDelegate* wait, Task** __retval)
{
    *__retval = Task::New1(__type, wait);
}

// public T get_Result() :76
void Task__get_Result_fn(Task* __this, uTRef __retval)
{
    uPtr(__this->_wait)->InvokeVoid();

    if (__this->IsFaulted())
        U_THROW(__this->Exception());

    return __retval.Store(__this->_result()), void();
}

// internal void set_Result(T value) :85
void Task__set_Result_fn(Task* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_result() = value;
}

// internal Task(Uno.Action wait) [instance] :62
void Task::ctor_(uDelegate* wait)
{
    Mutex = ::g::Uno::Threading::Mutex::Create();
    _wait = wait;
}

// public generated Uno.Exception get_Exception() [instance] :71
::g::Uno::Exception* Task::Exception()
{
    return _Exception;
}

// internal generated void set_Exception(Uno.Exception value) [instance] :71
void Task::Exception(::g::Uno::Exception* value)
{
    _Exception = value;
}

// public generated bool get_IsCompleted() [instance] :67
bool Task::IsCompleted()
{
    return _IsCompleted;
}

// internal generated void set_IsCompleted(bool value) [instance] :67
void Task::IsCompleted(bool value)
{
    _IsCompleted = value;
}

// public generated bool get_IsFaulted() [instance] :69
bool Task::IsFaulted()
{
    return _IsFaulted;
}

// internal generated void set_IsFaulted(bool value) [instance] :69
void Task::IsFaulted(bool value)
{
    _IsFaulted = value;
}

// internal Task New(Uno.Action wait) [static] :62
Task* Task::New1(uType* __type, uDelegate* wait)
{
    Task* obj1 = (Task*)uNew(__type);
    obj1->ctor_(wait);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno(90)
// -------------------------------------------------------------------------------------

// public static class Tasks :90
// {
uClassType* Tasks_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Tasks", options);
    ::TYPES[142] = ::g::Outracks::Simulator::TaskThread_typeof();
    ::TYPES[143] = ::g::Uno::Func_typeof();
    ::TYPES[144] = ::g::Outracks::Simulator::WaitForFirstResult_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("Run`1", type, (void*)Tasks__Run_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(type->U(0)), 1, ::g::Uno::Func_typeof()->MakeType(type->U(0))),
        new uFunction("WaitForFirstResult`1", type, (void*)Tasks__WaitForFirstResult_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(type->U(0)), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(type->U(0))), ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof()), type->U(0))));
    return type;
}

// public static Outracks.Simulator.Task<T> Run<T>(Uno.Func<T> method) :97
void Tasks__Run_fn(uType* __type, uDelegate* method, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = Tasks::Run(__type, method);
}

// public static Outracks.Simulator.Task<T> WaitForFirstResult<T>(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> tasks, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :92
void Tasks__WaitForFirstResult_fn(uType* __type, uObject* tasks, uDelegate* onNoResult, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = Tasks::WaitForFirstResult(__type, tasks, onNoResult);
}

// public static Outracks.Simulator.Task<T> Run<T>(Uno.Func<T> method) [static] :97
::g::Outracks::Simulator::Task* Tasks::Run(uType* __type, uDelegate* method)
{
    uType* __types[] = {
        ::TYPES[142/*Outracks.Simulator.TaskThread`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    ::g::Outracks::Simulator::TaskThread* t = (::g::Outracks::Simulator::TaskThread*)::g::Outracks::Simulator::TaskThread::New1(__types[0], method);
    uPtr(t->Thread)->Start();
    return (::g::Outracks::Simulator::Task*)t->Task;
}

// public static Outracks.Simulator.Task<T> WaitForFirstResult<T>(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> tasks, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [static] :92
::g::Outracks::Simulator::Task* Tasks::WaitForFirstResult(uType* __type, uObject* tasks, uDelegate* onNoResult)
{
    uType* __types[] = {
        Tasks_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        ::TYPES[143/*Uno.Func`1*/]->MakeType(__type->U(0)),
        ::TYPES[144/*Outracks.Simulator.WaitForFirstResult`1*/]->MakeType(__type->U(0)),
    };
    return (::g::Outracks::Simulator::Task*)Tasks::Run(__types[0], uDelegate::New(__types[2], (void*)::g::Outracks::Simulator::WaitForFirstResult__Execute_fn, (::g::Outracks::Simulator::WaitForFirstResult*)::g::Outracks::Simulator::WaitForFirstResult::New1(__types[3], tasks, onNoResult)));
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno(113)
// --------------------------------------------------------------------------------------

// internal sealed class TaskThread<T> :113
// {
uType* TaskThread_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(TaskThread);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.TaskThread`1", options);
    ::TYPES[30] = ::g::Uno::Action_typeof();
    ::TYPES[145] = ::g::Outracks::Simulator::Task_typeof();
    ::TYPES[143] = ::g::Uno::Func_typeof();
    type->SetPrecalc(
        ::TYPES[145/*Outracks.Simulator.Task`1*/]->MakeType(type->T(0)),
        ::TYPES[143/*Uno.Func`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0)), offsetof(::g::Outracks::Simulator::TaskThread, _func), 0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0)), offsetof(::g::Outracks::Simulator::TaskThread, Task), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Outracks::Simulator::TaskThread, Thread), 0);
    return type;
}

// public TaskThread(Uno.Func<T> func) :120
void TaskThread__ctor__fn(TaskThread* __this, uDelegate* func)
{
    __this->ctor_(func);
}

// public TaskThread New(Uno.Func<T> func) :120
void TaskThread__New1_fn(uType* __type, uDelegate* func, TaskThread** __retval)
{
    *__retval = TaskThread::New1(__type, func);
}

// private void Run() :127
void TaskThread__Run_fn(TaskThread* __this)
{
    __this->Run();
}

// public TaskThread(Uno.Func<T> func) [instance] :120
void TaskThread::ctor_(uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.Task<T>*/),
        __type->T(0),
    };
    _func = func;
    Thread = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[30/*Uno.Action*/], (void*)TaskThread__Run_fn, this));
    Task = ((::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Task::New1(__types[0], uDelegate::New(::TYPES[30/*Uno.Action*/], uPtr(Thread), offsetof(::g::Uno::Threading::Thread_type, fp_Join))));
}

// private void Run() [instance] :127
void TaskThread::Run()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Outracks.Simulator.Task<T>*/),
        __type->Precalced(1/*Uno.Func<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    try
    {
        ::g::Outracks::Simulator::Task__set_Result_fn(uPtr(Task), (uPtr(_func)->Invoke(&ret2), ret2));
        uPtr(Task)->IsCompleted(true);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(Task)->Exception(e);
        uPtr(Task)->IsFaulted(true);
        uPtr(Task)->IsCompleted(true);
    }
}

// public TaskThread New(Uno.Func<T> func) [static] :120
TaskThread* TaskThread::New1(uType* __type, uDelegate* func)
{
    TaskThread* obj1 = (TaskThread*)uNew(__type);
    obj1->ctor_(func);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(484)
// --------------------------------------------------------------------------

// internal sealed class Uninitialized :484
// {
::g::Outracks::Simulator::State_type* Uninitialized_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Uninitialized);
    options.TypeSize = sizeof(::g::Outracks::Simulator::State_type);
    type = (::g::Outracks::Simulator::State_type*)uClassType::New("Outracks.Simulator.Uninitialized", options);
    type->SetBase(::g::Outracks::Simulator::State_typeof());
    type->fp_ctor_ = (void*)Uninitialized__New1_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**))Uninitialized__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::State*, ::g::Outracks::Simulator::State**))Uninitialized__OnUpdate_fn;
    ::STRINGS[21] = uString::Const("Try again");
    ::TYPES[2] = ::g::Outracks::Simulator::State_typeof();
    ::TYPES[54] = ::g::Outracks::Simulator::DialogButton_typeof()->Array();
    ::TYPES[14] = ::g::Outracks::Simulator::Context_typeof();
    return type;
}

// public generated Uninitialized() :484
void Uninitialized__ctor_1_fn(Uninitialized* __this)
{
    __this->ctor_1();
}

// public generated Uninitialized New() :484
void Uninitialized__New1_fn(Uninitialized** __retval)
{
    *__retval = Uninitialized::New1();
}

// public override sealed Outracks.Simulator.State OnException(Uno.Exception e) :494
void Uninitialized__OnException_fn(Uninitialized* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval)
{
    return *__retval = ::g::Outracks::Simulator::Faulted::New2(false, e, uArray::Init< ::g::Outracks::Simulator::DialogButton*>(::TYPES[54/*Outracks.Simulator.DialogButton[]*/], 1, (::g::Outracks::Simulator::DialogButton*)::g::Outracks::Simulator::DialogButton::New1(::STRINGS[21/*"Try again"*/], __this))), void();
}

// public override sealed Outracks.Simulator.State OnUpdate() :486
void Uninitialized__OnUpdate_fn(Uninitialized* __this, ::g::Outracks::Simulator::State** __retval)
{
    if (::g::Outracks::Simulator::Context::Reflection() != NULL)
        return *__retval = ::g::Outracks::Simulator::ConnectingToProxy::New1(), void();

    return *__retval = __this, void();
}

// public generated Uninitialized() [instance] :484
void Uninitialized::ctor_1()
{
    ctor_();
}

// public generated Uninitialized New() [static] :484
Uninitialized* Uninitialized::New1()
{
    Uninitialized* obj1 = (Uninitialized*)uNew(Uninitialized_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno(946)
// --------------------------------------------------------------------------

// internal sealed class UserAppState :946
// {
uType* UserAppState_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(UserAppState);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.UserAppState", options);
    ::TYPES[6] = ::g::Outracks::Simulator::FakeApp_typeof();
    ::TYPES[146] = UserAppState_typeof()->MakeMethod(1, ::g::Fuse::Behavior_typeof());
    ::TYPES[147] = UserAppState_typeof()->MakeMethod(1, ::g::Uno::UX::Resource_typeof());
    ::TYPES[148] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Behavior_typeof());
    ::TYPES[149] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[150] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::UX::Resource_typeof());
    ::TYPES[151] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[152] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[42] = uObject_typeof()->Array();
    ::TYPES[24] = uObject_typeof();
    ::TYPES[153] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[154] = ::g::Uno::Collections::IListExtensions_typeof();
    ::TYPES[92] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[93] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Outracks::Simulator::UserAppState, Background), 0,
        ::g::Fuse::Behavior_typeof()->Array(), offsetof(::g::Outracks::Simulator::UserAppState, Behaviors), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Outracks::Simulator::UserAppState, ClearColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Outracks::Simulator::UserAppState, ClearDepth), 0,
        ::g::Uno::UX::Resource_typeof()->Array(), offsetof(::g::Outracks::Simulator::UserAppState, Resources), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Outracks::Simulator::UserAppState, RootNode), 0,
        ::g::Fuse::Theme_typeof(), offsetof(::g::Outracks::Simulator::UserAppState, Theme), 0,
        UserAppState_typeof(), (uintptr_t)&::g::Outracks::Simulator::UserAppState::_Default_, uFieldFlagsStatic);
    return type;
}

// public UserAppState(float4 background, Fuse.Behavior[] behaviors, Uno.UX.Resource[] resources, Fuse.Node rootNode, Fuse.Theme theme, float4 clearColor, float clearDepth) :962
void UserAppState__ctor__fn(UserAppState* __this, ::g::Uno::Float4* background, uArray* behaviors, uArray* resources, ::g::Fuse::Node* rootNode, ::g::Fuse::Theme* theme, ::g::Uno::Float4* clearColor, float* clearDepth)
{
    __this->ctor_(*background, behaviors, resources, rootNode, theme, *clearColor, *clearDepth);
}

// public void ApplyTo(Outracks.Simulator.FakeApp app) :995
void UserAppState__ApplyTo_fn(UserAppState* __this, ::g::Outracks::Simulator::FakeApp* app)
{
    __this->ApplyTo(app);
}

// public static generated Outracks.Simulator.UserAppState get_Default() :981
void UserAppState__get_Default_fn(UserAppState** __retval)
{
    *__retval = UserAppState::Default();
}

// public static generated void set_Default(Outracks.Simulator.UserAppState value) :981
void UserAppState__set_Default_fn(UserAppState* value)
{
    UserAppState::Default(value);
}

// public UserAppState New(float4 background, Fuse.Behavior[] behaviors, Uno.UX.Resource[] resources, Fuse.Node rootNode, Fuse.Theme theme, float4 clearColor, float clearDepth) :962
void UserAppState__New1_fn(::g::Uno::Float4* background, uArray* behaviors, uArray* resources, ::g::Fuse::Node* rootNode, ::g::Fuse::Theme* theme, ::g::Uno::Float4* clearColor, float* clearDepth, UserAppState** __retval)
{
    *__retval = UserAppState::New1(*background, behaviors, resources, rootNode, theme, *clearColor, *clearDepth);
}

// public static Outracks.Simulator.UserAppState Save(Outracks.Simulator.FakeApp app) :983
void UserAppState__Save_fn(::g::Outracks::Simulator::FakeApp* app, UserAppState** __retval)
{
    *__retval = UserAppState::Save(app);
}

// private static bool SequenceEquals<T>(Uno.Collections.IList<T> left, T[] right) :1018
void UserAppState__SequenceEquals_fn(uType* __type, uObject* left, uArray* right, bool* __retval)
{
    *__retval = UserAppState::SequenceEquals(__type, left, right);
}

// private static void SetIfNotEqual<T>(Uno.Collections.IList<T> list, T[] elements) :1006
void UserAppState__SetIfNotEqual_fn(uType* __type, uObject* list, uArray* elements)
{
    UserAppState::SetIfNotEqual(__type, list, elements);
}

// private static void SetSequence<T>(Uno.Collections.IList<T> list, T[] elements) :1012
void UserAppState__SetSequence_fn(uType* __type, uObject* list, uArray* elements)
{
    UserAppState::SetSequence(__type, list, elements);
}

uSStrong<UserAppState*> UserAppState::_Default_;

// public UserAppState(float4 background, Fuse.Behavior[] behaviors, Uno.UX.Resource[] resources, Fuse.Node rootNode, Fuse.Theme theme, float4 clearColor, float clearDepth) [instance] :962
void UserAppState::ctor_(::g::Uno::Float4 background, uArray* behaviors, uArray* resources, ::g::Fuse::Node* rootNode, ::g::Fuse::Theme* theme, ::g::Uno::Float4 clearColor, float clearDepth)
{
    Background = background;
    Behaviors = behaviors;
    Resources = resources;
    RootNode = rootNode;
    Theme = theme;
    ClearColor = clearColor;
    ClearDepth = clearDepth;
}

// public void ApplyTo(Outracks.Simulator.FakeApp app) [instance] :995
void UserAppState::ApplyTo(::g::Outracks::Simulator::FakeApp* app)
{
    if (::g::Uno::Float4::op_Inequality(uPtr(app)->Background1(), Background))
        uPtr(app)->Background1(Background);

    UserAppState::SetIfNotEqual(::TYPES[146/*Outracks.Simulator.UserAppState.SetIfNotEqual<Fuse.Behavior>*/], app->Behaviors1(), Behaviors);
    UserAppState::SetIfNotEqual(::TYPES[147/*Outracks.Simulator.UserAppState.SetIfNotEqual<Uno.UX.Resource>*/], app->Resources1(), Resources);

    if (app->Theme() != Theme)
        app->Theme(Theme);

    if (::g::Uno::Float4::op_Inequality(app->ClearColor(), ClearColor))
        app->ClearColor(ClearColor);

    if (app->ClearDepth() != ClearDepth)
        app->ClearDepth(ClearDepth);

    if (app->RootNode() != RootNode)
        app->RootNode(RootNode);
}

// public UserAppState New(float4 background, Fuse.Behavior[] behaviors, Uno.UX.Resource[] resources, Fuse.Node rootNode, Fuse.Theme theme, float4 clearColor, float clearDepth) [static] :962
UserAppState* UserAppState::New1(::g::Uno::Float4 background, uArray* behaviors, uArray* resources, ::g::Fuse::Node* rootNode, ::g::Fuse::Theme* theme, ::g::Uno::Float4 clearColor, float clearDepth)
{
    UserAppState* obj1 = (UserAppState*)uNew(UserAppState_typeof());
    obj1->ctor_(background, behaviors, resources, rootNode, theme, clearColor, clearDepth);
    return obj1;
}

// public static Outracks.Simulator.UserAppState Save(Outracks.Simulator.FakeApp app) [static] :983
UserAppState* UserAppState::Save(::g::Outracks::Simulator::FakeApp* app)
{
    return UserAppState::New1(uPtr(app)->Background1(), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[148/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Behavior>*/], uPtr(app)->Behaviors1()), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[150/*Uno.Collections.EnumerableExtensions.ToArray<Uno.UX.Resource>*/], uPtr(app)->Resources1()), uPtr(app)->RootNode(), uPtr(app)->Theme(), uPtr(app)->ClearColor(), uPtr(app)->ClearDepth());
}

// private static bool SequenceEquals<T>(Uno.Collections.IList<T> left, T[] right) [static] :1018
bool UserAppState::SequenceEquals(uType* __type, uObject* left, uArray* right)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[152/*Uno.Collections.ICollection`1*/]->MakeType(__type->U(0)),
        __type->U(0)->Array(),
        ::TYPES[153/*Uno.Collections.IList`1*/]->MakeType(__type->U(0)),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(left), __types[1])) != uPtr(right)->Length())
        return false;

    for (int i = 0; i < uPtr(right)->Length(); i++)
        if (uBoxPtr(__types[0], (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(left), __types[3]), uCRef<int>(i), &ret2), ret2)) != uBoxPtr(__types[0], uPtr(right)->TItem(i)))
            return false;

    return true;
}

// private static void SetIfNotEqual<T>(Uno.Collections.IList<T> list, T[] elements) [static] :1006
void UserAppState::SetIfNotEqual(uType* __type, uObject* list, uArray* elements)
{
    uType* __types[] = {
        UserAppState_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        UserAppState_typeof()->MakeMethod(1, __type->U(0)),
    };

    if (!UserAppState::SequenceEquals(__types[0], list, elements))
        UserAppState::SetSequence(__types[2], list, elements);
}

// private static void SetSequence<T>(Uno.Collections.IList<T> list, T[] elements) [static] :1012
void UserAppState::SetSequence(uType* __type, uObject* list, uArray* elements)
{
    uType* __types[] = {
        ::TYPES[154/*Uno.Collections.IListExtensions*/]->MakeMethod(1, __type->U(0)),
        __type->U(0),
        ::TYPES[92/*Uno.Collections.IEnumerable`1*/]->MakeType(__type->U(0)),
        ::TYPES[93/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(__type->U(0)),
    };
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(list), ::TYPES[152/*Uno.Collections.ICollection`1*/]->MakeType(__types[1])));
    ::g::Uno::Collections::IListExtensions::AddRange(__types[0], list, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[3], elements)));
}

// public static generated Outracks.Simulator.UserAppState get_Default() [static] :981
UserAppState* UserAppState::Default()
{
    return UserAppState::_Default();
}

// public static generated void set_Default(Outracks.Simulator.UserAppState value) [static] :981
void UserAppState::Default(UserAppState* value)
{
    UserAppState::_Default() = value;
}
// }

// C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno(143)
// --------------------------------------------------------------------------------------

// internal sealed class WaitForFirstResult<T> :143
// {
uType* WaitForFirstResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(WaitForFirstResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.WaitForFirstResult`1", options);
    ::TYPES[94] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[145] = ::g::Outracks::Simulator::Task_typeof();
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[155] = ::g::Uno::Collections::List_typeof();
    ::TYPES[42] = uObject_typeof()->Array();
    ::TYPES[35] = ::g::Uno::Func1_typeof();
    ::TYPES[65] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetPrecalc(
        ::TYPES[94/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(1, ::TYPES[145/*Outracks.Simulator.Task`1*/]->MakeType(type->T(0))),
        ::TYPES[145/*Outracks.Simulator.Task`1*/]->MakeType(type->T(0)),
        ::TYPES[155/*Uno.Collections.List`1*/]->MakeType(::TYPES[145/*Outracks.Simulator.Task`1*/]->MakeType(type->T(0))),
        ::TYPES[145/*Outracks.Simulator.Task`1*/]->MakeType(type->T(0))->Array(),
        ::TYPES[35/*Uno.Func`2*/]->MakeType(::TYPES[65/*Uno.Collections.IEnumerable<Uno.Exception>*/], type->T(0)));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof()), type->T(0)), offsetof(::g::Outracks::Simulator::WaitForFirstResult, _onNoResult), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0))), offsetof(::g::Outracks::Simulator::WaitForFirstResult, _pending), 0);
    return type;
}

// public WaitForFirstResult(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :148
void WaitForFirstResult__ctor__fn(WaitForFirstResult* __this, uObject* pending, uDelegate* onNoResult)
{
    __this->ctor_(pending, onNoResult);
}

// public T Execute() :156
void WaitForFirstResult__Execute_fn(WaitForFirstResult* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.Collections.List<Outracks.Simulator.Task<T>>*/),
        __this->__type->Precalced(1/*Outracks.Simulator.Task<T>*/),
        __this->__type->Precalced(3/*Outracks.Simulator.Task<T>[]*/),
        __this->__type->Precalced(4/*Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uArray* array1;
    int index2;
    int length3;
    ;
    bool ret3;
    ;
    ::g::Uno::Collections::List* exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Uno.Exception>*/]);

    while (uPtr(__this->_pending)->Count() != 0)

        for (array1 = (uArray*)uPtr(__this->_pending)->ToArray(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            ::g::Outracks::Simulator::Task* task = uPtr(array1)->Strong< ::g::Outracks::Simulator::Task*>(index2);

            if (uPtr(task)->IsCompleted())
            {
                if (uPtr(task)->IsFaulted())
                    ::g::Uno::Collections::List__Add_fn(uPtr(exceptions), uPtr(task)->Exception());
                else
                    return __retval.Store((::g::Outracks::Simulator::Task__get_Result_fn(task, &ret2), ret2)), void();

                ::g::Uno::Collections::List__Remove_fn(uPtr(__this->_pending), task, &ret3);
            }

            ::g::Uno::Threading::Thread::Sleep(10);
        }

    return __retval.Store((uPtr(__this->_onNoResult)->Invoke(&ret4, 1, (uObject*)exceptions), ret4)), void();
}

// public WaitForFirstResult New(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :148
void WaitForFirstResult__New1_fn(uType* __type, uObject* pending, uDelegate* onNoResult, WaitForFirstResult** __retval)
{
    *__retval = WaitForFirstResult::New1(__type, pending, onNoResult);
}

// public WaitForFirstResult(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [instance] :148
void WaitForFirstResult::ctor_(uObject* pending, uDelegate* onNoResult)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.ToList<Outracks.Simulator.Task<T>>*/),
        __type->Precalced(1/*Outracks.Simulator.Task<T>*/),
        __type->T(0),
    };
    _pending = ((::g::Uno::Collections::List*)::g::Uno::Collections::EnumerableExtensions::ToList(__types[0], pending));
    _onNoResult = onNoResult;
}

// public WaitForFirstResult New(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [static] :148
WaitForFirstResult* WaitForFirstResult::New1(uType* __type, uObject* pending, uDelegate* onNoResult)
{
    WaitForFirstResult* obj1 = (WaitForFirstResult*)uNew(__type);
    obj1->ctor_(pending, onNoResult);
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
