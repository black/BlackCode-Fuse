// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_ANDROID_CAMERA_IMPL_TAKE_PICTURE_TASK_H__
#define __APP_FUSE_CAMERA_ANDROID_CAMERA_IMPL_TAKE_PICTURE_TASK_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.com.fuse.Native.CameraTask.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct TakePictureOptions; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Camera {

struct AndroidCameraImpl_TakePictureTask;

struct AndroidCameraImpl_TakePictureTask__uType : ::app::Android::com::fuse::Native::CameraTask__uType
{
};

AndroidCameraImpl_TakePictureTask__uType* AndroidCameraImpl_TakePictureTask__typeof();

void AndroidCameraImpl_TakePictureTask___ObjInit_4(AndroidCameraImpl_TakePictureTask* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options);
void AndroidCameraImpl_TakePictureTask__fireResultCode(AndroidCameraImpl_TakePictureTask* __this);
AndroidCameraImpl_TakePictureTask* AndroidCameraImpl_TakePictureTask__New_3(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options);
void AndroidCameraImpl_TakePictureTask__OnFailed(AndroidCameraImpl_TakePictureTask* __this, ::uObject* message);
void AndroidCameraImpl_TakePictureTask__OnSuccess(AndroidCameraImpl_TakePictureTask* __this, ::uObject* path);

struct AndroidCameraImpl_TakePictureTask : ::app::Android::com::fuse::Native::CameraTask
{
    ::uStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*> _futurePath;
    ::uStrong< ::app::Fuse::Camera::TakePictureOptions*> _options;
    ::uStrong< ::uString*> _payload;
    bool _success;

    void _ObjInit_4(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options) { AndroidCameraImpl_TakePictureTask___ObjInit_4(this, futurePath, options); }
    void fireResultCode() { AndroidCameraImpl_TakePictureTask__fireResultCode(this); }
};

}}}


#endif
