// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Typeface;}}}}
namespace g{namespace Fuse{namespace Android{struct TypefaceCache;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct BundleFile;}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class TypefaceCache :1130
// {
uClassType* TypefaceCache_typeof();
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Android::android::graphics::Typeface** __retval);
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::BundleFile* file, ::g::Android::android::graphics::Typeface** __retval);
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Android::android::graphics::Typeface** __retval);

struct TypefaceCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _typefaces_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _typefaces() { return TypefaceCache_typeof()->Init(), _typefaces_; }

    static ::g::Android::android::graphics::Typeface* GetTypeface(::g::Fuse::Font* font);
    static ::g::Android::android::graphics::Typeface* GetTypefaceFromBundleFile(::g::Uno::BundleFile* file);
    static ::g::Android::android::graphics::Typeface* GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource);
};
// }

}}} // ::g::Fuse::Android
