// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Image__ImageLoader__BitmapLoader;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// private sealed class Image.ImageLoader.BitmapLoader :793
// {
struct Image__ImageLoader__BitmapLoader_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::lang::Runnable interface2;
};

Image__ImageLoader__BitmapLoader_type* Image__ImageLoader__BitmapLoader_typeof();
void Image__ImageLoader__BitmapLoader__ctor_4_fn(Image__ImageLoader__BitmapLoader* __this, uString* url, uDelegate* doneCallback);
void Image__ImageLoader__BitmapLoader__Android_java_lang_Runnable_run_fn(Image__ImageLoader__BitmapLoader* __this);
void Image__ImageLoader__BitmapLoader__Done_fn(Image__ImageLoader__BitmapLoader* __this);
void Image__ImageLoader__BitmapLoader__New5_fn(uString* url, uDelegate* doneCallback, Image__ImageLoader__BitmapLoader** __retval);

struct Image__ImageLoader__BitmapLoader : ::g::Android::java::lang::Object
{
    uStrong< ::g::Android::android::graphics::Bitmap*> _bitmap;
    uStrong<uDelegate*> _doneCallback;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong<uString*> _url;

    void ctor_4(uString* url, uDelegate* doneCallback);
    void Done();
    static Image__ImageLoader__BitmapLoader* New5(uString* url, uDelegate* doneCallback);
};
// }

}}}} // ::g::Fuse::Android::Controls
