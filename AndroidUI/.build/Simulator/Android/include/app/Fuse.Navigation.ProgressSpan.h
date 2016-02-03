// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_PROGRESS_SPAN_H__
#define __APP_FUSE_NAVIGATION_PROGRESS_SPAN_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct ProgressSpan;

struct ProgressSpan__uType : ::uClassType
{
};

ProgressSpan__uType* ProgressSpan__typeof();

void ProgressSpan___ObjInit(ProgressSpan* __this, double from, double to);
double ProgressSpan__get_From(ProgressSpan* __this);
double ProgressSpan__get_To(ProgressSpan* __this);
ProgressSpan* ProgressSpan__New_1(::uStatic* __this, double from, double to);
void ProgressSpan__set_From(ProgressSpan* __this, double value);
void ProgressSpan__set_To(ProgressSpan* __this, double value);

struct ProgressSpan : ::uObject
{
    double _From;
    double _To;

    void _ObjInit(double from, double to) { ProgressSpan___ObjInit(this, from, to); }
    double From() { return ProgressSpan__get_From(this); }
    double To() { return ProgressSpan__get_To(this); }
    void From(double value) { ProgressSpan__set_From(this, value); }
    void To(double value) { ProgressSpan__set_To(this, value); }
};

}}}


#endif
