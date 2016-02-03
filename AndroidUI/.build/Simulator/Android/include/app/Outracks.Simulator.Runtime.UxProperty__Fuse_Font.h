// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_FONT_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_FONT_H__

#include <app/Uno.UX.Property__Fuse_Font.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Font;

struct UxProperty__Fuse_Font__uType : ::app::Uno::UX::Property__Fuse_Font__uType
{
};

UxProperty__Fuse_Font__uType* UxProperty__Fuse_Font__typeof();

void UxProperty__Fuse_Font___ObjInit_1(UxProperty__Fuse_Font* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Font* UxProperty__Fuse_Font__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Font__OnAddListener(UxProperty__Fuse_Font* __this, ::uDelegate* listener);
::app::Fuse::Font* UxProperty__Fuse_Font__OnGet(UxProperty__Fuse_Font* __this);
void UxProperty__Fuse_Font__OnRemoveListener(UxProperty__Fuse_Font* __this, ::uDelegate* listener);
void UxProperty__Fuse_Font__OnSet(UxProperty__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin);

struct UxProperty__Fuse_Font : ::app::Uno::UX::Property__Fuse_Font
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Font___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
