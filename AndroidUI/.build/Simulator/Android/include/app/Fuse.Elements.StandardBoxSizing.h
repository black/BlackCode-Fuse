// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_STANDARD_BOX_SIZING_H__
#define __APP_FUSE_ELEMENTS_STANDARD_BOX_SIZING_H__

#include <app/Fuse.Elements.BoxSizing.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Elements {

struct StandardBoxSizing;

extern ::uStaticStrong< StandardBoxSizing*> StandardBoxSizing__Singleton;

struct StandardBoxSizing__uType : ::app::Fuse::Elements::BoxSizing__uType
{
};

StandardBoxSizing__uType* StandardBoxSizing__typeof();

void StandardBoxSizing___ObjInit_1(StandardBoxSizing* __this);
void StandardBoxSizing___TypeInit(::uStatic* __this);
::app::Uno::Float2 StandardBoxSizing__ApplyFixedPaddingBox(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int* fillSet, bool* fixedSize);
::app::Uno::Float2 StandardBoxSizing__ArrangeMarginBox(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
::app::Uno::Float2 StandardBoxSizing__CalcMarginSize(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 StandardBoxSizing__ConstrainMinMax(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 StandardBoxSizing__GetPaddingSize(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 padFill, int fillSet);
bool StandardBoxSizing__IsContainerRelativeSize(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element);
::app::Uno::Float2 StandardBoxSizing__LimitPaddingBoxSize(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet);
StandardBoxSizing* StandardBoxSizing__New_1(::uStatic* __this);
::app::Uno::Float2 StandardBoxSizing__SnapUp(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 p);

struct StandardBoxSizing : ::app::Fuse::Elements::BoxSizing
{
    bool ImplicitMax;

    void _ObjInit_1() { StandardBoxSizing___ObjInit_1(this); }
    ::app::Uno::Float2 ApplyFixedPaddingBox(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int* fillSet, bool* fixedSize);
    ::app::Uno::Float2 ConstrainMinMax(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet);
    ::app::Uno::Float2 GetPaddingSize(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 padFill, int fillSet);
    ::app::Uno::Float2 LimitPaddingBoxSize(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet);
    ::app::Uno::Float2 SnapUp(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 p);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float2 StandardBoxSizing::ApplyFixedPaddingBox(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int* fillSet, bool* fixedSize) { return StandardBoxSizing__ApplyFixedPaddingBox(this, element, sz, fillSize, fillSet, fixedSize); }
inline ::app::Uno::Float2 StandardBoxSizing::ConstrainMinMax(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet) { return StandardBoxSizing__ConstrainMinMax(this, element, sz, fillSize, fillSet); }
inline ::app::Uno::Float2 StandardBoxSizing::GetPaddingSize(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 padFill, int fillSet) { return StandardBoxSizing__GetPaddingSize(this, element, padFill, fillSet); }
inline ::app::Uno::Float2 StandardBoxSizing::LimitPaddingBoxSize(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet) { return StandardBoxSizing__LimitPaddingBoxSize(this, element, sz, fillSize, fillSet); }
inline ::app::Uno::Float2 StandardBoxSizing::SnapUp(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 p) { return StandardBoxSizing__SnapUp(this, element, p); }

}}}


#endif
