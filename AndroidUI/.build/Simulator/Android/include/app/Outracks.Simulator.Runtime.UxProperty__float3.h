// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FLOAT3_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FLOAT3_H__

#include <app/Uno.UX.Property__float3.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__float3;

struct UxProperty__float3__uType : ::app::Uno::UX::Property__float3__uType
{
};

UxProperty__float3__uType* UxProperty__float3__typeof();

void UxProperty__float3___ObjInit_1(UxProperty__float3* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__float3* UxProperty__float3__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__float3__OnAddListener(UxProperty__float3* __this, ::uDelegate* listener);
::app::Uno::Float3 UxProperty__float3__OnGet(UxProperty__float3* __this);
void UxProperty__float3__OnRemoveListener(UxProperty__float3* __this, ::uDelegate* listener);
void UxProperty__float3__OnSet(UxProperty__float3* __this, ::app::Uno::Float3 value, ::uObject* origin);

struct UxProperty__float3 : ::app::Uno::UX::Property__float3
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__float3___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
