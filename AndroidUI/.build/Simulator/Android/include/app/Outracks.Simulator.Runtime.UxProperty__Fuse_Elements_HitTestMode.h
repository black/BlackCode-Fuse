// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_HIT_TEST_MODE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_HIT_TEST_MODE_H__

#include <app/Uno.UX.Property__Fuse_Elements_HitTestMode.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Elements_HitTestMode;

struct UxProperty__Fuse_Elements_HitTestMode__uType : ::app::Uno::UX::Property__Fuse_Elements_HitTestMode__uType
{
};

UxProperty__Fuse_Elements_HitTestMode__uType* UxProperty__Fuse_Elements_HitTestMode__typeof();

void UxProperty__Fuse_Elements_HitTestMode___ObjInit_1(UxProperty__Fuse_Elements_HitTestMode* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Elements_HitTestMode* UxProperty__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Elements_HitTestMode__OnAddListener(UxProperty__Fuse_Elements_HitTestMode* __this, ::uDelegate* listener);
int UxProperty__Fuse_Elements_HitTestMode__OnGet(UxProperty__Fuse_Elements_HitTestMode* __this);
void UxProperty__Fuse_Elements_HitTestMode__OnRemoveListener(UxProperty__Fuse_Elements_HitTestMode* __this, ::uDelegate* listener);
void UxProperty__Fuse_Elements_HitTestMode__OnSet(UxProperty__Fuse_Elements_HitTestMode* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Elements_HitTestMode : ::app::Uno::UX::Property__Fuse_Elements_HitTestMode
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Elements_HitTestMode___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
