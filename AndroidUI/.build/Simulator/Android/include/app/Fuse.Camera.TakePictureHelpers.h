// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_TAKE_PICTURE_HELPERS_H__
#define __APP_FUSE_CAMERA_TAKE_PICTURE_HELPERS_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct TakePictureOptions; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Camera {

struct TakePictureHelpers__uType : ::uClassType
{
};

TakePictureHelpers__uType* TakePictureHelpers__typeof();

::app::Uno::Int2 TakePictureHelpers__GetAspectCorrectedSize(::uStatic* __this, ::app::Fuse::Camera::TakePictureOptions* options, ::app::Uno::Int2 originalImageSize);

}}}


#endif
