// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.UX.Property__Fuse_Drawing_GradientStop.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Drawing_GradientStop;

struct UxProperty__Fuse_Drawing_GradientStop__uType : ::app::Uno::UX::Property__Fuse_Drawing_GradientStop__uType
{
};

UxProperty__Fuse_Drawing_GradientStop__uType* UxProperty__Fuse_Drawing_GradientStop__typeof();

void UxProperty__Fuse_Drawing_GradientStop___ObjInit_1(UxProperty__Fuse_Drawing_GradientStop* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Drawing_GradientStop* UxProperty__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Drawing_GradientStop__OnAddListener(UxProperty__Fuse_Drawing_GradientStop* __this, ::uDelegate* listener);
::app::Fuse::Drawing::GradientStop* UxProperty__Fuse_Drawing_GradientStop__OnGet(UxProperty__Fuse_Drawing_GradientStop* __this);
void UxProperty__Fuse_Drawing_GradientStop__OnRemoveListener(UxProperty__Fuse_Drawing_GradientStop* __this, ::uDelegate* listener);
void UxProperty__Fuse_Drawing_GradientStop__OnSet(UxProperty__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin);

struct UxProperty__Fuse_Drawing_GradientStop : ::app::Uno::UX::Property__Fuse_Drawing_GradientStop
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Drawing_GradientStop___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
