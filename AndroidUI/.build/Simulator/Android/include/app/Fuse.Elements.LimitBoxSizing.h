// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_LIMIT_BOX_SIZING_H__
#define __APP_FUSE_ELEMENTS_LIMIT_BOX_SIZING_H__

#include <app/Fuse.Elements.BoxSizing.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Elements {

struct LimitBoxSizing;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> LimitBoxSizing___limitHeightProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> LimitBoxSizing___limitHeightUnitProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> LimitBoxSizing___limitWidthProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> LimitBoxSizing___limitWidthUnitProperty;
extern ::uStaticStrong< LimitBoxSizing*> LimitBoxSizing__Singleton;

struct LimitBoxSizing__uType : ::app::Fuse::Elements::BoxSizing__uType
{
};

LimitBoxSizing__uType* LimitBoxSizing__typeof();

void LimitBoxSizing___ObjInit_1(LimitBoxSizing* __this);
void LimitBoxSizing___TypeInit(::uStatic* __this);
::app::Uno::Float2 LimitBoxSizing__ArrangeMarginBox(LimitBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
::app::Uno::Float2 LimitBoxSizing__CalcMarginSize(LimitBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 fillSize, int fillSet);
float LimitBoxSizing__GetLimitHeight(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
int LimitBoxSizing__GetLimitHeightUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
float LimitBoxSizing__GetLimitWidth(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
int LimitBoxSizing__GetLimitWidthUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
bool LimitBoxSizing__HasLimitHeight(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
bool LimitBoxSizing__HasLimitWidth(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
::app::Uno::Float2 LimitBoxSizing__Limit(LimitBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 std);
LimitBoxSizing* LimitBoxSizing__New_1(::uStatic* __this);
void LimitBoxSizing__ResetLimitHeight(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void LimitBoxSizing__ResetLimitHeightUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void LimitBoxSizing__ResetLimitWidth(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void LimitBoxSizing__ResetLimitWidthUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void LimitBoxSizing__SetLimitHeight(::uStatic* __this, ::app::Fuse::Elements::Element* elm, float height);
void LimitBoxSizing__SetLimitHeightUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int unit);
void LimitBoxSizing__SetLimitWidth(::uStatic* __this, ::app::Fuse::Elements::Element* elm, float width);
void LimitBoxSizing__SetLimitWidthUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int unit);

struct LimitBoxSizing : ::app::Fuse::Elements::BoxSizing
{
    void _ObjInit_1() { LimitBoxSizing___ObjInit_1(this); }
    ::app::Uno::Float2 Limit(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 std);
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float2 LimitBoxSizing::Limit(::app::Fuse::Elements::Element* element, ::app::Uno::Float2 std) { return LimitBoxSizing__Limit(this, element, std); }

}}}


#endif
