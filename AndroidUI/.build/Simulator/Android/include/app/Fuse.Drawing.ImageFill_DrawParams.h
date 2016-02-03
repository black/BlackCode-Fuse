// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_IMAGE_FILL_DRAW_PARAMS_H__
#define __APP_FUSE_DRAWING_IMAGE_FILL_DRAW_PARAMS_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct ImageFill_DrawParams;

struct ImageFill_DrawParams__uType : ::uStructType
{
};

ImageFill_DrawParams__uType* ImageFill_DrawParams__typeof();

struct ImageFill_DrawParams
{
    ::app::Uno::Float2 Origin;
    ::app::Uno::Float2 Size;
    ::app::Uno::Float4 UVClip;
};

}}}


#endif
