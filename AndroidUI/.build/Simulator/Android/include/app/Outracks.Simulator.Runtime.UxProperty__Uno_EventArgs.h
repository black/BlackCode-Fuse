// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__UNO_EVENT_ARGS_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__UNO_EVENT_ARGS_H__

#include <app/Uno.UX.Property__Uno_EventArgs.h>
#include <Uno.h>
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Uno_EventArgs;

struct UxProperty__Uno_EventArgs__uType : ::app::Uno::UX::Property__Uno_EventArgs__uType
{
};

UxProperty__Uno_EventArgs__uType* UxProperty__Uno_EventArgs__typeof();

void UxProperty__Uno_EventArgs___ObjInit_1(UxProperty__Uno_EventArgs* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Uno_EventArgs* UxProperty__Uno_EventArgs__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Uno_EventArgs__OnAddListener(UxProperty__Uno_EventArgs* __this, ::uDelegate* listener);
::app::Uno::EventArgs* UxProperty__Uno_EventArgs__OnGet(UxProperty__Uno_EventArgs* __this);
void UxProperty__Uno_EventArgs__OnRemoveListener(UxProperty__Uno_EventArgs* __this, ::uDelegate* listener);
void UxProperty__Uno_EventArgs__OnSet(UxProperty__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, ::uObject* origin);

struct UxProperty__Uno_EventArgs : ::app::Uno::UX::Property__Uno_EventArgs
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Uno_EventArgs___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
