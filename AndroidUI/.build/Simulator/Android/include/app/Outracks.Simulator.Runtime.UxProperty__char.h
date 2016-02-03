// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__CHAR_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__CHAR_H__

#include <app/Uno.UX.Property__char.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__char;

struct UxProperty__char__uType : ::app::Uno::UX::Property__char__uType
{
};

UxProperty__char__uType* UxProperty__char__typeof();

void UxProperty__char___ObjInit_1(UxProperty__char* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__char* UxProperty__char__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__char__OnAddListener(UxProperty__char* __this, ::uDelegate* listener);
::uChar UxProperty__char__OnGet(UxProperty__char* __this);
void UxProperty__char__OnRemoveListener(UxProperty__char* __this, ::uDelegate* listener);
void UxProperty__char__OnSet(UxProperty__char* __this, ::uChar value, ::uObject* origin);

struct UxProperty__char : ::app::Uno::UX::Property__char
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__char___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
