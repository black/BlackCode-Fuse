// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_FACTORY_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_FACTORY_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.IFactory.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxFactory;

struct UxFactory__uType : ::uClassType
{
    ::app::Uno::UX::IFactory __interface_0;
};

UxFactory__uType* UxFactory__typeof();

void UxFactory___ObjInit(UxFactory* __this, ::uDelegate* create);
::uObject* UxFactory__New_1(UxFactory* __this);
UxFactory* UxFactory__New_2(::uStatic* __this, ::uDelegate* create);

struct UxFactory : ::uObject
{
    ::uStrong< ::uDelegate*> _create;

    void _ObjInit(::uDelegate* create) { UxFactory___ObjInit(this, create); }
    ::uObject* New_1() { return UxFactory__New_1(this); }
};

}}}}


#endif
