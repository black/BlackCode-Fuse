// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_STRETCH_MODE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_STRETCH_MODE_H__

#include <app/Uno.UX.Property__Fuse_Elements_StretchMode.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Elements_StretchMode;

struct UxProperty__Fuse_Elements_StretchMode__uType : ::app::Uno::UX::Property__Fuse_Elements_StretchMode__uType
{
};

UxProperty__Fuse_Elements_StretchMode__uType* UxProperty__Fuse_Elements_StretchMode__typeof();

void UxProperty__Fuse_Elements_StretchMode___ObjInit_1(UxProperty__Fuse_Elements_StretchMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Elements_StretchMode* UxProperty__Fuse_Elements_StretchMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Elements_StretchMode__OnAddListener(UxProperty__Fuse_Elements_StretchMode* __this, ::uDelegate* listener);
int UxProperty__Fuse_Elements_StretchMode__OnGet(UxProperty__Fuse_Elements_StretchMode* __this);
void UxProperty__Fuse_Elements_StretchMode__OnRemoveListener(UxProperty__Fuse_Elements_StretchMode* __this, ::uDelegate* listener);
void UxProperty__Fuse_Elements_StretchMode__OnSet(UxProperty__Fuse_Elements_StretchMode* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Elements_StretchMode : ::app::Uno::UX::Property__Fuse_Elements_StretchMode
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Elements_StretchMode___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
