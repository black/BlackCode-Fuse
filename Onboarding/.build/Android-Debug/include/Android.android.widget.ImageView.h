// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Matrix;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct ImageView;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct ImageViewDLRScaleType;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public sealed extern class ImageView :15536
// {
::g::Android::android::view::View_type* ImageView_typeof();
void ImageView__ctor_8_fn(ImageView* __this, ::g::Android::android::content::Context* arg0);
void ImageView___Init3_fn();
void ImageView__New9_fn(::g::Android::android::content::Context* arg0, ImageView** __retval);
void ImageView__setImageBitmap_fn(ImageView* __this, ::g::Android::android::graphics::Bitmap* arg0);
void ImageView__setImageBitmap_IMPL_25450_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__setImageMatrix_fn(ImageView* __this, ::g::Android::android::graphics::Matrix* arg0);
void ImageView__setImageMatrix_IMPL_25457_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__setScaleType_fn(ImageView* __this, ::g::Android::android::widget::ImageViewDLRScaleType* arg0);
void ImageView__setScaleType_IMPL_25454_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__setVisibility_fn(ImageView* __this, int* arg0);
void ImageView__setVisibility_IMPL_25478_fn(bool* arg0_, jobject* arg1_, int* arg2_);

struct ImageView : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID ImageView_25432_ID_c_;
    static jmethodID& ImageView_25432_ID_c() { return ImageView_25432_ID_c_; }
    static jmethodID setImageBitmap_25450_ID_;
    static jmethodID& setImageBitmap_25450_ID() { return setImageBitmap_25450_ID_; }
    static jmethodID setImageMatrix_25457_ID_;
    static jmethodID& setImageMatrix_25457_ID() { return setImageMatrix_25457_ID_; }
    static jmethodID setScaleType_25454_ID_;
    static jmethodID& setScaleType_25454_ID() { return setScaleType_25454_ID_; }
    static jmethodID setVisibility_25478_ID_;
    static jmethodID& setVisibility_25478_ID() { return setVisibility_25478_ID_; }

    void ctor_8(::g::Android::android::content::Context* arg0);
    void setImageBitmap(::g::Android::android::graphics::Bitmap* arg0);
    void setImageMatrix(::g::Android::android::graphics::Matrix* arg0);
    void setScaleType(::g::Android::android::widget::ImageViewDLRScaleType* arg0);
    static void _Init3();
    static ImageView* New9(::g::Android::android::content::Context* arg0);
    static void setImageBitmap_IMPL_25450(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setImageMatrix_IMPL_25457(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setScaleType_IMPL_25454(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setVisibility_IMPL_25478(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}}} // ::g::Android::android::widget
