// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_LAYOUTS_ORIENTATION_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_LAYOUTS_ORIENTATION_H__

#include <app/Uno.UX.Property__Fuse_Layouts_Orientation.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Layouts_Orientation;

struct UxProperty__Fuse_Layouts_Orientation__uType : ::app::Uno::UX::Property__Fuse_Layouts_Orientation__uType
{
};

UxProperty__Fuse_Layouts_Orientation__uType* UxProperty__Fuse_Layouts_Orientation__typeof();

void UxProperty__Fuse_Layouts_Orientation___ObjInit_1(UxProperty__Fuse_Layouts_Orientation* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Layouts_Orientation* UxProperty__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Layouts_Orientation__OnAddListener(UxProperty__Fuse_Layouts_Orientation* __this, ::uDelegate* listener);
int UxProperty__Fuse_Layouts_Orientation__OnGet(UxProperty__Fuse_Layouts_Orientation* __this);
void UxProperty__Fuse_Layouts_Orientation__OnRemoveListener(UxProperty__Fuse_Layouts_Orientation* __this, ::uDelegate* listener);
void UxProperty__Fuse_Layouts_Orientation__OnSet(UxProperty__Fuse_Layouts_Orientation* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Layouts_Orientation : ::app::Uno::UX::Property__Fuse_Layouts_Orientation
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Layouts_Orientation___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif