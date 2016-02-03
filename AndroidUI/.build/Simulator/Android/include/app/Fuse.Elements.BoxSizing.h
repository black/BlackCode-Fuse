// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_BOX_SIZING_H__
#define __APP_FUSE_ELEMENTS_BOX_SIZING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Elements {

struct BoxSizing;

struct BoxSizing__uType : ::uClassType
{
    ::app::Uno::Float2(*__fp_ArrangeMarginBox)(BoxSizing*, ::app::Fuse::Elements::Element*, ::app::Uno::Float2, ::app::Uno::Float2, int);
    ::app::Uno::Float2(*__fp_CalcMarginSize)(BoxSizing*, ::app::Fuse::Elements::Element*, ::app::Uno::Float2, int);
    bool(*__fp_IsContainerRelativeSize)(BoxSizing*, ::app::Fuse::Elements::Element*);
};

BoxSizing__uType* BoxSizing__typeof();

void BoxSizing___ObjInit(BoxSizing* __this);
void BoxSizing__EffectiveAnchor(BoxSizing* __this, ::app::Fuse::Elements::Element* element, int halign, int valign, ::app::Uno::Float2* anchor, int* unit);
int BoxSizing__EffectiveHorizontalAlignment(BoxSizing* __this, ::app::Fuse::Elements::Element* element);
int BoxSizing__EffectiveVerticalAlignment(BoxSizing* __this, ::app::Fuse::Elements::Element* element);
bool BoxSizing__IsContainerRelativeSize(BoxSizing* __this, ::app::Fuse::Elements::Element* element);
float BoxSizing__SimpleToAnchor(BoxSizing* __this, int align);
float BoxSizing__UnitSize(BoxSizing* __this, ::app::Fuse::Elements::Element* element, float scalar, int unit, float fill, bool secondary, bool* known);

struct BoxSizing : ::uObject
{
    void _ObjInit() { BoxSizing___ObjInit(this); }
    ::app::Uno::Float2 ArrangeMarginBox(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
    ::app::Uno::Float2 CalcMarginSize(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 fillSize, int fillSet);
    void EffectiveAnchor(::app::Fuse::Elements::Element* element, int halign, int valign, ::app::Uno::Float2* anchor, int* unit) { BoxSizing__EffectiveAnchor(this, element, halign, valign, anchor, unit); }
    int EffectiveHorizontalAlignment(::app::Fuse::Elements::Element* element) { return BoxSizing__EffectiveHorizontalAlignment(this, element); }
    int EffectiveVerticalAlignment(::app::Fuse::Elements::Element* element) { return BoxSizing__EffectiveVerticalAlignment(this, element); }
    bool IsContainerRelativeSize(::app::Fuse::Elements::Element* element) { return (((BoxSizing__uType*)this->__obj_type)->__fp_IsContainerRelativeSize)(this, element); }
    float SimpleToAnchor(int align) { return BoxSizing__SimpleToAnchor(this, align); }
    float UnitSize(::app::Fuse::Elements::Element* element, float scalar, int unit, float fill, bool secondary, bool* known) { return BoxSizing__UnitSize(this, element, scalar, unit, fill, secondary, known); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float2 BoxSizing::ArrangeMarginBox(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet) { return (((BoxSizing__uType*)this->__obj_type)->__fp_ArrangeMarginBox)(this, element, position, availableSize, availSet); }
inline ::app::Uno::Float2 BoxSizing::CalcMarginSize(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 fillSize, int fillSet) { return (((BoxSizing__uType*)this->__obj_type)->__fp_CalcMarginSize)(this, element, fillSize, fillSet); }

}}}


#endif
