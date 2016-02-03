// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxProperty;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxProperty<T> :36
// {
::g::Uno::UX::Property_type* UxProperty_typeof();
void UxProperty__ctor_1_fn(UxProperty* __this, uDelegate* setter, uDelegate* getter, uDelegate* adder, uDelegate* remover);
void UxProperty__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, uDelegate* adder, uDelegate* remover, UxProperty** __retval);
void UxProperty__OnAddListener_fn(UxProperty* __this, uDelegate* listener);
void UxProperty__OnGet_fn(UxProperty* __this, uTRef __retval);
void UxProperty__OnRemoveListener_fn(UxProperty* __this, uDelegate* listener);
void UxProperty__OnSet_fn(UxProperty* __this, void* value, uObject* origin);

struct UxProperty : ::g::Uno::UX::Property
{
    uStrong<uDelegate*> _adder;
    uStrong<uDelegate*> _getter;
    uStrong<uDelegate*> _remover;
    uStrong<uDelegate*> _setter;

    void ctor_1(uDelegate* setter, uDelegate* getter, uDelegate* adder, uDelegate* remover);
    static UxProperty* New1(uType* __type, uDelegate* setter, uDelegate* getter, uDelegate* adder, uDelegate* remover);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
