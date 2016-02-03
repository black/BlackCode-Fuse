// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_BRUSH_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.UX.Property__Fuse_Drawing_Brush.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Drawing_Brush;

struct UxProperty__Fuse_Drawing_Brush__uType : ::app::Uno::UX::Property__Fuse_Drawing_Brush__uType
{
};

UxProperty__Fuse_Drawing_Brush__uType* UxProperty__Fuse_Drawing_Brush__typeof();

void UxProperty__Fuse_Drawing_Brush___ObjInit_1(UxProperty__Fuse_Drawing_Brush* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Drawing_Brush* UxProperty__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Drawing_Brush__OnAddListener(UxProperty__Fuse_Drawing_Brush* __this, ::uDelegate* listener);
::app::Fuse::Drawing::Brush* UxProperty__Fuse_Drawing_Brush__OnGet(UxProperty__Fuse_Drawing_Brush* __this);
void UxProperty__Fuse_Drawing_Brush__OnRemoveListener(UxProperty__Fuse_Drawing_Brush* __this, ::uDelegate* listener);
void UxProperty__Fuse_Drawing_Brush__OnSet(UxProperty__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::uObject* origin);

struct UxProperty__Fuse_Drawing_Brush : ::app::Uno::UX::Property__Fuse_Drawing_Brush
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Drawing_Brush___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
