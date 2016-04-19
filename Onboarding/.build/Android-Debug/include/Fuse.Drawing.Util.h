// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Util;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class Util :1053
// {
uType* Util_typeof();
void Util__ValidateFloat_fn(float* v);
void Util__ValidateFloat2_fn(::g::Uno::Float2* v);

struct Util : uObject
{
    static void ValidateFloat(float v);
    static void ValidateFloat2(::g::Uno::Float2 v);
};
// }

}}} // ::g::Fuse::Drawing
