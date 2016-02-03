// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct TakePictureOptions;}}}

namespace g{
namespace Fuse{
namespace Camera{

// public sealed class TakePictureOptions :15
// {
uType* TakePictureOptions_typeof();
void TakePictureOptions__ctor__fn(TakePictureOptions* __this);
void TakePictureOptions__get_CorrectOrientation_fn(TakePictureOptions* __this, bool* __retval);
void TakePictureOptions__set_CorrectOrientation_fn(TakePictureOptions* __this, bool* value);
void TakePictureOptions__New1_fn(TakePictureOptions** __retval);
void TakePictureOptions__get_TargetHeight_fn(TakePictureOptions* __this, int* __retval);
void TakePictureOptions__set_TargetHeight_fn(TakePictureOptions* __this, int* value);
void TakePictureOptions__get_TargetHeightSet_fn(TakePictureOptions* __this, bool* __retval);
void TakePictureOptions__set_TargetHeightSet_fn(TakePictureOptions* __this, bool* value);
void TakePictureOptions__get_TargetWidth_fn(TakePictureOptions* __this, int* __retval);
void TakePictureOptions__set_TargetWidth_fn(TakePictureOptions* __this, int* value);
void TakePictureOptions__get_TargetWidthSet_fn(TakePictureOptions* __this, bool* __retval);
void TakePictureOptions__set_TargetWidthSet_fn(TakePictureOptions* __this, bool* value);

struct TakePictureOptions : uObject
{
    bool _correctOrientation;
    int _targetHeight;
    int _targetWidth;
    bool _TargetHeightSet;
    bool _TargetWidthSet;

    void ctor_();
    bool CorrectOrientation();
    void CorrectOrientation(bool value);
    int TargetHeight();
    void TargetHeight(int value);
    bool TargetHeightSet();
    void TargetHeightSet(bool value);
    int TargetWidth();
    void TargetWidth(int value);
    bool TargetWidthSet();
    void TargetWidthSet(bool value);
    static TakePictureOptions* New1();
};
// }

}}} // ::g::Fuse::Camera
