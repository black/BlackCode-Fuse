// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FLOAT2_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FLOAT2_H__

#include <app/Uno.UX.Property__float2.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__float2;

struct UxProperty__float2__uType : ::app::Uno::UX::Property__float2__uType
{
};

UxProperty__float2__uType* UxProperty__float2__typeof();

void UxProperty__float2___ObjInit_1(UxProperty__float2* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__float2* UxProperty__float2__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__float2__OnAddListener(UxProperty__float2* __this, ::uDelegate* listener);
::app::Uno::Float2 UxProperty__float2__OnGet(UxProperty__float2* __this);
void UxProperty__float2__OnRemoveListener(UxProperty__float2* __this, ::uDelegate* listener);
void UxProperty__float2__OnSet(UxProperty__float2* __this, ::app::Uno::Float2 value, ::uObject* origin);

struct UxProperty__float2 : ::app::Uno::UX::Property__float2
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__float2___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
