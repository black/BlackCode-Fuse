#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Types.Arrays.h>
#include <app/Android.Base.Types.ByteBuffer.h>
#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.List__byte__.h>
#include <app/Uno.Collections.List1_Enumerator__byte__.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.Http.HttpResponseType.h>
#include <app/Uno.Net.Http.Implementation.AndroidHttpRequest.h>
#include <app/Uno.Net.Http.Implementation.HttpMessageHandlerRequestCallbacks.h>
#include <app/Uno.Net.Http.Implementation.IHttpRequest.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {
namespace Implementation {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\Implementation\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidHttpRequest__uType* AndroidHttpRequest__typeof()
{
    static ::uStaticStrong<AndroidHttpRequest__uType*> type;
    if (type != NULL) return type;

    type = (AndroidHttpRequest__uType*)::uAllocClassType(sizeof(AndroidHttpRequest__uType), "Uno.Net.Http.Implementation.AndroidHttpRequest", false, 3, 3, 0);

    type->SetBaseType(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__typeof());
    type->__fp_OnAborted = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnAborted;
    type->__fp_OnDataReceived = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*, ::uObject*, int))AndroidHttpRequest__OnDataReceived;
    type->__fp_OnDone = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnDone;
    type->__fp_OnError = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*, ::uObject*))AndroidHttpRequest__OnError;
    type->__fp_OnHeadersReceived = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnHeadersReceived;
    type->__fp_OnProgress = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*, int, int, bool))AndroidHttpRequest__OnProgress;
    type->__fp_OnTimeout = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnTimeout;
    type->__interface_2.__fp_EnableCache = (void(*)(void*, bool))AndroidHttpRequest__EnableCache;
    type->__interface_2.__fp_SetHeader = (void(*)(void*, ::uString*, ::uString*))AndroidHttpRequest__SetHeader_1;
    type->__interface_2.__fp_SetTimeout = (void(*)(void*, int))::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetTimeout;
    type->__interface_2.__fp_SendAsync_1 = (void(*)(void*, ::uArray*))AndroidHttpRequest__SendAsync_1;
    type->__interface_2.__fp_SendAsync_2 = (void(*)(void*, ::uString*))AndroidHttpRequest__SendAsync_2;
    type->__interface_2.__fp_SendAsync = (void(*)(void*))::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync;
    type->__interface_2.__fp_Abort = (void(*)(void*))::app::Android::com::fuse::ExperimentalHttp::HttpRequest__Abort;
    type->__interface_2.__fp_GetResponseStatus = (int(*)(void*))::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus;
    type->__interface_2.__fp_GetResponseHeader = (::uString*(*)(void*, ::uString*))AndroidHttpRequest__GetResponseHeader_1;
    type->__interface_2.__fp_GetResponseHeaders = (::uString*(*)(void*))AndroidHttpRequest__GetResponseHeaders_1;
    type->__interface_2.__fp_GetResponseContentString = (::uString*(*)(void*))AndroidHttpRequest__GetResponseContentString;
    type->__interface_2.__fp_GetResponseContentByteArray = (::uArray*(*)(void*))AndroidHttpRequest__GetResponseContentByteArray;
    type->__interface_1.__fp_Dispose = (void(*)(void*))AndroidHttpRequest__Dispose_1;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AndroidHttpRequest__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AndroidHttpRequest__uType, __interface_1),
        ::app::Uno::Net::Http::Implementation::IHttpRequest__typeof(), offsetof(AndroidHttpRequest__uType, __interface_2));

    type->SetStrongRefs(
        "_request", offsetof(AndroidHttpRequest, _request),
        "_responseData", offsetof(AndroidHttpRequest, _responseData),
        "_result", offsetof(AndroidHttpRequest, _result));

    type->SetFields(4,
        ::uNewField("_request", NULL, offsetof(AndroidHttpRequest, _request), ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()),
        ::uNewField("_responseData", NULL, offsetof(AndroidHttpRequest, _responseData), ::app::Uno::Collections::List__byte____typeof()),
        ::uNewField("_responseLength", NULL, offsetof(AndroidHttpRequest, _responseLength), ::app::Uno::Int__typeof()),
        ::uNewField("_result", NULL, offsetof(AndroidHttpRequest, _result), ::uGetArrayType(::app::Uno::Byte__typeof())));

    type->SetFunctions(10,
        ::uNewFunctionVoid("Dispose", AndroidHttpRequest__Dispose_1, 0, false),
        ::uNewFunctionVoid("EnableCache", AndroidHttpRequest__EnableCache, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetResponseContentByteArray", AndroidHttpRequest__GetResponseContentByteArray, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("GetResponseContentString", AndroidHttpRequest__GetResponseContentString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetResponseHeader", AndroidHttpRequest__GetResponseHeader_1, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetResponseHeaders", AndroidHttpRequest__GetResponseHeaders_1, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SendAsync", AndroidHttpRequest__SendAsync_1, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunctionVoid("SendAsync", AndroidHttpRequest__SendAsync_2, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetHeader", AndroidHttpRequest__SetHeader_1, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetResponseType", AndroidHttpRequest__SetResponseType_1, 0, false, ::app::Uno::Net::Http::HttpResponseType__typeof()));

    ::uRegisterType(type);
    return type;
}

void AndroidHttpRequest___ObjInit_4(AndroidHttpRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url)
{
    ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___ObjInit_2(__this, (::uObject*)::app::Android::Base::JNI__GetWrappedActivityObject(NULL), (::uObject*)::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava_1(NULL, url), false, false), (::uObject*)::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava_1(NULL, method), false, false));
    __this->_request = request;
    __this->_responseData = ::app::Uno::Collections::List__byte____New_1(NULL);
    __this->_responseLength = 0;
    __this->_result = ::uNewArray(::app::Uno::Byte__typeof(), 0);
}

void AndroidHttpRequest__Dispose_1(AndroidHttpRequest* __this)
{
}

void AndroidHttpRequest__EnableCache(AndroidHttpRequest* __this, bool enableCache)
{
    __this->SetCaching(enableCache);
}

::uArray* AndroidHttpRequest__GetResponseContentByteArray(AndroidHttpRequest* __this)
{
    return __this->_result;
}

::uString* AndroidHttpRequest__GetResponseContentString(AndroidHttpRequest* __this)
{
    return ::app::Android::Base::Types::String__JavaToUno(NULL, __this->GetResponseString());
}

::uString* AndroidHttpRequest__GetResponseHeader_1(AndroidHttpRequest* __this, ::uString* name)
{
    ::app::Android::Base::Wrappers::JWrapper* jName = ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava_1(NULL, name), false, false);
    return ::app::Android::Base::Types::String__JavaToUno(NULL, __this->GetResponseHeader((::uObject*)jName));
}

::uString* AndroidHttpRequest__GetResponseHeaders_1(AndroidHttpRequest* __this)
{
    return ::app::Android::Base::Types::String__JavaToUno(NULL, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders(__this));
}

AndroidHttpRequest* AndroidHttpRequest__New_3(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url)
{
    AndroidHttpRequest* inst = (AndroidHttpRequest*)::uAllocObject(sizeof(AndroidHttpRequest), AndroidHttpRequest__typeof());
    inst->_ObjInit_4(request, method, url);
    return inst;
}

void AndroidHttpRequest__OnAborted(AndroidHttpRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnAborted();
}

void AndroidHttpRequest__OnDataReceived(AndroidHttpRequest* __this, ::uObject* arg0, int arg1)
{
    if (arg1 == -1)
    {
        if (__this->_responseLength == 0)
        {
            return;
        }

        __this->_result = ::uNewArray(::app::Uno::Byte__typeof(), __this->_responseLength);
        int pos = 0;

        for (::app::Uno::Collections::List1_Enumerator__byte__ enum_123 = ::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_responseData)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uArray* chunk = enum_123.Current();
            int chunkLength = ::uPtr< ::uArray*>(chunk)->Length();
            ::app::Uno::Array__Copy__byte_1(NULL, chunk, 0, __this->_result, pos, chunkLength);
            pos = pos + chunkLength;
        }
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_responseData)->Add(::app::Android::Base::Types::Arrays__JavaToUnoByteArray(NULL, ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(::uPtr< ::uObject*>(arg0)), (::uLong)arg1));
        __this->_responseLength = __this->_responseLength + arg1;
    }
}

void AndroidHttpRequest__OnDone(AndroidHttpRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnDone();
}

void AndroidHttpRequest__OnError(AndroidHttpRequest* __this, ::uObject* arg0)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnError(::app::Android::Base::Types::String__JavaToUno(NULL, arg0));
}

void AndroidHttpRequest__OnHeadersReceived(AndroidHttpRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnHeadersReceived();
}

void AndroidHttpRequest__OnProgress(AndroidHttpRequest* __this, int current, int total, bool hasTotal)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnProgress(current, total, hasTotal);
}

void AndroidHttpRequest__OnTimeout(AndroidHttpRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnTimeout();
}

void AndroidHttpRequest__SendAsync_1(AndroidHttpRequest* __this, ::uArray* data)
{
    ::app::Android::Base::Wrappers::JWrapper* tmp = ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::ByteBuffer__NewDirectByteBuffer(NULL, data), false, false);
    __this->SendAsyncBuf((::uObject*)tmp);
}

void AndroidHttpRequest__SendAsync_2(AndroidHttpRequest* __this, ::uString* data)
{
    ::app::Android::Base::Wrappers::JWrapper* jData = ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava_1(NULL, data), false, false);
    __this->SendAsyncStr((::uObject*)jData);
}

void AndroidHttpRequest__SetHeader_1(AndroidHttpRequest* __this, ::uString* name, ::uString* value)
{
    ::app::Android::Base::Wrappers::JWrapper* jName = ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava_1(NULL, name), false, false);
    ::app::Android::Base::Wrappers::JWrapper* jValue = ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava_1(NULL, value), false, false);
    __this->SetHeader((::uObject*)jName, (::uObject*)jValue);
}

void AndroidHttpRequest__SetResponseType_1(AndroidHttpRequest* __this, int responseType)
{
    __this->SetResponseType(responseType);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\Implementation\Cil\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandlerRequestCallbacks__uType* HttpMessageHandlerRequestCallbacks__typeof()
{
    static ::uStaticStrong<HttpMessageHandlerRequestCallbacks__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandlerRequestCallbacks__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequestCallbacks__uType), "Uno.Net.Http.Implementation.HttpMessageHandlerRequestCallbacks", false, 0, 1, 0);

    type->SetStrongRefs(
        "_request", offsetof(HttpMessageHandlerRequestCallbacks, _request));

    type->SetFields(1,
        ::uNewField("_request", NULL, offsetof(HttpMessageHandlerRequestCallbacks, _request), ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()));

    type->SetFunctions(7,
        ::uNewFunction(".ctor", HttpMessageHandlerRequestCallbacks__New_1, 0, true, HttpMessageHandlerRequestCallbacks__typeof(), ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("OnAborted", HttpMessageHandlerRequestCallbacks__OnAborted, 0, false),
        ::uNewFunctionVoid("OnDone", HttpMessageHandlerRequestCallbacks__OnDone, 0, false),
        ::uNewFunctionVoid("OnError", HttpMessageHandlerRequestCallbacks__OnError, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("OnHeadersReceived", HttpMessageHandlerRequestCallbacks__OnHeadersReceived, 0, false),
        ::uNewFunctionVoid("OnProgress", HttpMessageHandlerRequestCallbacks__OnProgress, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnTimeout", HttpMessageHandlerRequestCallbacks__OnTimeout, 0, false));

    ::uRegisterType(type);
    return type;
}

void HttpMessageHandlerRequestCallbacks___ObjInit(HttpMessageHandlerRequestCallbacks* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->_request = request;
}

HttpMessageHandlerRequestCallbacks* HttpMessageHandlerRequestCallbacks__New_1(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    HttpMessageHandlerRequestCallbacks* inst = (HttpMessageHandlerRequestCallbacks*)::uAllocObject(sizeof(HttpMessageHandlerRequestCallbacks), HttpMessageHandlerRequestCallbacks__typeof());
    inst->_ObjInit(request);
    return inst;
}

void HttpMessageHandlerRequestCallbacks__OnAborted(HttpMessageHandlerRequestCallbacks* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnAborted();
}

void HttpMessageHandlerRequestCallbacks__OnDone(HttpMessageHandlerRequestCallbacks* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnDone();
}

void HttpMessageHandlerRequestCallbacks__OnError(HttpMessageHandlerRequestCallbacks* __this, ::uString* errorMessage)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnError(errorMessage);
}

void HttpMessageHandlerRequestCallbacks__OnHeadersReceived(HttpMessageHandlerRequestCallbacks* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnHeadersReceived();
}

void HttpMessageHandlerRequestCallbacks__OnProgress(HttpMessageHandlerRequestCallbacks* __this, int current, int total, bool hasTotal)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnProgress(current, total, hasTotal);
}

void HttpMessageHandlerRequestCallbacks__OnTimeout(HttpMessageHandlerRequestCallbacks* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnTimeout();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IHttpRequest__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Net.Http.Implementation.IHttpRequest");

    ::uRegisterType(type);
    return type;
}

}}}}}
