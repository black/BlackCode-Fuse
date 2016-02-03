// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__DOUBLE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__DOUBLE_H__

#include <app/Uno.UX.Property__double.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__double;

struct UxProperty__double__uType : ::app::Uno::UX::Property__double__uType
{
};

UxProperty__double__uType* UxProperty__double__typeof();

void UxProperty__double___ObjInit_1(UxProperty__double* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__double* UxProperty__double__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__double__OnAddListener(UxProperty__double* __this, ::uDelegate* listener);
double UxProperty__double__OnGet(UxProperty__double* __this);
void UxProperty__double__OnRemoveListener(UxProperty__double* __this, ::uDelegate* listener);
void UxProperty__double__OnSet(UxProperty__double* __this, double value, ::uObject* origin);

struct UxProperty__double : ::app::Uno::UX::Property__double
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__double___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
