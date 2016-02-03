// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_FACTORY_CLOSURE__STRING_H__
#define __APP_FUSE_SCRIPTING_FACTORY_CLOSURE__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Threading { struct Promise__string; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct FactoryClosure__string;

struct FactoryClosure__string__uType : ::uClassType
{
};

FactoryClosure__string__uType* FactoryClosure__string__typeof();

void FactoryClosure__string___ObjInit(FactoryClosure__string* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__string* promise);
FactoryClosure__string* FactoryClosure__string__New_1(::uStatic* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__string* promise);
void FactoryClosure__string__Run(FactoryClosure__string* __this);

struct FactoryClosure__string : ::uObject
{
    ::uStrong< ::uDelegate*> _factory;
    ::uStrong< ::uArray*> _args;
    ::uStrong< ::app::Uno::Threading::Promise__string*> _promise;

    void _ObjInit(::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__string* promise) { FactoryClosure__string___ObjInit(this, factory, args, promise); }
    void Run() { FactoryClosure__string__Run(this); }
};

}}}


#endif
