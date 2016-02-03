// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Camera{struct TakePictureHelpers;}}}
namespace g{namespace Fuse{namespace Camera{struct TakePictureOptions;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Camera{

// public static class TakePictureHelpers :51
// {
uClassType* TakePictureHelpers_typeof();
void TakePictureHelpers__GetAspectCorrectedSize_fn(::g::Fuse::Camera::TakePictureOptions* options, ::g::Uno::Int2* originalImageSize, ::g::Uno::Int2* __retval);

struct TakePictureHelpers : uObject
{
    static ::g::Uno::Int2 GetAspectCorrectedSize(::g::Fuse::Camera::TakePictureOptions* options, ::g::Uno::Int2 originalImageSize);
};
// }

}}} // ::g::Fuse::Camera
