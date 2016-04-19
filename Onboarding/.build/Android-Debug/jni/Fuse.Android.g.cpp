// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fuse_Android_bundle.h>
#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.BitmapDLRConfig.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.Paint.h>
#include <Android.android.graphics.Rect.h>
#include <Android.android.graphics.Typeface.h>
#include <Android.android.opengl.GLUtils.h>
#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.text.Layout.h>
#include <Android.android.text.LayoutDLRAlignment.h>
#include <Android.android.text.StaticLayout.h>
#include <Android.android.text.TextPaint.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewDLROnTouchListener.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.widget.RelativeLayout.h>
#include <Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.IntArray.h>
#include <Fuse.Android.AndroidExtensions.h>
#include <Fuse.Android.BindingView.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Controls.Button.h>
#include <Fuse.Android.Controls.Circle.h>
#include <Fuse.Android.Controls.Image.h>
#include <Fuse.Android.Controls.MapView.h>
#include <Fuse.Android.Controls.PlainTextEdit.h>
#include <Fuse.Android.Controls.Rectangle.h>
#include <Fuse.Android.Controls.SeekBar.h>
#include <Fuse.Android.Controls.Switch.h>
#include <Fuse.Android.Controls.TextEdit.h>
#include <Fuse.Android.Controls.TextView.h>
#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.FocusChangedHandler.h>
#include <Fuse.Android.FocusChangedListener.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.InputDispatch.h>
#include <Fuse.Android.InputDispatch.TouchListener.h>
#include <Fuse.Android.NativeStyle.h>
#include <Fuse.Android.NativeStyle.Template.h>
#include <Fuse.Android.NativeStyle.Template.Template1.h>
#include <Fuse.Android.NativeStyle.Template.Template2.Factory.h>
#include <Fuse.Android.NativeStyle.Template.Template2.Factory1.h>
#include <Fuse.Android.NativeStyle.Template.Template2.h>
#include <Fuse.Android.NativeTemplate.h>
#include <Fuse.Android.NativeViews.ContentControl.h>
#include <Fuse.Android.NativeViews.NativeView.h>
#include <Fuse.Android.NativeViews.NativeViewHost.h>
#include <Fuse.Android.NativeViews.Panel.h>
#include <Fuse.Android.NativeViews.ScrollView.h>
#include <Fuse.Android.NativeViews.SurfaceView.h>
#include <Fuse.Android.NativeViews.TextureView.h>
#include <Fuse.Android.RootView.h>
#include <Fuse.Android.RootViewContainer.h>
#include <Fuse.Android.TextControlLayout.h>
#include <Fuse.Android.TextRenderer.BackgroundRender.h>
#include <Fuse.Android.TextRenderer.h>
#include <Fuse.Android.TypefaceCache.h>
#include <Fuse.AppBase.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.SizeFlags.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Themes.GraphicsStyle.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.BundleFile.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.ULong.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IFactory.h>
#include <Uno.UX.Template-1.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
//~
JNFUN(jboolean,Binding_Fuse_Android_InputDispatch_TouchListener__onTouch22729,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::android::view::View*,((::g::Android::android::view::View*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::View_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)::g::Android::android::view::ViewDLROnTouchListener::onTouch(uInterface(uPtr, ::g::Android::android::view::ViewDLROnTouchListener_typeof()), tmparg2, tmparg3);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_RootViewContainer__onInterceptTouchEvent23409,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::android::view::ViewGroup*);
    JARG_TO_UNO(arg1,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onInterceptTouchEvent(tmparg1);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_RootViewContainer__onTouchEvent22991,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::android::view::View*);
    JARG_TO_UNO(arg1,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onTouchEvent(tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_FocusChangedListener__onFocusChange22722,jlong ujPtr, jobject arg0, jboolean arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::android::view::View*,((::g::Android::android::view::View*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::View_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::view::ViewDLROnFocusChangeListener::onFocusChange(uInterface(uPtr, ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof()), tmparg2, ((bool)arg1));
    JCATCH
}
static uString* STRINGS[13];
static uType* TYPES[83];

namespace g{
namespace Fuse{
namespace Android{

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(250)
// ----------------------------------------------------------

// internal static extern class AndroidExtensions :250
// {
uClassType* AndroidExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.AndroidExtensions", options);
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Android::android::graphics::Rect_typeof();
    return type;
}

// public static Uno.Rect ToRect(Android.android.graphics.Rect r) :252
void AndroidExtensions__ToRect_fn(::g::Android::android::graphics::Rect* r, ::g::Uno::Rect* __retval)
{
    *__retval = AndroidExtensions::ToRect(r);
}

// public static Uno.Rect ToRect(Android.android.graphics.Rect r) [static] :252
::g::Uno::Rect AndroidExtensions::ToRect(::g::Android::android::graphics::Rect* r)
{
    return ::g::Uno::Rect__New1((float)uPtr(r)->left(), (float)uPtr(r)->top(), (float)uPtr(r)->right(), (float)uPtr(r)->bottom());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(1031)
// -----------------------------------------------------------

// private sealed class TextRenderer.BackgroundRender :1031
// {
uType* TextRenderer__BackgroundRender_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TextRenderer__BackgroundRender);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextRenderer.BackgroundRender", options);
    ::TYPES[2] = ::g::Fuse::Android::TextRenderer_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Android::android::text::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _pixelBounds), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _renderColor), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _result), 0,
        ::g::Fuse::Android::TextRenderer_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textRenderer), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textureVersion), 0);
    return type;
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1040
void TextRenderer__BackgroundRender__ctor__fn(TextRenderer__BackgroundRender* __this, ::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds)
{
    __this->ctor_(textRenderer, *textureVersion, layout, *renderColor, *pixelBounds);
}

// private void DoneCallback() :1055
void TextRenderer__BackgroundRender__DoneCallback_fn(TextRenderer__BackgroundRender* __this)
{
    __this->DoneCallback();
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1040
void TextRenderer__BackgroundRender__New1_fn(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, TextRenderer__BackgroundRender** __retval)
{
    *__retval = TextRenderer__BackgroundRender::New1(textRenderer, *textureVersion, layout, *renderColor, *pixelBounds);
}

// public void UpdateTextureAsync() :1049
void TextRenderer__BackgroundRender__UpdateTextureAsync_fn(TextRenderer__BackgroundRender* __this)
{
    __this->UpdateTextureAsync();
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [instance] :1040
void TextRenderer__BackgroundRender::ctor_(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    _textRenderer = textRenderer;
    _textureVersion = textureVersion;
    _layout = layout;
    _renderColor = renderColor;
    _pixelBounds = pixelBounds;
}

// private void DoneCallback() [instance] :1055
void TextRenderer__BackgroundRender::DoneCallback()
{
    if (_textureVersion == uPtr(_textRenderer)->_wantedVersion)
    {
        uPtr(_textRenderer)->SetTexture(_result);
        uPtr(_textRenderer)->_textureVersion = _textureVersion;
    }
    else
        ::g::OpenGL::GL::DeleteTexture(_result);
}

// public void UpdateTextureAsync() [instance] :1049
void TextRenderer__BackgroundRender::UpdateTextureAsync()
{
    _result = uPtr(_textRenderer)->UpdateTexture(_layout, _renderColor, _pixelBounds);
    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__DoneCallback_fn, this), 0);
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [static] :1040
TextRenderer__BackgroundRender* TextRenderer__BackgroundRender::New1(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    TextRenderer__BackgroundRender* obj1 = (TextRenderer__BackgroundRender*)uNew(TextRenderer__BackgroundRender_typeof());
    obj1->ctor_(textRenderer, textureVersion, layout, renderColor, pixelBounds);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(176)
// ----------------------------------------------------------

// internal static extern class BindingView :176
// {
uClassType* BindingView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.BindingView", options);
    return type;
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(Android.android.view.View view) :178
void BindingView__GetNativeViewHandle_fn(::g::Android::android::view::View* view, uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = BindingView::GetNativeViewHandle(view);
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(Android.android.view.View view) [static] :178
uPlatform2::ViewNativeHandle BindingView::GetNativeViewHandle(::g::Android::android::view::View* view)
{
    return (uPlatform2::ViewNativeHandle)uPtr(view)->_GetJavaObject();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(1089)
// -----------------------------------------------------------

// internal sealed class Blitter :1089
// {
// static Blitter() :1089
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[5] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[6] = ::g::Fuse_Android_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_55a11d82), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_55a11d82_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Android::Blitter, Blit_verts_55a11d82_1_6_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated Blitter() :1089
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1093
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1089
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1089
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1089
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1093
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    _draw_55a11d82.BlendEnabled(true);
    _draw_55a11d82.CullFace(0);
    _draw_55a11d82.BlendSrcAlpha(7);
    _draw_55a11d82.BlendDstRgb(3);
    _draw_55a11d82.Use();
    _draw_55a11d82.Attrib1(0, 2, Blit_v_55a11d82_1_7_1, 8, 0);
    _draw_55a11d82.Uniform2(1, size);
    _draw_55a11d82.Uniform2(2, pos);
    _draw_55a11d82.Uniform12(3, localToClipTransform);
    _draw_55a11d82.Sampler2(4, vt);
    _draw_55a11d82.DrawArrays(uPtr(Blit_verts_55a11d82_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1089
void Blitter::init_DrawCalls()
{
    uArray* verts_55a11d82_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[5/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_55a11d82_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_55a11d82_1_6_0), 0);
    Blit_verts_55a11d82_1_6_5 = verts_55a11d82_1_6_0;
    _draw_55a11d82 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Android_bundle::Blitter8e9d75eb());
}

// public generated Blitter New() [static] :1089
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\.cache\GeneratedCode\$.uno(37)
// ------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2.Factory :37
// {
// static Factory() :44
static void NativeStyle__Template__Template2__Factory__cctor__fn(uType* __type)
{
}

NativeStyle__Template__Template2__Factory_type* NativeStyle__Template__Template2__Factory_typeof()
{
    static uSStrong<NativeStyle__Template__Template2__Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2__Factory);
    options.TypeSize = sizeof(NativeStyle__Template__Template2__Factory_type);
    type = (NativeStyle__Template__Template2__Factory_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2.Factory", options);
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory__cctor__fn;
    type->interface0.fp_New1 = (void(*)(uObject*, uObject**))NativeStyle__Template__Template2__Factory__New1_fn;
    ::TYPES[7] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IFactory_typeof(), offsetof(NativeStyle__Template__Template2__Factory_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Android::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2__Factory, __parent1), 0);
    return type;
}

// public Factory(Fuse.Android.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__ctor__fn(NativeStyle__Template__Template2__Factory* __this, ::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    __this->ctor_(parent);
}

// public object New() :47
void NativeStyle__Template__Template2__Factory__New1_fn(NativeStyle__Template__Template2__Factory* __this, uObject** __retval)
{
    *__retval = __this->New1();
}

// public Factory New(Fuse.Android.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__New2_fn(::g::Fuse::Android::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory::New2(parent);
}

// public Factory(Fuse.Android.NativeStyle.Template.Template2 parent) [instance] :40
void NativeStyle__Template__Template2__Factory::ctor_(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    __parent1 = parent;
}

// public object New() [instance] :47
uObject* NativeStyle__Template__Template2__Factory::New1()
{
    ::g::Fuse::Android::Controls::PlainTextEdit* self = ::g::Fuse::Android::Controls::PlainTextEdit::New2();
    return self;
}

// public Factory New(Fuse.Android.NativeStyle.Template.Template2 parent) [static] :40
NativeStyle__Template__Template2__Factory* NativeStyle__Template__Template2__Factory::New2(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory* obj1 = (NativeStyle__Template__Template2__Factory*)uNew(NativeStyle__Template__Template2__Factory_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\.cache\GeneratedCode\$.uno(53)
// ------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2.Factory1 :53
// {
// static Factory1() :60
static void NativeStyle__Template__Template2__Factory1__cctor__fn(uType* __type)
{
}

NativeStyle__Template__Template2__Factory1_type* NativeStyle__Template__Template2__Factory1_typeof()
{
    static uSStrong<NativeStyle__Template__Template2__Factory1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2__Factory1);
    options.TypeSize = sizeof(NativeStyle__Template__Template2__Factory1_type);
    type = (NativeStyle__Template__Template2__Factory1_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2.Factory1", options);
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory1__cctor__fn;
    type->interface0.fp_New1 = (void(*)(uObject*, uObject**))NativeStyle__Template__Template2__Factory1__New1_fn;
    ::TYPES[7] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IFactory_typeof(), offsetof(NativeStyle__Template__Template2__Factory1_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Android::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2__Factory1, __parent1), 0);
    return type;
}

// public Factory1(Fuse.Android.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__ctor__fn(NativeStyle__Template__Template2__Factory1* __this, ::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    __this->ctor_(parent);
}

// public object New() :63
void NativeStyle__Template__Template2__Factory1__New1_fn(NativeStyle__Template__Template2__Factory1* __this, uObject** __retval)
{
    *__retval = __this->New1();
}

// public Factory1 New(Fuse.Android.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__New2_fn(::g::Fuse::Android::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory1** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory1::New2(parent);
}

// public Factory1(Fuse.Android.NativeStyle.Template.Template2 parent) [instance] :56
void NativeStyle__Template__Template2__Factory1::ctor_(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    __parent1 = parent;
}

// public object New() [instance] :63
uObject* NativeStyle__Template__Template2__Factory1::New1()
{
    ::g::Fuse::Android::TextRenderer* self = ::g::Fuse::Android::TextRenderer::New1();
    return self;
}

// public Factory1 New(Fuse.Android.NativeStyle.Template.Template2 parent) [static] :56
NativeStyle__Template__Template2__Factory1* NativeStyle__Template__Template2__Factory1::New2(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory1* obj1 = (NativeStyle__Template__Template2__Factory1*)uNew(NativeStyle__Template__Template2__Factory1_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(193)
// ----------------------------------------------------------

// internal extern delegate void FocusChangedHandler(object sender, bool hasFocus) :193
uDelegateType* FocusChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.FocusChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Bool_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(195)
// ----------------------------------------------------------

// internal sealed extern class FocusChangedListener :195
// {
FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Android.FocusChangedListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))FocusChangedListener__Uno_IDisposable_Dispose1_fn;
    type->interface2.fp_onFocusChange = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))FocusChangedListener__Android_android_view_ViewDLROnFocusChangeListener_onFocusChange_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[0] = uString::Const("com.Bindings.Binding_Fuse_Android_FocusChangedListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[11] = ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof();
    ::TYPES[12] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::Fuse::Android::FocusChangedHandler_typeof();
    ::TYPES[7] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(FocusChangedListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface1),
        ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof(), offsetof(FocusChangedListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::FocusChangedHandler_typeof(), offsetof(::g::Fuse::Android::FocusChangedListener, _handler), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::FocusChangedListener, _view), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::FocusChangedListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private FocusChangedListener(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :210
void FocusChangedListener__ctor_4_fn(FocusChangedListener* __this, ::g::Android::android::view::View* view, uDelegate* handler)
{
    __this->ctor_4(view, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :200
void FocusChangedListener__AddHandler_fn(::g::Android::android::view::View* view, uDelegate* handler, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, handler);
}

// private void Android.android.view.ViewDLROnFocusChangeListener.onFocusChange(Android.android.view.View v, bool hasFocus) :224
void FocusChangedListener__Android_android_view_ViewDLROnFocusChangeListener_onFocusChange_fn(FocusChangedListener* __this, ::g::Android::android::view::View* v, bool* hasFocus)
{
    bool hasFocus_ = *hasFocus;
    uPtr(__this->_handler)->Invoke(2, v, uCRef(hasFocus_));
}

// private FocusChangedListener New(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :210
void FocusChangedListener__New5_fn(::g::Android::android::view::View* view, uDelegate* handler, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New5(view, handler);
}

// private void Uno.IDisposable.Dispose() :219
void FocusChangedListener__Uno_IDisposable_Dispose1_fn(FocusChangedListener* __this)
{
    uPtr(__this->_view)->setOnFocusChangeListener(NULL);
}

jclass FocusChangedListener::_javaClass2_;

// private FocusChangedListener(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [instance] :210
void FocusChangedListener::ctor_4(::g::Android::android::view::View* view, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[0/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(FocusChangedListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        FocusChangedListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onFocusChange","(JLandroid/view/View;ZJJ)V",Binding_Fuse_Android_FocusChangedListener__onFocusChange22722);
        COMMIT_REG_MTD(FocusChangedListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _view = view;
    _handler = handler;
    uPtr(_view)->setOnFocusChangeListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [static] :200
uObject* FocusChangedListener::AddHandler(::g::Android::android::view::View* view, uDelegate* handler)
{
    return (uObject*)FocusChangedListener::New5(view, handler);
}

// private FocusChangedListener New(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [static] :210
FocusChangedListener* FocusChangedListener::New5(::g::Android::android::view::View* view, uDelegate* handler)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_4(view, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(237)
// ----------------------------------------------------------

// internal static class Helpers :237
// {
uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Helpers", options);
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Float4_typeof();
    return type;
}

// public static int EncodeColor(float4 c) :239
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :239
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(283)
// ----------------------------------------------------------

// internal static extern class InputDispatch :283
// {
// static InputDispatch() :283
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[16/*Uno.Collections.Dictionary<Android.android.view.View, Fuse.Node>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[17/*Uno.Collections.HashSet<int>*/]));
    InputDispatch::_captureIdentiy_ = ::g::Uno::Object::New();
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.InputDispatch", options);
    type->fp_cctor_ = InputDispatch__cctor__fn;
    ::TYPES[16] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Android::android::view::View_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[17] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[18] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[19] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[20] = ::g::Android::android::view::ViewDLROnTouchListener_typeof();
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[23] = ::g::Android::Runtime::IntArray_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[25] = ::g::Fuse::Input::PointerEventData_typeof();
    ::TYPES[26] = ::g::Uno::Double_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[27] = ::g::Android::android::view::MotionEvent_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof()), (uintptr_t)&::g::Fuse::Android::InputDispatch::_activePointers_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch::_captureIdentiy_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Android::android::view::View_typeof(), ::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::Android::InputDispatch::_listeners_, uFieldFlagsStatic,
        InputDispatch__TouchListener_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch::_touchListener_, uFieldFlagsStatic);
    return type;
}

// public static void AddListener(Fuse.Android.NativeViews.NativeView nativeView) :311
void InputDispatch__AddListener_fn(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch::AddListener(nativeView);
}

// private static Fuse.Node FindRoot(Fuse.Node n) :421
void InputDispatch__FindRoot_fn(::g::Fuse::Node* n, ::g::Fuse::Node** __retval)
{
    *__retval = InputDispatch::FindRoot(n);
}

// private static Fuse.Node GetNode(Android.android.view.View handle) :329
void InputDispatch__GetNode_fn(::g::Android::android::view::View* handle, ::g::Fuse::Node** __retval)
{
    *__retval = InputDispatch::GetNode(handle);
}

// private static void LostCallback() :482
void InputDispatch__LostCallback_fn()
{
    InputDispatch::LostCallback();
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :355
void InputDispatch__MakePointerEventData_fn(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent, uArray** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(node, view, motionEvent);
}

// private static void RaiseCancel(Fuse.Node node, Fuse.Input.PointerEventData data) :468
void InputDispatch__RaiseCancel_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseCancel(node, data);
}

// public static void RaiseEvent(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :386
void InputDispatch__RaiseEvent_fn(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(node, view, motionEvent);
}

// private static void RaiseMoved(Fuse.Node node, Fuse.Input.PointerEventData data) :442
void InputDispatch__RaiseMoved_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(node, data);
}

// private static void RaisePressed(Fuse.Node node, Fuse.Input.PointerEventData data) :427
void InputDispatch__RaisePressed_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(node, data);
}

// private static void RaiseReleased(Fuse.Node node, Fuse.Input.PointerEventData data) :454
void InputDispatch__RaiseReleased_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(node, data);
}

// private static bool RegisterPointer(int pointerId) :339
void InputDispatch__RegisterPointer_fn(int* pointerId, bool* __retval)
{
    *__retval = InputDispatch::RegisterPointer(*pointerId);
}

// public static void RemoveListener(Fuse.Android.NativeViews.NativeView nativeView) :323
void InputDispatch__RemoveListener_fn(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch::RemoveListener(nativeView);
}

// private static void UnregisterPointer(int pointerId) :349
void InputDispatch__UnregisterPointer_fn(int* pointerId)
{
    InputDispatch::UnregisterPointer(*pointerId);
}

uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong<uObject*> InputDispatch::_captureIdentiy_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong<InputDispatch__TouchListener*> InputDispatch::_touchListener_;

// public static void AddListener(Fuse.Android.NativeViews.NativeView nativeView) [static] :311
void InputDispatch::AddListener(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch_typeof()->Init();

    if (::g::Android::java::lang::Object::op_Equality1(InputDispatch::_touchListener(), NULL))
        InputDispatch::_touchListener() = InputDispatch__TouchListener::New5();

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(InputDispatch::_listeners()), uPtr(nativeView)->Handle(), uPtr(nativeView)->Node());
    uPtr(nativeView->Handle())->setOnTouchListener((uObject*)InputDispatch::_touchListener());
}

// private static Fuse.Node FindRoot(Fuse.Node n) [static] :421
::g::Fuse::Node* InputDispatch::FindRoot(::g::Fuse::Node* n)
{
    InputDispatch_typeof()->Init();

    if (uPtr(n)->Parent() == NULL)
        return n;

    return InputDispatch::FindRoot(uPtr(n)->Parent());
}

// private static Fuse.Node GetNode(Android.android.view.View handle) [static] :329
::g::Fuse::Node* InputDispatch::GetNode(::g::Android::android::view::View* handle)
{
    InputDispatch_typeof()->Init();
    bool ret2;
    ::g::Fuse::Node* ret3;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(InputDispatch::_listeners()), handle, &ret2), ret2))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(InputDispatch::_listeners()), handle, &ret3), ret3);

    return NULL;
}

// private static void LostCallback() [static] :482
void InputDispatch::LostCallback()
{
    InputDispatch_typeof()->Init();
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [static] :355
uArray* InputDispatch::MakePointerEventData(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[22/*Fuse.Input.PointerEventData[]*/], uPtr(motionEvent)->getPointerCount());
    ::g::Android::Runtime::IntArray* intArray = ::g::Android::Runtime::IntArray::New6(2);
    uPtr(view)->getLocationOnScreen(intArray);
    ::g::Uno::Float2 offset = ::g::Uno::Float2__New2((float)intArray->Item(0), (float)intArray->Item(1));
    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(node)->Viewport()), ::TYPES[24/*Fuse.IViewport*/]));

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(offset, ::g::Uno::Float2__New2(uPtr(motionEvent)->getX1(i), uPtr(motionEvent)->getY1(i))), density);
        int pointerId = motionEvent->getPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = ((double)motionEvent->getEventTime() / 1000.0), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static void RaiseCancel(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :468
void InputDispatch::RaiseCancel(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();
    InputDispatch::UnregisterPointer(uPtr(data)->PointIndex);

    try
    {
        if (::g::Fuse::Input::Pointer::HardCapture(uPtr(data)->PointIndex, node, InputDispatch::_captureIdentiy(), uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)InputDispatch__LostCallback_fn)))
            ::g::Fuse::Input::Pointer::ReleaseHardCapture(uPtr(data)->PointIndex);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RaiseEvent(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [static] :386
void InputDispatch::RaiseEvent(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    InputDispatch_typeof()->Init();
    int action = uPtr(motionEvent)->getActionMasked();
    uArray* data = InputDispatch::MakePointerEventData(node, view, motionEvent);

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseCancel(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int pointerMask = ::g::Android::android::view::MotionEvent::ACTION_POINTER_INDEX_MASK();
            int pointerShit = ::g::Android::android::view::MotionEvent::ACTION_POINTER_INDEX_SHIFT();
            int pointerIndex = (uPtr(motionEvent)->getAction() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :442
void InputDispatch::RaiseMoved(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :427
void InputDispatch::RaisePressed(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    if (!InputDispatch::RegisterPointer(uPtr(data)->PointIndex))
        return;

    try
    {
        ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :454
void InputDispatch::RaiseReleased(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();
    InputDispatch::UnregisterPointer(uPtr(data)->PointIndex);

    try
    {
        ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static bool RegisterPointer(int pointerId) [static] :339
bool InputDispatch::RegisterPointer(int pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret4;
    bool ret5;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret4), ret4))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret5);
        return true;
    }

    return false;
}

// public static void RemoveListener(Fuse.Android.NativeViews.NativeView nativeView) [static] :323
void InputDispatch::RemoveListener(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch_typeof()->Init();
    bool ret6;
    uPtr(uPtr(nativeView)->Handle())->setOnTouchListener(NULL);
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(InputDispatch::_listeners()), nativeView->Handle(), &ret6);
}

// private static void UnregisterPointer(int pointerId) [static] :349
void InputDispatch::UnregisterPointer(int pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret7), ret7))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret8);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\.cache\GeneratedCode\$.uno(5)
// -----------------------------------------------------------------------------

// public partial sealed class NativeStyle :5
// {
// static NativeStyle() :95
static void NativeStyle__cctor__fn(uType* __type)
{
}

::g::Fuse::Style_type* NativeStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Android.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[28] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    ::TYPES[29] = ::g::Fuse::Style_typeof();
    ::TYPES[30] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    return type;
}

// public NativeStyle() :98
void NativeStyle__ctor_1_fn(NativeStyle* __this)
{
    __this->ctor_1();
}

// internal void InitializeUX() :102
void NativeStyle__InitializeUX_fn(NativeStyle* __this)
{
    __this->InitializeUX();
}

// public NativeStyle New() :98
void NativeStyle__New2_fn(NativeStyle** __retval)
{
    *__retval = NativeStyle::New2();
}

// public NativeStyle() [instance] :98
void NativeStyle::ctor_1()
{
    ctor_();
    InitializeUX();
}

// internal void InitializeUX() [instance] :102
void NativeStyle::InitializeUX()
{
    NativeStyle__Template* collection1;
    ::g::Fuse::Android::NativeTemplate* temp = ::g::Fuse::Android::NativeTemplate::New1();
    collection1 = NativeStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template* temp1 = collection1;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Uno.UX.ITemplate*/])), (uObject*)temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Uno.UX.ITemplate*/])), (uObject*)temp1);
}

// public NativeStyle New() [static] :98
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj2 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(494)
// ----------------------------------------------------------

// internal sealed class NativeTemplate :494
// {
NativeTemplate_type* NativeTemplate_typeof()
{
    static uSStrong<NativeTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeTemplate);
    options.TypeSize = sizeof(NativeTemplate_type);
    type = (NativeTemplate_type*)uClassType::New("Fuse.Android.NativeTemplate", options);
    type->fp_ctor_ = (void*)NativeTemplate__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))NativeTemplate__Apply_fn;
    ::STRINGS[3] = uString::Const("GraphicsView inside a native application on Android API < 14 is not properly supported and will result in visual anomalies.");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Android\\0.19.3\\$.uno");
    ::STRINGS[5] = uString::Const("Apply");
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[31] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[32] = ::g::Fuse::Controls::NativeViewHost_typeof();
    ::TYPES[33] = ::g::Fuse::Behavior_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[34] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[35] = ::g::Fuse::Controls::Switch_typeof();
    ::TYPES[36] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[37] = ::g::Fuse::Controls::TextBlock_typeof();
    ::TYPES[38] = ::g::Fuse::Controls::Slider_typeof();
    ::TYPES[39] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[40] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[41] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[42] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[43] = ::g::Fuse::Controls::MapView_typeof();
    ::TYPES[44] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[45] = ::g::Fuse::Controls::GraphicsView_typeof();
    ::TYPES[46] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    ::TYPES[47] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(NativeTemplate_type, interface0));
    return type;
}

// public generated NativeTemplate() :494
void NativeTemplate__ctor__fn(NativeTemplate* __this)
{
    __this->ctor_();
}

// public extern bool Apply(object obj) :525
void NativeTemplate__Apply_fn(NativeTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) :496
void NativeTemplate__HaveGraphicsViewAncestor_fn(NativeTemplate* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->HaveGraphicsViewAncestor(node);
}

// public generated NativeTemplate New() :494
void NativeTemplate__New1_fn(NativeTemplate** __retval)
{
    *__retval = NativeTemplate::New1();
}

// public generated NativeTemplate() [instance] :494
void NativeTemplate::ctor_()
{
}

// public extern bool Apply(object obj) [instance] :525
bool NativeTemplate::Apply(uObject* obj)
{
    if (HaveGraphicsViewAncestor(uAs< ::g::Fuse::Node*>(obj, ::TYPES[21/*Fuse.Node*/])))
        return true;

    ::g::Fuse::Controls::Panel* panel = uAs< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[31/*Fuse.Controls.Panel*/]);

    if (uIs(obj, ::TYPES[32/*Fuse.Controls.NativeViewHost*/]))
    {
        uPtr(panel)->AddStyleBehavior(::g::Fuse::Android::NativeViews::NativeViewHost::New1());
        return true;
    }

    if ((panel != NULL) && !HaveGraphicsViewAncestor(panel))
    {
        uPtr(panel)->AddStyleBehavior(::g::Fuse::Android::NativeViews::Panel::New1());

        if (uIs(panel, ::TYPES[34/*Fuse.Controls.Button*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::Button::New1());

        if (uIs(panel, ::TYPES[35/*Fuse.Controls.Switch*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::Switch::New1());

        if (uIs(panel, ::TYPES[36/*Fuse.Controls.TextEdit*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::TextEdit::New1());

        if (uIs(panel, ::TYPES[37/*Fuse.Controls.TextBlock*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::TextView::New1());

        if (uIs(panel, ::TYPES[38/*Fuse.Controls.Slider*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::SeekBar::New1());

        if (uIs(panel, ::TYPES[39/*Fuse.Controls.Image*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::Image::New1());

        if (uIs(panel, ::TYPES[40/*Fuse.Controls.Rectangle*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::Rectangle::New1());

        if (uIs(panel, ::TYPES[41/*Fuse.Controls.Circle*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::Circle::New1());

        if (uIs(panel, ::TYPES[42/*Fuse.Controls.WebView*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::WebView::New1());

        if (uIs(panel, ::TYPES[43/*Fuse.Controls.MapView*/]))
            panel->AddStyleChild(::g::Fuse::Android::Controls::MapView::New1());
    }

    ::g::Fuse::Controls::ContentControl* contentControl = uAs< ::g::Fuse::Controls::ContentControl*>(obj, ::TYPES[44/*Fuse.Controls.ContentControl*/]);

    if (contentControl != NULL)
    {
        ::g::Fuse::Controls::GraphicsView* gv = uAs< ::g::Fuse::Controls::GraphicsView*>(contentControl, ::TYPES[45/*Fuse.Controls.GraphicsView*/]);

        if (gv != NULL)
        {
            if (uPtr(gv)->IsFullScreen)
                uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::SurfaceView::New1());
            else
            {
                int api = ::g::Android::android::os::BuildDLRVERSION::SDK_INT();

                if (api < 14)
                {
                    ::g::Fuse::Diagnostics::Error(::STRINGS[3/*"GraphicsVie...*/], NULL, ::STRINGS[4/*"C:\\Program...*/], 589, ::STRINGS[5/*"Apply"*/]);
                    uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::SurfaceView::New1());
                }
                else
                    uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::TextureView::New1());
            }
        }
        else if (uIs(contentControl, ::TYPES[47/*Fuse.Controls.ScrollView*/]))
            uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::ScrollView::New1());
        else
            uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::ContentControl::New1());
    }

    return true;
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) [instance] :496
bool NativeTemplate::HaveGraphicsViewAncestor(::g::Fuse::Node* node)
{
    if (node == NULL)
        return false;

    if (uPtr(node)->Parent() == NULL)
        return false;

    if (uIs(node, ::TYPES[32/*Fuse.Controls.NativeViewHost*/]))
        return false;

    if (uIs(uPtr(node)->Parent(), ::TYPES[45/*Fuse.Controls.GraphicsView*/]))
        return true;

    return HaveGraphicsViewAncestor(uPtr(node)->Parent());
}

// public generated NativeTemplate New() [static] :494
NativeTemplate* NativeTemplate::New1()
{
    NativeTemplate* obj1 = (NativeTemplate*)uNew(NativeTemplate_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(685)
// ----------------------------------------------------------

// internal sealed extern class RootView :685
// {
uType* RootView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RootView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.RootView", options);
    type->fp_ctor_ = (void*)RootView__New1_fn;
    ::STRINGS[6] = uString::Const("A rootview is already set");
    ::TYPES[48] = ::g::Android::android::widget::RelativeLayout_typeof();
    ::TYPES[49] = ::g::Android::android::content::Context_typeof();
    ::TYPES[50] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[51] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[52] = ::g::Android::android::view::View_typeof();
    ::TYPES[19] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[53] = ::g::Uno::Float2_typeof();
    type->SetFields(0,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::RootView, _relativeLayout), 0,
        ::g::Fuse::Android::NativeViews::NativeView_typeof(), offsetof(::g::Fuse::Android::RootView, _root), 0,
        RootView_typeof(), (uintptr_t)&::g::Fuse::Android::RootView::_singleton_, uFieldFlagsStatic);
    return type;
}

// private RootView() :690
void RootView__ctor__fn(RootView* __this)
{
    __this->ctor_();
}

// public static void ClearRoot() :755
void RootView__ClearRoot_fn()
{
    RootView::ClearRoot();
}

// private void Invalidate() :733
void RootView__Invalidate_fn(RootView* __this)
{
    __this->Invalidate();
}

// public static bool IsRoot(Fuse.Android.NativeViews.NativeView view) :760
void RootView__IsRoot_fn(::g::Fuse::Android::NativeViews::NativeView* view, bool* __retval)
{
    *__retval = RootView::IsRoot(view);
}

// private RootView New() :690
void RootView__New1_fn(RootView** __retval)
{
    *__retval = RootView::New1();
}

// private Fuse.Android.NativeViews.NativeView get_Root() :707
void RootView__get_Root_fn(RootView* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval)
{
    *__retval = __this->Root();
}

// private void set_Root(Fuse.Android.NativeViews.NativeView value) :708
void RootView__set_Root_fn(RootView* __this, ::g::Fuse::Android::NativeViews::NativeView* value)
{
    __this->Root(value);
}

// public static void SetRoot(Fuse.Android.NativeViews.NativeView view) :747
void RootView__SetRoot_fn(::g::Fuse::Android::NativeViews::NativeView* view)
{
    RootView::SetRoot(view);
}

// private static Fuse.Android.RootView get_Singleton() :744
void RootView__get_Singleton_fn(RootView** __retval)
{
    *__retval = RootView::Singleton();
}

// private void UpdateRootSize(float2 size) :723
void RootView__UpdateRootSize_fn(RootView* __this, ::g::Uno::Float2* size)
{
    __this->UpdateRootSize(*size);
}

// public static void UpdateSize(float2 size) :765
void RootView__UpdateSize_fn(::g::Uno::Float2* size)
{
    RootView::UpdateSize(*size);
}

uSStrong<RootView*> RootView::_singleton_;

// private RootView() [instance] :690
void RootView::ctor_()
{
    _relativeLayout = ::g::Fuse::Android::RootViewContainer::New13(::g::Android::android::app::Activity::GetAppActivity());
    uPtr(_relativeLayout)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(::g::Android::android::view::ViewGroupDLRLayoutParams::FILL_PARENT(), ::g::Android::android::view::ViewGroupDLRLayoutParams::FILL_PARENT()));
    uPtr(_relativeLayout)->setFocusable(true);
    uPtr(_relativeLayout)->setFocusableInTouchMode(true);
    ::g::Uno::Platform2::Application::RootView(::g::Fuse::Android::BindingView::GetNativeViewHandle(_relativeLayout));
}

// private void Invalidate() [instance] :733
void RootView::Invalidate()
{
    if (Root() != NULL)
        uPtr(uPtr(Root())->Handle())->invalidate();

    uPtr(_relativeLayout)->invalidate();
}

// private Fuse.Android.NativeViews.NativeView get_Root() [instance] :707
::g::Fuse::Android::NativeViews::NativeView* RootView::Root()
{
    return _root;
}

// private void set_Root(Fuse.Android.NativeViews.NativeView value) [instance] :708
void RootView::Root(::g::Fuse::Android::NativeViews::NativeView* value)
{
    if (_root != NULL)
        uPtr(_relativeLayout)->removeView(uPtr(_root)->Handle());

    _root = value;

    if (_root != NULL)
    {
        uPtr(_relativeLayout)->addView(uPtr(_root)->Handle());
        Invalidate();
    }
}

// private void UpdateRootSize(float2 size) [instance] :723
void RootView::UpdateRootSize(::g::Uno::Float2 size)
{
    if (Root() != NULL)
    {
        float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(uPtr(Root())->Node())->Viewport()), ::TYPES[24/*Fuse.IViewport*/]));
        ::g::Uno::Float2 pixelSize = ::g::Uno::Float2__op_Multiply1(size, density);
        uPtr(uPtr(Root())->Handle())->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19((int)pixelSize.X, (int)pixelSize.Y));
    }
}

// public static void ClearRoot() [static] :755
void RootView::ClearRoot()
{
    uPtr(RootView::Singleton())->Root(NULL);
}

// public static bool IsRoot(Fuse.Android.NativeViews.NativeView view) [static] :760
bool RootView::IsRoot(::g::Fuse::Android::NativeViews::NativeView* view)
{
    return uPtr(RootView::Singleton())->Root() == view;
}

// private RootView New() [static] :690
RootView* RootView::New1()
{
    RootView* obj2 = (RootView*)uNew(RootView_typeof());
    obj2->ctor_();
    return obj2;
}

// public static void SetRoot(Fuse.Android.NativeViews.NativeView view) [static] :747
void RootView::SetRoot(::g::Fuse::Android::NativeViews::NativeView* view)
{
    if (uPtr(RootView::Singleton())->Root() != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"A rootview ...*/]));

    uPtr(RootView::Singleton())->Root(view);
}

// public static void UpdateSize(float2 size) [static] :765
void RootView::UpdateSize(::g::Uno::Float2 size)
{
    uPtr(RootView::Singleton())->UpdateRootSize(size);
    uPtr(RootView::Singleton())->Invalidate();
}

// private static Fuse.Android.RootView get_Singleton() [static] :744
RootView* RootView::Singleton()
{
    RootView* ind1 = RootView::_singleton();
    return (ind1 != NULL) ? ind1 : (RootView*)(RootView::_singleton() = RootView::New1());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(639)
// ----------------------------------------------------------

// internal sealed extern class RootViewContainer :639
// {
::g::Android::android::view::ViewGroup_type* RootViewContainer_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RootViewContainer);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Fuse.Android.RootViewContainer", options);
    type->SetBase(::g::Android::android::widget::RelativeLayout_typeof());
    type->fp_onInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*))RootViewContainer__onInterceptTouchEvent_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))RootViewContainer__onTouchEvent_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[7] = uString::Const("com.Bindings.Binding_Fuse_Android_RootViewContainer");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[8] = uString::Const("(JLandroid/content/Context;)V");
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[18] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[52] = ::g::Android::android::view::View_typeof();
    ::TYPES[54] = ::g::Fuse::AppBase_typeof();
    ::TYPES[55] = ::g::Uno::Application_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Android::android::view::MotionEvent_typeof(), offsetof(::g::Fuse::Android::RootViewContainer, _currentEvent), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::RootViewContainer::_javaClass5_, uFieldFlagsStatic);
    return type;
}

// public RootViewContainer(Android.android.content.Context context) :643
void RootViewContainer__ctor_16_fn(RootViewContainer* __this, ::g::Android::android::content::Context* context)
{
    __this->ctor_16(context);
}

// public RootViewContainer New(Android.android.content.Context context) :643
void RootViewContainer__New13_fn(::g::Android::android::content::Context* context, RootViewContainer** __retval)
{
    *__retval = RootViewContainer::New13(context);
}

// public override sealed bool onInterceptTouchEvent(Android.android.view.MotionEvent motionEvent) :647
void RootViewContainer__onInterceptTouchEvent_fn(RootViewContainer* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    bool ret2;
    __this->_currentEvent = motionEvent;
    return *__retval = (::g::Android::android::view::ViewGroup__onInterceptTouchEvent_fn(__this, motionEvent, &ret2), ret2), void();
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent motionEvent) :653
void RootViewContainer__onTouchEvent_fn(RootViewContainer* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    bool ret3;

    if (::g::Android::java::lang::Object::op_Inequality1(__this->_currentEvent, motionEvent))
        return *__retval = false, void();

    bool result = (::g::Android::android::view::View__onTouchEvent_fn(__this, motionEvent, &ret3), ret3);
    ::g::Fuse::Node* node = __this->RootNode();

    if (node == NULL)
        return *__retval = false, void();

    ::g::Fuse::Android::InputDispatch::RaiseEvent(node, __this, motionEvent);
    return *__retval = ::g::Android::java::lang::Object::op_Equality1(__this->_currentEvent, motionEvent), void();
}

// private Fuse.Node get_RootNode() :673
void RootViewContainer__get_RootNode_fn(RootViewContainer* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RootNode();
}

jclass RootViewContainer::_javaClass5_;

// public RootViewContainer(Android.android.content.Context context) [instance] :643
void RootViewContainer::ctor_16(::g::Android::android::content::Context* context)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[7/*"com.Binding...*/];
    }

    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(RootViewContainer::_javaClass5(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        RootViewContainer::_javaClass5() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[7/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(2);
        REG_MTD(0,"__n_onInterceptTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_RootViewContainer__onInterceptTouchEvent23409);
        REG_MTD(1,"__n_onTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_RootViewContainer__onTouchEvent22991);
        COMMIT_REG_MTD(RootViewContainer::_javaClass5());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[8/*"(JLandroid/...*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject2(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak), ::g::Android::Base::Primitives::ujvalue::op_Implicit8(uPtr(context)->_GetJavaObject()));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// private Fuse.Node get_RootNode() [instance] :673
::g::Fuse::Node* RootViewContainer::RootNode()
{
    ::g::Fuse::AppBase* app = uAs< ::g::Fuse::AppBase*>(::g::Uno::Application::Current(), ::TYPES[54/*Fuse.AppBase*/]);

    if (app == NULL)
        return NULL;

    return uPtr(app)->RootNode();
}

// public RootViewContainer New(Android.android.content.Context context) [static] :643
RootViewContainer* RootViewContainer::New13(::g::Android::android::content::Context* context)
{
    RootViewContainer* obj1 = (RootViewContainer*)uNew(RootViewContainer_typeof());
    obj1->ctor_16(context);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\.cache\GeneratedCode\$.uno(7)
// -----------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template :7
// {
// static Template() :80
static void NativeStyle__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_cctor_ = NativeStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[56] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof());
    ::TYPES[57] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof());
    ::TYPES[29] = ::g::Fuse::Style_typeof();
    ::TYPES[30] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template, __parent1), 0);
    return type;
}

// public Template(Fuse.Android.NativeStyle parent) :10
void NativeStyle__Template__ctor_1_fn(NativeStyle__Template* __this, ::g::Fuse::Android::NativeStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Android.NativeStyle parent) :10
void NativeStyle__Template__New1_fn(::g::Fuse::Android::NativeStyle* parent, NativeStyle__Template** __retval)
{
    *__retval = NativeStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.GraphicsView self) :83
void NativeStyle__Template__OnApply_fn(NativeStyle__Template* __this, ::g::Fuse::Controls::GraphicsView* self)
{
    NativeStyle__Template__Template1* collection1;
    NativeStyle__Template__Template2* collection2;
    ::g::Fuse::Style* temp = ::g::Fuse::Style::New1();
    collection1 = NativeStyle__Template__Template1::New1(__this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template__Template1* temp1 = collection1;
    collection2 = NativeStyle__Template__Template2::New1(__this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    NativeStyle__Template__Template2* temp2 = collection2;
    ::g::Fuse::Themes::GraphicsStyle* temp3 = ::g::Fuse::Themes::GraphicsStyle::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Uno.UX.ITemplate*/])), (uObject*)temp2);
    uPtr(self)->AddStyleStyle(temp);
    self->AddStyleStyle(temp3);
}

// public Template(Fuse.Android.NativeStyle parent) [instance] :10
void NativeStyle__Template::ctor_1(::g::Fuse::Android::NativeStyle* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Android.NativeStyle parent) [static] :10
NativeStyle__Template* NativeStyle__Template::New1(::g::Fuse::Android::NativeStyle* parent)
{
    NativeStyle__Template* obj3 = (NativeStyle__Template*)uNew(NativeStyle__Template_typeof());
    obj3->ctor_1(parent);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\.cache\GeneratedCode\$.uno(14)
// ------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template1 :14
// {
// static Template1() :21
static void NativeStyle__Template__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template1, __parent1), 0);
    return type;
}

// public Template1(Fuse.Android.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__ctor_1_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::Android::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(Fuse.Android.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__New1_fn(::g::Fuse::Android::NativeStyle__Template* parent, NativeStyle__Template__Template1** __retval)
{
    *__retval = NativeStyle__Template__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextBlock self) :24
void NativeStyle__Template__Template1__OnApply_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::Controls::TextBlock* self)
{
    ::g::Fuse::Android::TextRenderer* temp = ::g::Fuse::Android::TextRenderer::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template1(Fuse.Android.NativeStyle.Template parent) [instance] :17
void NativeStyle__Template__Template1::ctor_1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template1 New(Fuse.Android.NativeStyle.Template parent) [static] :17
NativeStyle__Template__Template1* NativeStyle__Template__Template1::New1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template1* obj1 = (NativeStyle__Template__Template1*)uNew(NativeStyle__Template__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\.cache\GeneratedCode\$.uno(30)
// ------------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2 :30
// {
// static Template2() :69
static void NativeStyle__Template__Template2__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[58] = ::g::Fuse::Controls::PlainTextEdit_typeof();
    ::TYPES[59] = ::g::Uno::UX::IFactory_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2, __parent1), 0);
    return type;
}

// public Template2(Fuse.Android.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__ctor_1_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::Android::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(Fuse.Android.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__New1_fn(::g::Fuse::Android::NativeStyle__Template* parent, NativeStyle__Template__Template2** __retval)
{
    *__retval = NativeStyle__Template__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.PlainTextEdit self) :72
void NativeStyle__Template__Template2__OnApply_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::Controls::PlainTextEdit* self)
{
    bool ret2;
    bool ret3;
    NativeStyle__Template__Template2__Factory* temp = NativeStyle__Template__Template2__Factory::New2(__this);
    NativeStyle__Template__Template2__Factory1* temp1 = NativeStyle__Template__Template2__Factory1::New2(__this);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeEditProperty()), self, (uObject*)temp, &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeTextProperty()), self, (uObject*)temp1, &ret3);
}

// public Template2(Fuse.Android.NativeStyle.Template parent) [instance] :33
void NativeStyle__Template__Template2::ctor_1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template2 New(Fuse.Android.NativeStyle.Template parent) [static] :33
NativeStyle__Template__Template2* NativeStyle__Template__Template2::New1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template2* obj1 = (NativeStyle__Template__Template2*)uNew(NativeStyle__Template__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(799)
// ----------------------------------------------------------

// internal sealed extern class TextControlLayout :799
// {
uType* TextControlLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextControlLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextControlLayout", options);
    type->fp_ctor_ = (void*)TextControlLayout__New1_fn;
    ::STRINGS[9] = uString::Const("wrapWidth");
    ::STRINGS[10] = uString::Const("");
    ::TYPES[60] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[61] = ::g::Android::android::graphics::Typeface_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[62] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[63] = ::g::Uno::String_typeof();
    ::TYPES[64] = ::g::Android::android::text::TextUtilsDLRTruncateAt_typeof();
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[65] = ::g::Uno::Rect_typeof();
    ::TYPES[66] = ::g::Uno::Int2_typeof();
    ::TYPES[67] = ::g::Android::android::text::LayoutDLRAlignment_typeof();
    type->SetFields(0,
        ::g::Android::android::text::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _Layout), 0,
        ::g::Android::android::text::TextPaint_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _Paint), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _PixelBounds), 0);
    return type;
}

// public generated TextControlLayout() :799
void TextControlLayout__ctor__fn(TextControlLayout* __this)
{
    __this->ctor_();
}

// public void Dispose() :805
void TextControlLayout__Dispose_fn(TextControlLayout* __this)
{
    __this->Dispose();
}

// public generated Android.android.text.StaticLayout get_Layout() :802
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Android::android::text::StaticLayout** __retval)
{
    *__retval = __this->Layout();
}

// private generated void set_Layout(Android.android.text.StaticLayout value) :802
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Android::android::text::StaticLayout* value)
{
    __this->Layout(value);
}

// public void Measure(Fuse.Controls.TextControl Control, float wrapWidth) :811
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, float* wrapWidth)
{
    __this->Measure(Control, *wrapWidth);
}

// public generated TextControlLayout New() :799
void TextControlLayout__New1_fn(TextControlLayout** __retval)
{
    *__retval = TextControlLayout::New1();
}

// public generated Android.android.text.TextPaint get_Paint() :801
void TextControlLayout__get_Paint_fn(TextControlLayout* __this, ::g::Android::android::text::TextPaint** __retval)
{
    *__retval = __this->Paint();
}

// private generated void set_Paint(Android.android.text.TextPaint value) :801
void TextControlLayout__set_Paint_fn(TextControlLayout* __this, ::g::Android::android::text::TextPaint* value)
{
    __this->Paint(value);
}

// public generated Uno.Recti get_PixelBounds() :803
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->PixelBounds();
}

// private generated void set_PixelBounds(Uno.Recti value) :803
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value)
{
    __this->PixelBounds(*value);
}

// private Android.android.text.LayoutDLRAlignment TextAlignmentToAndroidLayoutAlignment(Fuse.Elements.TextAlignment textAlignment) :862
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, ::g::Android::android::text::LayoutDLRAlignment** __retval)
{
    *__retval = __this->TextAlignmentToAndroidLayoutAlignment(*textAlignment);
}

// public generated TextControlLayout() [instance] :799
void TextControlLayout::ctor_()
{
}

// public void Dispose() [instance] :805
void TextControlLayout::Dispose()
{
    Layout(NULL);
    Paint(NULL);
}

// public generated Android.android.text.StaticLayout get_Layout() [instance] :802
::g::Android::android::text::StaticLayout* TextControlLayout::Layout()
{
    return _Layout;
}

// private generated void set_Layout(Android.android.text.StaticLayout value) [instance] :802
void TextControlLayout::Layout(::g::Android::android::text::StaticLayout* value)
{
    _Layout = value;
}

// public void Measure(Fuse.Controls.TextControl Control, float wrapWidth) [instance] :811
void TextControlLayout::Measure(::g::Fuse::Controls::TextControl* Control, float wrapWidth)
{
    uString* ind1;
    bool ret3;

    if (wrapWidth < 0.0f)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[9/*"wrapWidth"*/]));

    Paint(::g::Android::android::text::TextPaint::New9());
    uPtr(Paint())->setAntiAlias(true);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), Control, &ret3), ret3))
        uPtr(Paint())->setTypeface(::g::Fuse::Android::TypefaceCache::GetTypeface(uPtr(Control)->Font()));
    else
        uPtr(Paint())->setTypeface(::g::Android::android::graphics::Typeface::DEFAULT());

    uPtr(Paint())->setTextSize(Control->FontSize() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Control->Viewport()), ::TYPES[24/*Fuse.IViewport*/])));
    ::g::Android::android::text::LayoutDLRAlignment* align = TextAlignmentToAndroidLayoutAlignment(Control->TextAlignment());
    ::g::Android::java::lang::String* text = ::g::Android::java::lang::String::op_Implicit1((ind1 = Control->RenderValue(), (ind1 != NULL) ? ind1 : ::STRINGS[10/*""*/]));
    float lineSpacing = Control->LineSpacing() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Control->Viewport()), ::TYPES[24/*Fuse.IViewport*/]));
    float desiredWidth = ::g::Android::android::text::Layout::getDesiredWidth((uObject*)text, Paint());

    if (wrapWidth == FLT_INF)
        wrapWidth = desiredWidth;

    int width = (int)::g::Uno::Math::Min1(::g::Uno::Math::Ceil1(wrapWidth), 2.14748365e+09f);

    if ((Control->TextWrapping() == 0) && (desiredWidth > wrapWidth))
    {
        int layoutWidth = (int)::g::Uno::Math::Ceil1(desiredWidth);
        Layout(::g::Android::android::text::StaticLayout::New8((uObject*)text, 0, uPtr(uPtr(Control)->RenderValue())->Length(), Paint(), layoutWidth, align, 1.0f, lineSpacing, false, ::g::Android::android::text::TextUtilsDLRTruncateAt::END(), width));
    }
    else
        Layout(::g::Android::android::text::StaticLayout::New6((uObject*)text, Paint(), width, align, 1.0f, lineSpacing, false));

    ::g::Uno::Rect bounds = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    for (int i = 0; i < uPtr(Layout())->getLineCount(); ++i)
    {
        ::g::Android::android::graphics::Rect* temp = ::g::Android::android::graphics::Rect::New5();
        uPtr(Paint())->getTextBounds(text, uPtr(Layout())->getLineStart(i), uPtr(Layout())->getLineEnd(i), temp);
        ::g::Uno::Rect lineBounds = ::g::Fuse::Android::AndroidExtensions::ToRect(temp);
        lineBounds = ::g::Uno::Rect__Translate(lineBounds, ::g::Uno::Float2__New2(uPtr(Layout())->getLineLeft(i), (float)uPtr(Layout())->getLineBaseline(i)));

        if (i == 0)
            bounds = lineBounds;
        else
            bounds = ::g::Uno::Rect__Union(bounds, lineBounds);
    }

    ::g::Uno::Int2 min = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(bounds.Minimum()));
    ::g::Uno::Int2 max = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(bounds.Maximum()));
    PixelBounds(::g::Uno::Recti__Inflate(::g::Uno::Recti__New1(min.X, min.Y, max.X, max.Y), 1));
}

// public generated Android.android.text.TextPaint get_Paint() [instance] :801
::g::Android::android::text::TextPaint* TextControlLayout::Paint()
{
    return _Paint;
}

// private generated void set_Paint(Android.android.text.TextPaint value) [instance] :801
void TextControlLayout::Paint(::g::Android::android::text::TextPaint* value)
{
    _Paint = value;
}

// public generated Uno.Recti get_PixelBounds() [instance] :803
::g::Uno::Recti TextControlLayout::PixelBounds()
{
    return _PixelBounds;
}

// private generated void set_PixelBounds(Uno.Recti value) [instance] :803
void TextControlLayout::PixelBounds(::g::Uno::Recti value)
{
    _PixelBounds = value;
}

// private Android.android.text.LayoutDLRAlignment TextAlignmentToAndroidLayoutAlignment(Fuse.Elements.TextAlignment textAlignment) [instance] :862
::g::Android::android::text::LayoutDLRAlignment* TextControlLayout::TextAlignmentToAndroidLayoutAlignment(int textAlignment)
{
    switch (textAlignment)
    {
        case 0:
            return ::g::Android::android::text::LayoutDLRAlignment::ALIGN_NORMAL();
        case 1:
            return ::g::Android::android::text::LayoutDLRAlignment::ALIGN_CENTER();
        case 2:
            return ::g::Android::android::text::LayoutDLRAlignment::ALIGN_OPPOSITE();
    }

    return ::g::Android::android::text::LayoutDLRAlignment::ALIGN_NORMAL();
}

// public generated TextControlLayout New() [static] :799
TextControlLayout* TextControlLayout::New1()
{
    TextControlLayout* obj2 = (TextControlLayout*)uNew(TextControlLayout_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(875)
// ----------------------------------------------------------

// public sealed extern class TextRenderer :875
// {
TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Android.TextRenderer", options);
    type->SetBase(::g::Fuse::Controls::Graphics::TextVisual_typeof());
    type->fp_ctor_ = (void*)TextRenderer__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextRenderer__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextRenderer__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))TextRenderer__GetMarginSize_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))TextRenderer__get_LocalRenderBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextRenderer__OnDraw_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__Fuse_Resources_ISoftDisposable_SoftDispose_fn;
    ::TYPES[68] = ::g::OpenGL::GLTextureHandle_typeof();
    ::TYPES[69] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[60] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[70] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[71] = ::g::Uno::EventHandler_typeof();
    ::TYPES[72] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[53] = ::g::Uno::Float2_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[73] = ::g::Fuse::Android::TextControlLayout_typeof();
    ::TYPES[74] = ::g::Uno::Recti_typeof();
    ::TYPES[75] = ::g::Fuse::Android::Blitter_typeof();
    ::TYPES[76] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[66] = ::g::Uno::Int2_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[63] = ::g::Uno::String_typeof();
    ::TYPES[77] = ::g::Android::android::graphics::BitmapDLRConfig_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(54,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _emitNewTexture), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _layoutValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _renderThreaded), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textLayout), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _texture), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textureVersion), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _wantedVersion), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _wrapWidth), 0);
    return type;
}

// public TextRenderer() :881
void TextRenderer__ctor_4_fn(TextRenderer* __this)
{
    __this->ctor_4();
}

// protected override sealed void Attach() :891
void TextRenderer__Attach_fn(TextRenderer* __this)
{
    ::g::Fuse::Controls::TextControl* ret2;
    ::g::Fuse::Controls::TextControl* ret3;
    ::g::Fuse::Controls::TextControl* ret4;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret2), ret2))->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler*/], (void*)TextRenderer__OnTextLayoutPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret3), ret3))->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler*/], (void*)TextRenderer__OnTextRenderPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret4), ret4))->add_ValueChanged(uDelegate::New(::TYPES[72/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextRenderer__OnValueChanged1_fn, __this));
    ::g::Fuse::Controls::Graphics::TextVisual__Attach_fn(__this);
}

// protected override sealed void Detach() :899
void TextRenderer__Detach_fn(TextRenderer* __this)
{
    ::g::Fuse::Controls::TextControl* ret5;
    ::g::Fuse::Controls::TextControl* ret6;
    ::g::Fuse::Controls::TextControl* ret7;
    ::g::Fuse::Controls::Graphics::TextVisual__Detach_fn(__this);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler*/], (void*)TextRenderer__OnTextLayoutPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler*/], (void*)TextRenderer__OnTextRenderPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->remove_ValueChanged(uDelegate::New(::TYPES[72/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextRenderer__OnValueChanged1_fn, __this));
    __this->DisposeTexture();
}

// private void DisposeTexture() :970
void TextRenderer__DisposeTexture_fn(TextRenderer* __this)
{
    __this->DisposeTexture();
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :886
void TextRenderer__Fuse_Resources_ISoftDisposable_SoftDispose_fn(TextRenderer* __this)
{
    __this->DisposeTexture();
}

// public override sealed float2 GetMarginSize(float2 fillSize, Fuse.SizeFlags fillSet) :940
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 fillSize_ = *fillSize;
    float wrapWidth = ((fillSet_ & 1) == 1) ? ::g::Uno::Math::Max1(fillSize_.X * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[24/*Fuse.IViewport*/])), 0.0f) : FLT_INF;
    __this->UpdateLayout1(wrapWidth);
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(uPtr(__this->_textLayout)->Layout())->getWidth(), (float)uPtr(uPtr(__this->_textLayout)->Layout())->getHeight()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[24/*Fuse.IViewport*/]))), void();
}

// public override sealed Uno.Rect get_LocalRenderBounds() :949
void TextRenderer__get_LocalRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(__this->_textLayout)->PixelBounds().Position()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[24/*Fuse.IViewport*/]))), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(__this->_textLayout)->PixelBounds().Size()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[24/*Fuse.IViewport*/])))), void();
}

// public TextRenderer New() :881
void TextRenderer__New1_fn(TextRenderer** __retval)
{
    *__retval = TextRenderer::New1();
}

// private void OnBitmapDraw(Fuse.DrawContext dc) :1067
void TextRenderer__OnBitmapDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->OnBitmapDraw(dc);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :1082
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->PrepareDraw();
    __this->OnBitmapDraw(dc);
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :908
void TextRenderer__OnTextLayoutPropertyChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged1(sender, args);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :914
void TextRenderer__OnTextRenderPropertyChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged1(sender, args);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :919
void TextRenderer__OnValueChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged1(sender, args);
}

// private void PrepareDraw() :978
void TextRenderer__PrepareDraw_fn(TextRenderer* __this)
{
    __this->PrepareDraw();
}

// private void SetTexture(OpenGL.GLTextureHandle newTexture) :961
void TextRenderer__SetTexture_fn(TextRenderer* __this, uint32_t* newTexture)
{
    __this->SetTexture(*newTexture);
}

// private void UpdateLayout(float wrapWidth) :925
void TextRenderer__UpdateLayout1_fn(TextRenderer* __this, float* wrapWidth)
{
    __this->UpdateLayout1(*wrapWidth);
}

// private OpenGL.GLTextureHandle UpdateTexture(Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1013
void TextRenderer__UpdateTexture_fn(TextRenderer* __this, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, uint32_t* __retval)
{
    *__retval = __this->UpdateTexture(layout, *renderColor, *pixelBounds);
}

// public TextRenderer() [instance] :881
void TextRenderer::ctor_4()
{
    _textLayout = ::g::Fuse::Android::TextControlLayout::New1();
    _emitNewTexture = true;
    _texture = ::g::OpenGL::GLTextureHandle::Zero();
    ctor_3();
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
}

// private void DisposeTexture() [instance] :970
void TextRenderer::DisposeTexture()
{
    SetTexture(::g::OpenGL::GLTextureHandle::Zero());
    _textureVersion = 0ULL;
    _wantedVersion = 0ULL;
    _emitNewTexture = true;
}

// private void OnBitmapDraw(Fuse.DrawContext dc) [instance] :1067
void TextRenderer::OnBitmapDraw(::g::Fuse::DrawContext* dc)
{
    if ((_textureVersion != _wantedVersion) || ::g::OpenGL::GLTextureHandle::op_Equality(_texture, ::g::OpenGL::GLTextureHandle::Zero()))
        return;

    ::g::Uno::Int2 pixelSize = uPtr(_textLayout)->PixelBounds().Size();
    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[24/*Fuse.IViewport*/])));
    ::g::Uno::Float4x4 m = uPtr(dc)->GetLocalToClipTransform(this);
    uPtr(::g::Fuse::Android::Blitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(_texture, pixelSize, 1, 3), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[24/*Fuse.IViewport*/]))), pointSize, m);
    ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero());
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :908
void TextRenderer::OnTextLayoutPropertyChanged1(uObject* sender, ::g::Uno::EventArgs* args)
{
    _layoutValid = false;
    _emitNewTexture = true;
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :914
void TextRenderer::OnTextRenderPropertyChanged1(uObject* sender, ::g::Uno::EventArgs* args)
{
    _emitNewTexture = true;
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :919
void TextRenderer::OnValueChanged1(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    _layoutValid = false;
    _emitNewTexture = true;
}

// private void PrepareDraw() [instance] :978
void TextRenderer::PrepareDraw()
{
    ::g::Fuse::Controls::TextControl* ret8;
    ::g::Fuse::Controls::TextControl* ret9;
    UpdateLayout1(ActualSize().X * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[24/*Fuse.IViewport*/])));

    if (!_emitNewTexture)
        return;

    _wantedVersion++;
    ::g::Uno::Recti pixelBounds = uPtr(_textLayout)->PixelBounds();

    if ((pixelBounds.Size().X <= 0) || (pixelBounds.Size().Y <= 0))
    {
        SetTexture(::g::OpenGL::GLTextureHandle::Zero());
        return;
    }

    if (_renderThreaded)
    {
        TextRenderer__BackgroundRender* backgroundRender = TextRenderer__BackgroundRender::New1(this, _wantedVersion, uPtr(_textLayout)->Layout(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret8), ret8))->RenderColor(), pixelBounds);
        ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__UpdateTextureAsync_fn, backgroundRender));
    }
    else
    {
        SetTexture(UpdateTexture(uPtr(_textLayout)->Layout(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret9), ret9))->RenderColor(), pixelBounds));
        _textureVersion = _wantedVersion;
    }

    _emitNewTexture = false;
}

// private void SetTexture(OpenGL.GLTextureHandle newTexture) [instance] :961
void TextRenderer::SetTexture(uint32_t newTexture)
{
    if (::g::OpenGL::GLTextureHandle::op_Inequality(_texture, ::g::OpenGL::GLTextureHandle::Zero()))
        ::g::OpenGL::GL::DeleteTexture(_texture);

    _texture = newTexture;
    InvalidateVisual();
}

// private void UpdateLayout(float wrapWidth) [instance] :925
void TextRenderer::UpdateLayout1(float wrapWidth)
{
    ::g::Fuse::Controls::TextControl* ret10;
    ::g::Fuse::Controls::TextControl* ret11;
    ::g::Fuse::Controls::TextControl* ret12;

    if (_layoutValid && (_wrapWidth == wrapWidth))
        return;

    uPtr(_textLayout)->Measure((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret10), ret10), wrapWidth);
    _renderThreaded = (::g::Uno::String::op_Inequality(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret11), ret11))->RenderValue(), NULL) && (uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret12), ret12))->RenderValue())->Length() > 50));
    _wrapWidth = wrapWidth;
    _layoutValid = true;
    _emitNewTexture = true;
    InvalidateRenderBounds();
}

// private OpenGL.GLTextureHandle UpdateTexture(Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [instance] :1013
uint32_t TextRenderer::UpdateTexture(::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    ::g::Android::android::graphics::Bitmap* bitmap = ::g::Android::android::graphics::Bitmap::createBitmap8(pixelBounds.Size().X, pixelBounds.Size().Y, ::g::Android::android::graphics::BitmapDLRConfig::ARGB_8888());
    ::g::Android::android::graphics::Canvas* canvas = ::g::Android::android::graphics::Canvas::New6(bitmap);
    canvas->translate((float)-pixelBounds.Position().X, (float)-pixelBounds.Position().Y);
    uPtr(bitmap)->eraseColor(::g::Fuse::Android::Helpers::EncodeColor(::g::Uno::Float4__New1(0.0f)));
    uPtr(uPtr(layout)->getPaint())->setColor(::g::Fuse::Android::Helpers::EncodeColor(renderColor));
    layout->j_draw(canvas);
    uint32_t texture = ::g::OpenGL::GL::CreateTexture();
    ::g::OpenGL::GL::BindTexture(3553, texture);
    ::g::Android::android::opengl::GLUtils::texImage2D(3553, 0, bitmap, 0);
    bitmap->recycle();
    return texture;
}

// public TextRenderer New() [static] :881
TextRenderer* TextRenderer::New1()
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(286)
// ----------------------------------------------------------

// private sealed class InputDispatch.TouchListener :286
// {
InputDispatch__TouchListener_type* InputDispatch__TouchListener_typeof()
{
    static uSStrong<InputDispatch__TouchListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(InputDispatch__TouchListener);
    options.TypeSize = sizeof(InputDispatch__TouchListener_type);
    type = (InputDispatch__TouchListener_type*)uClassType::New("Fuse.Android.InputDispatch.TouchListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_ctor_ = (void*)InputDispatch__TouchListener__New5_fn;
    type->interface2.fp_onTouch = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))InputDispatch__TouchListener__onTouch_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[11] = uString::Const("com.Bindings.Binding_Fuse_Android_InputDispatch_TouchListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(InputDispatch__TouchListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(InputDispatch__TouchListener_type, interface1),
        ::g::Android::android::view::ViewDLROnTouchListener_typeof(), offsetof(InputDispatch__TouchListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch__TouchListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public generated TouchListener() :286
void InputDispatch__TouchListener__ctor_4_fn(InputDispatch__TouchListener* __this)
{
    __this->ctor_4();
}

// public generated TouchListener New() :286
void InputDispatch__TouchListener__New5_fn(InputDispatch__TouchListener** __retval)
{
    *__retval = InputDispatch__TouchListener::New5();
}

// public bool onTouch(Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :290
void InputDispatch__TouchListener__onTouch_fn(InputDispatch__TouchListener* __this, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    *__retval = __this->onTouch(view, motionEvent);
}

jclass InputDispatch__TouchListener::_javaClass2_;

// public generated TouchListener() [instance] :286
void InputDispatch__TouchListener::ctor_4()
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[11/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(InputDispatch__TouchListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        InputDispatch__TouchListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[11/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTouch","(JLandroid/view/View;Landroid/view/MotionEvent;JJ)Z",Binding_Fuse_Android_InputDispatch_TouchListener__onTouch22729);
        COMMIT_REG_MTD(InputDispatch__TouchListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// public bool onTouch(Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [instance] :290
bool InputDispatch__TouchListener::onTouch(::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    ::g::Fuse::Node* node = ::g::Fuse::Android::InputDispatch::GetNode(view);

    if (node == NULL)
        return false;

    ::g::Fuse::Android::InputDispatch::RaiseEvent(node, view, motionEvent);
    return false;
}

// public generated TouchListener New() [static] :286
InputDispatch__TouchListener* InputDispatch__TouchListener::New5()
{
    InputDispatch__TouchListener* obj1 = (InputDispatch__TouchListener*)uNew(InputDispatch__TouchListener_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(1134)
// -----------------------------------------------------------

// internal static extern class TypefaceCache :1134
// {
// static TypefaceCache() :1134
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[78/*Uno.Collections.Dictionary<string, Android.android.graphics.Typeface>*/]));
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.TypefaceCache", options);
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    ::STRINGS[12] = uString::Const("/tempFont");
    ::TYPES[78] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Android::android::graphics::Typeface_typeof());
    ::TYPES[79] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[80] = ::g::Fuse::Font_typeof();
    ::TYPES[81] = ::g::Uno::BundleFile_typeof();
    ::TYPES[82] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Android::android::graphics::Typeface_typeof()), (uintptr_t)&::g::Fuse::Android::TypefaceCache::_typefaces_, uFieldFlagsStatic);
    return type;
}

// public static Android.android.graphics.Typeface GetTypeface(Fuse.Font font) :1139
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Android::android::graphics::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Android.android.graphics.Typeface GetTypefaceFromBundleFile(Uno.BundleFile file) :1147
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::BundleFile* file, ::g::Android::android::graphics::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Android.android.graphics.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :1161
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Android::android::graphics::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Android.android.graphics.Typeface GetTypeface(Fuse.Font font) [static] :1139
::g::Android::android::graphics::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    TypefaceCache_typeof()->Init();

    if (uIs(uPtr(font)->File(), ::TYPES[79/*Uno.UX.BundleFileSource*/]))
        return TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->File(), ::TYPES[79/*Uno.UX.BundleFileSource*/]))->BundleFile);

    return TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->File());
}

// private static Android.android.graphics.Typeface GetTypefaceFromBundleFile(Uno.BundleFile file) [static] :1147
::g::Android::android::graphics::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::BundleFile* file)
{
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Android::android::graphics::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->Name(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->Name(), &ret2), ret2);

    ::g::Android::android::content::res::AssetManager* assetManager = uPtr(::g::Android::android::app::Activity::GetAppActivity())->getAssets();
    ::g::Android::android::graphics::Typeface* typeface = ::g::Android::android::graphics::Typeface::createFromAsset(assetManager, ::g::Android::java::lang::String::op_Implicit1(uPtr(file)->Name()));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), file->Name(), typeface);
    return typeface;
}

// private static Android.android.graphics.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :1161
::g::Android::android::graphics::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Android::android::graphics::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret4), ret4);

    uArray* data = uPtr(fileSource)->ReadAllBytes();
    uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[12/*"/tempFont"*/]);
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    ::g::Android::android::graphics::Typeface* typeface = ::g::Android::android::graphics::Typeface::createFromFile1(::g::Android::java::lang::String::op_Implicit1(path));
    ::g::Uno::IO::File::Delete(path);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), fileSource->Name, typeface);
    return typeface;
}
// }

}}} // ::g::Fuse::Android
