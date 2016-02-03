// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_RECTANGLE_FACTORY_H__
#define __APP_FUSE_DRAWING_RECTANGLE_FACTORY_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct RectangleFactory__uType : ::uClassType
{
};

RectangleFactory__uType* RectangleFactory__typeof();

::app::Fuse::Drawing::PathGeometry* RectangleFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius);

}}}


#endif
