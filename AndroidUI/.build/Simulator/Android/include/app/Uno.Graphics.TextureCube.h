// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_TEXTURE_CUBE_H__
#define __APP_UNO_GRAPHICS_TEXTURE_CUBE_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct BundleFile; } }
namespace Xli { class Stream; }

namespace app {
namespace Uno {
namespace Graphics {

struct TextureCube;

struct TextureCube__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

TextureCube__uType* TextureCube__typeof();

void TextureCube___ObjInit(TextureCube* __this, ::uUInt handle, int size, int mipCount, int format);
void TextureCube___ObjInit_1(TextureCube* __this, int size, int format, bool mipmap);
void TextureCube__Dispose(TextureCube* __this);
void TextureCube__GenerateMipmap(TextureCube* __this);
bool TextureCube__get_CanUpdate(TextureCube* __this);
int TextureCube__get_Format(TextureCube* __this);
::uUInt TextureCube__get_GLTextureHandle(TextureCube* __this);
bool TextureCube__get_IsDisposed(TextureCube* __this);
int TextureCube__get_MipCount(TextureCube* __this);
int TextureCube__get_Size(TextureCube* __this);
bool TextureCube__get_SupportsMipmap(TextureCube* __this);
TextureCube* TextureCube__Load(::uStatic* __this, ::app::Uno::BundleFile* file);
TextureCube* TextureCube__Load_1(::uStatic* __this, ::uString* filename);
TextureCube* TextureCube__Load_2(::uStatic* __this, ::uString* filename_, ::Xli::Stream* handle_);
TextureCube* TextureCube__New_1(::uStatic* __this, ::uUInt handle, int size, int mipCount, int format);
TextureCube* TextureCube__New_2(::uStatic* __this, int size, int format, bool mipmap);
void TextureCube__set_Format(TextureCube* __this, int value);
void TextureCube__set_GLTextureHandle(TextureCube* __this, ::uUInt value);
void TextureCube__set_IsDisposed(TextureCube* __this, bool value);
void TextureCube__set_MipCount(TextureCube* __this, int value);
void TextureCube__set_Size(TextureCube* __this, int value);
void TextureCube__Update(TextureCube* __this, int face, ::app::Uno::Buffer* mip0);
void TextureCube__Update_1(TextureCube* __this, int face, int firstMip, ::uArray* mips);

struct TextureCube : ::uObject
{
    int _Size;
    int _MipCount;
    int _Format;
    ::uUInt _GLTextureHandle;
    bool _IsDisposed;

    void _ObjInit(::uUInt handle, int size, int mipCount, int format) { TextureCube___ObjInit(this, handle, size, mipCount, format); }
    void _ObjInit_1(int size, int format, bool mipmap) { TextureCube___ObjInit_1(this, size, format, mipmap); }
    void Dispose() { TextureCube__Dispose(this); }
    void GenerateMipmap() { TextureCube__GenerateMipmap(this); }
    bool CanUpdate() { return TextureCube__get_CanUpdate(this); }
    int Format() { return TextureCube__get_Format(this); }
    ::uUInt GLTextureHandle() { return TextureCube__get_GLTextureHandle(this); }
    bool IsDisposed() { return TextureCube__get_IsDisposed(this); }
    int MipCount() { return TextureCube__get_MipCount(this); }
    int Size() { return TextureCube__get_Size(this); }
    bool SupportsMipmap() { return TextureCube__get_SupportsMipmap(this); }
    void Format(int value) { TextureCube__set_Format(this, value); }
    void GLTextureHandle(::uUInt value) { TextureCube__set_GLTextureHandle(this, value); }
    void IsDisposed(bool value) { TextureCube__set_IsDisposed(this, value); }
    void MipCount(int value) { TextureCube__set_MipCount(this, value); }
    void Size(int value) { TextureCube__set_Size(this, value); }
    void Update(int face, ::app::Uno::Buffer* mip0) { TextureCube__Update(this, face, mip0); }
    void Update_1(int face, int firstMip, ::uArray* mips) { TextureCube__Update_1(this, face, firstMip, mips); }
};

}}}


#endif
