// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_TRIGGERS_STATE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_TRIGGERS_STATE_H__

#include <app/Uno.UX.Property__Fuse_Triggers_State.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Triggers_State;

struct UxProperty__Fuse_Triggers_State__uType : ::app::Uno::UX::Property__Fuse_Triggers_State__uType
{
};

UxProperty__Fuse_Triggers_State__uType* UxProperty__Fuse_Triggers_State__typeof();

void UxProperty__Fuse_Triggers_State___ObjInit_1(UxProperty__Fuse_Triggers_State* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Triggers_State* UxProperty__Fuse_Triggers_State__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Triggers_State__OnAddListener(UxProperty__Fuse_Triggers_State* __this, ::uDelegate* listener);
::app::Fuse::Triggers::State* UxProperty__Fuse_Triggers_State__OnGet(UxProperty__Fuse_Triggers_State* __this);
void UxProperty__Fuse_Triggers_State__OnRemoveListener(UxProperty__Fuse_Triggers_State* __this, ::uDelegate* listener);
void UxProperty__Fuse_Triggers_State__OnSet(UxProperty__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, ::uObject* origin);

struct UxProperty__Fuse_Triggers_State : ::app::Uno::UX::Property__Fuse_Triggers_State
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Triggers_State___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
