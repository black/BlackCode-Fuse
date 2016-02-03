#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Type.h>
//~Callbacks forHttpRequest


JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnDataReceived44285,jlong ujPtr, jobject arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JARG_TO_UNO(arg2,::uObject*,((::app::Android::Base::Wrappers::JWrapper*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, arg0, (::uType*)::app::Android::Base::Wrappers::JWrapper__typeof(), false, false)));
    JTRY
    uPtr->OnDataReceived(tmparg2, ((int)arg1));
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnAborted44286,jlong ujPtr) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnAborted();
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnError44287,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JARG_TO_UNO(arg1,::uObject*,((::app::Android::Base::Wrappers::JWrapper*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, arg0, (::uType*)::app::Android::Base::Wrappers::JWrapper__typeof(), false, false)));
    JTRY
    uPtr->OnError(tmparg1);
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnTimeout44288,jlong ujPtr) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnTimeout();
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnDone44289,jlong ujPtr) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnDone();
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnHeadersReceived44290,jlong ujPtr) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnHeadersReceived();
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnProgress44291,jlong ujPtr, jint arg0, jint arg1, jboolean arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnProgress(((int)arg0), ((int)arg1), ((bool)arg2));
    JCATCH
}

namespace app {
namespace Android {
namespace com {
namespace fuse {
namespace ExperimentalHttp {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\Implementation\Android\ExperimentalHttp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass HttpRequest___javaClass_1;
jclass HttpRequest___javaProxyClass_1;
jmethodID HttpRequest__Abort_44305_ID;
jmethodID HttpRequest__CacheClose_44281_ID;
jmethodID HttpRequest__CacheDelete_44282_ID;
jmethodID HttpRequest__CacheFlush_44283_ID;
jmethodID HttpRequest__CacheRenew_44280_ID;
jmethodID HttpRequest__CacheResponseString_44296_ID;
jmethodID HttpRequest__DownloadDone_44303_ID;
jmethodID HttpRequest__GetResponseHeader_44307_ID;
jmethodID HttpRequest__GetResponseHeaders_44308_ID;
jmethodID HttpRequest__GetResponseStatus_44306_ID;
jmethodID HttpRequest__GetResponseString_44297_ID;
jmethodID HttpRequest__HttpRequest_44284_ID_c;
jmethodID HttpRequest__HttpRequest_44284_ID_c_prox;
jfieldID HttpRequest__HttpResponseTypeByteArray_44278_ID;
jfieldID HttpRequest__HttpResponseTypeNone_44276_ID;
jfieldID HttpRequest__HttpResponseTypeString_44277_ID;
jmethodID HttpRequest__InstallCache_44279_ID;
jmethodID HttpRequest__SendAsync_44299_ID;
jmethodID HttpRequest__SendAsyncBuf_44300_ID;
jmethodID HttpRequest__SendAsyncStr_44301_ID;
jmethodID HttpRequest__SetCaching_44295_ID;
jmethodID HttpRequest__SetHeader_44293_ID;
jmethodID HttpRequest__SetResponseType_44292_ID;
jmethodID HttpRequest__SetTimeout_44294_ID;
jmethodID HttpRequest__StartDownload_44304_ID;
jmethodID HttpRequest__UploadDone_44302_ID;

HttpRequest__uType* HttpRequest__typeof()
{
    static ::uStaticStrong<HttpRequest__uType*> type;
    if (type != NULL) return type;

    type = (HttpRequest__uType*)::uAllocClassType(sizeof(HttpRequest__uType), "Android.com.fuse.ExperimentalHttp.HttpRequest", false, 2, 0, 0);

    type->SetBaseType(::app::Android::Base::Wrappers::JWrapper__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(HttpRequest__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HttpRequest__uType, __interface_1));

    type->SetFields(28,
        ::uNewField("_javaClass", &HttpRequest___javaClass_1, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_javaProxyClass", &HttpRequest___javaProxyClass_1, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("Abort_44305_ID", &HttpRequest__Abort_44305_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("CacheClose_44281_ID", &HttpRequest__CacheClose_44281_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("CacheDelete_44282_ID", &HttpRequest__CacheDelete_44282_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("CacheFlush_44283_ID", &HttpRequest__CacheFlush_44283_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("CacheRenew_44280_ID", &HttpRequest__CacheRenew_44280_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("CacheResponseString_44296_ID", &HttpRequest__CacheResponseString_44296_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("DownloadDone_44303_ID", &HttpRequest__DownloadDone_44303_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("GetResponseHeader_44307_ID", &HttpRequest__GetResponseHeader_44307_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("GetResponseHeaders_44308_ID", &HttpRequest__GetResponseHeaders_44308_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("GetResponseStatus_44306_ID", &HttpRequest__GetResponseStatus_44306_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("GetResponseString_44297_ID", &HttpRequest__GetResponseString_44297_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("HttpRequest_44284_ID_c", &HttpRequest__HttpRequest_44284_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("HttpRequest_44284_ID_c_prox", &HttpRequest__HttpRequest_44284_ID_c_prox, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("HttpResponseTypeByteArray_44278_ID", &HttpRequest__HttpResponseTypeByteArray_44278_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("HttpResponseTypeNone_44276_ID", &HttpRequest__HttpResponseTypeNone_44276_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("HttpResponseTypeString_44277_ID", &HttpRequest__HttpResponseTypeString_44277_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("InstallCache_44279_ID", &HttpRequest__InstallCache_44279_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SendAsync_44299_ID", &HttpRequest__SendAsync_44299_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SendAsyncBuf_44300_ID", &HttpRequest__SendAsyncBuf_44300_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SendAsyncStr_44301_ID", &HttpRequest__SendAsyncStr_44301_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SetCaching_44295_ID", &HttpRequest__SetCaching_44295_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SetHeader_44293_ID", &HttpRequest__SetHeader_44293_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SetResponseType_44292_ID", &HttpRequest__SetResponseType_44292_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SetTimeout_44294_ID", &HttpRequest__SetTimeout_44294_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("StartDownload_44304_ID", &HttpRequest__StartDownload_44304_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("UploadDone_44302_ID", &HttpRequest__UploadDone_44302_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(59,
        ::uNewFunctionVoid("_Init", HttpRequest___Init_1, 0, true),
        ::uNewFunctionVoid("_InitProxy", HttpRequest___InitProxy_1, 0, true),
        ::uNewFunction("_IsThisType", HttpRequest___IsThisType_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("Abort", HttpRequest__Abort, 0, false),
        ::uNewFunctionVoid("Abort_IMPL_44305", HttpRequest__Abort_IMPL_44305, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("CacheClose", HttpRequest__CacheClose, 0, true),
        ::uNewFunctionVoid("CacheClose_IMPL_44281", HttpRequest__CacheClose_IMPL_44281, 0, true),
        ::uNewFunctionVoid("CacheDelete", HttpRequest__CacheDelete, 0, true),
        ::uNewFunctionVoid("CacheDelete_IMPL_44282", HttpRequest__CacheDelete_IMPL_44282, 0, true),
        ::uNewFunctionVoid("CacheFlush", HttpRequest__CacheFlush, 0, true),
        ::uNewFunctionVoid("CacheFlush_IMPL_44283", HttpRequest__CacheFlush_IMPL_44283, 0, true),
        ::uNewFunctionVoid("CacheRenew", HttpRequest__CacheRenew, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("CacheRenew_IMPL_44280", HttpRequest__CacheRenew_IMPL_44280, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("CacheResponseString", HttpRequest__CacheResponseString, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("CacheResponseString_IMPL_44296", HttpRequest__CacheResponseString_IMPL_44296, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("DownloadDone", HttpRequest__DownloadDone, 0, false),
        ::uNewFunctionVoid("DownloadDone_IMPL_44303", HttpRequest__DownloadDone_IMPL_44303, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("get_HttpResponseTypeByteArray", HttpRequest__get_HttpResponseTypeByteArray, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_HttpResponseTypeNone", HttpRequest__get_HttpResponseTypeNone, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_HttpResponseTypeString", HttpRequest__get_HttpResponseTypeString, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetResponseHeader", HttpRequest__GetResponseHeader, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("GetResponseHeader_IMPL_44307", HttpRequest__GetResponseHeader_IMPL_44307, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("GetResponseHeaders", HttpRequest__GetResponseHeaders, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("GetResponseHeaders_IMPL_44308", HttpRequest__GetResponseHeaders_IMPL_44308, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetResponseStatus", HttpRequest__GetResponseStatus, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetResponseStatus_IMPL_44306", HttpRequest__GetResponseStatus_IMPL_44306, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetResponseString", HttpRequest__GetResponseString, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("GetResponseString_IMPL_44297", HttpRequest__GetResponseString_IMPL_44297, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("HttpRequest_IMPL_44284", HttpRequest__HttpRequest_IMPL_44284, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("HttpResponseTypeByteArray_GET_44278", HttpRequest__HttpResponseTypeByteArray_GET_44278, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("HttpResponseTypeNone_GET_44276", HttpRequest__HttpResponseTypeNone_GET_44276, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("HttpResponseTypeString_GET_44277", HttpRequest__HttpResponseTypeString_GET_44277, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("InstallCache", HttpRequest__InstallCache, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction("InstallCache_IMPL_44279", HttpRequest__InstallCache_IMPL_44279, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("OnAborted", type->__fp_OnAborted, offsetof(HttpRequest__uType, __fp_OnAborted), false),
        ::uNewFunctionVoid("OnDataReceived", type->__fp_OnDataReceived, offsetof(HttpRequest__uType, __fp_OnDataReceived), false, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("OnDone", type->__fp_OnDone, offsetof(HttpRequest__uType, __fp_OnDone), false),
        ::uNewFunctionVoid("OnError", type->__fp_OnError, offsetof(HttpRequest__uType, __fp_OnError), false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("OnHeadersReceived", type->__fp_OnHeadersReceived, offsetof(HttpRequest__uType, __fp_OnHeadersReceived), false),
        ::uNewFunctionVoid("OnProgress", type->__fp_OnProgress, offsetof(HttpRequest__uType, __fp_OnProgress), false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnTimeout", type->__fp_OnTimeout, offsetof(HttpRequest__uType, __fp_OnTimeout), false),
        ::uNewFunctionVoid("SendAsync", HttpRequest__SendAsync, 0, false),
        ::uNewFunctionVoid("SendAsync_IMPL_44299", HttpRequest__SendAsync_IMPL_44299, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("SendAsyncBuf", HttpRequest__SendAsyncBuf, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("SendAsyncBuf_IMPL_44300", HttpRequest__SendAsyncBuf_IMPL_44300, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("SendAsyncStr", HttpRequest__SendAsyncStr, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("SendAsyncStr_IMPL_44301", HttpRequest__SendAsyncStr_IMPL_44301, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("SetCaching", HttpRequest__SetCaching, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetCaching_IMPL_44295", HttpRequest__SetCaching_IMPL_44295, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetHeader", HttpRequest__SetHeader, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("SetHeader_IMPL_44293", HttpRequest__SetHeader_IMPL_44293, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("SetResponseType", HttpRequest__SetResponseType, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetResponseType_IMPL_44292", HttpRequest__SetResponseType_IMPL_44292, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetTimeout", HttpRequest__SetTimeout, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetTimeout_IMPL_44294", HttpRequest__SetTimeout_IMPL_44294, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("StartDownload", HttpRequest__StartDownload, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("StartDownload_IMPL_44304", HttpRequest__StartDownload_IMPL_44304, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("UploadDone", HttpRequest__UploadDone, 0, false, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("UploadDone_IMPL_44302", HttpRequest__UploadDone_IMPL_44302, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void HttpRequest___Init_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/ExperimentalHttp/HttpRequest"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.ExperimentalHttp.HttpRequest'", 61);; }
}

void HttpRequest___InitProxy_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1 = NEW_GLOBAL_REF(jclass,::app::Android::Base::JNI__LoadClass(NULL, jni, "com.Bindings.Android_com_fuse_ExperimentalHttp_HttpRequest"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'Android_com_fuse_ExperimentalHttp_HttpRequest'", 69);; }
    
    BEGIN_REG_MTD(7);
    
    REG_MTD(0,"__n_OnDataReceived","(J[BIJJ)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnDataReceived44285);
    
    
    REG_MTD(1,"__n_OnAborted","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnAborted44286);
    
    
    REG_MTD(2,"__n_OnError","(JLjava/lang/String;J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnError44287);
    
    
    REG_MTD(3,"__n_OnTimeout","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnTimeout44288);
    
    
    REG_MTD(4,"__n_OnDone","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnDone44289);
    
    
    REG_MTD(5,"__n_OnHeadersReceived","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnHeadersReceived44290);
    
    
    REG_MTD(6,"__n_OnProgress","(JIIZJJJ)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnProgress44291);
    
    COMMIT_REG_MTD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1);
}

bool HttpRequest___IsThisType_1(::uStatic* __this, ::uObject* obj_)
{
    int N = 44;
    const char* typ = "Android.com.fuse.ExperimentalHttp.HttpRequest";
    const char* potential = obj_->__obj_type->TypeName;
    for (int i = 0; i < N; ++i)
    {
        if (potential[i]==0 || (potential[i] != typ[i])) {
            return true;
        }
    }
    return false;
}

void HttpRequest___ObjInit_2(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1, ::uObject* arg2)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    __this->_subclassed = HttpRequest___IsThisType_1(NULL, (::uObject*)__this);
    HttpRequest* wrapper = __this->_subclassed ? __this : NULL;
    __this->_javaObject = HttpRequest__HttpRequest_IMPL_44284(NULL, (::uObject*)wrapper, arg0, arg1, arg2);
}

void HttpRequest___ObjInit_3(HttpRequest* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, obj, utype, hasFallbackClass, resolveType);
}

void HttpRequest__Abort(HttpRequest* __this)
{
    HttpRequest__Abort_IMPL_44305(NULL, __this->_subclassed, __this->_javaObject);
}

void HttpRequest__Abort_IMPL_44305(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__Abort_44305_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"Abort","()V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.Abort could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__Abort_44305_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__Abort_44305_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__CacheClose(::uStatic* __this)
{
    HttpRequest__CacheClose_IMPL_44281(NULL);
}

void HttpRequest__CacheClose_IMPL_44281(::uStatic* __this)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheClose_44281_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"CacheClose","()V",GetStaticMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.CacheClose could not be cached",91);
    U_JNIVAR->CallStaticVoidMethod(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheClose_44281_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__CacheDelete(::uStatic* __this)
{
    HttpRequest__CacheDelete_IMPL_44282(NULL);
}

void HttpRequest__CacheDelete_IMPL_44282(::uStatic* __this)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheDelete_44282_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"CacheDelete","()V",GetStaticMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.CacheDelete could not be cached",92);
    U_JNIVAR->CallStaticVoidMethod(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheDelete_44282_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__CacheFlush(::uStatic* __this)
{
    HttpRequest__CacheFlush_IMPL_44283(NULL);
}

void HttpRequest__CacheFlush_IMPL_44283(::uStatic* __this)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheFlush_44283_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"CacheFlush","()V",GetStaticMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.CacheFlush could not be cached",91);
    U_JNIVAR->CallStaticVoidMethod(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheFlush_44283_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__CacheRenew(::uStatic* __this, ::uObject* arg0)
{
    HttpRequest__CacheRenew_IMPL_44280(NULL, arg0);
}

void HttpRequest__CacheRenew_IMPL_44280(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheRenew_44280_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"CacheRenew","(Landroid/app/Activity;)V",GetStaticMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.CacheRenew could not be cached",91);
    U_JNIVAR->CallStaticVoidMethod(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheRenew_44280_ID, _obArg0);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__CacheResponseString(HttpRequest* __this, ::uObject* arg0)
{
    HttpRequest__CacheResponseString_IMPL_44296(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__CacheResponseString_IMPL_44296(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheResponseString_44296_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"CacheResponseString","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.CacheResponseString could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheResponseString_44296_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheResponseString_44296_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__DownloadDone(HttpRequest* __this)
{
    HttpRequest__DownloadDone_IMPL_44303(NULL, __this->_subclassed, __this->_javaObject);
}

void HttpRequest__DownloadDone_IMPL_44303(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__DownloadDone_44303_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"DownloadDone","()V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.DownloadDone could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__DownloadDone_44303_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__DownloadDone_44303_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int HttpRequest__get_HttpResponseTypeByteArray(::uStatic* __this)
{
    return HttpRequest__HttpResponseTypeByteArray_GET_44278(NULL);
}

int HttpRequest__get_HttpResponseTypeNone(::uStatic* __this)
{
    return HttpRequest__HttpResponseTypeNone_GET_44276(NULL);
}

int HttpRequest__get_HttpResponseTypeString(::uStatic* __this)
{
    return HttpRequest__HttpResponseTypeString_GET_44277(NULL);
}

::uObject* HttpRequest__GetResponseHeader(HttpRequest* __this, ::uObject* arg0)
{
    return HttpRequest__GetResponseHeader_IMPL_44307(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* HttpRequest__GetResponseHeader_IMPL_44307(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeader_44307_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"GetResponseHeader","(Ljava/lang/String;)Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseHeader could not be cached",98);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeader_44307_ID, _obArg2),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeader_44307_ID, _obArg2),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    
    return result;
}

::uObject* HttpRequest__GetResponseHeaders(HttpRequest* __this)
{
    return HttpRequest__GetResponseHeaders_IMPL_44308(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* HttpRequest__GetResponseHeaders_IMPL_44308(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    ::uObject* result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders_44308_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"GetResponseHeaders","()Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseHeaders could not be cached",99);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders_44308_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders_44308_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    
    return result;
}

int HttpRequest__GetResponseStatus(HttpRequest* __this)
{
    return HttpRequest__GetResponseStatus_IMPL_44306(NULL, __this->_subclassed, __this->_javaObject);
}

int HttpRequest__GetResponseStatus_IMPL_44306(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    int result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus_44306_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"GetResponseStatus","()I",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseStatus could not be cached",98);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus_44306_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus_44306_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    
    return result;
}

::uObject* HttpRequest__GetResponseString(HttpRequest* __this)
{
    return HttpRequest__GetResponseString_IMPL_44297(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* HttpRequest__GetResponseString_IMPL_44297(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    ::uObject* result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseString_44297_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"GetResponseString","()Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseString could not be cached",98);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseString_44297_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseString_44297_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    
    return result;
}

jobject HttpRequest__HttpRequest_IMPL_44284(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpRequest_44284_ID_c,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"<init>","(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.<init> could not be cached",87);
    if (arg0_) {
        CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___InitProxy_1(NULL));
        CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpRequest_44284_ID_c_prox,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1,"<init>","(JLandroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Proxy Id for method Android_com_fuse_ExperimentalHttp_HttpRequest.HttpRequest_44284_ID_c_prox could not be cached",113);
    }
    jobject _obArg1 = ((!arg1_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1_));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject result;
    jobject _tmp;
    if (!arg0_) {
        _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpRequest_44284_ID_c, _obArg1, _obArg2, _obArg3);
        result = NEW_GLOBAL_REF(jobject,_tmp);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    } else {
            _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpRequest_44284_ID_c_prox, (jlong)arg0_->__obj_weak, _obArg1, _obArg2, _obArg3);
        result = NEW_GLOBAL_REF(jobject,_tmp);
        ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    }
    
    U_JNIVAR->DeleteLocalRef(_tmp);
    return result;
}

int HttpRequest__HttpResponseTypeByteArray_GET_44278(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeByteArray_44278_ID)) {
        CACHE_FIELD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeByteArray_44278_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"HttpResponseTypeByteArray","I",GetStaticFieldID,"Id for field HttpRequest.HttpResponseTypeByteArray could not be cached",70);
        ::uExitCritical();
    }
    int result;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeByteArray_44278_ID));
    return result;
}

int HttpRequest__HttpResponseTypeNone_GET_44276(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeNone_44276_ID)) {
        CACHE_FIELD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeNone_44276_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"HttpResponseTypeNone","I",GetStaticFieldID,"Id for field HttpRequest.HttpResponseTypeNone could not be cached",65);
        ::uExitCritical();
    }
    int result;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeNone_44276_ID));
    return result;
}

int HttpRequest__HttpResponseTypeString_GET_44277(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeString_44277_ID)) {
        CACHE_FIELD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeString_44277_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"HttpResponseTypeString","I",GetStaticFieldID,"Id for field HttpRequest.HttpResponseTypeString could not be cached",67);
        ::uExitCritical();
    }
    int result;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpResponseTypeString_44277_ID));
    return result;
}

bool HttpRequest__InstallCache(::uStatic* __this, ::uObject* arg0, ::uLong arg1)
{
    return HttpRequest__InstallCache_IMPL_44279(NULL, arg0, arg1);
}

bool HttpRequest__InstallCache_IMPL_44279(::uStatic* __this, ::uObject* arg0_, ::uLong arg1_)
{
    INIT_JNI;
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    bool result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__InstallCache_44279_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"InstallCache","(Landroid/app/Activity;J)Z",GetStaticMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.InstallCache could not be cached",93);
    result = ((bool)U_JNIVAR->CallStaticBooleanMethod(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__InstallCache_44279_ID, _obArg0, ((jlong)arg1_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    
    return result;
}

void HttpRequest__SendAsync(HttpRequest* __this)
{
    HttpRequest__SendAsync_IMPL_44299(NULL, __this->_subclassed, __this->_javaObject);
}

void HttpRequest__SendAsync_IMPL_44299(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync_44299_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SendAsync","()V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsync could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync_44299_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync_44299_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__SendAsyncBuf(HttpRequest* __this, ::uObject* arg0)
{
    HttpRequest__SendAsyncBuf_IMPL_44300(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__SendAsyncBuf_IMPL_44300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncBuf_44300_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SendAsyncBuf","(Ljava/nio/ByteBuffer;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsyncBuf could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncBuf_44300_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncBuf_44300_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__SendAsyncStr(HttpRequest* __this, ::uObject* arg0)
{
    HttpRequest__SendAsyncStr_IMPL_44301(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__SendAsyncStr_IMPL_44301(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncStr_44301_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SendAsyncStr","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsyncStr could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncStr_44301_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncStr_44301_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__SetCaching(HttpRequest* __this, bool arg0)
{
    HttpRequest__SetCaching_IMPL_44295(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__SetCaching_IMPL_44295(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetCaching_44295_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SetCaching","(Z)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetCaching could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetCaching_44295_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetCaching_44295_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__SetHeader(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1)
{
    HttpRequest__SetHeader_IMPL_44293(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void HttpRequest__SetHeader_IMPL_44293(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetHeader_44293_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SetHeader","(Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetHeader could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetHeader_44293_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetHeader_44293_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__SetResponseType(HttpRequest* __this, int arg0)
{
    HttpRequest__SetResponseType_IMPL_44292(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__SetResponseType_IMPL_44292(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetResponseType_44292_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SetResponseType","(I)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetResponseType could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetResponseType_44292_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetResponseType_44292_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__SetTimeout(HttpRequest* __this, int arg0)
{
    HttpRequest__SetTimeout_IMPL_44294(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__SetTimeout_IMPL_44294(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetTimeout_44294_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SetTimeout","(I)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetTimeout could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetTimeout_44294_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetTimeout_44294_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__StartDownload(HttpRequest* __this, ::uObject* arg0)
{
    HttpRequest__StartDownload_IMPL_44304(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__StartDownload_IMPL_44304(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__StartDownload_44304_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"StartDownload","(Ljava/io/InputStream;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.StartDownload could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__StartDownload_44304_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__StartDownload_44304_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HttpRequest__UploadDone(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1, int arg2, ::uObject* arg3)
{
    HttpRequest__UploadDone_IMPL_44302(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void HttpRequest__UploadDone_IMPL_44302(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__UploadDone_44302_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"UploadDone","(Ljava/io/BufferedInputStream;Ljava/util/HashMap;ILjava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.UploadDone could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__UploadDone_44302_ID, _obArg2, _obArg3, ((jint)arg4_), _obArg5);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__UploadDone_44302_ID, _obArg2, _obArg3, ((jint)arg4_), _obArg5);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

}}}}}
