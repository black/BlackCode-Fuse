// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__SHORT_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__SHORT_H__

#include <app/Uno.UX.Property__short.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__short;

struct UxProperty__short__uType : ::app::Uno::UX::Property__short__uType
{
};

UxProperty__short__uType* UxProperty__short__typeof();

void UxProperty__short___ObjInit_1(UxProperty__short* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__short* UxProperty__short__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__short__OnAddListener(UxProperty__short* __this, ::uDelegate* listener);
::uShort UxProperty__short__OnGet(UxProperty__short* __this);
void UxProperty__short__OnRemoveListener(UxProperty__short* __this, ::uDelegate* listener);
void UxProperty__short__OnSet(UxProperty__short* __this, ::uShort value, ::uObject* origin);

struct UxProperty__short : ::app::Uno::UX::Property__short
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__short___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
