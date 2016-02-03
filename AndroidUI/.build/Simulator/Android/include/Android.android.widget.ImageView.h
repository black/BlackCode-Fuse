// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Matrix;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
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
void ImageView__getBaseline_fn(ImageView* __this, int* __retval);
void ImageView__getBaseline_IMPL_25466_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ImageView__hasOverlappingRendering_fn(ImageView* __this, bool* __retval);
void ImageView__hasOverlappingRendering_IMPL_25438_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ImageView__invalidateDrawable_fn(ImageView* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void ImageView__invalidateDrawable_IMPL_25437_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__jumpDrawablesToCurrentState_fn(ImageView* __this);
void ImageView__jumpDrawablesToCurrentState_IMPL_25436_fn(bool* arg0_, jobject* arg1_);
void ImageView__New9_fn(::g::Android::android::content::Context* arg0, ImageView** __retval);
void ImageView__onInitializeAccessibilityEvent_fn(ImageView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void ImageView__onInitializeAccessibilityEvent_IMPL_25481_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__onInitializeAccessibilityNodeInfo_fn(ImageView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void ImageView__onInitializeAccessibilityNodeInfo_IMPL_25482_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__onPopulateAccessibilityEvent_fn(ImageView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void ImageView__onPopulateAccessibilityEvent_IMPL_25439_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__onRtlPropertiesChanged_fn(ImageView* __this, int* arg0);
void ImageView__onRtlPropertiesChanged_IMPL_25461_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ImageView__setImageBitmap_fn(ImageView* __this, ::g::Android::android::graphics::Bitmap* arg0);
void ImageView__setImageBitmap_IMPL_25450_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__setImageMatrix_fn(ImageView* __this, ::g::Android::android::graphics::Matrix* arg0);
void ImageView__setImageMatrix_IMPL_25457_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__setScaleType_fn(ImageView* __this, ::g::Android::android::widget::ImageViewDLRScaleType* arg0);
void ImageView__setScaleType_IMPL_25454_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ImageView__setSelected_fn(ImageView* __this, bool* arg0);
void ImageView__setSelected_IMPL_25452_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ImageView__setVisibility_fn(ImageView* __this, int* arg0);
void ImageView__setVisibility_IMPL_25478_fn(bool* arg0_, jobject* arg1_, int* arg2_);

struct ImageView : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID getBaseline_25466_ID_;
    static jmethodID& getBaseline_25466_ID() { return getBaseline_25466_ID_; }
    static jmethodID hasOverlappingRendering_25438_ID_;
    static jmethodID& hasOverlappingRendering_25438_ID() { return hasOverlappingRendering_25438_ID_; }
    static jmethodID ImageView_25432_ID_c_;
    static jmethodID& ImageView_25432_ID_c() { return ImageView_25432_ID_c_; }
    static jmethodID invalidateDrawable_25437_ID_;
    static jmethodID& invalidateDrawable_25437_ID() { return invalidateDrawable_25437_ID_; }
    static jmethodID jumpDrawablesToCurrentState_25436_ID_;
    static jmethodID& jumpDrawablesToCurrentState_25436_ID() { return jumpDrawablesToCurrentState_25436_ID_; }
    static jmethodID onInitializeAccessibilityEvent_25481_ID_;
    static jmethodID& onInitializeAccessibilityEvent_25481_ID() { return onInitializeAccessibilityEvent_25481_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_25482_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_25482_ID() { return onInitializeAccessibilityNodeInfo_25482_ID_; }
    static jmethodID onPopulateAccessibilityEvent_25439_ID_;
    static jmethodID& onPopulateAccessibilityEvent_25439_ID() { return onPopulateAccessibilityEvent_25439_ID_; }
    static jmethodID onRtlPropertiesChanged_25461_ID_;
    static jmethodID& onRtlPropertiesChanged_25461_ID() { return onRtlPropertiesChanged_25461_ID_; }
    static jmethodID setImageBitmap_25450_ID_;
    static jmethodID& setImageBitmap_25450_ID() { return setImageBitmap_25450_ID_; }
    static jmethodID setImageMatrix_25457_ID_;
    static jmethodID& setImageMatrix_25457_ID() { return setImageMatrix_25457_ID_; }
    static jmethodID setScaleType_25454_ID_;
    static jmethodID& setScaleType_25454_ID() { return setScaleType_25454_ID_; }
    static jmethodID setSelected_25452_ID_;
    static jmethodID& setSelected_25452_ID() { return setSelected_25452_ID_; }
    static jmethodID setVisibility_25478_ID_;
    static jmethodID& setVisibility_25478_ID() { return setVisibility_25478_ID_; }

    void ctor_8(::g::Android::android::content::Context* arg0);
    void setImageBitmap(::g::Android::android::graphics::Bitmap* arg0);
    void setImageMatrix(::g::Android::android::graphics::Matrix* arg0);
    void setScaleType(::g::Android::android::widget::ImageViewDLRScaleType* arg0);
    static void _Init3();
    static int getBaseline_IMPL_25466(bool arg0_, jobject arg1_);
    static bool hasOverlappingRendering_IMPL_25438(bool arg0_, jobject arg1_);
    static void invalidateDrawable_IMPL_25437(bool arg0_, jobject arg1_, uObject* arg2_);
    static void jumpDrawablesToCurrentState_IMPL_25436(bool arg0_, jobject arg1_);
    static ImageView* New9(::g::Android::android::content::Context* arg0);
    static void onInitializeAccessibilityEvent_IMPL_25481(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_25482(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onPopulateAccessibilityEvent_IMPL_25439(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onRtlPropertiesChanged_IMPL_25461(bool arg0_, jobject arg1_, int arg2_);
    static void setImageBitmap_IMPL_25450(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setImageMatrix_IMPL_25457(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setScaleType_IMPL_25454(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setSelected_IMPL_25452(bool arg0_, jobject arg1_, bool arg2_);
    static void setVisibility_IMPL_25478(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}}} // ::g::Android::android::widget
