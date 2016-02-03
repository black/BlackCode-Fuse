// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_TYPEFACE_CACHE_H__
#define __APP_FUSE_ANDROID_TYPEFACE_CACHE_H__

#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface; } } } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Typeface; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Fuse {
namespace Android {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*> TypefaceCache___typefaces;

struct TypefaceCache__uType : ::uClassType
{
};

TypefaceCache__uType* TypefaceCache__typeof();

void TypefaceCache___TypeInit(::uStatic* __this);
::app::Android::android::graphics::Typeface* TypefaceCache__GetTypeface(::uStatic* __this, ::app::Fuse::Font* font);
::app::Android::android::graphics::Typeface* TypefaceCache__GetTypefaceFromBundleFile(::uStatic* __this, ::app::Uno::BundleFile* file);
::app::Android::android::graphics::Typeface* TypefaceCache__GetTypefaceFromFileSource(::uStatic* __this, ::app::Uno::UX::FileSource* fileSource);

}}}


#endif
