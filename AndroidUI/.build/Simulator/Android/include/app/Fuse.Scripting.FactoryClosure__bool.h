// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_FACTORY_CLOSURE__BOOL_H__
#define __APP_FUSE_SCRIPTING_FACTORY_CLOSURE__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Threading { struct Promise__bool; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct FactoryClosure__bool;

struct FactoryClosure__bool__uType : ::uClassType
{
};

FactoryClosure__bool__uType* FactoryClosure__bool__typeof();

void FactoryClosure__bool___ObjInit(FactoryClosure__bool* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__bool* promise);
FactoryClosure__bool* FactoryClosure__bool__New_1(::uStatic* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__bool* promise);
void FactoryClosure__bool__Run(FactoryClosure__bool* __this);

struct FactoryClosure__bool : ::uObject
{
    ::uStrong< ::uDelegate*> _factory;
    ::uStrong< ::uArray*> _args;
    ::uStrong< ::app::Uno::Threading::Promise__bool*> _promise;

    void _ObjInit(::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__bool* promise) { FactoryClosure__bool___ObjInit(this, factory, args, promise); }
    void Run() { FactoryClosure__bool__Run(this); }
};

}}}


#endif
