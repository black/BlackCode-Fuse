// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Paint;}}}}
namespace g{namespace Android{namespace android{namespace view{struct TextureView;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class TextureView :21492
// {
::g::Android::android::view::View_type* TextureView_typeof();
void TextureView__ctor_8_fn(TextureView* __this, ::g::Android::android::content::Context* arg0);
void TextureView___Init3_fn();
void TextureView__buildLayer_fn(TextureView* __this);
void TextureView__buildLayer_IMPL_22655_fn(bool* arg0_, jobject* arg1_);
void TextureView__getLayerType_fn(TextureView* __this, int* __retval);
void TextureView__getLayerType_IMPL_22654_fn(bool* arg0_, jobject* arg1_, int* __retval);
void TextureView__isOpaque_fn(TextureView* __this, bool* __retval);
void TextureView__isOpaque_IMPL_22649_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void TextureView__j_draw_fn(TextureView* __this, ::g::Android::android::graphics::Canvas* arg0);
void TextureView__j_draw_IMPL_22656_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextureView__New9_fn(::g::Android::android::content::Context* arg0, TextureView** __retval);
void TextureView__setLayerType_fn(TextureView* __this, int* arg0, ::g::Android::android::graphics::Paint* arg1);
void TextureView__setLayerType_IMPL_22653_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_);
void TextureView__setOpaque_fn(TextureView* __this, bool* arg0);
void TextureView__setOpaque_IMPL_22650_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextureView__setSurfaceTextureListener_fn(TextureView* __this, uObject* arg0);
void TextureView__setSurfaceTextureListener_IMPL_22672_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct TextureView : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID buildLayer_22655_ID_;
    static jmethodID& buildLayer_22655_ID() { return buildLayer_22655_ID_; }
    static jmethodID getLayerType_22654_ID_;
    static jmethodID& getLayerType_22654_ID() { return getLayerType_22654_ID_; }
    static jmethodID isOpaque_22649_ID_;
    static jmethodID& isOpaque_22649_ID() { return isOpaque_22649_ID_; }
    static jmethodID j_draw_22656_ID_;
    static jmethodID& j_draw_22656_ID() { return j_draw_22656_ID_; }
    static jmethodID setLayerType_22653_ID_;
    static jmethodID& setLayerType_22653_ID() { return setLayerType_22653_ID_; }
    static jmethodID setOpaque_22650_ID_;
    static jmethodID& setOpaque_22650_ID() { return setOpaque_22650_ID_; }
    static jmethodID setSurfaceTextureListener_22672_ID_;
    static jmethodID& setSurfaceTextureListener_22672_ID() { return setSurfaceTextureListener_22672_ID_; }
    static jmethodID TextureView_22646_ID_c_;
    static jmethodID& TextureView_22646_ID_c() { return TextureView_22646_ID_c_; }

    void ctor_8(::g::Android::android::content::Context* arg0);
    void setOpaque(bool arg0);
    void setSurfaceTextureListener(uObject* arg0);
    static void _Init3();
    static void buildLayer_IMPL_22655(bool arg0_, jobject arg1_);
    static int getLayerType_IMPL_22654(bool arg0_, jobject arg1_);
    static bool isOpaque_IMPL_22649(bool arg0_, jobject arg1_);
    static void j_draw_IMPL_22656(bool arg0_, jobject arg1_, uObject* arg2_);
    static TextureView* New9(::g::Android::android::content::Context* arg0);
    static void setLayerType_IMPL_22653(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void setOpaque_IMPL_22650(bool arg0_, jobject arg1_, bool arg2_);
    static void setSurfaceTextureListener_IMPL_22672(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::view
