// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Uno.UX.Property__Fuse_Drawing_LinearGradient.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Drawing_LinearGradient;

struct UxProperty__Fuse_Drawing_LinearGradient__uType : ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient__uType
{
};

UxProperty__Fuse_Drawing_LinearGradient__uType* UxProperty__Fuse_Drawing_LinearGradient__typeof();

void UxProperty__Fuse_Drawing_LinearGradient___ObjInit_1(UxProperty__Fuse_Drawing_LinearGradient* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Drawing_LinearGradient* UxProperty__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Drawing_LinearGradient__OnAddListener(UxProperty__Fuse_Drawing_LinearGradient* __this, ::uDelegate* listener);
::app::Fuse::Drawing::LinearGradient* UxProperty__Fuse_Drawing_LinearGradient__OnGet(UxProperty__Fuse_Drawing_LinearGradient* __this);
void UxProperty__Fuse_Drawing_LinearGradient__OnRemoveListener(UxProperty__Fuse_Drawing_LinearGradient* __this, ::uDelegate* listener);
void UxProperty__Fuse_Drawing_LinearGradient__OnSet(UxProperty__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin);

struct UxProperty__Fuse_Drawing_LinearGradient : ::app::Uno::UX::Property__Fuse_Drawing_LinearGradient
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Drawing_LinearGradient___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
