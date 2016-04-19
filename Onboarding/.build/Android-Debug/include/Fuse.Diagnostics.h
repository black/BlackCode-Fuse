// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Diagnostics;}}

namespace g{
namespace Fuse{

// public static class Diagnostics :409
// {
uClassType* Diagnostics_typeof();
void Diagnostics__Deprecated_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__Error_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__Unsupported_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);

struct Diagnostics : uObject
{
    static void Deprecated(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void Error(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void Unsupported(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
};
// }

}} // ::g::Fuse
