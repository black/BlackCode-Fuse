// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_INTERVAL_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_INTERVAL_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct IntervalAttribute;

struct IntervalAttribute__uType : ::app::Uno::Attribute__uType
{
};

IntervalAttribute__uType* IntervalAttribute__typeof();

void IntervalAttribute___ObjInit_1(IntervalAttribute* __this, float interval);
IntervalAttribute* IntervalAttribute__New_1(::uStatic* __this, float interval);

struct IntervalAttribute : ::app::Uno::Attribute
{
    float Interval;

    void _ObjInit_1(float interval) { IntervalAttribute___ObjInit_1(this, interval); }
};

}}}


#endif
