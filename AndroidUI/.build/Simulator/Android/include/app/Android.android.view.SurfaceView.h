// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_SURFACE_VIEW_H__
#define __APP_ANDROID_ANDROID_VIEW_SURFACE_VIEW_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct SurfaceView;

extern jclass SurfaceView___javaClass_3;
extern jmethodID SurfaceView__dispatchDraw_22638_ID;
extern jmethodID SurfaceView__getHolder_22630_ID;
extern jmethodID SurfaceView__j_draw_22637_ID;
extern jmethodID SurfaceView__onAttachedToWindow_22631_ID;
extern jmethodID SurfaceView__onDetachedFromWindow_22634_ID;
extern jmethodID SurfaceView__onMeasure_22635_ID;
extern jmethodID SurfaceView__onWindowVisibilityChanged_22632_ID;
extern jmethodID SurfaceView__setVisibility_22633_ID;
extern jmethodID SurfaceView__SurfaceView_22627_ID_c;

struct SurfaceView__uType : ::app::Android::android::view::View__uType
{
};

SurfaceView__uType* SurfaceView__typeof();

void SurfaceView___Init_3(::uStatic* __this);
void SurfaceView___ObjInit_8(SurfaceView* __this, ::app::Android::android::content::Context* arg0);
void SurfaceView__dispatchDraw(SurfaceView* __this, ::app::Android::android::graphics::Canvas* arg0);
void SurfaceView__dispatchDraw_IMPL_22638(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* SurfaceView__getHolder(SurfaceView* __this);
::uObject* SurfaceView__getHolder_IMPL_22630(::uStatic* __this, bool arg0_, jobject arg1_);
void SurfaceView__j_draw(SurfaceView* __this, ::app::Android::android::graphics::Canvas* arg0);
void SurfaceView__j_draw_IMPL_22637(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
SurfaceView* SurfaceView__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void SurfaceView__onAttachedToWindow(SurfaceView* __this);
void SurfaceView__onAttachedToWindow_IMPL_22631(::uStatic* __this, bool arg0_, jobject arg1_);
void SurfaceView__onDetachedFromWindow(SurfaceView* __this);
void SurfaceView__onDetachedFromWindow_IMPL_22634(::uStatic* __this, bool arg0_, jobject arg1_);
void SurfaceView__onMeasure(SurfaceView* __this, int arg0, int arg1);
void SurfaceView__onMeasure_IMPL_22635(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void SurfaceView__onWindowVisibilityChanged(SurfaceView* __this, int arg0);
void SurfaceView__onWindowVisibilityChanged_IMPL_22632(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void SurfaceView__setVisibility(SurfaceView* __this, int arg0);
void SurfaceView__setVisibility_IMPL_22633(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);

struct SurfaceView : ::app::Android::android::view::View
{
    void _ObjInit_8(::app::Android::android::content::Context* arg0) { SurfaceView___ObjInit_8(this, arg0); }
    ::uObject* getHolder() { return SurfaceView__getHolder(this); }
};

}}}}


#endif
