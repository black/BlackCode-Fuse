// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_TEXTURE_VIEW_H__
#define __APP_ANDROID_ANDROID_VIEW_TEXTURE_VIEW_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Paint; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct TextureView;

extern jclass TextureView___javaClass_3;
extern jmethodID TextureView__buildLayer_22655_ID;
extern jmethodID TextureView__getLayerType_22654_ID;
extern jmethodID TextureView__isOpaque_22649_ID;
extern jmethodID TextureView__j_draw_22656_ID;
extern jmethodID TextureView__onAttachedToWindow_22651_ID;
extern jmethodID TextureView__onDetachedFromWindow_22652_ID;
extern jmethodID TextureView__onDraw_22657_ID;
extern jmethodID TextureView__onSizeChanged_22658_ID;
extern jmethodID TextureView__onVisibilityChanged_22659_ID;
extern jmethodID TextureView__setLayerType_22653_ID;
extern jmethodID TextureView__setOpaque_22650_ID;
extern jmethodID TextureView__setSurfaceTextureListener_22672_ID;
extern jmethodID TextureView__TextureView_22646_ID_c;

struct TextureView__uType : ::app::Android::android::view::View__uType
{
};

TextureView__uType* TextureView__typeof();

void TextureView___Init_3(::uStatic* __this);
void TextureView___ObjInit_8(TextureView* __this, ::app::Android::android::content::Context* arg0);
void TextureView__buildLayer(TextureView* __this);
void TextureView__buildLayer_IMPL_22655(::uStatic* __this, bool arg0_, jobject arg1_);
int TextureView__getLayerType(TextureView* __this);
int TextureView__getLayerType_IMPL_22654(::uStatic* __this, bool arg0_, jobject arg1_);
bool TextureView__isOpaque(TextureView* __this);
bool TextureView__isOpaque_IMPL_22649(::uStatic* __this, bool arg0_, jobject arg1_);
void TextureView__j_draw(TextureView* __this, ::app::Android::android::graphics::Canvas* arg0);
void TextureView__j_draw_IMPL_22656(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
TextureView* TextureView__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void TextureView__onAttachedToWindow(TextureView* __this);
void TextureView__onAttachedToWindow_IMPL_22651(::uStatic* __this, bool arg0_, jobject arg1_);
void TextureView__onDetachedFromWindow(TextureView* __this);
void TextureView__onDetachedFromWindow_IMPL_22652(::uStatic* __this, bool arg0_, jobject arg1_);
void TextureView__onDraw(TextureView* __this, ::app::Android::android::graphics::Canvas* arg0);
void TextureView__onDraw_IMPL_22657(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextureView__onSizeChanged(TextureView* __this, int arg0, int arg1, int arg2, int arg3);
void TextureView__onSizeChanged_IMPL_22658(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void TextureView__onVisibilityChanged(TextureView* __this, ::app::Android::android::view::View* arg0, int arg1);
void TextureView__onVisibilityChanged_IMPL_22659(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void TextureView__setLayerType(TextureView* __this, int arg0, ::app::Android::android::graphics::Paint* arg1);
void TextureView__setLayerType_IMPL_22653(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void TextureView__setOpaque(TextureView* __this, bool arg0);
void TextureView__setOpaque_IMPL_22650(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextureView__setSurfaceTextureListener(TextureView* __this, ::uObject* arg0);
void TextureView__setSurfaceTextureListener_IMPL_22672(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct TextureView : ::app::Android::android::view::View
{
    void _ObjInit_8(::app::Android::android::content::Context* arg0) { TextureView___ObjInit_8(this, arg0); }
    void setOpaque(bool arg0) { TextureView__setOpaque(this, arg0); }
    void setSurfaceTextureListener(::uObject* arg0) { TextureView__setSurfaceTextureListener(this, arg0); }
};

}}}}


#endif
