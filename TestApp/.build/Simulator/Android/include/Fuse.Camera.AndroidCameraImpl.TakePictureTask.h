// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.com.fuse.Native.CameraTask.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Camera{struct AndroidCameraImpl__TakePictureTask;}}}
namespace g{namespace Fuse{namespace Camera{struct PictureResult;}}}
namespace g{namespace Fuse{namespace Camera{struct TakePictureOptions;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// private sealed class AndroidCameraImpl.TakePictureTask :388
// {
::g::Android::com::fuse::Native::CameraTask_type* AndroidCameraImpl__TakePictureTask_typeof();
void AndroidCameraImpl__TakePictureTask__ctor_4_fn(AndroidCameraImpl__TakePictureTask* __this, ::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options);
void AndroidCameraImpl__TakePictureTask__fireResultCode_fn(AndroidCameraImpl__TakePictureTask* __this);
void AndroidCameraImpl__TakePictureTask__New3_fn(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options, AndroidCameraImpl__TakePictureTask** __retval);
void AndroidCameraImpl__TakePictureTask__OnFailed_fn(AndroidCameraImpl__TakePictureTask* __this, uObject* message);
void AndroidCameraImpl__TakePictureTask__OnSuccess_fn(AndroidCameraImpl__TakePictureTask* __this, uObject* path);

struct AndroidCameraImpl__TakePictureTask : ::g::Android::com::fuse::Native::CameraTask
{
    uStrong< ::g::Uno::Threading::Promise*> _futurePath;
    uStrong< ::g::Fuse::Camera::TakePictureOptions*> _options;
    uStrong<uString*> _payload;
    bool _success;

    void ctor_4(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options);
    void fireResultCode();
    static AndroidCameraImpl__TakePictureTask* New3(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options);
};
// }

}}} // ::g::Fuse::Camera
