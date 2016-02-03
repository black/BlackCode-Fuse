// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__LONG_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__LONG_H__

#include <app/Uno.UX.Property__long.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__long;

struct UxProperty__long__uType : ::app::Uno::UX::Property__long__uType
{
};

UxProperty__long__uType* UxProperty__long__typeof();

void UxProperty__long___ObjInit_1(UxProperty__long* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__long* UxProperty__long__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__long__OnAddListener(UxProperty__long* __this, ::uDelegate* listener);
::uLong UxProperty__long__OnGet(UxProperty__long* __this);
void UxProperty__long__OnRemoveListener(UxProperty__long* __this, ::uDelegate* listener);
void UxProperty__long__OnSet(UxProperty__long* __this, ::uLong value, ::uObject* origin);

struct UxProperty__long : ::app::Uno::UX::Property__long
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__long___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
