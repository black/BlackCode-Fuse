// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_PICTURE_RESULT_H__
#define __APP_FUSE_CAMERA_PICTURE_RESULT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Camera {

struct PictureResult;

struct PictureResult__uType : ::uClassType
{
};

PictureResult__uType* PictureResult__typeof();

void PictureResult___ObjInit(PictureResult* __this, ::uString* path, int rotation);
::uString* PictureResult__get_Path(PictureResult* __this);
int PictureResult__get_Rotation(PictureResult* __this);
PictureResult* PictureResult__New_1(::uStatic* __this, ::uString* path, int rotation);
void PictureResult__set_Path(PictureResult* __this, ::uString* value);
void PictureResult__set_Rotation(PictureResult* __this, int value);

struct PictureResult : ::uObject
{
    ::uStrong< ::uString*> _Path;
    int _Rotation;

    void _ObjInit(::uString* path, int rotation) { PictureResult___ObjInit(this, path, rotation); }
    ::uString* Path() { return PictureResult__get_Path(this); }
    int Rotation() { return PictureResult__get_Rotation(this); }
    void Path(::uString* value) { PictureResult__set_Path(this, value); }
    void Rotation(int value) { PictureResult__set_Rotation(this, value); }
};

}}}


#endif
