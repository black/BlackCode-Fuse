// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_IMAGE_VIEW_H__
#define __APP_ANDROID_ANDROID_WIDGET_IMAGE_VIEW_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Matrix; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace widget { struct ImageViewDLRScaleType; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct ImageView;

extern jclass ImageView___javaClass_3;
extern jmethodID ImageView__drawableStateChanged_25464_ID;
extern jmethodID ImageView__getBaseline_25466_ID;
extern jmethodID ImageView__hasOverlappingRendering_25438_ID;
extern jmethodID ImageView__ImageView_25432_ID_c;
extern jmethodID ImageView__invalidateDrawable_25437_ID;
extern jmethodID ImageView__jumpDrawablesToCurrentState_25436_ID;
extern jmethodID ImageView__onAttachedToWindow_25479_ID;
extern jmethodID ImageView__onDetachedFromWindow_25480_ID;
extern jmethodID ImageView__onDraw_25465_ID;
extern jmethodID ImageView__onInitializeAccessibilityEvent_25481_ID;
extern jmethodID ImageView__onInitializeAccessibilityNodeInfo_25482_ID;
extern jmethodID ImageView__onMeasure_25462_ID;
extern jmethodID ImageView__onPopulateAccessibilityEvent_25439_ID;
extern jmethodID ImageView__onRtlPropertiesChanged_25461_ID;
extern jmethodID ImageView__setImageBitmap_25450_ID;
extern jmethodID ImageView__setImageMatrix_25457_ID;
extern jmethodID ImageView__setScaleType_25454_ID;
extern jmethodID ImageView__setSelected_25452_ID;
extern jmethodID ImageView__setVisibility_25478_ID;
extern jmethodID ImageView__verifyDrawable_25435_ID;

struct ImageView__uType : ::app::Android::android::view::View__uType
{
};

ImageView__uType* ImageView__typeof();

void ImageView___Init_3(::uStatic* __this);
void ImageView___ObjInit_8(ImageView* __this, ::app::Android::android::content::Context* arg0);
void ImageView__drawableStateChanged(ImageView* __this);
void ImageView__drawableStateChanged_IMPL_25464(::uStatic* __this, bool arg0_, jobject arg1_);
int ImageView__getBaseline(ImageView* __this);
int ImageView__getBaseline_IMPL_25466(::uStatic* __this, bool arg0_, jobject arg1_);
bool ImageView__hasOverlappingRendering(ImageView* __this);
bool ImageView__hasOverlappingRendering_IMPL_25438(::uStatic* __this, bool arg0_, jobject arg1_);
void ImageView__invalidateDrawable(ImageView* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void ImageView__invalidateDrawable_IMPL_25437(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__jumpDrawablesToCurrentState(ImageView* __this);
void ImageView__jumpDrawablesToCurrentState_IMPL_25436(::uStatic* __this, bool arg0_, jobject arg1_);
ImageView* ImageView__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void ImageView__onAttachedToWindow(ImageView* __this);
void ImageView__onAttachedToWindow_IMPL_25479(::uStatic* __this, bool arg0_, jobject arg1_);
void ImageView__onDetachedFromWindow(ImageView* __this);
void ImageView__onDetachedFromWindow_IMPL_25480(::uStatic* __this, bool arg0_, jobject arg1_);
void ImageView__onDraw(ImageView* __this, ::app::Android::android::graphics::Canvas* arg0);
void ImageView__onDraw_IMPL_25465(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__onInitializeAccessibilityEvent(ImageView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void ImageView__onInitializeAccessibilityEvent_IMPL_25481(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__onInitializeAccessibilityNodeInfo(ImageView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void ImageView__onInitializeAccessibilityNodeInfo_IMPL_25482(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__onMeasure(ImageView* __this, int arg0, int arg1);
void ImageView__onMeasure_IMPL_25462(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ImageView__onPopulateAccessibilityEvent(ImageView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void ImageView__onPopulateAccessibilityEvent_IMPL_25439(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__onRtlPropertiesChanged(ImageView* __this, int arg0);
void ImageView__onRtlPropertiesChanged_IMPL_25461(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ImageView__setImageBitmap(ImageView* __this, ::app::Android::android::graphics::Bitmap* arg0);
void ImageView__setImageBitmap_IMPL_25450(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__setImageMatrix(ImageView* __this, ::app::Android::android::graphics::Matrix* arg0);
void ImageView__setImageMatrix_IMPL_25457(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__setScaleType(ImageView* __this, ::app::Android::android::widget::ImageViewDLRScaleType* arg0);
void ImageView__setScaleType_IMPL_25454(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__setSelected(ImageView* __this, bool arg0);
void ImageView__setSelected_IMPL_25452(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ImageView__setVisibility(ImageView* __this, int arg0);
void ImageView__setVisibility_IMPL_25478(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool ImageView__verifyDrawable(ImageView* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
bool ImageView__verifyDrawable_IMPL_25435(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct ImageView : ::app::Android::android::view::View
{
    void _ObjInit_8(::app::Android::android::content::Context* arg0) { ImageView___ObjInit_8(this, arg0); }
    void setImageBitmap(::app::Android::android::graphics::Bitmap* arg0) { ImageView__setImageBitmap(this, arg0); }
    void setImageMatrix(::app::Android::android::graphics::Matrix* arg0) { ImageView__setImageMatrix(this, arg0); }
    void setScaleType(::app::Android::android::widget::ImageViewDLRScaleType* arg0) { ImageView__setScaleType(this, arg0); }
};

}}}}


#endif
