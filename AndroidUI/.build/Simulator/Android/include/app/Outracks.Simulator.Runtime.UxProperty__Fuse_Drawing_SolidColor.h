// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Uno.UX.Property__Fuse_Drawing_SolidColor.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Drawing_SolidColor;

struct UxProperty__Fuse_Drawing_SolidColor__uType : ::app::Uno::UX::Property__Fuse_Drawing_SolidColor__uType
{
};

UxProperty__Fuse_Drawing_SolidColor__uType* UxProperty__Fuse_Drawing_SolidColor__typeof();

void UxProperty__Fuse_Drawing_SolidColor___ObjInit_1(UxProperty__Fuse_Drawing_SolidColor* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Drawing_SolidColor* UxProperty__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Drawing_SolidColor__OnAddListener(UxProperty__Fuse_Drawing_SolidColor* __this, ::uDelegate* listener);
::app::Fuse::Drawing::SolidColor* UxProperty__Fuse_Drawing_SolidColor__OnGet(UxProperty__Fuse_Drawing_SolidColor* __this);
void UxProperty__Fuse_Drawing_SolidColor__OnRemoveListener(UxProperty__Fuse_Drawing_SolidColor* __this, ::uDelegate* listener);
void UxProperty__Fuse_Drawing_SolidColor__OnSet(UxProperty__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin);

struct UxProperty__Fuse_Drawing_SolidColor : ::app::Uno::UX::Property__Fuse_Drawing_SolidColor
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Drawing_SolidColor___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
