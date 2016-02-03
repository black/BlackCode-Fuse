// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct ProgressSpan;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class ProgressSpan :183
// {
uType* ProgressSpan_typeof();
void ProgressSpan__ctor__fn(ProgressSpan* __this, double* from, double* to);
void ProgressSpan__get_From_fn(ProgressSpan* __this, double* __retval);
void ProgressSpan__set_From_fn(ProgressSpan* __this, double* value);
void ProgressSpan__New1_fn(double* from, double* to, ProgressSpan** __retval);
void ProgressSpan__get_To_fn(ProgressSpan* __this, double* __retval);
void ProgressSpan__set_To_fn(ProgressSpan* __this, double* value);

struct ProgressSpan : uObject
{
    double _From;
    double _To;

    void ctor_(double from, double to);
    double From();
    void From(double value);
    double To();
    void To(double value);
    static ProgressSpan* New1(double from, double to);
};
// }

}}} // ::g::Fuse::Navigation
