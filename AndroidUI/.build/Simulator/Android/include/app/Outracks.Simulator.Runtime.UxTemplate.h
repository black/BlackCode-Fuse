// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_TEMPLATE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_TEMPLATE_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxTemplate;

struct UxTemplate__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
};

UxTemplate__uType* UxTemplate__typeof();

void UxTemplate___ObjInit(UxTemplate* __this, ::uDelegate* matches, ::uDelegate* applyMethod);
bool UxTemplate__Apply(UxTemplate* __this, ::uObject* obj);
UxTemplate* UxTemplate__New_1(::uStatic* __this, ::uDelegate* matches, ::uDelegate* applyMethod);

struct UxTemplate : ::uObject
{
    ::uStrong< ::uDelegate*> _matches;
    ::uStrong< ::uDelegate*> _apply;

    void _ObjInit(::uDelegate* matches, ::uDelegate* applyMethod) { UxTemplate___ObjInit(this, matches, applyMethod); }
    bool Apply(::uObject* obj) { return UxTemplate__Apply(this, obj); }
};

}}}}


#endif
