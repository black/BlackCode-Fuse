// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_TRIGGERS_TRIGGER_BYPASS_MODE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_TRIGGERS_TRIGGER_BYPASS_MODE_H__

#include <app/Uno.UX.Property__Fuse_Triggers_TriggerBypassMode.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Triggers_TriggerBypassMode;

struct UxProperty__Fuse_Triggers_TriggerBypassMode__uType : ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode__uType
{
};

UxProperty__Fuse_Triggers_TriggerBypassMode__uType* UxProperty__Fuse_Triggers_TriggerBypassMode__typeof();

void UxProperty__Fuse_Triggers_TriggerBypassMode___ObjInit_1(UxProperty__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Triggers_TriggerBypassMode* UxProperty__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Triggers_TriggerBypassMode__OnAddListener(UxProperty__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* listener);
int UxProperty__Fuse_Triggers_TriggerBypassMode__OnGet(UxProperty__Fuse_Triggers_TriggerBypassMode* __this);
void UxProperty__Fuse_Triggers_TriggerBypassMode__OnRemoveListener(UxProperty__Fuse_Triggers_TriggerBypassMode* __this, ::uDelegate* listener);
void UxProperty__Fuse_Triggers_TriggerBypassMode__OnSet(UxProperty__Fuse_Triggers_TriggerBypassMode* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Triggers_TriggerBypassMode : ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Triggers_TriggerBypassMode___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
