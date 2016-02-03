// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_TEXT_WRAPPING_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_TEXT_WRAPPING_H__

#include <app/Uno.UX.Property__Fuse_Elements_TextWrapping.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Elements_TextWrapping;

struct UxProperty__Fuse_Elements_TextWrapping__uType : ::app::Uno::UX::Property__Fuse_Elements_TextWrapping__uType
{
};

UxProperty__Fuse_Elements_TextWrapping__uType* UxProperty__Fuse_Elements_TextWrapping__typeof();

void UxProperty__Fuse_Elements_TextWrapping___ObjInit_1(UxProperty__Fuse_Elements_TextWrapping* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Elements_TextWrapping* UxProperty__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Elements_TextWrapping__OnAddListener(UxProperty__Fuse_Elements_TextWrapping* __this, ::uDelegate* listener);
int UxProperty__Fuse_Elements_TextWrapping__OnGet(UxProperty__Fuse_Elements_TextWrapping* __this);
void UxProperty__Fuse_Elements_TextWrapping__OnRemoveListener(UxProperty__Fuse_Elements_TextWrapping* __this, ::uDelegate* listener);
void UxProperty__Fuse_Elements_TextWrapping__OnSet(UxProperty__Fuse_Elements_TextWrapping* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Elements_TextWrapping : ::app::Uno::UX::Property__Fuse_Elements_TextWrapping
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Elements_TextWrapping___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
