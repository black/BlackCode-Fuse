// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_ANDROID_CAMERA_IMPL_DISPATCH_TAKE_PICTURE_H__
#define __APP_FUSE_CAMERA_ANDROID_CAMERA_IMPL_DISPATCH_TAKE_PICTURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct TakePictureOptions; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Camera {

struct AndroidCameraImpl_DispatchTakePicture;

struct AndroidCameraImpl_DispatchTakePicture__uType : ::uClassType
{
};

AndroidCameraImpl_DispatchTakePicture__uType* AndroidCameraImpl_DispatchTakePicture__typeof();

void AndroidCameraImpl_DispatchTakePicture___ObjInit(AndroidCameraImpl_DispatchTakePicture* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options);
void AndroidCameraImpl_DispatchTakePicture__Fire(AndroidCameraImpl_DispatchTakePicture* __this);
AndroidCameraImpl_DispatchTakePicture* AndroidCameraImpl_DispatchTakePicture__New_1(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options);

struct AndroidCameraImpl_DispatchTakePicture : ::uObject
{
    ::uStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*> _futurePath;
    ::uStrong< ::app::Fuse::Camera::TakePictureOptions*> _options;

    void _ObjInit(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options) { AndroidCameraImpl_DispatchTakePicture___ObjInit(this, futurePath, options); }
    void Fire() { AndroidCameraImpl_DispatchTakePicture__Fire(this); }
};

}}}


#endif
