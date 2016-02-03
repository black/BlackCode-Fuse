// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_INTER_APP_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_INTER_APP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeEvent; } } }
namespace app { namespace Uno { namespace Collections { struct List__string; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct InterApp;

extern ::uStaticStrong< ::app::Uno::Collections::List__string*> InterApp___cachedUris;
extern bool InterApp___jsInitialized;
extern ::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> InterApp___onReceivedUri;

struct InterApp__uType : ::uClassType
{
};

InterApp__uType* InterApp__typeof();

void InterApp___ObjInit(InterApp* __this);
void InterApp___TypeInit(::uStatic* __this);
::uObject* InterApp__CreateModule(::uStatic* __this);
::uObject* InterApp__LaunchUri(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
InterApp* InterApp__New_1(::uStatic* __this);
void InterApp__OnJsInitialized(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void InterApp__OnReceivedUri(::uStatic* __this, ::uObject* sender, ::uString* uri);

struct InterApp : ::uObject
{
    void _ObjInit() { InterApp___ObjInit(this); }
};

}}}}


#endif
