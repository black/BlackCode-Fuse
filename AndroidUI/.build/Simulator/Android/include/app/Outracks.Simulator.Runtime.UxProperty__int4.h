// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__INT4_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__INT4_H__

#include <app/Uno.UX.Property__int4.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__int4;

struct UxProperty__int4__uType : ::app::Uno::UX::Property__int4__uType
{
};

UxProperty__int4__uType* UxProperty__int4__typeof();

void UxProperty__int4___ObjInit_1(UxProperty__int4* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__int4* UxProperty__int4__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__int4__OnAddListener(UxProperty__int4* __this, ::uDelegate* listener);
::app::Uno::Int4 UxProperty__int4__OnGet(UxProperty__int4* __this);
void UxProperty__int4__OnRemoveListener(UxProperty__int4* __this, ::uDelegate* listener);
void UxProperty__int4__OnSet(UxProperty__int4* __this, ::app::Uno::Int4 value, ::uObject* origin);

struct UxProperty__int4 : ::app::Uno::UX::Property__int4
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__int4___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
