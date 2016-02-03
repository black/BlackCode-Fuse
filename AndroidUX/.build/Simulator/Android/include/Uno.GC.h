// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct GC;}}

namespace g{
namespace Uno{

// public static class GC :2580
// {
uClassType* GC_typeof();
void GC__SuppressFinalize_fn(uObject* obj);

struct GC : uObject
{
    static void SuppressFinalize(uObject* obj);
};
// }

}} // ::g::Uno
