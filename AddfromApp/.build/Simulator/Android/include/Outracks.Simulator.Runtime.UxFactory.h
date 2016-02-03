// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Add from App\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.IFactory.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxFactory;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxFactory :10
// {
struct UxFactory_type : uType
{
    ::g::Uno::UX::IFactory interface0;
};

UxFactory_type* UxFactory_typeof();
void UxFactory__ctor__fn(UxFactory* __this, uDelegate* create);
void UxFactory__New1_fn(UxFactory* __this, uObject** __retval);
void UxFactory__New2_fn(uDelegate* create, UxFactory** __retval);

struct UxFactory : uObject
{
    uStrong<uDelegate*> _create;

    void ctor_(uDelegate* create);
    uObject* New1();
    static UxFactory* New2(uDelegate* create);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
