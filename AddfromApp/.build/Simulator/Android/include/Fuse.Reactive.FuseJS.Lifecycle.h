// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Lifecycle;}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Lifecycle :107
// {
uType* Lifecycle_typeof();
void Lifecycle__ctor__fn(Lifecycle* __this);
void Lifecycle__CreateModule_fn(uObject** __retval);
void Lifecycle__New1_fn(Lifecycle** __retval);
void Lifecycle__OnEnteringBackground_fn(int* newState);
void Lifecycle__OnEnteringForeground_fn(int* newState);
void Lifecycle__OnEnteringInteractive_fn(int* newState);
void Lifecycle__OnExitedInteractive_fn(int* newState);
void Lifecycle__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args);
void Lifecycle__OnTerminating_fn(int* newState);

struct Lifecycle : uObject
{
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringBackground_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringBackground() { return _enteringBackground_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringForeground_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringForeground() { return _enteringForeground_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringInteractive_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringInteractive() { return _enteringInteractive_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _exitedInteractive_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _exitedInteractive() { return _exitedInteractive_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _terminating_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _terminating() { return _terminating_; }

    void ctor_();
    static uObject* CreateModule();
    static Lifecycle* New1();
    static void OnEnteringBackground(int newState);
    static void OnEnteringForeground(int newState);
    static void OnEnteringInteractive(int newState);
    static void OnExitedInteractive(int newState);
    static void OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args);
    static void OnTerminating(int newState);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
