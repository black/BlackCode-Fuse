// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__OBJECT_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__OBJECT_H__

#include <app/Uno.UX.Property__object.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__object;

struct UxProperty__object__uType : ::app::Uno::UX::Property__object__uType
{
};

UxProperty__object__uType* UxProperty__object__typeof();

void UxProperty__object___ObjInit_1(UxProperty__object* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__object* UxProperty__object__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__object__OnAddListener(UxProperty__object* __this, ::uDelegate* listener);
::uObject* UxProperty__object__OnGet(UxProperty__object* __this);
void UxProperty__object__OnRemoveListener(UxProperty__object* __this, ::uDelegate* listener);
void UxProperty__object__OnSet(UxProperty__object* __this, ::uObject* value, ::uObject* origin);

struct UxProperty__object : ::app::Uno::UX::Property__object
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__object___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
