// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct BitmapFactory;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct BundleFileSource;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal static extern class BitmapFactory :730
// {
uClassType* BitmapFactory_typeof();
void BitmapFactory__GetBitmap_fn(::g::Uno::UX::FileSource* file, ::g::Android::android::graphics::Bitmap** __retval);
void BitmapFactory__GetBitmapFromBundleFile_fn(::g::Uno::UX::BundleFileSource* bundleFile, ::g::Android::android::graphics::Bitmap** __retval);
void BitmapFactory__GetBitmapFromFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Android::android::graphics::Bitmap** __retval);

struct BitmapFactory : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _bitmapCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _bitmapCache() { return BitmapFactory_typeof()->Init(), _bitmapCache_; }

    static ::g::Android::android::graphics::Bitmap* GetBitmap(::g::Uno::UX::FileSource* file);
    static ::g::Android::android::graphics::Bitmap* GetBitmapFromBundleFile(::g::Uno::UX::BundleFileSource* bundleFile);
    static ::g::Android::android::graphics::Bitmap* GetBitmapFromFileSource(::g::Uno::UX::FileSource* file);
};
// }

}}}} // ::g::Fuse::Android::Controls
