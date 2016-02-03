// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_DEFAULT_TEXT_TRANSFORM_H__
#define __APP_UNO_CONTENT_FONTS_DEFAULT_TEXT_TRANSFORM_H__

#include <app/Uno.Content.Fonts.TextTransform.h>
#include <app/Uno.Float4x4.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct DefaultTextTransform;

struct DefaultTextTransform__uType : ::app::Uno::Content::Fonts::TextTransform__uType
{
};

DefaultTextTransform__uType* DefaultTextTransform__typeof();

void DefaultTextTransform___ObjInit_1(DefaultTextTransform* __this);
::app::Uno::Float4x4 DefaultTextTransform__get_Matrix(DefaultTextTransform* __this);
DefaultTextTransform* DefaultTextTransform__New_1(::uStatic* __this);
::app::Uno::Float4x4 DefaultTextTransform__ResolveClipSpaceMatrix(DefaultTextTransform* __this);
void DefaultTextTransform__set_Matrix(DefaultTextTransform* __this, ::app::Uno::Float4x4 value);

struct DefaultTextTransform : ::app::Uno::Content::Fonts::TextTransform
{
    ::app::Uno::Float4x4 _matrix;

    void _ObjInit_1() { DefaultTextTransform___ObjInit_1(this); }
};

}}}}


#endif
