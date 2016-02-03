// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.Context.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.Paint.h>
#include <Android.android.graphics.Rect.h>
#include <Android.android.net.http.SslError.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Message.h>
#include <Android.android.view.accessibility.AccessibilityEvent.h>
#include <Android.android.view.accessibility.AccessibilityNodeInfo.h>
#include <Android.android.view.accessibility.AccessibilityNodeProvider.h>
#include <Android.android.view.inputmethod.EditorInfo.h>
#include <Android.android.view.inputmethod.InputConnection.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.webkit.ConsoleMessage.h>
#include <Android.android.webkit.GeolocationPermissionsDLRCallback.h>
#include <Android.android.webkit.HttpAuthHandler.h>
#include <Android.android.webkit.JsPromptResult.h>
#include <Android.android.webkit.JsResult.h>
#include <Android.android.webkit.SslErrorHandler.h>
#include <Android.android.webkit.ValueCallback.h>
#include <Android.android.webkit.WebChromeClient.h>
#include <Android.android.webkit.WebChromeClientDLRCustomViewCallback.h>
#include <Android.android.webkit.WebResourceResponse.h>
#include <Android.android.webkit.WebSettings.h>
#include <Android.android.webkit.WebStorageDLRQuotaUpdater.h>
#include <Android.android.webkit.WebView.h>
#include <Android.android.webkit.WebViewClient.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h>
#include <Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h>
#include <Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h>
#include <Android.Fallbacks.Android_android_webkit_ValueCallback.h>
#include <Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h>
#include <Android.Fallbacks.Android_android_webkit_WebSettings.h>
#include <Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
static uType* TYPES[9];

namespace g{
namespace Android{
namespace android{
namespace webkit{

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(1622)
// -----------------------------------------------------------------------------

// public sealed extern class ConsoleMessage :1622
// {
::g::Android::java::lang::Object_type* ConsoleMessage_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ConsoleMessage);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.webkit.ConsoleMessage", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(5247)
// -----------------------------------------------------------------------------

// public abstract extern interface GeolocationPermissionsDLRCallback :5247
// {
uInterfaceType* GeolocationPermissionsDLRCallback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.webkit.GeolocationPermissionsDLRCallback", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("invoke", NULL, NULL, offsetof(GeolocationPermissionsDLRCallback, fp_invoke), false, uVoid_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(2027)
// -----------------------------------------------------------------------------

// public sealed extern class HttpAuthHandler :2027
// {
::g::Android::java::lang::Object_type* HttpAuthHandler_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(HttpAuthHandler);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.webkit.HttpAuthHandler", options);
    type->SetBase(::g::Android::android::os::Handler_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(2112)
// -----------------------------------------------------------------------------

// public sealed extern class JsPromptResult :2112
// {
::g::Android::java::lang::Object_type* JsPromptResult_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(JsPromptResult);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.webkit.JsPromptResult", options);
    type->SetBase(::g::Android::android::webkit::JsResult_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(2074)
// -----------------------------------------------------------------------------

// public extern class JsResult :2074
// {
::g::Android::java::lang::Object_type* JsResult_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(JsResult);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.webkit.JsResult", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(2215)
// -----------------------------------------------------------------------------

// public sealed extern class SslErrorHandler :2215
// {
::g::Android::java::lang::Object_type* SslErrorHandler_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SslErrorHandler);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.webkit.SslErrorHandler", options);
    type->SetBase(::g::Android::android::os::Handler_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(5281)
// -----------------------------------------------------------------------------

// public abstract extern interface ValueCallback :5281
// {
uInterfaceType* ValueCallback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.webkit.ValueCallback", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onReceiveValue", NULL, NULL, offsetof(ValueCallback, fp_onReceiveValue), false, uVoid_typeof(), 1, ::g::Android::java::lang::Object_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(2498)
// -----------------------------------------------------------------------------

// public extern class WebChromeClient :2498
// {
WebChromeClient_type* WebChromeClient_typeof()
{
    static uSStrong<WebChromeClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebChromeClient);
    options.TypeSize = sizeof(WebChromeClient_type);
    type = (WebChromeClient_type*)uClassType::New("Android.android.webkit.WebChromeClient", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_ctor_ = (void*)WebChromeClient__New5_fn;
    type->fp_onProgressChanged = WebChromeClient__onProgressChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::android::graphics::Bitmap_typeof();
    ::TYPES[2] = ::g::Android::android::view::View_typeof();
    ::TYPES[3] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(WebChromeClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebChromeClient_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::getDefaultVideoPoster_24021_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::getVideoLoadingProgressView_24022_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::getVisitedHistory_24023_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onCloseWindow_24009_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onConsoleMessage_24019_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onConsoleMessage_24020_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onCreateWindow_24007_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onExceededDatabaseQuota_24014_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onGeolocationPermissionsHidePrompt_24017_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onGeolocationPermissionsShowPrompt_24016_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onHideCustomView_24006_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onJsAlert_24010_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onJsBeforeUnload_24013_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onJsConfirm_24011_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onJsPrompt_24012_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onJsTimeout_24018_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onProgressChanged_24000_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onReachedMaxAppCacheSize_24015_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onReceivedIcon_24002_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onReceivedTitle_24001_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onReceivedTouchIconUrl_24003_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onRequestFocus_24008_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onShowCustomView_24004_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::onShowCustomView_24005_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebChromeClient::WebChromeClient_23999_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(51,
        new uFunction("_Init", NULL, (void*)WebChromeClient___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getDefaultVideoPoster", NULL, (void*)WebChromeClient__getDefaultVideoPoster_fn, 0, false, ::g::Android::android::graphics::Bitmap_typeof(), 0),
        new uFunction("getDefaultVideoPoster_IMPL_24021", NULL, (void*)WebChromeClient__getDefaultVideoPoster_IMPL_24021_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getVideoLoadingProgressView", NULL, (void*)WebChromeClient__getVideoLoadingProgressView_fn, 0, false, ::g::Android::android::view::View_typeof(), 0),
        new uFunction("getVideoLoadingProgressView_IMPL_24022", NULL, (void*)WebChromeClient__getVideoLoadingProgressView_IMPL_24022_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getVisitedHistory", NULL, (void*)WebChromeClient__getVisitedHistory_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::webkit::ValueCallback_typeof()),
        new uFunction("getVisitedHistory_IMPL_24023", NULL, (void*)WebChromeClient__getVisitedHistory_IMPL_24023_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction(".ctor", NULL, (void*)WebChromeClient__New5_fn, 0, true, WebChromeClient_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)WebChromeClient__New6_fn, 0, true, WebChromeClient_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onCloseWindow", NULL, (void*)WebChromeClient__onCloseWindow_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::webkit::WebView_typeof()),
        new uFunction("onCloseWindow_IMPL_24009", NULL, (void*)WebChromeClient__onCloseWindow_IMPL_24009_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onConsoleMessage", NULL, (void*)WebChromeClient__onConsoleMessage_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::webkit::ConsoleMessage_typeof()),
        new uFunction("onConsoleMessage", NULL, (void*)WebChromeClient__onConsoleMessage1_fn, 0, false, uVoid_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Uno::Int_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("onConsoleMessage_IMPL_24019", NULL, (void*)WebChromeClient__onConsoleMessage_IMPL_24019_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onConsoleMessage_IMPL_24020", NULL, (void*)WebChromeClient__onConsoleMessage_IMPL_24020_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onCreateWindow", NULL, (void*)WebChromeClient__onCreateWindow_fn, 0, false, ::g::Uno::Bool_typeof(), 4, ::g::Android::android::webkit::WebView_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Android::android::os::Message_typeof()),
        new uFunction("onCreateWindow_IMPL_24007", NULL, (void*)WebChromeClient__onCreateWindow_IMPL_24007_fn, 0, true, ::g::Uno::Bool_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onExceededDatabaseQuota", NULL, (void*)WebChromeClient__onExceededDatabaseQuota_fn, 0, false, uVoid_typeof(), 6, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Long_typeof(), ::g::Android::android::webkit::WebStorageDLRQuotaUpdater_typeof()),
        new uFunction("onExceededDatabaseQuota_IMPL_24014", NULL, (void*)WebChromeClient__onExceededDatabaseQuota_IMPL_24014_fn, 0, true, uVoid_typeof(), 8, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Long_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onGeolocationPermissionsHidePrompt", NULL, (void*)WebChromeClient__onGeolocationPermissionsHidePrompt_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("onGeolocationPermissionsHidePrompt_IMPL_24017", NULL, (void*)WebChromeClient__onGeolocationPermissionsHidePrompt_IMPL_24017_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onGeolocationPermissionsShowPrompt", NULL, (void*)WebChromeClient__onGeolocationPermissionsShowPrompt_fn, 0, false, uVoid_typeof(), 2, ::g::Android::java::lang::String_typeof(), ::g::Android::android::webkit::GeolocationPermissionsDLRCallback_typeof()),
        new uFunction("onGeolocationPermissionsShowPrompt_IMPL_24016", NULL, (void*)WebChromeClient__onGeolocationPermissionsShowPrompt_IMPL_24016_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onHideCustomView", NULL, (void*)WebChromeClient__onHideCustomView_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("onHideCustomView_IMPL_24006", NULL, (void*)WebChromeClient__onHideCustomView_IMPL_24006_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onJsAlert", NULL, (void*)WebChromeClient__onJsAlert_fn, 0, false, ::g::Uno::Bool_typeof(), 4, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::android::webkit::JsResult_typeof()),
        new uFunction("onJsAlert_IMPL_24010", NULL, (void*)WebChromeClient__onJsAlert_IMPL_24010_fn, 0, true, ::g::Uno::Bool_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onJsBeforeUnload", NULL, (void*)WebChromeClient__onJsBeforeUnload_fn, 0, false, ::g::Uno::Bool_typeof(), 4, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::android::webkit::JsResult_typeof()),
        new uFunction("onJsBeforeUnload_IMPL_24013", NULL, (void*)WebChromeClient__onJsBeforeUnload_IMPL_24013_fn, 0, true, ::g::Uno::Bool_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onJsConfirm", NULL, (void*)WebChromeClient__onJsConfirm_fn, 0, false, ::g::Uno::Bool_typeof(), 4, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::android::webkit::JsResult_typeof()),
        new uFunction("onJsConfirm_IMPL_24011", NULL, (void*)WebChromeClient__onJsConfirm_IMPL_24011_fn, 0, true, ::g::Uno::Bool_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onJsPrompt", NULL, (void*)WebChromeClient__onJsPrompt_fn, 0, false, ::g::Uno::Bool_typeof(), 5, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::android::webkit::JsPromptResult_typeof()),
        new uFunction("onJsPrompt_IMPL_24012", NULL, (void*)WebChromeClient__onJsPrompt_IMPL_24012_fn, 0, true, ::g::Uno::Bool_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onJsTimeout", NULL, (void*)WebChromeClient__onJsTimeout_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("onJsTimeout_IMPL_24018", NULL, (void*)WebChromeClient__onJsTimeout_IMPL_24018_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onProgressChanged", NULL, NULL, offsetof(WebChromeClient_type, fp_onProgressChanged), false, uVoid_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onProgressChanged_IMPL_24000", NULL, (void*)WebChromeClient__onProgressChanged_IMPL_24000_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onReachedMaxAppCacheSize", NULL, (void*)WebChromeClient__onReachedMaxAppCacheSize_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Long_typeof(), ::g::Uno::Long_typeof(), ::g::Android::android::webkit::WebStorageDLRQuotaUpdater_typeof()),
        new uFunction("onReachedMaxAppCacheSize_IMPL_24015", NULL, (void*)WebChromeClient__onReachedMaxAppCacheSize_IMPL_24015_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Long_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onReceivedIcon", NULL, (void*)WebChromeClient__onReceivedIcon_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::android::graphics::Bitmap_typeof()),
        new uFunction("onReceivedIcon_IMPL_24002", NULL, (void*)WebChromeClient__onReceivedIcon_IMPL_24002_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onReceivedTitle", NULL, (void*)WebChromeClient__onReceivedTitle_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("onReceivedTitle_IMPL_24001", NULL, (void*)WebChromeClient__onReceivedTitle_IMPL_24001_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onReceivedTouchIconUrl", NULL, (void*)WebChromeClient__onReceivedTouchIconUrl_fn, 0, false, uVoid_typeof(), 3, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onReceivedTouchIconUrl_IMPL_24003", NULL, (void*)WebChromeClient__onReceivedTouchIconUrl_IMPL_24003_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onRequestFocus", NULL, (void*)WebChromeClient__onRequestFocus_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::webkit::WebView_typeof()),
        new uFunction("onRequestFocus_IMPL_24008", NULL, (void*)WebChromeClient__onRequestFocus_IMPL_24008_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onShowCustomView", NULL, (void*)WebChromeClient__onShowCustomView_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::view::View_typeof(), ::g::Android::android::webkit::WebChromeClientDLRCustomViewCallback_typeof()),
        new uFunction("onShowCustomView", NULL, (void*)WebChromeClient__onShowCustomView1_fn, 0, false, uVoid_typeof(), 3, ::g::Android::android::view::View_typeof(), ::g::Uno::Int_typeof(), ::g::Android::android::webkit::WebChromeClientDLRCustomViewCallback_typeof()),
        new uFunction("onShowCustomView_IMPL_24004", NULL, (void*)WebChromeClient__onShowCustomView_IMPL_24004_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onShowCustomView_IMPL_24005", NULL, (void*)WebChromeClient__onShowCustomView_IMPL_24005_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public WebChromeClient() :2505
void WebChromeClient__ctor_4_fn(WebChromeClient* __this)
{
    __this->ctor_4();
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

// public Android.android.graphics.Bitmap getDefaultVideoPoster() :2646
void WebChromeClient__getDefaultVideoPoster_fn(WebChromeClient* __this, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = __this->getDefaultVideoPoster();
}

// public static extern Android.Base.Wrappers.IJWrapper getDefaultVideoPoster_IMPL_24021(bool arg0, Android.Base.Primitives.ujobject arg1) :2729
void WebChromeClient__getDefaultVideoPoster_IMPL_24021_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WebChromeClient::getDefaultVideoPoster_IMPL_24021(*arg0_, *arg1_);
}

// public Android.android.view.View getVideoLoadingProgressView() :2652
void WebChromeClient__getVideoLoadingProgressView_fn(WebChromeClient* __this, ::g::Android::android::view::View** __retval)
{
    *__retval = __this->getVideoLoadingProgressView();
}

// public static extern Android.Base.Wrappers.IJWrapper getVideoLoadingProgressView_IMPL_24022(bool arg0, Android.Base.Primitives.ujobject arg1) :2732
void WebChromeClient__getVideoLoadingProgressView_IMPL_24022_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WebChromeClient::getVideoLoadingProgressView_IMPL_24022(*arg0_, *arg1_);
}

// public void getVisitedHistory(Android.android.webkit.ValueCallback arg0) :2658
void WebChromeClient__getVisitedHistory_fn(WebChromeClient* __this, uObject* arg0)
{
    __this->getVisitedHistory(arg0);
}

// public static extern void getVisitedHistory_IMPL_24023(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2735
void WebChromeClient__getVisitedHistory_IMPL_24023_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebChromeClient::getVisitedHistory_IMPL_24023(*arg0_, *arg1_, arg2_);
}

// public WebChromeClient New() :2505
void WebChromeClient__New5_fn(WebChromeClient** __retval)
{
    *__retval = WebChromeClient::New5();
}

// public WebChromeClient New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :2503
void WebChromeClient__New6_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, WebChromeClient** __retval)
{
    *__retval = WebChromeClient::New6(*obj, utype, *hasFallbackClass, *resolveType);
}

// public void onCloseWindow(Android.android.webkit.WebView arg0) :2574
void WebChromeClient__onCloseWindow_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0)
{
    __this->onCloseWindow(arg0);
}

// public static extern void onCloseWindow_IMPL_24009(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2693
void WebChromeClient__onCloseWindow_IMPL_24009_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebChromeClient::onCloseWindow_IMPL_24009(*arg0_, *arg1_, arg2_);
}

// public bool onConsoleMessage(Android.android.webkit.ConsoleMessage arg0) :2640
void WebChromeClient__onConsoleMessage_fn(WebChromeClient* __this, ::g::Android::android::webkit::ConsoleMessage* arg0, bool* __retval)
{
    *__retval = __this->onConsoleMessage(arg0);
}

// public void onConsoleMessage(Android.java.lang.String arg0, int arg1, Android.java.lang.String arg2) :2634
void WebChromeClient__onConsoleMessage1_fn(WebChromeClient* __this, ::g::Android::java::lang::String* arg0, int* arg1, ::g::Android::java::lang::String* arg2)
{
    __this->onConsoleMessage1(arg0, *arg1, arg2);
}

// public static extern void onConsoleMessage_IMPL_24019(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :2723
void WebChromeClient__onConsoleMessage_IMPL_24019_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_)
{
    WebChromeClient::onConsoleMessage_IMPL_24019(*arg0_, *arg1_, arg2_, *arg3_, arg4_);
}

// public static extern bool onConsoleMessage_IMPL_24020(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2726
void WebChromeClient__onConsoleMessage_IMPL_24020_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = WebChromeClient::onConsoleMessage_IMPL_24020(*arg0_, *arg1_, arg2_);
}

// public bool onCreateWindow(Android.android.webkit.WebView arg0, bool arg1, bool arg2, Android.android.os.Message arg3) :2562
void WebChromeClient__onCreateWindow_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, bool* arg1, bool* arg2, ::g::Android::android::os::Message* arg3, bool* __retval)
{
    *__retval = __this->onCreateWindow(arg0, *arg1, *arg2, arg3);
}

// public static extern bool onCreateWindow_IMPL_24007(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, bool arg3, bool arg4, Android.Base.Wrappers.IJWrapper arg5) :2687
void WebChromeClient__onCreateWindow_IMPL_24007_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_, bool* arg4_, uObject* arg5_, bool* __retval)
{
    *__retval = WebChromeClient::onCreateWindow_IMPL_24007(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, arg5_);
}

// public void onExceededDatabaseQuota(Android.java.lang.String arg0, Android.java.lang.String arg1, long arg2, long arg3, long arg4, Android.android.webkit.WebStorageDLRQuotaUpdater arg5) :2604
void WebChromeClient__onExceededDatabaseQuota_fn(WebChromeClient* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4, uObject* arg5)
{
    __this->onExceededDatabaseQuota(arg0, arg1, *arg2, *arg3, *arg4, arg5);
}

// public static extern void onExceededDatabaseQuota_IMPL_24014(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, long arg4, long arg5, long arg6, Android.Base.Wrappers.IJWrapper arg7) :2708
void WebChromeClient__onExceededDatabaseQuota_IMPL_24014_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int64_t* arg4_, int64_t* arg5_, int64_t* arg6_, uObject* arg7_)
{
    WebChromeClient::onExceededDatabaseQuota_IMPL_24014(*arg0_, *arg1_, arg2_, arg3_, *arg4_, *arg5_, *arg6_, arg7_);
}

// public void onGeolocationPermissionsHidePrompt() :2622
void WebChromeClient__onGeolocationPermissionsHidePrompt_fn(WebChromeClient* __this)
{
    __this->onGeolocationPermissionsHidePrompt();
}

// public static extern void onGeolocationPermissionsHidePrompt_IMPL_24017(bool arg0, Android.Base.Primitives.ujobject arg1) :2717
void WebChromeClient__onGeolocationPermissionsHidePrompt_IMPL_24017_fn(bool* arg0_, jobject* arg1_)
{
    WebChromeClient::onGeolocationPermissionsHidePrompt_IMPL_24017(*arg0_, *arg1_);
}

// public void onGeolocationPermissionsShowPrompt(Android.java.lang.String arg0, Android.android.webkit.GeolocationPermissionsDLRCallback arg1) :2616
void WebChromeClient__onGeolocationPermissionsShowPrompt_fn(WebChromeClient* __this, ::g::Android::java::lang::String* arg0, uObject* arg1)
{
    __this->onGeolocationPermissionsShowPrompt(arg0, arg1);
}

// public static extern void onGeolocationPermissionsShowPrompt_IMPL_24016(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :2714
void WebChromeClient__onGeolocationPermissionsShowPrompt_IMPL_24016_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebChromeClient::onGeolocationPermissionsShowPrompt_IMPL_24016(*arg0_, *arg1_, arg2_, arg3_);
}

// public void onHideCustomView() :2556
void WebChromeClient__onHideCustomView_fn(WebChromeClient* __this)
{
    __this->onHideCustomView();
}

// public static extern void onHideCustomView_IMPL_24006(bool arg0, Android.Base.Primitives.ujobject arg1) :2684
void WebChromeClient__onHideCustomView_IMPL_24006_fn(bool* arg0_, jobject* arg1_)
{
    WebChromeClient::onHideCustomView_IMPL_24006(*arg0_, *arg1_);
}

// public bool onJsAlert(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.android.webkit.JsResult arg3) :2580
void WebChromeClient__onJsAlert_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3, bool* __retval)
{
    *__retval = __this->onJsAlert(arg0, arg1, arg2, arg3);
}

// public static extern bool onJsAlert_IMPL_24010(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) :2696
void WebChromeClient__onJsAlert_IMPL_24010_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, bool* __retval)
{
    *__retval = WebChromeClient::onJsAlert_IMPL_24010(*arg0_, *arg1_, arg2_, arg3_, arg4_, arg5_);
}

// public bool onJsBeforeUnload(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.android.webkit.JsResult arg3) :2598
void WebChromeClient__onJsBeforeUnload_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3, bool* __retval)
{
    *__retval = __this->onJsBeforeUnload(arg0, arg1, arg2, arg3);
}

// public static extern bool onJsBeforeUnload_IMPL_24013(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) :2705
void WebChromeClient__onJsBeforeUnload_IMPL_24013_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, bool* __retval)
{
    *__retval = WebChromeClient::onJsBeforeUnload_IMPL_24013(*arg0_, *arg1_, arg2_, arg3_, arg4_, arg5_);
}

// public bool onJsConfirm(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.android.webkit.JsResult arg3) :2586
void WebChromeClient__onJsConfirm_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3, bool* __retval)
{
    *__retval = __this->onJsConfirm(arg0, arg1, arg2, arg3);
}

// public static extern bool onJsConfirm_IMPL_24011(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) :2699
void WebChromeClient__onJsConfirm_IMPL_24011_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, bool* __retval)
{
    *__retval = WebChromeClient::onJsConfirm_IMPL_24011(*arg0_, *arg1_, arg2_, arg3_, arg4_, arg5_);
}

// public bool onJsPrompt(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.java.lang.String arg3, Android.android.webkit.JsPromptResult arg4) :2592
void WebChromeClient__onJsPrompt_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::android::webkit::JsPromptResult* arg4, bool* __retval)
{
    *__retval = __this->onJsPrompt(arg0, arg1, arg2, arg3, arg4);
}

// public static extern bool onJsPrompt_IMPL_24012(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6) :2702
void WebChromeClient__onJsPrompt_IMPL_24012_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_, bool* __retval)
{
    *__retval = WebChromeClient::onJsPrompt_IMPL_24012(*arg0_, *arg1_, arg2_, arg3_, arg4_, arg5_, arg6_);
}

// public bool onJsTimeout() :2628
void WebChromeClient__onJsTimeout_fn(WebChromeClient* __this, bool* __retval)
{
    *__retval = __this->onJsTimeout();
}

// public static extern bool onJsTimeout_IMPL_24018(bool arg0, Android.Base.Primitives.ujobject arg1) :2720
void WebChromeClient__onJsTimeout_IMPL_24018_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = WebChromeClient::onJsTimeout_IMPL_24018(*arg0_, *arg1_);
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

// public void onReachedMaxAppCacheSize(long arg0, long arg1, Android.android.webkit.WebStorageDLRQuotaUpdater arg2) :2610
void WebChromeClient__onReachedMaxAppCacheSize_fn(WebChromeClient* __this, int64_t* arg0, int64_t* arg1, uObject* arg2)
{
    __this->onReachedMaxAppCacheSize(*arg0, *arg1, arg2);
}

// public static extern void onReachedMaxAppCacheSize_IMPL_24015(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2, long arg3, Android.Base.Wrappers.IJWrapper arg4) :2711
void WebChromeClient__onReachedMaxAppCacheSize_IMPL_24015_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_, int64_t* arg3_, uObject* arg4_)
{
    WebChromeClient::onReachedMaxAppCacheSize_IMPL_24015(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public void onReceivedIcon(Android.android.webkit.WebView arg0, Android.android.graphics.Bitmap arg1) :2532
void WebChromeClient__onReceivedIcon_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::graphics::Bitmap* arg1)
{
    __this->onReceivedIcon(arg0, arg1);
}

// public static extern void onReceivedIcon_IMPL_24002(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :2672
void WebChromeClient__onReceivedIcon_IMPL_24002_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebChromeClient::onReceivedIcon_IMPL_24002(*arg0_, *arg1_, arg2_, arg3_);
}

// public void onReceivedTitle(Android.android.webkit.WebView arg0, Android.java.lang.String arg1) :2526
void WebChromeClient__onReceivedTitle_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1)
{
    __this->onReceivedTitle(arg0, arg1);
}

// public static extern void onReceivedTitle_IMPL_24001(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :2669
void WebChromeClient__onReceivedTitle_IMPL_24001_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebChromeClient::onReceivedTitle_IMPL_24001(*arg0_, *arg1_, arg2_, arg3_);
}

// public void onReceivedTouchIconUrl(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, bool arg2) :2538
void WebChromeClient__onReceivedTouchIconUrl_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool* arg2)
{
    __this->onReceivedTouchIconUrl(arg0, arg1, *arg2);
}

// public static extern void onReceivedTouchIconUrl_IMPL_24003(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) :2675
void WebChromeClient__onReceivedTouchIconUrl_IMPL_24003_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_)
{
    WebChromeClient::onReceivedTouchIconUrl_IMPL_24003(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public void onRequestFocus(Android.android.webkit.WebView arg0) :2568
void WebChromeClient__onRequestFocus_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0)
{
    __this->onRequestFocus(arg0);
}

// public static extern void onRequestFocus_IMPL_24008(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2690
void WebChromeClient__onRequestFocus_IMPL_24008_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebChromeClient::onRequestFocus_IMPL_24008(*arg0_, *arg1_, arg2_);
}

// public void onShowCustomView(Android.android.view.View arg0, Android.android.webkit.WebChromeClientDLRCustomViewCallback arg1) :2544
void WebChromeClient__onShowCustomView_fn(WebChromeClient* __this, ::g::Android::android::view::View* arg0, uObject* arg1)
{
    __this->onShowCustomView(arg0, arg1);
}

// public void onShowCustomView(Android.android.view.View arg0, int arg1, Android.android.webkit.WebChromeClientDLRCustomViewCallback arg2) :2550
void WebChromeClient__onShowCustomView1_fn(WebChromeClient* __this, ::g::Android::android::view::View* arg0, int* arg1, uObject* arg2)
{
    __this->onShowCustomView1(arg0, *arg1, arg2);
}

// public static extern void onShowCustomView_IMPL_24004(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :2678
void WebChromeClient__onShowCustomView_IMPL_24004_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebChromeClient::onShowCustomView_IMPL_24004(*arg0_, *arg1_, arg2_, arg3_);
}

// public static extern void onShowCustomView_IMPL_24005(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :2681
void WebChromeClient__onShowCustomView_IMPL_24005_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_)
{
    WebChromeClient::onShowCustomView_IMPL_24005(*arg0_, *arg1_, arg2_, *arg3_, arg4_);
}

jclass WebChromeClient::_javaClass2_;
jmethodID WebChromeClient::getDefaultVideoPoster_24021_ID_;
jmethodID WebChromeClient::getVideoLoadingProgressView_24022_ID_;
jmethodID WebChromeClient::getVisitedHistory_24023_ID_;
jmethodID WebChromeClient::onCloseWindow_24009_ID_;
jmethodID WebChromeClient::onConsoleMessage_24019_ID_;
jmethodID WebChromeClient::onConsoleMessage_24020_ID_;
jmethodID WebChromeClient::onCreateWindow_24007_ID_;
jmethodID WebChromeClient::onExceededDatabaseQuota_24014_ID_;
jmethodID WebChromeClient::onGeolocationPermissionsHidePrompt_24017_ID_;
jmethodID WebChromeClient::onGeolocationPermissionsShowPrompt_24016_ID_;
jmethodID WebChromeClient::onHideCustomView_24006_ID_;
jmethodID WebChromeClient::onJsAlert_24010_ID_;
jmethodID WebChromeClient::onJsBeforeUnload_24013_ID_;
jmethodID WebChromeClient::onJsConfirm_24011_ID_;
jmethodID WebChromeClient::onJsPrompt_24012_ID_;
jmethodID WebChromeClient::onJsTimeout_24018_ID_;
jmethodID WebChromeClient::onProgressChanged_24000_ID_;
jmethodID WebChromeClient::onReachedMaxAppCacheSize_24015_ID_;
jmethodID WebChromeClient::onReceivedIcon_24002_ID_;
jmethodID WebChromeClient::onReceivedTitle_24001_ID_;
jmethodID WebChromeClient::onReceivedTouchIconUrl_24003_ID_;
jmethodID WebChromeClient::onRequestFocus_24008_ID_;
jmethodID WebChromeClient::onShowCustomView_24004_ID_;
jmethodID WebChromeClient::onShowCustomView_24005_ID_;
jmethodID WebChromeClient::WebChromeClient_23999_ID_c_;

// public WebChromeClient() [instance] :2505
void WebChromeClient::ctor_4()
{
    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());;
    CACHE_METHOD(WebChromeClient::WebChromeClient_23999_ID_c(),WebChromeClient::_javaClass2(),"<init>","()V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.<init> could not be cached",80);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(WebChromeClient::_javaClass2(), WebChromeClient::WebChromeClient_23999_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public WebChromeClient(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :2503
void WebChromeClient::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_3(obj, utype, hasFallbackClass, resolveType);
}

// public Android.android.graphics.Bitmap getDefaultVideoPoster() [instance] :2646
::g::Android::android::graphics::Bitmap* WebChromeClient::getDefaultVideoPoster()
{
    return uCast< ::g::Android::android::graphics::Bitmap*>(WebChromeClient::getDefaultVideoPoster_IMPL_24021(_subclassed, _javaObject), ::TYPES[1/*Android.android.graphics.Bitmap*/]);
}

// public Android.android.view.View getVideoLoadingProgressView() [instance] :2652
::g::Android::android::view::View* WebChromeClient::getVideoLoadingProgressView()
{
    return uCast< ::g::Android::android::view::View*>(WebChromeClient::getVideoLoadingProgressView_IMPL_24022(_subclassed, _javaObject), ::TYPES[2/*Android.android.view.View*/]);
}

// public void getVisitedHistory(Android.android.webkit.ValueCallback arg0) [instance] :2658
void WebChromeClient::getVisitedHistory(uObject* arg0)
{
    WebChromeClient::getVisitedHistory_IMPL_24023(_subclassed, _javaObject, arg0);
}

// public void onCloseWindow(Android.android.webkit.WebView arg0) [instance] :2574
void WebChromeClient::onCloseWindow(::g::Android::android::webkit::WebView* arg0)
{
    WebChromeClient::onCloseWindow_IMPL_24009(_subclassed, _javaObject, (uObject*)arg0);
}

// public bool onConsoleMessage(Android.android.webkit.ConsoleMessage arg0) [instance] :2640
bool WebChromeClient::onConsoleMessage(::g::Android::android::webkit::ConsoleMessage* arg0)
{
    return WebChromeClient::onConsoleMessage_IMPL_24020(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onConsoleMessage(Android.java.lang.String arg0, int arg1, Android.java.lang.String arg2) [instance] :2634
void WebChromeClient::onConsoleMessage1(::g::Android::java::lang::String* arg0, int arg1, ::g::Android::java::lang::String* arg2)
{
    int arg1_ = arg1;
    WebChromeClient::onConsoleMessage_IMPL_24019(_subclassed, _javaObject, (uObject*)arg0, arg1_, (uObject*)arg2);
}

// public bool onCreateWindow(Android.android.webkit.WebView arg0, bool arg1, bool arg2, Android.android.os.Message arg3) [instance] :2562
bool WebChromeClient::onCreateWindow(::g::Android::android::webkit::WebView* arg0, bool arg1, bool arg2, ::g::Android::android::os::Message* arg3)
{
    bool arg1_ = arg1;
    bool arg2_ = arg2;
    return WebChromeClient::onCreateWindow_IMPL_24007(_subclassed, _javaObject, (uObject*)arg0, arg1_, arg2_, (uObject*)arg3);
}

// public void onExceededDatabaseQuota(Android.java.lang.String arg0, Android.java.lang.String arg1, long arg2, long arg3, long arg4, Android.android.webkit.WebStorageDLRQuotaUpdater arg5) [instance] :2604
void WebChromeClient::onExceededDatabaseQuota(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uObject* arg5)
{
    int64_t arg2_ = arg2;
    int64_t arg3_ = arg3;
    int64_t arg4_ = arg4;
    WebChromeClient::onExceededDatabaseQuota_IMPL_24014(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2_, arg3_, arg4_, arg5);
}

// public void onGeolocationPermissionsHidePrompt() [instance] :2622
void WebChromeClient::onGeolocationPermissionsHidePrompt()
{
    WebChromeClient::onGeolocationPermissionsHidePrompt_IMPL_24017(_subclassed, _javaObject);
}

// public void onGeolocationPermissionsShowPrompt(Android.java.lang.String arg0, Android.android.webkit.GeolocationPermissionsDLRCallback arg1) [instance] :2616
void WebChromeClient::onGeolocationPermissionsShowPrompt(::g::Android::java::lang::String* arg0, uObject* arg1)
{
    WebChromeClient::onGeolocationPermissionsShowPrompt_IMPL_24016(_subclassed, _javaObject, (uObject*)arg0, arg1);
}

// public void onHideCustomView() [instance] :2556
void WebChromeClient::onHideCustomView()
{
    WebChromeClient::onHideCustomView_IMPL_24006(_subclassed, _javaObject);
}

// public bool onJsAlert(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.android.webkit.JsResult arg3) [instance] :2580
bool WebChromeClient::onJsAlert(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3)
{
    return WebChromeClient::onJsAlert_IMPL_24010(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, (uObject*)arg3);
}

// public bool onJsBeforeUnload(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.android.webkit.JsResult arg3) [instance] :2598
bool WebChromeClient::onJsBeforeUnload(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3)
{
    return WebChromeClient::onJsBeforeUnload_IMPL_24013(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, (uObject*)arg3);
}

// public bool onJsConfirm(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.android.webkit.JsResult arg3) [instance] :2586
bool WebChromeClient::onJsConfirm(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::android::webkit::JsResult* arg3)
{
    return WebChromeClient::onJsConfirm_IMPL_24011(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, (uObject*)arg3);
}

// public bool onJsPrompt(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.java.lang.String arg3, Android.android.webkit.JsPromptResult arg4) [instance] :2592
bool WebChromeClient::onJsPrompt(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3, ::g::Android::android::webkit::JsPromptResult* arg4)
{
    return WebChromeClient::onJsPrompt_IMPL_24012(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, (uObject*)arg3, (uObject*)arg4);
}

// public bool onJsTimeout() [instance] :2628
bool WebChromeClient::onJsTimeout()
{
    return WebChromeClient::onJsTimeout_IMPL_24018(_subclassed, _javaObject);
}

// public void onReachedMaxAppCacheSize(long arg0, long arg1, Android.android.webkit.WebStorageDLRQuotaUpdater arg2) [instance] :2610
void WebChromeClient::onReachedMaxAppCacheSize(int64_t arg0, int64_t arg1, uObject* arg2)
{
    int64_t arg0_ = arg0;
    int64_t arg1_ = arg1;
    WebChromeClient::onReachedMaxAppCacheSize_IMPL_24015(_subclassed, _javaObject, arg0_, arg1_, arg2);
}

// public void onReceivedIcon(Android.android.webkit.WebView arg0, Android.android.graphics.Bitmap arg1) [instance] :2532
void WebChromeClient::onReceivedIcon(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::graphics::Bitmap* arg1)
{
    WebChromeClient::onReceivedIcon_IMPL_24002(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public void onReceivedTitle(Android.android.webkit.WebView arg0, Android.java.lang.String arg1) [instance] :2526
void WebChromeClient::onReceivedTitle(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1)
{
    WebChromeClient::onReceivedTitle_IMPL_24001(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public void onReceivedTouchIconUrl(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, bool arg2) [instance] :2538
void WebChromeClient::onReceivedTouchIconUrl(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool arg2)
{
    bool arg2_ = arg2;
    WebChromeClient::onReceivedTouchIconUrl_IMPL_24003(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2_);
}

// public void onRequestFocus(Android.android.webkit.WebView arg0) [instance] :2568
void WebChromeClient::onRequestFocus(::g::Android::android::webkit::WebView* arg0)
{
    WebChromeClient::onRequestFocus_IMPL_24008(_subclassed, _javaObject, (uObject*)arg0);
}

// public void onShowCustomView(Android.android.view.View arg0, Android.android.webkit.WebChromeClientDLRCustomViewCallback arg1) [instance] :2544
void WebChromeClient::onShowCustomView(::g::Android::android::view::View* arg0, uObject* arg1)
{
    WebChromeClient::onShowCustomView_IMPL_24004(_subclassed, _javaObject, (uObject*)arg0, arg1);
}

// public void onShowCustomView(Android.android.view.View arg0, int arg1, Android.android.webkit.WebChromeClientDLRCustomViewCallback arg2) [instance] :2550
void WebChromeClient::onShowCustomView1(::g::Android::android::view::View* arg0, int arg1, uObject* arg2)
{
    int arg1_ = arg1;
    WebChromeClient::onShowCustomView_IMPL_24005(_subclassed, _javaObject, (uObject*)arg0, arg1_, arg2);
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

// public static extern Android.Base.Wrappers.IJWrapper getDefaultVideoPoster_IMPL_24021(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2729
uObject* WebChromeClient::getDefaultVideoPoster_IMPL_24021(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    
    uObject* result;
    CACHE_METHOD(WebChromeClient::getDefaultVideoPoster_24021_ID(),WebChromeClient::_javaClass2(),"getDefaultVideoPoster","()Landroid/graphics/Bitmap;",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.getDefaultVideoPoster could not be cached",95);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::getDefaultVideoPoster_24021_ID()),result,::g::Android::android::graphics::Bitmap_typeof(),::g::Android::android::graphics::Bitmap*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WebChromeClient::getDefaultVideoPoster_24021_ID()),result,::g::Android::android::graphics::Bitmap_typeof(),::g::Android::android::graphics::Bitmap*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getVideoLoadingProgressView_IMPL_24022(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2732
uObject* WebChromeClient::getVideoLoadingProgressView_IMPL_24022(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    
    uObject* result;
    CACHE_METHOD(WebChromeClient::getVideoLoadingProgressView_24022_ID(),WebChromeClient::_javaClass2(),"getVideoLoadingProgressView","()Landroid/view/View;",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.getVideoLoadingProgressView could not be cached",101);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::getVideoLoadingProgressView_24022_ID()),result,::g::Android::android::view::View_typeof(),::g::Android::android::view::View*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WebChromeClient::getVideoLoadingProgressView_24022_ID()),result,::g::Android::android::view::View_typeof(),::g::Android::android::view::View*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void getVisitedHistory_IMPL_24023(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2735
void WebChromeClient::getVisitedHistory_IMPL_24023(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::getVisitedHistory_24023_ID(),WebChromeClient::_javaClass2(),"getVisitedHistory","(Landroid/webkit/ValueCallback;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.getVisitedHistory could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::getVisitedHistory_24023_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::getVisitedHistory_24023_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public WebChromeClient New() [static] :2505
WebChromeClient* WebChromeClient::New5()
{
    WebChromeClient* obj2 = (WebChromeClient*)uNew(WebChromeClient_typeof());
    obj2->ctor_4();
    return obj2;
}

// public WebChromeClient New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :2503
WebChromeClient* WebChromeClient::New6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    WebChromeClient* obj1 = (WebChromeClient*)uNew(WebChromeClient_typeof());
    obj1->ctor_5(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void onCloseWindow_IMPL_24009(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2693
void WebChromeClient::onCloseWindow_IMPL_24009(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onCloseWindow_24009_ID(),WebChromeClient::_javaClass2(),"onCloseWindow","(Landroid/webkit/WebView;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onCloseWindow could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onCloseWindow_24009_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onCloseWindow_24009_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onConsoleMessage_IMPL_24019(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :2723
void WebChromeClient::onConsoleMessage_IMPL_24019(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onConsoleMessage_24019_ID(),WebChromeClient::_javaClass2(),"onConsoleMessage","(Ljava/lang/String;ILjava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onConsoleMessage could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onConsoleMessage_24019_ID(), _obArg2, ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onConsoleMessage_24019_ID(), _obArg2, ((jint)arg3_), _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onConsoleMessage_IMPL_24020(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2726
bool WebChromeClient::onConsoleMessage_IMPL_24020(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebChromeClient::onConsoleMessage_24020_ID(),WebChromeClient::_javaClass2(),"onConsoleMessage","(Landroid/webkit/ConsoleMessage;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onConsoleMessage could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onConsoleMessage_24020_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebChromeClient::onConsoleMessage_24020_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onCreateWindow_IMPL_24007(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, bool arg3, bool arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :2687
bool WebChromeClient::onCreateWindow_IMPL_24007(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_, bool arg4_, uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebChromeClient::onCreateWindow_24007_ID(),WebChromeClient::_javaClass2(),"onCreateWindow","(Landroid/webkit/WebView;ZZLandroid/os/Message;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onCreateWindow could not be cached",88);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onCreateWindow_24007_ID(), _obArg2, ((jboolean)arg3_), ((jboolean)arg4_), _obArg5));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebChromeClient::onCreateWindow_24007_ID(), _obArg2, ((jboolean)arg3_), ((jboolean)arg4_), _obArg5));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onExceededDatabaseQuota_IMPL_24014(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, long arg4, long arg5, long arg6, Android.Base.Wrappers.IJWrapper arg7) [static] :2708
void WebChromeClient::onExceededDatabaseQuota_IMPL_24014(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int64_t arg4_, int64_t arg5_, int64_t arg6_, uObject* arg7_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg7 = ((!arg7_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg7_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onExceededDatabaseQuota_24014_ID(),WebChromeClient::_javaClass2(),"onExceededDatabaseQuota","(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onExceededDatabaseQuota could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onExceededDatabaseQuota_24014_ID(), _obArg2, _obArg3, ((jlong)arg4_), ((jlong)arg5_), ((jlong)arg6_), _obArg7);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onExceededDatabaseQuota_24014_ID(), _obArg2, _obArg3, ((jlong)arg4_), ((jlong)arg5_), ((jlong)arg6_), _obArg7);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onGeolocationPermissionsHidePrompt_IMPL_24017(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2717
void WebChromeClient::onGeolocationPermissionsHidePrompt_IMPL_24017(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    
    CACHE_METHOD(WebChromeClient::onGeolocationPermissionsHidePrompt_24017_ID(),WebChromeClient::_javaClass2(),"onGeolocationPermissionsHidePrompt","()V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onGeolocationPermissionsHidePrompt could not be cached",108);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onGeolocationPermissionsHidePrompt_24017_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onGeolocationPermissionsHidePrompt_24017_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onGeolocationPermissionsShowPrompt_IMPL_24016(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :2714
void WebChromeClient::onGeolocationPermissionsShowPrompt_IMPL_24016(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onGeolocationPermissionsShowPrompt_24016_ID(),WebChromeClient::_javaClass2(),"onGeolocationPermissionsShowPrompt","(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onGeolocationPermissionsShowPrompt could not be cached",108);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onGeolocationPermissionsShowPrompt_24016_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onGeolocationPermissionsShowPrompt_24016_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onHideCustomView_IMPL_24006(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2684
void WebChromeClient::onHideCustomView_IMPL_24006(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    
    CACHE_METHOD(WebChromeClient::onHideCustomView_24006_ID(),WebChromeClient::_javaClass2(),"onHideCustomView","()V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onHideCustomView could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onHideCustomView_24006_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onHideCustomView_24006_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onJsAlert_IMPL_24010(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :2696
bool WebChromeClient::onJsAlert_IMPL_24010(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebChromeClient::onJsAlert_24010_ID(),WebChromeClient::_javaClass2(),"onJsAlert","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsAlert could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onJsAlert_24010_ID(), _obArg2, _obArg3, _obArg4, _obArg5));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebChromeClient::onJsAlert_24010_ID(), _obArg2, _obArg3, _obArg4, _obArg5));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onJsBeforeUnload_IMPL_24013(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :2705
bool WebChromeClient::onJsBeforeUnload_IMPL_24013(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebChromeClient::onJsBeforeUnload_24013_ID(),WebChromeClient::_javaClass2(),"onJsBeforeUnload","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsBeforeUnload could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onJsBeforeUnload_24013_ID(), _obArg2, _obArg3, _obArg4, _obArg5));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebChromeClient::onJsBeforeUnload_24013_ID(), _obArg2, _obArg3, _obArg4, _obArg5));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onJsConfirm_IMPL_24011(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :2699
bool WebChromeClient::onJsConfirm_IMPL_24011(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebChromeClient::onJsConfirm_24011_ID(),WebChromeClient::_javaClass2(),"onJsConfirm","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsConfirm could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onJsConfirm_24011_ID(), _obArg2, _obArg3, _obArg4, _obArg5));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebChromeClient::onJsConfirm_24011_ID(), _obArg2, _obArg3, _obArg4, _obArg5));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onJsPrompt_IMPL_24012(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6) [static] :2702
bool WebChromeClient::onJsPrompt_IMPL_24012(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_, uObject* arg6_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg6 = ((!arg6_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg6_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebChromeClient::onJsPrompt_24012_ID(),WebChromeClient::_javaClass2(),"onJsPrompt","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsPrompt could not be cached",84);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onJsPrompt_24012_ID(), _obArg2, _obArg3, _obArg4, _obArg5, _obArg6));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebChromeClient::onJsPrompt_24012_ID(), _obArg2, _obArg3, _obArg4, _obArg5, _obArg6));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onJsTimeout_IMPL_24018(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2720
bool WebChromeClient::onJsTimeout_IMPL_24018(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    
    bool result;
    CACHE_METHOD(WebChromeClient::onJsTimeout_24018_ID(),WebChromeClient::_javaClass2(),"onJsTimeout","()Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsTimeout could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onJsTimeout_24018_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebChromeClient::onJsTimeout_24018_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
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

// public static extern void onReachedMaxAppCacheSize_IMPL_24015(bool arg0, Android.Base.Primitives.ujobject arg1, long arg2, long arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :2711
void WebChromeClient::onReachedMaxAppCacheSize_IMPL_24015(bool arg0_, jobject arg1_, int64_t arg2_, int64_t arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onReachedMaxAppCacheSize_24015_ID(),WebChromeClient::_javaClass2(),"onReachedMaxAppCacheSize","(JJLandroid/webkit/WebStorage$QuotaUpdater;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onReachedMaxAppCacheSize could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onReachedMaxAppCacheSize_24015_ID(), ((jlong)arg2_), ((jlong)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onReachedMaxAppCacheSize_24015_ID(), ((jlong)arg2_), ((jlong)arg3_), _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onReceivedIcon_IMPL_24002(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :2672
void WebChromeClient::onReceivedIcon_IMPL_24002(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onReceivedIcon_24002_ID(),WebChromeClient::_javaClass2(),"onReceivedIcon","(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onReceivedIcon could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onReceivedIcon_24002_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onReceivedIcon_24002_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onReceivedTitle_IMPL_24001(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :2669
void WebChromeClient::onReceivedTitle_IMPL_24001(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onReceivedTitle_24001_ID(),WebChromeClient::_javaClass2(),"onReceivedTitle","(Landroid/webkit/WebView;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onReceivedTitle could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onReceivedTitle_24001_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onReceivedTitle_24001_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onReceivedTouchIconUrl_IMPL_24003(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) [static] :2675
void WebChromeClient::onReceivedTouchIconUrl_IMPL_24003(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onReceivedTouchIconUrl_24003_ID(),WebChromeClient::_javaClass2(),"onReceivedTouchIconUrl","(Landroid/webkit/WebView;Ljava/lang/String;Z)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onReceivedTouchIconUrl could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onReceivedTouchIconUrl_24003_ID(), _obArg2, _obArg3, ((jboolean)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onReceivedTouchIconUrl_24003_ID(), _obArg2, _obArg3, ((jboolean)arg4_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onRequestFocus_IMPL_24008(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2690
void WebChromeClient::onRequestFocus_IMPL_24008(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onRequestFocus_24008_ID(),WebChromeClient::_javaClass2(),"onRequestFocus","(Landroid/webkit/WebView;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onRequestFocus could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onRequestFocus_24008_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onRequestFocus_24008_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onShowCustomView_IMPL_24004(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :2678
void WebChromeClient::onShowCustomView_IMPL_24004(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onShowCustomView_24004_ID(),WebChromeClient::_javaClass2(),"onShowCustomView","(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onShowCustomView could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onShowCustomView_24004_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onShowCustomView_24004_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onShowCustomView_IMPL_24005(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :2681
void WebChromeClient::onShowCustomView_IMPL_24005(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebChromeClient::_javaClass2(),WebChromeClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebChromeClient::onShowCustomView_24005_ID(),WebChromeClient::_javaClass2(),"onShowCustomView","(Landroid/view/View;ILandroid/webkit/WebChromeClient$CustomViewCallback;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onShowCustomView could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebChromeClient::_javaClass2(), WebChromeClient::onShowCustomView_24005_ID(), _obArg2, ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebChromeClient::onShowCustomView_24005_ID(), _obArg2, ((jint)arg3_), _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(5297)
// -----------------------------------------------------------------------------

// public abstract extern interface WebChromeClientDLRCustomViewCallback :5297
// {
uInterfaceType* WebChromeClientDLRCustomViewCallback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.webkit.WebChromeClientDLRCustomViewCallback", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onCustomViewHidden", NULL, NULL, offsetof(WebChromeClientDLRCustomViewCallback, fp_onCustomViewHidden), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(2898)
// -----------------------------------------------------------------------------

// public sealed extern class WebResourceResponse :2898
// {
::g::Android::java::lang::Object_type* WebResourceResponse_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebResourceResponse);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.webkit.WebResourceResponse", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(11)
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
    type->Reflection.SetFunctions(3,
        new uFunction("_Init", NULL, (void*)WebSettings___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("setJavaScriptEnabled", NULL, (void*)WebSettings__setJavaScriptEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setJavaScriptEnabled_IMPL_24140", NULL, (void*)WebSettings__setJavaScriptEnabled_IMPL_24140_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()));
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

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(5329)
// -----------------------------------------------------------------------------

// public abstract extern interface WebStorageDLRQuotaUpdater :5329
// {
uInterfaceType* WebStorageDLRQuotaUpdater_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.webkit.WebStorageDLRQuotaUpdater", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("updateQuota", NULL, NULL, offsetof(WebStorageDLRQuotaUpdater, fp_updateQuota), false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(3384)
// -----------------------------------------------------------------------------

// public sealed extern class WebView :3384
// {
WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 49;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Android.android.webkit.WebView", options);
    type->SetBase(::g::Android::android::widget::AbsoluteLayout_typeof());
    type->fp_computeScroll = (void(*)(::g::Android::android::view::View*))WebView__computeScroll_fn;
    type->fp_dispatchKeyEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::KeyEvent*, bool*))WebView__dispatchKeyEvent_fn;
    type->fp_getAccessibilityNodeProvider = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeProvider**))WebView__getAccessibilityNodeProvider_fn;
    type->fp_onCreateInputConnection = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::inputmethod::EditorInfo*, uObject**))WebView__onCreateInputConnection_fn;
    type->fp_onGenericMotionEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))WebView__onGenericMotionEvent_fn;
    type->fp_onHoverEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))WebView__onHoverEvent_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))WebView__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))WebView__onInitializeAccessibilityNodeInfo_fn;
    type->fp_onKeyDown = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*))WebView__onKeyDown_fn;
    type->fp_onKeyMultiple = (void(*)(::g::Android::android::view::View*, int*, int*, ::g::Android::android::view::KeyEvent*, bool*))WebView__onKeyMultiple_fn;
    type->fp_onKeyUp = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*))WebView__onKeyUp_fn;
    type->fp_onScrollChanged = (void(*)(::g::Android::android::view::View*, int*, int*, int*, int*))WebView__onScrollChanged_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))WebView__onTouchEvent_fn;
    type->fp_onTrackballEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))WebView__onTrackballEvent_fn;
    type->fp_onWindowFocusChanged = (void(*)(::g::Android::android::view::View*, bool*))WebView__onWindowFocusChanged_fn;
    type->fp_performAccessibilityAction = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::os::Bundle*, bool*))WebView__performAccessibilityAction_fn;
    type->fp_performLongClick = (void(*)(::g::Android::android::view::View*, bool*))WebView__performLongClick_fn;
    type->fp_requestChildRectangleOnScreen = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))WebView__requestChildRectangleOnScreen_fn;
    type->fp_requestFocus2 = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::graphics::Rect*, bool*))WebView__requestFocus2_fn;
    type->fp_setBackgroundColor = (void(*)(::g::Android::android::view::View*, int*))WebView__setBackgroundColor_fn;
    type->fp_setLayerType = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::graphics::Paint*))WebView__setLayerType_fn;
    type->fp_setLayoutParams = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::ViewGroupDLRLayoutParams*))WebView__setLayoutParams_fn;
    type->fp_setOverScrollMode = (void(*)(::g::Android::android::view::View*, int*))WebView__setOverScrollMode_fn;
    type->fp_setScrollBarStyle = (void(*)(::g::Android::android::view::View*, int*))WebView__setScrollBarStyle_fn;
    type->fp_shouldDelayChildPressedState = (void(*)(::g::Android::android::view::ViewGroup*, bool*))WebView__shouldDelayChildPressedState_fn;
    type->interface3.fp_onChildViewAdded = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))WebView__onChildViewAdded_fn;
    type->interface3.fp_onChildViewRemoved = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))WebView__onChildViewRemoved_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestChildFocus_fn;
    type->interface2.fp_recomputeViewAttributes = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__recomputeViewAttributes_fn;
    type->interface2.fp_clearChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__clearChildFocus_fn;
    type->interface2.fp_getChildVisibleRect = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, ::g::Android::android::graphics::Point*, bool*))::g::Android::android::view::ViewGroup__getChildVisibleRect_fn;
    type->interface2.fp_focusSearch = (void(*)(uObject*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::View**))::g::Android::android::view::ViewGroup__focusSearch1_fn;
    type->interface2.fp_bringChildToFront = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__bringChildToFront_fn;
    type->interface2.fp_focusableViewAvailable = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__focusableViewAvailable_fn;
    type->interface2.fp_showContextMenuForChild = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))::g::Android::android::view::ViewGroup__showContextMenuForChild_fn;
    type->interface2.fp_createContextMenu = (void(*)(uObject*, uObject*))::g::Android::android::view::View__createContextMenu_fn;
    type->interface2.fp_startActionModeForChild = (void(*)(uObject*, ::g::Android::android::view::View*, uObject*, ::g::Android::android::view::ActionMode**))::g::Android::android::view::ViewGroup__startActionModeForChild_fn;
    type->interface2.fp_childDrawableStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__childDrawableStateChanged_fn;
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))::g::Android::android::view::ViewGroup__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))WebView__requestChildRectangleOnScreen_fn;
    type->interface2.fp_requestSendAccessibilityEvent = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*, bool*))::g::Android::android::view::ViewGroup__requestSendAccessibilityEvent_fn;
    type->interface2.fp_childHasTransientStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))::g::Android::android::view::ViewGroup__childHasTransientStateChanged_fn;
    type->interface2.fp_requestFitSystemWindows = (void(*)(uObject*))::g::Android::android::view::View__requestFitSystemWindows_fn;
    type->interface2.fp_getParentForAccessibility = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParentForAccessibility_fn;
    type->interface2.fp_notifySubtreeAccessibilityStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*, int*))::g::Android::android::view::ViewGroup__notifySubtreeAccessibilityStateChanged_fn;
    type->interface2.fp_canResolveLayoutDirection = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveLayoutDirection_fn;
    type->interface2.fp_isLayoutDirectionResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutDirectionResolved_fn;
    type->interface2.fp_getLayoutDirection = (void(*)(uObject*, int*))::g::Android::android::view::View__getLayoutDirection_fn;
    type->interface2.fp_canResolveTextDirection = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveTextDirection_fn;
    type->interface2.fp_isTextDirectionResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isTextDirectionResolved_fn;
    type->interface2.fp_getTextDirection = (void(*)(uObject*, int*))::g::Android::android::view::View__getTextDirection_fn;
    type->interface2.fp_canResolveTextAlignment = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveTextAlignment_fn;
    type->interface2.fp_isTextAlignmentResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isTextAlignmentResolved_fn;
    type->interface2.fp_getTextAlignment = (void(*)(uObject*, int*))::g::Android::android::view::View__getTextAlignment_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[4] = ::g::Android::android::view::accessibility::AccessibilityNodeProvider_typeof();
    ::TYPES[5] = ::g::Android::android::webkit::WebSettings_typeof();
    ::TYPES[6] = ::g::Android::java::lang::String_typeof();
    ::TYPES[7] = ::g::Android::android::view::inputmethod::InputConnection_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(WebView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(WebView_type, interface2),
        ::g::Android::android::view::ViewGroupDLROnHierarchyChangeListener_typeof(), offsetof(WebView_type, interface3));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::addJavascriptInterface_24285_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::canGoBack_24239_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::canGoForward_24241_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::computeScroll_24308_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::dispatchKeyEvent_24332_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::getAccessibilityNodeProvider_24316_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::getProgress_24261_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::getSettings_24287_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::getTitle_24259_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::getUrl_24257_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::goBack_24240_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::goForward_24242_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::loadDataWithBaseURL_24233_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::loadUrl_24230_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onChildViewAdded_24289_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onChildViewRemoved_24290_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onCreateInputConnection_24326_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onGenericMotionEvent_24311_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onHoverEvent_24309_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onInitializeAccessibilityEvent_24319_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onInitializeAccessibilityNodeInfo_24318_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onKeyDown_24313_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onKeyMultiple_24315_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onKeyUp_24314_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onScrollChanged_24331_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onTouchEvent_24310_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onTrackballEvent_24312_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::onWindowFocusChanged_24328_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::performAccessibilityAction_24320_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::performLongClick_24324_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::reload_24238_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::requestChildRectangleOnScreen_24335_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::requestFocus_24333_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setBackgroundColor_24336_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setLayerType_24337_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setLayoutParams_24300_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setOverScrollMode_24301_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setScrollBarStyle_24302_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setWebChromeClient_24283_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::setWebViewClient_24281_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::shouldDelayChildPressedState_24317_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::stopLoading_24237_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebView::WebView_24212_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(61,
        new uFunction("_Init", NULL, (void*)WebView___Init5_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("addJavascriptInterface", NULL, (void*)WebView__addJavascriptInterface_fn, 0, false, uVoid_typeof(), 2, ::g::Android::java::lang::Object_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("addJavascriptInterface_IMPL_24285", NULL, (void*)WebView__addJavascriptInterface_IMPL_24285_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("canGoBack", NULL, (void*)WebView__canGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("canGoBack_IMPL_24239", NULL, (void*)WebView__canGoBack_IMPL_24239_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("canGoForward", NULL, (void*)WebView__canGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("canGoForward_IMPL_24241", NULL, (void*)WebView__canGoForward_IMPL_24241_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("computeScroll_IMPL_24308", NULL, (void*)WebView__computeScroll_IMPL_24308_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("dispatchKeyEvent_IMPL_24332", NULL, (void*)WebView__dispatchKeyEvent_IMPL_24332_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("getAccessibilityNodeProvider_IMPL_24316", NULL, (void*)WebView__getAccessibilityNodeProvider_IMPL_24316_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getProgress", NULL, (void*)WebView__getProgress_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getProgress_IMPL_24261", NULL, (void*)WebView__getProgress_IMPL_24261_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getSettings", NULL, (void*)WebView__getSettings_fn, 0, false, ::g::Android::android::webkit::WebSettings_typeof(), 0),
        new uFunction("getSettings_IMPL_24287", NULL, (void*)WebView__getSettings_IMPL_24287_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getTitle", NULL, (void*)WebView__getTitle_fn, 0, false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getTitle_IMPL_24259", NULL, (void*)WebView__getTitle_IMPL_24259_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getUrl", NULL, (void*)WebView__getUrl_fn, 0, false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("getUrl_IMPL_24257", NULL, (void*)WebView__getUrl_IMPL_24257_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("goBack", NULL, (void*)WebView__goBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("goBack_IMPL_24240", NULL, (void*)WebView__goBack_IMPL_24240_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("goForward", NULL, (void*)WebView__goForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("goForward_IMPL_24242", NULL, (void*)WebView__goForward_IMPL_24242_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("loadDataWithBaseURL", NULL, (void*)WebView__loadDataWithBaseURL_fn, 0, false, uVoid_typeof(), 5, ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("loadDataWithBaseURL_IMPL_24233", NULL, (void*)WebView__loadDataWithBaseURL_IMPL_24233_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("loadUrl", NULL, (void*)WebView__loadUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("loadUrl_IMPL_24230", NULL, (void*)WebView__loadUrl_IMPL_24230_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction(".ctor", NULL, (void*)WebView__New13_fn, 0, true, WebView_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction("onChildViewAdded", NULL, (void*)WebView__onChildViewAdded_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::view::View_typeof(), ::g::Android::android::view::View_typeof()),
        new uFunction("onChildViewAdded_IMPL_24289", NULL, (void*)WebView__onChildViewAdded_IMPL_24289_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onChildViewRemoved", NULL, (void*)WebView__onChildViewRemoved_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::view::View_typeof(), ::g::Android::android::view::View_typeof()),
        new uFunction("onChildViewRemoved_IMPL_24290", NULL, (void*)WebView__onChildViewRemoved_IMPL_24290_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onCreateInputConnection_IMPL_24326", NULL, (void*)WebView__onCreateInputConnection_IMPL_24326_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onGenericMotionEvent_IMPL_24311", NULL, (void*)WebView__onGenericMotionEvent_IMPL_24311_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onHoverEvent_IMPL_24309", NULL, (void*)WebView__onHoverEvent_IMPL_24309_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_24319", NULL, (void*)WebView__onInitializeAccessibilityEvent_IMPL_24319_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_24318", NULL, (void*)WebView__onInitializeAccessibilityNodeInfo_IMPL_24318_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyDown_IMPL_24313", NULL, (void*)WebView__onKeyDown_IMPL_24313_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyMultiple_IMPL_24315", NULL, (void*)WebView__onKeyMultiple_IMPL_24315_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyUp_IMPL_24314", NULL, (void*)WebView__onKeyUp_IMPL_24314_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onScrollChanged_IMPL_24331", NULL, (void*)WebView__onScrollChanged_IMPL_24331_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onTouchEvent_IMPL_24310", NULL, (void*)WebView__onTouchEvent_IMPL_24310_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onTrackballEvent_IMPL_24312", NULL, (void*)WebView__onTrackballEvent_IMPL_24312_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onWindowFocusChanged_IMPL_24328", NULL, (void*)WebView__onWindowFocusChanged_IMPL_24328_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("performAccessibilityAction_IMPL_24320", NULL, (void*)WebView__performAccessibilityAction_IMPL_24320_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("performLongClick_IMPL_24324", NULL, (void*)WebView__performLongClick_IMPL_24324_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("reload", NULL, (void*)WebView__reload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("reload_IMPL_24238", NULL, (void*)WebView__reload_IMPL_24238_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("requestChildRectangleOnScreen_IMPL_24335", NULL, (void*)WebView__requestChildRectangleOnScreen_IMPL_24335_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("requestFocus_IMPL_24333", NULL, (void*)WebView__requestFocus_IMPL_24333_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setBackgroundColor_IMPL_24336", NULL, (void*)WebView__setBackgroundColor_IMPL_24336_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setLayerType_IMPL_24337", NULL, (void*)WebView__setLayerType_IMPL_24337_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setLayoutParams_IMPL_24300", NULL, (void*)WebView__setLayoutParams_IMPL_24300_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setOverScrollMode_IMPL_24301", NULL, (void*)WebView__setOverScrollMode_IMPL_24301_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setScrollBarStyle_IMPL_24302", NULL, (void*)WebView__setScrollBarStyle_IMPL_24302_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setWebChromeClient", NULL, (void*)WebView__setWebChromeClient_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::webkit::WebChromeClient_typeof()),
        new uFunction("setWebChromeClient_IMPL_24283", NULL, (void*)WebView__setWebChromeClient_IMPL_24283_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setWebViewClient", NULL, (void*)WebView__setWebViewClient_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::webkit::WebViewClient_typeof()),
        new uFunction("setWebViewClient_IMPL_24281", NULL, (void*)WebView__setWebViewClient_IMPL_24281_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("shouldDelayChildPressedState_IMPL_24317", NULL, (void*)WebView__shouldDelayChildPressedState_IMPL_24317_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("stopLoading", NULL, (void*)WebView__stopLoading_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("stopLoading_IMPL_24237", NULL, (void*)WebView__stopLoading_IMPL_24237_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
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

// public override sealed void computeScroll() :4061
void WebView__computeScroll_fn(WebView* __this)
{
    WebView::computeScroll_IMPL_24308(__this->_subclassed, __this->_javaObject);
}

// public static extern void computeScroll_IMPL_24308(bool arg0, Android.Base.Primitives.ujobject arg1) :4528
void WebView__computeScroll_IMPL_24308_fn(bool* arg0_, jobject* arg1_)
{
    WebView::computeScroll_IMPL_24308(*arg0_, *arg1_);
}

// public override sealed bool dispatchKeyEvent(Android.android.view.KeyEvent arg0) :4205
void WebView__dispatchKeyEvent_fn(WebView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval)
{
    return *__retval = WebView::dispatchKeyEvent_IMPL_24332(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool dispatchKeyEvent_IMPL_24332(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4600
void WebView__dispatchKeyEvent_IMPL_24332_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = WebView::dispatchKeyEvent_IMPL_24332(*arg0_, *arg1_, arg2_);
}

// public override sealed Android.android.view.accessibility.AccessibilityNodeProvider getAccessibilityNodeProvider() :4109
void WebView__getAccessibilityNodeProvider_fn(WebView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeProvider** __retval)
{
    return *__retval = uCast< ::g::Android::android::view::accessibility::AccessibilityNodeProvider*>(WebView::getAccessibilityNodeProvider_IMPL_24316(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.android.view.accessibility.AccessibilityNodeProvider*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getAccessibilityNodeProvider_IMPL_24316(bool arg0, Android.Base.Primitives.ujobject arg1) :4552
void WebView__getAccessibilityNodeProvider_IMPL_24316_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WebView::getAccessibilityNodeProvider_IMPL_24316(*arg0_, *arg1_);
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

// public Android.java.lang.String getTitle() :3767
void WebView__getTitle_fn(WebView* __this, ::g::Android::java::lang::String** __retval)
{
    *__retval = __this->getTitle();
}

// public static extern Android.Base.Wrappers.IJWrapper getTitle_IMPL_24259(bool arg0, Android.Base.Primitives.ujobject arg1) :4381
void WebView__getTitle_IMPL_24259_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WebView::getTitle_IMPL_24259(*arg0_, *arg1_);
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

// public void onChildViewAdded(Android.android.view.View arg0, Android.android.view.View arg1) :3947
void WebView__onChildViewAdded_fn(WebView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1)
{
    __this->onChildViewAdded(arg0, arg1);
}

// public static extern void onChildViewAdded_IMPL_24289(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :4471
void WebView__onChildViewAdded_IMPL_24289_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebView::onChildViewAdded_IMPL_24289(*arg0_, *arg1_, arg2_, arg3_);
}

// public void onChildViewRemoved(Android.android.view.View arg0, Android.android.view.View arg1) :3953
void WebView__onChildViewRemoved_fn(WebView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1)
{
    __this->onChildViewRemoved(arg0, arg1);
}

// public static extern void onChildViewRemoved_IMPL_24290(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :4474
void WebView__onChildViewRemoved_IMPL_24290_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebView::onChildViewRemoved_IMPL_24290(*arg0_, *arg1_, arg2_, arg3_);
}

// public override sealed Android.android.view.inputmethod.InputConnection onCreateInputConnection(Android.android.view.inputmethod.EditorInfo arg0) :4169
void WebView__onCreateInputConnection_fn(WebView* __this, ::g::Android::android::view::inputmethod::EditorInfo* arg0, uObject** __retval)
{
    return *__retval = WebView::onCreateInputConnection_IMPL_24326(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern Android.Base.Wrappers.IJWrapper onCreateInputConnection_IMPL_24326(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4582
void WebView__onCreateInputConnection_IMPL_24326_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = WebView::onCreateInputConnection_IMPL_24326(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onGenericMotionEvent(Android.android.view.MotionEvent arg0) :4079
void WebView__onGenericMotionEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = WebView::onGenericMotionEvent_IMPL_24311(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onGenericMotionEvent_IMPL_24311(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4537
void WebView__onGenericMotionEvent_IMPL_24311_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = WebView::onGenericMotionEvent_IMPL_24311(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onHoverEvent(Android.android.view.MotionEvent arg0) :4067
void WebView__onHoverEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = WebView::onHoverEvent_IMPL_24309(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onHoverEvent_IMPL_24309(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4531
void WebView__onHoverEvent_IMPL_24309_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = WebView::onHoverEvent_IMPL_24309(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :4127
void WebView__onInitializeAccessibilityEvent_fn(WebView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    WebView::onInitializeAccessibilityEvent_IMPL_24319(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_24319(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4561
void WebView__onInitializeAccessibilityEvent_IMPL_24319_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebView::onInitializeAccessibilityEvent_IMPL_24319(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :4121
void WebView__onInitializeAccessibilityNodeInfo_fn(WebView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    WebView::onInitializeAccessibilityNodeInfo_IMPL_24318(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_24318(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4558
void WebView__onInitializeAccessibilityNodeInfo_IMPL_24318_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    WebView::onInitializeAccessibilityNodeInfo_IMPL_24318(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onKeyDown(int arg0, Android.android.view.KeyEvent arg1) :4091
void WebView__onKeyDown_fn(WebView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = WebView::onKeyDown_IMPL_24313(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool onKeyDown_IMPL_24313(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :4543
void WebView__onKeyDown_IMPL_24313_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = WebView::onKeyDown_IMPL_24313(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed bool onKeyMultiple(int arg0, int arg1, Android.android.view.KeyEvent arg2) :4103
void WebView__onKeyMultiple_fn(WebView* __this, int* arg0, int* arg1, ::g::Android::android::view::KeyEvent* arg2, bool* __retval)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    return *__retval = WebView::onKeyMultiple_IMPL_24315(__this->_subclassed, __this->_javaObject, arg0_, arg1_, (uObject*)arg2), void();
}

// public static extern bool onKeyMultiple_IMPL_24315(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :4549
void WebView__onKeyMultiple_IMPL_24315_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, bool* __retval)
{
    *__retval = WebView::onKeyMultiple_IMPL_24315(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public override sealed bool onKeyUp(int arg0, Android.android.view.KeyEvent arg1) :4097
void WebView__onKeyUp_fn(WebView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = WebView::onKeyUp_IMPL_24314(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool onKeyUp_IMPL_24314(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :4546
void WebView__onKeyUp_IMPL_24314_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = WebView::onKeyUp_IMPL_24314(*arg0_, *arg1_, *arg2_, arg3_);
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

// public override sealed bool onTrackballEvent(Android.android.view.MotionEvent arg0) :4085
void WebView__onTrackballEvent_fn(WebView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = WebView::onTrackballEvent_IMPL_24312(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTrackballEvent_IMPL_24312(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :4540
void WebView__onTrackballEvent_IMPL_24312_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = WebView::onTrackballEvent_IMPL_24312(*arg0_, *arg1_, arg2_);
}

// public override sealed void onWindowFocusChanged(bool arg0) :4181
void WebView__onWindowFocusChanged_fn(WebView* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    WebView::onWindowFocusChanged_IMPL_24328(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void onWindowFocusChanged_IMPL_24328(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :4588
void WebView__onWindowFocusChanged_IMPL_24328_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    WebView::onWindowFocusChanged_IMPL_24328(*arg0_, *arg1_, *arg2_);
}

// public override sealed bool performAccessibilityAction(int arg0, Android.android.os.Bundle arg1) :4133
void WebView__performAccessibilityAction_fn(WebView* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = WebView::performAccessibilityAction_IMPL_24320(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool performAccessibilityAction_IMPL_24320(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :4564
void WebView__performAccessibilityAction_IMPL_24320_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = WebView::performAccessibilityAction_IMPL_24320(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed bool performLongClick() :4157
void WebView__performLongClick_fn(WebView* __this, bool* __retval)
{
    return *__retval = WebView::performLongClick_IMPL_24324(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool performLongClick_IMPL_24324(bool arg0, Android.Base.Primitives.ujobject arg1) :4576
void WebView__performLongClick_IMPL_24324_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = WebView::performLongClick_IMPL_24324(*arg0_, *arg1_);
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

// public override sealed bool requestChildRectangleOnScreen(Android.android.view.View arg0, Android.android.graphics.Rect arg1, bool arg2) :4223
void WebView__requestChildRectangleOnScreen_fn(WebView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool* arg2, bool* __retval)
{
    bool arg2_ = *arg2;
    return *__retval = WebView::requestChildRectangleOnScreen_IMPL_24335(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1, arg2_), void();
}

// public static extern bool requestChildRectangleOnScreen_IMPL_24335(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) :4609
void WebView__requestChildRectangleOnScreen_IMPL_24335_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval)
{
    *__retval = WebView::requestChildRectangleOnScreen_IMPL_24335(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public override sealed bool requestFocus(int arg0, Android.android.graphics.Rect arg1) :4211
void WebView__requestFocus2_fn(WebView* __this, int* arg0, ::g::Android::android::graphics::Rect* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = WebView::requestFocus_IMPL_24333(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool requestFocus_IMPL_24333(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :4603
void WebView__requestFocus_IMPL_24333_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = WebView::requestFocus_IMPL_24333(*arg0_, *arg1_, *arg2_, arg3_);
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

// public override sealed void setLayerType(int arg0, Android.android.graphics.Paint arg1) :4235
void WebView__setLayerType_fn(WebView* __this, int* arg0, ::g::Android::android::graphics::Paint* arg1)
{
    int arg0_ = *arg0;
    WebView::setLayerType_IMPL_24337(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1);
}

// public static extern void setLayerType_IMPL_24337(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :4615
void WebView__setLayerType_IMPL_24337_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_)
{
    WebView::setLayerType_IMPL_24337(*arg0_, *arg1_, *arg2_, arg3_);
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

// public override sealed void setOverScrollMode(int arg0) :4019
void WebView__setOverScrollMode_fn(WebView* __this, int* arg0)
{
    int arg0_ = *arg0;
    WebView::setOverScrollMode_IMPL_24301(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setOverScrollMode_IMPL_24301(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :4507
void WebView__setOverScrollMode_IMPL_24301_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    WebView::setOverScrollMode_IMPL_24301(*arg0_, *arg1_, *arg2_);
}

// public override sealed void setScrollBarStyle(int arg0) :4025
void WebView__setScrollBarStyle_fn(WebView* __this, int* arg0)
{
    int arg0_ = *arg0;
    WebView::setScrollBarStyle_IMPL_24302(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setScrollBarStyle_IMPL_24302(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :4510
void WebView__setScrollBarStyle_IMPL_24302_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    WebView::setScrollBarStyle_IMPL_24302(*arg0_, *arg1_, *arg2_);
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

// public override sealed bool shouldDelayChildPressedState() :4115
void WebView__shouldDelayChildPressedState_fn(WebView* __this, bool* __retval)
{
    return *__retval = WebView::shouldDelayChildPressedState_IMPL_24317(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool shouldDelayChildPressedState_IMPL_24317(bool arg0, Android.Base.Primitives.ujobject arg1) :4555
void WebView__shouldDelayChildPressedState_IMPL_24317_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = WebView::shouldDelayChildPressedState_IMPL_24317(*arg0_, *arg1_);
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
jmethodID WebView::computeScroll_24308_ID_;
jmethodID WebView::dispatchKeyEvent_24332_ID_;
jmethodID WebView::getAccessibilityNodeProvider_24316_ID_;
jmethodID WebView::getProgress_24261_ID_;
jmethodID WebView::getSettings_24287_ID_;
jmethodID WebView::getTitle_24259_ID_;
jmethodID WebView::getUrl_24257_ID_;
jmethodID WebView::goBack_24240_ID_;
jmethodID WebView::goForward_24242_ID_;
jmethodID WebView::loadDataWithBaseURL_24233_ID_;
jmethodID WebView::loadUrl_24230_ID_;
jmethodID WebView::onChildViewAdded_24289_ID_;
jmethodID WebView::onChildViewRemoved_24290_ID_;
jmethodID WebView::onCreateInputConnection_24326_ID_;
jmethodID WebView::onGenericMotionEvent_24311_ID_;
jmethodID WebView::onHoverEvent_24309_ID_;
jmethodID WebView::onInitializeAccessibilityEvent_24319_ID_;
jmethodID WebView::onInitializeAccessibilityNodeInfo_24318_ID_;
jmethodID WebView::onKeyDown_24313_ID_;
jmethodID WebView::onKeyMultiple_24315_ID_;
jmethodID WebView::onKeyUp_24314_ID_;
jmethodID WebView::onScrollChanged_24331_ID_;
jmethodID WebView::onTouchEvent_24310_ID_;
jmethodID WebView::onTrackballEvent_24312_ID_;
jmethodID WebView::onWindowFocusChanged_24328_ID_;
jmethodID WebView::performAccessibilityAction_24320_ID_;
jmethodID WebView::performLongClick_24324_ID_;
jmethodID WebView::reload_24238_ID_;
jmethodID WebView::requestChildRectangleOnScreen_24335_ID_;
jmethodID WebView::requestFocus_24333_ID_;
jmethodID WebView::setBackgroundColor_24336_ID_;
jmethodID WebView::setLayerType_24337_ID_;
jmethodID WebView::setLayoutParams_24300_ID_;
jmethodID WebView::setOverScrollMode_24301_ID_;
jmethodID WebView::setScrollBarStyle_24302_ID_;
jmethodID WebView::setWebChromeClient_24283_ID_;
jmethodID WebView::setWebViewClient_24281_ID_;
jmethodID WebView::shouldDelayChildPressedState_24317_ID_;
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
    return uCast< ::g::Android::android::webkit::WebSettings*>(WebView::getSettings_IMPL_24287(_subclassed, _javaObject), ::TYPES[5/*Android.android.webkit.WebSettings*/]);
}

// public Android.java.lang.String getTitle() [instance] :3767
::g::Android::java::lang::String* WebView::getTitle()
{
    return uCast< ::g::Android::java::lang::String*>(WebView::getTitle_IMPL_24259(_subclassed, _javaObject), ::TYPES[6/*Android.java.lang.String*/]);
}

// public Android.java.lang.String getUrl() [instance] :3755
::g::Android::java::lang::String* WebView::getUrl()
{
    return uCast< ::g::Android::java::lang::String*>(WebView::getUrl_IMPL_24257(_subclassed, _javaObject), ::TYPES[6/*Android.java.lang.String*/]);
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

// public void onChildViewAdded(Android.android.view.View arg0, Android.android.view.View arg1) [instance] :3947
void WebView::onChildViewAdded(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1)
{
    WebView::onChildViewAdded_IMPL_24289(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public void onChildViewRemoved(Android.android.view.View arg0, Android.android.view.View arg1) [instance] :3953
void WebView::onChildViewRemoved(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1)
{
    WebView::onChildViewRemoved_IMPL_24290(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
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

// public static extern void computeScroll_IMPL_24308(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4528
void WebView::computeScroll_IMPL_24308(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::computeScroll_24308_ID(),WebView::_javaClass5(),"computeScroll","()V",GetMethodID,"Id for fallback method android.webkit.WebView.computeScroll could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::computeScroll_24308_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::computeScroll_24308_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool dispatchKeyEvent_IMPL_24332(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4600
bool WebView::dispatchKeyEvent_IMPL_24332(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::dispatchKeyEvent_24332_ID(),WebView::_javaClass5(),"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.dispatchKeyEvent could not be cached",82);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::dispatchKeyEvent_24332_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::dispatchKeyEvent_24332_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getAccessibilityNodeProvider_IMPL_24316(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4552
uObject* WebView::getAccessibilityNodeProvider_IMPL_24316(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    uObject* result;
    CACHE_METHOD(WebView::getAccessibilityNodeProvider_24316_ID(),WebView::_javaClass5(),"getAccessibilityNodeProvider","()Landroid/view/accessibility/AccessibilityNodeProvider;",GetMethodID,"Id for fallback method android.webkit.WebView.getAccessibilityNodeProvider could not be cached",94);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WebView::_javaClass5(), WebView::getAccessibilityNodeProvider_24316_ID()),result,::g::Android::Fallbacks::Android_android_view_accessibility_AccessibilityNodeProvider_typeof(),::g::Android::android::view::accessibility::AccessibilityNodeProvider*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WebView::getAccessibilityNodeProvider_24316_ID()),result,::g::Android::Fallbacks::Android_android_view_accessibility_AccessibilityNodeProvider_typeof(),::g::Android::android::view::accessibility::AccessibilityNodeProvider*,true,true);
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

// public static extern Android.Base.Wrappers.IJWrapper getTitle_IMPL_24259(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4381
uObject* WebView::getTitle_IMPL_24259(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    uObject* result;
    CACHE_METHOD(WebView::getTitle_24259_ID(),WebView::_javaClass5(),"getTitle","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.webkit.WebView.getTitle could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WebView::_javaClass5(), WebView::getTitle_24259_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WebView::getTitle_24259_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
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

// public static extern void onChildViewAdded_IMPL_24289(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4471
void WebView::onChildViewAdded_IMPL_24289(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::onChildViewAdded_24289_ID(),WebView::_javaClass5(),"onChildViewAdded","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onChildViewAdded could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::onChildViewAdded_24289_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::onChildViewAdded_24289_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onChildViewRemoved_IMPL_24290(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4474
void WebView::onChildViewRemoved_IMPL_24290(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::onChildViewRemoved_24290_ID(),WebView::_javaClass5(),"onChildViewRemoved","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onChildViewRemoved could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::onChildViewRemoved_24290_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::onChildViewRemoved_24290_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper onCreateInputConnection_IMPL_24326(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4582
uObject* WebView::onCreateInputConnection_IMPL_24326(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(WebView::onCreateInputConnection_24326_ID(),WebView::_javaClass5(),"onCreateInputConnection","(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",GetMethodID,"Id for fallback method android.webkit.WebView.onCreateInputConnection could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WebView::_javaClass5(), WebView::onCreateInputConnection_24326_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_inputmethod_InputConnection_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WebView::onCreateInputConnection_24326_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_inputmethod_InputConnection_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onGenericMotionEvent_IMPL_24311(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4537
bool WebView::onGenericMotionEvent_IMPL_24311(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::onGenericMotionEvent_24311_ID(),WebView::_javaClass5(),"onGenericMotionEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onGenericMotionEvent could not be cached",86);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::onGenericMotionEvent_24311_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::onGenericMotionEvent_24311_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onHoverEvent_IMPL_24309(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4531
bool WebView::onHoverEvent_IMPL_24309(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::onHoverEvent_24309_ID(),WebView::_javaClass5(),"onHoverEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onHoverEvent could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::onHoverEvent_24309_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::onHoverEvent_24309_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_24319(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4561
void WebView::onInitializeAccessibilityEvent_IMPL_24319(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::onInitializeAccessibilityEvent_24319_ID(),WebView::_javaClass5(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onInitializeAccessibilityEvent could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::onInitializeAccessibilityEvent_24319_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::onInitializeAccessibilityEvent_24319_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_24318(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4558
void WebView::onInitializeAccessibilityNodeInfo_IMPL_24318(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::onInitializeAccessibilityNodeInfo_24318_ID(),WebView::_javaClass5(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onInitializeAccessibilityNodeInfo could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::onInitializeAccessibilityNodeInfo_24318_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::onInitializeAccessibilityNodeInfo_24318_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onKeyDown_IMPL_24313(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4543
bool WebView::onKeyDown_IMPL_24313(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::onKeyDown_24313_ID(),WebView::_javaClass5(),"onKeyDown","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onKeyDown could not be cached",75);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::onKeyDown_24313_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::onKeyDown_24313_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onKeyMultiple_IMPL_24315(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :4549
bool WebView::onKeyMultiple_IMPL_24315(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::onKeyMultiple_24315_ID(),WebView::_javaClass5(),"onKeyMultiple","(IILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onKeyMultiple could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::onKeyMultiple_24315_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::onKeyMultiple_24315_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onKeyUp_IMPL_24314(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4546
bool WebView::onKeyUp_IMPL_24314(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::onKeyUp_24314_ID(),WebView::_javaClass5(),"onKeyUp","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onKeyUp could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::onKeyUp_24314_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::onKeyUp_24314_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
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

// public static extern bool onTrackballEvent_IMPL_24312(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :4540
bool WebView::onTrackballEvent_IMPL_24312(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::onTrackballEvent_24312_ID(),WebView::_javaClass5(),"onTrackballEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onTrackballEvent could not be cached",82);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::onTrackballEvent_24312_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::onTrackballEvent_24312_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onWindowFocusChanged_IMPL_24328(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :4588
void WebView::onWindowFocusChanged_IMPL_24328(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::onWindowFocusChanged_24328_ID(),WebView::_javaClass5(),"onWindowFocusChanged","(Z)V",GetMethodID,"Id for fallback method android.webkit.WebView.onWindowFocusChanged could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::onWindowFocusChanged_24328_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::onWindowFocusChanged_24328_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool performAccessibilityAction_IMPL_24320(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4564
bool WebView::performAccessibilityAction_IMPL_24320(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::performAccessibilityAction_24320_ID(),WebView::_javaClass5(),"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.performAccessibilityAction could not be cached",92);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::performAccessibilityAction_24320_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::performAccessibilityAction_24320_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performLongClick_IMPL_24324(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4576
bool WebView::performLongClick_IMPL_24324(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    bool result;
    CACHE_METHOD(WebView::performLongClick_24324_ID(),WebView::_javaClass5(),"performLongClick","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.performLongClick could not be cached",82);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::performLongClick_24324_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::performLongClick_24324_ID()));
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

// public static extern bool requestChildRectangleOnScreen_IMPL_24335(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) [static] :4609
bool WebView::requestChildRectangleOnScreen_IMPL_24335(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::requestChildRectangleOnScreen_24335_ID(),WebView::_javaClass5(),"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z",GetMethodID,"Id for fallback method android.webkit.WebView.requestChildRectangleOnScreen could not be cached",95);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::requestChildRectangleOnScreen_24335_ID(), _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::requestChildRectangleOnScreen_24335_ID(), _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool requestFocus_IMPL_24333(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4603
bool WebView::requestFocus_IMPL_24333(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebView::requestFocus_24333_ID(),WebView::_javaClass5(),"requestFocus","(ILandroid/graphics/Rect;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.requestFocus could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::requestFocus_24333_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::requestFocus_24333_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
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

// public static extern void setLayerType_IMPL_24337(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :4615
void WebView::setLayerType_IMPL_24337(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebView::setLayerType_24337_ID(),WebView::_javaClass5(),"setLayerType","(ILandroid/graphics/Paint;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setLayerType could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::setLayerType_24337_ID(), ((jint)arg2_), _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::setLayerType_24337_ID(), ((jint)arg2_), _obArg3);
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

// public static extern void setOverScrollMode_IMPL_24301(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :4507
void WebView::setOverScrollMode_IMPL_24301(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::setOverScrollMode_24301_ID(),WebView::_javaClass5(),"setOverScrollMode","(I)V",GetMethodID,"Id for fallback method android.webkit.WebView.setOverScrollMode could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::setOverScrollMode_24301_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::setOverScrollMode_24301_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setScrollBarStyle_IMPL_24302(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :4510
void WebView::setScrollBarStyle_IMPL_24302(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    CACHE_METHOD(WebView::setScrollBarStyle_24302_ID(),WebView::_javaClass5(),"setScrollBarStyle","(I)V",GetMethodID,"Id for fallback method android.webkit.WebView.setScrollBarStyle could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebView::_javaClass5(), WebView::setScrollBarStyle_24302_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebView::setScrollBarStyle_24302_ID(), ((jint)arg2_));
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

// public static extern bool shouldDelayChildPressedState_IMPL_24317(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :4555
bool WebView::shouldDelayChildPressedState_IMPL_24317(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WebView::_javaClass5(),WebView::_Init5());
    
    bool result;
    CACHE_METHOD(WebView::shouldDelayChildPressedState_24317_ID(),WebView::_javaClass5(),"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.shouldDelayChildPressedState could not be cached",94);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebView::_javaClass5(), WebView::shouldDelayChildPressedState_24317_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebView::shouldDelayChildPressedState_24317_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
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

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\webkit\$.uno(4633)
// -----------------------------------------------------------------------------

// public extern class WebViewClient :4633
// {
WebViewClient_type* WebViewClient_typeof()
{
    static uSStrong<WebViewClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 37;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebViewClient);
    options.TypeSize = sizeof(WebViewClient_type);
    type = (WebViewClient_type*)uClassType::New("Android.android.webkit.WebViewClient", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_ctor_ = (void*)WebViewClient__New5_fn;
    type->fp_onPageFinished = WebViewClient__onPageFinished_fn;
    type->fp_onPageStarted = WebViewClient__onPageStarted_fn;
    type->fp_shouldOverrideUrlLoading = WebViewClient__shouldOverrideUrlLoading_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[8] = ::g::Android::android::webkit::WebResourceResponse_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(WebViewClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebViewClient_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::doUpdateVisitedHistory_24363_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_AUTHENTICATION_24342_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_BAD_URL_24350_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_CONNECT_24344_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_FAILED_SSL_HANDSHAKE_24349_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_FILE_24351_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_FILE_NOT_FOUND_24352_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_HOST_LOOKUP_24340_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_IO_24345_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_PROXY_AUTHENTICATION_24343_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_REDIRECT_LOOP_24347_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_TIMEOUT_24346_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_TOO_MANY_REQUESTS_24353_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_UNKNOWN_24339_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME_24341_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::ERROR_UNSUPPORTED_SCHEME_24348_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onFormResubmission_24362_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onLoadResource_24358_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onPageFinished_24357_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onPageStarted_24356_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onReceivedError_24361_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onReceivedHttpAuthRequest_24365_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onReceivedLoginRequest_24369_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onReceivedSslError_24364_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onScaleChanged_24368_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onTooManyRedirects_24360_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::onUnhandledKeyEvent_24367_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::shouldInterceptRequest_24359_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::shouldOverrideKeyEvent_24366_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::shouldOverrideUrlLoading_24355_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::webkit::WebViewClient::WebViewClient_24354_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(48,
        new uFunction("_Init", NULL, (void*)WebViewClient___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("doUpdateVisitedHistory", NULL, (void*)WebViewClient__doUpdateVisitedHistory_fn, 0, false, uVoid_typeof(), 3, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("doUpdateVisitedHistory_IMPL_24363", NULL, (void*)WebViewClient__doUpdateVisitedHistory_IMPL_24363_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_ERROR_AUTHENTICATION", NULL, (void*)WebViewClient__get_ERROR_AUTHENTICATION_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_BAD_URL", NULL, (void*)WebViewClient__get_ERROR_BAD_URL_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_CONNECT", NULL, (void*)WebViewClient__get_ERROR_CONNECT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_FAILED_SSL_HANDSHAKE", NULL, (void*)WebViewClient__get_ERROR_FAILED_SSL_HANDSHAKE_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_FILE", NULL, (void*)WebViewClient__get_ERROR_FILE_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_FILE_NOT_FOUND", NULL, (void*)WebViewClient__get_ERROR_FILE_NOT_FOUND_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_HOST_LOOKUP", NULL, (void*)WebViewClient__get_ERROR_HOST_LOOKUP_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_IO", NULL, (void*)WebViewClient__get_ERROR_IO_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_PROXY_AUTHENTICATION", NULL, (void*)WebViewClient__get_ERROR_PROXY_AUTHENTICATION_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_REDIRECT_LOOP", NULL, (void*)WebViewClient__get_ERROR_REDIRECT_LOOP_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_TIMEOUT", NULL, (void*)WebViewClient__get_ERROR_TIMEOUT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_TOO_MANY_REQUESTS", NULL, (void*)WebViewClient__get_ERROR_TOO_MANY_REQUESTS_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_UNKNOWN", NULL, (void*)WebViewClient__get_ERROR_UNKNOWN_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_UNSUPPORTED_AUTH_SCHEME", NULL, (void*)WebViewClient__get_ERROR_UNSUPPORTED_AUTH_SCHEME_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ERROR_UNSUPPORTED_SCHEME", NULL, (void*)WebViewClient__get_ERROR_UNSUPPORTED_SCHEME_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)WebViewClient__New5_fn, 0, true, WebViewClient_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)WebViewClient__New6_fn, 0, true, WebViewClient_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onFormResubmission", NULL, (void*)WebViewClient__onFormResubmission_fn, 0, false, uVoid_typeof(), 3, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::android::os::Message_typeof(), ::g::Android::android::os::Message_typeof()),
        new uFunction("onFormResubmission_IMPL_24362", NULL, (void*)WebViewClient__onFormResubmission_IMPL_24362_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onLoadResource", NULL, (void*)WebViewClient__onLoadResource_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("onLoadResource_IMPL_24358", NULL, (void*)WebViewClient__onLoadResource_IMPL_24358_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onPageFinished", NULL, NULL, offsetof(WebViewClient_type, fp_onPageFinished), false, uVoid_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("onPageFinished_IMPL_24357", NULL, (void*)WebViewClient__onPageFinished_IMPL_24357_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onPageStarted", NULL, NULL, offsetof(WebViewClient_type, fp_onPageStarted), false, uVoid_typeof(), 3, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::android::graphics::Bitmap_typeof()),
        new uFunction("onPageStarted_IMPL_24356", NULL, (void*)WebViewClient__onPageStarted_IMPL_24356_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onReceivedError", NULL, (void*)WebViewClient__onReceivedError_fn, 0, false, uVoid_typeof(), 4, ::g::Android::android::webkit::WebView_typeof(), ::g::Uno::Int_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("onReceivedError_IMPL_24361", NULL, (void*)WebViewClient__onReceivedError_IMPL_24361_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onReceivedHttpAuthRequest", NULL, (void*)WebViewClient__onReceivedHttpAuthRequest_fn, 0, false, uVoid_typeof(), 4, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::android::webkit::HttpAuthHandler_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("onReceivedHttpAuthRequest_IMPL_24365", NULL, (void*)WebViewClient__onReceivedHttpAuthRequest_IMPL_24365_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onReceivedLoginRequest", NULL, (void*)WebViewClient__onReceivedLoginRequest_fn, 0, false, uVoid_typeof(), 4, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("onReceivedLoginRequest_IMPL_24369", NULL, (void*)WebViewClient__onReceivedLoginRequest_IMPL_24369_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onReceivedSslError", NULL, (void*)WebViewClient__onReceivedSslError_fn, 0, false, uVoid_typeof(), 3, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::android::webkit::SslErrorHandler_typeof(), ::g::Android::android::net::http::SslError_typeof()),
        new uFunction("onReceivedSslError_IMPL_24364", NULL, (void*)WebViewClient__onReceivedSslError_IMPL_24364_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onScaleChanged", NULL, (void*)WebViewClient__onScaleChanged_fn, 0, false, uVoid_typeof(), 3, ::g::Android::android::webkit::WebView_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("onScaleChanged_IMPL_24368", NULL, (void*)WebViewClient__onScaleChanged_IMPL_24368_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("onTooManyRedirects", NULL, (void*)WebViewClient__onTooManyRedirects_fn, 0, false, uVoid_typeof(), 3, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::android::os::Message_typeof(), ::g::Android::android::os::Message_typeof()),
        new uFunction("onTooManyRedirects_IMPL_24360", NULL, (void*)WebViewClient__onTooManyRedirects_IMPL_24360_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onUnhandledKeyEvent", NULL, (void*)WebViewClient__onUnhandledKeyEvent_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::android::view::KeyEvent_typeof()),
        new uFunction("onUnhandledKeyEvent_IMPL_24367", NULL, (void*)WebViewClient__onUnhandledKeyEvent_IMPL_24367_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("shouldInterceptRequest", NULL, (void*)WebViewClient__shouldInterceptRequest_fn, 0, false, ::g::Android::android::webkit::WebResourceResponse_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("shouldInterceptRequest_IMPL_24359", NULL, (void*)WebViewClient__shouldInterceptRequest_IMPL_24359_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("shouldOverrideKeyEvent", NULL, (void*)WebViewClient__shouldOverrideKeyEvent_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::android::view::KeyEvent_typeof()),
        new uFunction("shouldOverrideKeyEvent_IMPL_24366", NULL, (void*)WebViewClient__shouldOverrideKeyEvent_IMPL_24366_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("shouldOverrideUrlLoading", NULL, NULL, offsetof(WebViewClient_type, fp_shouldOverrideUrlLoading), false, ::g::Uno::Bool_typeof(), 2, ::g::Android::android::webkit::WebView_typeof(), ::g::Android::java::lang::String_typeof()),
        new uFunction("shouldOverrideUrlLoading_IMPL_24355", NULL, (void*)WebViewClient__shouldOverrideUrlLoading_IMPL_24355_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public WebViewClient() :4895
void WebViewClient__ctor_4_fn(WebViewClient* __this)
{
    __this->ctor_4();
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

// public void doUpdateVisitedHistory(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, bool arg2) :4958
void WebViewClient__doUpdateVisitedHistory_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool* arg2)
{
    __this->doUpdateVisitedHistory(arg0, arg1, *arg2);
}

// public static extern void doUpdateVisitedHistory_IMPL_24363(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) :5026
void WebViewClient__doUpdateVisitedHistory_IMPL_24363_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_)
{
    WebViewClient::doUpdateVisitedHistory_IMPL_24363(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public static int get_ERROR_AUTHENTICATION() :4693
void WebViewClient__get_ERROR_AUTHENTICATION_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_AUTHENTICATION();
}

// public static int get_ERROR_BAD_URL() :4829
void WebViewClient__get_ERROR_BAD_URL_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_BAD_URL();
}

// public static int get_ERROR_CONNECT() :4727
void WebViewClient__get_ERROR_CONNECT_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_CONNECT();
}

// public static int get_ERROR_FAILED_SSL_HANDSHAKE() :4812
void WebViewClient__get_ERROR_FAILED_SSL_HANDSHAKE_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_FAILED_SSL_HANDSHAKE();
}

// public static int get_ERROR_FILE() :4846
void WebViewClient__get_ERROR_FILE_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_FILE();
}

// public static int get_ERROR_FILE_NOT_FOUND() :4863
void WebViewClient__get_ERROR_FILE_NOT_FOUND_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_FILE_NOT_FOUND();
}

// public static int get_ERROR_HOST_LOOKUP() :4659
void WebViewClient__get_ERROR_HOST_LOOKUP_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_HOST_LOOKUP();
}

// public static int get_ERROR_IO() :4744
void WebViewClient__get_ERROR_IO_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_IO();
}

// public static int get_ERROR_PROXY_AUTHENTICATION() :4710
void WebViewClient__get_ERROR_PROXY_AUTHENTICATION_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_PROXY_AUTHENTICATION();
}

// public static int get_ERROR_REDIRECT_LOOP() :4778
void WebViewClient__get_ERROR_REDIRECT_LOOP_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_REDIRECT_LOOP();
}

// public static int get_ERROR_TIMEOUT() :4761
void WebViewClient__get_ERROR_TIMEOUT_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_TIMEOUT();
}

// public static int get_ERROR_TOO_MANY_REQUESTS() :4880
void WebViewClient__get_ERROR_TOO_MANY_REQUESTS_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_TOO_MANY_REQUESTS();
}

// public static int get_ERROR_UNKNOWN() :4642
void WebViewClient__get_ERROR_UNKNOWN_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_UNKNOWN();
}

// public static int get_ERROR_UNSUPPORTED_AUTH_SCHEME() :4676
void WebViewClient__get_ERROR_UNSUPPORTED_AUTH_SCHEME_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME();
}

// public static int get_ERROR_UNSUPPORTED_SCHEME() :4795
void WebViewClient__get_ERROR_UNSUPPORTED_SCHEME_fn(int* __retval)
{
    *__retval = WebViewClient::ERROR_UNSUPPORTED_SCHEME();
}

// public WebViewClient New() :4895
void WebViewClient__New5_fn(WebViewClient** __retval)
{
    *__retval = WebViewClient::New5();
}

// public WebViewClient New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :4638
void WebViewClient__New6_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, WebViewClient** __retval)
{
    *__retval = WebViewClient::New6(*obj, utype, *hasFallbackClass, *resolveType);
}

// public void onFormResubmission(Android.android.webkit.WebView arg0, Android.android.os.Message arg1, Android.android.os.Message arg2) :4952
void WebViewClient__onFormResubmission_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::os::Message* arg1, ::g::Android::android::os::Message* arg2)
{
    __this->onFormResubmission(arg0, arg1, arg2);
}

// public static extern void onFormResubmission_IMPL_24362(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) :5023
void WebViewClient__onFormResubmission_IMPL_24362_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    WebViewClient::onFormResubmission_IMPL_24362(*arg0_, *arg1_, arg2_, arg3_, arg4_);
}

// public void onLoadResource(Android.android.webkit.WebView arg0, Android.java.lang.String arg1) :4928
void WebViewClient__onLoadResource_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1)
{
    __this->onLoadResource(arg0, arg1);
}

// public static extern void onLoadResource_IMPL_24358(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :5011
void WebViewClient__onLoadResource_IMPL_24358_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebViewClient::onLoadResource_IMPL_24358(*arg0_, *arg1_, arg2_, arg3_);
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

// public void onReceivedError(Android.android.webkit.WebView arg0, int arg1, Android.java.lang.String arg2, Android.java.lang.String arg3) :4946
void WebViewClient__onReceivedError_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3)
{
    __this->onReceivedError(arg0, *arg1, arg2, arg3);
}

// public static extern void onReceivedError_IMPL_24361(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) :5020
void WebViewClient__onReceivedError_IMPL_24361_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_, uObject* arg5_)
{
    WebViewClient::onReceivedError_IMPL_24361(*arg0_, *arg1_, arg2_, *arg3_, arg4_, arg5_);
}

// public void onReceivedHttpAuthRequest(Android.android.webkit.WebView arg0, Android.android.webkit.HttpAuthHandler arg1, Android.java.lang.String arg2, Android.java.lang.String arg3) :4970
void WebViewClient__onReceivedHttpAuthRequest_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::webkit::HttpAuthHandler* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3)
{
    __this->onReceivedHttpAuthRequest(arg0, arg1, arg2, arg3);
}

// public static extern void onReceivedHttpAuthRequest_IMPL_24365(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) :5032
void WebViewClient__onReceivedHttpAuthRequest_IMPL_24365_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_)
{
    WebViewClient::onReceivedHttpAuthRequest_IMPL_24365(*arg0_, *arg1_, arg2_, arg3_, arg4_, arg5_);
}

// public void onReceivedLoginRequest(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.java.lang.String arg3) :4994
void WebViewClient__onReceivedLoginRequest_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3)
{
    __this->onReceivedLoginRequest(arg0, arg1, arg2, arg3);
}

// public static extern void onReceivedLoginRequest_IMPL_24369(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) :5044
void WebViewClient__onReceivedLoginRequest_IMPL_24369_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_)
{
    WebViewClient::onReceivedLoginRequest_IMPL_24369(*arg0_, *arg1_, arg2_, arg3_, arg4_, arg5_);
}

// public void onReceivedSslError(Android.android.webkit.WebView arg0, Android.android.webkit.SslErrorHandler arg1, Android.android.net.http.SslError arg2) :4964
void WebViewClient__onReceivedSslError_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::webkit::SslErrorHandler* arg1, ::g::Android::android::net::http::SslError* arg2)
{
    __this->onReceivedSslError(arg0, arg1, arg2);
}

// public static extern void onReceivedSslError_IMPL_24364(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) :5029
void WebViewClient__onReceivedSslError_IMPL_24364_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    WebViewClient::onReceivedSslError_IMPL_24364(*arg0_, *arg1_, arg2_, arg3_, arg4_);
}

// public void onScaleChanged(Android.android.webkit.WebView arg0, float arg1, float arg2) :4988
void WebViewClient__onScaleChanged_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, float* arg1, float* arg2)
{
    __this->onScaleChanged(arg0, *arg1, *arg2);
}

// public static extern void onScaleChanged_IMPL_24368(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, float arg3, float arg4) :5041
void WebViewClient__onScaleChanged_IMPL_24368_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, float* arg3_, float* arg4_)
{
    WebViewClient::onScaleChanged_IMPL_24368(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public void onTooManyRedirects(Android.android.webkit.WebView arg0, Android.android.os.Message arg1, Android.android.os.Message arg2) :4940
void WebViewClient__onTooManyRedirects_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::os::Message* arg1, ::g::Android::android::os::Message* arg2)
{
    __this->onTooManyRedirects(arg0, arg1, arg2);
}

// public static extern void onTooManyRedirects_IMPL_24360(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) :5017
void WebViewClient__onTooManyRedirects_IMPL_24360_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    WebViewClient::onTooManyRedirects_IMPL_24360(*arg0_, *arg1_, arg2_, arg3_, arg4_);
}

// public void onUnhandledKeyEvent(Android.android.webkit.WebView arg0, Android.android.view.KeyEvent arg1) :4982
void WebViewClient__onUnhandledKeyEvent_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::view::KeyEvent* arg1)
{
    __this->onUnhandledKeyEvent(arg0, arg1);
}

// public static extern void onUnhandledKeyEvent_IMPL_24367(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :5038
void WebViewClient__onUnhandledKeyEvent_IMPL_24367_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    WebViewClient::onUnhandledKeyEvent_IMPL_24367(*arg0_, *arg1_, arg2_, arg3_);
}

// public Android.android.webkit.WebResourceResponse shouldInterceptRequest(Android.android.webkit.WebView arg0, Android.java.lang.String arg1) :4934
void WebViewClient__shouldInterceptRequest_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::android::webkit::WebResourceResponse** __retval)
{
    *__retval = __this->shouldInterceptRequest(arg0, arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper shouldInterceptRequest_IMPL_24359(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :5014
void WebViewClient__shouldInterceptRequest_IMPL_24359_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = WebViewClient::shouldInterceptRequest_IMPL_24359(*arg0_, *arg1_, arg2_, arg3_);
}

// public bool shouldOverrideKeyEvent(Android.android.webkit.WebView arg0, Android.android.view.KeyEvent arg1) :4976
void WebViewClient__shouldOverrideKeyEvent_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    *__retval = __this->shouldOverrideKeyEvent(arg0, arg1);
}

// public static extern bool shouldOverrideKeyEvent_IMPL_24366(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :5035
void WebViewClient__shouldOverrideKeyEvent_IMPL_24366_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = WebViewClient::shouldOverrideKeyEvent_IMPL_24366(*arg0_, *arg1_, arg2_, arg3_);
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
jmethodID WebViewClient::doUpdateVisitedHistory_24363_ID_;
jfieldID WebViewClient::ERROR_AUTHENTICATION_24342_ID_;
jfieldID WebViewClient::ERROR_BAD_URL_24350_ID_;
jfieldID WebViewClient::ERROR_CONNECT_24344_ID_;
jfieldID WebViewClient::ERROR_FAILED_SSL_HANDSHAKE_24349_ID_;
jfieldID WebViewClient::ERROR_FILE_24351_ID_;
jfieldID WebViewClient::ERROR_FILE_NOT_FOUND_24352_ID_;
jfieldID WebViewClient::ERROR_HOST_LOOKUP_24340_ID_;
jfieldID WebViewClient::ERROR_IO_24345_ID_;
jfieldID WebViewClient::ERROR_PROXY_AUTHENTICATION_24343_ID_;
jfieldID WebViewClient::ERROR_REDIRECT_LOOP_24347_ID_;
jfieldID WebViewClient::ERROR_TIMEOUT_24346_ID_;
jfieldID WebViewClient::ERROR_TOO_MANY_REQUESTS_24353_ID_;
jfieldID WebViewClient::ERROR_UNKNOWN_24339_ID_;
jfieldID WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME_24341_ID_;
jfieldID WebViewClient::ERROR_UNSUPPORTED_SCHEME_24348_ID_;
jmethodID WebViewClient::onFormResubmission_24362_ID_;
jmethodID WebViewClient::onLoadResource_24358_ID_;
jmethodID WebViewClient::onPageFinished_24357_ID_;
jmethodID WebViewClient::onPageStarted_24356_ID_;
jmethodID WebViewClient::onReceivedError_24361_ID_;
jmethodID WebViewClient::onReceivedHttpAuthRequest_24365_ID_;
jmethodID WebViewClient::onReceivedLoginRequest_24369_ID_;
jmethodID WebViewClient::onReceivedSslError_24364_ID_;
jmethodID WebViewClient::onScaleChanged_24368_ID_;
jmethodID WebViewClient::onTooManyRedirects_24360_ID_;
jmethodID WebViewClient::onUnhandledKeyEvent_24367_ID_;
jmethodID WebViewClient::shouldInterceptRequest_24359_ID_;
jmethodID WebViewClient::shouldOverrideKeyEvent_24366_ID_;
jmethodID WebViewClient::shouldOverrideUrlLoading_24355_ID_;
jmethodID WebViewClient::WebViewClient_24354_ID_c_;

// public WebViewClient() [instance] :4895
void WebViewClient::ctor_4()
{
    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());;
    CACHE_METHOD(WebViewClient::WebViewClient_24354_ID_c(),WebViewClient::_javaClass2(),"<init>","()V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.<init> could not be cached",78);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(WebViewClient::_javaClass2(), WebViewClient::WebViewClient_24354_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public WebViewClient(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :4638
void WebViewClient::ctor_5(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_3(obj, utype, hasFallbackClass, resolveType);
}

// public void doUpdateVisitedHistory(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, bool arg2) [instance] :4958
void WebViewClient::doUpdateVisitedHistory(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, bool arg2)
{
    bool arg2_ = arg2;
    WebViewClient::doUpdateVisitedHistory_IMPL_24363(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, arg2_);
}

// public void onFormResubmission(Android.android.webkit.WebView arg0, Android.android.os.Message arg1, Android.android.os.Message arg2) [instance] :4952
void WebViewClient::onFormResubmission(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::os::Message* arg1, ::g::Android::android::os::Message* arg2)
{
    WebViewClient::onFormResubmission_IMPL_24362(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2);
}

// public void onLoadResource(Android.android.webkit.WebView arg0, Android.java.lang.String arg1) [instance] :4928
void WebViewClient::onLoadResource(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1)
{
    WebViewClient::onLoadResource_IMPL_24358(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public void onReceivedError(Android.android.webkit.WebView arg0, int arg1, Android.java.lang.String arg2, Android.java.lang.String arg3) [instance] :4946
void WebViewClient::onReceivedError(::g::Android::android::webkit::WebView* arg0, int arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3)
{
    int arg1_ = arg1;
    WebViewClient::onReceivedError_IMPL_24361(_subclassed, _javaObject, (uObject*)arg0, arg1_, (uObject*)arg2, (uObject*)arg3);
}

// public void onReceivedHttpAuthRequest(Android.android.webkit.WebView arg0, Android.android.webkit.HttpAuthHandler arg1, Android.java.lang.String arg2, Android.java.lang.String arg3) [instance] :4970
void WebViewClient::onReceivedHttpAuthRequest(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::webkit::HttpAuthHandler* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3)
{
    WebViewClient::onReceivedHttpAuthRequest_IMPL_24365(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, (uObject*)arg3);
}

// public void onReceivedLoginRequest(Android.android.webkit.WebView arg0, Android.java.lang.String arg1, Android.java.lang.String arg2, Android.java.lang.String arg3) [instance] :4994
void WebViewClient::onReceivedLoginRequest(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::java::lang::String* arg2, ::g::Android::java::lang::String* arg3)
{
    WebViewClient::onReceivedLoginRequest_IMPL_24369(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2, (uObject*)arg3);
}

// public void onReceivedSslError(Android.android.webkit.WebView arg0, Android.android.webkit.SslErrorHandler arg1, Android.android.net.http.SslError arg2) [instance] :4964
void WebViewClient::onReceivedSslError(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::webkit::SslErrorHandler* arg1, ::g::Android::android::net::http::SslError* arg2)
{
    WebViewClient::onReceivedSslError_IMPL_24364(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2);
}

// public void onScaleChanged(Android.android.webkit.WebView arg0, float arg1, float arg2) [instance] :4988
void WebViewClient::onScaleChanged(::g::Android::android::webkit::WebView* arg0, float arg1, float arg2)
{
    float arg1_ = arg1;
    float arg2_ = arg2;
    WebViewClient::onScaleChanged_IMPL_24368(_subclassed, _javaObject, (uObject*)arg0, arg1_, arg2_);
}

// public void onTooManyRedirects(Android.android.webkit.WebView arg0, Android.android.os.Message arg1, Android.android.os.Message arg2) [instance] :4940
void WebViewClient::onTooManyRedirects(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::os::Message* arg1, ::g::Android::android::os::Message* arg2)
{
    WebViewClient::onTooManyRedirects_IMPL_24360(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1, (uObject*)arg2);
}

// public void onUnhandledKeyEvent(Android.android.webkit.WebView arg0, Android.android.view.KeyEvent arg1) [instance] :4982
void WebViewClient::onUnhandledKeyEvent(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::view::KeyEvent* arg1)
{
    WebViewClient::onUnhandledKeyEvent_IMPL_24367(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public Android.android.webkit.WebResourceResponse shouldInterceptRequest(Android.android.webkit.WebView arg0, Android.java.lang.String arg1) [instance] :4934
::g::Android::android::webkit::WebResourceResponse* WebViewClient::shouldInterceptRequest(::g::Android::android::webkit::WebView* arg0, ::g::Android::java::lang::String* arg1)
{
    return uCast< ::g::Android::android::webkit::WebResourceResponse*>(WebViewClient::shouldInterceptRequest_IMPL_24359(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1), ::TYPES[8/*Android.android.webkit.WebResourceResponse*/]);
}

// public bool shouldOverrideKeyEvent(Android.android.webkit.WebView arg0, Android.android.view.KeyEvent arg1) [instance] :4976
bool WebViewClient::shouldOverrideKeyEvent(::g::Android::android::webkit::WebView* arg0, ::g::Android::android::view::KeyEvent* arg1)
{
    return WebViewClient::shouldOverrideKeyEvent_IMPL_24366(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1);
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

// public static extern void doUpdateVisitedHistory_IMPL_24363(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) [static] :5026
void WebViewClient::doUpdateVisitedHistory_IMPL_24363(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::doUpdateVisitedHistory_24363_ID(),WebViewClient::_javaClass2(),"doUpdateVisitedHistory","(Landroid/webkit/WebView;Ljava/lang/String;Z)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.doUpdateVisitedHistory could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::doUpdateVisitedHistory_24363_ID(), _obArg2, _obArg3, ((jboolean)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::doUpdateVisitedHistory_24363_ID(), _obArg2, _obArg3, ((jboolean)arg4_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public WebViewClient New() [static] :4895
WebViewClient* WebViewClient::New5()
{
    WebViewClient* obj2 = (WebViewClient*)uNew(WebViewClient_typeof());
    obj2->ctor_4();
    return obj2;
}

// public WebViewClient New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :4638
WebViewClient* WebViewClient::New6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    WebViewClient* obj1 = (WebViewClient*)uNew(WebViewClient_typeof());
    obj1->ctor_5(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void onFormResubmission_IMPL_24362(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :5023
void WebViewClient::onFormResubmission_IMPL_24362(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onFormResubmission_24362_ID(),WebViewClient::_javaClass2(),"onFormResubmission","(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onFormResubmission could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onFormResubmission_24362_ID(), _obArg2, _obArg3, _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onFormResubmission_24362_ID(), _obArg2, _obArg3, _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onLoadResource_IMPL_24358(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5011
void WebViewClient::onLoadResource_IMPL_24358(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onLoadResource_24358_ID(),WebViewClient::_javaClass2(),"onLoadResource","(Landroid/webkit/WebView;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onLoadResource could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onLoadResource_24358_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onLoadResource_24358_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
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

// public static extern void onReceivedError_IMPL_24361(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :5020
void WebViewClient::onReceivedError_IMPL_24361(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_, uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onReceivedError_24361_ID(),WebViewClient::_javaClass2(),"onReceivedError","(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onReceivedError could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onReceivedError_24361_ID(), _obArg2, ((jint)arg3_), _obArg4, _obArg5);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onReceivedError_24361_ID(), _obArg2, ((jint)arg3_), _obArg4, _obArg5);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onReceivedHttpAuthRequest_IMPL_24365(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :5032
void WebViewClient::onReceivedHttpAuthRequest_IMPL_24365(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onReceivedHttpAuthRequest_24365_ID(),WebViewClient::_javaClass2(),"onReceivedHttpAuthRequest","(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onReceivedHttpAuthRequest could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onReceivedHttpAuthRequest_24365_ID(), _obArg2, _obArg3, _obArg4, _obArg5);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onReceivedHttpAuthRequest_24365_ID(), _obArg2, _obArg3, _obArg4, _obArg5);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onReceivedLoginRequest_IMPL_24369(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4, Android.Base.Wrappers.IJWrapper arg5) [static] :5044
void WebViewClient::onReceivedLoginRequest_IMPL_24369(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onReceivedLoginRequest_24369_ID(),WebViewClient::_javaClass2(),"onReceivedLoginRequest","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onReceivedLoginRequest could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onReceivedLoginRequest_24369_ID(), _obArg2, _obArg3, _obArg4, _obArg5);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onReceivedLoginRequest_24369_ID(), _obArg2, _obArg3, _obArg4, _obArg5);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onReceivedSslError_IMPL_24364(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :5029
void WebViewClient::onReceivedSslError_IMPL_24364(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onReceivedSslError_24364_ID(),WebViewClient::_javaClass2(),"onReceivedSslError","(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onReceivedSslError could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onReceivedSslError_24364_ID(), _obArg2, _obArg3, _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onReceivedSslError_24364_ID(), _obArg2, _obArg3, _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onScaleChanged_IMPL_24368(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, float arg3, float arg4) [static] :5041
void WebViewClient::onScaleChanged_IMPL_24368(bool arg0_, jobject arg1_, uObject* arg2_, float arg3_, float arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onScaleChanged_24368_ID(),WebViewClient::_javaClass2(),"onScaleChanged","(Landroid/webkit/WebView;FF)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onScaleChanged could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onScaleChanged_24368_ID(), _obArg2, ((jfloat)arg3_), ((jfloat)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onScaleChanged_24368_ID(), _obArg2, ((jfloat)arg3_), ((jfloat)arg4_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onTooManyRedirects_IMPL_24360(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :5017
void WebViewClient::onTooManyRedirects_IMPL_24360(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onTooManyRedirects_24360_ID(),WebViewClient::_javaClass2(),"onTooManyRedirects","(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onTooManyRedirects could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onTooManyRedirects_24360_ID(), _obArg2, _obArg3, _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onTooManyRedirects_24360_ID(), _obArg2, _obArg3, _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onUnhandledKeyEvent_IMPL_24367(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5038
void WebViewClient::onUnhandledKeyEvent_IMPL_24367(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(WebViewClient::onUnhandledKeyEvent_24367_ID(),WebViewClient::_javaClass2(),"onUnhandledKeyEvent","(Landroid/webkit/WebView;Landroid/view/KeyEvent;)V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.onUnhandledKeyEvent could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::onUnhandledKeyEvent_24367_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, WebViewClient::onUnhandledKeyEvent_24367_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper shouldInterceptRequest_IMPL_24359(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5014
uObject* WebViewClient::shouldInterceptRequest_IMPL_24359(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(WebViewClient::shouldInterceptRequest_24359_ID(),WebViewClient::_javaClass2(),"shouldInterceptRequest","(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;",GetMethodID,"Id for fallback method android.webkit.WebViewClient.shouldInterceptRequest could not be cached",94);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::shouldInterceptRequest_24359_ID(), _obArg2, _obArg3),result,::g::Android::android::webkit::WebResourceResponse_typeof(),::g::Android::android::webkit::WebResourceResponse*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WebViewClient::shouldInterceptRequest_24359_ID(), _obArg2, _obArg3),result,::g::Android::android::webkit::WebResourceResponse_typeof(),::g::Android::android::webkit::WebResourceResponse*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool shouldOverrideKeyEvent_IMPL_24366(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5035
bool WebViewClient::shouldOverrideKeyEvent_IMPL_24366(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(WebViewClient::shouldOverrideKeyEvent_24366_ID(),WebViewClient::_javaClass2(),"shouldOverrideKeyEvent","(Landroid/webkit/WebView;Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebViewClient.shouldOverrideKeyEvent could not be cached",94);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, WebViewClient::_javaClass2(), WebViewClient::shouldOverrideKeyEvent_24366_ID(), _obArg2, _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, WebViewClient::shouldOverrideKeyEvent_24366_ID(), _obArg2, _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
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

// public static int get_ERROR_AUTHENTICATION() [static] :4693
int WebViewClient::ERROR_AUTHENTICATION()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_AUTHENTICATION_24342_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_AUTHENTICATION_24342_ID(),WebViewClient::_javaClass2(),"ERROR_AUTHENTICATION","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_AUTHENTICATION could not be cached",67);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_AUTHENTICATION_24342_ID()));;
    return result;
}

// public static int get_ERROR_BAD_URL() [static] :4829
int WebViewClient::ERROR_BAD_URL()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_BAD_URL_24350_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_BAD_URL_24350_ID(),WebViewClient::_javaClass2(),"ERROR_BAD_URL","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_BAD_URL could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_BAD_URL_24350_ID()));;
    return result;
}

// public static int get_ERROR_CONNECT() [static] :4727
int WebViewClient::ERROR_CONNECT()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_CONNECT_24344_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_CONNECT_24344_ID(),WebViewClient::_javaClass2(),"ERROR_CONNECT","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_CONNECT could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_CONNECT_24344_ID()));;
    return result;
}

// public static int get_ERROR_FAILED_SSL_HANDSHAKE() [static] :4812
int WebViewClient::ERROR_FAILED_SSL_HANDSHAKE()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_FAILED_SSL_HANDSHAKE_24349_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_FAILED_SSL_HANDSHAKE_24349_ID(),WebViewClient::_javaClass2(),"ERROR_FAILED_SSL_HANDSHAKE","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_FAILED_SSL_HANDSHAKE could not be cached",73);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_FAILED_SSL_HANDSHAKE_24349_ID()));;
    return result;
}

// public static int get_ERROR_FILE() [static] :4846
int WebViewClient::ERROR_FILE()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_FILE_24351_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_FILE_24351_ID(),WebViewClient::_javaClass2(),"ERROR_FILE","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_FILE could not be cached",57);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_FILE_24351_ID()));;
    return result;
}

// public static int get_ERROR_FILE_NOT_FOUND() [static] :4863
int WebViewClient::ERROR_FILE_NOT_FOUND()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_FILE_NOT_FOUND_24352_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_FILE_NOT_FOUND_24352_ID(),WebViewClient::_javaClass2(),"ERROR_FILE_NOT_FOUND","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_FILE_NOT_FOUND could not be cached",67);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_FILE_NOT_FOUND_24352_ID()));;
    return result;
}

// public static int get_ERROR_HOST_LOOKUP() [static] :4659
int WebViewClient::ERROR_HOST_LOOKUP()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_HOST_LOOKUP_24340_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_HOST_LOOKUP_24340_ID(),WebViewClient::_javaClass2(),"ERROR_HOST_LOOKUP","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_HOST_LOOKUP could not be cached",64);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_HOST_LOOKUP_24340_ID()));;
    return result;
}

// public static int get_ERROR_IO() [static] :4744
int WebViewClient::ERROR_IO()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_IO_24345_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_IO_24345_ID(),WebViewClient::_javaClass2(),"ERROR_IO","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_IO could not be cached",55);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_IO_24345_ID()));;
    return result;
}

// public static int get_ERROR_PROXY_AUTHENTICATION() [static] :4710
int WebViewClient::ERROR_PROXY_AUTHENTICATION()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_PROXY_AUTHENTICATION_24343_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_PROXY_AUTHENTICATION_24343_ID(),WebViewClient::_javaClass2(),"ERROR_PROXY_AUTHENTICATION","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_PROXY_AUTHENTICATION could not be cached",73);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_PROXY_AUTHENTICATION_24343_ID()));;
    return result;
}

// public static int get_ERROR_REDIRECT_LOOP() [static] :4778
int WebViewClient::ERROR_REDIRECT_LOOP()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_REDIRECT_LOOP_24347_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_REDIRECT_LOOP_24347_ID(),WebViewClient::_javaClass2(),"ERROR_REDIRECT_LOOP","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_REDIRECT_LOOP could not be cached",66);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_REDIRECT_LOOP_24347_ID()));;
    return result;
}

// public static int get_ERROR_TIMEOUT() [static] :4761
int WebViewClient::ERROR_TIMEOUT()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_TIMEOUT_24346_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_TIMEOUT_24346_ID(),WebViewClient::_javaClass2(),"ERROR_TIMEOUT","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_TIMEOUT could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_TIMEOUT_24346_ID()));;
    return result;
}

// public static int get_ERROR_TOO_MANY_REQUESTS() [static] :4880
int WebViewClient::ERROR_TOO_MANY_REQUESTS()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_TOO_MANY_REQUESTS_24353_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_TOO_MANY_REQUESTS_24353_ID(),WebViewClient::_javaClass2(),"ERROR_TOO_MANY_REQUESTS","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_TOO_MANY_REQUESTS could not be cached",70);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_TOO_MANY_REQUESTS_24353_ID()));;
    return result;
}

// public static int get_ERROR_UNKNOWN() [static] :4642
int WebViewClient::ERROR_UNKNOWN()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_UNKNOWN_24339_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_UNKNOWN_24339_ID(),WebViewClient::_javaClass2(),"ERROR_UNKNOWN","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_UNKNOWN could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_UNKNOWN_24339_ID()));;
    return result;
}

// public static int get_ERROR_UNSUPPORTED_AUTH_SCHEME() [static] :4676
int WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME_24341_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME_24341_ID(),WebViewClient::_javaClass2(),"ERROR_UNSUPPORTED_AUTH_SCHEME","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_UNSUPPORTED_AUTH_SCHEME could not be cached",76);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME_24341_ID()));;
    return result;
}

// public static int get_ERROR_UNSUPPORTED_SCHEME() [static] :4795
int WebViewClient::ERROR_UNSUPPORTED_SCHEME()
{
    INIT_JNI;
    CLASS_INIT(WebViewClient::_javaClass2(),WebViewClient::_Init2());
    if (::uEnterCriticalIfNull(&WebViewClient::ERROR_UNSUPPORTED_SCHEME_24348_ID())) {;
    CACHE_FIELD(WebViewClient::ERROR_UNSUPPORTED_SCHEME_24348_ID(),WebViewClient::_javaClass2(),"ERROR_UNSUPPORTED_SCHEME","I",GetStaticFieldID,"Id for field WebViewClient.ERROR_UNSUPPORTED_SCHEME could not be cached",71);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(WebViewClient::_javaClass2(), WebViewClient::ERROR_UNSUPPORTED_SCHEME_24348_ID()));;
    return result;
}
// }

}}}} // ::g::Android::android::webkit
