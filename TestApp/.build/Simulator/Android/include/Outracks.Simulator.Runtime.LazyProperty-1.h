// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct LazyProperty;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct LazyPropertyStorage;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class LazyProperty<T> :392
// {
::g::Uno::UX::Property_type* LazyProperty_typeof();
void LazyProperty__ctor_1_fn(LazyProperty* __this, uDelegate* storageFactory);
void LazyProperty__New1_fn(uType* __type, uDelegate* storageFactory, LazyProperty** __retval);
void LazyProperty__OnAddListener_fn(LazyProperty* __this, uDelegate* listener);
void LazyProperty__OnGet_fn(LazyProperty* __this, uTRef __retval);
void LazyProperty__OnRemoveListener_fn(LazyProperty* __this, uDelegate* listener);
void LazyProperty__OnSet_fn(LazyProperty* __this, void* value, uObject* origin);
void LazyProperty__get_Storage_fn(LazyProperty* __this, ::g::Outracks::Simulator::Runtime::LazyPropertyStorage** __retval);

struct LazyProperty : ::g::Uno::UX::Property
{
    uStrong< ::g::Outracks::Simulator::Runtime::LazyPropertyStorage*> _storage;
    uStrong<uDelegate*> _storageFactory;

    void ctor_1(uDelegate* storageFactory);
    ::g::Outracks::Simulator::Runtime::LazyPropertyStorage* Storage();
    static LazyProperty* New1(uType* __type, uDelegate* storageFactory);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
