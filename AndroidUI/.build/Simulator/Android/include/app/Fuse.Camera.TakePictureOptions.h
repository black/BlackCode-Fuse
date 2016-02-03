// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_TAKE_PICTURE_OPTIONS_H__
#define __APP_FUSE_CAMERA_TAKE_PICTURE_OPTIONS_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Camera {

struct TakePictureOptions;

struct TakePictureOptions__uType : ::uClassType
{
};

TakePictureOptions__uType* TakePictureOptions__typeof();

void TakePictureOptions___ObjInit(TakePictureOptions* __this);
bool TakePictureOptions__get_CorrectOrientation(TakePictureOptions* __this);
int TakePictureOptions__get_TargetHeight(TakePictureOptions* __this);
bool TakePictureOptions__get_TargetHeightSet(TakePictureOptions* __this);
int TakePictureOptions__get_TargetWidth(TakePictureOptions* __this);
bool TakePictureOptions__get_TargetWidthSet(TakePictureOptions* __this);
TakePictureOptions* TakePictureOptions__New_1(::uStatic* __this);
void TakePictureOptions__set_CorrectOrientation(TakePictureOptions* __this, bool value);
void TakePictureOptions__set_TargetHeight(TakePictureOptions* __this, int value);
void TakePictureOptions__set_TargetHeightSet(TakePictureOptions* __this, bool value);
void TakePictureOptions__set_TargetWidth(TakePictureOptions* __this, int value);
void TakePictureOptions__set_TargetWidthSet(TakePictureOptions* __this, bool value);

struct TakePictureOptions : ::uObject
{
    int _targetWidth;
    int _targetHeight;
    bool _correctOrientation;
    bool _TargetWidthSet;
    bool _TargetHeightSet;

    void _ObjInit() { TakePictureOptions___ObjInit(this); }
    bool CorrectOrientation() { return TakePictureOptions__get_CorrectOrientation(this); }
    int TargetHeight() { return TakePictureOptions__get_TargetHeight(this); }
    bool TargetHeightSet() { return TakePictureOptions__get_TargetHeightSet(this); }
    int TargetWidth() { return TakePictureOptions__get_TargetWidth(this); }
    bool TargetWidthSet() { return TakePictureOptions__get_TargetWidthSet(this); }
    void CorrectOrientation(bool value) { TakePictureOptions__set_CorrectOrientation(this, value); }
    void TargetHeight(int value) { TakePictureOptions__set_TargetHeight(this, value); }
    void TargetHeightSet(bool value) { TakePictureOptions__set_TargetHeightSet(this, value); }
    void TargetWidth(int value) { TakePictureOptions__set_TargetWidth(this, value); }
    void TargetWidthSet(bool value) { TakePictureOptions__set_TargetWidthSet(this, value); }
};

}}}


#endif
