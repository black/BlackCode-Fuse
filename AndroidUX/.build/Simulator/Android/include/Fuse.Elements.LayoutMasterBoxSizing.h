// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.BoxSizing.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutMasterBoxSizing;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutMasterBoxSizing__LayoutMasterData;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class LayoutMasterBoxSizing :2027
// {
::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof();
void LayoutMasterBoxSizing__ctor_1_fn(LayoutMasterBoxSizing* __this);
void LayoutMasterBoxSizing__CalcBoxPlacement_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Fuse::Elements::BoxPlacement* __retval);
void LayoutMasterBoxSizing__CalcMarginSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void LayoutMasterBoxSizing__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval);
void LayoutMasterBoxSizing__GetLayoutMasterData_fn(::g::Fuse::Elements::Element* elm, LayoutMasterBoxSizing__LayoutMasterData** __retval);
void LayoutMasterBoxSizing__GetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void LayoutMasterBoxSizing__IsContentRelativeSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval);
void LayoutMasterBoxSizing__New1_fn(LayoutMasterBoxSizing** __retval);
void LayoutMasterBoxSizing__RequestLayout_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element);
void LayoutMasterBoxSizing__ResetLayoutMaster_fn(::g::Fuse::Elements::Element* elm);
void LayoutMasterBoxSizing__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
void LayoutMasterBoxSizing__SetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* mode);

struct LayoutMasterBoxSizing : ::g::Fuse::Elements::BoxSizing
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _layoutMasterDataProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _layoutMasterDataProperty() { return LayoutMasterBoxSizing_typeof()->Init(), _layoutMasterDataProperty_; }
    static uSStrong<LayoutMasterBoxSizing*> Singleton_;
    static uSStrong<LayoutMasterBoxSizing*>& Singleton() { return LayoutMasterBoxSizing_typeof()->Init(), Singleton_; }

    void ctor_1();
    static ::g::Fuse::Elements::Element* GetLayoutMaster(::g::Fuse::Elements::Element* elm);
    static LayoutMasterBoxSizing__LayoutMasterData* GetLayoutMasterData(::g::Fuse::Elements::Element* elm);
    static int GetLayoutMasterMode(::g::Fuse::Elements::Element* elm);
    static LayoutMasterBoxSizing* New1();
    static void ResetLayoutMaster(::g::Fuse::Elements::Element* elm);
    static void SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master);
    static void SetLayoutMasterMode(::g::Fuse::Elements::Element* elm, int mode);
};
// }

}}} // ::g::Fuse::Elements
