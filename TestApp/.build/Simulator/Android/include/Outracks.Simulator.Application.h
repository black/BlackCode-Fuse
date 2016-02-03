// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.Input.IPointerEventResponder.h>
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerWheelMovedArgs;}}}
namespace g{namespace Fuse{struct UnhandledExceptionArgs;}}
namespace g{namespace Outracks{namespace Simulator{struct Application;}}}
namespace g{namespace Outracks{namespace Simulator{struct State;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public class Application :324
// {
struct Application_type : ::g::Fuse::AppBase_type
{
    ::g::Fuse::Input::IPointerEventResponder interface0;
};

Application_type* Application_typeof();
void Application__ctor_3_fn(Application* __this, uArray* proxyEndpoints, uString* project);
void Application__New1_fn(uArray* proxyEndpoints, uString* project, Application** __retval);
void Application__OnPointerMoved_fn(Application* __this, ::g::Fuse::Input::PointerMovedArgs* args);
void Application__OnPointerPressed_fn(Application* __this, ::g::Fuse::Input::PointerPressedArgs* args);
void Application__OnPointerReleased_fn(Application* __this, ::g::Fuse::Input::PointerReleasedArgs* args);
void Application__OnPointerWheelMoved_fn(Application* __this, ::g::Fuse::Input::PointerWheelMovedArgs* args);
void Application__OnUnhandledException1_fn(Application* __this, uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args);
void Application__OnUpdate_fn(Application* __this);
void Application__get_Reflection_fn(Application* __this, uObject** __retval);
void Application__set_Reflection_fn(Application* __this, uObject* value);
void Application__SetState_fn(Application* __this, ::g::Outracks::Simulator::State* nextState);

struct Application : ::g::Fuse::App
{
    uStrong<uObject*> _defaultPointerEventResponder;
    uStrong< ::g::Outracks::Simulator::State*> _state;

    void ctor_3(uArray* proxyEndpoints, uString* project);
    void OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args);
    void OnPointerWheelMoved(::g::Fuse::Input::PointerWheelMovedArgs* args);
    void OnUnhandledException1(uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args);
    uObject* Reflection();
    void Reflection(uObject* value);
    void SetState(::g::Outracks::Simulator::State* nextState);
    static Application* New1(uArray* proxyEndpoints, uString* project);
};
// }

}}} // ::g::Outracks::Simulator
