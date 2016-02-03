// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_RANGE_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_RANGE_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct RangeAttribute;

struct RangeAttribute__uType : ::app::Uno::Attribute__uType
{
};

RangeAttribute__uType* RangeAttribute__typeof();

void RangeAttribute___ObjInit_1(RangeAttribute* __this, float min, float max);
void RangeAttribute___ObjInit_2(RangeAttribute* __this, float min, float max, float exponent);
RangeAttribute* RangeAttribute__New_1(::uStatic* __this, float min, float max);
RangeAttribute* RangeAttribute__New_2(::uStatic* __this, float min, float max, float exponent);

struct RangeAttribute : ::app::Uno::Attribute
{
    float Min;
    float Max;
    float Exponent;

    void _ObjInit_1(float min, float max) { RangeAttribute___ObjInit_1(this, min, max); }
    void _ObjInit_2(float min, float max, float exponent) { RangeAttribute___ObjInit_2(this, min, max, exponent); }
};

}}}


#endif
