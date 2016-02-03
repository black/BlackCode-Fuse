// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal abstract class BoxSizing :18
// {
struct BoxSizing_type : uType
{
    void(*fp_CalcBoxPlacement)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Fuse::Elements::BoxPlacement*);
    void(*fp_CalcMarginSize)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*);
    void(*fp_IsContentRelativeSize)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int*);
    void(*fp_RequestLayout)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*);
};

BoxSizing_type* BoxSizing_typeof();
void BoxSizing__ctor__fn(BoxSizing* __this);
void BoxSizing__EffectiveAnchor_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* halign, int* valign, ::g::Uno::Float2* anchor, int* unit);
void BoxSizing__EffectiveHorizontalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval);
void BoxSizing__EffectiveVerticalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval);
void BoxSizing__IsContentRelativeSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval);
void BoxSizing__RequestLayout_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element);
void BoxSizing__SimpleToAnchor_fn(BoxSizing* __this, int* align, float* __retval);
void BoxSizing__UnitSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, float* scalar, int* unit, float* fill, bool* secondary, bool* known, float* __retval);

struct BoxSizing : uObject
{
    void ctor_();
    ::g::Fuse::Elements::BoxPlacement CalcBoxPlacement(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 position, ::g::Uno::Float2 availableSize, int availSet);
    ::g::Uno::Float2 CalcMarginSize(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 fillSize, int fillSet);
    void EffectiveAnchor(::g::Fuse::Elements::Element* element, int halign, int valign, ::g::Uno::Float2* anchor, int* unit);
    int EffectiveHorizontalAlignment(::g::Fuse::Elements::Element* element);
    int EffectiveVerticalAlignment(::g::Fuse::Elements::Element* element);
    int IsContentRelativeSize(::g::Fuse::Elements::Element* element) { int __retval; return (((BoxSizing_type*)__type)->fp_IsContentRelativeSize)(this, element, &__retval), __retval; }
    void RequestLayout(::g::Fuse::Elements::Element* element) { (((BoxSizing_type*)__type)->fp_RequestLayout)(this, element); }
    float SimpleToAnchor(int align);
    float UnitSize(::g::Fuse::Elements::Element* element, float scalar, int unit, float fill, bool secondary, bool* known);
    static int IsContentRelativeSize(BoxSizing* __this, ::g::Fuse::Elements::Element* element) { int __retval; return BoxSizing__IsContentRelativeSize_fn(__this, element, &__retval), __retval; }
    static void RequestLayout(BoxSizing* __this, ::g::Fuse::Elements::Element* element) { BoxSizing__RequestLayout_fn(__this, element); }
};

}}} // ::g::Fuse::Elements

#include <Fuse.Elements.BoxPlacement.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Elements{

inline ::g::Fuse::Elements::BoxPlacement BoxSizing::CalcBoxPlacement(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 position, ::g::Uno::Float2 availableSize, int availSet) { ::g::Fuse::Elements::BoxPlacement __retval; return (((BoxSizing_type*)__type)->fp_CalcBoxPlacement)(this, element, &position, &availableSize, &availSet, &__retval), __retval; }
inline ::g::Uno::Float2 BoxSizing::CalcMarginSize(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 fillSize, int fillSet) { ::g::Uno::Float2 __retval; return (((BoxSizing_type*)__type)->fp_CalcMarginSize)(this, element, &fillSize, &fillSet, &__retval), __retval; }
// }

}}} // ::g::Fuse::Elements
