// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_BITMAP_FACTORY_H__
#define __APP_FUSE_ANDROID_BITMAP_FACTORY_H__

#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Bitmap; } } }
namespace app { namespace Uno { namespace UX { struct BundleFileSource; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Android {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*> BitmapFactory___bitmapCache;

struct BitmapFactory__uType : ::uClassType
{
};

BitmapFactory__uType* BitmapFactory__typeof();

void BitmapFactory___TypeInit(::uStatic* __this);
::app::Android::android::graphics::Bitmap* BitmapFactory__GetBitmap(::uStatic* __this, ::app::Uno::UX::FileSource* file);
::app::Android::android::graphics::Bitmap* BitmapFactory__GetBitmapFromBundleFile(::uStatic* __this, ::app::Uno::UX::BundleFileSource* bundleFile);
::app::Android::android::graphics::Bitmap* BitmapFactory__GetBitmapFromFileSource(::uStatic* __this, ::app::Uno::UX::FileSource* file);

}}}


#endif
