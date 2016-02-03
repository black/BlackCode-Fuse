// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_SHADOW_BOX_SIZING_H__
#define __APP_FUSE_ELEMENTS_SHADOW_BOX_SIZING_H__

#include <app/Fuse.Elements.BoxSizing.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct ShadowBoxSizing_ShadowData; } } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Elements {

struct ShadowBoxSizing;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> ShadowBoxSizing___shadowDataProperty;
extern ::uStaticStrong< ShadowBoxSizing*> ShadowBoxSizing__Singleton;

struct ShadowBoxSizing__uType : ::app::Fuse::Elements::BoxSizing__uType
{
};

ShadowBoxSizing__uType* ShadowBoxSizing__typeof();

void ShadowBoxSizing___ObjInit_1(ShadowBoxSizing* __this);
void ShadowBoxSizing___TypeInit(::uStatic* __this);
::app::Uno::Float2 ShadowBoxSizing__ArrangeMarginBox(ShadowBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
::app::Uno::Float2 ShadowBoxSizing__CalcMarginSize(ShadowBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 fillSize, int fillSet);
::app::Fuse::Elements::ShadowBoxSizing_ShadowData* ShadowBoxSizing__GetShadowData(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
::app::Fuse::Elements::Element* ShadowBoxSizing__GetShadowElement(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
ShadowBoxSizing* ShadowBoxSizing__New_1(::uStatic* __this);
void ShadowBoxSizing__ResetShadowElement(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void ShadowBoxSizing__SetShadowElement(::uStatic* __this, ::app::Fuse::Elements::Element* elm, ::app::Fuse::Elements::Element* shadow);

struct ShadowBoxSizing : ::app::Fuse::Elements::BoxSizing
{
    void _ObjInit_1() { ShadowBoxSizing___ObjInit_1(this); }
};

}}}


#endif
