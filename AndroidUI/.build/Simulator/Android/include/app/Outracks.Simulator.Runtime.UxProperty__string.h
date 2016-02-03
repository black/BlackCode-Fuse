// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__STRING_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__STRING_H__

#include <app/Uno.UX.Property__string.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__string;

struct UxProperty__string__uType : ::app::Uno::UX::Property__string__uType
{
};

UxProperty__string__uType* UxProperty__string__typeof();

void UxProperty__string___ObjInit_1(UxProperty__string* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__string* UxProperty__string__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__string__OnAddListener(UxProperty__string* __this, ::uDelegate* listener);
::uString* UxProperty__string__OnGet(UxProperty__string* __this);
void UxProperty__string__OnRemoveListener(UxProperty__string* __this, ::uDelegate* listener);
void UxProperty__string__OnSet(UxProperty__string* __this, ::uString* value, ::uObject* origin);

struct UxProperty__string : ::app::Uno::UX::Property__string
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__string___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
