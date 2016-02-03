#include <app/Android.android.content.Context.h>
#include <app/Android.android.content.res.Configuration.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.Paint.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.os.Bundle.h>
#include <app/Android.android.os.Message.h>
#include <app/Android.android.view.accessibility.AccessibilityEvent.h>
#include <app/Android.android.view.accessibility.AccessibilityNodeInfo.h>
#include <app/Android.android.view.accessibility.AccessibilityNodeProvider.h>
#include <app/Android.android.view.inputmethod.EditorInfo.h>
#include <app/Android.android.view.inputmethod.InputConnection.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.view.ViewGroupDLRLayoutParams.h>
#include <app/Android.android.webkit.ConsoleMessage.h>
#include <app/Android.android.webkit.GeolocationPermissionsDLRCallback.h>
#include <app/Android.android.webkit.JsPromptResult.h>
#include <app/Android.android.webkit.JsResult.h>
#include <app/Android.android.webkit.ValueCallback.h>
#include <app/Android.android.webkit.WebChromeClient.h>
#include <app/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h>
#include <app/Android.android.webkit.WebStorageDLRQuotaUpdater.h>
#include <app/Android.android.webkit.WebView.h>
#include <app/Android.android.webkit.WebViewClient.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h>
#include <app/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h>
#include <app/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h>
#include <app/Android.Fallbacks.Android_android_webkit_ValueCallback.h>
#include <app/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h>
#include <app/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace webkit {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConsoleMessage__uType* ConsoleMessage__typeof()
{
    static ::uStaticStrong<ConsoleMessage__uType*> type;
    if (type != NULL) return type;

    type = (ConsoleMessage__uType*)::uAllocClassType(sizeof(ConsoleMessage__uType), "Android.android.webkit.ConsoleMessage", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ConsoleMessage__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ConsoleMessage__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* GeolocationPermissionsDLRCallback__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.webkit.GeolocationPermissionsDLRCallback");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JsPromptResult__uType* JsPromptResult__typeof()
{
    static ::uStaticStrong<JsPromptResult__uType*> type;
    if (type != NULL) return type;

    type = (JsPromptResult__uType*)::uAllocClassType(sizeof(JsPromptResult__uType), "Android.android.webkit.JsPromptResult", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::webkit::JsResult__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(JsPromptResult__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(JsPromptResult__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JsResult__uType* JsResult__typeof()
{
    static ::uStaticStrong<JsResult__uType*> type;
    if (type != NULL) return type;

    type = (JsResult__uType*)::uAllocClassType(sizeof(JsResult__uType), "Android.android.webkit.JsResult", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(JsResult__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(JsResult__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ValueCallback__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.webkit.ValueCallback");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass WebChromeClient___javaClass_2;
jmethodID WebChromeClient__getDefaultVideoPoster_24021_ID;
jmethodID WebChromeClient__getVideoLoadingProgressView_24022_ID;
jmethodID WebChromeClient__getVisitedHistory_24023_ID;
jmethodID WebChromeClient__onCloseWindow_24009_ID;
jmethodID WebChromeClient__onConsoleMessage_24019_ID;
jmethodID WebChromeClient__onConsoleMessage_24020_ID;
jmethodID WebChromeClient__onCreateWindow_24007_ID;
jmethodID WebChromeClient__onExceededDatabaseQuota_24014_ID;
jmethodID WebChromeClient__onGeolocationPermissionsHidePrompt_24017_ID;
jmethodID WebChromeClient__onGeolocationPermissionsShowPrompt_24016_ID;
jmethodID WebChromeClient__onHideCustomView_24006_ID;
jmethodID WebChromeClient__onJsAlert_24010_ID;
jmethodID WebChromeClient__onJsBeforeUnload_24013_ID;
jmethodID WebChromeClient__onJsConfirm_24011_ID;
jmethodID WebChromeClient__onJsPrompt_24012_ID;
jmethodID WebChromeClient__onJsTimeout_24018_ID;
jmethodID WebChromeClient__onProgressChanged_24000_ID;
jmethodID WebChromeClient__onReachedMaxAppCacheSize_24015_ID;
jmethodID WebChromeClient__onReceivedIcon_24002_ID;
jmethodID WebChromeClient__onReceivedTitle_24001_ID;
jmethodID WebChromeClient__onReceivedTouchIconUrl_24003_ID;
jmethodID WebChromeClient__onRequestFocus_24008_ID;
jmethodID WebChromeClient__onShowCustomView_24004_ID;
jmethodID WebChromeClient__onShowCustomView_24005_ID;
jmethodID WebChromeClient__WebChromeClient_23999_ID_c;

WebChromeClient__uType* WebChromeClient__typeof()
{
    static ::uStaticStrong<WebChromeClient__uType*> type;
    if (type != NULL) return type;

    type = (WebChromeClient__uType*)::uAllocClassType(sizeof(WebChromeClient__uType), "Android.android.webkit.WebChromeClient", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_onProgressChanged = WebChromeClient__onProgressChanged;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(WebChromeClient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WebChromeClient__uType, __interface_1));

    type->SetFields(26,
        ::uNewField("_javaClass", &WebChromeClient___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("getDefaultVideoPoster_24021_ID", &WebChromeClient__getDefaultVideoPoster_24021_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getVideoLoadingProgressView_24022_ID", &WebChromeClient__getVideoLoadingProgressView_24022_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getVisitedHistory_24023_ID", &WebChromeClient__getVisitedHistory_24023_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCloseWindow_24009_ID", &WebChromeClient__onCloseWindow_24009_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onConsoleMessage_24019_ID", &WebChromeClient__onConsoleMessage_24019_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onConsoleMessage_24020_ID", &WebChromeClient__onConsoleMessage_24020_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateWindow_24007_ID", &WebChromeClient__onCreateWindow_24007_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onExceededDatabaseQuota_24014_ID", &WebChromeClient__onExceededDatabaseQuota_24014_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onGeolocationPermissionsHidePrompt_24017_ID", &WebChromeClient__onGeolocationPermissionsHidePrompt_24017_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onGeolocationPermissionsShowPrompt_24016_ID", &WebChromeClient__onGeolocationPermissionsShowPrompt_24016_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onHideCustomView_24006_ID", &WebChromeClient__onHideCustomView_24006_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onJsAlert_24010_ID", &WebChromeClient__onJsAlert_24010_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onJsBeforeUnload_24013_ID", &WebChromeClient__onJsBeforeUnload_24013_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onJsConfirm_24011_ID", &WebChromeClient__onJsConfirm_24011_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onJsPrompt_24012_ID", &WebChromeClient__onJsPrompt_24012_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onJsTimeout_24018_ID", &WebChromeClient__onJsTimeout_24018_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onProgressChanged_24000_ID", &WebChromeClient__onProgressChanged_24000_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onReachedMaxAppCacheSize_24015_ID", &WebChromeClient__onReachedMaxAppCacheSize_24015_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onReceivedIcon_24002_ID", &WebChromeClient__onReceivedIcon_24002_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onReceivedTitle_24001_ID", &WebChromeClient__onReceivedTitle_24001_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onReceivedTouchIconUrl_24003_ID", &WebChromeClient__onReceivedTouchIconUrl_24003_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRequestFocus_24008_ID", &WebChromeClient__onRequestFocus_24008_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onShowCustomView_24004_ID", &WebChromeClient__onShowCustomView_24004_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onShowCustomView_24005_ID", &WebChromeClient__onShowCustomView_24005_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("WebChromeClient_23999_ID_c", &WebChromeClient__WebChromeClient_23999_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(51,
        ::uNewFunctionVoid("_Init", WebChromeClient___Init_2, 0, true),
        ::uNewFunction("getDefaultVideoPoster", WebChromeClient__getDefaultVideoPoster, 0, false, ::app::Android::android::graphics::Bitmap__typeof()),
        ::uNewFunction("getDefaultVideoPoster_IMPL_24021", WebChromeClient__getDefaultVideoPoster_IMPL_24021, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getVideoLoadingProgressView", WebChromeClient__getVideoLoadingProgressView, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunction("getVideoLoadingProgressView_IMPL_24022", WebChromeClient__getVideoLoadingProgressView_IMPL_24022, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("getVisitedHistory", WebChromeClient__getVisitedHistory, 0, false, ::app::Android::android::webkit::ValueCallback__typeof()),
        ::uNewFunctionVoid("getVisitedHistory_IMPL_24023", WebChromeClient__getVisitedHistory_IMPL_24023, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction(".ctor", WebChromeClient__New_5, 0, true, WebChromeClient__typeof()),
        ::uNewFunction(".ctor", WebChromeClient__New_6, 0, true, WebChromeClient__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onCloseWindow", WebChromeClient__onCloseWindow, 0, false, ::app::Android::android::webkit::WebView__typeof()),
        ::uNewFunctionVoid("onCloseWindow_IMPL_24009", WebChromeClient__onCloseWindow_IMPL_24009, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onConsoleMessage", WebChromeClient__onConsoleMessage, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::webkit::ConsoleMessage__typeof()),
        ::uNewFunctionVoid("onConsoleMessage", WebChromeClient__onConsoleMessage_1, 0, false, ::app::Android::java::lang::String__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunctionVoid("onConsoleMessage_IMPL_24019", WebChromeClient__onConsoleMessage_IMPL_24019, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onConsoleMessage_IMPL_24020", WebChromeClient__onConsoleMessage_IMPL_24020, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onCreateWindow", WebChromeClient__onCreateWindow, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::webkit::WebView__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::android::os::Message__typeof()),
        ::uNewFunction("onCreateWindow_IMPL_24007", WebChromeClient__onCreateWindow_IMPL_24007, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onExceededDatabaseQuota", WebChromeClient__onExceededDatabaseQuota, 0, false, ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof(), ::app::Android::android::webkit::WebStorageDLRQuotaUpdater__typeof()),
        ::uNewFunctionVoid("onExceededDatabaseQuota_IMPL_24014", WebChromeClient__onExceededDatabaseQuota_IMPL_24014, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onGeolocationPermissionsHidePrompt", WebChromeClient__onGeolocationPermissionsHidePrompt, 0, false),
        ::uNewFunctionVoid("onGeolocationPermissionsHidePrompt_IMPL_24017", WebChromeClient__onGeolocationPermissionsHidePrompt_IMPL_24017, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onGeolocationPermissionsShowPrompt", WebChromeClient__onGeolocationPermissionsShowPrompt, 0, false, ::app::Android::java::lang::String__typeof(), ::app::Android::android::webkit::GeolocationPermissionsDLRCallback__typeof()),
        ::uNewFunctionVoid("onGeolocationPermissionsShowPrompt_IMPL_24016", WebChromeClient__onGeolocationPermissionsShowPrompt_IMPL_24016, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onHideCustomView", WebChromeClient__onHideCustomView, 0, false),
        ::uNewFunctionVoid("onHideCustomView_IMPL_24006", WebChromeClient__onHideCustomView_IMPL_24006, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("onJsAlert", WebChromeClient__onJsAlert, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::webkit::WebView__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::android::webkit::JsResult__typeof()),
        ::uNewFunction("onJsAlert_IMPL_24010", WebChromeClient__onJsAlert_IMPL_24010, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onJsBeforeUnload", WebChromeClient__onJsBeforeUnload, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::webkit::WebView__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::android::webkit::JsResult__typeof()),
        ::uNewFunction("onJsBeforeUnload_IMPL_24013", WebChromeClient__onJsBeforeUnload_IMPL_24013, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onJsConfirm", WebChromeClient__onJsConfirm, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::webkit::WebView__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::android::webkit::JsResult__typeof()),
        ::uNewFunction("onJsConfirm_IMPL_24011", WebChromeClient__onJsConfirm_IMPL_24011, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onJsPrompt", WebChromeClient__onJsPrompt, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::webkit::WebView__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::android::webkit::JsPromptResult__typeof()),
        ::uNewFunction("onJsPrompt_IMPL_24012", WebChromeClient__onJsPrompt_IMPL_24012, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onJsTimeout", WebChromeClient__onJsTimeout, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("onJsTimeout_IMPL_24018", WebChromeClient__onJsTimeout_IMPL_24018, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onProgressChanged", type->__fp_onProgressChanged, offsetof(WebChromeClient__uType, __fp_onProgressChanged), false, ::app::Android::android::webkit::WebView__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onProgressChanged_IMPL_24000", WebChromeClient__onProgressChanged_IMPL_24000, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onReachedMaxAppCacheSize", WebChromeClient__onReachedMaxAppCacheSize, 0, false, ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof(), ::app::Android::android::webkit::WebStorageDLRQuotaUpdater__typeof()),
        ::uNewFunctionVoid("onReachedMaxAppCacheSize_IMPL_24015", WebChromeClient__onReachedMaxAppCacheSize_IMPL_24015, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onReceivedIcon", WebChromeClient__onReceivedIcon, 0, false, ::app::Android::android::webkit::WebView__typeof(), ::app::Android::android::graphics::Bitmap__typeof()),
        ::uNewFunctionVoid("onReceivedIcon_IMPL_24002", WebChromeClient__onReceivedIcon_IMPL_24002, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onReceivedTitle", WebChromeClient__onReceivedTitle, 0, false, ::app::Android::android::webkit::WebView__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunctionVoid("onReceivedTitle_IMPL_24001", WebChromeClient__onReceivedTitle_IMPL_24001, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onReceivedTouchIconUrl", WebChromeClient__onReceivedTouchIconUrl, 0, false, ::app::Android::android::webkit::WebView__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onReceivedTouchIconUrl_IMPL_24003", WebChromeClient__onReceivedTouchIconUrl_IMPL_24003, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onRequestFocus", WebChromeClient__onRequestFocus, 0, false, ::app::Android::android::webkit::WebView__typeof()),
        ::uNewFunctionVoid("onRequestFocus_IMPL_24008", WebChromeClient__onRequestFocus_IMPL_24008, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onShowCustomView", WebChromeClient__onShowCustomView, 0, false, ::app::Android::android::view::View__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::webkit::WebChromeClientDLRCustomViewCallback__typeof()),
        ::uNewFunctionVoid("onShowCustomView", WebChromeClient__onShowCustomView_1, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::webkit::WebChromeClientDLRCustomViewCallback__typeof()),
        ::uNewFunctionVoid("onShowCustomView_IMPL_24004", WebChromeClient__onShowCustomView_IMPL_24004, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onShowCustomView_IMPL_24005", WebChromeClient__onShowCustomView_IMPL_24005, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void WebChromeClient___Init_2(::uStatic* __this)
{
    if (::app::Android::android::webkit::WebChromeClient___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::webkit::WebChromeClient___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebChromeClient"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::webkit::WebChromeClient___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebChromeClient'", 54);; }
}

void WebChromeClient___ObjInit_4(WebChromeClient* __this)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__WebChromeClient_23999_ID_c,::app::Android::android::webkit::WebChromeClient___javaClass_2,"<init>","()V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.<init> could not be cached",80);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__WebChromeClient_23999_ID_c);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void WebChromeClient___ObjInit_5(WebChromeClient* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

::app::Android::android::graphics::Bitmap* WebChromeClient__getDefaultVideoPoster(WebChromeClient* __this)
{
    return ::uCast< ::app::Android::android::graphics::Bitmap*>(WebChromeClient__getDefaultVideoPoster_IMPL_24021(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::Bitmap__typeof());
}

::uObject* WebChromeClient__getDefaultVideoPoster_IMPL_24021(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__getDefaultVideoPoster_24021_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"getDefaultVideoPoster","()Landroid/graphics/Bitmap;",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.getDefaultVideoPoster could not be cached",95);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__getDefaultVideoPoster_24021_ID),result,::app::Android::android::graphics::Bitmap__typeof(),::app::Android::android::graphics::Bitmap*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__getDefaultVideoPoster_24021_ID),result,::app::Android::android::graphics::Bitmap__typeof(),::app::Android::android::graphics::Bitmap*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::View* WebChromeClient__getVideoLoadingProgressView(WebChromeClient* __this)
{
    return ::uCast< ::app::Android::android::view::View*>(WebChromeClient__getVideoLoadingProgressView_IMPL_24022(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::View__typeof());
}

::uObject* WebChromeClient__getVideoLoadingProgressView_IMPL_24022(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__getVideoLoadingProgressView_24022_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"getVideoLoadingProgressView","()Landroid/view/View;",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.getVideoLoadingProgressView could not be cached",101);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__getVideoLoadingProgressView_24022_ID),result,::app::Android::android::view::View__typeof(),::app::Android::android::view::View*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__getVideoLoadingProgressView_24022_ID),result,::app::Android::android::view::View__typeof(),::app::Android::android::view::View*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebChromeClient__getVisitedHistory(WebChromeClient* __this, ::uObject* arg0)
{
    WebChromeClient__getVisitedHistory_IMPL_24023(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebChromeClient__getVisitedHistory_IMPL_24023(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__getVisitedHistory_24023_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"getVisitedHistory","(Landroid/webkit/ValueCallback;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.getVisitedHistory could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__getVisitedHistory_24023_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__getVisitedHistory_24023_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

WebChromeClient* WebChromeClient__New_5(::uStatic* __this)
{
    WebChromeClient* inst = (WebChromeClient*)::uAllocObject(sizeof(WebChromeClient), WebChromeClient__typeof());
    inst->_ObjInit_4();
    return inst;
}

WebChromeClient* WebChromeClient__New_6(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    WebChromeClient* inst = (WebChromeClient*)::uAllocObject(sizeof(WebChromeClient), WebChromeClient__typeof());
    inst->_ObjInit_5(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

void WebChromeClient__onCloseWindow(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0)
{
    WebChromeClient__onCloseWindow_IMPL_24009(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebChromeClient__onCloseWindow_IMPL_24009(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onCloseWindow_24009_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onCloseWindow","(Landroid/webkit/WebView;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onCloseWindow could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onCloseWindow_24009_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onCloseWindow_24009_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebChromeClient__onConsoleMessage(WebChromeClient* __this, ::app::Android::android::webkit::ConsoleMessage* arg0)
{
    return WebChromeClient__onConsoleMessage_IMPL_24020(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebChromeClient__onConsoleMessage_1(WebChromeClient* __this, ::app::Android::java::lang::String* arg0, int arg1, ::app::Android::java::lang::String* arg2)
{
    WebChromeClient__onConsoleMessage_IMPL_24019(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, (::uObject*)arg2);
}

void WebChromeClient__onConsoleMessage_IMPL_24019(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onConsoleMessage_24019_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onConsoleMessage","(Ljava/lang/String;ILjava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onConsoleMessage could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onConsoleMessage_24019_ID, _obArg2, ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onConsoleMessage_24019_ID, _obArg2, ((jint)arg3_), _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebChromeClient__onConsoleMessage_IMPL_24020(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onConsoleMessage_24020_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onConsoleMessage","(Landroid/webkit/ConsoleMessage;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onConsoleMessage could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onConsoleMessage_24020_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onConsoleMessage_24020_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebChromeClient__onCreateWindow(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, bool arg1, bool arg2, ::app::Android::android::os::Message* arg3)
{
    return WebChromeClient__onCreateWindow_IMPL_24007(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, (::uObject*)arg3);
}

bool WebChromeClient__onCreateWindow_IMPL_24007(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_, bool arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onCreateWindow_24007_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onCreateWindow","(Landroid/webkit/WebView;ZZLandroid/os/Message;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onCreateWindow could not be cached",88);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onCreateWindow_24007_ID, _obArg2, ((jboolean)arg3_), ((jboolean)arg4_), _obArg5));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onCreateWindow_24007_ID, _obArg2, ((jboolean)arg3_), ((jboolean)arg4_), _obArg5));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebChromeClient__onExceededDatabaseQuota(WebChromeClient* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::uLong arg2, ::uLong arg3, ::uLong arg4, ::uObject* arg5)
{
    WebChromeClient__onExceededDatabaseQuota_IMPL_24014(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2, arg3, arg4, (::uObject*)arg5);
}

void WebChromeClient__onExceededDatabaseQuota_IMPL_24014(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uLong arg4_, ::uLong arg5_, ::uLong arg6_, ::uObject* arg7_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg7 = ((!arg7_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg7_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onExceededDatabaseQuota_24014_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onExceededDatabaseQuota","(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onExceededDatabaseQuota could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onExceededDatabaseQuota_24014_ID, _obArg2, _obArg3, ((jlong)arg4_), ((jlong)arg5_), ((jlong)arg6_), _obArg7);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onExceededDatabaseQuota_24014_ID, _obArg2, _obArg3, ((jlong)arg4_), ((jlong)arg5_), ((jlong)arg6_), _obArg7);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onGeolocationPermissionsHidePrompt(WebChromeClient* __this)
{
    WebChromeClient__onGeolocationPermissionsHidePrompt_IMPL_24017(NULL, __this->_subclassed, __this->_javaObject);
}

void WebChromeClient__onGeolocationPermissionsHidePrompt_IMPL_24017(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onGeolocationPermissionsHidePrompt_24017_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onGeolocationPermissionsHidePrompt","()V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onGeolocationPermissionsHidePrompt could not be cached",108);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onGeolocationPermissionsHidePrompt_24017_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onGeolocationPermissionsHidePrompt_24017_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onGeolocationPermissionsShowPrompt(WebChromeClient* __this, ::app::Android::java::lang::String* arg0, ::uObject* arg1)
{
    WebChromeClient__onGeolocationPermissionsShowPrompt_IMPL_24016(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void WebChromeClient__onGeolocationPermissionsShowPrompt_IMPL_24016(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onGeolocationPermissionsShowPrompt_24016_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onGeolocationPermissionsShowPrompt","(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onGeolocationPermissionsShowPrompt could not be cached",108);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onGeolocationPermissionsShowPrompt_24016_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onGeolocationPermissionsShowPrompt_24016_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onHideCustomView(WebChromeClient* __this)
{
    WebChromeClient__onHideCustomView_IMPL_24006(NULL, __this->_subclassed, __this->_javaObject);
}

void WebChromeClient__onHideCustomView_IMPL_24006(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onHideCustomView_24006_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onHideCustomView","()V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onHideCustomView could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onHideCustomView_24006_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onHideCustomView_24006_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebChromeClient__onJsAlert(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3)
{
    return WebChromeClient__onJsAlert_IMPL_24010(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2, (::uObject*)arg3);
}

bool WebChromeClient__onJsAlert_IMPL_24010(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onJsAlert_24010_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onJsAlert","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsAlert could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onJsAlert_24010_ID, _obArg2, _obArg3, _obArg4, _obArg5));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onJsAlert_24010_ID, _obArg2, _obArg3, _obArg4, _obArg5));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebChromeClient__onJsBeforeUnload(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3)
{
    return WebChromeClient__onJsBeforeUnload_IMPL_24013(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2, (::uObject*)arg3);
}

bool WebChromeClient__onJsBeforeUnload_IMPL_24013(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onJsBeforeUnload_24013_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onJsBeforeUnload","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsBeforeUnload could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onJsBeforeUnload_24013_ID, _obArg2, _obArg3, _obArg4, _obArg5));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onJsBeforeUnload_24013_ID, _obArg2, _obArg3, _obArg4, _obArg5));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebChromeClient__onJsConfirm(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::android::webkit::JsResult* arg3)
{
    return WebChromeClient__onJsConfirm_IMPL_24011(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2, (::uObject*)arg3);
}

bool WebChromeClient__onJsConfirm_IMPL_24011(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onJsConfirm_24011_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onJsConfirm","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsConfirm could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onJsConfirm_24011_ID, _obArg2, _obArg3, _obArg4, _obArg5));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onJsConfirm_24011_ID, _obArg2, _obArg3, _obArg4, _obArg5));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebChromeClient__onJsPrompt(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::android::webkit::JsPromptResult* arg4)
{
    return WebChromeClient__onJsPrompt_IMPL_24012(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2, (::uObject*)arg3, (::uObject*)arg4);
}

bool WebChromeClient__onJsPrompt_IMPL_24012(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_, ::uObject* arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    jobject _obArg6 = ((!arg6_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onJsPrompt_24012_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onJsPrompt","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsPrompt could not be cached",84);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onJsPrompt_24012_ID, _obArg2, _obArg3, _obArg4, _obArg5, _obArg6));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onJsPrompt_24012_ID, _obArg2, _obArg3, _obArg4, _obArg5, _obArg6));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebChromeClient__onJsTimeout(WebChromeClient* __this)
{
    return WebChromeClient__onJsTimeout_IMPL_24018(NULL, __this->_subclassed, __this->_javaObject);
}

bool WebChromeClient__onJsTimeout_IMPL_24018(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onJsTimeout_24018_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onJsTimeout","()Z",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onJsTimeout could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onJsTimeout_24018_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onJsTimeout_24018_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebChromeClient__onProgressChanged(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, int arg1)
{
    WebChromeClient__onProgressChanged_IMPL_24000(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void WebChromeClient__onProgressChanged_IMPL_24000(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onProgressChanged_24000_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onProgressChanged","(Landroid/webkit/WebView;I)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onProgressChanged could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onProgressChanged_24000_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onProgressChanged_24000_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onReachedMaxAppCacheSize(WebChromeClient* __this, ::uLong arg0, ::uLong arg1, ::uObject* arg2)
{
    WebChromeClient__onReachedMaxAppCacheSize_IMPL_24015(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

void WebChromeClient__onReachedMaxAppCacheSize_IMPL_24015(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_, ::uLong arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onReachedMaxAppCacheSize_24015_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onReachedMaxAppCacheSize","(JJLandroid/webkit/WebStorage$QuotaUpdater;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onReachedMaxAppCacheSize could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onReachedMaxAppCacheSize_24015_ID, ((jlong)arg2_), ((jlong)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onReachedMaxAppCacheSize_24015_ID, ((jlong)arg2_), ((jlong)arg3_), _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onReceivedIcon(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::android::graphics::Bitmap* arg1)
{
    WebChromeClient__onReceivedIcon_IMPL_24002(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void WebChromeClient__onReceivedIcon_IMPL_24002(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onReceivedIcon_24002_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onReceivedIcon","(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onReceivedIcon could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onReceivedIcon_24002_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onReceivedIcon_24002_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onReceivedTitle(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1)
{
    WebChromeClient__onReceivedTitle_IMPL_24001(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void WebChromeClient__onReceivedTitle_IMPL_24001(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onReceivedTitle_24001_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onReceivedTitle","(Landroid/webkit/WebView;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onReceivedTitle could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onReceivedTitle_24001_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onReceivedTitle_24001_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onReceivedTouchIconUrl(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, ::app::Android::java::lang::String* arg1, bool arg2)
{
    WebChromeClient__onReceivedTouchIconUrl_IMPL_24003(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

void WebChromeClient__onReceivedTouchIconUrl_IMPL_24003(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onReceivedTouchIconUrl_24003_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onReceivedTouchIconUrl","(Landroid/webkit/WebView;Ljava/lang/String;Z)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onReceivedTouchIconUrl could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onReceivedTouchIconUrl_24003_ID, _obArg2, _obArg3, ((jboolean)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onReceivedTouchIconUrl_24003_ID, _obArg2, _obArg3, ((jboolean)arg4_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onRequestFocus(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0)
{
    WebChromeClient__onRequestFocus_IMPL_24008(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebChromeClient__onRequestFocus_IMPL_24008(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onRequestFocus_24008_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onRequestFocus","(Landroid/webkit/WebView;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onRequestFocus could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onRequestFocus_24008_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onRequestFocus_24008_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onShowCustomView(WebChromeClient* __this, ::app::Android::android::view::View* arg0, int arg1, ::uObject* arg2)
{
    WebChromeClient__onShowCustomView_IMPL_24005(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, (::uObject*)arg2);
}

void WebChromeClient__onShowCustomView_1(WebChromeClient* __this, ::app::Android::android::view::View* arg0, ::uObject* arg1)
{
    WebChromeClient__onShowCustomView_IMPL_24004(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void WebChromeClient__onShowCustomView_IMPL_24004(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onShowCustomView_24004_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onShowCustomView","(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onShowCustomView could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onShowCustomView_24004_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onShowCustomView_24004_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebChromeClient__onShowCustomView_IMPL_24005(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onShowCustomView_24005_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onShowCustomView","(Landroid/view/View;ILandroid/webkit/WebChromeClient$CustomViewCallback;)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onShowCustomView could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onShowCustomView_24005_ID, _obArg2, ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onShowCustomView_24005_ID, _obArg2, ((jint)arg3_), _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* WebChromeClientDLRCustomViewCallback__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.webkit.WebChromeClientDLRCustomViewCallback");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* WebStorageDLRQuotaUpdater__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.webkit.WebStorageDLRQuotaUpdater");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass WebView___javaClass_5;
jmethodID WebView__canGoBack_24239_ID;
jmethodID WebView__canGoForward_24241_ID;
jmethodID WebView__computeHorizontalScrollOffset_24304_ID;
jmethodID WebView__computeHorizontalScrollRange_24303_ID;
jmethodID WebView__computeScroll_24308_ID;
jmethodID WebView__computeVerticalScrollExtent_24307_ID;
jmethodID WebView__computeVerticalScrollOffset_24306_ID;
jmethodID WebView__computeVerticalScrollRange_24305_ID;
jmethodID WebView__dispatchDraw_24338_ID;
jmethodID WebView__dispatchKeyEvent_24332_ID;
jmethodID WebView__getAccessibilityNodeProvider_24316_ID;
jmethodID WebView__getProgress_24261_ID;
jmethodID WebView__getTitle_24259_ID;
jmethodID WebView__getUrl_24257_ID;
jmethodID WebView__goBack_24240_ID;
jmethodID WebView__goForward_24242_ID;
jmethodID WebView__loadDataWithBaseURL_24233_ID;
jmethodID WebView__loadUrl_24230_ID;
jmethodID WebView__onAttachedToWindow_24298_ID;
jmethodID WebView__onChildViewAdded_24289_ID;
jmethodID WebView__onChildViewRemoved_24290_ID;
jmethodID WebView__onConfigurationChanged_24325_ID;
jmethodID WebView__onCreateInputConnection_24326_ID;
jmethodID WebView__onDetachedFromWindow_24299_ID;
jmethodID WebView__onDraw_24323_ID;
jmethodID WebView__onFocusChanged_24329_ID;
jmethodID WebView__onGenericMotionEvent_24311_ID;
jmethodID WebView__onHoverEvent_24309_ID;
jmethodID WebView__onInitializeAccessibilityEvent_24319_ID;
jmethodID WebView__onInitializeAccessibilityNodeInfo_24318_ID;
jmethodID WebView__onKeyDown_24313_ID;
jmethodID WebView__onKeyMultiple_24315_ID;
jmethodID WebView__onKeyUp_24314_ID;
jmethodID WebView__onMeasure_24334_ID;
jmethodID WebView__onOverScrolled_24321_ID;
jmethodID WebView__onScrollChanged_24331_ID;
jmethodID WebView__onSizeChanged_24330_ID;
jmethodID WebView__onTouchEvent_24310_ID;
jmethodID WebView__onTrackballEvent_24312_ID;
jmethodID WebView__onVisibilityChanged_24327_ID;
jmethodID WebView__onWindowFocusChanged_24328_ID;
jmethodID WebView__onWindowVisibilityChanged_24322_ID;
jmethodID WebView__performAccessibilityAction_24320_ID;
jmethodID WebView__performLongClick_24324_ID;
jmethodID WebView__reload_24238_ID;
jmethodID WebView__requestChildRectangleOnScreen_24335_ID;
jmethodID WebView__requestFocus_24333_ID;
jmethodID WebView__setBackgroundColor_24336_ID;
jmethodID WebView__setLayerType_24337_ID;
jmethodID WebView__setLayoutParams_24300_ID;
jmethodID WebView__setOverScrollMode_24301_ID;
jmethodID WebView__setScrollBarStyle_24302_ID;
jmethodID WebView__setWebChromeClient_24283_ID;
jmethodID WebView__setWebViewClient_24281_ID;
jmethodID WebView__shouldDelayChildPressedState_24317_ID;
jmethodID WebView__stopLoading_24237_ID;
jmethodID WebView__WebView_24212_ID_c;

WebView__uType* WebView__typeof()
{
    static ::uStaticStrong<WebView__uType*> type;
    if (type != NULL) return type;

    type = (WebView__uType*)::uAllocClassType(sizeof(WebView__uType), "Android.android.webkit.WebView", false, 4, 0, 0);

    type->SetBaseType(::app::Android::android::widget::AbsoluteLayout__typeof());
    type->__fp_computeHorizontalScrollOffset = (int(*)(::app::Android::android::view::View*))WebView__computeHorizontalScrollOffset;
    type->__fp_computeHorizontalScrollRange = (int(*)(::app::Android::android::view::View*))WebView__computeHorizontalScrollRange;
    type->__fp_computeScroll = (void(*)(::app::Android::android::view::View*))WebView__computeScroll;
    type->__fp_computeVerticalScrollExtent = (int(*)(::app::Android::android::view::View*))WebView__computeVerticalScrollExtent;
    type->__fp_computeVerticalScrollOffset = (int(*)(::app::Android::android::view::View*))WebView__computeVerticalScrollOffset;
    type->__fp_computeVerticalScrollRange = (int(*)(::app::Android::android::view::View*))WebView__computeVerticalScrollRange;
    type->__fp_dispatchDraw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))WebView__dispatchDraw;
    type->__fp_dispatchKeyEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::KeyEvent*))WebView__dispatchKeyEvent;
    type->__fp_getAccessibilityNodeProvider = (::app::Android::android::view::accessibility::AccessibilityNodeProvider*(*)(::app::Android::android::view::View*))WebView__getAccessibilityNodeProvider;
    type->__fp_onAttachedToWindow = (void(*)(::app::Android::android::view::View*))WebView__onAttachedToWindow;
    type->__fp_onConfigurationChanged = (void(*)(::app::Android::android::view::View*, ::app::Android::android::content::res::Configuration*))WebView__onConfigurationChanged;
    type->__fp_onCreateInputConnection = (::uObject*(*)(::app::Android::android::view::View*, ::app::Android::android::view::inputmethod::EditorInfo*))WebView__onCreateInputConnection;
    type->__fp_onDetachedFromWindow = (void(*)(::app::Android::android::view::View*))WebView__onDetachedFromWindow;
    type->__fp_onDraw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))WebView__onDraw;
    type->__fp_onFocusChanged = (void(*)(::app::Android::android::view::View*, bool, int, ::app::Android::android::graphics::Rect*))WebView__onFocusChanged;
    type->__fp_onGenericMotionEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))WebView__onGenericMotionEvent;
    type->__fp_onHoverEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))WebView__onHoverEvent;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))WebView__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))WebView__onInitializeAccessibilityNodeInfo;
    type->__fp_onKeyDown = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*))WebView__onKeyDown;
    type->__fp_onKeyMultiple = (bool(*)(::app::Android::android::view::View*, int, int, ::app::Android::android::view::KeyEvent*))WebView__onKeyMultiple;
    type->__fp_onKeyUp = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*))WebView__onKeyUp;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))WebView__onMeasure;
    type->__fp_onOverScrolled = (void(*)(::app::Android::android::view::View*, int, int, bool, bool))WebView__onOverScrolled;
    type->__fp_onScrollChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))WebView__onScrollChanged;
    type->__fp_onSizeChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))WebView__onSizeChanged;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))WebView__onTouchEvent;
    type->__fp_onTrackballEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))WebView__onTrackballEvent;
    type->__fp_onVisibilityChanged = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::View*, int))WebView__onVisibilityChanged;
    type->__fp_onWindowFocusChanged = (void(*)(::app::Android::android::view::View*, bool))WebView__onWindowFocusChanged;
    type->__fp_onWindowVisibilityChanged = (void(*)(::app::Android::android::view::View*, int))WebView__onWindowVisibilityChanged;
    type->__fp_performAccessibilityAction = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::os::Bundle*))WebView__performAccessibilityAction;
    type->__fp_performLongClick = (bool(*)(::app::Android::android::view::View*))WebView__performLongClick;
    type->__fp_requestChildRectangleOnScreen = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool))WebView__requestChildRectangleOnScreen;
    type->__fp_requestFocus_2 = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::graphics::Rect*))WebView__requestFocus_2;
    type->__fp_setBackgroundColor = (void(*)(::app::Android::android::view::View*, int))WebView__setBackgroundColor;
    type->__fp_setLayerType = (void(*)(::app::Android::android::view::View*, int, ::app::Android::android::graphics::Paint*))WebView__setLayerType;
    type->__fp_setLayoutParams = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))WebView__setLayoutParams;
    type->__fp_setOverScrollMode = (void(*)(::app::Android::android::view::View*, int))WebView__setOverScrollMode;
    type->__fp_setScrollBarStyle = (void(*)(::app::Android::android::view::View*, int))WebView__setScrollBarStyle;
    type->__fp_shouldDelayChildPressedState = (bool(*)(::app::Android::android::view::ViewGroup*))WebView__shouldDelayChildPressedState;
    type->__interface_3.__fp_onChildViewAdded = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))WebView__onChildViewAdded;
    type->__interface_3.__fp_onChildViewRemoved = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))WebView__onChildViewRemoved;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_2.__fp_requestChildRectangleOnScreen = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool))WebView__requestChildRectangleOnScreen;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(WebView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WebView__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(WebView__uType, __interface_2),
        ::app::Android::android::view::ViewGroupDLROnHierarchyChangeListener__typeof(), offsetof(WebView__uType, __interface_3));

    type->SetFields(58,
        ::uNewField("_javaClass", &WebView___javaClass_5, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("canGoBack_24239_ID", &WebView__canGoBack_24239_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("canGoForward_24241_ID", &WebView__canGoForward_24241_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeHorizontalScrollOffset_24304_ID", &WebView__computeHorizontalScrollOffset_24304_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeHorizontalScrollRange_24303_ID", &WebView__computeHorizontalScrollRange_24303_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeScroll_24308_ID", &WebView__computeScroll_24308_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeVerticalScrollExtent_24307_ID", &WebView__computeVerticalScrollExtent_24307_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeVerticalScrollOffset_24306_ID", &WebView__computeVerticalScrollOffset_24306_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeVerticalScrollRange_24305_ID", &WebView__computeVerticalScrollRange_24305_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("dispatchDraw_24338_ID", &WebView__dispatchDraw_24338_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("dispatchKeyEvent_24332_ID", &WebView__dispatchKeyEvent_24332_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAccessibilityNodeProvider_24316_ID", &WebView__getAccessibilityNodeProvider_24316_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getProgress_24261_ID", &WebView__getProgress_24261_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTitle_24259_ID", &WebView__getTitle_24259_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getUrl_24257_ID", &WebView__getUrl_24257_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("goBack_24240_ID", &WebView__goBack_24240_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("goForward_24242_ID", &WebView__goForward_24242_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("loadDataWithBaseURL_24233_ID", &WebView__loadDataWithBaseURL_24233_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("loadUrl_24230_ID", &WebView__loadUrl_24230_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onAttachedToWindow_24298_ID", &WebView__onAttachedToWindow_24298_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onChildViewAdded_24289_ID", &WebView__onChildViewAdded_24289_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onChildViewRemoved_24290_ID", &WebView__onChildViewRemoved_24290_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onConfigurationChanged_24325_ID", &WebView__onConfigurationChanged_24325_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateInputConnection_24326_ID", &WebView__onCreateInputConnection_24326_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDetachedFromWindow_24299_ID", &WebView__onDetachedFromWindow_24299_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDraw_24323_ID", &WebView__onDraw_24323_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onFocusChanged_24329_ID", &WebView__onFocusChanged_24329_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onGenericMotionEvent_24311_ID", &WebView__onGenericMotionEvent_24311_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onHoverEvent_24309_ID", &WebView__onHoverEvent_24309_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_24319_ID", &WebView__onInitializeAccessibilityEvent_24319_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_24318_ID", &WebView__onInitializeAccessibilityNodeInfo_24318_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyDown_24313_ID", &WebView__onKeyDown_24313_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyMultiple_24315_ID", &WebView__onKeyMultiple_24315_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyUp_24314_ID", &WebView__onKeyUp_24314_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_24334_ID", &WebView__onMeasure_24334_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onOverScrolled_24321_ID", &WebView__onOverScrolled_24321_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onScrollChanged_24331_ID", &WebView__onScrollChanged_24331_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSizeChanged_24330_ID", &WebView__onSizeChanged_24330_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTouchEvent_24310_ID", &WebView__onTouchEvent_24310_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTrackballEvent_24312_ID", &WebView__onTrackballEvent_24312_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onVisibilityChanged_24327_ID", &WebView__onVisibilityChanged_24327_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onWindowFocusChanged_24328_ID", &WebView__onWindowFocusChanged_24328_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onWindowVisibilityChanged_24322_ID", &WebView__onWindowVisibilityChanged_24322_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performAccessibilityAction_24320_ID", &WebView__performAccessibilityAction_24320_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performLongClick_24324_ID", &WebView__performLongClick_24324_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("reload_24238_ID", &WebView__reload_24238_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestChildRectangleOnScreen_24335_ID", &WebView__requestChildRectangleOnScreen_24335_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestFocus_24333_ID", &WebView__requestFocus_24333_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setBackgroundColor_24336_ID", &WebView__setBackgroundColor_24336_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setLayerType_24337_ID", &WebView__setLayerType_24337_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setLayoutParams_24300_ID", &WebView__setLayoutParams_24300_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setOverScrollMode_24301_ID", &WebView__setOverScrollMode_24301_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setScrollBarStyle_24302_ID", &WebView__setScrollBarStyle_24302_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setWebChromeClient_24283_ID", &WebView__setWebChromeClient_24283_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setWebViewClient_24281_ID", &WebView__setWebViewClient_24281_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("shouldDelayChildPressedState_24317_ID", &WebView__shouldDelayChildPressedState_24317_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("stopLoading_24237_ID", &WebView__stopLoading_24237_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("WebView_24212_ID_c", &WebView__WebView_24212_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(73,
        ::uNewFunctionVoid("_Init", WebView___Init_5, 0, true),
        ::uNewFunction("canGoBack", WebView__canGoBack, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("canGoBack_IMPL_24239", WebView__canGoBack_IMPL_24239, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("canGoForward", WebView__canGoForward, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("canGoForward_IMPL_24241", WebView__canGoForward_IMPL_24241, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeHorizontalScrollOffset_IMPL_24304", WebView__computeHorizontalScrollOffset_IMPL_24304, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeHorizontalScrollRange_IMPL_24303", WebView__computeHorizontalScrollRange_IMPL_24303, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("computeScroll_IMPL_24308", WebView__computeScroll_IMPL_24308, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeVerticalScrollExtent_IMPL_24307", WebView__computeVerticalScrollExtent_IMPL_24307, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeVerticalScrollOffset_IMPL_24306", WebView__computeVerticalScrollOffset_IMPL_24306, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeVerticalScrollRange_IMPL_24305", WebView__computeVerticalScrollRange_IMPL_24305, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("dispatchDraw_IMPL_24338", WebView__dispatchDraw_IMPL_24338, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("dispatchKeyEvent_IMPL_24332", WebView__dispatchKeyEvent_IMPL_24332, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getAccessibilityNodeProvider_IMPL_24316", WebView__getAccessibilityNodeProvider_IMPL_24316, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getProgress", WebView__getProgress, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getProgress_IMPL_24261", WebView__getProgress_IMPL_24261, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getTitle", WebView__getTitle, 0, false, ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("getTitle_IMPL_24259", WebView__getTitle_IMPL_24259, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getUrl", WebView__getUrl, 0, false, ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("getUrl_IMPL_24257", WebView__getUrl_IMPL_24257, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("goBack", WebView__goBack, 0, false),
        ::uNewFunctionVoid("goBack_IMPL_24240", WebView__goBack_IMPL_24240, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("goForward", WebView__goForward, 0, false),
        ::uNewFunctionVoid("goForward_IMPL_24242", WebView__goForward_IMPL_24242, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("loadDataWithBaseURL", WebView__loadDataWithBaseURL, 0, false, ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunctionVoid("loadDataWithBaseURL_IMPL_24233", WebView__loadDataWithBaseURL_IMPL_24233, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("loadUrl", WebView__loadUrl, 0, false, ::app::Android::java::lang::String__typeof()),
        ::uNewFunctionVoid("loadUrl_IMPL_24230", WebView__loadUrl_IMPL_24230, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction(".ctor", WebView__New_13, 0, true, WebView__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunctionVoid("onAttachedToWindow_IMPL_24298", WebView__onAttachedToWindow_IMPL_24298, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onChildViewAdded", WebView__onChildViewAdded, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("onChildViewAdded_IMPL_24289", WebView__onChildViewAdded_IMPL_24289, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onChildViewRemoved", WebView__onChildViewRemoved, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("onChildViewRemoved_IMPL_24290", WebView__onChildViewRemoved_IMPL_24290, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onConfigurationChanged_IMPL_24325", WebView__onConfigurationChanged_IMPL_24325, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onCreateInputConnection_IMPL_24326", WebView__onCreateInputConnection_IMPL_24326, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onDetachedFromWindow_IMPL_24299", WebView__onDetachedFromWindow_IMPL_24299, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onDraw_IMPL_24323", WebView__onDraw_IMPL_24323, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onFocusChanged_IMPL_24329", WebView__onFocusChanged_IMPL_24329, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onGenericMotionEvent_IMPL_24311", WebView__onGenericMotionEvent_IMPL_24311, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onHoverEvent_IMPL_24309", WebView__onHoverEvent_IMPL_24309, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_24319", WebView__onInitializeAccessibilityEvent_IMPL_24319, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_24318", WebView__onInitializeAccessibilityNodeInfo_IMPL_24318, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyDown_IMPL_24313", WebView__onKeyDown_IMPL_24313, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyMultiple_IMPL_24315", WebView__onKeyMultiple_IMPL_24315, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyUp_IMPL_24314", WebView__onKeyUp_IMPL_24314, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_24334", WebView__onMeasure_IMPL_24334, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onOverScrolled_IMPL_24321", WebView__onOverScrolled_IMPL_24321, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onScrollChanged_IMPL_24331", WebView__onScrollChanged_IMPL_24331, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onSizeChanged_IMPL_24330", WebView__onSizeChanged_IMPL_24330, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("onTouchEvent_IMPL_24310", WebView__onTouchEvent_IMPL_24310, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onTrackballEvent_IMPL_24312", WebView__onTrackballEvent_IMPL_24312, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onVisibilityChanged_IMPL_24327", WebView__onVisibilityChanged_IMPL_24327, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onWindowFocusChanged_IMPL_24328", WebView__onWindowFocusChanged_IMPL_24328, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onWindowVisibilityChanged_IMPL_24322", WebView__onWindowVisibilityChanged_IMPL_24322, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performAccessibilityAction_IMPL_24320", WebView__performAccessibilityAction_IMPL_24320, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("performLongClick_IMPL_24324", WebView__performLongClick_IMPL_24324, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("reload", WebView__reload, 0, false),
        ::uNewFunctionVoid("reload_IMPL_24238", WebView__reload_IMPL_24238, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("requestChildRectangleOnScreen_IMPL_24335", WebView__requestChildRectangleOnScreen_IMPL_24335, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("requestFocus_IMPL_24333", WebView__requestFocus_IMPL_24333, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setBackgroundColor_IMPL_24336", WebView__setBackgroundColor_IMPL_24336, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setLayerType_IMPL_24337", WebView__setLayerType_IMPL_24337, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setLayoutParams_IMPL_24300", WebView__setLayoutParams_IMPL_24300, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setOverScrollMode_IMPL_24301", WebView__setOverScrollMode_IMPL_24301, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setScrollBarStyle_IMPL_24302", WebView__setScrollBarStyle_IMPL_24302, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setWebChromeClient", WebView__setWebChromeClient, 0, false, ::app::Android::android::webkit::WebChromeClient__typeof()),
        ::uNewFunctionVoid("setWebChromeClient_IMPL_24283", WebView__setWebChromeClient_IMPL_24283, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setWebViewClient", WebView__setWebViewClient, 0, false, ::app::Android::android::webkit::WebViewClient__typeof()),
        ::uNewFunctionVoid("setWebViewClient_IMPL_24281", WebView__setWebViewClient_IMPL_24281, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("shouldDelayChildPressedState_IMPL_24317", WebView__shouldDelayChildPressedState_IMPL_24317, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("stopLoading", WebView__stopLoading, 0, false),
        ::uNewFunctionVoid("stopLoading_IMPL_24237", WebView__stopLoading_IMPL_24237, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void WebView___Init_5(::uStatic* __this)
{
    if (::app::Android::android::webkit::WebView___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::webkit::WebView___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebView"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::webkit::WebView___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebView'", 46);; }
}

void WebView___ObjInit_16(WebView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::AbsoluteLayout___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::webkit::WebView__WebView_24212_ID_c,::app::Android::android::webkit::WebView___javaClass_5,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.webkit.WebView.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__WebView_24212_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

bool WebView__canGoBack(WebView* __this)
{
    return WebView__canGoBack_IMPL_24239(NULL, __this->_subclassed, __this->_javaObject);
}

bool WebView__canGoBack_IMPL_24239(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__canGoBack_24239_ID,::app::Android::android::webkit::WebView___javaClass_5,"canGoBack","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.canGoBack could not be cached",75);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__canGoBack_24239_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__canGoBack_24239_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebView__canGoForward(WebView* __this)
{
    return WebView__canGoForward_IMPL_24241(NULL, __this->_subclassed, __this->_javaObject);
}

bool WebView__canGoForward_IMPL_24241(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__canGoForward_24241_ID,::app::Android::android::webkit::WebView___javaClass_5,"canGoForward","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.canGoForward could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__canGoForward_24241_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__canGoForward_24241_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int WebView__computeHorizontalScrollOffset(WebView* __this)
{
    return WebView__computeHorizontalScrollOffset_IMPL_24304(NULL, __this->_subclassed, __this->_javaObject);
}

int WebView__computeHorizontalScrollOffset_IMPL_24304(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__computeHorizontalScrollOffset_24304_ID,::app::Android::android::webkit::WebView___javaClass_5,"computeHorizontalScrollOffset","()I",GetMethodID,"Id for fallback method android.webkit.WebView.computeHorizontalScrollOffset could not be cached",95);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__computeHorizontalScrollOffset_24304_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::webkit::WebView__computeHorizontalScrollOffset_24304_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int WebView__computeHorizontalScrollRange(WebView* __this)
{
    return WebView__computeHorizontalScrollRange_IMPL_24303(NULL, __this->_subclassed, __this->_javaObject);
}

int WebView__computeHorizontalScrollRange_IMPL_24303(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__computeHorizontalScrollRange_24303_ID,::app::Android::android::webkit::WebView___javaClass_5,"computeHorizontalScrollRange","()I",GetMethodID,"Id for fallback method android.webkit.WebView.computeHorizontalScrollRange could not be cached",94);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__computeHorizontalScrollRange_24303_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::webkit::WebView__computeHorizontalScrollRange_24303_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__computeScroll(WebView* __this)
{
    WebView__computeScroll_IMPL_24308(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__computeScroll_IMPL_24308(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__computeScroll_24308_ID,::app::Android::android::webkit::WebView___javaClass_5,"computeScroll","()V",GetMethodID,"Id for fallback method android.webkit.WebView.computeScroll could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__computeScroll_24308_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__computeScroll_24308_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int WebView__computeVerticalScrollExtent(WebView* __this)
{
    return WebView__computeVerticalScrollExtent_IMPL_24307(NULL, __this->_subclassed, __this->_javaObject);
}

int WebView__computeVerticalScrollExtent_IMPL_24307(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__computeVerticalScrollExtent_24307_ID,::app::Android::android::webkit::WebView___javaClass_5,"computeVerticalScrollExtent","()I",GetMethodID,"Id for fallback method android.webkit.WebView.computeVerticalScrollExtent could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__computeVerticalScrollExtent_24307_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::webkit::WebView__computeVerticalScrollExtent_24307_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int WebView__computeVerticalScrollOffset(WebView* __this)
{
    return WebView__computeVerticalScrollOffset_IMPL_24306(NULL, __this->_subclassed, __this->_javaObject);
}

int WebView__computeVerticalScrollOffset_IMPL_24306(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__computeVerticalScrollOffset_24306_ID,::app::Android::android::webkit::WebView___javaClass_5,"computeVerticalScrollOffset","()I",GetMethodID,"Id for fallback method android.webkit.WebView.computeVerticalScrollOffset could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__computeVerticalScrollOffset_24306_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::webkit::WebView__computeVerticalScrollOffset_24306_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int WebView__computeVerticalScrollRange(WebView* __this)
{
    return WebView__computeVerticalScrollRange_IMPL_24305(NULL, __this->_subclassed, __this->_javaObject);
}

int WebView__computeVerticalScrollRange_IMPL_24305(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__computeVerticalScrollRange_24305_ID,::app::Android::android::webkit::WebView___javaClass_5,"computeVerticalScrollRange","()I",GetMethodID,"Id for fallback method android.webkit.WebView.computeVerticalScrollRange could not be cached",92);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__computeVerticalScrollRange_24305_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::webkit::WebView__computeVerticalScrollRange_24305_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__dispatchDraw(WebView* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    WebView__dispatchDraw_IMPL_24338(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__dispatchDraw_IMPL_24338(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__dispatchDraw_24338_ID,::app::Android::android::webkit::WebView___javaClass_5,"dispatchDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.webkit.WebView.dispatchDraw could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__dispatchDraw_24338_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__dispatchDraw_24338_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebView__dispatchKeyEvent(WebView* __this, ::app::Android::android::view::KeyEvent* arg0)
{
    return WebView__dispatchKeyEvent_IMPL_24332(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool WebView__dispatchKeyEvent_IMPL_24332(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__dispatchKeyEvent_24332_ID,::app::Android::android::webkit::WebView___javaClass_5,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.dispatchKeyEvent could not be cached",82);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__dispatchKeyEvent_24332_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__dispatchKeyEvent_24332_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::accessibility::AccessibilityNodeProvider* WebView__getAccessibilityNodeProvider(WebView* __this)
{
    return ::uCast< ::app::Android::android::view::accessibility::AccessibilityNodeProvider*>(WebView__getAccessibilityNodeProvider_IMPL_24316(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::accessibility::AccessibilityNodeProvider__typeof());
}

::uObject* WebView__getAccessibilityNodeProvider_IMPL_24316(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__getAccessibilityNodeProvider_24316_ID,::app::Android::android::webkit::WebView___javaClass_5,"getAccessibilityNodeProvider","()Landroid/view/accessibility/AccessibilityNodeProvider;",GetMethodID,"Id for fallback method android.webkit.WebView.getAccessibilityNodeProvider could not be cached",94);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__getAccessibilityNodeProvider_24316_ID),result,::app::Android::Fallbacks::Android_android_view_accessibility_AccessibilityNodeProvider__typeof(),::app::Android::android::view::accessibility::AccessibilityNodeProvider*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::webkit::WebView__getAccessibilityNodeProvider_24316_ID),result,::app::Android::Fallbacks::Android_android_view_accessibility_AccessibilityNodeProvider__typeof(),::app::Android::android::view::accessibility::AccessibilityNodeProvider*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int WebView__getProgress(WebView* __this)
{
    return WebView__getProgress_IMPL_24261(NULL, __this->_subclassed, __this->_javaObject);
}

int WebView__getProgress_IMPL_24261(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__getProgress_24261_ID,::app::Android::android::webkit::WebView___javaClass_5,"getProgress","()I",GetMethodID,"Id for fallback method android.webkit.WebView.getProgress could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__getProgress_24261_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::webkit::WebView__getProgress_24261_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* WebView__getTitle(WebView* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(WebView__getTitle_IMPL_24259(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* WebView__getTitle_IMPL_24259(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__getTitle_24259_ID,::app::Android::android::webkit::WebView___javaClass_5,"getTitle","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.webkit.WebView.getTitle could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__getTitle_24259_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::webkit::WebView__getTitle_24259_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* WebView__getUrl(WebView* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(WebView__getUrl_IMPL_24257(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* WebView__getUrl_IMPL_24257(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__getUrl_24257_ID,::app::Android::android::webkit::WebView___javaClass_5,"getUrl","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.webkit.WebView.getUrl could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__getUrl_24257_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::webkit::WebView__getUrl_24257_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__goBack(WebView* __this)
{
    WebView__goBack_IMPL_24240(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__goBack_IMPL_24240(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__goBack_24240_ID,::app::Android::android::webkit::WebView___javaClass_5,"goBack","()V",GetMethodID,"Id for fallback method android.webkit.WebView.goBack could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__goBack_24240_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__goBack_24240_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__goForward(WebView* __this)
{
    WebView__goForward_IMPL_24242(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__goForward_IMPL_24242(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__goForward_24242_ID,::app::Android::android::webkit::WebView___javaClass_5,"goForward","()V",GetMethodID,"Id for fallback method android.webkit.WebView.goForward could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__goForward_24242_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__goForward_24242_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__loadDataWithBaseURL(WebView* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::java::lang::String* arg4)
{
    WebView__loadDataWithBaseURL_IMPL_24233(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2, (::uObject*)arg3, (::uObject*)arg4);
}

void WebView__loadDataWithBaseURL_IMPL_24233(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_, ::uObject* arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    jobject _obArg6 = ((!arg6_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__loadDataWithBaseURL_24233_ID,::app::Android::android::webkit::WebView___javaClass_5,"loadDataWithBaseURL","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebView.loadDataWithBaseURL could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__loadDataWithBaseURL_24233_ID, _obArg2, _obArg3, _obArg4, _obArg5, _obArg6);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__loadDataWithBaseURL_24233_ID, _obArg2, _obArg3, _obArg4, _obArg5, _obArg6);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__loadUrl(WebView* __this, ::app::Android::java::lang::String* arg0)
{
    WebView__loadUrl_IMPL_24230(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__loadUrl_IMPL_24230(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__loadUrl_24230_ID,::app::Android::android::webkit::WebView___javaClass_5,"loadUrl","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebView.loadUrl could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__loadUrl_24230_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__loadUrl_24230_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

WebView* WebView__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    WebView* inst = (WebView*)::uAllocObject(sizeof(WebView), WebView__typeof());
    inst->_ObjInit_16(arg0);
    return inst;
}

void WebView__onAttachedToWindow(WebView* __this)
{
    WebView__onAttachedToWindow_IMPL_24298(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__onAttachedToWindow_IMPL_24298(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onAttachedToWindow_24298_ID,::app::Android::android::webkit::WebView___javaClass_5,"onAttachedToWindow","()V",GetMethodID,"Id for fallback method android.webkit.WebView.onAttachedToWindow could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onAttachedToWindow_24298_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onAttachedToWindow_24298_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onChildViewAdded(WebView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1)
{
    WebView__onChildViewAdded_IMPL_24289(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void WebView__onChildViewAdded_IMPL_24289(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__onChildViewAdded_24289_ID,::app::Android::android::webkit::WebView___javaClass_5,"onChildViewAdded","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onChildViewAdded could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onChildViewAdded_24289_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onChildViewAdded_24289_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onChildViewRemoved(WebView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1)
{
    WebView__onChildViewRemoved_IMPL_24290(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void WebView__onChildViewRemoved_IMPL_24290(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__onChildViewRemoved_24290_ID,::app::Android::android::webkit::WebView___javaClass_5,"onChildViewRemoved","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onChildViewRemoved could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onChildViewRemoved_24290_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onChildViewRemoved_24290_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onConfigurationChanged(WebView* __this, ::app::Android::android::content::res::Configuration* arg0)
{
    WebView__onConfigurationChanged_IMPL_24325(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__onConfigurationChanged_IMPL_24325(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__onConfigurationChanged_24325_ID,::app::Android::android::webkit::WebView___javaClass_5,"onConfigurationChanged","(Landroid/content/res/Configuration;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onConfigurationChanged could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onConfigurationChanged_24325_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onConfigurationChanged_24325_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* WebView__onCreateInputConnection(WebView* __this, ::app::Android::android::view::inputmethod::EditorInfo* arg0)
{
    return (::uObject*)WebView__onCreateInputConnection_IMPL_24326(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* WebView__onCreateInputConnection_IMPL_24326(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onCreateInputConnection_24326_ID,::app::Android::android::webkit::WebView___javaClass_5,"onCreateInputConnection","(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",GetMethodID,"Id for fallback method android.webkit.WebView.onCreateInputConnection could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onCreateInputConnection_24326_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::webkit::WebView__onCreateInputConnection_24326_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__onDetachedFromWindow(WebView* __this)
{
    WebView__onDetachedFromWindow_IMPL_24299(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__onDetachedFromWindow_IMPL_24299(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onDetachedFromWindow_24299_ID,::app::Android::android::webkit::WebView___javaClass_5,"onDetachedFromWindow","()V",GetMethodID,"Id for fallback method android.webkit.WebView.onDetachedFromWindow could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onDetachedFromWindow_24299_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onDetachedFromWindow_24299_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onDraw(WebView* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    WebView__onDraw_IMPL_24323(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__onDraw_IMPL_24323(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__onDraw_24323_ID,::app::Android::android::webkit::WebView___javaClass_5,"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onDraw could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onDraw_24323_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onDraw_24323_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onFocusChanged(WebView* __this, bool arg0, int arg1, ::app::Android::android::graphics::Rect* arg2)
{
    WebView__onFocusChanged_IMPL_24329(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

void WebView__onFocusChanged_IMPL_24329(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__onFocusChanged_24329_ID,::app::Android::android::webkit::WebView___javaClass_5,"onFocusChanged","(ZILandroid/graphics/Rect;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onFocusChanged could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onFocusChanged_24329_ID, ((jboolean)arg2_), ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onFocusChanged_24329_ID, ((jboolean)arg2_), ((jint)arg3_), _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebView__onGenericMotionEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return WebView__onGenericMotionEvent_IMPL_24311(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool WebView__onGenericMotionEvent_IMPL_24311(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onGenericMotionEvent_24311_ID,::app::Android::android::webkit::WebView___javaClass_5,"onGenericMotionEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onGenericMotionEvent could not be cached",86);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onGenericMotionEvent_24311_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__onGenericMotionEvent_24311_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebView__onHoverEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return WebView__onHoverEvent_IMPL_24309(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool WebView__onHoverEvent_IMPL_24309(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onHoverEvent_24309_ID,::app::Android::android::webkit::WebView___javaClass_5,"onHoverEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onHoverEvent could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onHoverEvent_24309_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__onHoverEvent_24309_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__onInitializeAccessibilityEvent(WebView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    WebView__onInitializeAccessibilityEvent_IMPL_24319(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__onInitializeAccessibilityEvent_IMPL_24319(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__onInitializeAccessibilityEvent_24319_ID,::app::Android::android::webkit::WebView___javaClass_5,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onInitializeAccessibilityEvent could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onInitializeAccessibilityEvent_24319_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onInitializeAccessibilityEvent_24319_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onInitializeAccessibilityNodeInfo(WebView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    WebView__onInitializeAccessibilityNodeInfo_IMPL_24318(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__onInitializeAccessibilityNodeInfo_IMPL_24318(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__onInitializeAccessibilityNodeInfo_24318_ID,::app::Android::android::webkit::WebView___javaClass_5,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.webkit.WebView.onInitializeAccessibilityNodeInfo could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onInitializeAccessibilityNodeInfo_24318_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onInitializeAccessibilityNodeInfo_24318_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebView__onKeyDown(WebView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return WebView__onKeyDown_IMPL_24313(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool WebView__onKeyDown_IMPL_24313(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onKeyDown_24313_ID,::app::Android::android::webkit::WebView___javaClass_5,"onKeyDown","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onKeyDown could not be cached",75);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onKeyDown_24313_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__onKeyDown_24313_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebView__onKeyMultiple(WebView* __this, int arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2)
{
    return WebView__onKeyMultiple_IMPL_24315(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

bool WebView__onKeyMultiple_IMPL_24315(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onKeyMultiple_24315_ID,::app::Android::android::webkit::WebView___javaClass_5,"onKeyMultiple","(IILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onKeyMultiple could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onKeyMultiple_24315_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__onKeyMultiple_24315_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebView__onKeyUp(WebView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return WebView__onKeyUp_IMPL_24314(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool WebView__onKeyUp_IMPL_24314(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onKeyUp_24314_ID,::app::Android::android::webkit::WebView___javaClass_5,"onKeyUp","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onKeyUp could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onKeyUp_24314_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__onKeyUp_24314_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__onMeasure(WebView* __this, int arg0, int arg1)
{
    WebView__onMeasure_IMPL_24334(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void WebView__onMeasure_IMPL_24334(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onMeasure_24334_ID,::app::Android::android::webkit::WebView___javaClass_5,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.webkit.WebView.onMeasure could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onMeasure_24334_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onMeasure_24334_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onOverScrolled(WebView* __this, int arg0, int arg1, bool arg2, bool arg3)
{
    WebView__onOverScrolled_IMPL_24321(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void WebView__onOverScrolled_IMPL_24321(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onOverScrolled_24321_ID,::app::Android::android::webkit::WebView___javaClass_5,"onOverScrolled","(IIZZ)V",GetMethodID,"Id for fallback method android.webkit.WebView.onOverScrolled could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onOverScrolled_24321_ID, ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onOverScrolled_24321_ID, ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onScrollChanged(WebView* __this, int arg0, int arg1, int arg2, int arg3)
{
    WebView__onScrollChanged_IMPL_24331(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void WebView__onScrollChanged_IMPL_24331(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onScrollChanged_24331_ID,::app::Android::android::webkit::WebView___javaClass_5,"onScrollChanged","(IIII)V",GetMethodID,"Id for fallback method android.webkit.WebView.onScrollChanged could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onScrollChanged_24331_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onScrollChanged_24331_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onSizeChanged(WebView* __this, int arg0, int arg1, int arg2, int arg3)
{
    WebView__onSizeChanged_IMPL_24330(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void WebView__onSizeChanged_IMPL_24330(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onSizeChanged_24330_ID,::app::Android::android::webkit::WebView___javaClass_5,"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.webkit.WebView.onSizeChanged could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onSizeChanged_24330_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onSizeChanged_24330_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebView__onTouchEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return WebView__onTouchEvent_IMPL_24310(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool WebView__onTouchEvent_IMPL_24310(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onTouchEvent_24310_ID,::app::Android::android::webkit::WebView___javaClass_5,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onTouchEvent could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onTouchEvent_24310_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__onTouchEvent_24310_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebView__onTrackballEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return WebView__onTrackballEvent_IMPL_24312(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool WebView__onTrackballEvent_IMPL_24312(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onTrackballEvent_24312_ID,::app::Android::android::webkit::WebView___javaClass_5,"onTrackballEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onTrackballEvent could not be cached",82);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onTrackballEvent_24312_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__onTrackballEvent_24312_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__onVisibilityChanged(WebView* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    WebView__onVisibilityChanged_IMPL_24327(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void WebView__onVisibilityChanged_IMPL_24327(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__onVisibilityChanged_24327_ID,::app::Android::android::webkit::WebView___javaClass_5,"onVisibilityChanged","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.webkit.WebView.onVisibilityChanged could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onVisibilityChanged_24327_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onVisibilityChanged_24327_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onWindowFocusChanged(WebView* __this, bool arg0)
{
    WebView__onWindowFocusChanged_IMPL_24328(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void WebView__onWindowFocusChanged_IMPL_24328(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onWindowFocusChanged_24328_ID,::app::Android::android::webkit::WebView___javaClass_5,"onWindowFocusChanged","(Z)V",GetMethodID,"Id for fallback method android.webkit.WebView.onWindowFocusChanged could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onWindowFocusChanged_24328_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onWindowFocusChanged_24328_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__onWindowVisibilityChanged(WebView* __this, int arg0)
{
    WebView__onWindowVisibilityChanged_IMPL_24322(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void WebView__onWindowVisibilityChanged_IMPL_24322(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onWindowVisibilityChanged_24322_ID,::app::Android::android::webkit::WebView___javaClass_5,"onWindowVisibilityChanged","(I)V",GetMethodID,"Id for fallback method android.webkit.WebView.onWindowVisibilityChanged could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onWindowVisibilityChanged_24322_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onWindowVisibilityChanged_24322_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebView__performAccessibilityAction(WebView* __this, int arg0, ::app::Android::android::os::Bundle* arg1)
{
    return WebView__performAccessibilityAction_IMPL_24320(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool WebView__performAccessibilityAction_IMPL_24320(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__performAccessibilityAction_24320_ID,::app::Android::android::webkit::WebView___javaClass_5,"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.performAccessibilityAction could not be cached",92);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__performAccessibilityAction_24320_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__performAccessibilityAction_24320_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebView__performLongClick(WebView* __this)
{
    return WebView__performLongClick_IMPL_24324(NULL, __this->_subclassed, __this->_javaObject);
}

bool WebView__performLongClick_IMPL_24324(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__performLongClick_24324_ID,::app::Android::android::webkit::WebView___javaClass_5,"performLongClick","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.performLongClick could not be cached",82);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__performLongClick_24324_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__performLongClick_24324_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__reload(WebView* __this)
{
    WebView__reload_IMPL_24238(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__reload_IMPL_24238(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__reload_24238_ID,::app::Android::android::webkit::WebView___javaClass_5,"reload","()V",GetMethodID,"Id for fallback method android.webkit.WebView.reload could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__reload_24238_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__reload_24238_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebView__requestChildRectangleOnScreen(WebView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2)
{
    return WebView__requestChildRectangleOnScreen_IMPL_24335(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

bool WebView__requestChildRectangleOnScreen_IMPL_24335(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__requestChildRectangleOnScreen_24335_ID,::app::Android::android::webkit::WebView___javaClass_5,"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z",GetMethodID,"Id for fallback method android.webkit.WebView.requestChildRectangleOnScreen could not be cached",95);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__requestChildRectangleOnScreen_24335_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__requestChildRectangleOnScreen_24335_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool WebView__requestFocus_2(WebView* __this, int arg0, ::app::Android::android::graphics::Rect* arg1)
{
    return WebView__requestFocus_IMPL_24333(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool WebView__requestFocus_IMPL_24333(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__requestFocus_24333_ID,::app::Android::android::webkit::WebView___javaClass_5,"requestFocus","(ILandroid/graphics/Rect;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.requestFocus could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__requestFocus_24333_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__requestFocus_24333_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__setBackgroundColor(WebView* __this, int arg0)
{
    WebView__setBackgroundColor_IMPL_24336(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void WebView__setBackgroundColor_IMPL_24336(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__setBackgroundColor_24336_ID,::app::Android::android::webkit::WebView___javaClass_5,"setBackgroundColor","(I)V",GetMethodID,"Id for fallback method android.webkit.WebView.setBackgroundColor could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setBackgroundColor_24336_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setBackgroundColor_24336_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__setLayerType(WebView* __this, int arg0, ::app::Android::android::graphics::Paint* arg1)
{
    WebView__setLayerType_IMPL_24337(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

void WebView__setLayerType_IMPL_24337(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__setLayerType_24337_ID,::app::Android::android::webkit::WebView___javaClass_5,"setLayerType","(ILandroid/graphics/Paint;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setLayerType could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setLayerType_24337_ID, ((jint)arg2_), _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setLayerType_24337_ID, ((jint)arg2_), _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__setLayoutParams(WebView* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    WebView__setLayoutParams_IMPL_24300(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__setLayoutParams_IMPL_24300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__setLayoutParams_24300_ID,::app::Android::android::webkit::WebView___javaClass_5,"setLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setLayoutParams could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setLayoutParams_24300_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setLayoutParams_24300_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__setOverScrollMode(WebView* __this, int arg0)
{
    WebView__setOverScrollMode_IMPL_24301(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void WebView__setOverScrollMode_IMPL_24301(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__setOverScrollMode_24301_ID,::app::Android::android::webkit::WebView___javaClass_5,"setOverScrollMode","(I)V",GetMethodID,"Id for fallback method android.webkit.WebView.setOverScrollMode could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setOverScrollMode_24301_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setOverScrollMode_24301_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__setScrollBarStyle(WebView* __this, int arg0)
{
    WebView__setScrollBarStyle_IMPL_24302(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void WebView__setScrollBarStyle_IMPL_24302(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__setScrollBarStyle_24302_ID,::app::Android::android::webkit::WebView___javaClass_5,"setScrollBarStyle","(I)V",GetMethodID,"Id for fallback method android.webkit.WebView.setScrollBarStyle could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setScrollBarStyle_24302_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setScrollBarStyle_24302_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__setWebChromeClient(WebView* __this, ::app::Android::android::webkit::WebChromeClient* arg0)
{
    WebView__setWebChromeClient_IMPL_24283(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__setWebChromeClient_IMPL_24283(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__setWebChromeClient_24283_ID,::app::Android::android::webkit::WebView___javaClass_5,"setWebChromeClient","(Landroid/webkit/WebChromeClient;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setWebChromeClient could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setWebChromeClient_24283_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setWebChromeClient_24283_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void WebView__setWebViewClient(WebView* __this, ::app::Android::android::webkit::WebViewClient* arg0)
{
    WebView__setWebViewClient_IMPL_24281(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__setWebViewClient_IMPL_24281(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__setWebViewClient_24281_ID,::app::Android::android::webkit::WebView___javaClass_5,"setWebViewClient","(Landroid/webkit/WebViewClient;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setWebViewClient could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setWebViewClient_24281_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setWebViewClient_24281_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool WebView__shouldDelayChildPressedState(WebView* __this)
{
    return WebView__shouldDelayChildPressedState_IMPL_24317(NULL, __this->_subclassed, __this->_javaObject);
}

bool WebView__shouldDelayChildPressedState_IMPL_24317(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__shouldDelayChildPressedState_24317_ID,::app::Android::android::webkit::WebView___javaClass_5,"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.shouldDelayChildPressedState could not be cached",94);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__shouldDelayChildPressedState_24317_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__shouldDelayChildPressedState_24317_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void WebView__stopLoading(WebView* __this)
{
    WebView__stopLoading_IMPL_24237(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__stopLoading_IMPL_24237(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__stopLoading_24237_ID,::app::Android::android::webkit::WebView___javaClass_5,"stopLoading","()V",GetMethodID,"Id for fallback method android.webkit.WebView.stopLoading could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__stopLoading_24237_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__stopLoading_24237_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\webkit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass WebViewClient___javaClass_2;
jmethodID WebViewClient__WebViewClient_24354_ID_c;

WebViewClient__uType* WebViewClient__typeof()
{
    static ::uStaticStrong<WebViewClient__uType*> type;
    if (type != NULL) return type;

    type = (WebViewClient__uType*)::uAllocClassType(sizeof(WebViewClient__uType), "Android.android.webkit.WebViewClient", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(WebViewClient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WebViewClient__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &WebViewClient___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("WebViewClient_24354_ID_c", &WebViewClient__WebViewClient_24354_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", WebViewClient___Init_2, 0, true),
        ::uNewFunction(".ctor", WebViewClient__New_5, 0, true, WebViewClient__typeof()));

    ::uRegisterType(type);
    return type;
}

void WebViewClient___Init_2(::uStatic* __this)
{
    if (::app::Android::android::webkit::WebViewClient___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::webkit::WebViewClient___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebViewClient"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::webkit::WebViewClient___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebViewClient'", 52);; }
}

void WebViewClient___ObjInit_4(WebViewClient* __this)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::webkit::WebViewClient___javaClass_2,::app::Android::android::webkit::WebViewClient___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::webkit::WebViewClient__WebViewClient_24354_ID_c,::app::Android::android::webkit::WebViewClient___javaClass_2,"<init>","()V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.<init> could not be cached",78);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::webkit::WebViewClient___javaClass_2, ::app::Android::android::webkit::WebViewClient__WebViewClient_24354_ID_c);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

WebViewClient* WebViewClient__New_5(::uStatic* __this)
{
    WebViewClient* inst = (WebViewClient*)::uAllocObject(sizeof(WebViewClient), WebViewClient__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}}
