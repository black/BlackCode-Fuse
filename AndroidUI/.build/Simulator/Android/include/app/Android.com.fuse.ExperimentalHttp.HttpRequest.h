// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\Implementation\Android\ExperimentalHttp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_COM_FUSE_EXPERIMENTAL_HTTP_HTTP_REQUEST_H__
#define __APP_ANDROID_COM_FUSE_EXPERIMENTAL_HTTP_HTTP_REQUEST_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace com {
namespace fuse {
namespace ExperimentalHttp {

struct HttpRequest;

extern jclass HttpRequest___javaClass_1;
extern jclass HttpRequest___javaProxyClass_1;
extern jmethodID HttpRequest__Abort_44305_ID;
extern jmethodID HttpRequest__CacheClose_44281_ID;
extern jmethodID HttpRequest__CacheDelete_44282_ID;
extern jmethodID HttpRequest__CacheFlush_44283_ID;
extern jmethodID HttpRequest__CacheRenew_44280_ID;
extern jmethodID HttpRequest__CacheResponseString_44296_ID;
extern jmethodID HttpRequest__DownloadDone_44303_ID;
extern jmethodID HttpRequest__GetResponseHeader_44307_ID;
extern jmethodID HttpRequest__GetResponseHeaders_44308_ID;
extern jmethodID HttpRequest__GetResponseStatus_44306_ID;
extern jmethodID HttpRequest__GetResponseString_44297_ID;
extern jmethodID HttpRequest__HttpRequest_44284_ID_c;
extern jmethodID HttpRequest__HttpRequest_44284_ID_c_prox;
extern jfieldID HttpRequest__HttpResponseTypeByteArray_44278_ID;
extern jfieldID HttpRequest__HttpResponseTypeNone_44276_ID;
extern jfieldID HttpRequest__HttpResponseTypeString_44277_ID;
extern jmethodID HttpRequest__InstallCache_44279_ID;
extern jmethodID HttpRequest__SendAsync_44299_ID;
extern jmethodID HttpRequest__SendAsyncBuf_44300_ID;
extern jmethodID HttpRequest__SendAsyncStr_44301_ID;
extern jmethodID HttpRequest__SetCaching_44295_ID;
extern jmethodID HttpRequest__SetHeader_44293_ID;
extern jmethodID HttpRequest__SetResponseType_44292_ID;
extern jmethodID HttpRequest__SetTimeout_44294_ID;
extern jmethodID HttpRequest__StartDownload_44304_ID;
extern jmethodID HttpRequest__UploadDone_44302_ID;

struct HttpRequest__uType : ::app::Android::Base::Wrappers::JWrapper__uType
{
    void(*__fp_OnAborted)(HttpRequest*);
    void(*__fp_OnDataReceived)(HttpRequest*, ::uObject*, int);
    void(*__fp_OnDone)(HttpRequest*);
    void(*__fp_OnError)(HttpRequest*, ::uObject*);
    void(*__fp_OnHeadersReceived)(HttpRequest*);
    void(*__fp_OnProgress)(HttpRequest*, int, int, bool);
    void(*__fp_OnTimeout)(HttpRequest*);
};

HttpRequest__uType* HttpRequest__typeof();

void HttpRequest___Init_1(::uStatic* __this);
void HttpRequest___InitProxy_1(::uStatic* __this);
bool HttpRequest___IsThisType_1(::uStatic* __this, ::uObject* obj_);
void HttpRequest___ObjInit_2(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1, ::uObject* arg2);
void HttpRequest___ObjInit_3(HttpRequest* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void HttpRequest__Abort(HttpRequest* __this);
void HttpRequest__Abort_IMPL_44305(::uStatic* __this, bool arg0_, jobject arg1_);
void HttpRequest__CacheClose(::uStatic* __this);
void HttpRequest__CacheClose_IMPL_44281(::uStatic* __this);
void HttpRequest__CacheDelete(::uStatic* __this);
void HttpRequest__CacheDelete_IMPL_44282(::uStatic* __this);
void HttpRequest__CacheFlush(::uStatic* __this);
void HttpRequest__CacheFlush_IMPL_44283(::uStatic* __this);
void HttpRequest__CacheRenew(::uStatic* __this, ::uObject* arg0);
void HttpRequest__CacheRenew_IMPL_44280(::uStatic* __this, ::uObject* arg0_);
void HttpRequest__CacheResponseString(HttpRequest* __this, ::uObject* arg0);
void HttpRequest__CacheResponseString_IMPL_44296(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HttpRequest__DownloadDone(HttpRequest* __this);
void HttpRequest__DownloadDone_IMPL_44303(::uStatic* __this, bool arg0_, jobject arg1_);
int HttpRequest__get_HttpResponseTypeByteArray(::uStatic* __this);
int HttpRequest__get_HttpResponseTypeNone(::uStatic* __this);
int HttpRequest__get_HttpResponseTypeString(::uStatic* __this);
::uObject* HttpRequest__GetResponseHeader(HttpRequest* __this, ::uObject* arg0);
::uObject* HttpRequest__GetResponseHeader_IMPL_44307(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* HttpRequest__GetResponseHeaders(HttpRequest* __this);
::uObject* HttpRequest__GetResponseHeaders_IMPL_44308(::uStatic* __this, bool arg0_, jobject arg1_);
int HttpRequest__GetResponseStatus(HttpRequest* __this);
int HttpRequest__GetResponseStatus_IMPL_44306(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* HttpRequest__GetResponseString(HttpRequest* __this);
::uObject* HttpRequest__GetResponseString_IMPL_44297(::uStatic* __this, bool arg0_, jobject arg1_);
jobject HttpRequest__HttpRequest_IMPL_44284(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_, ::uObject* arg2_, ::uObject* arg3_);
int HttpRequest__HttpResponseTypeByteArray_GET_44278(::uStatic* __this);
int HttpRequest__HttpResponseTypeNone_GET_44276(::uStatic* __this);
int HttpRequest__HttpResponseTypeString_GET_44277(::uStatic* __this);
bool HttpRequest__InstallCache(::uStatic* __this, ::uObject* arg0, ::uLong arg1);
bool HttpRequest__InstallCache_IMPL_44279(::uStatic* __this, ::uObject* arg0_, ::uLong arg1_);
void HttpRequest__SendAsync(HttpRequest* __this);
void HttpRequest__SendAsync_IMPL_44299(::uStatic* __this, bool arg0_, jobject arg1_);
void HttpRequest__SendAsyncBuf(HttpRequest* __this, ::uObject* arg0);
void HttpRequest__SendAsyncBuf_IMPL_44300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HttpRequest__SendAsyncStr(HttpRequest* __this, ::uObject* arg0);
void HttpRequest__SendAsyncStr_IMPL_44301(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HttpRequest__SetCaching(HttpRequest* __this, bool arg0);
void HttpRequest__SetCaching_IMPL_44295(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void HttpRequest__SetHeader(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1);
void HttpRequest__SetHeader_IMPL_44293(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void HttpRequest__SetResponseType(HttpRequest* __this, int arg0);
void HttpRequest__SetResponseType_IMPL_44292(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void HttpRequest__SetTimeout(HttpRequest* __this, int arg0);
void HttpRequest__SetTimeout_IMPL_44294(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void HttpRequest__StartDownload(HttpRequest* __this, ::uObject* arg0);
void HttpRequest__StartDownload_IMPL_44304(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HttpRequest__UploadDone(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1, int arg2, ::uObject* arg3);
void HttpRequest__UploadDone_IMPL_44302(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_, ::uObject* arg5_);

struct HttpRequest : ::app::Android::Base::Wrappers::JWrapper
{
    void _ObjInit_2(::uObject* arg0, ::uObject* arg1, ::uObject* arg2) { HttpRequest___ObjInit_2(this, arg0, arg1, arg2); }
    void _ObjInit_3(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { HttpRequest___ObjInit_3(this, obj, utype, hasFallbackClass, resolveType); }
    void Abort() { HttpRequest__Abort(this); }
    void CacheResponseString(::uObject* arg0) { HttpRequest__CacheResponseString(this, arg0); }
    void DownloadDone() { HttpRequest__DownloadDone(this); }
    ::uObject* GetResponseHeader(::uObject* arg0) { return HttpRequest__GetResponseHeader(this, arg0); }
    ::uObject* GetResponseHeaders() { return HttpRequest__GetResponseHeaders(this); }
    int GetResponseStatus() { return HttpRequest__GetResponseStatus(this); }
    ::uObject* GetResponseString() { return HttpRequest__GetResponseString(this); }
    void OnAborted() { (((HttpRequest__uType*)this->__obj_type)->__fp_OnAborted)(this); }
    void OnDataReceived(::uObject* arg0, int arg1) { (((HttpRequest__uType*)this->__obj_type)->__fp_OnDataReceived)(this, arg0, arg1); }
    void OnDone() { (((HttpRequest__uType*)this->__obj_type)->__fp_OnDone)(this); }
    void OnError(::uObject* arg0) { (((HttpRequest__uType*)this->__obj_type)->__fp_OnError)(this, arg0); }
    void OnHeadersReceived() { (((HttpRequest__uType*)this->__obj_type)->__fp_OnHeadersReceived)(this); }
    void OnProgress(int arg0, int arg1, bool arg2) { (((HttpRequest__uType*)this->__obj_type)->__fp_OnProgress)(this, arg0, arg1, arg2); }
    void OnTimeout() { (((HttpRequest__uType*)this->__obj_type)->__fp_OnTimeout)(this); }
    void SendAsync() { HttpRequest__SendAsync(this); }
    void SendAsyncBuf(::uObject* arg0) { HttpRequest__SendAsyncBuf(this, arg0); }
    void SendAsyncStr(::uObject* arg0) { HttpRequest__SendAsyncStr(this, arg0); }
    void SetCaching(bool arg0) { HttpRequest__SetCaching(this, arg0); }
    void SetHeader(::uObject* arg0, ::uObject* arg1) { HttpRequest__SetHeader(this, arg0, arg1); }
    void SetResponseType(int arg0) { HttpRequest__SetResponseType(this, arg0); }
    void SetTimeout(int arg0) { HttpRequest__SetTimeout(this, arg0); }
    void StartDownload(::uObject* arg0) { HttpRequest__StartDownload(this, arg0); }
    void UploadDone(::uObject* arg0, ::uObject* arg1, int arg2, ::uObject* arg3) { HttpRequest__UploadDone(this, arg0, arg1, arg2, arg3); }
};

}}}}}


#endif
