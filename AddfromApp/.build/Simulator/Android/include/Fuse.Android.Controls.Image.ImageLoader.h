// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Thread;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Image;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Image__ImageLoader;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Image__ImageLoader__BitmapLoader;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// private sealed class Image.ImageLoader :791
// {
uType* Image__ImageLoader_typeof();
void Image__ImageLoader__ctor__fn(Image__ImageLoader* __this, ::g::Fuse::Android::Controls::Image* image, uString* url);
void Image__ImageLoader__Cancel_fn(Image__ImageLoader* __this);
void Image__ImageLoader__New1_fn(::g::Fuse::Android::Controls::Image* image, uString* url, Image__ImageLoader** __retval);
void Image__ImageLoader__OnDone_fn(Image__ImageLoader* __this, ::g::Android::android::graphics::Bitmap* bitmap);

struct Image__ImageLoader : uObject
{
    uWeak< ::g::Fuse::Android::Controls::Image*> _image;
    uStrong<Image__ImageLoader__BitmapLoader*> _loader;
    uStrong< ::g::Android::java::lang::Thread*> _thread;

    void ctor_(::g::Fuse::Android::Controls::Image* image, uString* url);
    void Cancel();
    void OnDone(::g::Android::android::graphics::Bitmap* bitmap);
    static Image__ImageLoader* New1(::g::Fuse::Android::Controls::Image* image, uString* url);
};
// }

}}}} // ::g::Fuse::Android::Controls
