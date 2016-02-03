// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FLOAT_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FLOAT_H__

#include <app/Uno.UX.Property__float.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__float;

struct UxProperty__float__uType : ::app::Uno::UX::Property__float__uType
{
};

UxProperty__float__uType* UxProperty__float__typeof();

void UxProperty__float___ObjInit_1(UxProperty__float* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__float* UxProperty__float__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__float__OnAddListener(UxProperty__float* __this, ::uDelegate* listener);
float UxProperty__float__OnGet(UxProperty__float* __this);
void UxProperty__float__OnRemoveListener(UxProperty__float* __this, ::uDelegate* listener);
void UxProperty__float__OnSet(UxProperty__float* __this, float value, ::uObject* origin);

struct UxProperty__float : ::app::Uno::UX::Property__float
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__float___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
