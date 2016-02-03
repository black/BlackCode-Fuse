// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_STRETCH_SIZING_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_STRETCH_SIZING_H__

#include <app/Uno.UX.Property__Fuse_Elements_StretchSizing.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Elements_StretchSizing;

struct UxProperty__Fuse_Elements_StretchSizing__uType : ::app::Uno::UX::Property__Fuse_Elements_StretchSizing__uType
{
};

UxProperty__Fuse_Elements_StretchSizing__uType* UxProperty__Fuse_Elements_StretchSizing__typeof();

void UxProperty__Fuse_Elements_StretchSizing___ObjInit_1(UxProperty__Fuse_Elements_StretchSizing* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Elements_StretchSizing* UxProperty__Fuse_Elements_StretchSizing__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Elements_StretchSizing__OnAddListener(UxProperty__Fuse_Elements_StretchSizing* __this, ::uDelegate* listener);
int UxProperty__Fuse_Elements_StretchSizing__OnGet(UxProperty__Fuse_Elements_StretchSizing* __this);
void UxProperty__Fuse_Elements_StretchSizing__OnRemoveListener(UxProperty__Fuse_Elements_StretchSizing* __this, ::uDelegate* listener);
void UxProperty__Fuse_Elements_StretchSizing__OnSet(UxProperty__Fuse_Elements_StretchSizing* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Elements_StretchSizing : ::app::Uno::UX::Property__Fuse_Elements_StretchSizing
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Elements_StretchSizing___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
