// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__INT3_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__INT3_H__

#include <app/Uno.UX.Property__int3.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int3; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__int3;

struct UxProperty__int3__uType : ::app::Uno::UX::Property__int3__uType
{
};

UxProperty__int3__uType* UxProperty__int3__typeof();

void UxProperty__int3___ObjInit_1(UxProperty__int3* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__int3* UxProperty__int3__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__int3__OnAddListener(UxProperty__int3* __this, ::uDelegate* listener);
::app::Uno::Int3 UxProperty__int3__OnGet(UxProperty__int3* __this);
void UxProperty__int3__OnRemoveListener(UxProperty__int3* __this, ::uDelegate* listener);
void UxProperty__int3__OnSet(UxProperty__int3* __this, ::app::Uno::Int3 value, ::uObject* origin);

struct UxProperty__int3 : ::app::Uno::UX::Property__int3
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__int3___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
