// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ANIMATIONS_EASING_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ANIMATIONS_EASING_H__

#include <app/Uno.UX.Property__Fuse_Animations_Easing.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Animations_Easing;

struct UxProperty__Fuse_Animations_Easing__uType : ::app::Uno::UX::Property__Fuse_Animations_Easing__uType
{
};

UxProperty__Fuse_Animations_Easing__uType* UxProperty__Fuse_Animations_Easing__typeof();

void UxProperty__Fuse_Animations_Easing___ObjInit_1(UxProperty__Fuse_Animations_Easing* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Animations_Easing* UxProperty__Fuse_Animations_Easing__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Animations_Easing__OnAddListener(UxProperty__Fuse_Animations_Easing* __this, ::uDelegate* listener);
int UxProperty__Fuse_Animations_Easing__OnGet(UxProperty__Fuse_Animations_Easing* __this);
void UxProperty__Fuse_Animations_Easing__OnRemoveListener(UxProperty__Fuse_Animations_Easing* __this, ::uDelegate* listener);
void UxProperty__Fuse_Animations_Easing__OnSet(UxProperty__Fuse_Animations_Easing* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Animations_Easing : ::app::Uno::UX::Property__Fuse_Animations_Easing
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Animations_Easing___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
