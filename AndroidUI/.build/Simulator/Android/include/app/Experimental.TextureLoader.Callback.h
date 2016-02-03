// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_TEXTURE_LOADER_CALLBACK_H__
#define __APP_EXPERIMENTAL_TEXTURE_LOADER_CALLBACK_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }

namespace app {
namespace Experimental {
namespace TextureLoader {

struct Callback;

struct Callback__uType : ::uClassType
{
};

Callback__uType* Callback__typeof();

void Callback___ObjInit(Callback* __this, ::uDelegate* action);
void Callback__Execute(Callback* __this, ::app::Uno::Graphics::Texture2D* arg);
::uDelegate* Callback__get_Action(Callback* __this);
Callback* Callback__New_1(::uStatic* __this, ::uDelegate* action);

struct Callback : ::uObject
{
    ::uStrong< ::uDelegate*> _action;

    void _ObjInit(::uDelegate* action) { Callback___ObjInit(this, action); }
    void Execute(::app::Uno::Graphics::Texture2D* arg) { Callback__Execute(this, arg); }
    ::uDelegate* Action() { return Callback__get_Action(this); }
};

}}}


#endif
