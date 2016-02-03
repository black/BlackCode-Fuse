// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_I_ELEMENT_BATCH_DRAWABLE_H__
#define __APP_FUSE_ELEMENTS_I_ELEMENT_BATCH_DRAWABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Elements {

::uInterfaceType* IElementBatchDrawable__typeof();

struct IElementBatchDrawable
{
    void(*__fp_Draw)(void*, ::app::Fuse::DrawContext*, ::app::Uno::Float4x4, ::app::Uno::Rect);

    static void Draw(::uObject* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace);
};

}}}

#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Elements {

inline void IElementBatchDrawable::Draw(::uObject* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace) { ((IElementBatchDrawable*)uGetInterfacePtr(__this, IElementBatchDrawable__typeof()))->__fp_Draw((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), dc, localToClipTransform, scissorRectInClipSpace); }

}}}


#endif
