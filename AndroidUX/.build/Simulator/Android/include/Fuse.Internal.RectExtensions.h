// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct RectExtensions;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class RectExtensions :346
// {
uClassType* RectExtensions_typeof();
void RectExtensions__MoveRectInsideRect_fn(::g::Uno::Rect* a, ::g::Uno::Rect* b, ::g::Uno::Rect* __retval);
void RectExtensions__MoveRectToContainRect_fn(::g::Uno::Rect* a, ::g::Uno::Rect* b, ::g::Uno::Rect* __retval);

struct RectExtensions : uObject
{
    static ::g::Uno::Rect MoveRectInsideRect(::g::Uno::Rect a, ::g::Uno::Rect b);
    static ::g::Uno::Rect MoveRectToContainRect(::g::Uno::Rect a, ::g::Uno::Rect b);
};
// }

}}} // ::g::Fuse::Internal
