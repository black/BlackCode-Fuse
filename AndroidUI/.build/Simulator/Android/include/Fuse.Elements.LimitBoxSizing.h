// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.BoxSizing.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LimitBoxSizing;}}}
namespace g{namespace Fuse{struct StylePropertyWithUnit;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class LimitBoxSizing :2206
// {
::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof();
void LimitBoxSizing__ctor_1_fn(LimitBoxSizing* __this);
void LimitBoxSizing__CalcBoxPlacement_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Fuse::Elements::BoxPlacement* __retval);
void LimitBoxSizing__CalcMarginSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void LimitBoxSizing__GetLimitHeight_fn(::g::Fuse::Elements::Element* elm, float* __retval);
void LimitBoxSizing__GetLimitWidth_fn(::g::Fuse::Elements::Element* elm, float* __retval);
void LimitBoxSizing__InvalidateLayout_fn(::g::Fuse::Elements::Element* elm);
void LimitBoxSizing__Limit_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* std, ::g::Uno::Float2* __retval);
void LimitBoxSizing__New1_fn(LimitBoxSizing** __retval);
void LimitBoxSizing__ResetLimitHeight_fn(::g::Fuse::Elements::Element* elm);
void LimitBoxSizing__ResetLimitWidth_fn(::g::Fuse::Elements::Element* elm);
void LimitBoxSizing__SetLimitHeight_fn(::g::Fuse::Elements::Element* elm, float* height);
void LimitBoxSizing__SetLimitWidth_fn(::g::Fuse::Elements::Element* elm, float* width);

struct LimitBoxSizing : ::g::Fuse::Elements::BoxSizing
{
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> LimitHeightProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& LimitHeightProperty() { return LimitBoxSizing_typeof()->Init(), LimitHeightProperty_; }
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*> LimitWidthProperty_;
    static uSStrong< ::g::Fuse::StylePropertyWithUnit*>& LimitWidthProperty() { return LimitBoxSizing_typeof()->Init(), LimitWidthProperty_; }
    static uSStrong<LimitBoxSizing*> Singleton_;
    static uSStrong<LimitBoxSizing*>& Singleton() { return LimitBoxSizing_typeof()->Init(), Singleton_; }

    void ctor_1();
    ::g::Uno::Float2 Limit(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 std);
    static float GetLimitHeight(::g::Fuse::Elements::Element* elm);
    static float GetLimitWidth(::g::Fuse::Elements::Element* elm);
    static void InvalidateLayout(::g::Fuse::Elements::Element* elm);
    static LimitBoxSizing* New1();
    static void ResetLimitHeight(::g::Fuse::Elements::Element* elm);
    static void ResetLimitWidth(::g::Fuse::Elements::Element* elm);
    static void SetLimitHeight(::g::Fuse::Elements::Element* elm, float height);
    static void SetLimitWidth(::g::Fuse::Elements::Element* elm, float width);
};
// }

}}} // ::g::Fuse::Elements
