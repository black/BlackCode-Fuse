// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Uno.UX.Property__Fuse_Drawing_DynamicBrush.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct DynamicBrush; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Drawing_DynamicBrush;

struct UxProperty__Fuse_Drawing_DynamicBrush__uType : ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush__uType
{
};

UxProperty__Fuse_Drawing_DynamicBrush__uType* UxProperty__Fuse_Drawing_DynamicBrush__typeof();

void UxProperty__Fuse_Drawing_DynamicBrush___ObjInit_1(UxProperty__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Drawing_DynamicBrush* UxProperty__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Drawing_DynamicBrush__OnAddListener(UxProperty__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* listener);
::app::Fuse::Drawing::DynamicBrush* UxProperty__Fuse_Drawing_DynamicBrush__OnGet(UxProperty__Fuse_Drawing_DynamicBrush* __this);
void UxProperty__Fuse_Drawing_DynamicBrush__OnRemoveListener(UxProperty__Fuse_Drawing_DynamicBrush* __this, ::uDelegate* listener);
void UxProperty__Fuse_Drawing_DynamicBrush__OnSet(UxProperty__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin);

struct UxProperty__Fuse_Drawing_DynamicBrush : ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Drawing_DynamicBrush___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
