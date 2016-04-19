// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Controls.Image.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Matrix;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct ImageView;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Image;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Image__ImageLoader;}}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class Image :789
// {
::g::Fuse::Android::Controls::Control_type* Image_typeof();
void Image__ctor_3_fn(Image* __this);
void Image__Attach_fn(Image* __this);
void Image__get_Bitmap_fn(Image* __this, ::g::Android::android::graphics::Bitmap** __retval);
void Image__set_Bitmap_fn(Image* __this, ::g::Android::android::graphics::Bitmap* value);
void Image__ClearSource_fn(Image* __this);
void Image__CreateInternal_fn(Image* __this, ::g::Android::android::view::View** __retval);
void Image__CreateMatrix_fn(Image* __this, ::g::Uno::Float2* translation, ::g::Uno::Float2* scale, ::g::Android::android::graphics::Matrix** __retval);
void Image__Detach_fn(Image* __this);
void Image__GetMarginSize_fn(Image* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Image__GetSize_fn(Image* __this, ::g::Uno::Float2* __retval);
void Image__Invalidate_fn(Image* __this);
void Image__New1_fn(Image** __retval);
void Image__OnArrangeMarginBox_fn(Image* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval);
void Image__OnParamChanged_fn(Image* __this, uObject* sender, ::g::Uno::EventArgs* args);
void Image__OnSourceChanged_fn(Image* __this, uObject* sender, ::g::Uno::EventArgs* args);
void Image__SetDensity_fn(Image* __this, float* density);
void Image__SetImageViewSize_fn(Image* __this, ::g::Uno::Float2* size);
void Image__SetResampleMode_fn(Image* __this, int* mode);
void Image__SetSource_fn(Image* __this, ::g::Android::android::graphics::Bitmap* bitmap);

struct Image : ::g::Fuse::Android::Controls::Control
{
    uStrong< ::g::Android::android::graphics::Bitmap*> _bitmap;
    uStrong<Image__ImageLoader*> _currentImageLoader;
    uStrong< ::g::Android::android::widget::RelativeLayout*> _imageContainer;
    uStrong< ::g::Android::android::widget::ImageView*> _imageView;
    uStrong< ::g::Fuse::Internal::SizingContainer*> _sizing;

    void ctor_3();
    ::g::Android::android::graphics::Bitmap* Bitmap();
    void Bitmap(::g::Android::android::graphics::Bitmap* value);
    void ClearSource();
    ::g::Android::android::graphics::Matrix* CreateMatrix(::g::Uno::Float2 translation, ::g::Uno::Float2 scale);
    ::g::Uno::Float2 GetSize();
    void Invalidate();
    void OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void SetDensity(float density);
    void SetImageViewSize(::g::Uno::Float2 size);
    void SetResampleMode(int mode);
    void SetSource(::g::Android::android::graphics::Bitmap* bitmap);
    static Image* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
