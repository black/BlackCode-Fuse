// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{

// public sealed class Font :1234
// {
uType* Font_typeof();
void Font__ctor__fn(Font* __this, ::g::Uno::UX::FileSource* file);
void Font__get_File_fn(Font* __this, ::g::Uno::UX::FileSource** __retval);
void Font__get_FontFace_fn(Font* __this, ::g::Uno::Content::Fonts::FontFace** __retval);
void Font__Load_fn(Font* __this, ::g::Uno::Content::Fonts::FontFace** __retval);
void Font__New1_fn(::g::Uno::UX::FileSource* file, Font** __retval);

struct Font : uObject
{
    uStrong< ::g::Uno::UX::FileSource*> _file;
    uStrong< ::g::Uno::Content::Fonts::FontFace*> _fontFace;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _fontFaces_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _fontFaces() { return Font_typeof()->Init(), _fontFaces_; }

    void ctor_(::g::Uno::UX::FileSource* file);
    ::g::Uno::UX::FileSource* File();
    ::g::Uno::Content::Fonts::FontFace* FontFace();
    ::g::Uno::Content::Fonts::FontFace* Load();
    static Font* New1(::g::Uno::UX::FileSource* file);
};
// }

}} // ::g::Fuse
