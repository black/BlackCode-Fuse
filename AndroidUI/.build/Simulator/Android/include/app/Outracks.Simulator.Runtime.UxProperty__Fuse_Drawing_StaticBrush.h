// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Uno.UX.Property__Fuse_Drawing_StaticBrush.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct StaticBrush; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Drawing_StaticBrush;

struct UxProperty__Fuse_Drawing_StaticBrush__uType : ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush__uType
{
};

UxProperty__Fuse_Drawing_StaticBrush__uType* UxProperty__Fuse_Drawing_StaticBrush__typeof();

void UxProperty__Fuse_Drawing_StaticBrush___ObjInit_1(UxProperty__Fuse_Drawing_StaticBrush* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Drawing_StaticBrush* UxProperty__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Drawing_StaticBrush__OnAddListener(UxProperty__Fuse_Drawing_StaticBrush* __this, ::uDelegate* listener);
::app::Fuse::Drawing::StaticBrush* UxProperty__Fuse_Drawing_StaticBrush__OnGet(UxProperty__Fuse_Drawing_StaticBrush* __this);
void UxProperty__Fuse_Drawing_StaticBrush__OnRemoveListener(UxProperty__Fuse_Drawing_StaticBrush* __this, ::uDelegate* listener);
void UxProperty__Fuse_Drawing_StaticBrush__OnSet(UxProperty__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin);

struct UxProperty__Fuse_Drawing_StaticBrush : ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Drawing_StaticBrush___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
