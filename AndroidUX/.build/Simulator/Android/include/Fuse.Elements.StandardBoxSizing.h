// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.BoxSizing.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct StandardBoxSizing;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal class StandardBoxSizing :107
// {
::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof();
void StandardBoxSizing__ctor_1_fn(StandardBoxSizing* __this);
void StandardBoxSizing__ApplyFixedPaddingBox_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* sz, ::g::Uno::Float2* fillSize, int* fillSet, bool* fixedSize, ::g::Uno::Float2* __retval);
void StandardBoxSizing__CalcBoxPlacement_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Fuse::Elements::BoxPlacement* __retval);
void StandardBoxSizing__CalcMarginSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void StandardBoxSizing__ConstrainMinMax_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* sz, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void StandardBoxSizing__GetPaddingSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* padFill, int* fillSet, ::g::Uno::Float2* __retval);
void StandardBoxSizing__IsContentRelativeSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval);
void StandardBoxSizing__LimitPaddingBoxSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* sz, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void StandardBoxSizing__New1_fn(StandardBoxSizing** __retval);
void StandardBoxSizing__SnapUp_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);

struct StandardBoxSizing : ::g::Fuse::Elements::BoxSizing
{
    bool ImplicitMax;
    float pixelEpsilon;
    static uSStrong<StandardBoxSizing*> Singleton_;
    static uSStrong<StandardBoxSizing*>& Singleton() { return StandardBoxSizing_typeof()->Init(), Singleton_; }

    void ctor_1();
    ::g::Uno::Float2 ApplyFixedPaddingBox(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 sz, ::g::Uno::Float2 fillSize, int* fillSet, bool* fixedSize);
    ::g::Uno::Float2 ConstrainMinMax(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 sz, ::g::Uno::Float2 fillSize, int fillSet);
    ::g::Uno::Float2 GetPaddingSize(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 padFill, int fillSet);
    ::g::Uno::Float2 LimitPaddingBoxSize(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 sz, ::g::Uno::Float2 fillSize, int fillSet);
    ::g::Uno::Float2 SnapUp(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 p);
    static StandardBoxSizing* New1();
};
// }

}}} // ::g::Fuse::Elements
