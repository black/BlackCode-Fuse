// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_MODAL_DIALOG_H__
#define __APP_OUTRACKS_SIMULATOR_MODAL_DIALOG_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Control; } } }
namespace app { namespace Fuse { struct App; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ModalDialog;

struct ModalDialog__uType : ::uClassType
{
};

ModalDialog__uType* ModalDialog__typeof();

void ModalDialog___ObjInit(ModalDialog* __this);
ModalDialog* ModalDialog__New_1(::uStatic* __this);
void ModalDialog__Show(::uStatic* __this, ::app::Fuse::App* app, ::uString* header, ::uString* body, ::uString* details, ::uObject* buttons);
void ModalDialog__ShowPrompt(::uStatic* __this, ::app::Fuse::App* app, ::uString* header, ::uString* body, ::app::Fuse::Controls::Control* inputControl, ::uObject* buttons);

struct ModalDialog : ::uObject
{
    void _ObjInit() { ModalDialog___ObjInit(this); }
};

}}}


#endif
