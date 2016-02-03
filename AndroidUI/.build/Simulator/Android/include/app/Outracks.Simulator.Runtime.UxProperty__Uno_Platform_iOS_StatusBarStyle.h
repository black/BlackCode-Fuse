// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Uno.UX.Property__Uno_Platform_iOS_StatusBarStyle.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Uno_Platform_iOS_StatusBarStyle;

struct UxProperty__Uno_Platform_iOS_StatusBarStyle__uType : ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle__uType
{
};

UxProperty__Uno_Platform_iOS_StatusBarStyle__uType* UxProperty__Uno_Platform_iOS_StatusBarStyle__typeof();

void UxProperty__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Uno_Platform_iOS_StatusBarStyle* UxProperty__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Uno_Platform_iOS_StatusBarStyle__OnAddListener(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* listener);
int UxProperty__Uno_Platform_iOS_StatusBarStyle__OnGet(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this);
void UxProperty__Uno_Platform_iOS_StatusBarStyle__OnRemoveListener(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::uDelegate* listener);
void UxProperty__Uno_Platform_iOS_StatusBarStyle__OnSet(UxProperty__Uno_Platform_iOS_StatusBarStyle* __this, int value, ::uObject* origin);

struct UxProperty__Uno_Platform_iOS_StatusBarStyle : ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
