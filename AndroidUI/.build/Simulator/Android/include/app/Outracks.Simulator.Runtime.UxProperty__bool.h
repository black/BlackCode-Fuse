// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__BOOL_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__BOOL_H__

#include <app/Uno.UX.Property__bool.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__bool;

struct UxProperty__bool__uType : ::app::Uno::UX::Property__bool__uType
{
};

UxProperty__bool__uType* UxProperty__bool__typeof();

void UxProperty__bool___ObjInit_1(UxProperty__bool* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__bool* UxProperty__bool__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__bool__OnAddListener(UxProperty__bool* __this, ::uDelegate* listener);
bool UxProperty__bool__OnGet(UxProperty__bool* __this);
void UxProperty__bool__OnRemoveListener(UxProperty__bool* __this, ::uDelegate* listener);
void UxProperty__bool__OnSet(UxProperty__bool* __this, bool value, ::uObject* origin);

struct UxProperty__bool : ::app::Uno::UX::Property__bool
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__bool___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
