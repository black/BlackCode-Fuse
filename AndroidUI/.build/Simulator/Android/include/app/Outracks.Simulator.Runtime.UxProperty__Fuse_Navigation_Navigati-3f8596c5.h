// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_NAVIGATION_NAVIGATI_3F8596C5_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_NAVIGATION_NAVIGATI_3F8596C5_H__

#include <app/Uno.UX.Property__Fuse_Navigation_NavigationDirection.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Navigation_NavigationDirection;

struct UxProperty__Fuse_Navigation_NavigationDirection__uType : ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection__uType
{
};

UxProperty__Fuse_Navigation_NavigationDirection__uType* UxProperty__Fuse_Navigation_NavigationDirection__typeof();

void UxProperty__Fuse_Navigation_NavigationDirection___ObjInit_1(UxProperty__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Navigation_NavigationDirection* UxProperty__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Navigation_NavigationDirection__OnAddListener(UxProperty__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* listener);
int UxProperty__Fuse_Navigation_NavigationDirection__OnGet(UxProperty__Fuse_Navigation_NavigationDirection* __this);
void UxProperty__Fuse_Navigation_NavigationDirection__OnRemoveListener(UxProperty__Fuse_Navigation_NavigationDirection* __this, ::uDelegate* listener);
void UxProperty__Fuse_Navigation_NavigationDirection__OnSet(UxProperty__Fuse_Navigation_NavigationDirection* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Navigation_NavigationDirection : ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Navigation_NavigationDirection___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
