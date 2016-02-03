// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_RECT_EXTENSIONS_H__
#define __APP_FUSE_INTERNAL_RECT_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Internal {

struct RectExtensions__uType : ::uClassType
{
};

RectExtensions__uType* RectExtensions__typeof();

::app::Uno::Rect RectExtensions__MoveRectInsideRect(::uStatic* __this, ::app::Uno::Rect a, ::app::Uno::Rect b);
::app::Uno::Rect RectExtensions__MoveRectToContainRect(::uStatic* __this, ::app::Uno::Rect a, ::app::Uno::Rect b);

}}}


#endif
