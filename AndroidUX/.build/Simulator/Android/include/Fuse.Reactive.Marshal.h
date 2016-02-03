// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Reactive{struct Marshal;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal static class Marshal :1897
// {
uClassType* Marshal_typeof();
void Marshal__ToAlignment_fn(uObject* obj, int* __retval);
void Marshal__ToBool_fn(uObject* obj, bool* __retval);
void Marshal__ToBrush_fn(uObject* o, ::g::Fuse::Drawing::Brush** __retval);
void Marshal__ToDouble_fn(uObject* o, double* __retval);
void Marshal__ToFileSource_fn(uObject* obj, uDelegate* callback);
void Marshal__ToFloat_fn(uObject* o, float* __retval);
void Marshal__ToFloat4_fn(uObject* o, uDelegate* callback);
void Marshal__ToInt_fn(uObject* o, int* __retval);
void Marshal__ToType_fn(uType* __type, uObject* o, uDelegate* callback);
void Marshal__ToVisibility_fn(uObject* obj, int* __retval);

struct Marshal : uObject
{
    static int ToAlignment(uObject* obj);
    static bool ToBool(uObject* obj);
    static ::g::Fuse::Drawing::Brush* ToBrush(uObject* o);
    static double ToDouble(uObject* o);
    static void ToFileSource(uObject* obj, uDelegate* callback);
    static float ToFloat(uObject* o);
    static void ToFloat4(uObject* o, uDelegate* callback);
    static int ToInt(uObject* o);
    static void ToType(uType* __type, uObject* o, uDelegate* callback);
    static int ToVisibility(uObject* obj);
};
// }

}}} // ::g::Fuse::Reactive
