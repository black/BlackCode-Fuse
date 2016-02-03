// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__INT_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__INT_H__

#include <app/Uno.UX.Property__int.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__int;

struct UxProperty__int__uType : ::app::Uno::UX::Property__int__uType
{
};

UxProperty__int__uType* UxProperty__int__typeof();

void UxProperty__int___ObjInit_1(UxProperty__int* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__int* UxProperty__int__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__int__OnAddListener(UxProperty__int* __this, ::uDelegate* listener);
int UxProperty__int__OnGet(UxProperty__int* __this);
void UxProperty__int__OnRemoveListener(UxProperty__int* __this, ::uDelegate* listener);
void UxProperty__int__OnSet(UxProperty__int* __this, int value, ::uObject* origin);

struct UxProperty__int : ::app::Uno::UX::Property__int
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__int___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
