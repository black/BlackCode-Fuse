// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FLOAT4_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FLOAT4_H__

#include <app/Uno.UX.Property__float4.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__float4;

struct UxProperty__float4__uType : ::app::Uno::UX::Property__float4__uType
{
};

UxProperty__float4__uType* UxProperty__float4__typeof();

void UxProperty__float4___ObjInit_1(UxProperty__float4* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__float4* UxProperty__float4__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__float4__OnAddListener(UxProperty__float4* __this, ::uDelegate* listener);
::app::Uno::Float4 UxProperty__float4__OnGet(UxProperty__float4* __this);
void UxProperty__float4__OnRemoveListener(UxProperty__float4* __this, ::uDelegate* listener);
void UxProperty__float4__OnSet(UxProperty__float4* __this, ::app::Uno::Float4 value, ::uObject* origin);

struct UxProperty__float4 : ::app::Uno::UX::Property__float4
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__float4___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
