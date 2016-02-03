// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct MobileBootstrapping;}}
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{

// internal sealed extern class MobileBootstrapping :2016
// {
uType* MobileBootstrapping_typeof();
void MobileBootstrapping__ctor__fn(MobileBootstrapping* __this);
void MobileBootstrapping__Init_fn();
void MobileBootstrapping__New1_fn(MobileBootstrapping** __retval);
void MobileBootstrapping__OnEnterBackground_fn(int* state);
void MobileBootstrapping__OnEnterForeground_fn(int* state);
void MobileBootstrapping__OnEnterInteractive_fn(int* state);
void MobileBootstrapping__OnExitInteractive_fn(int* state);
void MobileBootstrapping__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
void MobileBootstrapping__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
void MobileBootstrapping__OnReceivedLowMemoryWarning_fn(uObject* sender, ::g::Uno::EventArgs* args);
void MobileBootstrapping__OnStarted_fn(int* state);
void MobileBootstrapping__OnTerminating_fn(int* state);

struct MobileBootstrapping : uObject
{
    static bool _isInited_;
    static bool& _isInited() { return _isInited_; }

    void ctor_();
    static void Init();
    static MobileBootstrapping* New1();
    static void OnEnterBackground(int state);
    static void OnEnterForeground(int state);
    static void OnEnterInteractive(int state);
    static void OnExitInteractive(int state);
    static void OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
    static void OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
    static void OnReceivedLowMemoryWarning(uObject* sender, ::g::Uno::EventArgs* args);
    static void OnStarted(int state);
    static void OnTerminating(int state);
};
// }

}} // ::g::Fuse
