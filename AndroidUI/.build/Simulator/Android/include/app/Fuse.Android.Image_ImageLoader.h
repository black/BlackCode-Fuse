// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_IMAGE_IMAGE_LOADER_H__
#define __APP_FUSE_ANDROID_IMAGE_IMAGE_LOADER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Thread; } } } }
namespace app { namespace Fuse { namespace Android { struct Image; } } }
namespace app { namespace Fuse { namespace Android { struct Image_ImageLoader_BitmapLoader; } } }

namespace app {
namespace Fuse {
namespace Android {

struct Image_ImageLoader;

struct Image_ImageLoader__uType : ::uClassType
{
};

Image_ImageLoader__uType* Image_ImageLoader__typeof();

void Image_ImageLoader___ObjInit(Image_ImageLoader* __this, ::app::Fuse::Android::Image* image, ::uString* url);
void Image_ImageLoader__Cancel(Image_ImageLoader* __this);
Image_ImageLoader* Image_ImageLoader__New_1(::uStatic* __this, ::app::Fuse::Android::Image* image, ::uString* url);
void Image_ImageLoader__OnDone(Image_ImageLoader* __this, ::app::Android::android::graphics::Bitmap* bitmap);

struct Image_ImageLoader : ::uObject
{
    ::uStrong< ::app::Fuse::Android::Image_ImageLoader_BitmapLoader*> _loader;
    ::uStrong< ::app::Android::java::lang::Thread*> _thread;
    ::uStrong< ::app::Fuse::Android::Image*> _image;

    void _ObjInit(::app::Fuse::Android::Image* image, ::uString* url) { Image_ImageLoader___ObjInit(this, image, url); }
    void Cancel() { Image_ImageLoader__Cancel(this); }
    void OnDone(::app::Android::android::graphics::Bitmap* bitmap) { Image_ImageLoader__OnDone(this, bitmap); }
};

}}}


#endif
