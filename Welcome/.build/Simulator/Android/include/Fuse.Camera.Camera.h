// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Camera{struct Camera;}}}
namespace g{namespace Fuse{namespace Camera{struct PictureResult;}}}
namespace g{namespace Fuse{namespace Camera{struct TakePictureOptions;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Camera{

// public static class Camera :107
// {
uClassType* Camera_typeof();
void Camera__IsAvailable_fn(bool* __retval);
void Camera__TakePicture_fn(::g::Uno::Threading::Future1** __retval);
void Camera__TakePicture1_fn(::g::Fuse::Camera::TakePictureOptions* options, ::g::Uno::Threading::Future1** __retval);

struct Camera : uObject
{
    static bool IsAvailable();
    static ::g::Uno::Threading::Future1* TakePicture();
    static ::g::Uno::Threading::Future1* TakePicture1(::g::Fuse::Camera::TakePictureOptions* options);
};
// }

}}} // ::g::Fuse::Camera
