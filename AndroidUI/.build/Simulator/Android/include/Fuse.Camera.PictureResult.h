// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct PictureResult;}}}

namespace g{
namespace Fuse{
namespace Camera{

// public sealed class PictureResult :96
// {
uType* PictureResult_typeof();
void PictureResult__ctor__fn(PictureResult* __this, uString* path, int* rotation);
void PictureResult__New1_fn(uString* path, int* rotation, PictureResult** __retval);
void PictureResult__get_Path_fn(PictureResult* __this, uString** __retval);
void PictureResult__set_Path_fn(PictureResult* __this, uString* value);
void PictureResult__get_Rotation_fn(PictureResult* __this, int* __retval);
void PictureResult__set_Rotation_fn(PictureResult* __this, int* value);

struct PictureResult : uObject
{
    uStrong<uString*> _Path;
    int _Rotation;

    void ctor_(uString* path, int rotation);
    uString* Path();
    void Path(uString* value);
    int Rotation();
    void Rotation(int value);
    static PictureResult* New1(uString* path, int rotation);
};
// }

}}} // ::g::Fuse::Camera
