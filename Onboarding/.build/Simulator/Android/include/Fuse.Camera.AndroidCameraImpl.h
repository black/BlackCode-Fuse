// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{namespace com{namespace fuse{namespace Native{struct CameraTask;}}}}}
namespace g{namespace Fuse{namespace Camera{struct AndroidCameraImpl;}}}
namespace g{namespace Fuse{namespace Camera{struct PictureResult;}}}
namespace g{namespace Fuse{namespace Camera{struct TakePictureOptions;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// internal static extern class AndroidCameraImpl :373
// {
uClassType* AndroidCameraImpl_typeof();
void AndroidCameraImpl__IsAvailable_fn(bool* __retval);
void AndroidCameraImpl__TakePicture_fn(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options);

struct AndroidCameraImpl : uObject
{
    static uSStrong< ::g::Android::com::fuse::Native::CameraTask*> _pendingTask_;
    static uSStrong< ::g::Android::com::fuse::Native::CameraTask*>& _pendingTask() { return _pendingTask_; }

    static bool IsAvailable();
    static void TakePicture(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options);
};
// }

}}} // ::g::Fuse::Camera
