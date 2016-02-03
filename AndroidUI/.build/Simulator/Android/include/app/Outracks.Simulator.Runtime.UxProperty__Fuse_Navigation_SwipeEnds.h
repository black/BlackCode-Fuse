// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_NAVIGATION_SWIPE_ENDS_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_NAVIGATION_SWIPE_ENDS_H__

#include <app/Uno.UX.Property__Fuse_Navigation_SwipeEnds.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Navigation_SwipeEnds;

struct UxProperty__Fuse_Navigation_SwipeEnds__uType : ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds__uType
{
};

UxProperty__Fuse_Navigation_SwipeEnds__uType* UxProperty__Fuse_Navigation_SwipeEnds__typeof();

void UxProperty__Fuse_Navigation_SwipeEnds___ObjInit_1(UxProperty__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Navigation_SwipeEnds* UxProperty__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Navigation_SwipeEnds__OnAddListener(UxProperty__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* listener);
int UxProperty__Fuse_Navigation_SwipeEnds__OnGet(UxProperty__Fuse_Navigation_SwipeEnds* __this);
void UxProperty__Fuse_Navigation_SwipeEnds__OnRemoveListener(UxProperty__Fuse_Navigation_SwipeEnds* __this, ::uDelegate* listener);
void UxProperty__Fuse_Navigation_SwipeEnds__OnSet(UxProperty__Fuse_Navigation_SwipeEnds* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Navigation_SwipeEnds : ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Navigation_SwipeEnds___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
