// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_TEXTURE_ATLAS_H__
#define __APP_FUSE_ELEMENTS_TEXTURE_ATLAS_H__

#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Elements {

struct TextureAtlas;

struct TextureAtlas__uType : ::uClassType
{
};

TextureAtlas__uType* TextureAtlas__typeof();

void TextureAtlas___ObjInit(TextureAtlas* __this, ::app::Uno::Int2 size);
bool TextureAtlas__AddRect(TextureAtlas* __this, ::app::Uno::Int2 size, ::app::Uno::Recti* ret);
::app::Uno::Int2 TextureAtlas__get_Size(TextureAtlas* __this);
TextureAtlas* TextureAtlas__New_1(::uStatic* __this, ::app::Uno::Int2 size);
void TextureAtlas__set_Size(TextureAtlas* __this, ::app::Uno::Int2 value);

struct TextureAtlas : ::uObject
{
    ::app::Uno::Recti _allocatedLines;
    ::app::Uno::Recti _allocatedLine;
    ::app::Uno::Int2 _Size;

    void _ObjInit(::app::Uno::Int2 size) { TextureAtlas___ObjInit(this, size); }
    bool AddRect(::app::Uno::Int2 size, ::app::Uno::Recti* ret) { return TextureAtlas__AddRect(this, size, ret); }
    ::app::Uno::Int2 Size() { return TextureAtlas__get_Size(this); }
    void Size(::app::Uno::Int2 value) { TextureAtlas__set_Size(this, value); }
};

}}}


#endif
