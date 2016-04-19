// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.content.res.ColorStateList.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.BitmapFactory.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.graphics.drawable.LayerDrawable.h>
#include <Android.android.graphics.drawable.ShapeDrawable.h>
#include <Android.android.graphics.drawable.shapes.ArcShape.h>
#include <Android.android.graphics.drawable.shapes.RoundRectShape.h>
#include <Android.android.graphics.drawable.shapes.Shape.h>
#include <Android.android.graphics.Matrix.h>
#include <Android.android.graphics.Paint.h>
#include <Android.android.graphics.PaintDLRStyle.h>
#include <Android.android.graphics.PorterDuffDLRMode.h>
#include <Android.android.graphics.RectF.h>
#include <Android.android.graphics.Typeface.h>
#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.os.IBinder.h>
#include <Android.android.text.Editable.h>
#include <Android.android.text.Layout.h>
#include <Android.android.text.StaticLayout.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.util.TypedValue.h>
#include <Android.android.view.Gravity.h>
#include <Android.android.view.inputmethod.InputMethodManager.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewDLRMeasureSpec.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.webkit.WebChromeClient.h>
#include <Android.android.webkit.WebSettings.h>
#include <Android.android.webkit.WebView.h>
#include <Android.android.webkit.WebViewClient.h>
#include <Android.android.widget.AbsSeekBar.h>
#include <Android.android.widget.Button.h>
#include <Android.android.widget.CompoundButton.h>
#include <Android.android.widget.EditText.h>
#include <Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <Android.android.widget.ImageView.h>
#include <Android.android.widget.ImageViewDLRScaleType.h>
#include <Android.android.widget.ProgressBar.h>
#include <Android.android.widget.RelativeLayout.h>
#include <Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <Android.android.widget.SeekBar.h>
#include <Android.android.widget.Switch.h>
#include <Android.android.widget.TextView.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Versions.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_text_Editable.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.java.io.InputStream.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.reflect.AccessibleObject.h>
#include <Android.java.lang.reflect.Field.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.java.lang.Thread.h>
#include <Android.java.net.URL.h>
#include <Android.java.util.Observable.h>
#include <Android.java.util.Observer.h>
#include <Android.Runtime.FloatArray.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Android.Runtime.UnoHelper.h>
#include <Fuse.Android.Controls.AndroidSeekBar.h>
#include <Fuse.Android.Controls.BitmapFactory.h>
#include <Fuse.Android.Controls.Button.h>
#include <Fuse.Android.Controls.CheckBox.h>
#include <Fuse.Android.Controls.Circle.h>
#include <Fuse.Android.Controls.CompoundButton.h>
#include <Fuse.Android.Controls.CompoundButton.Listener.h>
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Android.Controls.EditorActionArgs.h>
#include <Fuse.Android.Controls.EditorActionHandler.h>
#include <Fuse.Android.Controls.EditorActionListener.h>
#include <Fuse.Android.Controls.Element.h>
#include <Fuse.Android.Controls.FocusManager.h>
#include <Fuse.Android.Controls.Image.h>
#include <Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h>
#include <Fuse.Android.Controls.Image.ImageLoader.h>
#include <Fuse.Android.Controls.JsResultHandler.h>
#include <Fuse.Android.Controls.MapView.h>
#include <Fuse.Android.Controls.PlainTextEdit.h>
#include <Fuse.Android.Controls.ProgressChangedHandler.h>
#include <Fuse.Android.Controls.ProgressChangedListener.h>
#include <Fuse.Android.Controls.RadioButton.h>
#include <Fuse.Android.Controls.Rectangle.h>
#include <Fuse.Android.Controls.SeekBar.h>
#include <Fuse.Android.Controls.Shape-1.h>
#include <Fuse.Android.Controls.Switch.h>
#include <Fuse.Android.Controls.TextChangedHandler.h>
#include <Fuse.Android.Controls.TextChangedListener.h>
#include <Fuse.Android.Controls.TextEdit.h>
#include <Fuse.Android.Controls.TextView.h>
#include <Fuse.Android.Controls.TextViewBase-1.h>
#include <Fuse.Android.Controls.ToggleButton.h>
#include <Fuse.Android.Controls.WebChromeClient.h>
#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.Controls.WebViewClient.h>
#include <Fuse.Android.FocusChangedHandler.h>
#include <Fuse.Android.FocusChangedListener.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.NativeViews.LeafNativeView.h>
#include <Fuse.Android.NativeViews.NativeView.h>
#include <Fuse.Android.TextControlLayout.h>
#include <Fuse.Android.TypefaceCache.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Font.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.SizeFlags.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.TextInputHint.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
//~
JNFUN(jboolean,Binding_Fuse_Android_Controls_AndroidSeekBar__onTouchEvent24551,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::android::widget::AbsSeekBar*);
    JARG_TO_UNO(arg1,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onTouchEvent(tmparg1);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_Controls_EditorActionListener__onEditorAction26520,jlong ujPtr, jobject arg0, jint arg1, jobject arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::android::widget::TextView*,((::g::Android::android::widget::TextView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::widget::TextView_typeof(), false, true, true)));
    JARG_TO_UNO(arg5,::g::Android::android::view::KeyEvent*,((::g::Android::android::view::KeyEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg2, (uType*)::g::Android::android::view::KeyEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)::g::Android::android::widget::TextViewDLROnEditorActionListener::onEditorAction(uInterface(uPtr, ::g::Android::android::widget::TextViewDLROnEditorActionListener_typeof()), tmparg3, ((int)arg1), tmparg5);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_Controls_WebViewClient__shouldOverrideUrlLoading24355,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->shouldOverrideUrlLoading(tmparg2, tmparg3);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_CompoundButton_Listener__onCheckedChanged24924,jlong ujPtr, jobject arg0, jboolean arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::android::widget::CompoundButton*,((::g::Android::android::widget::CompoundButton*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_android_widget_CompoundButton_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener::onCheckedChanged(uInterface(uPtr, ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener_typeof()), tmparg2, ((bool)arg1));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_Image_ImageLoader_BitmapLoader__run31342,jlong ujPtr) {
    INITCALLBACK(uPtr,uObject*);
    JTRY
    ::g::Android::java::lang::Runnable::run(uInterface(uPtr, ::g::Android::java::lang::Runnable_typeof()));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_JsResultHandler__update38392,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::java::util::Observable*,((::g::Android::java::util::Observable*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::util::Observable_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::Object*,((::g::Android::java::lang::Object*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::Object_typeof(), false, true, true)));
    JTRY
    ::g::Android::java::util::Observer::update(uInterface(uPtr, ::g::Android::java::util::Observer_typeof()), tmparg2, tmparg3);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_ProgressChangedListener__onProgressChanged26181,jlong ujPtr, jobject arg0, jint arg1, jboolean arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::android::widget::SeekBar*,((::g::Android::android::widget::SeekBar*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::widget::SeekBar_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onProgressChanged(uInterface(uPtr, ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof()), tmparg3, ((int)arg1), ((bool)arg2));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_ProgressChangedListener__onStartTrackingTouch26182,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::widget::SeekBar*,((::g::Android::android::widget::SeekBar*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::widget::SeekBar_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch(uInterface(uPtr, ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_ProgressChangedListener__onStopTrackingTouch26183,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::widget::SeekBar*,((::g::Android::android::widget::SeekBar*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::widget::SeekBar_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch(uInterface(uPtr, ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_TextChangedListener__afterTextChanged20153,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_android_text_Editable_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::text::TextWatcher::afterTextChanged(uInterface(uPtr, ::g::Android::android::text::TextWatcher_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_TextChangedListener__beforeTextChanged20151,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg4,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::text::TextWatcher::beforeTextChanged(uInterface(uPtr, ::g::Android::android::text::TextWatcher_typeof()), tmparg4, ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_TextChangedListener__onTextChanged20152,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg4,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::text::TextWatcher::onTextChanged(uInterface(uPtr, ::g::Android::android::text::TextWatcher_typeof()), tmparg4, ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebChromeClient__onProgressChanged24000,jlong ujPtr, jobject arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebChromeClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JTRY
    uPtr->onProgressChanged(tmparg2, ((int)arg1));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebViewClient__onPageFinished24357,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    uPtr->onPageFinished(tmparg2, tmparg3);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebViewClient__onPageStarted24356,jlong ujPtr, jobject arg0, jobject arg1, jobject arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg3,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg4,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JARG_TO_UNO(arg5,::g::Android::android::graphics::Bitmap*,((::g::Android::android::graphics::Bitmap*)::g::Android::Base::Wrappers::JWrapper::New2(arg2, (uType*)::g::Android::android::graphics::Bitmap_typeof(), false, true, true)));
    JTRY
    uPtr->onPageStarted(tmparg3, tmparg4, tmparg5);
    JCATCH
}
static uString* STRINGS[29];
static uType* TYPES[112];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1254)
// --------------------------------------------------------------------

// internal sealed extern class AndroidSeekBar :1254
// {
::g::Android::android::view::View_type* AndroidSeekBar_typeof()
{
    static uSStrong< ::g::Android::android::view::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AndroidSeekBar);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Fuse.Android.Controls.AndroidSeekBar", options);
    type->SetBase(::g::Android::android::widget::SeekBar_typeof());
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))AndroidSeekBar__onTouchEvent_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[0] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_AndroidSeekBar");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(JLandroid/content/Context;)V");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[3] = ::g::Uno::Func1_typeof()->MakeType(::g::Android::android::view::MotionEvent_typeof(), ::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5,
        ::g::Uno::Func1_typeof()->MakeType(::g::Android::android::view::MotionEvent_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Android::Controls::AndroidSeekBar, _touchCallback), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::AndroidSeekBar::_javaClass6_, uFieldFlagsStatic);
    return type;
}

// public AndroidSeekBar(Android.android.content.Context arg0, Uno.Func<Android.android.view.MotionEvent, bool> touchCallback) :1258
void AndroidSeekBar__ctor_20_fn(AndroidSeekBar* __this, ::g::Android::android::content::Context* arg0, uDelegate* touchCallback)
{
    __this->ctor_20(arg0, touchCallback);
}

// public AndroidSeekBar New(Android.android.content.Context arg0, Uno.Func<Android.android.view.MotionEvent, bool> touchCallback) :1258
void AndroidSeekBar__New17_fn(::g::Android::android::content::Context* arg0, uDelegate* touchCallback, AndroidSeekBar** __retval)
{
    *__retval = AndroidSeekBar::New17(arg0, touchCallback);
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent motionEvent) :1262
void AndroidSeekBar__onTouchEvent_fn(AndroidSeekBar* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    bool ret2;
    bool ret3;
    ::g::Android::android::widget::AbsSeekBar__onTouchEvent_fn(__this, motionEvent, &ret2);
    return *__retval = (uPtr(__this->_touchCallback)->Invoke(&ret3, 1, motionEvent), ret3), void();
}

jclass AndroidSeekBar::_javaClass6_;

// public AndroidSeekBar(Android.android.content.Context arg0, Uno.Func<Android.android.view.MotionEvent, bool> touchCallback) [instance] :1258
void AndroidSeekBar::ctor_20(::g::Android::android::content::Context* arg0, uDelegate* touchCallback)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[0/*"com.Binding...*/];
    }

    ctor_19(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(AndroidSeekBar::_javaClass6(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        AndroidSeekBar::_javaClass6() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_Controls_AndroidSeekBar__onTouchEvent24551);
        COMMIT_REG_MTD(AndroidSeekBar::_javaClass6());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(JLandroid/...*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject2(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak), ::g::Android::Base::Primitives::ujvalue::op_Implicit8(uPtr(arg0)->_GetJavaObject()));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _touchCallback = touchCallback;
}

// public AndroidSeekBar New(Android.android.content.Context arg0, Uno.Func<Android.android.view.MotionEvent, bool> touchCallback) [static] :1258
AndroidSeekBar* AndroidSeekBar::New17(::g::Android::android::content::Context* arg0, uDelegate* touchCallback)
{
    AndroidSeekBar* obj1 = (AndroidSeekBar*)uNew(AndroidSeekBar_typeof());
    obj1->ctor_20(arg0, touchCallback);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(730)
// -------------------------------------------------------------------

// internal static extern class BitmapFactory :730
// {
// static BitmapFactory() :730
static void BitmapFactory__cctor__fn(uType* __type)
{
    BitmapFactory::_bitmapCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[4/*Uno.Collections.Dictionary<string, Android.android.graphics.Bitmap>*/]));
}

uClassType* BitmapFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Controls.BitmapFactory", options);
    type->fp_cctor_ = BitmapFactory__cctor__fn;
    ::STRINGS[3] = uString::Const("/tempImage");
    ::TYPES[4] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Android::android::graphics::Bitmap_typeof());
    ::TYPES[5] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Android::android::graphics::Bitmap_typeof()), (uintptr_t)&::g::Fuse::Android::Controls::BitmapFactory::_bitmapCache_, uFieldFlagsStatic);
    return type;
}

// public static Android.android.graphics.Bitmap GetBitmap(Uno.UX.FileSource file) :739
void BitmapFactory__GetBitmap_fn(::g::Uno::UX::FileSource* file, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = BitmapFactory::GetBitmap(file);
}

// private static Android.android.graphics.Bitmap GetBitmapFromBundleFile(Uno.UX.BundleFileSource bundleFile) :769
void BitmapFactory__GetBitmapFromBundleFile_fn(::g::Uno::UX::BundleFileSource* bundleFile, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = BitmapFactory::GetBitmapFromBundleFile(bundleFile);
}

// private static Android.android.graphics.Bitmap GetBitmapFromFileSource(Uno.UX.FileSource file) :749
void BitmapFactory__GetBitmapFromFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = BitmapFactory::GetBitmapFromFileSource(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> BitmapFactory::_bitmapCache_;

// public static Android.android.graphics.Bitmap GetBitmap(Uno.UX.FileSource file) [static] :739
::g::Android::android::graphics::Bitmap* BitmapFactory::GetBitmap(::g::Uno::UX::FileSource* file)
{
    BitmapFactory_typeof()->Init();

    if (uIs(file, ::TYPES[5/*Uno.UX.BundleFileSource*/]))
        return BitmapFactory::GetBitmapFromBundleFile(uCast< ::g::Uno::UX::BundleFileSource*>(file, ::TYPES[5/*Uno.UX.BundleFileSource*/]));

    return BitmapFactory::GetBitmapFromFileSource(file);
}

// private static Android.android.graphics.Bitmap GetBitmapFromBundleFile(Uno.UX.BundleFileSource bundleFile) [static] :769
::g::Android::android::graphics::Bitmap* BitmapFactory::GetBitmapFromBundleFile(::g::Uno::UX::BundleFileSource* bundleFile)
{
    BitmapFactory_typeof()->Init();
    bool ret1;
    ::g::Android::android::graphics::Bitmap* ret2;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BitmapFactory::_bitmapCache()), uPtr(bundleFile)->Name, &ret1), ret1))
    {
        ::g::Android::android::content::res::AssetManager* assetManager = uPtr(::g::Android::android::app::Activity::GetAppActivity())->getAssets();
        ::g::Android::java::io::InputStream* stream = uPtr(assetManager)->open(::g::Android::java::lang::String::op_Implicit1(uPtr(bundleFile)->Name));
        ::g::Android::android::graphics::Bitmap* bitmap = ::g::Android::android::graphics::BitmapFactory::decodeStream(stream);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BitmapFactory::_bitmapCache()), bundleFile->Name, bitmap);
        uPtr(stream)->close();
        return bitmap;
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BitmapFactory::_bitmapCache()), uPtr(bundleFile)->Name, &ret2), ret2);
}

// private static Android.android.graphics.Bitmap GetBitmapFromFileSource(Uno.UX.FileSource file) [static] :749
::g::Android::android::graphics::Bitmap* BitmapFactory::GetBitmapFromFileSource(::g::Uno::UX::FileSource* file)
{
    BitmapFactory_typeof()->Init();
    bool ret3;
    ::g::Android::android::graphics::Bitmap* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BitmapFactory::_bitmapCache()), uPtr(file)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BitmapFactory::_bitmapCache()), uPtr(file)->Name, &ret4), ret4);

    uArray* data = uPtr(file)->ReadAllBytes();
    uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[3/*"/tempImage"*/]);
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    ::g::Android::android::graphics::Bitmap* bitmap = ::g::Android::android::graphics::BitmapFactory::decodeFile(::g::Android::java::lang::String::op_Implicit1(path));
    ::g::Uno::IO::File::Delete(path);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BitmapFactory::_bitmapCache()), file->Name, bitmap);
    return bitmap;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(793)
// -------------------------------------------------------------------

// private sealed class Image.ImageLoader.BitmapLoader :793
// {
Image__ImageLoader__BitmapLoader_type* Image__ImageLoader__BitmapLoader_typeof()
{
    static uSStrong<Image__ImageLoader__BitmapLoader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Image__ImageLoader__BitmapLoader);
    options.TypeSize = sizeof(Image__ImageLoader__BitmapLoader_type);
    type = (Image__ImageLoader__BitmapLoader_type*)uClassType::New("Fuse.Android.Controls.Image.ImageLoader.BitmapLoader", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_run = (void(*)(uObject*))Image__ImageLoader__BitmapLoader__Android_java_lang_Runnable_run_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[4] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_Image_ImageLoader_BitmapLoader");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[7] = ::g::Android::java::io::InputStream_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Android::android::graphics::Bitmap_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Image__ImageLoader__BitmapLoader_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Image__ImageLoader__BitmapLoader_type, interface1),
        ::g::Android::java::lang::Runnable_typeof(), offsetof(Image__ImageLoader__BitmapLoader_type, interface2));
    type->SetFields(5,
        ::g::Android::android::graphics::Bitmap_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader, _bitmap), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Android::android::graphics::Bitmap_typeof()), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader, _doneCallback), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader, _url), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public BitmapLoader(string url, Uno.Action<Android.android.graphics.Bitmap> doneCallback) :800
void Image__ImageLoader__BitmapLoader__ctor_4_fn(Image__ImageLoader__BitmapLoader* __this, uString* url, uDelegate* doneCallback)
{
    __this->ctor_4(url, doneCallback);
}

// private void Android.java.lang.Runnable.run() :807
void Image__ImageLoader__BitmapLoader__Android_java_lang_Runnable_run_fn(Image__ImageLoader__BitmapLoader* __this)
{
    try
    {
        ::g::Android::java::io::InputStream* stream = uCast< ::g::Android::java::io::InputStream*>(::g::Android::java::net::URL::New6(::g::Android::java::lang::String::op_Implicit1(__this->_url))->getContent(), ::TYPES[7/*Android.java.io.InputStream*/]);
        __this->_bitmap = ::g::Android::android::graphics::BitmapFactory::decodeStream(stream);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    uPtr(::g::Android::android::app::Activity::GetAppActivity())->runOnUiThread(::g::Android::Runtime::UnoHelper::RunnableFromAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Image__ImageLoader__BitmapLoader__Done_fn, __this)));
}

// private void Done() :821
void Image__ImageLoader__BitmapLoader__Done_fn(Image__ImageLoader__BitmapLoader* __this)
{
    __this->Done();
}

// public BitmapLoader New(string url, Uno.Action<Android.android.graphics.Bitmap> doneCallback) :800
void Image__ImageLoader__BitmapLoader__New5_fn(uString* url, uDelegate* doneCallback, Image__ImageLoader__BitmapLoader** __retval)
{
    *__retval = Image__ImageLoader__BitmapLoader::New5(url, doneCallback);
}

jclass Image__ImageLoader__BitmapLoader::_javaClass2_;

// public BitmapLoader(string url, Uno.Action<Android.android.graphics.Bitmap> doneCallback) [instance] :800
void Image__ImageLoader__BitmapLoader::ctor_4(uString* url, uDelegate* doneCallback)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[4/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(Image__ImageLoader__BitmapLoader::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        Image__ImageLoader__BitmapLoader::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[4/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_run","(J)V",Binding_Fuse_Android_Controls_Image_ImageLoader_BitmapLoader__run31342);
        COMMIT_REG_MTD(Image__ImageLoader__BitmapLoader::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _url = url;
    _doneCallback = doneCallback;
}

// private void Done() [instance] :821
void Image__ImageLoader__BitmapLoader::Done()
{
    if (::g::Uno::Delegate::op_Inequality(_doneCallback, NULL))
        uPtr(_doneCallback)->InvokeVoid(_bitmap);
}

// public BitmapLoader New(string url, Uno.Action<Android.android.graphics.Bitmap> doneCallback) [static] :800
Image__ImageLoader__BitmapLoader* Image__ImageLoader__BitmapLoader::New5(uString* url, uDelegate* doneCallback)
{
    Image__ImageLoader__BitmapLoader* obj1 = (Image__ImageLoader__BitmapLoader*)uNew(Image__ImageLoader__BitmapLoader_typeof());
    obj1->ctor_4(url, doneCallback);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(39)
// ------------------------------------------------------------------

// public sealed extern class Button :39
// {
// static Button() :39
static void Button__cctor_1_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    Button::TextColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[11/*Fuse.StyleProperty<Fuse.Android.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[12/*Uno.Action<Fuse.Android.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret2), ret2);
}

::g::Fuse::Android::Controls::Control_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Control_type);
    type = (::g::Fuse::Android::Controls::Control_type*)uClassType::New("Fuse.Android.Controls.Button", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Button_typeof()));
    type->fp_ctor_ = (void*)Button__New1_fn;
    type->fp_cctor_ = Button__cctor_1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))Button__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))Button__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))Button__Detach_fn;
    ::STRINGS[6] = uString::Const("");
    ::TYPES[11] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(Button_typeof());
    ::TYPES[13] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[14] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Button_typeof());
    ::TYPES[15] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    ::TYPES[18] = ::g::Android::android::view::View_typeof();
    ::TYPES[19] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[20] = ::g::Android::java::lang::CharSequence_typeof();
    type->SetFields(55,
        ::g::Android::android::widget::Button_typeof(), offsetof(::g::Fuse::Android::Controls::Button, _buttonView), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Android::Controls::Button::TextColorProperty_, uFieldFlagsStatic);
    return type;
}

// public generated Button() :39
void Button__ctor_3_fn(Button* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :81
void Button__Attach_fn(Button* __this)
{
    uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->add_TextChanged(uDelegate::New(::TYPES[15/*Uno.UX.ValueChangedHandler<string>*/], (void*)Button__OnTextChanged_fn, __this));
    Button::OnButtonPropertyChanged(__this);
    __this->SetText(uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->Text());
}

// internal override sealed Android.android.view.View CreateInternal() :68
void Button__CreateInternal_fn(Button* __this, ::g::Android::android::view::View** __retval)
{
    if (::g::Android::java::lang::Object::op_Equality1(__this->_buttonView, NULL))
    {
        __this->_buttonView = ::g::Android::android::widget::Button::New13(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_buttonView)->setHorizontallyScrolling(false);
        uPtr(__this->_buttonView)->setEllipsize(NULL);
    }

    return *__retval = __this->_buttonView, void();
}

// protected override sealed void Detach() :88
void Button__Detach_fn(Button* __this)
{
    uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->remove_TextChanged(uDelegate::New(::TYPES[15/*Uno.UX.ValueChangedHandler<string>*/], (void*)Button__OnTextChanged_fn, __this));
}

// public generated Button New() :39
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// protected static void OnButtonPropertyChanged(Fuse.Android.Controls.Button t) :59
void Button__OnButtonPropertyChanged_fn(Button* t)
{
    Button::OnButtonPropertyChanged(t);
}

// protected void OnTextChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :122
void Button__OnTextChanged_fn(Button* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnTextChanged(sender, args);
}

// private void SetText(string value) :127
void Button__SetText_fn(Button* __this, uString* value)
{
    __this->SetText(value);
}

// public float4 get_TextColor() :43
void Button__get_TextColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :44
void Button__set_TextColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Button::TextColorProperty_;

// public generated Button() [instance] :39
void Button::ctor_3()
{
    ctor_2();
}

// protected void OnTextChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :122
void Button::OnTextChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uString* ret3;
    SetText((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret3), ret3));
}

// private void SetText(string value) [instance] :127
void Button::SetText(uString* value)
{
    uObject* charSequence = (uObject*)::g::Android::java::lang::String::op_Implicit1((value != NULL) ? value : ::STRINGS[6/*""*/]);
    uPtr(_buttonView)->setText(charSequence);
}

// public float4 get_TextColor() [instance] :43
::g::Uno::Float4 Button::TextColor()
{
    ::g::Uno::Float4 ret4;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::TextColorProperty()), this, &ret4), ret4);
}

// public void set_TextColor(float4 value) [instance] :44
void Button::TextColor(::g::Uno::Float4 value)
{
    bool ret5;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::TextColorProperty()), this, uCRef(value), &ret5);
}

// public generated Button New() [static] :39
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_3();
    return obj1;
}

// protected static void OnButtonPropertyChanged(Fuse.Android.Controls.Button t) [static] :59
void Button::OnButtonPropertyChanged(Button* t)
{
    Button_typeof()->Init();
    uPtr(t)->CreateInternal();
    uPtr(t->_buttonView)->setTextColor1(::g::Fuse::Android::Helpers::EncodeColor(t->TextColor()));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(278)
// -------------------------------------------------------------------

// public sealed extern class CheckBox :278
// {
::g::Fuse::Android::Controls::CompoundButton_type* CheckBox_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.ObjectSize = sizeof(CheckBox);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::CompoundButton_type);
    type = (::g::Fuse::Android::Controls::CompoundButton_type*)uClassType::New("Fuse.Android.Controls.CheckBox", options);
    type->SetBase(::g::Fuse::Android::Controls::CompoundButton_typeof());
    type->fp_CreateCompoundButton = (void(*)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**))CheckBox__CreateCompoundButton_fn;
    ::TYPES[21] = ::g::Android::android::widget::CompoundButton_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    type->SetFields(57);
    return type;
}

// internal override sealed Android.android.widget.CompoundButton CreateCompoundButton() :280
void CheckBox__CreateCompoundButton_fn(CheckBox* __this, ::g::Android::android::widget::CompoundButton** __retval)
{
    return *__retval = ::g::Android::android::widget::Switch::New17(::g::Android::android::app::Activity::GetAppActivity()), void();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(147)
// -------------------------------------------------------------------

// public sealed extern class Circle :147
// {
::g::Fuse::Android::Controls::Shape_type* Circle_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Shape_type);
    type = (::g::Fuse::Android::Controls::Shape_type*)uClassType::New("Fuse.Android.Controls.Circle", options);
    type->SetBase(::g::Fuse::Android::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof()));
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_AdjustLayout = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float4*))Circle__AdjustLayout_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Android::Controls::Shape*, ::g::Android::android::graphics::drawable::ShapeDrawable*))Circle__UpdateShapeDrawable_fn;
    ::TYPES[22] = ::g::Uno::Float2_typeof();
    ::TYPES[23] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[24] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof());
    ::TYPES[25] = ::g::Android::android::graphics::drawable::shapes::Shape_typeof();
    type->SetFields(57);
    return type;
}

// public generated Circle() :147
void Circle__ctor_4_fn(Circle* __this)
{
    __this->ctor_4();
}

// protected override sealed float4 AdjustLayout(float2 position, float2 size) :163
void Circle__AdjustLayout_fn(Circle* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float2 size_ = *size;
    ::g::Uno::Float2 position_ = *position;
    float mn = ::g::Uno::Math::Min1(size_.X, size_.Y);
    ::g::Uno::Float2 np = ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Addition2(position_, ::g::Uno::Float2__op_Division1(size_, 2.0f)), mn / 2.0f);
    ::g::Uno::Float2 ns = ::g::Uno::Float2__New1(mn);
    return *__retval = ::g::Uno::Float4__New7(np, ns), void();
}

// public generated Circle New() :147
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// protected override sealed void UpdateShapeDrawable(Android.android.graphics.drawable.ShapeDrawable shape) :149
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* shape)
{
    bool angle = uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->UseAngle();
    float start = angle ? uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->StartAngleDegrees() : 0.0f;
    float end = angle ? uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->EffectiveEndAngleDegrees() : 360.0f;
    ::g::Android::android::graphics::drawable::shapes::ArcShape* arc = ::g::Android::android::graphics::drawable::shapes::ArcShape::New8(start, end - start);
    uPtr(shape)->setShape(arc);
}

// public generated Circle() [instance] :147
void Circle::ctor_4()
{
    ctor_3();
}

// public generated Circle New() [static] :147
Circle* Circle::New1()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(196)
// -------------------------------------------------------------------

// public abstract extern class CompoundButton :196
// {
CompoundButton_type* CompoundButton_typeof()
{
    static uSStrong<CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.ObjectSize = sizeof(CompoundButton);
    options.TypeSize = sizeof(CompoundButton_type);
    type = (CompoundButton_type*)uClassType::New("Fuse.Android.Controls.CompoundButton", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::ToggleControl_typeof()));
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))CompoundButton__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))CompoundButton__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))CompoundButton__Detach_fn;
    ::TYPES[26] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[27] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::ToggleControl_typeof());
    ::TYPES[28] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[18] = ::g::Android::android::view::View_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[29] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetFields(55,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton, _settingChecked), 0,
        ::g::Android::android::widget::CompoundButton_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton, _switch), 0);
    return type;
}

// protected generated CompoundButton() :196
void CompoundButton__ctor_3_fn(CompoundButton* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :229
void CompoundButton__Attach_fn(CompoundButton* __this)
{
    uPtr((::g::Fuse::Controls::ToggleControl*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[28/*Uno.UX.ValueChangedHandler<bool>*/], (void*)CompoundButton__OnValueChanged_fn, __this));
    __this->InitValue();
}

// internal override sealed Android.android.view.View CreateInternal() :220
void CompoundButton__CreateInternal_fn(CompoundButton* __this, ::g::Android::android::view::View** __retval)
{
    __this->_switch = __this->CreateCompoundButton();
    CompoundButton__Listener::New5(__this);
    return *__retval = __this->_switch, void();
}

// protected override sealed void Detach() :256
void CompoundButton__Detach_fn(CompoundButton* __this)
{
    uPtr((::g::Fuse::Controls::ToggleControl*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[28/*Uno.UX.ValueChangedHandler<bool>*/], (void*)CompoundButton__OnValueChanged_fn, __this));
}

// private void InitValue() :250
void CompoundButton__InitValue_fn(CompoundButton* __this)
{
    __this->InitValue();
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) :261
void CompoundButton__OnValueChanged_fn(CompoundButton* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void SetChecked(bool val) :236
void CompoundButton__SetChecked_fn(CompoundButton* __this, bool* val)
{
    __this->SetChecked(*val);
}

// protected generated CompoundButton() [instance] :196
void CompoundButton::ctor_3()
{
    ctor_2();
}

// private void InitValue() [instance] :250
void CompoundButton::InitValue()
{
    if (::g::Android::java::lang::Object::op_Inequality1(_switch, NULL))
        SetChecked(uPtr((::g::Fuse::Controls::ToggleControl*)SemanticControl())->Value());
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) [instance] :261
void CompoundButton::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    bool ret1;

    if (uPtr(args)->Origin() == this)
        return;

    SetChecked((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret1), ret1));
}

// private void SetChecked(bool val) [instance] :236
void CompoundButton::SetChecked(bool val)
{
    try
    {
        _settingChecked = true;
        uPtr(_switch)->setChecked(val);
        _settingChecked = false;
    }
    catch (const uThrowable& __t)
    {
        _settingChecked = false;
        throw __t;
    }
    // finally
    _settingChecked = false;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(315)
// -------------------------------------------------------------------

// public abstract extern class Control<T> :315
// {
Control_type* Control_typeof()
{
    static uSStrong<Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Control);
    options.TypeSize = sizeof(Control_type);
    type = (Control_type*)uClassType::New("Fuse.Android.Controls.Control`1", options);
    type->SetBase(::g::Fuse::Android::Controls::Element_typeof());
    type->fp_Create = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))Control__Create_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Control__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Control__OnUnrooted_fn;
    type->fp_get_ShowKeyboard = Control__get_ShowKeyboard_fn;
    ::STRINGS[7] = uString::Const(" must be rooted in the subtree of a ");
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[30] = ::g::Fuse::Android::FocusChangedHandler_typeof();
    ::TYPES[31] = ::g::Fuse::Node_typeof();
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[32] = ::g::Fuse::Android::Controls::FocusManager_typeof();
    ::TYPES[33] = ::g::Android::android::view::inputmethod::InputMethodManager_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    ::TYPES[34] = uObject_typeof();
    ::TYPES[35] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[36] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[37] = ::g::Fuse::Input::FocusLostHandler_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    type->SetFields(53,
        type->T(0), offsetof(::g::Fuse::Android::Controls::Control, _semanticControl), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::Controls::Control, _view), 0);
    return type;
}

// protected generated Control() :315
void Control__ctor_2_fn(Control* __this)
{
    __this->ctor_2();
}

// internal override sealed Android.android.view.View Create() :357
void Control__Create_fn(Control* __this, ::g::Android::android::view::View** __retval)
{
    if (::g::Android::java::lang::Object::op_Inequality1(__this->_view, NULL))
        return *__retval = __this->_view, void();

    __this->_view = __this->CreateInternal();
    ::g::Fuse::Android::FocusChangedListener::AddHandler(__this->_view, uDelegate::New(::TYPES[30/*Fuse.Android.FocusChangedHandler*/], (void*)Control__OnNativeFocusChanged_fn, __this));
    return *__retval = __this->_view, void();
}

// private T FindSemanticControl() :317
void Control__FindSemanticControl_fn(Control* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->FindSemanticControl();
}

// private void OnGotFocus(object s, object a) :391
void Control__OnGotFocus_fn(Control* __this, uObject* s, uObject* a)
{
    __this->OnGotFocus(s, a);
}

// private void OnLostFocus(object s, object a) :397
void Control__OnLostFocus_fn(Control* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected void OnNativeFocusChanged(object s, bool hasFocus) :370
void Control__OnNativeFocusChanged_fn(Control* __this, uObject* s, bool* hasFocus)
{
    __this->OnNativeFocusChanged(s, *hasFocus);
}

// protected override sealed void OnRooted() :331
void Control__OnRooted_fn(Control* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Control_typeof())->T(0),
    };
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_semanticControl = __this->FindSemanticControl();

    if (__this->_semanticControl == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this, ::STRINGS[7/*" must be ro...*/]), __types[0])));

    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this, uDelegate::New(::TYPES[36/*Fuse.Input.FocusGainedHandler*/], (void*)Control__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this, uDelegate::New(::TYPES[37/*Fuse.Input.FocusLostHandler*/], (void*)Control__OnLostFocus_fn, __this));
    __this->Attach();
}

// protected override sealed void OnUnrooted() :344
void Control__OnUnrooted_fn(Control* __this)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this, uDelegate::New(::TYPES[36/*Fuse.Input.FocusGainedHandler*/], (void*)Control__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this, uDelegate::New(::TYPES[37/*Fuse.Input.FocusLostHandler*/], (void*)Control__OnLostFocus_fn, __this));
    __this->Detach();
    __this->_semanticControl = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ScheduleFocusLoss() :403
void Control__ScheduleFocusLoss_fn(Control* __this)
{
    __this->ScheduleFocusLoss();
}

// protected T get_SemanticControl() :329
void Control__get_SemanticControl_fn(Control* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->SemanticControl();
}

// protected virtual bool get_ShowKeyboard() :368
void Control__get_ShowKeyboard_fn(Control* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected generated Control() [instance] :315
void Control::ctor_2()
{
    ctor_1();
}

// private T FindSemanticControl() [instance] :317
::g::Fuse::Controls::Control* Control::FindSemanticControl()
{
    uType* __types[] = {
        __type->GetBase(Control_typeof())->T(0),
    };
    ::g::Fuse::Node* p = this;

    while (p != NULL)
    {
        if (uIs(p, __types[0]))
            return uCast< ::g::Fuse::Controls::Control*>(p, __types[0]);

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// private void OnGotFocus(object s, object a) [instance] :391
void Control::OnGotFocus(uObject* s, uObject* a)
{
    if (::g::Android::java::lang::Object::op_Inequality1(_view, NULL))
        uPtr(_view)->requestFocus();
}

// private void OnLostFocus(object s, object a) [instance] :397
void Control::OnLostFocus(uObject* s, uObject* a)
{
    if (::g::Android::java::lang::Object::op_Inequality1(_view, NULL) && uPtr(_view)->hasFocus())
        ScheduleFocusLoss();
}

// protected void OnNativeFocusChanged(object s, bool hasFocus) [instance] :370
void Control::OnNativeFocusChanged(uObject* s, bool hasFocus)
{
    if (!hasFocus)
    {
        ::g::Fuse::Input::Focus::ReleaseFrom(this);
        ScheduleFocusLoss();
    }
    else
    {
        ::g::Fuse::Input::Focus::Obtained(this);

        if (ShowKeyboard())
        {
            uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())->HideKeyboardContext = NULL;
            ::g::Android::android::view::inputmethod::InputMethodManager* imm = uCast< ::g::Android::android::view::inputmethod::InputMethodManager*>(uPtr(uPtr(_view)->getContext())->getSystemService(::g::Android::android::content::Context::INPUT_METHOD_SERVICE()), ::TYPES[33/*Android.android.view.inputmethod.InputMethodManager*/]);
            uPtr(imm)->showSoftInput(_view, ::g::Android::android::view::inputmethod::InputMethodManager::SHOW_IMPLICIT());
        }
    }
}

// private void ScheduleFocusLoss() [instance] :403
void Control::ScheduleFocusLoss()
{
    uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())->LoseFocus = _view;
    uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())->HideKeyboardContext = uPtr(_view)->getContext();
    uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())->HideKeyboardWindowToken = uPtr(_view)->getWindowToken();
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)::g::Fuse::Android::Controls::FocusManager__CompleteFocusLoss_fn, uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())));
}

// protected T get_SemanticControl() [instance] :329
::g::Fuse::Controls::Control* Control::SemanticControl()
{
    return _semanticControl;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(525)
// -------------------------------------------------------------------

// internal sealed extern class EditorActionArgs :525
// {
uType* EditorActionArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EditorActionArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.EditorActionArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_ctor_ = (void*)EditorActionArgs__New2_fn;
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Android::Controls::EditorActionArgs, ActionCode), 0);
    return type;
}

// public generated EditorActionArgs() :525
void EditorActionArgs__ctor_1_fn(EditorActionArgs* __this)
{
    __this->ctor_1();
}

// public generated EditorActionArgs New() :525
void EditorActionArgs__New2_fn(EditorActionArgs** __retval)
{
    *__retval = EditorActionArgs::New2();
}

// public generated EditorActionArgs() [instance] :525
void EditorActionArgs::ctor_1()
{
    ctor_();
}

// public generated EditorActionArgs New() [static] :525
EditorActionArgs* EditorActionArgs::New2()
{
    EditorActionArgs* obj1 = (EditorActionArgs*)uNew(EditorActionArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(530)
// -------------------------------------------------------------------

// internal extern delegate bool EditorActionHandler(object sender, Fuse.Android.Controls.EditorActionArgs args) :530
uDelegateType* EditorActionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.Controls.EditorActionHandler", 2, 0);
    type->SetSignature(::g::Uno::Bool_typeof(),
        uObject_typeof(),
        ::g::Fuse::Android::Controls::EditorActionArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(532)
// -------------------------------------------------------------------

// internal sealed extern class EditorActionListener :532
// {
EditorActionListener_type* EditorActionListener_typeof()
{
    static uSStrong<EditorActionListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EditorActionListener);
    options.TypeSize = sizeof(EditorActionListener_type);
    type = (EditorActionListener_type*)uClassType::New("Fuse.Android.Controls.EditorActionListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onEditorAction = (void(*)(uObject*, ::g::Android::android::widget::TextView*, int*, ::g::Android::android::view::KeyEvent*, bool*))EditorActionListener__Android_android_widget_TextViewDLROnEditorActionListener_onEditorAction_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))EditorActionListener__Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[8] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_EditorActionListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[38] = ::g::Android::android::widget::TextViewDLROnEditorActionListener_typeof();
    ::TYPES[39] = ::g::Uno::IDisposable_typeof();
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[40] = ::g::Fuse::Android::Controls::EditorActionArgs_typeof();
    ::TYPES[41] = ::g::Fuse::Android::Controls::EditorActionHandler_typeof();
    ::TYPES[34] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(EditorActionListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EditorActionListener_type, interface1),
        ::g::Android::android::widget::TextViewDLROnEditorActionListener_typeof(), offsetof(EditorActionListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::Controls::EditorActionHandler_typeof(), offsetof(::g::Fuse::Android::Controls::EditorActionListener, _handler), 0,
        ::g::Android::android::widget::TextView_typeof(), offsetof(::g::Fuse::Android::Controls::EditorActionListener, _textView), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::EditorActionListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private EditorActionListener(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) :548
void EditorActionListener__ctor_4_fn(EditorActionListener* __this, ::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    __this->ctor_4(textView, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) :538
void EditorActionListener__AddHandler_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, uObject** __retval)
{
    *__retval = EditorActionListener::AddHandler(textView, handler);
}

// private bool Android.android.widget.TextViewDLROnEditorActionListener.onEditorAction(Android.android.widget.TextView v, int actionId, Android.android.view.KeyEvent ev) :557
void EditorActionListener__Android_android_widget_TextViewDLROnEditorActionListener_onEditorAction_fn(EditorActionListener* __this, ::g::Android::android::widget::TextView* v, int* actionId, ::g::Android::android::view::KeyEvent* ev, bool* __retval)
{
    int actionId_ = *actionId;
    bool ret2;

    if (::g::Uno::Delegate::op_Equality(__this->_handler, NULL))
        return *__retval = false, void();

    ::g::Fuse::Android::Controls::EditorActionArgs* args = ::g::Fuse::Android::Controls::EditorActionArgs::New2();
    args->ActionCode = actionId_;
    return *__retval = (uPtr(__this->_handler)->Invoke(&ret2, 2, __this, args), ret2), void();
}

// public void Dispose() :570
void EditorActionListener__Dispose1_fn(EditorActionListener* __this)
{
    __this->Dispose1();
}

// private EditorActionListener New(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) :548
void EditorActionListener__New5_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, EditorActionListener** __retval)
{
    *__retval = EditorActionListener::New5(textView, handler);
}

jclass EditorActionListener::_javaClass2_;

// private EditorActionListener(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) [instance] :548
void EditorActionListener::ctor_4(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[8/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(EditorActionListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        EditorActionListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[8/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onEditorAction","(JLandroid/widget/TextView;ILandroid/view/KeyEvent;JJJ)Z",Binding_Fuse_Android_Controls_EditorActionListener__onEditorAction26520);
        COMMIT_REG_MTD(EditorActionListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _textView = textView;
    uPtr(_textView)->setOnEditorActionListener((uObject*)this);
    _handler = handler;
}

// public void Dispose() [instance] :570
void EditorActionListener::Dispose1()
{
    uPtr(_textView)->setOnEditorActionListener(NULL);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) [static] :538
uObject* EditorActionListener::AddHandler(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    return (uObject*)EditorActionListener::New5(textView, handler);
}

// private EditorActionListener New(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) [static] :548
EditorActionListener* EditorActionListener::New5(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    EditorActionListener* obj1 = (EditorActionListener*)uNew(EditorActionListener_typeof());
    obj1->ctor_4(textView, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(600)
// -------------------------------------------------------------------

// public abstract extern class Element :600
// {
Element_type* Element_typeof()
{
    static uSStrong<Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 53;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(Element_type);
    type = (Element_type*)uClassType::New("Fuse.Android.Controls.Element", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_AdjustLayout = Element__AdjustLayout_fn;
    type->fp_Create = Element__Create_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Element__GetMarginSize_fn;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Element__get_HitTestLocalBounds_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))Element__get_LocalRenderBounds_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Element__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))Element__OnHitTest_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependImplicitTransform_fn;
    ::TYPES[31] = ::g::Fuse::Node_typeof();
    ::TYPES[42] = ::g::Fuse::Behavior_typeof();
    ::TYPES[43] = ::g::Fuse::IViewport_typeof();
    ::TYPES[44] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Uno::Float2_typeof();
    ::TYPES[45] = ::g::Android::android::view::ViewDLRMeasureSpec_typeof();
    ::TYPES[46] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[47] = ::g::Uno::Float_typeof();
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[48] = ::g::Uno::Float4_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[49] = ::g::Fuse::HitTestContext_typeof();
    type->SetFields(51,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::Controls::Element, _ActualSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::Controls::Element, _Position), 0);
    return type;
}

// public Element() :602
void Element__ctor_1_fn(Element* __this)
{
    __this->ctor_1();
}

// internal generated float2 get_ActualSize() :644
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// protected generated void set_ActualSize(float2 value) :644
void Element__set_ActualSize_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->ActualSize(*value);
}

// protected virtual float4 AdjustLayout(float2 position, float2 size) :674
void Element__AdjustLayout_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    return *__retval = ::g::Uno::Float4__New7(position_, size_), void();
}

// internal virtual Android.android.view.View Create() :612
void Element__Create_fn(Element* __this, ::g::Android::android::view::View** __retval)
{
    return *__retval = __this->CreateInternal(), void();
}

// public override float2 GetMarginSize(float2 fillSize, Fuse.SizeFlags fillSet) :619
void Element__GetMarginSize_fn(Element* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[43/*Fuse.IViewport*/]));
    int w = (int)(fillSize_.X * density);
    int h = (int)(fillSize_.Y * density);

    if ((fillSet_ & 1) == 1)
        w = ::g::Android::android::view::ViewDLRMeasureSpec::makeMeasureSpec(w, ::g::Android::android::view::ViewDLRMeasureSpec::EXACTLY());
    else
        w = 0;

    if ((fillSet_ & 2) == 2)
        h = ::g::Android::android::view::ViewDLRMeasureSpec::makeMeasureSpec(h, ::g::Android::android::view::ViewDLRMeasureSpec::EXACTLY());
    else
        h = 0;

    uPtr(uPtr(__this->NativeView())->Handle())->measure(w, h);
    int mw = uPtr(uPtr(__this->NativeView())->Handle())->getMeasuredWidth();
    int mh = uPtr(uPtr(__this->NativeView())->Handle())->getMeasuredHeight();
    return *__retval = ::g::Uno::Float2__New2((float)mw / density, (float)mh / density), void();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalBounds() :702
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// public bool IsPointInside(float2 localPoint) :684
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public override sealed Uno.Rect get_LocalRenderBounds() :691
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// internal Fuse.Android.NativeViews.NativeView get_NativeView() :609
void Element__get_NativeView_fn(Element* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval)
{
    *__retval = __this->NativeView();
}

// protected override float2 OnArrangeMarginBox(float2 position, float2 availableSize, Fuse.SizeFlags availSet) :648
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 availableSize_ = *availableSize;
    int availSet_ = *availSet;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 sz = availableSize_;

    if (!((availSet_ & 3) == 3))
    {
        ::g::Uno::Float2 rsz = __this->GetMarginSize(availableSize_, availSet_);

        if (!((availSet_ & 1) == 1))
            sz.X = rsz.X;

        if (!((availSet_ & 2) == 2))
            sz.Y = rsz.Y;
    }

    ::g::Uno::Float4 layout = __this->AdjustLayout(position_, sz);

    if (::g::Uno::Float2::op_Inequality(__this->Position(), ::g::Uno::Float2__New2(layout.X, layout.Y)) || ::g::Uno::Float2::op_Inequality(__this->ActualSize(), ::g::Uno::Float2__New2(layout.Z, layout.W)))
    {
        __this->Position(::g::Uno::Float2__New2(layout.X, layout.Y));
        __this->ActualSize(::g::Uno::Float2__New2(layout.Z, layout.W));
        __this->InvalidateLocalTransform();
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)::g::Fuse::Android::NativeViews::NativeView__NotifyNewTransform_fn, uPtr(__this->NativeView())));
    return *__retval = __this->ActualSize(), void();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :694
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);
}

// internal generated float2 get_Position() :646
void Element__get_Position_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// protected generated void set_Position(float2 value) :646
void Element__set_Position_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// protected override sealed void PrependImplicitTransform(Fuse.FastMatrix m) :679
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(__this->Position(), 0.0f));
}

// public Element() [instance] :602
void Element::ctor_1()
{
    ctor_();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[42/*Fuse.Behavior*/])), ::g::Fuse::Android::NativeViews::LeafNativeView::New1());
}

// internal generated float2 get_ActualSize() [instance] :644
::g::Uno::Float2 Element::ActualSize()
{
    return _ActualSize;
}

// protected generated void set_ActualSize(float2 value) [instance] :644
void Element::ActualSize(::g::Uno::Float2 value)
{
    _ActualSize = value;
}

// public bool IsPointInside(float2 localPoint) [instance] :684
bool Element::IsPointInside(::g::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}

// internal Fuse.Android.NativeViews.NativeView get_NativeView() [instance] :609
::g::Fuse::Android::NativeViews::NativeView* Element::NativeView()
{
    return ::g::Fuse::Android::NativeViews::NativeView::GetFrom(this);
}

// internal generated float2 get_Position() [instance] :646
::g::Uno::Float2 Element::Position()
{
    return _Position;
}

// protected generated void set_Position(float2 value) [instance] :646
void Element::Position(::g::Uno::Float2 value)
{
    _Position = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(413)
// -------------------------------------------------------------------

// internal sealed extern class FocusManager :413
// {
// static FocusManager() :413
static void FocusManager__cctor__fn(uType* __type)
{
    FocusManager::Singleton_ = FocusManager::New1();
}

uType* FocusManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FocusManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.FocusManager", options);
    type->fp_ctor_ = (void*)FocusManager__New1_fn;
    type->fp_cctor_ = FocusManager__cctor__fn;
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[33] = ::g::Android::android::view::inputmethod::InputMethodManager_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    type->SetFields(0,
        ::g::Android::android::content::Context_typeof(), offsetof(::g::Fuse::Android::Controls::FocusManager, HideKeyboardContext), 0,
        ::g::Android::android::os::IBinder_typeof(), offsetof(::g::Fuse::Android::Controls::FocusManager, HideKeyboardWindowToken), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::Controls::FocusManager, LoseFocus), 0,
        FocusManager_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::FocusManager::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated FocusManager() :413
void FocusManager__ctor__fn(FocusManager* __this)
{
    __this->ctor_();
}

// public void CompleteFocusLoss() :421
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this)
{
    __this->CompleteFocusLoss();
}

// public generated FocusManager New() :413
void FocusManager__New1_fn(FocusManager** __retval)
{
    *__retval = FocusManager::New1();
}

uSStrong<FocusManager*> FocusManager::Singleton_;

// public generated FocusManager() [instance] :413
void FocusManager::ctor_()
{
}

// public void CompleteFocusLoss() [instance] :421
void FocusManager::CompleteFocusLoss()
{
    if (::g::Android::java::lang::Object::op_Inequality1(LoseFocus, NULL))
    {
        if (uPtr(LoseFocus)->hasFocus())
            uPtr(uPtr(LoseFocus)->getRootView())->requestFocus();

        LoseFocus = NULL;
    }

    if (::g::Android::java::lang::Object::op_Inequality1(HideKeyboardContext, NULL))
    {
        ::g::Android::android::view::inputmethod::InputMethodManager* imm = uCast< ::g::Android::android::view::inputmethod::InputMethodManager*>(uPtr(HideKeyboardContext)->getSystemService(::g::Android::android::content::Context::INPUT_METHOD_SERVICE()), ::TYPES[33/*Android.android.view.inputmethod.InputMethodManager*/]);
        uPtr(imm)->hideSoftInputFromWindow(HideKeyboardWindowToken, 0);
        HideKeyboardContext = NULL;
    }
}

// public generated FocusManager New() [static] :413
FocusManager* FocusManager::New1()
{
    FocusManager* obj1 = (FocusManager*)uNew(FocusManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(789)
// -------------------------------------------------------------------

// public sealed extern class Image :789
// {
::g::Fuse::Android::Controls::Control_type* Image_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Control_type);
    type = (::g::Fuse::Android::Controls::Control_type*)uClassType::New("Fuse.Android.Controls.Image", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Image_typeof()));
    type->fp_ctor_ = (void*)Image__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))Image__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))Image__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))Image__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Image__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Image__OnArrangeMarginBox_fn;
    ::TYPES[50] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[51] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Image_typeof());
    ::TYPES[52] = ::g::Uno::EventHandler_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    ::TYPES[53] = ::g::Android::android::widget::ImageViewDLRScaleType_typeof();
    ::TYPES[54] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[18] = ::g::Android::android::view::View_typeof();
    ::TYPES[55] = ::g::Android::Runtime::FloatArray_typeof();
    ::TYPES[22] = ::g::Uno::Float2_typeof();
    ::TYPES[56] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[31] = ::g::Fuse::Node_typeof();
    ::TYPES[45] = ::g::Android::android::view::ViewDLRMeasureSpec_typeof();
    ::TYPES[47] = ::g::Uno::Float_typeof();
    ::TYPES[43] = ::g::Fuse::IViewport_typeof();
    ::TYPES[57] = ::g::Fuse::Android::Controls::Element_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[58] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[59] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[44] = ::g::Uno::Int_typeof();
    ::TYPES[60] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    type->SetFields(55,
        ::g::Android::android::graphics::Bitmap_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _bitmap), 0,
        Image__ImageLoader_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _currentImageLoader), 0,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _imageContainer), 0,
        ::g::Android::android::widget::ImageView_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _imageView), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _sizing), 0);
    return type;
}

// public Image() :857
void Image__ctor_3_fn(Image* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :902
void Image__Attach_fn(Image* __this)
{
    __this->Create();
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->add_ParamChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)Image__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->add_SourceChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)Image__OnSourceChanged_fn, __this));
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

// private Android.android.graphics.Bitmap get_Bitmap() :868
void Image__get_Bitmap_fn(Image* __this, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = __this->Bitmap();
}

// private void set_Bitmap(Android.android.graphics.Bitmap value) :869
void Image__set_Bitmap_fn(Image* __this, ::g::Android::android::graphics::Bitmap* value)
{
    __this->Bitmap(value);
}

// private void ClearSource() :931
void Image__ClearSource_fn(Image* __this)
{
    __this->ClearSource();
}

// internal override sealed Android.android.view.View CreateInternal() :882
void Image__CreateInternal_fn(Image* __this, ::g::Android::android::view::View** __retval)
{
    if (::g::Android::java::lang::Object::op_Equality1(__this->_imageView, NULL))
    {
        __this->_imageView = ::g::Android::android::widget::ImageView::New9(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_imageView)->setScaleType(::g::Android::android::widget::ImageViewDLRScaleType::MATRIX());
        __this->_imageContainer = ::g::Android::android::widget::RelativeLayout::New9(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_imageContainer)->setLayoutParams(::g::Android::android::widget::FrameLayoutDLRLayoutParams::New19(-1, -1));
        __this->SetImageViewSize(::g::Uno::Float2__New1(0.0f));
        uPtr(__this->_imageContainer)->addView(__this->_imageView);
        uPtr(__this->_imageView)->invalidate();
        uPtr(__this->_imageContainer)->invalidate();
    }

    return *__retval = __this->_imageContainer, void();
}

// private Android.android.graphics.Matrix CreateMatrix(float2 translation, float2 scale) :1069
void Image__CreateMatrix_fn(Image* __this, ::g::Uno::Float2* translation, ::g::Uno::Float2* scale, ::g::Android::android::graphics::Matrix** __retval)
{
    *__retval = __this->CreateMatrix(*translation, *scale);
}

// protected override sealed void Detach() :911
void Image__Detach_fn(Image* __this)
{
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->remove_ParamChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)Image__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->remove_SourceChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], (void*)Image__OnSourceChanged_fn, __this));
}

// public override sealed float2 GetMarginSize(float2 fillSize, Fuse.SizeFlags fillSet) :1020
void Image__GetMarginSize_fn(Image* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->AbsoluteZoom();
    ::g::Uno::Float2 measuredSize = __this->GetSize();
    ::g::Uno::Float2 marginSize = uPtr(__this->_sizing)->ExpandFillSize(measuredSize, fillSize_, fillSet_);
    return *__retval = marginSize, void();
}

// private float2 GetSize() :1004
void Image__GetSize_fn(Image* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// private void Invalidate() :999
void Image__Invalidate_fn(Image* __this)
{
    __this->Invalidate();
}

// public Image New() :857
void Image__New1_fn(Image** __retval)
{
    *__retval = Image::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, float2 availableSize, Fuse.SizeFlags availSet) :1038
void Image__OnArrangeMarginBox_fn(Image* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 availableSize_ = *availableSize;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::g::Uno::Float2 scale = uPtr(__this->_sizing)->CalcScale(availableSize_, contentDesiredSize);
    ::g::Uno::Float2 origin = uPtr(__this->_sizing)->CalcOrigin(availableSize_, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));
    ::g::Uno::Float2 drawOrigin = origin;
    ::g::Uno::Float2 drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale);
    ::g::Uno::Float4 uvClip = uPtr(__this->_sizing)->CalcClip(availableSize_, &drawOrigin, &drawSize);
    ::g::Uno::Float2 transformOrigin = ::g::Uno::Float2__op_Subtraction2(origin, drawOrigin);
    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[43/*Fuse.IViewport*/]));
    __this->SetImageViewSize(::g::Uno::Float2__op_Multiply1(drawSize, density));
    uPtr(__this->_imageView)->setImageMatrix(__this->CreateMatrix(::g::Uno::Float2__op_Multiply1(transformOrigin, density), ::g::Uno::Float2__op_Multiply1(scale, density)));
    uPtr(__this->_imageView)->invalidate();
    uPtr(__this->_imageContainer)->invalidate();
    __this->Position(drawOrigin);
    __this->ActualSize(drawSize);
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)::g::Fuse::Android::NativeViews::NativeView__NotifyNewTransform_fn, uPtr(__this->NativeView())));
    return *__retval = __this->ActualSize(), void();
}

// private void OnParamChanged(object sender, Uno.EventArgs args) :917
void Image__OnParamChanged_fn(Image* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParamChanged(sender, args);
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) :973
void Image__OnSourceChanged_fn(Image* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSourceChanged(sender, args);
}

// private void SetDensity(float density) :967
void Image__SetDensity_fn(Image* __this, float* density)
{
    __this->SetDensity(*density);
}

// private void SetImageViewSize(float2 size) :1031
void Image__SetImageViewSize_fn(Image* __this, ::g::Uno::Float2* size)
{
    __this->SetImageViewSize(*size);
}

// private void SetResampleMode(Fuse.Drawing.ResampleMode mode) :945
void Image__SetResampleMode_fn(Image* __this, int* mode)
{
    __this->SetResampleMode(*mode);
}

// private void SetSource(Android.android.graphics.Bitmap bitmap) :938
void Image__SetSource_fn(Image* __this, ::g::Android::android::graphics::Bitmap* bitmap)
{
    __this->SetSource(bitmap);
}

// public Image() [instance] :857
void Image::ctor_3()
{
    ctor_2();
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
}

// private Android.android.graphics.Bitmap get_Bitmap() [instance] :868
::g::Android::android::graphics::Bitmap* Image::Bitmap()
{
    return _bitmap;
}

// private void set_Bitmap(Android.android.graphics.Bitmap value) [instance] :869
void Image::Bitmap(::g::Android::android::graphics::Bitmap* value)
{
    if (::g::Android::java::lang::Object::op_Inequality1(_bitmap, NULL))
        ClearSource();

    _bitmap = value;
    SetSource(_bitmap);
}

// private void ClearSource() [instance] :931
void Image::ClearSource()
{
    uPtr(_imageView)->setImageBitmap(NULL);
    uPtr(_imageView)->invalidate();
    Invalidate();
}

// private Android.android.graphics.Matrix CreateMatrix(float2 translation, float2 scale) [instance] :1069
::g::Android::android::graphics::Matrix* Image::CreateMatrix(::g::Uno::Float2 translation, ::g::Uno::Float2 scale)
{
    ::g::Android::Runtime::FloatArray* m = ::g::Android::Runtime::FloatArray::New6(9);
    m->Item(0, scale.X);
    m->Item(1, 0.0f);
    m->Item(2, translation.X);
    m->Item(3, 0.0f);
    m->Item(4, scale.Y);
    m->Item(5, translation.Y);
    m->Item(6, 0.0f);
    m->Item(7, 0.0f);
    m->Item(8, 1.0f);
    ::g::Android::android::graphics::Matrix* matrix = ::g::Android::android::graphics::Matrix::New5();
    matrix->setValues(m);
    return matrix;
}

// private float2 GetSize() [instance] :1004
::g::Uno::Float2 Image::GetSize()
{
    if (::g::Android::java::lang::Object::op_Inequality1(_imageView, NULL))
    {
        uPtr(_imageView)->measure(::g::Android::android::view::ViewDLRMeasureSpec::UNSPECIFIED(), ::g::Android::android::view::ViewDLRMeasureSpec::UNSPECIFIED());
        return ::g::Uno::Float2__New2((float)uPtr(_imageView)->getMeasuredWidth(), (float)uPtr(_imageView)->getMeasuredHeight());
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// private void Invalidate() [instance] :999
void Image::Invalidate()
{
    uPtr((::g::Fuse::Controls::Image*)SemanticControl())->InvalidateLayout(2);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) [instance] :917
void Image::OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (((uPtr(_sizing)->SetStretchMode(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchMode()) || uPtr(_sizing)->SetStretchDirection(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchDirection())) || uPtr(_sizing)->SetStretchSizing(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchSizing())) || uPtr(_sizing)->SetAlignment(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->ContentAlignment()))
        Invalidate();

    SetDensity(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Density());
    SetResampleMode(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->ResampleMode());
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) [instance] :973
void Image::OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (_currentImageLoader != NULL)
    {
        uPtr(_currentImageLoader)->Cancel();
        _currentImageLoader = NULL;
    }

    if (uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source() == NULL)
        return;

    ::g::Fuse::Resources::FileImageSource* fs = uAs< ::g::Fuse::Resources::FileImageSource*>(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source(), ::TYPES[58/*Fuse.Resources.FileImageSource*/]);

    if (fs != NULL)
    {
        Bitmap(::g::Fuse::Android::Controls::BitmapFactory::GetBitmap(uPtr(fs)->File()));
        OnParamChanged(NULL, NULL);
    }

    ::g::Fuse::Resources::HttpImageSource* http = uAs< ::g::Fuse::Resources::HttpImageSource*>(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source(), ::TYPES[59/*Fuse.Resources.HttpImageSource*/]);

    if (http != NULL)
        _currentImageLoader = Image__ImageLoader::New1(this, uPtr(http)->Url());
}

// private void SetDensity(float density) [instance] :967
void Image::SetDensity(float density)
{
}

// private void SetImageViewSize(float2 size) [instance] :1031
void Image::SetImageViewSize(::g::Uno::Float2 size)
{
    uPtr(_imageView)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19((int)size.X, (int)size.Y));
}

// private void SetResampleMode(Fuse.Drawing.ResampleMode mode) [instance] :945
void Image::SetResampleMode(int mode)
{
    if (::g::Android::java::lang::Object::op_Equality1(Bitmap(), NULL))
        return;

    if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 17)
        uPtr(Bitmap())->setHasMipMap(false);

    switch (mode)
    {
        case 0:
            break;
        case 1:
            break;
        case 2:
        {
            if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 17)
                uPtr(Bitmap())->setHasMipMap(true);

            break;
        }
    }

    uPtr(_imageView)->invalidate();
}

// private void SetSource(Android.android.graphics.Bitmap bitmap) [instance] :938
void Image::SetSource(::g::Android::android::graphics::Bitmap* bitmap)
{
    uPtr(_imageView)->setImageBitmap(bitmap);
    uPtr(_imageView)->invalidate();
    Invalidate();
}

// public Image New() [static] :857
Image* Image::New1()
{
    Image* obj1 = (Image*)uNew(Image_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(791)
// -------------------------------------------------------------------

// private sealed class Image.ImageLoader :791
// {
uType* Image__ImageLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Image__ImageLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.Image.ImageLoader", options);
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Android::android::graphics::Bitmap_typeof());
    ::TYPES[61] = ::g::Android::java::lang::Runnable_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[62] = ::g::Fuse::Android::Controls::Image_typeof();
    type->SetFields(0,
        ::g::Fuse::Android::Controls::Image_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader, _image), uFieldFlagsWeak,
        Image__ImageLoader__BitmapLoader_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader, _loader), 0,
        ::g::Android::java::lang::Thread_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader, _thread), 0);
    return type;
}

// public ImageLoader(Fuse.Android.Controls.Image image, string url) :834
void Image__ImageLoader__ctor__fn(Image__ImageLoader* __this, ::g::Fuse::Android::Controls::Image* image, uString* url)
{
    __this->ctor_(image, url);
}

// public void Cancel() :848
void Image__ImageLoader__Cancel_fn(Image__ImageLoader* __this)
{
    __this->Cancel();
}

// public ImageLoader New(Fuse.Android.Controls.Image image, string url) :834
void Image__ImageLoader__New1_fn(::g::Fuse::Android::Controls::Image* image, uString* url, Image__ImageLoader** __retval)
{
    *__retval = Image__ImageLoader::New1(image, url);
}

// private void OnDone(Android.android.graphics.Bitmap bitmap) :842
void Image__ImageLoader__OnDone_fn(Image__ImageLoader* __this, ::g::Android::android::graphics::Bitmap* bitmap)
{
    __this->OnDone(bitmap);
}

// public ImageLoader(Fuse.Android.Controls.Image image, string url) [instance] :834
void Image__ImageLoader::ctor_(::g::Fuse::Android::Controls::Image* image, uString* url)
{
    _image = image;
    _loader = Image__ImageLoader__BitmapLoader::New5(url, uDelegate::New(::TYPES[10/*Uno.Action<Android.android.graphics.Bitmap>*/], (void*)Image__ImageLoader__OnDone_fn, this));
    _thread = ::g::Android::java::lang::Thread::New7((uObject*)_loader);
    uPtr(_thread)->start();
}

// public void Cancel() [instance] :848
void Image__ImageLoader::Cancel()
{
    uPtr(_thread)->stop();
}

// private void OnDone(Android.android.graphics.Bitmap bitmap) [instance] :842
void Image__ImageLoader::OnDone(::g::Android::android::graphics::Bitmap* bitmap)
{
    if (::g::Android::java::lang::Object::op_Inequality1(bitmap, NULL) && (_image != NULL))
        uPtr(_image)->Bitmap(bitmap);
}

// public ImageLoader New(Fuse.Android.Controls.Image image, string url) [static] :834
Image__ImageLoader* Image__ImageLoader::New1(::g::Fuse::Android::Controls::Image* image, uString* url)
{
    Image__ImageLoader* obj1 = (Image__ImageLoader*)uNew(Image__ImageLoader_typeof());
    obj1->ctor_(image, url);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1984)
// --------------------------------------------------------------------

// internal sealed extern class JsResultHandler :1984
// {
JsResultHandler_type* JsResultHandler_typeof()
{
    static uSStrong<JsResultHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(JsResultHandler);
    options.TypeSize = sizeof(JsResultHandler_type);
    type = (JsResultHandler_type*)uClassType::New("Fuse.Android.Controls.JsResultHandler", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_update = (void(*)(uObject*, ::g::Android::java::util::Observable*, ::g::Android::java::lang::Object*))JsResultHandler__update_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[9] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_JsResultHandler");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::STRINGS[10] = uString::Const(".forceNotifyObservers( eval('");
    ::STRINGS[11] = uString::Const("') );");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[63] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[64] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(JsResultHandler_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JsResultHandler_type, interface1),
        ::g::Android::java::util::Observer_typeof(), offsetof(JsResultHandler_type, interface2));
    type->SetFields(5,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::JsResultHandler, _name), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Android::Controls::JsResultHandler, Callback), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::JsResultHandler::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public JsResultHandler(string name, Uno.Action<string> callback) :1989
void JsResultHandler__ctor_4_fn(JsResultHandler* __this, uString* name, uDelegate* callback)
{
    __this->ctor_4(name, callback);
}

// public string getExpr(string js) :2005
void JsResultHandler__getExpr_fn(JsResultHandler* __this, uString* js, uString** __retval)
{
    *__retval = __this->getExpr(js);
}

// public string get_Name() :2002
void JsResultHandler__get_Name_fn(JsResultHandler* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public JsResultHandler New(string name, Uno.Action<string> callback) :1989
void JsResultHandler__New5_fn(uString* name, uDelegate* callback, JsResultHandler** __retval)
{
    *__retval = JsResultHandler::New5(name, callback);
}

// public void update(Android.java.util.Observable observable, Android.java.lang.Object data) :1995
void JsResultHandler__update_fn(JsResultHandler* __this, ::g::Android::java::util::Observable* observable, ::g::Android::java::lang::Object* data)
{
    __this->update(observable, data);
}

jclass JsResultHandler::_javaClass2_;

// public JsResultHandler(string name, Uno.Action<string> callback) [instance] :1989
void JsResultHandler::ctor_4(uString* name, uDelegate* callback)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[9/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(JsResultHandler::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        JsResultHandler::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[9/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_update","(JLjava/util/Observable;Ljava/lang/Object;JJ)V",Binding_Fuse_Android_Controls_JsResultHandler__update38392);
        COMMIT_REG_MTD(JsResultHandler::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _name = name;
    Callback = callback;
}

// public string getExpr(string js) [instance] :2005
uString* JsResultHandler::getExpr(uString* js)
{
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(Name(), ::STRINGS[10/*".forceNotif...*/]), js), ::STRINGS[11/*"') );"*/]);
}

// public string get_Name() [instance] :2002
uString* JsResultHandler::Name()
{
    return _name;
}

// public void update(Android.java.util.Observable observable, Android.java.lang.Object data) [instance] :1995
void JsResultHandler::update(::g::Android::java::util::Observable* observable, ::g::Android::java::lang::Object* data)
{
    if (::g::Uno::Delegate::op_Inequality(Callback, NULL))
        uPtr(Callback)->InvokeVoid(::g::Android::java::lang::String::op_Implicit(uCast< ::g::Android::java::lang::String*>(data, ::TYPES[64/*Android.java.lang.String*/])));
}

// public JsResultHandler New(string name, Uno.Action<string> callback) [static] :1989
JsResultHandler* JsResultHandler::New5(uString* name, uDelegate* callback)
{
    JsResultHandler* obj1 = (JsResultHandler*)uNew(JsResultHandler_typeof());
    obj1->ctor_4(name, callback);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(201)
// -------------------------------------------------------------------

// private sealed class CompoundButton.Listener :201
// {
CompoundButton__Listener_type* CompoundButton__Listener_typeof()
{
    static uSStrong<CompoundButton__Listener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CompoundButton__Listener);
    options.TypeSize = sizeof(CompoundButton__Listener_type);
    type = (CompoundButton__Listener_type*)uClassType::New("Fuse.Android.Controls.CompoundButton.Listener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onCheckedChanged = (void(*)(uObject*, ::g::Android::android::widget::CompoundButton*, bool*))CompoundButton__Listener__onCheckedChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[12] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_CompoundButton_Listener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[65] = ::g::Fuse::Android::Controls::CompoundButton_typeof();
    ::TYPES[66] = ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener_typeof();
    ::TYPES[27] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::ToggleControl_typeof());
    ::TYPES[34] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CompoundButton__Listener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CompoundButton__Listener_type, interface1),
        ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener_typeof(), offsetof(CompoundButton__Listener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::Controls::CompoundButton_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton__Listener, _s), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::CompoundButton__Listener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public Listener(Fuse.Android.Controls.CompoundButton s) :207
void CompoundButton__Listener__ctor_4_fn(CompoundButton__Listener* __this, ::g::Fuse::Android::Controls::CompoundButton* s)
{
    __this->ctor_4(s);
}

// public Listener New(Fuse.Android.Controls.CompoundButton s) :207
void CompoundButton__Listener__New5_fn(::g::Fuse::Android::Controls::CompoundButton* s, CompoundButton__Listener** __retval)
{
    *__retval = CompoundButton__Listener::New5(s);
}

// public void onCheckedChanged(Android.android.widget.CompoundButton buttonView, bool isChecked) :213
void CompoundButton__Listener__onCheckedChanged_fn(CompoundButton__Listener* __this, ::g::Android::android::widget::CompoundButton* buttonView, bool* isChecked)
{
    __this->onCheckedChanged(buttonView, *isChecked);
}

jclass CompoundButton__Listener::_javaClass2_;

// public Listener(Fuse.Android.Controls.CompoundButton s) [instance] :207
void CompoundButton__Listener::ctor_4(::g::Fuse::Android::Controls::CompoundButton* s)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[12/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(CompoundButton__Listener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        CompoundButton__Listener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[12/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onCheckedChanged","(JLandroid/widget/CompoundButton;ZJJ)V",Binding_Fuse_Android_Controls_CompoundButton_Listener__onCheckedChanged24924);
        COMMIT_REG_MTD(CompoundButton__Listener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _s = s;
    uPtr(uPtr(_s)->_switch)->setOnCheckedChangeListener((uObject*)this);
}

// public void onCheckedChanged(Android.android.widget.CompoundButton buttonView, bool isChecked) [instance] :213
void CompoundButton__Listener::onCheckedChanged(::g::Android::android::widget::CompoundButton* buttonView, bool isChecked)
{
    if (!uPtr(_s)->_settingChecked)
        uPtr((::g::Fuse::Controls::ToggleControl*)uPtr(_s)->SemanticControl())->SetValue(isChecked, _s);
}

// public Listener New(Fuse.Android.Controls.CompoundButton s) [static] :207
CompoundButton__Listener* CompoundButton__Listener::New5(::g::Fuse::Android::Controls::CompoundButton* s)
{
    CompoundButton__Listener* obj1 = (CompoundButton__Listener*)uNew(CompoundButton__Listener_typeof());
    obj1->ctor_4(s);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1168)
// --------------------------------------------------------------------

// public sealed extern class MapView :1168
// {
::g::Fuse::Android::Controls::Control_type* MapView_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Control_type);
    type = (::g::Fuse::Android::Controls::Control_type*)uClassType::New("Fuse.Android.Controls.MapView", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::MapView_typeof()));
    type->fp_ctor_ = (void*)MapView__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))MapView__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))MapView__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))MapView__Detach_fn;
    ::STRINGS[13] = uString::Const("Not implemented on this platform");
    type->SetFields(55);
    return type;
}

// public generated MapView() :1168
void MapView__ctor_3_fn(MapView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1176
void MapView__Attach_fn(MapView* __this)
{
}

// internal override sealed Android.android.view.View CreateInternal() :1171
void MapView__CreateInternal_fn(MapView* __this, ::g::Android::android::view::View** __retval)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"Not impleme...*/]));
}

// protected override sealed void Detach() :1181
void MapView__Detach_fn(MapView* __this)
{
}

// public generated MapView New() :1168
void MapView__New1_fn(MapView** __retval)
{
    *__retval = MapView::New1();
}

// public generated MapView() [instance] :1168
void MapView::ctor_3()
{
    ctor_2();
}

// public generated MapView New() [static] :1168
MapView* MapView::New1()
{
    MapView* obj1 = (MapView*)uNew(MapView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1788)
// --------------------------------------------------------------------

// public sealed extern class PlainTextEdit :1788
// {
::g::Fuse::Android::Controls::TextEdit_type* PlainTextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::TextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.ObjectSize = sizeof(PlainTextEdit);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::TextEdit_type);
    type = (::g::Fuse::Android::Controls::TextEdit_type*)uClassType::New("Fuse.Android.Controls.PlainTextEdit", options);
    type->SetBase(::g::Fuse::Android::Controls::TextEdit_typeof());
    type->fp_ctor_ = (void*)PlainTextEdit__New2_fn;
    type->fp_get_Plain = (void(*)(::g::Fuse::Android::Controls::TextEdit*, bool*))PlainTextEdit__get_Plain_fn;
    type->SetFields(62);
    return type;
}

// public generated PlainTextEdit() :1788
void PlainTextEdit__ctor_5_fn(PlainTextEdit* __this)
{
    __this->ctor_5();
}

// public generated PlainTextEdit New() :1788
void PlainTextEdit__New2_fn(PlainTextEdit** __retval)
{
    *__retval = PlainTextEdit::New2();
}

// protected override sealed bool get_Plain() :1790
void PlainTextEdit__get_Plain_fn(PlainTextEdit* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated PlainTextEdit() [instance] :1788
void PlainTextEdit::ctor_5()
{
    ctor_4();
}

// public generated PlainTextEdit New() [static] :1788
PlainTextEdit* PlainTextEdit::New2()
{
    PlainTextEdit* obj1 = (PlainTextEdit*)uNew(PlainTextEdit_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1354)
// --------------------------------------------------------------------

// internal extern delegate void ProgressChangedHandler(object sender, int progress, bool fromUser) :1354
uDelegateType* ProgressChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.Controls.ProgressChangedHandler", 3, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Int_typeof(),
        ::g::Uno::Bool_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1356)
// --------------------------------------------------------------------

// internal sealed extern class ProgressChangedListener :1356
// {
ProgressChangedListener_type* ProgressChangedListener_typeof()
{
    static uSStrong<ProgressChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ProgressChangedListener);
    options.TypeSize = sizeof(ProgressChangedListener_type);
    type = (ProgressChangedListener_type*)uClassType::New("Fuse.Android.Controls.ProgressChangedListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onProgressChanged = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*, int*, bool*))ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onProgressChanged_fn;
    type->interface2.fp_onStartTrackingTouch = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*))ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStartTrackingTouch_fn;
    type->interface2.fp_onStopTrackingTouch = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*))ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStopTrackingTouch_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ProgressChangedListener__Uno_IDisposable_Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[14] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_ProgressChangedListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[67] = ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof();
    ::TYPES[39] = ::g::Uno::IDisposable_typeof();
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[68] = ::g::Fuse::Android::Controls::ProgressChangedHandler_typeof();
    ::TYPES[34] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ProgressChangedListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ProgressChangedListener_type, interface1),
        ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof(), offsetof(ProgressChangedListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::Controls::ProgressChangedHandler_typeof(), offsetof(::g::Fuse::Android::Controls::ProgressChangedListener, _handler), 0,
        ::g::Android::android::widget::SeekBar_typeof(), offsetof(::g::Fuse::Android::Controls::ProgressChangedListener, _seekBar), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::ProgressChangedListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private ProgressChangedListener(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) :1372
void ProgressChangedListener__ctor_4_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler)
{
    __this->ctor_4(seekBar, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) :1362
void ProgressChangedListener__AddHandler_fn(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler, uObject** __retval)
{
    *__retval = ProgressChangedListener::AddHandler(seekBar, handler);
}

// private void Android.android.widget.SeekBarDLROnSeekBarChangeListener.onProgressChanged(Android.android.widget.SeekBar seekBar, int value, bool fromUser) :1381
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onProgressChanged_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* seekBar, int* value, bool* fromUser)
{
    int value_ = *value;
    bool fromUser_ = *fromUser;

    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(3, seekBar, uCRef<int>(value_), uCRef(fromUser_));
}

// private void Android.android.widget.SeekBarDLROnSeekBarChangeListener.onStartTrackingTouch(Android.android.widget.SeekBar sb) :1390
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStartTrackingTouch_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* sb)
{
}

// private void Android.android.widget.SeekBarDLROnSeekBarChangeListener.onStopTrackingTouch(Android.android.widget.SeekBar sb) :1393
void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStopTrackingTouch_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* sb)
{
}

// private ProgressChangedListener New(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) :1372
void ProgressChangedListener__New5_fn(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler, ProgressChangedListener** __retval)
{
    *__retval = ProgressChangedListener::New5(seekBar, handler);
}

// private void Uno.IDisposable.Dispose() :1396
void ProgressChangedListener__Uno_IDisposable_Dispose1_fn(ProgressChangedListener* __this)
{
    uPtr(__this->_seekBar)->setOnSeekBarChangeListener(NULL);
}

jclass ProgressChangedListener::_javaClass2_;

// private ProgressChangedListener(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) [instance] :1372
void ProgressChangedListener::ctor_4(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[14/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(ProgressChangedListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        ProgressChangedListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[14/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_onProgressChanged","(JLandroid/widget/SeekBar;IZJJJ)V",Binding_Fuse_Android_Controls_ProgressChangedListener__onProgressChanged26181);
        REG_MTD(1,"__n_onStartTrackingTouch","(JLandroid/widget/SeekBar;J)V",Binding_Fuse_Android_Controls_ProgressChangedListener__onStartTrackingTouch26182);
        REG_MTD(2,"__n_onStopTrackingTouch","(JLandroid/widget/SeekBar;J)V",Binding_Fuse_Android_Controls_ProgressChangedListener__onStopTrackingTouch26183);
        COMMIT_REG_MTD(ProgressChangedListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _seekBar = seekBar;
    _handler = handler;
    uPtr(_seekBar)->setOnSeekBarChangeListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) [static] :1362
uObject* ProgressChangedListener::AddHandler(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler)
{
    return (uObject*)ProgressChangedListener::New5(seekBar, handler);
}

// private ProgressChangedListener New(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) [static] :1372
ProgressChangedListener* ProgressChangedListener::New5(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler)
{
    ProgressChangedListener* obj1 = (ProgressChangedListener*)uNew(ProgressChangedListener_typeof());
    obj1->ctor_4(seekBar, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(287)
// -------------------------------------------------------------------

// public sealed extern class RadioButton :287
// {
::g::Fuse::Android::Controls::CompoundButton_type* RadioButton_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.ObjectSize = sizeof(RadioButton);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::CompoundButton_type);
    type = (::g::Fuse::Android::Controls::CompoundButton_type*)uClassType::New("Fuse.Android.Controls.RadioButton", options);
    type->SetBase(::g::Fuse::Android::Controls::CompoundButton_typeof());
    type->fp_CreateCompoundButton = (void(*)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**))RadioButton__CreateCompoundButton_fn;
    ::TYPES[21] = ::g::Android::android::widget::CompoundButton_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    type->SetFields(57);
    return type;
}

// internal override sealed Android.android.widget.CompoundButton CreateCompoundButton() :289
void RadioButton__CreateCompoundButton_fn(RadioButton* __this, ::g::Android::android::widget::CompoundButton** __retval)
{
    return *__retval = ::g::Android::android::widget::Switch::New17(::g::Android::android::app::Activity::GetAppActivity()), void();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1205)
// --------------------------------------------------------------------

// public sealed extern class Rectangle :1205
// {
::g::Fuse::Android::Controls::Shape_type* Rectangle_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Shape_type);
    type = (::g::Fuse::Android::Controls::Shape_type*)uClassType::New("Fuse.Android.Controls.Rectangle", options);
    type->SetBase(::g::Fuse::Android::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))Rectangle__Detach_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Android::Controls::Shape*, ::g::Android::android::graphics::drawable::ShapeDrawable*))Rectangle__UpdateShapeDrawable_fn;
    ::TYPES[31] = ::g::Fuse::Node_typeof();
    ::TYPES[69] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof());
    ::TYPES[70] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[55] = ::g::Android::Runtime::FloatArray_typeof();
    ::TYPES[48] = ::g::Uno::Float4_typeof();
    ::TYPES[25] = ::g::Android::android::graphics::drawable::shapes::Shape_typeof();
    type->SetFields(57,
        ::g::Android::Runtime::FloatArray_typeof(), offsetof(::g::Fuse::Android::Controls::Rectangle, _cornerArray), 0);
    return type;
}

// public generated Rectangle() :1205
void Rectangle__ctor_4_fn(Rectangle* __this)
{
    __this->ctor_4();
}

// protected override sealed void Detach() :1207
void Rectangle__Detach_fn(Rectangle* __this)
{
    __this->_cornerArray = NULL;
    ::g::Fuse::Android::Controls::Shape__Detach_fn(__this);
}

// public generated Rectangle New() :1205
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// protected override sealed void UpdateShapeDrawable(Android.android.graphics.drawable.ShapeDrawable shape) :1214
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* shape)
{
    float ind1;
    float ind2;
    float ind3;
    float ind4;
    float density = uPtr((::g::Fuse::Controls::Rectangle*)__this->SemanticControl())->PointDensity();
    ::g::Uno::Float4 cr = ::g::Uno::Float4__op_Multiply1(uPtr((::g::Fuse::Controls::Rectangle*)__this->SemanticControl())->CornerRadius(), density);

    if (::g::Android::java::lang::Object::op_Equality1(__this->_cornerArray, NULL))
        __this->_cornerArray = ::g::Android::Runtime::FloatArray::New6(8);

    ::g::Android::Runtime::FloatArray* r = __this->_cornerArray;
    uPtr(r)->Item(0, (ind1 = cr.X, uPtr(r)->Item(1, ind1), ind1));
    r->Item(2, (ind2 = cr.Y, r->Item(3, ind2), ind2));
    r->Item(4, (ind3 = cr.Z, r->Item(5, ind3), ind3));
    r->Item(6, (ind4 = cr.W, r->Item(7, ind4), ind4));
    ::g::Android::android::graphics::drawable::shapes::RoundRectShape* rrs = ::g::Android::android::graphics::drawable::shapes::RoundRectShape::New8(r, NULL, NULL);
    uPtr(shape)->setShape(rrs);
}

// public generated Rectangle() [instance] :1205
void Rectangle::ctor_4()
{
    ctor_3();
}

// public generated Rectangle New() [static] :1205
Rectangle* Rectangle::New1()
{
    Rectangle* obj5 = (Rectangle*)uNew(Rectangle_typeof());
    obj5->ctor_4();
    return obj5;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1271)
// --------------------------------------------------------------------

// public sealed extern class SeekBar :1271
// {
::g::Fuse::Android::Controls::Control_type* SeekBar_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.ObjectSize = sizeof(SeekBar);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Control_type);
    type = (::g::Fuse::Android::Controls::Control_type*)uClassType::New("Fuse.Android.Controls.SeekBar", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Slider_typeof()));
    type->fp_ctor_ = (void*)SeekBar__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))SeekBar__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))SeekBar__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))SeekBar__Detach_fn;
    ::TYPES[71] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[72] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Slider_typeof());
    ::TYPES[73] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[68] = ::g::Fuse::Android::Controls::ProgressChangedHandler_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[74] = ::g::Android::android::widget::SeekBar_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    ::TYPES[3] = ::g::Uno::Func1_typeof()->MakeType(::g::Android::android::view::MotionEvent_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[18] = ::g::Android::android::view::View_typeof();
    ::TYPES[75] = ::g::Uno::Double_typeof();
    ::TYPES[34] = uObject_typeof();
    ::TYPES[31] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[76] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[44] = ::g::Uno::Int_typeof();
    type->SetFields(55,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Android::Controls::SeekBar, _index), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Android::Controls::SeekBar, _progressChangedEvent), 0,
        ::g::Android::android::widget::SeekBar_typeof(), offsetof(::g::Fuse::Android::Controls::SeekBar, _seekBar), 0);
    return type;
}

// public generated SeekBar() :1271
void SeekBar__ctor_3_fn(SeekBar* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1326
void SeekBar__Attach_fn(SeekBar* __this)
{
    __this->Create();
    uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[73/*Uno.UX.ValueChangedHandler<double>*/], (void*)SeekBar__OnValueChanged_fn, __this));
    __this->_progressChangedEvent = ::g::Fuse::Android::Controls::ProgressChangedListener::AddHandler(__this->_seekBar, uDelegate::New(::TYPES[68/*Fuse.Android.Controls.ProgressChangedHandler*/], (void*)SeekBar__OnSeekBarProgressChanged_fn, __this));
    __this->UpdateValue(uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->Value());
}

// internal override sealed Android.android.view.View CreateInternal() :1278
void SeekBar__CreateInternal_fn(SeekBar* __this, ::g::Android::android::view::View** __retval)
{
    if (::g::Android::java::lang::Object::op_Equality1(__this->_seekBar, NULL))
    {
        __this->_seekBar = ::g::Fuse::Android::Controls::AndroidSeekBar::New17(::g::Android::android::app::Activity::GetAppActivity(), uDelegate::New(::TYPES[3/*Uno.Func<Android.android.view.MotionEvent, bool>*/], (void*)SeekBar__OnTouchEvent_fn, __this));
        uPtr(__this->_seekBar)->setMax(1000);
    }

    return *__retval = __this->_seekBar, void();
}

// protected override sealed void Detach() :1334
void SeekBar__Detach_fn(SeekBar* __this)
{
    uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[73/*Uno.UX.ValueChangedHandler<double>*/], (void*)SeekBar__OnValueChanged_fn, __this));
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_progressChangedEvent), ::TYPES[39/*Uno.IDisposable*/]));
}

// private void LostCallback() :1318
void SeekBar__LostCallback_fn(SeekBar* __this)
{
    __this->LostCallback();
}

// public generated SeekBar New() :1271
void SeekBar__New1_fn(SeekBar** __retval)
{
    *__retval = SeekBar::New1();
}

// private void OnSeekBarProgressChanged(object sender, int value, bool fromUser) :1320
void SeekBar__OnSeekBarProgressChanged_fn(SeekBar* __this, uObject* sender, int* value, bool* fromUser)
{
    __this->OnSeekBarProgressChanged(sender, *value, *fromUser);
}

// private bool OnTouchEvent(Android.android.view.MotionEvent motionEvent) :1289
void SeekBar__OnTouchEvent_fn(SeekBar* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    *__retval = __this->OnTouchEvent(motionEvent);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<double> args) :1340
void SeekBar__OnValueChanged_fn(SeekBar* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void UpdateValue(double value) :1347
void SeekBar__UpdateValue_fn(SeekBar* __this, double* value)
{
    __this->UpdateValue(*value);
}

// public generated SeekBar() [instance] :1271
void SeekBar::ctor_3()
{
    _index = -1;
    ctor_2();
}

// private void LostCallback() [instance] :1318
void SeekBar::LostCallback()
{
    _index = -1;
}

// private void OnSeekBarProgressChanged(object sender, int value, bool fromUser) [instance] :1320
void SeekBar::OnSeekBarProgressChanged(uObject* sender, int value, bool fromUser)
{
    if (fromUser)
        uPtr((::g::Fuse::Controls::Slider*)SemanticControl())->SetValue(uPtr((::g::Fuse::Controls::Slider*)SemanticControl())->ValueFromRelative((double)value / 1000.0), this);
}

// private bool OnTouchEvent(Android.android.view.MotionEvent motionEvent) [instance] :1289
bool SeekBar::OnTouchEvent(::g::Android::android::view::MotionEvent* motionEvent)
{
    int action = uPtr(motionEvent)->getActionMasked();

    switch (action)
    {
        case 0:
        case 5:
        {
            if (_index == -1)
            {
                _index = uPtr(motionEvent)->getPointerId(uPtr(motionEvent)->getPointerCount() - 1);
                ::g::Fuse::Input::Pointer::HardCapture(_index, this, this, uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)SeekBar__LostCallback_fn, this));
            }

            break;
        }
        case 1:
        case 3:
        case 6:
        {
            if (::g::Fuse::Input::Pointer::IsHardCaptured1(uPtr(motionEvent)->getPointerId(uPtr(motionEvent)->getPointerCount() - 1), this))
            {
                ::g::Fuse::Input::Pointer::ReleaseHardCapture(_index);
                _index = -1;
            }

            break;
        }
    }

    return _index != -1;
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<double> args) [instance] :1340
void SeekBar::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    double ret2;

    if ((args == NULL) || (uPtr(args)->Origin() == this))
        return;

    UpdateValue((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2));
}

// private void UpdateValue(double value) [instance] :1347
void SeekBar::UpdateValue(double value)
{
    int inc = (int)(uPtr((::g::Fuse::Controls::Slider*)SemanticControl())->ValueToRelative(value) * 1000.0);
    uPtr(_seekBar)->setProgress(inc);
}

// public generated SeekBar New() [static] :1271
SeekBar* SeekBar::New1()
{
    SeekBar* obj1 = (SeekBar*)uNew(SeekBar_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1423)
// --------------------------------------------------------------------

// public abstract extern class Shape<T> :1423
// {
Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Android.Controls.Shape`1", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(type->T(0)));
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))Shape__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))Shape__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))Shape__Detach_fn;
    ::STRINGS[6] = uString::Const("");
    ::STRINGS[15] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Android\\0.19.3\\Controls\\$.uno");
    ::STRINGS[16] = uString::Const("SetBrush");
    ::TYPES[77] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[78] = ::g::Fuse::Android::Controls::Control_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    ::TYPES[79] = ::g::Android::android::graphics::drawable::ShapeDrawable_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[80] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[81] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[82] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::graphics::drawable::Drawable_typeof());
    ::TYPES[83] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[60] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    ::TYPES[84] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[85] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[86] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[87] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[34] = uObject_typeof();
    ::TYPES[44] = ::g::Uno::Int_typeof();
    ::TYPES[48] = ::g::Uno::Float4_typeof();
    ::TYPES[88] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[89] = ::g::Android::android::graphics::PaintDLRStyle_typeof();
    ::TYPES[31] = ::g::Fuse::Node_typeof();
    type->SetPrecalc(
        ::TYPES[78/*Fuse.Android.Controls.Control`1*/]->MakeType(type->T(0)));
    type->SetFields(55,
        ::g::Android::android::graphics::drawable::LayerDrawable_typeof(), offsetof(::g::Fuse::Android::Controls::Shape, _drawable), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::Controls::Shape, _shapeView), 0);
    return type;
}

// protected generated Shape() :1423
void Shape__ctor_3_fn(Shape* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1434
void Shape__Attach_fn(Shape* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Shape_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(Shape_typeof())->T(0),
    };
    uPtr((::g::Fuse::Controls::Shape*)__this->SemanticControl())->add_ShapeChanged(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Shape__OnShapeChanged_fn, __this));
    __this->OnShapeChanged();
}

// internal override sealed Android.android.view.View CreateInternal() :1428
void Shape__CreateInternal_fn(Shape* __this, ::g::Android::android::view::View** __retval)
{
    __this->_shapeView = ::g::Android::android::view::View::New5(::g::Android::android::app::Activity::GetAppActivity());
    return *__retval = __this->_shapeView, void();
}

// protected override void Detach() :1440
void Shape__Detach_fn(Shape* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Shape_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(Shape_typeof())->T(0),
    };
    uPtr((::g::Fuse::Controls::Shape*)__this->SemanticControl())->remove_ShapeChanged(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Shape__OnShapeChanged_fn, __this));
}

// private Android.android.graphics.drawable.ShapeDrawable GetLayer(int index) :1448
void Shape__GetLayer_fn(Shape* __this, int* index, ::g::Android::android::graphics::drawable::ShapeDrawable** __retval)
{
    *__retval = __this->GetLayer(*index);
}

// private void OnShapeChanged() :1481
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private void SetBrush(Android.android.graphics.drawable.ShapeDrawable drawable, Fuse.Drawing.Brush brush) :1453
void Shape__SetBrush_fn(Shape* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Brush* brush)
{
    __this->SetBrush(drawable, brush);
}

// private void SetStroke(Android.android.graphics.drawable.ShapeDrawable drawable, Fuse.Drawing.Stroke stroke) :1471
void Shape__SetStroke_fn(Shape* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->SetStroke(drawable, stroke);
}

// protected generated Shape() [instance] :1423
void Shape::ctor_3()
{
    ctor_2();
}

// private Android.android.graphics.drawable.ShapeDrawable GetLayer(int index) [instance] :1448
::g::Android::android::graphics::drawable::ShapeDrawable* Shape::GetLayer(int index)
{
    return uAs< ::g::Android::android::graphics::drawable::ShapeDrawable*>(uPtr(_drawable)->getDrawable(index), ::TYPES[79/*Android.android.graphics.drawable.ShapeDrawable*/]);
}

// private void OnShapeChanged() [instance] :1481
void Shape::OnShapeChanged()
{
    uType* __types[] = {
        __type->GetBase(Shape_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __type->GetBase(Shape_typeof())->T(0),
    };
    ::g::Fuse::Drawing::Brush* ret1;
    ::g::Fuse::Drawing::Stroke* ret2;

    if (::g::Android::java::lang::Object::op_Equality1(_shapeView, NULL))
        return;

    int layerCount = (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasFills() ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Fills()), ::TYPES[80/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/])) : 0) + (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasStrokes() ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Strokes()), ::TYPES[81/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/])) : 0);

    if (::g::Android::java::lang::Object::op_Equality1(_drawable, NULL) || (layerCount != uPtr(_drawable)->getNumberOfLayers()))
    {
        ::g::Android::Runtime::ObjectArray* list = (::g::Android::Runtime::ObjectArray*)::g::Android::Runtime::ObjectArray::New6(::TYPES[82/*Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable>*/], layerCount);

        for (int i = 0; i < layerCount; ++i)
            list->Item(i, ::g::Android::android::graphics::drawable::ShapeDrawable::New5());

        _drawable = ::g::Android::android::graphics::drawable::LayerDrawable::New6(list);

        if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 17)
            uPtr(_shapeView)->setBackground(_drawable);
        else
            uPtr(_shapeView)->setBackgroundDrawable(_drawable);
    }

    for (int i1 = 0; i1 < layerCount; ++i1)
        UpdateShapeDrawable(GetLayer(i1));

    int layer = 0;

    if (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasFills())
    {
        uObject* fills = uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Fills();

        for (int i2 = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(fills), ::TYPES[80/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/])) - 1; i2 >= 0; --i2)
            SetBrush(GetLayer(layer++), (::g::Uno::Collections::IList::get_Item_ex(uInterface(fills, ::TYPES[84/*Uno.Collections.IList<Fuse.Drawing.Brush>*/]), uCRef<int>(i2), &ret1), ret1));
    }

    if (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasStrokes())
    {
        uObject* strokes = uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Strokes();

        for (int i3 = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(strokes), ::TYPES[81/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/])) - 1; i3 >= 0; --i3)
            SetStroke(GetLayer(layer++), (::g::Uno::Collections::IList::get_Item_ex(uInterface(strokes, ::TYPES[85/*Uno.Collections.IList<Fuse.Drawing.Stroke>*/]), uCRef<int>(i3), &ret2), ret2));
    }
}

// private void SetBrush(Android.android.graphics.drawable.ShapeDrawable drawable, Fuse.Drawing.Brush brush) [instance] :1453
void Shape::SetBrush(::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Brush* brush)
{
    ::g::Android::android::graphics::Paint* p = uPtr(drawable)->getPaint();
    ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);
    ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[86/*Fuse.Drawing.SolidColor*/]);

    if (sc != NULL)
        c = uPtr(sc)->Color();

    ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[87/*Fuse.Drawing.StaticSolidColor*/]);

    if (ssc != NULL)
        c = uPtr(ssc)->Color();

    if ((sc == NULL) && (ssc == NULL))
        ::g::Fuse::Diagnostics::Unsupported(::STRINGS[6/*""*/], brush, ::STRINGS[15/*"C:\\Program...*/], 1466, ::STRINGS[16/*"SetBrush"*/]);

    uPtr(p)->setARGB((int)(c.W * 255.0f), (int)(c.X * 255.0f), (int)(c.Y * 255.0f), (int)(c.Z * 255.0f));
}

// private void SetStroke(Android.android.graphics.drawable.ShapeDrawable drawable, Fuse.Drawing.Stroke stroke) [instance] :1471
void Shape::SetStroke(::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    uType* __types[] = {
        __type->GetBase(Shape_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __type->GetBase(Shape_typeof())->T(0),
    };

    if (uPtr(stroke)->Brush() != NULL)
        SetBrush(drawable, uPtr(stroke)->Brush());

    ::g::Android::android::graphics::Paint* p = uPtr(drawable)->getPaint();
    uPtr(p)->setStyle(::g::Android::android::graphics::PaintDLRStyle::STROKE());
    p->setStrokeWidth(stroke->Width() * uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->PointDensity());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(269)
// -------------------------------------------------------------------

// public sealed extern class Switch :269
// {
::g::Fuse::Android::Controls::CompoundButton_type* Switch_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::CompoundButton_type);
    type = (::g::Fuse::Android::Controls::CompoundButton_type*)uClassType::New("Fuse.Android.Controls.Switch", options);
    type->SetBase(::g::Fuse::Android::Controls::CompoundButton_typeof());
    type->fp_ctor_ = (void*)Switch__New1_fn;
    type->fp_CreateCompoundButton = (void(*)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**))Switch__CreateCompoundButton_fn;
    ::TYPES[21] = ::g::Android::android::widget::CompoundButton_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    type->SetFields(57);
    return type;
}

// public generated Switch() :269
void Switch__ctor_4_fn(Switch* __this)
{
    __this->ctor_4();
}

// internal override sealed Android.android.widget.CompoundButton CreateCompoundButton() :271
void Switch__CreateCompoundButton_fn(Switch* __this, ::g::Android::android::widget::CompoundButton** __retval)
{
    return *__retval = ::g::Android::android::widget::Switch::New17(::g::Android::android::app::Activity::GetAppActivity()), void();
}

// public generated Switch New() :269
void Switch__New1_fn(Switch** __retval)
{
    *__retval = Switch::New1();
}

// public generated Switch() [instance] :269
void Switch::ctor_4()
{
    ctor_3();
}

// public generated Switch New() [static] :269
Switch* Switch::New1()
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1533)
// --------------------------------------------------------------------

// internal extern delegate void TextChangedHandler(object sender, string text) :1533
uDelegateType* TextChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.Controls.TextChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::String_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1535)
// --------------------------------------------------------------------

// internal sealed extern class TextChangedListener :1535
// {
TextChangedListener_type* TextChangedListener_typeof()
{
    static uSStrong<TextChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(TextChangedListener);
    options.TypeSize = sizeof(TextChangedListener_type);
    type = (TextChangedListener_type*)uClassType::New("Fuse.Android.Controls.TextChangedListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onTextChanged = (void(*)(uObject*, uObject*, int*, int*, int*))TextChangedListener__Android_android_text_TextWatcher_onTextChanged_fn;
    type->interface2.fp_beforeTextChanged = (void(*)(uObject*, uObject*, int*, int*, int*))TextChangedListener__Android_android_text_TextWatcher_beforeTextChanged_fn;
    type->interface2.fp_afterTextChanged = (void(*)(uObject*, uObject*))TextChangedListener__Android_android_text_TextWatcher_afterTextChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextChangedListener__Uno_IDisposable_Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[17] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_TextChangedListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::STRINGS[6] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[90] = ::g::Android::android::text::TextWatcher_typeof();
    ::TYPES[39] = ::g::Uno::IDisposable_typeof();
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[91] = ::g::Fuse::Android::Controls::TextChangedHandler_typeof();
    ::TYPES[34] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(TextChangedListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextChangedListener_type, interface1),
        ::g::Android::android::text::TextWatcher_typeof(), offsetof(TextChangedListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::Controls::TextChangedHandler_typeof(), offsetof(::g::Fuse::Android::Controls::TextChangedListener, _handler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::TextChangedListener, _isDisposed), 0,
        ::g::Android::android::widget::TextView_typeof(), offsetof(::g::Fuse::Android::Controls::TextChangedListener, _textView), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::TextChangedListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private TextChangedListener(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) :1551
void TextChangedListener__ctor_4_fn(TextChangedListener* __this, ::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    __this->ctor_4(textView, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) :1541
void TextChangedListener__AddHandler_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, uObject** __retval)
{
    *__retval = TextChangedListener::AddHandler(textView, handler);
}

// private void Android.android.text.TextWatcher.afterTextChanged(Android.android.text.Editable arg0) :1570
void TextChangedListener__Android_android_text_TextWatcher_afterTextChanged_fn(TextChangedListener* __this, uObject* arg0)
{
}

// private void Android.android.text.TextWatcher.beforeTextChanged(Android.java.lang.CharSequence cs, int start, int count, int after) :1567
void TextChangedListener__Android_android_text_TextWatcher_beforeTextChanged_fn(TextChangedListener* __this, uObject* cs, int* start, int* count, int* after)
{
}

// private void Android.android.text.TextWatcher.onTextChanged(Android.java.lang.CharSequence cs, int start, int before, int arg3) :1560
void TextChangedListener__Android_android_text_TextWatcher_onTextChanged_fn(TextChangedListener* __this, uObject* cs, int* start, int* before, int* arg3)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(2, (::g::Android::android::widget::TextView*)__this->_textView, (cs != NULL) ? (uString*)::g::Android::java::lang::String::op_Implicit(::g::Android::java::lang::CharSequence::toString(uInterface(uPtr(cs), ::TYPES[20/*Android.java.lang.CharSequence*/]))) : ::STRINGS[6/*""*/]);
}

// private TextChangedListener New(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) :1551
void TextChangedListener__New5_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, TextChangedListener** __retval)
{
    *__retval = TextChangedListener::New5(textView, handler);
}

// private void Uno.IDisposable.Dispose() :1574
void TextChangedListener__Uno_IDisposable_Dispose1_fn(TextChangedListener* __this)
{
    if (!__this->_isDisposed)
    {
        uPtr(__this->_textView)->removeTextChangedListener((uObject*)__this);
        __this->_isDisposed = true;
    }
}

jclass TextChangedListener::_javaClass2_;

// private TextChangedListener(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) [instance] :1551
void TextChangedListener::ctor_4(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[17/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(TextChangedListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        TextChangedListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[17/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_onTextChanged","(JLjava/lang/CharSequence;IIIJJJJ)V",Binding_Fuse_Android_Controls_TextChangedListener__onTextChanged20152);
        REG_MTD(1,"__n_beforeTextChanged","(JLjava/lang/CharSequence;IIIJJJJ)V",Binding_Fuse_Android_Controls_TextChangedListener__beforeTextChanged20151);
        REG_MTD(2,"__n_afterTextChanged","(JLandroid/text/Editable;J)V",Binding_Fuse_Android_Controls_TextChangedListener__afterTextChanged20153);
        COMMIT_REG_MTD(TextChangedListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _textView = textView;
    _handler = handler;
    uPtr(_textView)->addTextChangedListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) [static] :1541
uObject* TextChangedListener::AddHandler(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    return (uObject*)TextChangedListener::New5(textView, handler);
}

// private TextChangedListener New(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) [static] :1551
TextChangedListener* TextChangedListener::New5(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    TextChangedListener* obj1 = (TextChangedListener*)uNew(TextChangedListener_typeof());
    obj1->ctor_4(textView, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1598)
// --------------------------------------------------------------------

// public extern class TextEdit :1598
// {
TextEdit_type* TextEdit_typeof()
{
    static uSStrong<TextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(TextEdit_type);
    type = (TextEdit_type*)uClassType::New("Fuse.Android.Controls.TextEdit", options);
    type->SetBase(::g::Fuse::Android::Controls::TextViewBase_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof()));
    type->fp_ctor_ = (void*)TextEdit__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))TextEdit__Attach_fn;
    type->fp_CreateTextView = (void(*)(::g::Fuse::Android::Controls::TextViewBase*, ::g::Android::android::widget::TextView**))TextEdit__CreateTextView_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))TextEdit__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))TextEdit__GetMarginSize_fn;
    type->fp_OnTextLayoutPropertyChanged = (void(*)(::g::Fuse::Android::Controls::TextViewBase*, uObject*, ::g::Uno::EventArgs*))TextEdit__OnTextLayoutPropertyChanged_fn;
    type->fp_OnTextRenderPropertyChanged = (void(*)(::g::Fuse::Android::Controls::TextViewBase*, uObject*, ::g::Uno::EventArgs*))TextEdit__OnTextRenderPropertyChanged_fn;
    type->fp_get_Plain = TextEdit__get_Plain_fn;
    type->fp_get_ShowKeyboard = (void(*)(::g::Fuse::Android::Controls::Control*, bool*))TextEdit__get_ShowKeyboard_fn;
    ::STRINGS[18] = uString::Const("android.widget.TextView");
    ::STRINGS[19] = uString::Const("mCursorDrawableRes");
    ::STRINGS[20] = uString::Const("mEditor");
    ::STRINGS[21] = uString::Const("mCursorDrawable");
    ::TYPES[31] = ::g::Fuse::Node_typeof();
    ::TYPES[41] = ::g::Fuse::Android::Controls::EditorActionHandler_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[92] = ::g::Android::android::widget::TextView_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    ::TYPES[93] = ::g::Android::Base::Versions_typeof();
    ::TYPES[44] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Uno::Float2_typeof();
    ::TYPES[43] = ::g::Fuse::IViewport_typeof();
    ::TYPES[94] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[95] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof());
    ::TYPES[47] = ::g::Uno::Float_typeof();
    ::TYPES[96] = ::g::Fuse::Android::TextControlLayout_typeof();
    ::TYPES[40] = ::g::Fuse::Android::Controls::EditorActionArgs_typeof();
    ::TYPES[97] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[20] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[82] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::graphics::drawable::Drawable_typeof());
    ::TYPES[98] = ::g::Android::android::graphics::PorterDuffDLRMode_typeof();
    type->SetFields(59,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Android::Controls::TextEdit, _editorActionEvent), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::Controls::TextEdit, _textLayout), 0,
        ::g::Android::android::widget::TextView_typeof(), offsetof(::g::Fuse::Android::Controls::TextEdit, _textView1), 0);
    return type;
}

// public TextEdit() :1602
void TextEdit__ctor_4_fn(TextEdit* __this)
{
    __this->ctor_4();
}

// protected override sealed void Attach() :1672
void TextEdit__Attach_fn(TextEdit* __this)
{
    ::g::Fuse::Android::Controls::TextViewBase__Attach_fn(__this);
    __this->_textLayout = ::g::Fuse::Android::TextControlLayout::New1();
    __this->_editorActionEvent = ::g::Fuse::Android::Controls::EditorActionListener::AddHandler(__this->_textView1, uDelegate::New(::TYPES[41/*Fuse.Android.Controls.EditorActionHandler*/], (void*)TextEdit__OnEditorAction_fn, __this));
}

// internal override sealed Android.android.widget.TextView CreateTextView() :1626
void TextEdit__CreateTextView_fn(TextEdit* __this, ::g::Android::android::widget::TextView** __retval)
{
    if (::g::Android::java::lang::Object::op_Equality1(__this->_textView1, NULL))
    {
        __this->_textView1 = ::g::Android::android::widget::EditText::New13(::g::Android::android::app::Activity::GetAppActivity());

        if (__this->Plain())
        {
            uPtr(__this->_textView1)->setIncludeFontPadding(false);
            uPtr(__this->_textView1)->setBackgroundResource(0);
            uPtr(__this->_textView1)->setPadding(0, 0, 0, 0);

            if (::g::Android::Base::Versions::ApiLevel() >= 16)
                uPtr(__this->_textView1)->setPaddingRelative(0, 0, 0, 0);
        }
    }

    return *__retval = __this->_textView1, void();
}

// protected override sealed void Detach() :1679
void TextEdit__Detach_fn(TextEdit* __this)
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_editorActionEvent), ::TYPES[39/*Uno.IDisposable*/]));
    uPtr(__this->_textLayout)->Dispose();
    __this->_textLayout = NULL;
    ::g::Fuse::Android::Controls::TextViewBase__Detach_fn(__this);
}

// public override sealed float2 GetMarginSize(float2 fillSize, Fuse.SizeFlags fillSet) :1616
void TextEdit__GetMarginSize_fn(TextEdit* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;

    if (__this->_textLayout == NULL)
        return *__retval = (::g::Fuse::Android::Controls::Element__GetMarginSize_fn(__this, uCRef(fillSize_), uCRef<int>(fillSet_), &ret2), ret2), void();

    float wrapWidth = ((fillSet_ & 1) == 1) ? ::g::Uno::Math::Max1(fillSize_.X * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[43/*Fuse.IViewport*/])), 0.0f) : FLT_INF;
    uPtr(__this->_textLayout)->Measure((::g::Fuse::Controls::TextEdit*)__this->SemanticControl(), wrapWidth);
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(uPtr(__this->_textLayout)->Layout())->getWidth(), (float)uPtr(uPtr(__this->_textLayout)->Layout())->getHeight()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[43/*Fuse.IViewport*/]))), void();
}

// public TextEdit New() :1602
void TextEdit__New1_fn(TextEdit** __retval)
{
    *__retval = TextEdit::New1();
}

// private bool OnEditorAction(object sender, Fuse.Android.Controls.EditorActionArgs args) :1770
void TextEdit__OnEditorAction_fn(TextEdit* __this, uObject* sender, ::g::Fuse::Android::Controls::EditorActionArgs* args, bool* __retval)
{
    *__retval = __this->OnEditorAction(sender, args);
}

// protected override sealed void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1689
void TextEdit__OnTextLayoutPropertyChanged_fn(TextEdit* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    int flags = 0;

    switch (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->InputHint())
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        default:
        {
            flags = flags | 1;
            break;
        }
    }

    if (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->IsMultiline())
        flags = flags | 131072;

    if (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->IsPassword())
        flags = flags | 128;

    uPtr(__this->_textView1)->setInputType(flags);
    uPtr(__this->_textView1)->setImeOptions(__this->ReturnKeyType());
    ::g::Fuse::Android::Controls::TextViewBase__OnTextLayoutPropertyChanged_fn(__this, sender, args);

    if (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->IsMultiline())
        uPtr(__this->_textView1)->setMaxLines(2147483647);
    else

        switch (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->TextWrapping())
        {
            case 1:
            {
                uPtr(__this->_textView1)->setMaxLines(2147483647);
                break;
            }
            case 0:
            {
                uPtr(__this->_textView1)->setMaxLines(1);
                break;
            }
        }
}

// protected override sealed void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1759
void TextEdit__OnTextRenderPropertyChanged_fn(TextEdit* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->SetCursorDrawableColor(::g::Fuse::Android::Helpers::EncodeColor(uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->CaretColor()));
    uPtr(__this->_textView1)->setHint((uObject*)::g::Android::java::lang::String::op_Implicit1(uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->PlaceholderText()));
    uPtr(__this->_textView1)->setHintTextColor1(::g::Fuse::Android::Helpers::EncodeColor(uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->PlaceholderColor()));
    ::g::Fuse::Android::Controls::TextViewBase__OnTextRenderPropertyChanged_fn(__this, sender, args);
}

// protected virtual bool get_Plain() :1607
void TextEdit__get_Plain_fn(TextEdit* __this, bool* __retval)
{
    return *__retval = false, void();
}

// private int get_ReturnKeyType() :1745
void TextEdit__get_ReturnKeyType_fn(TextEdit* __this, int* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private void SetCursorDrawableColor(int color) :1643
void TextEdit__SetCursorDrawableColor_fn(TextEdit* __this, int* color)
{
    __this->SetCursorDrawableColor(*color);
}

// protected override sealed bool get_ShowKeyboard() :1687
void TextEdit__get_ShowKeyboard_fn(TextEdit* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public TextEdit() [instance] :1602
void TextEdit::ctor_4()
{
    ctor_3();
    ::g::Fuse::Input::Focus::SetIsFocusable(this, true);
}

// private bool OnEditorAction(object sender, Fuse.Android.Controls.EditorActionArgs args) [instance] :1770
bool TextEdit::OnEditorAction(uObject* sender, ::g::Fuse::Android::Controls::EditorActionArgs* args)
{
    switch (uPtr(args)->ActionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->OnAction();
    }

    return false;
}

// private int get_ReturnKeyType() [instance] :1745
int TextEdit::ReturnKeyType()
{
    switch (uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->ActionStyle())
    {
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
    }

    return 0;
}

// private void SetCursorDrawableColor(int color) [instance] :1643
void TextEdit::SetCursorDrawableColor(int color)
{
    try
    {
        ::g::Android::java::lang::Class* textViewClass = ::g::Android::java::lang::Class::forName(::g::Android::java::lang::String::op_Implicit1(::STRINGS[18/*"android.wid...*/]));
        ::g::Android::java::lang::reflect::Field* fCursorDrawableRes = uPtr(textViewClass)->getDeclaredField(::g::Android::java::lang::String::op_Implicit1(::STRINGS[19/*"mCursorDraw...*/]));
        uPtr(fCursorDrawableRes)->setAccessible1(true);
        int mCursorDrawableRes = fCursorDrawableRes->getInt(_textView1);
        ::g::Android::java::lang::reflect::Field* fEditor = textViewClass->getDeclaredField(::g::Android::java::lang::String::op_Implicit1(::STRINGS[20/*"mEditor"*/]));
        uPtr(fEditor)->setAccessible1(true);
        ::g::Android::java::lang::Object* editor = fEditor->get(_textView1);
        ::g::Android::java::lang::reflect::Field* fCursorDrawable = uPtr(uPtr(editor)->getClass())->getDeclaredField(::g::Android::java::lang::String::op_Implicit1(::STRINGS[21/*"mCursorDraw...*/]));
        uPtr(fCursorDrawable)->setAccessible1(true);
        ::g::Android::Runtime::ObjectArray* r = (::g::Android::Runtime::ObjectArray*)::g::Android::Runtime::ObjectArray::New6(::TYPES[82/*Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable>*/], 2);
        r->Item(0, uPtr(uPtr(uPtr(_textView1)->getContext())->getResources())->getDrawable(mCursorDrawableRes));
        r->Item(1, uPtr(uPtr(uPtr(_textView1)->getContext())->getResources())->getDrawable(mCursorDrawableRes));
        uPtr((::g::Android::android::graphics::drawable::Drawable*)r->Item(0))->setColorFilter1(color, ::g::Android::android::graphics::PorterDuffDLRMode::SRC_IN());
        uPtr((::g::Android::android::graphics::drawable::Drawable*)r->Item(1))->setColorFilter1(color, ::g::Android::android::graphics::PorterDuffDLRMode::SRC_IN());
        fCursorDrawable->set(editor, r);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }
}

// public TextEdit New() [static] :1602
TextEdit* TextEdit::New1()
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1951)
// --------------------------------------------------------------------

// public sealed extern class TextView :1951
// {
::g::Fuse::Android::Controls::TextViewBase_type* TextView_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::TextViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 59;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::TextViewBase_type);
    type = (::g::Fuse::Android::Controls::TextViewBase_type*)uClassType::New("Fuse.Android.Controls.TextView", options);
    type->SetBase(::g::Fuse::Android::Controls::TextViewBase_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof()));
    type->fp_ctor_ = (void*)TextView__New1_fn;
    type->fp_CreateTextView = (void(*)(::g::Fuse::Android::Controls::TextViewBase*, ::g::Android::android::widget::TextView**))TextView__CreateTextView_fn;
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    type->SetFields(59);
    return type;
}

// public generated TextView() :1951
void TextView__ctor_4_fn(TextView* __this)
{
    __this->ctor_4();
}

// internal override sealed Android.android.widget.TextView CreateTextView() :1953
void TextView__CreateTextView_fn(TextView* __this, ::g::Android::android::widget::TextView** __retval)
{
    return *__retval = ::g::Android::android::widget::TextView::New9(::g::Android::android::app::Activity::GetAppActivity()), void();
}

// public generated TextView New() :1951
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :1951
void TextView::ctor_4()
{
    ctor_3();
}

// public generated TextView New() [static] :1951
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(1820)
// --------------------------------------------------------------------

// public abstract extern class TextViewBase<T> :1820
// {
TextViewBase_type* TextViewBase_typeof()
{
    static uSStrong<TextViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 59;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TextViewBase);
    options.TypeSize = sizeof(TextViewBase_type);
    type = (TextViewBase_type*)uClassType::New("Fuse.Android.Controls.TextViewBase`1", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(type->T(0)));
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))TextViewBase__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))TextViewBase__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))TextViewBase__Detach_fn;
    type->fp_OnTextLayoutPropertyChanged = TextViewBase__OnTextLayoutPropertyChanged_fn;
    type->fp_OnTextRenderPropertyChanged = TextViewBase__OnTextRenderPropertyChanged_fn;
    ::STRINGS[6] = uString::Const("");
    ::TYPES[34] = uObject_typeof();
    ::TYPES[99] = ::g::Uno::EventArgs_typeof();
    ::TYPES[94] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[78] = ::g::Fuse::Android::Controls::Control_typeof();
    ::TYPES[52] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[91] = ::g::Fuse::Android::Controls::TextChangedHandler_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[18] = ::g::Android::android::view::View_typeof();
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[100] = ::g::Android::android::graphics::Typeface_typeof();
    ::TYPES[101] = ::g::Android::android::util::TypedValue_typeof();
    ::TYPES[43] = ::g::Fuse::IViewport_typeof();
    ::TYPES[31] = ::g::Fuse::Node_typeof();
    ::TYPES[60] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    ::TYPES[102] = ::g::Android::android::view::Gravity_typeof();
    ::TYPES[19] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[20] = ::g::Android::java::lang::CharSequence_typeof();
    type->SetPrecalc(
        ::TYPES[78/*Fuse.Android.Controls.Control`1*/]->MakeType(type->T(0)));
    type->SetFields(55,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase, _defaultTextColor), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase, _settingText), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase, _textChangedEvent), 0,
        ::g::Android::android::widget::TextView_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase, _textView), 0);
    return type;
}

// protected generated TextViewBase() :1820
void TextViewBase__ctor_3_fn(TextViewBase* __this)
{
    __this->ctor_3();
}

// protected override void Attach() :1829
void TextViewBase__Attach_fn(TextViewBase* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(TextViewBase_typeof())->T(0),
    };
    __this->Create();
    __this->OnTextLayoutPropertyChanged(__this, ::g::Uno::EventArgs::Empty());
    __this->OnTextRenderPropertyChanged(__this, ::g::Uno::EventArgs::Empty());
    __this->SetText();
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], __this, offsetof(TextViewBase_type, fp_OnTextLayoutPropertyChanged)));
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], __this, offsetof(TextViewBase_type, fp_OnTextRenderPropertyChanged)));
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[15/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextViewBase__OnValueChanged_fn, __this));
    __this->_textChangedEvent = ::g::Fuse::Android::Controls::TextChangedListener::AddHandler(__this->_textView, uDelegate::New(::TYPES[91/*Fuse.Android.Controls.TextChangedHandler*/], (void*)TextViewBase__OnTextChanged_fn, __this));
}

// internal override sealed Android.android.view.View CreateInternal() :1851
void TextViewBase__CreateInternal_fn(TextViewBase* __this, ::g::Android::android::view::View** __retval)
{
    if (::g::Android::java::lang::Object::op_Equality1(__this->_textView, NULL))
    {
        __this->_textView = __this->CreateTextView();
        __this->_defaultTextColor = uPtr(uPtr(__this->_textView)->getTextColors())->getDefaultColor();
        uPtr(__this->_textView)->setHorizontallyScrolling(false);
        uPtr(__this->_textView)->setEllipsize(NULL);
    }

    return *__retval = __this->_textView, void();
}

// protected override void Detach() :1843
void TextViewBase__Detach_fn(TextViewBase* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(TextViewBase_typeof())->T(0),
    };
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], __this, offsetof(TextViewBase_type, fp_OnTextLayoutPropertyChanged)));
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[52/*Uno.EventHandler*/], __this, offsetof(TextViewBase_type, fp_OnTextRenderPropertyChanged)));
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[15/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextViewBase__OnValueChanged_fn, __this));
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_textChangedEvent), ::TYPES[39/*Uno.IDisposable*/]));
}

// protected internal void OnTextChanged(object sender, string text) :1940
void TextViewBase__OnTextChanged_fn(TextViewBase* __this, uObject* sender, uString* text)
{
    __this->OnTextChanged(sender, text);
}

// protected virtual void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1866
void TextViewBase__OnTextLayoutPropertyChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    uType* __types[] = {
        __this->__type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(TextViewBase_typeof())->T(0),
    };
    bool ret1;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), (::g::Fuse::Controls::TextControl*)__this->SemanticControl(), &ret1), ret1))
        uPtr(__this->_textView)->setTypeface(::g::Fuse::Android::TypefaceCache::GetTypeface(uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->Font()));
    else
        uPtr(__this->_textView)->setTypeface(::g::Android::android::graphics::Typeface::DEFAULT());

    uPtr(__this->_textView)->setTextSize1(::g::Android::android::util::TypedValue::COMPLEX_UNIT_DIP(), uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->FontSize());
    uPtr(__this->_textView)->setLineSpacing(uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->LineSpacing() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->Viewport()), ::TYPES[43/*Fuse.IViewport*/])), 1.0f);

    if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 17)
        uPtr(__this->_textView)->setTextAlignment(::g::Android::android::view::View::TEXT_ALIGNMENT_GRAVITY());

    switch (uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->TextAlignment())
    {
        case 0:
        {
            uPtr(__this->_textView)->setGravity(::g::Android::android::view::Gravity::LEFT());
            break;
        }
        case 1:
        {
            uPtr(__this->_textView)->setGravity(::g::Android::android::view::Gravity::CENTER_HORIZONTAL());
            break;
        }
        case 2:
        {
            uPtr(__this->_textView)->setGravity(::g::Android::android::view::Gravity::RIGHT());
            break;
        }
    }

    switch (uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->TextWrapping())
    {
        case 1:
        {
            uPtr(__this->_textView)->setMaxLines(2147483647);
            break;
        }
        case 0:
        {
            uPtr(__this->_textView)->setMaxLines(1);
            break;
        }
    }

    __this->InvalidateLayout(2);
}

// protected virtual void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1905
void TextViewBase__OnTextRenderPropertyChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    uType* __types[] = {
        __this->__type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(TextViewBase_typeof())->T(0),
    };
    uPtr(__this->_textView)->setTextColor1(::g::Fuse::Android::Helpers::EncodeColor(uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->TextColor()));
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :1934
void TextViewBase__OnValueChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// protected void SetText() :1911
void TextViewBase__SetText_fn(TextViewBase* __this)
{
    __this->SetText();
}

// protected generated TextViewBase() [instance] :1820
void TextViewBase::ctor_3()
{
    ctor_2();
}

// protected internal void OnTextChanged(object sender, string text) [instance] :1940
void TextViewBase::OnTextChanged(uObject* sender, uString* text)
{
    uType* __types[] = {
        __type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __type->GetBase(TextViewBase_typeof())->T(0),
    };

    if (!_settingText)
        uPtr((::g::Fuse::Controls::TextControl*)SemanticControl())->SetValue1(text, this);

    InvalidateLayout(2);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :1934
void TextViewBase::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    if (uPtr(args)->Origin() == this)
        return;

    SetText();
}

// protected void SetText() [instance] :1911
void TextViewBase::SetText()
{
    uType* __types[] = {
        __type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __type->GetBase(TextViewBase_typeof())->T(0),
    };

    try
    {
        _settingText = true;

        if (::g::Uno::String::op_Inequality(uPtr((::g::Fuse::Controls::TextControl*)SemanticControl())->Value(), NULL))
        {
            uObject* charSequence = (uObject*)::g::Android::java::lang::String::op_Implicit1(uPtr((::g::Fuse::Controls::TextControl*)SemanticControl())->Value());
            uPtr(_textView)->setText(charSequence);
        }
        else
        {
            uObject* charSequence1 = (uObject*)::g::Android::java::lang::String::op_Implicit1(::STRINGS[6/*""*/]);
            uPtr(_textView)->setText(charSequence1);
        }

        uPtr(_textView)->requestLayout();
    }
    catch (const uThrowable& __t)
    {
        _settingText = false;
        throw __t;
    }
    // finally
    _settingText = false;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(296)
// -------------------------------------------------------------------

// public sealed extern class ToggleButton :296
// {
::g::Fuse::Android::Controls::CompoundButton_type* ToggleButton_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.ObjectSize = sizeof(ToggleButton);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::CompoundButton_type);
    type = (::g::Fuse::Android::Controls::CompoundButton_type*)uClassType::New("Fuse.Android.Controls.ToggleButton", options);
    type->SetBase(::g::Fuse::Android::Controls::CompoundButton_typeof());
    type->fp_CreateCompoundButton = (void(*)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**))ToggleButton__CreateCompoundButton_fn;
    ::TYPES[21] = ::g::Android::android::widget::CompoundButton_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    type->SetFields(57);
    return type;
}

// internal override sealed Android.android.widget.CompoundButton CreateCompoundButton() :298
void ToggleButton__CreateCompoundButton_fn(ToggleButton* __this, ::g::Android::android::widget::CompoundButton** __retval)
{
    return *__retval = ::g::Android::android::widget::Switch::New17(::g::Android::android::app::Activity::GetAppActivity()), void();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(2186)
// --------------------------------------------------------------------

// internal sealed extern class WebChromeClient :2186
// {
::g::Android::android::webkit::WebChromeClient_type* WebChromeClient_typeof()
{
    static uSStrong< ::g::Android::android::webkit::WebChromeClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebChromeClient);
    options.TypeSize = sizeof(::g::Android::android::webkit::WebChromeClient_type);
    type = (::g::Android::android::webkit::WebChromeClient_type*)uClassType::New("Fuse.Android.Controls.WebChromeClient", options);
    type->SetBase(::g::Android::android::webkit::WebChromeClient_typeof());
    type->fp_ctor_ = (void*)WebChromeClient__New7_fn;
    type->fp_onProgressChanged = (void(*)(::g::Android::android::webkit::WebChromeClient*, ::g::Android::android::webkit::WebView*, int*))WebChromeClient__onProgressChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[22] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_WebChromeClient");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[52] = ::g::Uno::EventHandler_typeof();
    ::TYPES[34] = uObject_typeof();
    ::TYPES[99] = ::g::Uno::EventArgs_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::webkit::WebChromeClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::webkit::WebChromeClient_type, interface1));
    type->SetFields(5,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebChromeClient, ProgressChanged1), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::WebChromeClient::_javaClass3_, uFieldFlagsStatic);
    return type;
}

// public generated WebChromeClient() :2186
void WebChromeClient__ctor_6_fn(WebChromeClient* __this)
{
    __this->ctor_6();
}

// public generated WebChromeClient New() :2186
void WebChromeClient__New7_fn(WebChromeClient** __retval)
{
    *__retval = WebChromeClient::New7();
}

// public override sealed void onProgressChanged(Android.android.webkit.WebView arg0, int arg1) :2191
void WebChromeClient__onProgressChanged_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1)
{
    int arg1_ = *arg1;
    ::g::Android::android::webkit::WebChromeClient__onProgressChanged_fn(__this, arg0, uCRef<int>(arg1_));

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_ProgressChanged(Uno.EventHandler value) :2189
void WebChromeClient__add_ProgressChanged_fn(WebChromeClient* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) :2189
void WebChromeClient__remove_ProgressChanged_fn(WebChromeClient* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

jclass WebChromeClient::_javaClass3_;

// public generated WebChromeClient() [instance] :2186
void WebChromeClient::ctor_6()
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[22/*"com.Binding...*/];
    }

    ctor_5(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(WebChromeClient::_javaClass3(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        WebChromeClient::_javaClass3() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[22/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onProgressChanged","(JLandroid/webkit/WebView;IJJ)V",Binding_Fuse_Android_Controls_WebChromeClient__onProgressChanged24000);
        COMMIT_REG_MTD(WebChromeClient::_javaClass3());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// public generated void add_ProgressChanged(Uno.EventHandler value) [instance] :2189
void WebChromeClient::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[52/*Uno.EventHandler*/]);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) [instance] :2189
void WebChromeClient::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[52/*Uno.EventHandler*/]);
}

// public generated WebChromeClient New() [static] :2186
WebChromeClient* WebChromeClient::New7()
{
    WebChromeClient* obj1 = (WebChromeClient*)uNew(WebChromeClient_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(2010)
// --------------------------------------------------------------------

// public sealed extern class WebView :2010
// {
WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.Android.Controls.WebView", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::WebView_typeof()));
    type->fp_ctor_ = (void*)WebView__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))WebView__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))WebView__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))WebView__Detach_fn;
    type->interface0.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface0.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface0.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface0.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface0.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface0.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface0.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface0.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface0.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface0.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface0.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface0.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface0.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface0.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface0.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface0.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface1.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface1.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface1.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface2.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface2.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface2.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface2.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface3.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface3.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    ::STRINGS[23] = uString::Const("FuseJSHandler");
    ::STRINGS[24] = uString::Const("javascript:");
    ::STRINGS[6] = uString::Const("");
    ::STRINGS[25] = uString::Const("text/html");
    ::STRINGS[26] = uString::Const("UTF-8");
    ::STRINGS[27] = uString::Const("utf-8");
    ::TYPES[103] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[104] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::WebView_typeof());
    ::TYPES[105] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[106] = ::g::Android::java::util::Observer_typeof();
    ::TYPES[17] = ::g::Android::android::content::Context_typeof();
    ::TYPES[107] = ::g::Android::android::webkit::WebViewClient_typeof();
    ::TYPES[108] = ::g::Android::android::webkit::WebChromeClient_typeof();
    ::TYPES[109] = ::g::Fuse::Android::Controls::JsResultHandler_typeof();
    ::TYPES[18] = ::g::Android::android::view::View_typeof();
    ::TYPES[75] = ::g::Uno::Double_typeof();
    ::TYPES[110] = ::g::Fuse::Android::Controls::WebViewClient_typeof();
    ::TYPES[111] = ::g::Fuse::Android::Controls::WebChromeClient_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface0),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface3));
    type->SetFields(55,
        ::g::Android::android::webkit::WebView_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _androidWebView), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _file), 0,
        ::g::Fuse::Android::Controls::JsResultHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _resultHandler), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _source), 0,
        ::g::Fuse::Android::Controls::WebChromeClient_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webChromeClient), 0,
        ::g::Fuse::Android::Controls::WebViewClient_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webViewClient), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _BaseUrl), 0);
    return type;
}

// public generated WebView() :2010
void WebView__ctor_3_fn(WebView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :2042
void WebView__Attach_fn(WebView* __this)
{
    __this->Create();
    uPtr((::g::Fuse::Controls::WebView*)__this->SemanticControl())->WebViewClient((uObject*)__this);
}

// public generated string get_BaseUrl() :2066
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :2066
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public void add_BeginLoading(Uno.EventHandler value) :2140
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public void remove_BeginLoading(Uno.EventHandler value) :2141
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :2088
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :2093
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// internal override sealed Android.android.view.View CreateInternal() :2022
void WebView__CreateInternal_fn(WebView* __this, ::g::Android::android::view::View** __retval)
{
    if (::g::Android::java::lang::Object::op_Equality1(__this->_androidWebView, NULL))
    {
        ::g::Android::Runtime::UnoHelper::Init();
        __this->_resultHandler = ::g::Fuse::Android::Controls::JsResultHandler::New5(::STRINGS[23/*"FuseJSHandler"*/], NULL);
        ::g::Android::java::util::Observable* obs = ::g::Android::Runtime::UnoHelper::MakeJSObservable((uObject*)__this->_resultHandler);
        __this->_webChromeClient = ::g::Fuse::Android::Controls::WebChromeClient::New7();
        __this->_webViewClient = ::g::Fuse::Android::Controls::WebViewClient::New7();
        __this->_androidWebView = ::g::Android::android::webkit::WebView::New13(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_androidWebView)->setWebViewClient(__this->_webViewClient);
        uPtr(__this->_androidWebView)->setWebChromeClient(__this->_webChromeClient);
        uPtr(uPtr(__this->_androidWebView)->getSettings())->setJavaScriptEnabled(true);
        uPtr(__this->_androidWebView)->addJavascriptInterface(obs, ::g::Android::java::lang::String::op_Implicit1(uPtr(__this->_resultHandler)->Name()));
    }

    return *__retval = __this->_androidWebView, void();
}

// protected override sealed void Detach() :2048
void WebView__Detach_fn(WebView* __this)
{
    uPtr((::g::Fuse::Controls::WebView*)__this->SemanticControl())->WebViewClient(NULL);
}

// public void Eval(string js) :2059
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :2053
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public Uno.UX.FileSource get_File() :2159
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :2160
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :2096
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :2101
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// private void LoadFile(Uno.UX.FileSource file) :2172
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :2116
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :2121
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// private void LoadHTML(string html) :2168
void WebView__LoadHTML_fn(WebView* __this, uString* html)
{
    __this->LoadHTML(html);
}

// public void LoadUrl(string url) :2127
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// public generated WebView New() :2010
void WebView__New1_fn(WebView** __retval)
{
    *__retval = WebView::New1();
}

// public void add_PageLoaded(Uno.EventHandler value) :2146
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public void remove_PageLoaded(Uno.EventHandler value) :2147
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :2135
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void add_ProgressChanged(Uno.EventHandler value) :2152
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public void remove_ProgressChanged(Uno.EventHandler value) :2153
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :2106
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :2071
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :2072
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :2111
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :2077
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :2078
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated WebView() [instance] :2010
void WebView::ctor_3()
{
    ctor_2();
}

// public generated string get_BaseUrl() [instance] :2066
uString* WebView::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :2066
void WebView::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public void add_BeginLoading(Uno.EventHandler value) [instance] :2140
void WebView::add_BeginLoading(uDelegate* value)
{
    uPtr(_webViewClient)->add_PageStarted(value);
}

// public void remove_BeginLoading(Uno.EventHandler value) [instance] :2141
void WebView::remove_BeginLoading(uDelegate* value)
{
    uPtr(_webViewClient)->remove_PageStarted(value);
}

// public bool get_CanGoBack() [instance] :2088
bool WebView::CanGoBack()
{
    return uPtr(_androidWebView)->canGoBack();
}

// public bool get_CanGoForward() [instance] :2093
bool WebView::CanGoForward()
{
    return uPtr(_androidWebView)->canGoForward();
}

// public void Eval(string js) [instance] :2059
void WebView::Eval(uString* js)
{
    uPtr(_resultHandler)->Callback = NULL;
    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(::g::Uno::String::op_Addition2(::STRINGS[24/*"javascript:"*/], js)));
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :2053
void WebView::Eval1(uString* js, uDelegate* resultHandler)
{
    uPtr(_resultHandler)->Callback = resultHandler;
    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(::g::Uno::String::op_Addition2(::STRINGS[24/*"javascript:"*/], uPtr(_resultHandler)->getExpr(js))));
}

// public Uno.UX.FileSource get_File() [instance] :2159
::g::Uno::UX::FileSource* WebView::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :2160
void WebView::File(::g::Uno::UX::FileSource* value)
{
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :2096
void WebView::GoBack()
{
    uPtr(_androidWebView)->goBack();
}

// public void GoForward() [instance] :2101
void WebView::GoForward()
{
    uPtr(_androidWebView)->goForward();
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :2172
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uString* data = ::STRINGS[6/*""*/];

    try
    {
        data = uPtr(file)->ReadAllText();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        data = uPtr(e)->ToString();
    }
    // finally
    LoadHTML(data);
}

// public void LoadHtml(string html) [instance] :2116
void WebView::LoadHtml(uString* html)
{
    uString* ind1;
    LoadHtml1(html, (ind1 = BaseUrl(), (ind1 != NULL) ? ind1 : ::STRINGS[6/*""*/]));
}

// public void LoadHtml(string html, string baseUrl) [instance] :2121
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    uString* ind2;

    if (::g::Uno::String::op_Equality(html, NULL) || ::g::Uno::String::op_Equality(html, ::STRINGS[6/*""*/]))
        return;

    uPtr(_androidWebView)->loadDataWithBaseURL(::g::Android::java::lang::String::op_Implicit1((ind2 = (baseUrl != NULL) ? baseUrl : (uString*)BaseUrl(), (ind2 != NULL) ? ind2 : ::STRINGS[6/*""*/])), ::g::Android::java::lang::String::op_Implicit1(html), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[25/*"text/html"*/]), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[26/*"UTF-8"*/]), NULL);
}

// private void LoadHTML(string html) [instance] :2168
void WebView::LoadHTML(uString* html)
{
    uPtr(_androidWebView)->loadDataWithBaseURL(NULL, ::g::Android::java::lang::String::op_Implicit1(html), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[25/*"text/html"*/]), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[27/*"utf-8"*/]), NULL);
}

// public void LoadUrl(string url) [instance] :2127
void WebView::LoadUrl(uString* url)
{
    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[6/*""*/]))
        return;

    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(url));
}

// public void add_PageLoaded(Uno.EventHandler value) [instance] :2146
void WebView::add_PageLoaded(uDelegate* value)
{
    uPtr(_webViewClient)->add_PageLoaded(value);
}

// public void remove_PageLoaded(Uno.EventHandler value) [instance] :2147
void WebView::remove_PageLoaded(uDelegate* value)
{
    uPtr(_webViewClient)->remove_PageLoaded(value);
}

// public double get_Progress() [instance] :2135
double WebView::Progress()
{
    return (double)uPtr(_androidWebView)->getProgress() / 100.0;
}

// public void add_ProgressChanged(Uno.EventHandler value) [instance] :2152
void WebView::add_ProgressChanged(uDelegate* value)
{
    uPtr(_webChromeClient)->add_ProgressChanged(value);
}

// public void remove_ProgressChanged(Uno.EventHandler value) [instance] :2153
void WebView::remove_ProgressChanged(uDelegate* value)
{
    uPtr(_webChromeClient)->remove_ProgressChanged(value);
}

// public void Reload() [instance] :2106
void WebView::Reload()
{
    uPtr(_androidWebView)->reload();
}

// public string get_Source() [instance] :2071
uString* WebView::Source()
{
    return _source;
}

// public void set_Source(string value) [instance] :2072
void WebView::Source(uString* value)
{
    LoadHtml(_source = value);
}

// public void Stop() [instance] :2111
void WebView::Stop()
{
    uPtr(_androidWebView)->stopLoading();
}

// public string get_Url() [instance] :2077
uString* WebView::Url()
{
    return ::g::Android::java::lang::String::op_Implicit(uPtr(_androidWebView)->getUrl());
}

// public void set_Url(string value) [instance] :2078
void WebView::Url(uString* value)
{
    LoadUrl(value);
}

// public generated WebView New() [static] :2010
WebView* WebView::New1()
{
    WebView* obj3 = (WebView*)uNew(WebView_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno(2199)
// --------------------------------------------------------------------

// internal sealed extern class WebViewClient :2199
// {
::g::Android::android::webkit::WebViewClient_type* WebViewClient_typeof()
{
    static uSStrong< ::g::Android::android::webkit::WebViewClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebViewClient);
    options.TypeSize = sizeof(::g::Android::android::webkit::WebViewClient_type);
    type = (::g::Android::android::webkit::WebViewClient_type*)uClassType::New("Fuse.Android.Controls.WebViewClient", options);
    type->SetBase(::g::Android::android::webkit::WebViewClient_typeof());
    type->fp_ctor_ = (void*)WebViewClient__New7_fn;
    type->fp_onPageFinished = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*))WebViewClient__onPageFinished_fn;
    type->fp_onPageStarted = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*, ::g::Android::android::graphics::Bitmap*))WebViewClient__onPageStarted_fn;
    type->fp_shouldOverrideUrlLoading = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*, bool*))WebViewClient__shouldOverrideUrlLoading_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[28] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_WebViewClient");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[9] = ::g::Uno::Delegate_typeof();
    ::TYPES[52] = ::g::Uno::EventHandler_typeof();
    ::TYPES[34] = uObject_typeof();
    ::TYPES[99] = ::g::Uno::EventArgs_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::webkit::WebViewClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::webkit::WebViewClient_type, interface1));
    type->SetFields(5,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, loadingFinished), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, redirect), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, PageLoaded1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, PageStarted1), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::WebViewClient::_javaClass3_, uFieldFlagsStatic);
    return type;
}

// public WebViewClient() :2208
void WebViewClient__ctor_6_fn(WebViewClient* __this)
{
    __this->ctor_6();
}

// public WebViewClient New() :2208
void WebViewClient__New7_fn(WebViewClient** __retval)
{
    *__retval = WebViewClient::New7();
}

// public override sealed void onPageFinished(Android.android.webkit.WebView view, Android.java.lang.String url) :2240
void WebViewClient__onPageFinished_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url)
{
    if (!__this->redirect)
        __this->loadingFinished = true;

    if (__this->loadingFinished && !__this->redirect)
    {
        __this->loadingFinished = true;

        if (::g::Uno::Delegate::op_Inequality(__this->PageLoaded1, NULL))
            uPtr(__this->PageLoaded1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
    else
        __this->redirect = false;
}

// public override sealed void onPageStarted(Android.android.webkit.WebView view, Android.java.lang.String url, Android.android.graphics.Bitmap favIcon) :2230
void WebViewClient__onPageStarted_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url, ::g::Android::android::graphics::Bitmap* favIcon)
{
    if (__this->loadingFinished)
    {
        if (::g::Uno::Delegate::op_Inequality(__this->PageStarted1, NULL))
            uPtr(__this->PageStarted1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }

    __this->loadingFinished = false;
}

// public generated void add_PageLoaded(Uno.EventHandler value) :2202
void WebViewClient__add_PageLoaded_fn(WebViewClient* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :2202
void WebViewClient__remove_PageLoaded_fn(WebViewClient* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public generated void add_PageStarted(Uno.EventHandler value) :2203
void WebViewClient__add_PageStarted_fn(WebViewClient* __this, uDelegate* value)
{
    __this->add_PageStarted(value);
}

// public generated void remove_PageStarted(Uno.EventHandler value) :2203
void WebViewClient__remove_PageStarted_fn(WebViewClient* __this, uDelegate* value)
{
    __this->remove_PageStarted(value);
}

// public override sealed bool shouldOverrideUrlLoading(Android.android.webkit.WebView view, Android.java.lang.String url) :2214
void WebViewClient__shouldOverrideUrlLoading_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url, bool* __retval)
{
    if (!__this->loadingFinished)
        __this->redirect = true;
    else
    {
        if (::g::Uno::Delegate::op_Inequality(__this->PageStarted1, NULL))
            uPtr(__this->PageStarted1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }

    __this->loadingFinished = false;
    uPtr(view)->loadUrl(url);
    return *__retval = true, void();
}

jclass WebViewClient::_javaClass3_;

// public WebViewClient() [instance] :2208
void WebViewClient::ctor_6()
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[28/*"com.Binding...*/];
    }

    ctor_5(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(WebViewClient::_javaClass3(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        WebViewClient::_javaClass3() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[28/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_shouldOverrideUrlLoading","(JLandroid/webkit/WebView;Ljava/lang/String;JJ)Z",Binding_Fuse_Android_Controls_WebViewClient__shouldOverrideUrlLoading24355);
        REG_MTD(1,"__n_onPageStarted","(JLandroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;JJJ)V",Binding_Fuse_Android_Controls_WebViewClient__onPageStarted24356);
        REG_MTD(2,"__n_onPageFinished","(JLandroid/webkit/WebView;Ljava/lang/String;JJ)V",Binding_Fuse_Android_Controls_WebViewClient__onPageFinished24357);
        COMMIT_REG_MTD(WebViewClient::_javaClass3());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    loadingFinished = true;
    redirect = false;
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :2202
void WebViewClient::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[52/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :2202
void WebViewClient::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[52/*Uno.EventHandler*/]);
}

// public generated void add_PageStarted(Uno.EventHandler value) [instance] :2203
void WebViewClient::add_PageStarted(uDelegate* value)
{
    PageStarted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageStarted1, value), ::TYPES[52/*Uno.EventHandler*/]);
}

// public generated void remove_PageStarted(Uno.EventHandler value) [instance] :2203
void WebViewClient::remove_PageStarted(uDelegate* value)
{
    PageStarted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageStarted1, value), ::TYPES[52/*Uno.EventHandler*/]);
}

// public WebViewClient New() [static] :2208
WebViewClient* WebViewClient::New7()
{
    WebViewClient* obj1 = (WebViewClient*)uNew(WebViewClient_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

}}}} // ::g::Fuse::Android::Controls
