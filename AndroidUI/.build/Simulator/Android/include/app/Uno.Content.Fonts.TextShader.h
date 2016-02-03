// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_TEXT_SHADER_H__
#define __APP_UNO_CONTENT_FONTS_TEXT_SHADER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextShaderData; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct TextShader;

struct TextShader__uType : ::uClassType
{
    void(*__fp_Draw)(TextShader*, ::app::Uno::Content::Fonts::TextShaderData*);
};

TextShader__uType* TextShader__typeof();

void TextShader___ObjInit(TextShader* __this);

struct TextShader : ::uObject
{
    void _ObjInit() { TextShader___ObjInit(this); }
    void Draw(::app::Uno::Content::Fonts::TextShaderData* data) { (((TextShader__uType*)this->__obj_type)->__fp_Draw)(this, data); }
};

}}}}


#endif
