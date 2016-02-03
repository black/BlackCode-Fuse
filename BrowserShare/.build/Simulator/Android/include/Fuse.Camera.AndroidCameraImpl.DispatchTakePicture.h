// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct AndroidCameraImpl__DispatchTakePicture;}}}
namespace g{namespace Fuse{namespace Camera{struct PictureResult;}}}
namespace g{namespace Fuse{namespace Camera{struct TakePictureOptions;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// private sealed class AndroidCameraImpl.DispatchTakePicture :429
// {
uType* AndroidCameraImpl__DispatchTakePicture_typeof();
void AndroidCameraImpl__DispatchTakePicture__ctor__fn(AndroidCameraImpl__DispatchTakePicture* __this, ::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options);
void AndroidCameraImpl__DispatchTakePicture__Fire_fn(AndroidCameraImpl__DispatchTakePicture* __this);
void AndroidCameraImpl__DispatchTakePicture__New1_fn(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options, AndroidCameraImpl__DispatchTakePicture** __retval);

struct AndroidCameraImpl__DispatchTakePicture : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _futurePath;
    uStrong< ::g::Fuse::Camera::TakePictureOptions*> _options;

    void ctor_(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options);
    void Fire();
    static AndroidCameraImpl__DispatchTakePicture* New1(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options);
};
// }

}}} // ::g::Fuse::Camera
