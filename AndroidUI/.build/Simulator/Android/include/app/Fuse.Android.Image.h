// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_IMAGE_H__
#define __APP_FUSE_ANDROID_IMAGE_H__

#include <app/Fuse.Android.ControlView__Fuse_Controls_Image.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Matrix; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct ImageView; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayout; } } } }
namespace app { namespace Fuse { namespace Android { struct Image_ImageLoader; } } }
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Android {

struct Image;

struct Image__uType : ::app::Fuse::Android::ControlView__Fuse_Controls_Image__uType
{
};

Image__uType* Image__typeof();

void Image___ObjInit_3(Image* __this);
void Image__Attach(Image* __this);
void Image__ClearSource(Image* __this);
::app::Android::android::view::View* Image__CreateInternal(Image* __this);
::app::Android::android::graphics::Matrix* Image__CreateMatrix(Image* __this, ::app::Uno::Float2 translation, ::app::Uno::Float2 scale);
void Image__Detach(Image* __this);
::app::Android::android::graphics::Bitmap* Image__get_Bitmap(Image* __this);
::app::Uno::Float2 Image__GetMarginSize(Image* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Image__GetSize(Image* __this);
void Image__Invalidate(Image* __this);
Image* Image__New_1(::uStatic* __this);
::app::Uno::Float2 Image__OnArrangeMarginBox(Image* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void Image__OnParamChanged(Image* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Image__OnSourceChanged(Image* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Image__set_Bitmap(Image* __this, ::app::Android::android::graphics::Bitmap* value);
void Image__SetDensity(Image* __this, float density);
void Image__SetImageViewSize(Image* __this, ::app::Uno::Float2 size);
void Image__SetResampleMode(Image* __this, int mode);
void Image__SetSource(Image* __this, ::app::Android::android::graphics::Bitmap* bitmap);

struct Image : ::app::Fuse::Android::ControlView__Fuse_Controls_Image
{
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> _sizing;
    ::uStrong< ::app::Android::android::widget::RelativeLayout*> _imageContainer;
    ::uStrong< ::app::Android::android::widget::ImageView*> _imageView;
    ::uStrong< ::app::Android::android::graphics::Bitmap*> _bitmap;
    ::uStrong< ::app::Fuse::Android::Image_ImageLoader*> _currentImageLoader;

    void _ObjInit_3() { Image___ObjInit_3(this); }
    void ClearSource() { Image__ClearSource(this); }
    ::app::Android::android::graphics::Matrix* CreateMatrix(::app::Uno::Float2 translation, ::app::Uno::Float2 scale);
    ::app::Android::android::graphics::Bitmap* Bitmap() { return Image__get_Bitmap(this); }
    ::app::Uno::Float2 GetSize();
    void Invalidate() { Image__Invalidate(this); }
    void OnParamChanged(::uObject* sender, ::app::Uno::EventArgs* args) { Image__OnParamChanged(this, sender, args); }
    void OnSourceChanged(::uObject* sender, ::app::Uno::EventArgs* args) { Image__OnSourceChanged(this, sender, args); }
    void Bitmap(::app::Android::android::graphics::Bitmap* value) { Image__set_Bitmap(this, value); }
    void SetDensity(float density) { Image__SetDensity(this, density); }
    void SetImageViewSize(::app::Uno::Float2 size);
    void SetResampleMode(int mode) { Image__SetResampleMode(this, mode); }
    void SetSource(::app::Android::android::graphics::Bitmap* bitmap) { Image__SetSource(this, bitmap); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Android {

inline ::app::Android::android::graphics::Matrix* Image::CreateMatrix(::app::Uno::Float2 translation, ::app::Uno::Float2 scale) { return Image__CreateMatrix(this, translation, scale); }
inline ::app::Uno::Float2 Image::GetSize() { return Image__GetSize(this); }
inline void Image::SetImageViewSize(::app::Uno::Float2 size) { Image__SetImageViewSize(this, size); }

}}}


#endif
