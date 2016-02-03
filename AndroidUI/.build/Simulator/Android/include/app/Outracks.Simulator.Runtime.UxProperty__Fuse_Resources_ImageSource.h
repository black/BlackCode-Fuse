// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.UX.Property__Fuse_Resources_ImageSource.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Resources_ImageSource;

struct UxProperty__Fuse_Resources_ImageSource__uType : ::app::Uno::UX::Property__Fuse_Resources_ImageSource__uType
{
};

UxProperty__Fuse_Resources_ImageSource__uType* UxProperty__Fuse_Resources_ImageSource__typeof();

void UxProperty__Fuse_Resources_ImageSource___ObjInit_1(UxProperty__Fuse_Resources_ImageSource* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Resources_ImageSource* UxProperty__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Resources_ImageSource__OnAddListener(UxProperty__Fuse_Resources_ImageSource* __this, ::uDelegate* listener);
::app::Fuse::Resources::ImageSource* UxProperty__Fuse_Resources_ImageSource__OnGet(UxProperty__Fuse_Resources_ImageSource* __this);
void UxProperty__Fuse_Resources_ImageSource__OnRemoveListener(UxProperty__Fuse_Resources_ImageSource* __this, ::uDelegate* listener);
void UxProperty__Fuse_Resources_ImageSource__OnSet(UxProperty__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin);

struct UxProperty__Fuse_Resources_ImageSource : ::app::Uno::UX::Property__Fuse_Resources_ImageSource
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Resources_ImageSource___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
