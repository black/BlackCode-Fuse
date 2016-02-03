// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_CAMERA_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_CAMERA_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct PictureResult; } } }
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }
namespace app { namespace Uno { namespace Threading { struct Future__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Camera__uType : ::uClassType
{
};

Camera__uType* Camera__typeof();

::app::Fuse::Scripting::Object* Camera__Converter(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::app::Fuse::Camera::PictureResult* result);
::uObject* Camera__CreateModule(::uStatic* __this);
::app::Uno::Threading::Future__Fuse_Camera_PictureResult* Camera__TakePicture(::uStatic* __this, ::uArray* args);

}}}}


#endif
