// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_LIMIT_BOX_SIZING_DATA_H__
#define __APP_FUSE_ELEMENTS_LIMIT_BOX_SIZING_DATA_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Elements {

struct LimitBoxSizingData;

struct LimitBoxSizingData__uType : ::app::Fuse::Behavior__uType
{
};

LimitBoxSizingData__uType* LimitBoxSizingData__typeof();

void LimitBoxSizingData___ObjInit_1(LimitBoxSizingData* __this);
float LimitBoxSizingData__get_LimitHeight(LimitBoxSizingData* __this);
int LimitBoxSizingData__get_LimitHeightUnit(LimitBoxSizingData* __this);
float LimitBoxSizingData__get_LimitWidth(LimitBoxSizingData* __this);
int LimitBoxSizingData__get_LimitWidthUnit(LimitBoxSizingData* __this);
LimitBoxSizingData* LimitBoxSizingData__New_1(::uStatic* __this);
void LimitBoxSizingData__OnRooted(LimitBoxSizingData* __this, ::app::Fuse::Node* elm);
void LimitBoxSizingData__OnUnrooted(LimitBoxSizingData* __this, ::app::Fuse::Node* elm);
void LimitBoxSizingData__set_LimitHeight(LimitBoxSizingData* __this, float value);
void LimitBoxSizingData__set_LimitHeightUnit(LimitBoxSizingData* __this, int value);
void LimitBoxSizingData__set_LimitWidth(LimitBoxSizingData* __this, float value);
void LimitBoxSizingData__set_LimitWidthUnit(LimitBoxSizingData* __this, int value);

struct LimitBoxSizingData : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Elements::Element*> _target;
    float _limitHeight;
    bool _hasLimitHeight;
    int _limitHeightUnit;
    float _limitWidth;
    bool _hasLimitWidth;
    int _limitWidthUnit;

    void _ObjInit_1() { LimitBoxSizingData___ObjInit_1(this); }
    float LimitHeight() { return LimitBoxSizingData__get_LimitHeight(this); }
    int LimitHeightUnit() { return LimitBoxSizingData__get_LimitHeightUnit(this); }
    float LimitWidth() { return LimitBoxSizingData__get_LimitWidth(this); }
    int LimitWidthUnit() { return LimitBoxSizingData__get_LimitWidthUnit(this); }
    void LimitHeight(float value) { LimitBoxSizingData__set_LimitHeight(this, value); }
    void LimitHeightUnit(int value) { LimitBoxSizingData__set_LimitHeightUnit(this, value); }
    void LimitWidth(float value) { LimitBoxSizingData__set_LimitWidth(this, value); }
    void LimitWidthUnit(int value) { LimitBoxSizingData__set_LimitWidthUnit(this, value); }
};

}}}


#endif
