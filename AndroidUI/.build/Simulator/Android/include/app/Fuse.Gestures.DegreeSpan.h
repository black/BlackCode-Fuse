// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_DEGREE_SPAN_H__
#define __APP_FUSE_GESTURES_DEGREE_SPAN_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Gestures {

struct DegreeSpan;

struct DegreeSpan__uType : ::uClassType
{
};

DegreeSpan__uType* DegreeSpan__typeof();

void DegreeSpan___ObjInit(DegreeSpan* __this, float a, float b);
bool DegreeSpan__IsWithinBounds(DegreeSpan* __this, float x);
DegreeSpan* DegreeSpan__New_1(::uStatic* __this, float a, float b);

struct DegreeSpan : ::uObject
{
    float _a;
    float _b;

    void _ObjInit(float a, float b) { DegreeSpan___ObjInit(this, a, b); }
    bool IsWithinBounds(float x) { return DegreeSpan__IsWithinBounds(this, x); }
};

}}}


#endif
