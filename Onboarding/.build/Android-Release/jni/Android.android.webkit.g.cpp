// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.Context.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.webkit.WebChromeClient.h>
#include <Android.android.webkit.WebSettings.h>
#include <Android.android.webkit.WebView.h>
#include <Android.android.webkit.WebViewClient.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_webkit_WebSettings.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[4];

namespace g{
namespace Android{
namespace android{
namespace webkit{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\webkit\$.uno(2498)
// -----------------------------------------------------------------------------

// public extern class WebChromeClient :2498
// {
WebChromeClient_type* WebChromeClient_typeof()
{
    static uSStrong<WebChromeClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebChromeClient);
    options.TypeSize = sizeof(WebChromeClient_type);
    type = (WebChromeClient_type*)uClassType::New("Android.android.webkit.WebChromeClient", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_onProgressChanged = WebChromeClient__onProgressChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(WebChromeClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebChromeClient_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onProgressChanged_24000_ID_, uFieldFlagsStatic);
    return type;
}

// public WebChromeClient(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :2503
void WebChromeClient__ctor_5_fn(WebChromeClient* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_5(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :2502
void WebChromeClient___Init2_fn()
{
    WebChromeClient::_Init2();
}

// public virtual void onProgressChanged(Android.android.webkit.WebView arg0, int arg1) :2520
void WebChromeClient__onProgressChanged_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1)
{
    int arg1_ = *arg1;
    WebChromeClient::onProgressChanged_IMPL_24000(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1_);
}

// public static extern void onProgressChanged_IMPL_24000(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :2666
void WebChromeClient__onProgressChanged_IMPL_24000_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    WebChromeClient::onProgressChanged_IMPL_24000(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass WebChromeClient::_javaClass2_;
jmethodID WebChromeClient::onProgressChanged_24000_ID_;

// public WebChromeClient(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :2503
void WebChromeClient::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_3(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :2502
void WebChromeClient::_Init2()
{
    if (WebChromeClient::_javaClass2()) { return; }
    INIT_JNI;
    WebChromeClient::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebChromeClient"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!WebChromeClient::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebChromeClient'", 54);; }
}

// public static extern void onProgressChanged_IMPL_24000(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :2666
void WebChromeClient::onProgressChanged_IMPL_24000(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onProgressChanged_24000_ID(),WebChromeClient::_javaClass2(),"onProgressChanged","(Landroid/webkit/WebView;I)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onProgressChanged could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onProgressChanged_24000_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onProgressChanged_24000_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\webkit\$.uno(11)
// ---------------------------------------------------------------------------

// public abstract extern class WebSettings :11
// {
::g::Android::java::lang::Object_type* WebSettings_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebSettings);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.webkit.WebSettings", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::webkit::WebSettings::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebSettings::setJavaScriptEnabled_24140_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :15
void WebSettings___Init2_fn()
{
    WebSettings::_Init2();
}

// public void setJavaScriptEnabled(bool arg0) :463
void WebSettings__setJavaScriptEnabled_fn(WebSettings* __this, bool* arg0)
{
    __this->setJavaScriptEnabled(*arg0);
}

// public static extern void setJavaScriptEnabled_IMPL_24140(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :812
void WebSettings__setJavaScriptEnabled_IMPL_24140_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    WebSettings::setJavaScriptEnabled_IMPL_24140(*arg0_, *arg1_, *arg2_);
}

jclass WebSettings::_javaClass2_;
jmethodID WebSettings::setJavaScriptEnabled_24140_ID_;

// public void setJavaScriptEnabled(bool arg0) [instance] :463
void WebSettings::setJavaScriptEnabled(bool arg0)
{
    bool arg0_ = arg0;
    WebSettings::setJavaScriptEnabled_IMPL_24140(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :15
void WebSettings::_Init2()
{
    if (WebSettings::_javaClass2()) { return; }
    INIT_JNI;
    WebSettings::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebSettings"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!WebSettings::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebSettings'", 50);; }
}

// public static extern void setJavaScriptEnabled_IMPL_24140(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :812
void WebSettings::setJavaScriptEnabled_IMPL_24140(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebSettings::_javaClass2(),WebSettings::_Init2());
    
    CACHE_METHOD(WebSettings::setJavaScriptEnabled_24140_ID(),WebSettings::_javaClass2(),"setJavaScriptEnabled","(Z)V",GetMethodID,"Id for fallback method android.webkit.WebSettings.setJavaScriptEnabled could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebSettings::_javaClass2(), WebSettings::setJavaScriptEnabled_24140_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebSettings::setJavaScriptEnabled_24140_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\webkit\$.uno(3384)
// -----------------------------------------------------------------------------

// public sealed extern class WebView :3384
// {
::g::Android::android::view::ViewGroup_type* WebView_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.webkit.WebView", options);
    type->SetBase(::g::Android::android::widget::AbsoluteLayout_typeof());
    type->fp_onScrollChanged = (void(*)(::g::Android::android::view::View*, int*, int*, int*, int*))WebView__onScrollChanged_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))WebView__onTouchEvent_fn;
    type->fp_setBackgroundColor = (void(*)(::g::Android::android::view::View*, int*))WebView__setBackgroundColor_fn;
    type->fp_setLayoutParams = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::ViewGroupDLRLayoutParams*))WebView__setLayoutParams_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[2] = ::g::Android::android::webkit::WebSettings_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::addJavascriptInterface_24285_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::canGoBack_24239_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::canGoForward_24241_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::getProgress_24261_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::getSettings_24287_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::getUrl_24257_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::goBack_24240_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::goForward_24242_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::loadDataWithBaseURL_24233_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::loadUrl_24230_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onScrollChanged_24331_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onTouchEvent_24310_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::reload_24238_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setBackgroundColor_24336_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setLayoutParams_24300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setWebChromeClient_24283_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setWebViewClient_24281_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::stopLoading_24237_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::WebView_24212_ID_c_, uFieldFlagsStatic);
    return type;
}

// public WebView(Android.android.content.Context arg0) :3442
void WebView__ctor_16_fn(WebView* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_16(arg0);
}

// public static extern new void _Init() :3388
void WebView___Init5_fn()
{
    WebView::_Init5();
}

// public void addJavascriptInterface(Android.java.lang.Object arg0, Android.java.lang.String arg1) :3923
void WebView__addJavascriptInterface_fn(WebView* __this, ::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::String* arg1)
{
    __this->addJavascriptInterface(arg0, arg1);
}

// public static extern void addJavascriptInterface_IMPL_24285(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :4459
void WebView__addJavascriptInterface_IMPL_24285_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebView::addJavascriptInterface_IMPL_24285(*arg0_, *arg1_, arg2_, arg3_);
}

// public bool canGoBack() :3647
void WebView__canGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->canGoBack();
}

// public static extern bool canGoBack_IMPL_24239(bool arg0, Android.Base.Primitives.ujobject arg1) :4321
void WebView__canGoBack_IMPL_24239_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = WebView::canGoBack_IMPL_24239(*arg0_, *arg1_);
}

// public bool canGoForward() :3659
void WebView__canGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->canGoForward();
}

// public static extern bool canGoForward_IMPL_24241(bool arg0, Android.Base.Primitives.ujobject arg1) :4327
void WebView__canGoForward_IMPL_24241_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = WebView::canGoForward_IMPL_24241(*arg0_, *arg1_);
}

// public int getProgress() :3779
void WebView__getProgress_fn(WebView* __this, int* __retval)
{
    *__retval = __this->getProgress();
}

// public static extern int getProgress_IMPL_24261(bool arg0, Android.Base.Primitives.ujobject arg1) :4387
void WebView__getProgress_IMPL_24261_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = WebView::getProgress_IMPL_24261(*arg0_, *arg1_);
}

// public Android.android.webkit.WebSettings getSettings() :3935
void WebView__getSettings_fn(WebView* __this, ::g::Android::android::webkit::WebSettings** __retval)
{
    *__retval = __this->getSettings();
}

// public static extern Android.Base.Wrappers.IJWrapper getSettings_IMPL_24287(bool arg0, Android.Base.Primitives.ujobject arg1) :4465
void WebView__getSettings_IMPL_24287_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WebView::getSettings_IMPL_24287(*arg0_, *arg1_);
}

// public Android.java.lang.String getUrl() :3755
void WebView__getUrl_fn(WebView* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getUrl();
}

// public static extern Android.Base.Wrappers.IJWrapper getUrl_IMPL_24257(bool arg0, Android.Base.Primitives.ujobject arg1) :4375
void WebView__getUrl_IMPL_24257_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WebView::getUrl_IMPL_24257(*arg0_, *arg1_);
}

// public void goBack() :3653
void WebView__goBack_fn(WebView* __this)
{
    __this->goBack();
}

// public static extern void goBack_IMPL_24240(bool arg0, Android.Base.Primitives.ujobject arg1) :4324
void WebView__goBack_IMPL_24240_fn(bool* arg0_, jobject* arg1_)
{
    WebView::goBack_IMPL_24240(*arg0_, *arg1_);
}

// public void goForward() :3665
void WebView__goForward_fn(WebView* __this)
{
    __this->goForward();
}

// public static extern void goForward_IMPL_24242(bool arg0, Android.Base.Primitives.ujobject arg1) :4330
void WebView__goForward_IMPL_24242_fn(bool* arg0_, jobject* arg1_)
{
    WebView::goForward_IMPL_24242(*arg0_, *arg1_);
}

// public void loadDataWithBaseURL(Android.java.lang.String arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.java.lang.String arg3, Android.java.lang.String arg4) :3611
void WebView__loadDataWithBaseURL_fn(WebView* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::java::lang::String* arg4)
{
    __this->loadDataWithBaseURL(arg0, arg1, arg2, arg3, arg4);
}

// public static extern void loadDataWithBaseURL_IMPL_24233(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6) :4303
void WebView__loadDataWithBaseURL_IMPL_24233_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_)
{
    WebView::loadDataWithBaseURL_IMPL_24233(*arg0_, *arg1_, arg2_, arg3_, arg4_, arg5_, arg6_);
}

// public void loadUrl(Android.java.lang.String arg0) :3593
void WebView__loadUrl_fn(WebView* __this, ::g::Android::java::lang::String* arg0)
{
    __this->loadUrl(arg0);
}

// public static extern void loadUrl_IMPL_24230(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4294
void WebView__loadUrl_IMPL_24230_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebView::loadUrl_IMPL_24230(*arg0_, *arg1_, arg2_);
}

// public WebView New(Android.android.content.Context arg0) :3442
void WebView__New13_fn(::g::Android::android::content::Context* arg0, WebView** __retval)
{
    *__retval = WebView::New13(arg0);
}

// protected override sealed void onScrollChanged(int arg0, int arg1, int arg2, int arg3) :4199
void WebView__onScrollChanged_fn(WebView* __this, int* arg0, int* arg1, int* arg2, int* arg3)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    int arg2_ = *arg2;
    int arg3_ = *arg3;
    WebView::onScrollChanged_IMPL_24331(__this->_subclassed, __this->_javaObject, arg0_, arg1_, arg2_, arg3_);
}

// public static extern void onScrollChanged_IMPL_24331(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :4597
void WebView__onScrollChanged_IMPL_24331_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    WebView::onScrollChanged_IMPL_24331(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent arg0) :4073
void WebView__onTouchEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = WebView::onTouchEvent_IMPL_24310(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTouchEvent_IMPL_24310(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4534
void WebView__onTouchEvent_IMPL_24310_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = WebView::onTouchEvent_IMPL_24310(*arg0_, *arg1_, arg2_);
}

// public void reload() :3641
void WebView__reload_fn(WebView* __this)
{
    __this->reload();
}

// public static extern void reload_IMPL_24238(bool arg0, Android.Base.Primitives.ujobject arg1) :4318
void WebView__reload_IMPL_24238_fn(bool* arg0_, jobject* arg1_)
{
    WebView::reload_IMPL_24238(*arg0_, *arg1_);
}

// public override sealed void setBackgroundColor(int arg0) :4229
void WebView__setBackgroundColor_fn(WebView* __this, int* arg0)
{
    int arg0_ = *arg0;
    WebView::setBackgroundColor_IMPL_24336(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setBackgroundColor_IMPL_24336(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :4612
void WebView__setBackgroundColor_IMPL_24336_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    WebView::setBackgroundColor_IMPL_24336(*arg0_, *arg1_, *arg2_);
}

// public override sealed void setLayoutParams(Android.android.view.ViewGroupDLRLayoutParams arg0) :4013
void WebView__setLayoutParams_fn(WebView* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    WebView::setLayoutParams_IMPL_24300(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void setLayoutParams_IMPL_24300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4504
void WebView__setLayoutParams_IMPL_24300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebView::setLayoutParams_IMPL_24300(*arg0_, *arg1_, arg2_);
}

// public void setWebChromeClient(Android.android.webkit.WebChromeClient arg0) :3911
void WebView__setWebChromeClient_fn(WebView* __this, ::g::Android::android::webkit::WebChromeClient* arg0)
{
    __this->setWebChromeClient(arg0);
}

// public static extern void setWebChromeClient_IMPL_24283(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4453
void WebView__setWebChromeClient_IMPL_24283_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebView::setWebChromeClient_IMPL_24283(*arg0_, *arg1_, arg2_);
}

// public void setWebViewClient(Android.android.webkit.WebViewClient arg0) :3899
void WebView__setWebViewClient_fn(WebView* __this, ::g::Android::android::webkit::WebViewClient* arg0)
{
    __this->setWebViewClient(arg0);
}

// public static extern void setWebViewClient_IMPL_24281(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4447
void WebView__setWebViewClient_IMPL_24281_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebView::setWebViewClient_IMPL_24281(*arg0_, *arg1_, arg2_);
}

// public void stopLoading() :3635
void WebView__stopLoading_fn(WebView* __this)
{
    __this->stopLoading();
}

// public static extern void stopLoading_IMPL_24237(bool arg0, Android.Base.Primitives.ujobject arg1) :4315
void WebView__stopLoading_IMPL_24237_fn(bool* arg0_, jobject* arg1_)
{
    WebView::stopLoading_IMPL_24237(*arg0_, *arg1_);
}

jclass WebView::_javaClass5_;
jmethodID WebView::addJavascriptInterface_24285_ID_;
jmethodID WebView::canGoBack_24239_ID_;
jmethodID WebView::canGoForward_24241_ID_;
jmethodID WebView::getProgress_24261_ID_;
jmethodID WebView::getSettings_24287_ID_;
jmethodID WebView::getUrl_24257_ID_;
jmethodID WebView::goBack_24240_ID_;
jmethodID WebView::goForward_24242_ID_;
jmethodID WebView::loadDataWithBaseURL_24233_ID_;
jmethodID WebView::loadUrl_24230_ID_;
jmethodID WebView::onScrollChanged_24331_ID_;
jmethodID WebView::onTouchEvent_24310_ID_;
jmethodID WebView::reload_24238_ID_;
jmethodID WebView::setBackgroundColor_24336_ID_;
jmethodID WebView::setLayoutParams_24300_ID_;
jmethodID WebView::setWebChromeClient_24283_ID_;
jmethodID WebView::setWebViewClient_24281_ID_;
jmethodID WebView::stopLoading_24237_ID_;
jmethodID WebView::WebView_24212_ID_c_;

// public WebView(Android.android.content.Context arg0) [instance] :3442
void WebView::ctor_16(::g::Android::android::content::Context* arg0)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());;
    CACHE_METHOD(WebView::WebView_24212_ID_c(),WebView::_javaClass5(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.webkit.WebView.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(WebView::_javaClass5(), WebView::WebView_24212_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void addJavascriptInterface(Android.java.lang.Object arg0, Android.java.lang.String arg1) [instance] :3923
void WebView::addJavascriptInterface(::g::Android::java::lang::Object* arg0, ::g::Android::java::lang::String* arg1)
{
    WebView::addJavascriptInterface_IMPL_24285(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public bool canGoBack() [instance] :3647
bool WebView::canGoBack()
{
    return WebView::canGoBack_IMPL_24239(_subclassed, _javaObject);
}

// public bool canGoForward() [instance] :3659
bool WebView::canGoForward()
{
    return WebView::canGoForward_IMPL_24241(_subclassed, _javaObject);
}

// public int getProgress() [instance] :3779
int WebView::getProgress()
{
    return WebView::getProgress_IMPL_24261(_subclassed, _javaObject);
}

// public Android.android.webkit.WebSettings getSettings() [instance] :3935
::g::Android::android::webkit::WebSettings* WebView::getSettings()
{
    return uCast< ::g::Android::android::webkit::WebSettings*>(WebView::getSettings_IMPL_24287(_subclassed, _javaObject), ::TYPES[2/*Android.android.webkit.WebSettings*/]);
}

// public Android.java.lang.String getUrl() [instance] :3755
::g::Android::java::lang::String* WebView::getUrl()
{
    return uCast< ::g::Android::java::lang::String*>(WebView::getUrl_IMPL_24257(_subclassed, _javaObject), ::TYPES[3/*Android.java.lang.String*/]);
}

// public void goBack() [instance] :3653
void WebView::goBack()
{
    WebView::goBack_IMPL_24240(_subclassed, _javaObject);
}

// public void goForward() [instance] :3665
void WebView::goForward()
{
    WebView::goForward_IMPL_24242(_subclassed, _javaObject);
}

// public void loadDataWithBaseURL(Android.java.lang.String arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.java.lang.String arg3, Android.java.lang.String arg4) [instance] :3611
void WebView::loadDataWithBaseURL(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::java::lang::String* arg4)
{
    WebView::loadDataWithBaseURL_IMPL_24233(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, (uObject*)arg3, (uObject*)arg4);
}

// public void loadUrl(Android.java.lang.String arg0) [instance] :3593
void WebView::loadUrl(::g::Android::java::lang::String* arg0)
{
    WebView::loadUrl_IMPL_24230(_subclassed, _javaObject, (uObject*)arg0);
}

// public void reload() [instance] :3641
void WebView::reload()
{
    WebView::reload_IMPL_24238(_subclassed, _javaObject);
}

// public void setWebChromeClient(Android.android.webkit.WebChromeClient arg0) [instance] :3911
void WebView::setWebChromeClient(::g::Android::android::webkit::WebChromeClient* arg0)
{
    WebView::setWebChromeClient_IMPL_24283(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setWebViewClient(Android.android.webkit.WebViewClient arg0) [instance] :3899
void WebView::setWebViewClient(::g::Android::android::webkit::WebViewClient* arg0)
{
    WebView::setWebViewClient_IMPL_24281(_subclassed, _javaObject, (uObject*)arg0);
}

// public void stopLoading() [instance] :3635
void WebView::stopLoading()
{
    WebView::stopLoading_IMPL_24237(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :3388
void WebView::_Init5()
{
    if (WebView::_javaClass5()) { return; }
    INIT_JNI;
    WebView::_javaClass5() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebView"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!WebView::_javaClass5()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebView'", 46);; }
}

// public static extern void addJavascriptInterface_IMPL_24285(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4459
void WebView::addJavascriptInterface_IMPL_24285(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::addJavascriptInterface_24285_ID(),WebView::_javaClass5(),"addJavascriptInterface","(Ljava/lang/Object;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebView.addJavascriptInterface could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::addJavascriptInterface_24285_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::addJavascriptInterface_24285_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool canGoBack_IMPL_24239(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4321
bool WebView::canGoBack_IMPL_24239(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    bool result;
    CACHE_METHOD(WebView::canGoBack_24239_ID(),WebView::_javaClass5(),"canGoBack","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.canGoBack could not be cached",75);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::canGoBack_24239_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::canGoBack_24239_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool canGoForward_IMPL_24241(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4327
bool WebView::canGoForward_IMPL_24241(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    bool result;
    CACHE_METHOD(WebView::canGoForward_24241_ID(),WebView::_javaClass5(),"canGoForward","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.canGoForward could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::canGoForward_24241_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::canGoForward_24241_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getProgress_IMPL_24261(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4387
int WebView::getProgress_IMPL_24261(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    int result;
    CACHE_METHOD(WebView::getProgress_24261_ID(),WebView::_javaClass5(),"getProgress","()I",GetMethodID,"Id for fallback method android.webkit.WebView.getProgress could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, WebView::_javaClass5(), WebView::getProgress_24261_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, WebView::getProgress_24261_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSettings_IMPL_24287(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4465
uObject* WebView::getSettings_IMPL_24287(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    uObject* result;
    CACHE_METHOD(WebView::getSettings_24287_ID(),WebView::_javaClass5(),"getSettings","()Landroid/webkit/WebSettings;",GetMethodID,"Id for fallback method android.webkit.WebView.getSettings could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WebView::_javaClass5(), WebView::getSettings_24287_ID()),result,::g::Android::Fallbacks::Android_android_webkit_WebSettings_typeof(),::g::Android::android::webkit::WebSettings*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WebView::getSettings_24287_ID()),result,::g::Android::Fallbacks::Android_android_webkit_WebSettings_typeof(),::g::Android::android::webkit::WebSettings*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getUrl_IMPL_24257(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4375
uObject* WebView::getUrl_IMPL_24257(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    uObject* result;
    CACHE_METHOD(WebView::getUrl_24257_ID(),WebView::_javaClass5(),"getUrl","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.webkit.WebView.getUrl could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WebView::_javaClass5(), WebView::getUrl_24257_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WebView::getUrl_24257_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void goBack_IMPL_24240(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4324
void WebView::goBack_IMPL_24240(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::goBack_24240_ID(),WebView::_javaClass5(),"goBack","()V",GetMethodID,"Id for fallback method android.webkit.WebView.goBack could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::goBack_24240_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::goBack_24240_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void goForward_IMPL_24242(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4330
void WebView::goForward_IMPL_24242(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::goForward_24242_ID(),WebView::_javaClass5(),"goForward","()V",GetMethodID,"Id for fallback method android.webkit.WebView.goForward could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::goForward_24242_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::goForward_24242_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void loadDataWithBaseURL_IMPL_24233(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6) [static] :4303
void WebView::loadDataWithBaseURL_IMPL_24233(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg6 = ((!arg6_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg6_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::loadDataWithBaseURL_24233_ID(),WebView::_javaClass5(),"loadDataWithBaseURL","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebView.loadDataWithBaseURL could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::loadDataWithBaseURL_24233_ID(), _obArg2, _obArg3, _obArg4, _obArg5, _obArg6);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::loadDataWithBaseURL_24233_ID(), _obArg2, _obArg3, _obArg4, _obArg5, _obArg6);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void loadUrl_IMPL_24230(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4294
void WebView::loadUrl_IMPL_24230(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::loadUrl_24230_ID(),WebView::_javaClass5(),"loadUrl","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebView.loadUrl could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::loadUrl_24230_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::loadUrl_24230_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public WebView New(Android.android.content.Context arg0) [static] :3442
WebView* WebView::New13(::g::Android::android::content::Context* arg0)
{
    WebView* obj2 = (WebView*)uNew(WebView_typeof());
    obj2->ctor_16(arg0);
    return obj2;
}

// public static extern void onScrollChanged_IMPL_24331(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :4597
void WebView::onScrollChanged_IMPL_24331(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::onScrollChanged_24331_ID(),WebView::_javaClass5(),"onScrollChanged","(IIII)V",GetMethodID,"Id for fallback method android.webkit.WebView.onScrollChanged could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::onScrollChanged_24331_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::onScrollChanged_24331_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onTouchEvent_IMPL_24310(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4534
bool WebView::onTouchEvent_IMPL_24310(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::onTouchEvent_24310_ID(),WebView::_javaClass5(),"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onTouchEvent could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::onTouchEvent_24310_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::onTouchEvent_24310_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void reload_IMPL_24238(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4318
void WebView::reload_IMPL_24238(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::reload_24238_ID(),WebView::_javaClass5(),"reload","()V",GetMethodID,"Id for fallback method android.webkit.WebView.reload could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::reload_24238_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::reload_24238_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setBackgroundColor_IMPL_24336(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :4612
void WebView::setBackgroundColor_IMPL_24336(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::setBackgroundColor_24336_ID(),WebView::_javaClass5(),"setBackgroundColor","(I)V",GetMethodID,"Id for fallback method android.webkit.WebView.setBackgroundColor could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::setBackgroundColor_24336_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::setBackgroundColor_24336_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setLayoutParams_IMPL_24300(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4504
void WebView::setLayoutParams_IMPL_24300(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::setLayoutParams_24300_ID(),WebView::_javaClass5(),"setLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setLayoutParams could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::setLayoutParams_24300_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::setLayoutParams_24300_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setWebChromeClient_IMPL_24283(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4453
void WebView::setWebChromeClient_IMPL_24283(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::setWebChromeClient_24283_ID(),WebView::_javaClass5(),"setWebChromeClient","(Landroid/webkit/WebChromeClient;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setWebChromeClient could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::setWebChromeClient_24283_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::setWebChromeClient_24283_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setWebViewClient_IMPL_24281(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4447
void WebView::setWebViewClient_IMPL_24281(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::setWebViewClient_24281_ID(),WebView::_javaClass5(),"setWebViewClient","(Landroid/webkit/WebViewClient;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setWebViewClient could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::setWebViewClient_24281_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::setWebViewClient_24281_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void stopLoading_IMPL_24237(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4315
void WebView::stopLoading_IMPL_24237(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::stopLoading_24237_ID(),WebView::_javaClass5(),"stopLoading","()V",GetMethodID,"Id for fallback method android.webkit.WebView.stopLoading could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::stopLoading_24237_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::stopLoading_24237_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\webkit\$.uno(4633)
// -----------------------------------------------------------------------------

// public extern class WebViewClient :4633
// {
WebViewClient_type* WebViewClient_typeof()
{
    static uSStrong<WebViewClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebViewClient);
    options.TypeSize = sizeof(WebViewClient_type);
    type = (WebViewClient_type*)uClassType::New("Android.android.webkit.WebViewClient", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_onPageFinished = WebViewClient__onPageFinished_fn;
    type->fp_onPageStarted = WebViewClient__onPageStarted_fn;
    type->fp_shouldOverrideUrlLoading = WebViewClient__shouldOverrideUrlLoading_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(WebViewClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebViewClient_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onPageFinished_24357_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onPageStarted_24356_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::shouldOverrideUrlLoading_24355_ID_, uFieldFlagsStatic);
    return type;
}

// public WebViewClient(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :4638
void WebViewClient__ctor_5_fn(WebViewClient* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_5(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :4637
void WebViewClient___Init2_fn()
{
    WebViewClient::_Init2();
}

// public virtual void onPageFinished(Android.android.webkit.WebView arg0, Android.java.lang.String arg1) :4922
void WebViewClient__onPageFinished_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1)
{
    WebViewClient::onPageFinished_IMPL_24357(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public static extern void onPageFinished_IMPL_24357(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :5008
void WebViewClient__onPageFinished_IMPL_24357_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebViewClient::onPageFinished_IMPL_24357(*arg0_, *arg1_, arg2_, arg3_);
}

// public virtual void onPageStarted(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.android.graphics.Bitmap arg2) :4916
void WebViewClient__onPageStarted_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::graphics::Bitmap* arg2)
{
    WebViewClient::onPageStarted_IMPL_24356(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2);
}

// public static extern void onPageStarted_IMPL_24356(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) :5005
void WebViewClient__onPageStarted_IMPL_24356_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    WebViewClient::onPageStarted_IMPL_24356(*arg0_, *arg1_, arg2_, arg3_, arg4_);
}

// public virtual bool shouldOverrideUrlLoading(Android.android.webkit.WebView arg0, Android.java.lang.String arg1) :4910
void WebViewClient__shouldOverrideUrlLoading_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool* __retval)
{
    return *__retval = WebViewClient::shouldOverrideUrlLoading_IMPL_24355(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1), void();
}

// public static extern bool shouldOverrideUrlLoading_IMPL_24355(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :5002
void WebViewClient__shouldOverrideUrlLoading_IMPL_24355_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = WebViewClient::shouldOverrideUrlLoading_IMPL_24355(*arg0_, *arg1_, arg2_, arg3_);
}

jclass WebViewClient::_javaClass2_;
jmethodID WebViewClient::onPageFinished_24357_ID_;
jmethodID WebViewClient::onPageStarted_24356_ID_;
jmethodID WebViewClient::shouldOverrideUrlLoading_24355_ID_;

// public WebViewClient(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :4638
void WebViewClient::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_3(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :4637
void WebViewClient::_Init2()
{
    if (WebViewClient::_javaClass2()) { return; }
    INIT_JNI;
    WebViewClient::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebViewClient"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!WebViewClient::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebViewClient'", 52);; }
}

// public static extern void onPageFinished_IMPL_24357(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5008
void WebViewClient::onPageFinished_IMPL_24357(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onPageFinished_24357_ID(),WebViewClient::_javaClass2(),"onPageFinished","(Landroid/webkit/WebView;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onPageFinished could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onPageFinished_24357_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onPageFinished_24357_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onPageStarted_IMPL_24356(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :5005
void WebViewClient::onPageStarted_IMPL_24356(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onPageStarted_24356_ID(),WebViewClient::_javaClass2(),"onPageStarted","(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onPageStarted could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onPageStarted_24356_ID(), _obArg2, _obArg3, _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onPageStarted_24356_ID(), _obArg2, _obArg3, _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool shouldOverrideUrlLoading_IMPL_24355(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5002
bool WebViewClient::shouldOverrideUrlLoading_IMPL_24355(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebViewClient::shouldOverrideUrlLoading_24355_ID(),WebViewClient::_javaClass2(),"shouldOverrideUrlLoading","(Landroid/webkit/WebView;Ljava/lang/String;)Z",GetMethodID,"Id for fallback method android.webkit.WebViewClient.shouldOverrideUrlLoading could not be cached",96);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::shouldOverrideUrlLoading_24355_ID(), _obArg2, _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebViewClient::shouldOverrideUrlLoading_24355_ID(), _obArg2, _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::android::webkit
