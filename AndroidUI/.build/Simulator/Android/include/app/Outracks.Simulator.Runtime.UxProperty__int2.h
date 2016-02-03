// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__INT2_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__INT2_H__

#include <app/Uno.UX.Property__int2.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__int2;

struct UxProperty__int2__uType : ::app::Uno::UX::Property__int2__uType
{
};

UxProperty__int2__uType* UxProperty__int2__typeof();

void UxProperty__int2___ObjInit_1(UxProperty__int2* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__int2* UxProperty__int2__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__int2__OnAddListener(UxProperty__int2* __this, ::uDelegate* listener);
::app::Uno::Int2 UxProperty__int2__OnGet(UxProperty__int2* __this);
void UxProperty__int2__OnRemoveListener(UxProperty__int2* __this, ::uDelegate* listener);
void UxProperty__int2__OnSet(UxProperty__int2* __this, ::app::Uno::Int2 value, ::uObject* origin);

struct UxProperty__int2 : ::app::Uno::UX::Property__int2
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__int2___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
