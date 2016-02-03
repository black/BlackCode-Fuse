// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_INTERNAL_PROPER_TEXT_TRANSFORM_H__
#define __APP_FUSE_CONTROLS_INTERNAL_PROPER_TEXT_TRANSFORM_H__

#include <app/Uno.Content.Fonts.TextTransform.h>
#include <app/Uno.Float4x4.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

struct ProperTextTransform;

struct ProperTextTransform__uType : ::app::Uno::Content::Fonts::TextTransform__uType
{
};

ProperTextTransform__uType* ProperTextTransform__typeof();

void ProperTextTransform___ObjInit_1(ProperTextTransform* __this);
int ProperTextTransform__get_CullFace(ProperTextTransform* __this);
::app::Uno::Float4x4 ProperTextTransform__get_Matrix(ProperTextTransform* __this);
ProperTextTransform* ProperTextTransform__New_1(::uStatic* __this);
::app::Uno::Float4x4 ProperTextTransform__ResolveClipSpaceMatrix(ProperTextTransform* __this);
void ProperTextTransform__set_Matrix(ProperTextTransform* __this, ::app::Uno::Float4x4 value);

struct ProperTextTransform : ::app::Uno::Content::Fonts::TextTransform
{
    ::uStrong< ::app::Fuse::DrawContext*> DrawContext;
    ::app::Uno::Float4x4 _matrix;

    void _ObjInit_1() { ProperTextTransform___ObjInit_1(this); }
};

}}}}


#endif
