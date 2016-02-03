// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_ANDROID_CAMERA_IMPL_H__
#define __APP_FUSE_CAMERA_ANDROID_CAMERA_IMPL_H__

#include <Uno.h>
namespace app { namespace Android { namespace com { namespace fuse { namespace Native { struct CameraTask; } } } } }
namespace app { namespace Fuse { namespace Camera { struct TakePictureOptions; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Camera {

extern ::uStaticStrong< ::app::Android::com::fuse::Native::CameraTask*> AndroidCameraImpl___pendingTask;

struct AndroidCameraImpl__uType : ::uClassType
{
};

AndroidCameraImpl__uType* AndroidCameraImpl__typeof();

bool AndroidCameraImpl__IsAvailable(::uStatic* __this);
void AndroidCameraImpl__TakePicture(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options);

}}}


#endif
