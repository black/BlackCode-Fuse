// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.BoxSizing.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LimitBoxSizing;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class LimitBoxSizing :2200
// {
::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof();
void LimitBoxSizing__ctor_1_fn(LimitBoxSizing* __this);
void LimitBoxSizing__CalcBoxPlacement_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Fuse::Elements::BoxPlacement* __retval);
void LimitBoxSizing__CalcMarginSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void LimitBoxSizing__Limit_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* std, ::g::Uno::Float2* __retval);
void LimitBoxSizing__New1_fn(LimitBoxSizing** __retval);

struct LimitBoxSizing : ::g::Fuse::Elements::BoxSizing
{
    static uSStrong<LimitBoxSizing*> Singleton_;
    static uSStrong<LimitBoxSizing*>& Singleton() { return LimitBoxSizing_typeof()->Init(), Singleton_; }

    void ctor_1();
    ::g::Uno::Float2 Limit(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 std);
    static LimitBoxSizing* New1();
};
// }

}}} // ::g::Fuse::Elements
