// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_MOBILE_BOOTSTRAPPING_H__
#define __APP_FUSE_MOBILE_BOOTSTRAPPING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {

struct MobileBootstrapping;

extern bool MobileBootstrapping___isInited;

struct MobileBootstrapping__uType : ::uClassType
{
};

MobileBootstrapping__uType* MobileBootstrapping__typeof();

void MobileBootstrapping___ObjInit(MobileBootstrapping* __this);
void MobileBootstrapping__Init(::uStatic* __this);
MobileBootstrapping* MobileBootstrapping__New_1(::uStatic* __this);
void MobileBootstrapping__OnEnterBackground(::uStatic* __this, int state);
void MobileBootstrapping__OnEnterForeground(::uStatic* __this, int state);
void MobileBootstrapping__OnEnterInteractive(::uStatic* __this, int state);
void MobileBootstrapping__OnExitInteractive(::uStatic* __this, int state);
void MobileBootstrapping__OnKeyPressed(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void MobileBootstrapping__OnKeyReleased(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void MobileBootstrapping__OnReceivedLowMemoryWarning(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void MobileBootstrapping__OnStarted(::uStatic* __this, int state);
void MobileBootstrapping__OnTerminating(::uStatic* __this, int state);

struct MobileBootstrapping : ::uObject
{
    void _ObjInit() { MobileBootstrapping___ObjInit(this); }
};

}}


#endif
