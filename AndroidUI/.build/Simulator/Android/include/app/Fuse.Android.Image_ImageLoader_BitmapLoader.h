// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_IMAGE_IMAGE_LOADER_BITMAP_LOADER_H__
#define __APP_FUSE_ANDROID_IMAGE_IMAGE_LOADER_BITMAP_LOADER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct Image_ImageLoader_BitmapLoader;

extern jclass Image_ImageLoader_BitmapLoader___javaClass_2;

struct Image_ImageLoader_BitmapLoader__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::java::lang::Runnable __interface_2;
};

Image_ImageLoader_BitmapLoader__uType* Image_ImageLoader_BitmapLoader__typeof();

void Image_ImageLoader_BitmapLoader___ObjInit_4(Image_ImageLoader_BitmapLoader* __this, ::uString* url, ::uDelegate* doneCallback);
void Image_ImageLoader_BitmapLoader__Android_java_lang_Runnable_run(Image_ImageLoader_BitmapLoader* __this);
void Image_ImageLoader_BitmapLoader__Done(Image_ImageLoader_BitmapLoader* __this);
Image_ImageLoader_BitmapLoader* Image_ImageLoader_BitmapLoader__New_5(::uStatic* __this, ::uString* url, ::uDelegate* doneCallback);

struct Image_ImageLoader_BitmapLoader : ::app::Android::java::lang::Object
{
    ::uStrong< ::uString*> _url;
    ::uStrong< ::uDelegate*> _doneCallback;
    ::uStrong< ::app::Android::android::graphics::Bitmap*> _bitmap;

    void _ObjInit_4(::uString* url, ::uDelegate* doneCallback) { Image_ImageLoader_BitmapLoader___ObjInit_4(this, url, doneCallback); }
    void Done() { Image_ImageLoader_BitmapLoader__Done(this); }
};

}}}


#endif
