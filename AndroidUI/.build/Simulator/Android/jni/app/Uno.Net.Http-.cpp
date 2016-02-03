#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__int__int__bool.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__string.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__int__string.h>
#include <app/Uno.Collections.Dictionary__string__int.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.IDictionary__int__string.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Collections.List__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List1_Enumerator__string.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.GC.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.Http.AbsolutePathParser.h>
#include <app/Uno.Net.Http.HashParser.h>
#include <app/Uno.Net.Http.HostInfo.h>
#include <app/Uno.Net.Http.HostInfoParser.h>
#include <app/Uno.Net.Http.HttpDefaultDispatcher.h>
#include <app/Uno.Net.Http.HttpMessageCache.h>
#include <app/Uno.Net.Http.HttpMessageHandler.h>
#include <app/Uno.Net.Http.HttpMessageHandler_StaticData.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest_DispatchClosure.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest_DispatchClosure__string.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest_ProgressClosure.h>
#include <app/Uno.Net.Http.HttpRequestState.h>
#include <app/Uno.Net.Http.HttpResponseType.h>
#include <app/Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <app/Uno.Net.Http.Implementation.AndroidHttpRequest.h>
#include <app/Uno.Net.Http.Implementation.IHttpRequest.h>
#include <app/Uno.Net.Http.InvalidResponseTypeException.h>
#include <app/Uno.Net.Http.InvalidStateException.h>
#include <app/Uno.Net.Http.QueryParser.h>
#include <app/Uno.Net.Http.SchemeParser.h>
#include <app/Uno.Net.Http.SchemeParserResult.h>
#include <app/Uno.Net.Http.Uri.h>
#include <app/Uno.Net.Http.UriFormatException.h>
#include <app/Uno.Net.Http.UriScheme.h>
#include <app/Uno.Net.Http.UriSchemeType.h>
#include <app/Uno.Net.Http.UserInfoParser.h>
#include <app/Uno.NotSupportedException.h>
#include <app/Uno.Object.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.ApplicationState.h>
#include <app/Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.IDispatcher.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AbsolutePathParser__uType* AbsolutePathParser__typeof()
{
    static ::uStaticStrong<AbsolutePathParser__uType*> type;
    if (type != NULL) return type;

    type = (AbsolutePathParser__uType*)::uAllocClassType(sizeof(AbsolutePathParser__uType), "Uno.Net.Http.AbsolutePathParser", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction(".ctor", AbsolutePathParser__New_1, 0, true, AbsolutePathParser__typeof()),
        ::uNewFunction("Parse", AbsolutePathParser__Parse, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void AbsolutePathParser___ObjInit(AbsolutePathParser* __this)
{
}

AbsolutePathParser* AbsolutePathParser__New_1(::uStatic* __this)
{
    AbsolutePathParser* inst = (AbsolutePathParser*)::uAllocObject(sizeof(AbsolutePathParser), AbsolutePathParser__typeof());
    inst->_ObjInit();
    return inst;
}

::uString* AbsolutePathParser__Parse(::uStatic* __this, ::uString* uriString, int idx, int endIdx, int* startPartIdx)
{
    int start = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(uriString), ::uGetConstString("/"), idx);

    if ((start < 0) || (start >= endIdx))
    {
        *startPartIdx = endIdx;
        return ::uGetConstString("/");
    }

    *startPartIdx = start;
    return ::app::Uno::String::Substring_1(uriString, start, endIdx - start);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashParser__uType* HashParser__typeof()
{
    static ::uStaticStrong<HashParser__uType*> type;
    if (type != NULL) return type;

    type = (HashParser__uType*)::uAllocClassType(sizeof(HashParser__uType), "Uno.Net.Http.HashParser", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction(".ctor", HashParser__New_1, 0, true, HashParser__typeof()),
        ::uNewFunction("Parse", HashParser__Parse, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void HashParser___ObjInit(HashParser* __this)
{
}

HashParser* HashParser__New_1(::uStatic* __this)
{
    HashParser* inst = (HashParser*)::uAllocObject(sizeof(HashParser), HashParser__typeof());
    inst->_ObjInit();
    return inst;
}

::uString* HashParser__Parse(::uStatic* __this, ::uString* uriString, int idx, int* startPartIdx)
{
    if (idx >= ::uPtr< ::uString*>(uriString)->Length())
    {
        return ::app::Uno::String__Empty;
    }

    int start = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(uriString), '#', idx);

    if (start >= 0)
    {
        *startPartIdx = start;
        return ::app::Uno::String::Substring(::uPtr< ::uString*>(uriString), *startPartIdx);
    }

    return ::app::Uno::String__Empty;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HostInfo__uType* HostInfo__typeof()
{
    static ::uStaticStrong<HostInfo__uType*> type;
    if (type != NULL) return type;

    type = (HostInfo__uType*)::uAllocClassType(sizeof(HostInfo__uType), "Uno.Net.Http.HostInfo", false, 0, 2, 0);

    type->SetStrongRefs(
        "_Authority", offsetof(HostInfo, _Authority),
        "_Host", offsetof(HostInfo, _Host));

    type->SetFunctions(7,
        ::uNewFunction("get_Authority", HostInfo__get_Authority, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Host", HostInfo__get_Host, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Port", HostInfo__get_Port, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", HostInfo__New_1, 0, true, HostInfo__typeof()),
        ::uNewFunctionVoid("set_Authority", HostInfo__set_Authority, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Host", HostInfo__set_Host, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Port", HostInfo__set_Port, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void HostInfo___ObjInit(HostInfo* __this)
{
}

::uString* HostInfo__get_Authority(HostInfo* __this)
{
    return __this->_Authority;
}

::uString* HostInfo__get_Host(HostInfo* __this)
{
    return __this->_Host;
}

int HostInfo__get_Port(HostInfo* __this)
{
    return __this->_Port;
}

HostInfo* HostInfo__New_1(::uStatic* __this)
{
    HostInfo* inst = (HostInfo*)::uAllocObject(sizeof(HostInfo), HostInfo__typeof());
    inst->_ObjInit();
    return inst;
}

void HostInfo__set_Authority(HostInfo* __this, ::uString* value)
{
    __this->_Authority = value;
}

void HostInfo__set_Host(HostInfo* __this, ::uString* value)
{
    __this->_Host = value;
}

void HostInfo__set_Port(HostInfo* __this, int value)
{
    __this->_Port = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__string*> HostInfoParser___invalidChars;

HostInfoParser__uType* HostInfoParser__typeof()
{
    static ::uStaticStrong<HostInfoParser__uType*> type;
    if (type != NULL) return type;

    type = (HostInfoParser__uType*)::uAllocClassType(sizeof(HostInfoParser__uType), "Uno.Net.Http.HostInfoParser", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("_invalidChars", &HostInfoParser___invalidChars, 0, ::app::Uno::Collections::List__string__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("ExtractPort", HostInfoParser__ExtractPort, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetDafaultPort", HostInfoParser__GetDafaultPort, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("IsHostValid", HostInfoParser__IsHostValid, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", HostInfoParser__New_1, 0, true, HostInfoParser__typeof()),
        ::uNewFunction("Parse", HostInfoParser__Parse, 0, true, ::app::Uno::Net::Http::HostInfo__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void HostInfoParser___ObjInit(HostInfoParser* __this)
{
}

void HostInfoParser___TypeInit(::uStatic* __this)
{
    ::app::Uno::Collections::List__string* collection_123;
    HostInfoParser___invalidChars = (collection_123 = ::app::Uno::Collections::List__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("..")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(",")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("\\")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("|")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("<")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(">")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("'")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(";")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(":")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("[")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("]")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("{")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("}")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("(")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(")")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("=")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("+")), collection_123);
}

int HostInfoParser__ExtractPort(::uStatic* __this, ::uString* portString, int defaultPort)
{
    int port = 0;

    if (::app::Uno::String__IsNullOrEmpty(NULL, portString))
    {
        port = defaultPort;
    }
    else
    {
        if (!::app::Uno::Int__TryParse(NULL, portString, &port))
        {
            U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The port number specified in uriString is not valid or cannot be parsed.")));
        }
    }

    return port;
}

int HostInfoParser__GetDafaultPort(::uStatic* __this, ::uString* scheme)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(::app::Uno::Net::Http::UriScheme__get_DefaultPorts(NULL))->Item(::app::Uno::String::ToLower(::uPtr< ::uString*>(scheme)));
}

bool HostInfoParser__IsHostValid(::uStatic* __this, ::uString* userInfo)
{
    for (::app::Uno::Collections::List1_Enumerator__string enum_125 = ::uPtr< ::app::Uno::Collections::List__string*>(HostInfoParser___invalidChars)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::uString* chars = enum_125.Current();

        if (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(userInfo), chars, 0) >= 0)
        {
            return false;
        }
    }

    return !::app::Uno::String::StartsWith(::uPtr< ::uString*>(userInfo), ::uGetConstString("."));
}

HostInfoParser* HostInfoParser__New_1(::uStatic* __this)
{
    HostInfoParser* inst = (HostInfoParser*)::uAllocObject(sizeof(HostInfoParser), HostInfoParser__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Uno::Net::Http::HostInfo* HostInfoParser__Parse(::uStatic* __this, ::uString* uriString, ::uString* scheme, int endIdx, int* idx)
{
    ::app::Uno::Net::Http::HostInfo* collection_124;

    if (*idx >= endIdx)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("There is an invalid character sequence in uriString.")));
    }

    int end = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(uriString), ::uGetConstString("/"), *idx);

    if ((end < 0) || (end >= endIdx))
    {
        end = endIdx;
    }

    ::uString* hostInfoString = ::app::Uno::String::Substring_1(uriString, *idx, end - *idx);
    *idx = end;

    if (::app::Uno::String__IsNullOrEmpty(NULL, hostInfoString))
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The host specified in uriString is not valid or cannot be parsed.")));
    }

    int delim = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(hostInfoString), ::uGetConstString(":"), 0);
    collection_124 = ::app::Uno::Net::Http::HostInfo__New_1(NULL);
    ::uPtr< ::app::Uno::Net::Http::HostInfo*>(collection_124)->Authority(hostInfoString);
    ::app::Uno::Net::Http::HostInfo* hostInfo = collection_124;

    if (delim > 0)
    {
        ::uString* portString = ::app::Uno::String::Substring(::uPtr< ::uString*>(hostInfoString), delim + 1);
        ::uPtr< ::app::Uno::Net::Http::HostInfo*>(hostInfo)->Host(::app::Uno::String::Substring_1(hostInfoString, 0, delim));
        hostInfo->Port(HostInfoParser__ExtractPort(NULL, portString, HostInfoParser__GetDafaultPort(NULL, scheme)));
    }
    else
    {
        ::uPtr< ::app::Uno::Net::Http::HostInfo*>(hostInfo)->Host(hostInfoString);
        hostInfo->Port(HostInfoParser__GetDafaultPort(NULL, scheme));
    }

    if (!HostInfoParser__IsHostValid(NULL, hostInfo->Host()))
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The host specified in uriString is not valid or cannot be parsed.")));
    }

    return hostInfo;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpDefaultDispatcher__uType* HttpDefaultDispatcher__typeof()
{
    static ::uStaticStrong<HttpDefaultDispatcher__uType*> type;
    if (type != NULL) return type;

    type = (HttpDefaultDispatcher__uType*)::uAllocClassType(sizeof(HttpDefaultDispatcher__uType), "Uno.Net.Http.HttpDefaultDispatcher", false, 1, 0, 0);

    type->__interface_0.__fp_Invoke = (void(*)(void*, ::uDelegate*))HttpDefaultDispatcher__Invoke;

    type->SetInterfaces(
        ::app::Uno::Threading::IDispatcher__typeof(), offsetof(HttpDefaultDispatcher__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Invoke", HttpDefaultDispatcher__Invoke, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction(".ctor", HttpDefaultDispatcher__New_1, 0, true, HttpDefaultDispatcher__typeof()));

    ::uRegisterType(type);
    return type;
}

void HttpDefaultDispatcher___ObjInit(HttpDefaultDispatcher* __this)
{
}

void HttpDefaultDispatcher__Invoke(HttpDefaultDispatcher* __this, ::uDelegate* action)
{
    ::uPtr< ::uDelegate*>(action)->InvokeVoid();
}

HttpDefaultDispatcher* HttpDefaultDispatcher__New_1(::uStatic* __this)
{
    HttpDefaultDispatcher* inst = (HttpDefaultDispatcher*)::uAllocObject(sizeof(HttpDefaultDispatcher), HttpDefaultDispatcher__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

bool HttpMessageCache___isCacheDisabled;
bool HttpMessageCache___isInitialized;
::uLong HttpMessageCache___maxCacheSizeInBytes;

HttpMessageCache__uType* HttpMessageCache__typeof()
{
    static ::uStaticStrong<HttpMessageCache__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageCache__uType*)::uAllocClassType(sizeof(HttpMessageCache__uType), "Uno.Net.Http.HttpMessageCache");

    type->SetFields(3,
        ::uNewField("_isCacheDisabled", &HttpMessageCache___isCacheDisabled, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_isInitialized", &HttpMessageCache___isInitialized, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_maxCacheSizeInBytes", &HttpMessageCache___maxCacheSizeInBytes, 0, ::app::Uno::Long__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("Delete", HttpMessageCache__Delete, 0, true),
        ::uNewFunction("get_IsCacheEnabled", HttpMessageCache__get_IsCacheEnabled, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MaxCacheSizeInBytes", HttpMessageCache__get_MaxCacheSizeInBytes, 0, true, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("Init", HttpMessageCache__Init, 0, true),
        ::uNewFunctionVoid("OnApplicationStarted", HttpMessageCache__OnApplicationStarted, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("set_IsCacheEnabled", HttpMessageCache__set_IsCacheEnabled, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_MaxCacheSizeInBytes", HttpMessageCache__set_MaxCacheSizeInBytes, 0, true, ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void HttpMessageCache___TypeInit(::uStatic* __this)
{
    ::app::Uno::Platform2::Application__add_Started(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)HttpMessageCache__OnApplicationStarted));
}

void HttpMessageCache__Delete(::uStatic* __this)
{
    ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__CacheDelete(NULL);
}

bool HttpMessageCache__get_IsCacheEnabled(::uStatic* __this)
{
    return !HttpMessageCache___isCacheDisabled;
}

::uLong HttpMessageCache__get_MaxCacheSizeInBytes(::uStatic* __this)
{
    return HttpMessageCache___maxCacheSizeInBytes;
}

void HttpMessageCache__Init(::uStatic* __this)
{
    if (HttpMessageCache___isInitialized)
    {
        return;
    }

    HttpMessageCache___isInitialized = true;
    ::app::Uno::Platform2::Application__remove_Started(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)HttpMessageCache__OnApplicationStarted));
    {
        if (!HttpMessageCache__get_IsCacheEnabled(NULL))
        {
            return;
        }

        ::uLong cacheSize = (HttpMessageCache___maxCacheSizeInBytes != 0ll) ? HttpMessageCache___maxCacheSizeInBytes : 20971520ll;
        ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__InstallCache(NULL, (::uObject*)::app::Android::Base::JNI__GetWrappedActivityObject(NULL), cacheSize);
    }
}

void HttpMessageCache__OnApplicationStarted(::uStatic* __this, int state)
{
    HttpMessageCache__Init(NULL);
}

void HttpMessageCache__set_IsCacheEnabled(::uStatic* __this, bool value)
{
    if (HttpMessageCache___isInitialized)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Uno.Net.Http.HttpMessageCache: Changes to IsCacheEnabled are ignored after initialization."), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Uno.Net.Http\\0.13.2\\$.uno"), 17);
    }
    else
    {
        HttpMessageCache___isCacheDisabled = !value;
    }
}

void HttpMessageCache__set_MaxCacheSizeInBytes(::uStatic* __this, ::uLong value)
{
    if (HttpMessageCache___isInitialized)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::uGetConstString("Uno.Net.Http.HttpMessageCache: Changes to MaxCacheSizeInBytes are ignored after initialization."), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Uno.Net.Http\\0.13.2\\$.uno"), 30);
    }
    else
    {
        HttpMessageCache___maxCacheSizeInBytes = value;
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandler__uType* HttpMessageHandler__typeof()
{
    static ::uStaticStrong<HttpMessageHandler__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandler__uType*)::uAllocClassType(sizeof(HttpMessageHandler__uType), "Uno.Net.Http.HttpMessageHandler", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))HttpMessageHandler__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(HttpMessageHandler__uType, __interface_0));

    type->SetStrongRefs(
        "_defaultDispatcher", offsetof(HttpMessageHandler, _defaultDispatcher),
        "_pendingRequests", offsetof(HttpMessageHandler, _pendingRequests));

    type->SetFields(2,
        ::uNewField("_defaultDispatcher", NULL, offsetof(HttpMessageHandler, _defaultDispatcher), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewField("_pendingRequests", NULL, offsetof(HttpMessageHandler, _pendingRequests), ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("AbortPendingRequests", HttpMessageHandler__AbortPendingRequests, 0, false),
        ::uNewFunctionVoid("CompleteRequest", HttpMessageHandler__CompleteRequest, 0, false, ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()),
        ::uNewFunction("CreateRequest", HttpMessageHandler__CreateRequest, 0, false, ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("CreateRequest", HttpMessageHandler__CreateRequest_1, 0, false, ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewFunctionVoid("Dispose", HttpMessageHandler__Dispose, 0, false),
        ::uNewFunction(".ctor", HttpMessageHandler__New_1, 0, true, HttpMessageHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void HttpMessageHandler___ObjInit(HttpMessageHandler* __this)
{
    __this->_pendingRequests = ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest__New_1(NULL);
    __this->_defaultDispatcher = (::uObject*)::app::Uno::Net::Http::HttpDefaultDispatcher__New_1(NULL);
}

void HttpMessageHandler__AbortPendingRequests(HttpMessageHandler* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest enum_124 = ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Net::Http::HttpMessageHandlerRequest* request = enum_124.Current();

        if (request != NULL)
        {
            ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(request)->Abort();
        }
    }
}

void HttpMessageHandler__CompleteRequest(HttpMessageHandler* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Count(); ++i)
    {
        if (::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i) == request)
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i, NULL);
            ::app::Uno::Net::Http::HttpMessageHandler_StaticData__DecrementPendingRequests(NULL);
            break;
        }
    }
}

::app::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__CreateRequest(HttpMessageHandler* __this, ::uString* method, ::uString* url)
{
    return __this->CreateRequest_1(method, url, __this->_defaultDispatcher);
}

::app::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__CreateRequest_1(HttpMessageHandler* __this, ::uString* method, ::uString* url, ::uObject* dispatcher)
{
    ::app::Uno::Net::Http::HttpMessageHandler_StaticData__IncrementPendingRequests(NULL);
    ::app::Uno::Net::Http::HttpMessageHandlerRequest* request = ::app::Uno::Net::Http::HttpMessageHandlerRequest__New_1(NULL, __this, method, url, dispatcher);

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Count(); ++i)
    {
        if (::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i) == NULL)
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i, request);
            return request;
        }
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Add(request);
    return request;
}

void HttpMessageHandler__Dispose(HttpMessageHandler* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Net::Http::HttpMessageHandlerRequest* request = enum_123.Current();

        if (request != NULL)
        {
            ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(request)->Dispose();
        }
    }

    __this->_pendingRequests = NULL;
}

HttpMessageHandler* HttpMessageHandler__New_1(::uStatic* __this)
{
    HttpMessageHandler* inst = (HttpMessageHandler*)::uAllocObject(sizeof(HttpMessageHandler), HttpMessageHandler__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandler_StaticData__uType* HttpMessageHandler_StaticData__typeof()
{
    static ::uStaticStrong<HttpMessageHandler_StaticData__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandler_StaticData__uType*)::uAllocClassType(sizeof(HttpMessageHandler_StaticData__uType), "Uno.Net.Http.HttpMessageHandler.StaticData");

    return type;
}

void HttpMessageHandler_StaticData__DecrementPendingRequests(::uStatic* __this)
{
}

void HttpMessageHandler_StaticData__IncrementPendingRequests(::uStatic* __this)
{
}

void HttpMessageHandler_StaticData__ProcessEvents(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandlerRequest__uType* HttpMessageHandlerRequest__typeof()
{
    static ::uStaticStrong<HttpMessageHandlerRequest__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandlerRequest__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequest__uType), "Uno.Net.Http.HttpMessageHandlerRequest", false, 1, 12, 0);

    type->__fp_Finalize = (void(*)(::uObject*))HttpMessageHandlerRequest__Finalize;
    type->__interface_0.__fp_Dispose = (void(*)(void*))HttpMessageHandlerRequest__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(HttpMessageHandlerRequest__uType, __interface_0));

    type->SetStrongRefs(
        "_dispatcher", offsetof(HttpMessageHandlerRequest, _dispatcher),
        "_httpMessageHandler", offsetof(HttpMessageHandlerRequest, _httpMessageHandler),
        "_httpRequest", offsetof(HttpMessageHandlerRequest, _httpRequest),
        "_method", offsetof(HttpMessageHandlerRequest, _method),
        "_optionalPayloadCache", offsetof(HttpMessageHandlerRequest, _optionalPayloadCache),
        "_url", offsetof(HttpMessageHandlerRequest, _url),
        "Aborted", offsetof(HttpMessageHandlerRequest, Aborted),
        "Done", offsetof(HttpMessageHandlerRequest, Done),
        "Error", offsetof(HttpMessageHandlerRequest, Error),
        "Progress", offsetof(HttpMessageHandlerRequest, Progress),
        "StateChanged", offsetof(HttpMessageHandlerRequest, StateChanged),
        "Timeout", offsetof(HttpMessageHandlerRequest, Timeout));

    type->SetFields(8,
        ::uNewField("_dispatcher", NULL, offsetof(HttpMessageHandlerRequest, _dispatcher), ::app::Uno::Threading::IDispatcher__typeof()),
        ::uNewField("_httpMessageHandler", NULL, offsetof(HttpMessageHandlerRequest, _httpMessageHandler), ::app::Uno::Net::Http::HttpMessageHandler__typeof()),
        ::uNewField("_httpRequest", NULL, offsetof(HttpMessageHandlerRequest, _httpRequest), ::app::Uno::Net::Http::Implementation::IHttpRequest__typeof()),
        ::uNewField("_method", NULL, offsetof(HttpMessageHandlerRequest, _method), ::app::Uno::String__typeof()),
        ::uNewField("_optionalPayloadCache", NULL, offsetof(HttpMessageHandlerRequest, _optionalPayloadCache), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewField("_responseType", NULL, offsetof(HttpMessageHandlerRequest, _responseType), ::app::Uno::Net::Http::HttpResponseType__typeof()),
        ::uNewField("_state", NULL, offsetof(HttpMessageHandlerRequest, _state), ::app::Uno::Net::Http::HttpRequestState__typeof()),
        ::uNewField("_url", NULL, offsetof(HttpMessageHandlerRequest, _url), ::app::Uno::String__typeof()));

    type->SetFunctions(44,
        ::uNewFunctionVoid("Abort", HttpMessageHandlerRequest__Abort, 0, false),
        ::uNewFunctionVoid("add_Aborted", HttpMessageHandlerRequest__add_Aborted, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("add_Done", HttpMessageHandlerRequest__add_Done, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("add_Error", HttpMessageHandlerRequest__add_Error, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__string__typeof()),
        ::uNewFunctionVoid("add_Progress", HttpMessageHandlerRequest__add_Progress, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__int__int__bool__typeof()),
        ::uNewFunctionVoid("add_StateChanged", HttpMessageHandlerRequest__add_StateChanged, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("add_Timeout", HttpMessageHandlerRequest__add_Timeout, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("CheckDisposed", HttpMessageHandlerRequest__CheckDisposed, 0, false),
        ::uNewFunctionVoid("CompleteRequest", HttpMessageHandlerRequest__CompleteRequest, 0, false),
        ::uNewFunctionVoid("Dispose", HttpMessageHandlerRequest__Dispose, 0, false),
        ::uNewFunctionVoid("EnableCache", HttpMessageHandlerRequest__EnableCache, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("FireSetHeadersReceived", HttpMessageHandlerRequest__FireSetHeadersReceived, 0, false),
        ::uNewFunction("get_HttpResponseType", HttpMessageHandlerRequest__get_HttpResponseType, 0, false, ::app::Uno::Net::Http::HttpResponseType__typeof()),
        ::uNewFunction("get_Method", HttpMessageHandlerRequest__get_Method, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_State", HttpMessageHandlerRequest__get_State, 0, false, ::app::Uno::Net::Http::HttpRequestState__typeof()),
        ::uNewFunction("get_Url", HttpMessageHandlerRequest__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetResponseContentByteArray", HttpMessageHandlerRequest__GetResponseContentByteArray, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("GetResponseContentString", HttpMessageHandlerRequest__GetResponseContentString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetResponseHeader", HttpMessageHandlerRequest__GetResponseHeader, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetResponseHeaders", HttpMessageHandlerRequest__GetResponseHeaders, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetResponseStatus", HttpMessageHandlerRequest__GetResponseStatus, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("IsComplete", HttpMessageHandlerRequest__IsComplete, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("IsHeaderValid", HttpMessageHandlerRequest__IsHeaderValid, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("OnAborted", HttpMessageHandlerRequest__OnAborted, 0, false),
        ::uNewFunctionVoid("OnDone", HttpMessageHandlerRequest__OnDone, 0, false),
        ::uNewFunctionVoid("OnError", HttpMessageHandlerRequest__OnError, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("OnHeadersReceived", HttpMessageHandlerRequest__OnHeadersReceived, 0, false),
        ::uNewFunctionVoid("OnProgress", HttpMessageHandlerRequest__OnProgress, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnStateChanged", HttpMessageHandlerRequest__OnStateChanged, 0, false),
        ::uNewFunctionVoid("OnTimeout", HttpMessageHandlerRequest__OnTimeout, 0, false),
        ::uNewFunctionVoid("remove_Aborted", HttpMessageHandlerRequest__remove_Aborted, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("remove_Done", HttpMessageHandlerRequest__remove_Done, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("remove_Error", HttpMessageHandlerRequest__remove_Error, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__string__typeof()),
        ::uNewFunctionVoid("remove_Progress", HttpMessageHandlerRequest__remove_Progress, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__int__int__bool__typeof()),
        ::uNewFunctionVoid("remove_StateChanged", HttpMessageHandlerRequest__remove_StateChanged, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("remove_Timeout", HttpMessageHandlerRequest__remove_Timeout, 0, false, ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("SendAsync", HttpMessageHandlerRequest__SendAsync, 0, false),
        ::uNewFunctionVoid("SendAsync", HttpMessageHandlerRequest__SendAsync_1, 0, false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunctionVoid("SendAsync", HttpMessageHandlerRequest__SendAsync_2, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_HttpResponseType", HttpMessageHandlerRequest__set_HttpResponseType, 0, false, ::app::Uno::Net::Http::HttpResponseType__typeof()),
        ::uNewFunctionVoid("set_State", HttpMessageHandlerRequest__set_State, 0, false, ::app::Uno::Net::Http::HttpRequestState__typeof()),
        ::uNewFunctionVoid("SetHeader", HttpMessageHandlerRequest__SetHeader, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetResponseType", HttpMessageHandlerRequest__SetResponseType, 0, false, ::app::Uno::Net::Http::HttpResponseType__typeof()),
        ::uNewFunctionVoid("SetTimeout", HttpMessageHandlerRequest__SetTimeout, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void HttpMessageHandlerRequest__Finalize(HttpMessageHandlerRequest* __this)
{
    if (__this->_httpRequest == NULL)
    {
        return;
    }

    __this->Dispose();
}

void HttpMessageHandlerRequest___ObjInit(HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandler* handler, ::uString* method, ::uString* url, ::uObject* dispatcher)
{
    if (handler == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("handler")));
    }

    if (::app::Uno::String__op_Equality(NULL, method, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("method")));
    }

    if (::app::Uno::String__op_Equality(NULL, url, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("url")));
    }

    if (dispatcher == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("dispatcher")));
    }

    method = ::app::Uno::String::ToUpper(::uPtr< ::uString*>(method));

    if (((((::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("DELETE")) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("GET"))) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("HEAD"))) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("POST"))) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("PUT"))) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("OPTIONS")))
    {
        U_THROW(::app::Uno::NotSupportedException__New_4(NULL, ::uGetConstString("HTTP method not supported.")));
    }

    __this->_httpRequest = (::uObject*)::app::Uno::Net::Http::Implementation::AndroidHttpRequest__New_3(NULL, __this, method, url);
    __this->_httpMessageHandler = handler;
    __this->_method = method;
    __this->_url = url;
    __this->_dispatcher = dispatcher;
    __this->State(1);
}

void HttpMessageHandlerRequest__Abort(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->State() >= 5)
    {
        return;
    }

    ::app::Uno::Net::Http::Implementation::IHttpRequest::Abort(::uPtr< ::uObject*>(__this->_httpRequest));
    __this->OnAborted();
}

void HttpMessageHandlerRequest__add_Aborted(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Aborted = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Aborted, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__add_Done(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Done = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Done, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__add_Error(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Error, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__string__typeof());
}

void HttpMessageHandlerRequest__add_Progress(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Progress = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Progress, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__int__int__bool__typeof());
}

void HttpMessageHandlerRequest__add_StateChanged(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->StateChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->StateChanged, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__add_Timeout(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Timeout = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Timeout, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__CheckDisposed(HttpMessageHandlerRequest* __this)
{
    if (__this->_httpRequest == NULL)
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("HttpMessageHandlerRequest")));
    }
}

void HttpMessageHandlerRequest__CompleteRequest(HttpMessageHandlerRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandler*>(__this->_httpMessageHandler)->CompleteRequest(__this);
    __this->_httpMessageHandler = NULL;
}

void HttpMessageHandlerRequest__Dispose(HttpMessageHandlerRequest* __this)
{
    ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_httpRequest));
    __this->_httpRequest = NULL;
    __this->_optionalPayloadCache = NULL;
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void HttpMessageHandlerRequest__EnableCache(HttpMessageHandlerRequest* __this, bool enableCache)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    ::app::Uno::Net::Http::Implementation::IHttpRequest::EnableCache(::uPtr< ::uObject*>(__this->_httpRequest), enableCache);
}

void HttpMessageHandlerRequest__FireSetHeadersReceived(HttpMessageHandlerRequest* __this)
{
    __this->State(3);
}

int HttpMessageHandlerRequest__get_HttpResponseType(HttpMessageHandlerRequest* __this)
{
    return __this->_responseType;
}

::uString* HttpMessageHandlerRequest__get_Method(HttpMessageHandlerRequest* __this)
{
    return __this->_method;
}

int HttpMessageHandlerRequest__get_State(HttpMessageHandlerRequest* __this)
{
    return __this->_state;
}

::uString* HttpMessageHandlerRequest__get_Url(HttpMessageHandlerRequest* __this)
{
    return __this->_url;
}

::uArray* HttpMessageHandlerRequest__GetResponseContentByteArray(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->HttpResponseType() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidResponseTypeException__New_3(NULL));
    }

    if ((__this->State() < 4) || (__this->State() > 5))
    {
        return ::uNewArray(::app::Uno::Byte__typeof(), 0);
    }

    ::uArray* ind_124 = ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentByteArray(::uPtr< ::uObject*>(__this->_httpRequest));
    return (ind_124 != NULL) ? ind_124 : ::uNewArray(::app::Uno::Byte__typeof(), 0);
}

::uString* HttpMessageHandlerRequest__GetResponseContentString(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->HttpResponseType() != 0)
    {
        U_THROW(::app::Uno::Net::Http::InvalidResponseTypeException__New_3(NULL));
    }

    if ((__this->State() < 4) || (__this->State() > 5))
    {
        return ::uGetConstString("");
    }

    ::uString* ind_123 = ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentString(::uPtr< ::uObject*>(__this->_httpRequest));
    return (ind_123 != NULL) ? ind_123 : ::uGetConstString("");
}

::uString* HttpMessageHandlerRequest__GetResponseHeader(HttpMessageHandlerRequest* __this, ::uString* name)
{
    __this->CheckDisposed();

    if ((__this->State() < 3) || (__this->State() > 5))
    {
        return ::uGetConstString("");
    }

    return ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeader(::uPtr< ::uObject*>(__this->_httpRequest), name);
}

::uString* HttpMessageHandlerRequest__GetResponseHeaders(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if ((__this->State() < 3) || (__this->State() > 5))
    {
        return ::uGetConstString("");
    }

    return ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeaders(::uPtr< ::uObject*>(__this->_httpRequest));
}

int HttpMessageHandlerRequest__GetResponseStatus(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if ((__this->State() < 3) || (__this->State() > 5))
    {
        return 0;
    }

    return ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseStatus(::uPtr< ::uObject*>(__this->_httpRequest));
}

bool HttpMessageHandlerRequest__IsComplete(HttpMessageHandlerRequest* __this)
{
    return __this->State() >= 5;
}

bool HttpMessageHandlerRequest__IsHeaderValid(::uStatic* __this, ::uString* name, ::uString* value)
{
    return true;
}

HttpMessageHandlerRequest* HttpMessageHandlerRequest__New_1(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandler* handler, ::uString* method, ::uString* url, ::uObject* dispatcher)
{
    HttpMessageHandlerRequest* inst = (HttpMessageHandlerRequest*)::uAllocObject(sizeof(HttpMessageHandlerRequest), HttpMessageHandlerRequest__typeof());
    inst->_ObjInit(handler, method, url, dispatcher);
    return inst;
}

void HttpMessageHandlerRequest__OnAborted(HttpMessageHandlerRequest* __this)
{
    ::uDelegate* handler = __this->Aborted;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__New_1(NULL, 6, handler, __this)));
    }
}

void HttpMessageHandlerRequest__OnDone(HttpMessageHandlerRequest* __this)
{
    ::uDelegate* handler = __this->Done;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__New_1(NULL, 5, handler, __this)));
    }
}

void HttpMessageHandlerRequest__OnError(HttpMessageHandlerRequest* __this, ::uString* platformspesificErrorMessage)
{
    ::uDelegate* handler = __this->Error;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__string__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__string__New_1(NULL, 7, handler, __this, platformspesificErrorMessage)));
    }
}

void HttpMessageHandlerRequest__OnHeadersReceived(HttpMessageHandlerRequest* __this)
{
    ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)HttpMessageHandlerRequest__FireSetHeadersReceived, __this));
}

void HttpMessageHandlerRequest__OnProgress(HttpMessageHandlerRequest* __this, int current, int total, bool hasTotal)
{
    ::uDelegate* handler = __this->Progress;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_ProgressClosure__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_ProgressClosure__New_1(NULL, 4, handler, __this, current, total, hasTotal)));
    }
}

void HttpMessageHandlerRequest__OnStateChanged(HttpMessageHandlerRequest* __this)
{
    if (__this->State() > 5)
    {
        return;
    }

    ::uDelegate* handler = __this->StateChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< HttpMessageHandlerRequest*>(__this);
    }
}

void HttpMessageHandlerRequest__OnTimeout(HttpMessageHandlerRequest* __this)
{
    ::uDelegate* handler = __this->Timeout;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__New_1(NULL, 8, handler, __this)));
    }
}

void HttpMessageHandlerRequest__remove_Aborted(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Aborted = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Aborted, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__remove_Done(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Done = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Done, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__remove_Error(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Error, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__string__typeof());
}

void HttpMessageHandlerRequest__remove_Progress(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Progress = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Progress, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__int__int__bool__typeof());
}

void HttpMessageHandlerRequest__remove_StateChanged(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->StateChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->StateChanged, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__remove_Timeout(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Timeout = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Timeout, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__SendAsync(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    __this->_state = 2;
    ::app::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(::uPtr< ::uObject*>(__this->_httpRequest));
    __this->OnStateChanged();
}

void HttpMessageHandlerRequest__SendAsync_1(HttpMessageHandlerRequest* __this, ::uArray* data)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    __this->_state = 2;

    if (((::app::Uno::String__op_Equality(NULL, __this->Method(), ::uGetConstString("GET")) || ::app::Uno::String__op_Equality(NULL, __this->Method(), ::uGetConstString("HEAD"))) || (data == NULL)) || (::uPtr< ::uArray*>(data)->Length() == 0))
    {
        ::app::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(::uPtr< ::uObject*>(__this->_httpRequest));
    }
    else
    {
        __this->_optionalPayloadCache = data;
        ::app::Uno::Net::Http::Implementation::IHttpRequest::SendAsync_1(::uPtr< ::uObject*>(__this->_httpRequest), data);
    }

    __this->OnStateChanged();
}

void HttpMessageHandlerRequest__SendAsync_2(HttpMessageHandlerRequest* __this, ::uString* data)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    __this->_state = 2;

    if (((::app::Uno::String__op_Equality(NULL, __this->Method(), ::uGetConstString("GET")) || ::app::Uno::String__op_Equality(NULL, __this->Method(), ::uGetConstString("HEAD"))) || ::app::Uno::String__op_Equality(NULL, data, NULL)) || ::app::Uno::String__op_Equality(NULL, data, ::uGetConstString("")))
    {
        ::app::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(::uPtr< ::uObject*>(__this->_httpRequest));
    }
    else
    {
        ::app::Uno::Net::Http::Implementation::IHttpRequest::SendAsync_2(::uPtr< ::uObject*>(__this->_httpRequest), data);
    }

    __this->OnStateChanged();
}

void HttpMessageHandlerRequest__set_HttpResponseType(HttpMessageHandlerRequest* __this, int value)
{
    __this->SetResponseType(value);
}

void HttpMessageHandlerRequest__set_State(HttpMessageHandlerRequest* __this, int value)
{
    if (__this->_state == value)
    {
        return;
    }

    __this->_state = value;
    __this->OnStateChanged();
}

void HttpMessageHandlerRequest__SetHeader(HttpMessageHandlerRequest* __this, ::uString* name, ::uString* value)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    if (!HttpMessageHandlerRequest__IsHeaderValid(NULL, name, value))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Not allowed to set header \""), name), ::uGetConstString("\" on this target."))));
    }

    ::app::Uno::Net::Http::Implementation::IHttpRequest::SetHeader(::uPtr< ::uObject*>(__this->_httpRequest), name, value);
}

void HttpMessageHandlerRequest__SetResponseType(HttpMessageHandlerRequest* __this, int responseType)
{
    __this->CheckDisposed();

    if (__this->State() >= 4)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    __this->_responseType = responseType;
    ::uPtr< ::app::Uno::Net::Http::Implementation::AndroidHttpRequest*>(::uAs< ::app::Uno::Net::Http::Implementation::AndroidHttpRequest*>(__this->_httpRequest, ::app::Uno::Net::Http::Implementation::AndroidHttpRequest__typeof()))->SetResponseType_1(responseType);
}

void HttpMessageHandlerRequest__SetTimeout(HttpMessageHandlerRequest* __this, int timeoutInMilliseconds)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    ::app::Uno::Net::Http::Implementation::IHttpRequest::SetTimeout(::uPtr< ::uObject*>(__this->_httpRequest), timeoutInMilliseconds);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandlerRequest_DispatchClosure__uType* HttpMessageHandlerRequest_DispatchClosure__typeof()
{
    static ::uStaticStrong<HttpMessageHandlerRequest_DispatchClosure__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandlerRequest_DispatchClosure__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequest_DispatchClosure__uType), "Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(HttpMessageHandlerRequest_DispatchClosure, _action),
        "_arg", offsetof(HttpMessageHandlerRequest_DispatchClosure, _arg));

    return type;
}

void HttpMessageHandlerRequest_DispatchClosure___ObjInit(HttpMessageHandlerRequest_DispatchClosure* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    __this->_action = action;
    __this->_arg = arg;
    __this->_state = state;
}

HttpMessageHandlerRequest_DispatchClosure* HttpMessageHandlerRequest_DispatchClosure__New_1(::uStatic* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    HttpMessageHandlerRequest_DispatchClosure* inst = (HttpMessageHandlerRequest_DispatchClosure*)::uAllocObject(sizeof(HttpMessageHandlerRequest_DispatchClosure), HttpMessageHandlerRequest_DispatchClosure__typeof());
    inst->_ObjInit(state, action, arg);
    return inst;
}

void HttpMessageHandlerRequest_DispatchClosure__Run(HttpMessageHandlerRequest_DispatchClosure* __this)
{
    if (::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg)->IsComplete())
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_4(NULL, ::uGetConstString("Invalid state: The request has already completed.")));
    }

    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg)->State(__this->_state);
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg);
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg)->CompleteRequest();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandlerRequest_ProgressClosure__uType* HttpMessageHandlerRequest_ProgressClosure__typeof()
{
    static ::uStaticStrong<HttpMessageHandlerRequest_ProgressClosure__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandlerRequest_ProgressClosure__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequest_ProgressClosure__uType), "Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(HttpMessageHandlerRequest_ProgressClosure, _action),
        "_request", offsetof(HttpMessageHandlerRequest_ProgressClosure, _request));

    return type;
}

void HttpMessageHandlerRequest_ProgressClosure___ObjInit(HttpMessageHandlerRequest_ProgressClosure* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal)
{
    __this->_action = action;
    __this->_request = request;
    __this->_current = current;
    __this->_total = total;
    __this->_hasTotal = hasTotal;
    __this->_state = state;
}

HttpMessageHandlerRequest_ProgressClosure* HttpMessageHandlerRequest_ProgressClosure__New_1(::uStatic* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal)
{
    HttpMessageHandlerRequest_ProgressClosure* inst = (HttpMessageHandlerRequest_ProgressClosure*)::uAllocObject(sizeof(HttpMessageHandlerRequest_ProgressClosure), HttpMessageHandlerRequest_ProgressClosure__typeof());
    inst->_ObjInit(state, action, request, current, total, hasTotal);
    return inst;
}

void HttpMessageHandlerRequest_ProgressClosure__Run(HttpMessageHandlerRequest_ProgressClosure* __this)
{
    if (::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->IsComplete())
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_4(NULL, ::uGetConstString("Invalid state: The request has already completed.")));
    }

    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->State(__this->_state);
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Net::Http::HttpMessageHandlerRequest*, int, int, bool>(__this->_request, __this->_current, __this->_total, __this->_hasTotal);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* HttpRequestState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Http.HttpRequestState", ::app::Uno::Int__typeof(), 10);

    type->SetLiterals(
        "Uninitialized", 0LL,
        "Opened", 1LL,
        "Sent", 2LL,
        "HeadersReceived", 3LL,
        "Loading", 4LL,
        "Done", 5LL,
        "Aborted", 6LL,
        "Errored", 7LL,
        "TimedOut", 8LL,
        "Unsent", 0LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* HttpResponseType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Http.HttpResponseType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "None", -1LL,
        "String", 0LL,
        "ByteArray", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__ClientErrors;
::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Informational;
::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Redirection;
::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__ServerErrors;
::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Success;

HttpStatusReasonPhrase__uType* HttpStatusReasonPhrase__typeof()
{
    static ::uStaticStrong<HttpStatusReasonPhrase__uType*> type;
    if (type != NULL) return type;

    type = (HttpStatusReasonPhrase__uType*)::uAllocClassType(sizeof(HttpStatusReasonPhrase__uType), "Uno.Net.Http.HttpStatusReasonPhrase");

    type->SetFields(5,
        ::uNewField("ClientErrors", &HttpStatusReasonPhrase__ClientErrors, 0, ::app::Uno::Collections::IDictionary__int__string__typeof()),
        ::uNewField("Informational", &HttpStatusReasonPhrase__Informational, 0, ::app::Uno::Collections::IDictionary__int__string__typeof()),
        ::uNewField("Redirection", &HttpStatusReasonPhrase__Redirection, 0, ::app::Uno::Collections::IDictionary__int__string__typeof()),
        ::uNewField("ServerErrors", &HttpStatusReasonPhrase__ServerErrors, 0, ::app::Uno::Collections::IDictionary__int__string__typeof()),
        ::uNewField("Success", &HttpStatusReasonPhrase__Success, 0, ::app::Uno::Collections::IDictionary__int__string__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("GetFromStatusCode", HttpStatusReasonPhrase__GetFromStatusCode, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void HttpStatusReasonPhrase___TypeInit(::uStatic* __this)
{
    ::app::Uno::Collections::Dictionary__int__string* collection_127;
    ::app::Uno::Collections::Dictionary__int__string* collection_126;
    ::app::Uno::Collections::Dictionary__int__string* collection_125;
    ::app::Uno::Collections::Dictionary__int__string* collection_124;
    ::app::Uno::Collections::Dictionary__int__string* collection_123;
    HttpStatusReasonPhrase__Informational = (::uObject*)(collection_127 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_127)->Add(100, ::uGetConstString("Continue")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_127)->Add(101, ::uGetConstString("Switching Protocols")), collection_127);
    HttpStatusReasonPhrase__Success = (::uObject*)(collection_126 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(200, ::uGetConstString("OK")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(201, ::uGetConstString("Created")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(202, ::uGetConstString("Accepted")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(203, ::uGetConstString("Non-Authoritative Information")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(204, ::uGetConstString("No Content")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(205, ::uGetConstString("Reset Content")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(206, ::uGetConstString("Partial Content")), collection_126);
    HttpStatusReasonPhrase__Redirection = (::uObject*)(collection_125 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(300, ::uGetConstString("Multiple Choices")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(301, ::uGetConstString("Moved Permanently")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(302, ::uGetConstString("Found")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(303, ::uGetConstString("See Other")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(304, ::uGetConstString("Not Modified")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(305, ::uGetConstString("Use Proxy")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(307, ::uGetConstString("Temporary Redirect")), collection_125);
    HttpStatusReasonPhrase__ClientErrors = (::uObject*)(collection_124 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(400, ::uGetConstString("Bad Request")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(401, ::uGetConstString("Unauthorized")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(402, ::uGetConstString("Payment Required")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(403, ::uGetConstString("Forbidden")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(404, ::uGetConstString("Not Found")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(405, ::uGetConstString("Method Not Allowed")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(406, ::uGetConstString("Not Acceptable")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(407, ::uGetConstString("Proxy Authentication Required")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(408, ::uGetConstString("Request Time-out")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(409, ::uGetConstString("Conflict")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(410, ::uGetConstString("Gone")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(411, ::uGetConstString("Length Required")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(412, ::uGetConstString("Precondition Failed")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(413, ::uGetConstString("Request Entity Too Large")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(414, ::uGetConstString("Request-URI Too Large")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(415, ::uGetConstString("Unsupported Media Type")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(416, ::uGetConstString("Requested range not satisfiable")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(417, ::uGetConstString("Expectation Failed")), collection_124);
    HttpStatusReasonPhrase__ServerErrors = (::uObject*)(collection_123 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(500, ::uGetConstString("Internal Server Error")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(501, ::uGetConstString("Not Implemented")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(502, ::uGetConstString("Bad Gateway")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(503, ::uGetConstString("Service Unavailable")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(504, ::uGetConstString("Gateway Time-out")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(505, ::uGetConstString("HTTP Version not supported")), collection_123);
}

::uString* HttpStatusReasonPhrase__GetFromStatusCode(::uStatic* __this, int statusCode)
{
    ::uString* description;

    if (::app::Uno::Collections::IDictionary__int__string::TryGetValue(::uPtr< ::uObject*>(HttpStatusReasonPhrase__Informational), statusCode, &description))
    {
        return description;
    }

    if (::app::Uno::Collections::IDictionary__int__string::TryGetValue(::uPtr< ::uObject*>(HttpStatusReasonPhrase__Success), statusCode, &description))
    {
        return description;
    }

    if (::app::Uno::Collections::IDictionary__int__string::TryGetValue(::uPtr< ::uObject*>(HttpStatusReasonPhrase__Redirection), statusCode, &description))
    {
        return description;
    }

    if (::app::Uno::Collections::IDictionary__int__string::TryGetValue(::uPtr< ::uObject*>(HttpStatusReasonPhrase__ClientErrors), statusCode, &description))
    {
        return description;
    }

    if (::app::Uno::Collections::IDictionary__int__string::TryGetValue(::uPtr< ::uObject*>(HttpStatusReasonPhrase__ServerErrors), statusCode, &description))
    {
        return description;
    }

    return NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvalidResponseTypeException__uType* InvalidResponseTypeException__typeof()
{
    static ::uStaticStrong<InvalidResponseTypeException__uType*> type;
    if (type != NULL) return type;

    type = (InvalidResponseTypeException__uType*)::uAllocClassType(sizeof(InvalidResponseTypeException__uType), "Uno.Net.Http.InvalidResponseTypeException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", InvalidResponseTypeException__New_3, 0, true, InvalidResponseTypeException__typeof()));

    ::uRegisterType(type);
    return type;
}

void InvalidResponseTypeException___ObjInit_2(InvalidResponseTypeException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("Response type is invalid."));
}

InvalidResponseTypeException* InvalidResponseTypeException__New_3(::uStatic* __this)
{
    InvalidResponseTypeException* inst = (InvalidResponseTypeException*)::uAllocObject(sizeof(InvalidResponseTypeException), InvalidResponseTypeException__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvalidStateException__uType* InvalidStateException__typeof()
{
    static ::uStaticStrong<InvalidStateException__uType*> type;
    if (type != NULL) return type;

    type = (InvalidStateException__uType*)::uAllocClassType(sizeof(InvalidStateException__uType), "Uno.Net.Http.InvalidStateException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(2,
        ::uNewFunction(".ctor", InvalidStateException__New_3, 0, true, InvalidStateException__typeof()),
        ::uNewFunction(".ctor", InvalidStateException__New_4, 0, true, InvalidStateException__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void InvalidStateException___ObjInit_2(InvalidStateException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("The object is in an invalid state."));
}

void InvalidStateException___ObjInit_3(InvalidStateException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

InvalidStateException* InvalidStateException__New_3(::uStatic* __this)
{
    InvalidStateException* inst = (InvalidStateException*)::uAllocObject(sizeof(InvalidStateException), InvalidStateException__typeof());
    inst->_ObjInit_2();
    return inst;
}

InvalidStateException* InvalidStateException__New_4(::uStatic* __this, ::uString* message)
{
    InvalidStateException* inst = (InvalidStateException*)::uAllocObject(sizeof(InvalidStateException), InvalidStateException__typeof());
    inst->_ObjInit_3(message);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

QueryParser__uType* QueryParser__typeof()
{
    static ::uStaticStrong<QueryParser__uType*> type;
    if (type != NULL) return type;

    type = (QueryParser__uType*)::uAllocClassType(sizeof(QueryParser__uType), "Uno.Net.Http.QueryParser", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction(".ctor", QueryParser__New_1, 0, true, QueryParser__typeof()),
        ::uNewFunction("Parse", QueryParser__Parse, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void QueryParser___ObjInit(QueryParser* __this)
{
}

QueryParser* QueryParser__New_1(::uStatic* __this)
{
    QueryParser* inst = (QueryParser*)::uAllocObject(sizeof(QueryParser), QueryParser__typeof());
    inst->_ObjInit();
    return inst;
}

::uString* QueryParser__Parse(::uStatic* __this, ::uString* uriString, ::uString* scheme, int idx, int* startPartIdx)
{
    if ((idx >= ::uPtr< ::uString*>(uriString)->Length()) || !::app::Uno::Net::Http::UriScheme__IsHttpScheme(NULL, scheme))
    {
        return ::app::Uno::String__Empty;
    }

    int startQuery = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(uriString), '?', idx);
    int startHash = ::app::Uno::String::IndexOf(uriString, '#', idx);

    if (startHash < 0)
    {
        startHash = ::uPtr< ::uString*>(uriString)->Length();
    }

    if ((startQuery >= 0) && (startQuery < startHash))
    {
        *startPartIdx = startQuery;
        return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(uriString), *startPartIdx, startHash - *startPartIdx);
    }

    return ::app::Uno::String__Empty;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SchemeParser__uType* SchemeParser__typeof()
{
    static ::uStaticStrong<SchemeParser__uType*> type;
    if (type != NULL) return type;

    type = (SchemeParser__uType*)::uAllocClassType(sizeof(SchemeParser__uType), "Uno.Net.Http.SchemeParser", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction(".ctor", SchemeParser__New_1, 0, true, SchemeParser__typeof()),
        ::uNewFunction("Parse", SchemeParser__Parse, 0, true, ::app::Uno::Net::Http::SchemeParserResult__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void SchemeParser___ObjInit(SchemeParser* __this)
{
}

SchemeParser* SchemeParser__New_1(::uStatic* __this)
{
    SchemeParser* inst = (SchemeParser*)::uAllocObject(sizeof(SchemeParser), SchemeParser__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Uno::Net::Http::SchemeParserResult SchemeParser__Parse(::uStatic* __this, ::uString* uriString, int* idx)
{
    ::app::Uno::Net::Http::SchemeParserResult result = ::app::Uno::Net::Http::SchemeParserResult();
    int end = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(uriString), ::uGetConstString(":"), *idx);

    if (end < 0)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The scheme isn't specified in uriString.")));
    }

    if (((*idx + 2) >= uriString->Length()) || (end == *idx))
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The scheme specified in uriString is not correctly formed.")));
    }

    if ((end - *idx) > 1023)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The length of the scheme specified in uriString exceeds 1023 characters.")));
    }

    result.Scheme = ::app::Uno::String::Substring_1(uriString, *idx, end - *idx);
    result.Type = ::app::Uno::Net::Http::UriScheme__GetSchemeType(NULL, result.Scheme);

    if (result.Type == 2)
    {
        return result;
    }

    *idx = end + 1;

    if (result.Type == 0)
    {
        if ((((*idx + 1) >= ::uPtr< ::uString*>(uriString)->Length()) || (::uPtr< ::uString*>(uriString)->Item(*idx) != '/')) || (::uPtr< ::uString*>(uriString)->Item(*idx + 1) != '/'))
        {
            U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("There is an invalid character sequence in uriString.")));
        }

        *idx = *idx + 2;
    }

    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SchemeParserResult__uType* SchemeParserResult__typeof()
{
    static ::uStaticStrong<SchemeParserResult__uType*> type;
    if (type != NULL) return type;

    type = (SchemeParserResult__uType*)::uAllocStructType(sizeof(SchemeParserResult__uType), "Uno.Net.Http.SchemeParserResult", sizeof(SchemeParserResult), 0, 1, 0);

    type->SetStrongRefs(
        "Scheme", offsetof(SchemeParserResult, Scheme));

    type->SetFields(2,
        ::uNewField("Scheme", NULL, offsetof(SchemeParserResult, Scheme), ::app::Uno::String__typeof()),
        ::uNewField("Type", NULL, offsetof(SchemeParserResult, Type), ::app::Uno::Net::Http::UriSchemeType__typeof()));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Uri__uType* Uri__typeof()
{
    static ::uStaticStrong<Uri__uType*> type;
    if (type != NULL) return type;

    type = (Uri__uType*)::uAllocClassType(sizeof(Uri__uType), "Uno.Net.Http.Uri", false, 0, 10, 0);

    type->SetStrongRefs(
        "_AbsolutePath", offsetof(Uri, _AbsolutePath),
        "_AbsoluteUri", offsetof(Uri, _AbsoluteUri),
        "_Authority", offsetof(Uri, _Authority),
        "_Hash", offsetof(Uri, _Hash),
        "_Host", offsetof(Uri, _Host),
        "_OriginalString", offsetof(Uri, _OriginalString),
        "_PathAndQuery", offsetof(Uri, _PathAndQuery),
        "_Query", offsetof(Uri, _Query),
        "_Scheme", offsetof(Uri, _Scheme),
        "_UserInfo", offsetof(Uri, _UserInfo));

    type->SetFunctions(31,
        ::uNewFunction("Combine", Uri__Combine, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("CreateThis", Uri__CreateThis, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("Decode", Uri__Decode, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Encode", Uri__Encode, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("EscapeSymbol", Uri__EscapeSymbol, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("get_AbsolutePath", Uri__get_AbsolutePath, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_AbsoluteUri", Uri__get_AbsoluteUri, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Authority", Uri__get_Authority, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Hash", Uri__get_Hash, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Host", Uri__get_Host, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_OriginalString", Uri__get_OriginalString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_PathAndQuery", Uri__get_PathAndQuery, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Port", Uri__get_Port, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Query", Uri__get_Query, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Scheme", Uri__get_Scheme, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_UserInfo", Uri__get_UserInfo, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetHexFromNumber", Uri__GetHexFromNumber, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Byte__typeof()),
        ::uNewFunction("GetNumberFromHex", Uri__GetNumberFromHex, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("GetQueryParameters", Uri__GetQueryParameters, 0, false, ::app::Uno::Collections::Dictionary__string__string__typeof()),
        ::uNewFunction(".ctor", Uri__New_1, 0, true, Uri__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_AbsolutePath", Uri__set_AbsolutePath, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_AbsoluteUri", Uri__set_AbsoluteUri, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Authority", Uri__set_Authority, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Hash", Uri__set_Hash, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Host", Uri__set_Host, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_OriginalString", Uri__set_OriginalString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_PathAndQuery", Uri__set_PathAndQuery, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Port", Uri__set_Port, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Query", Uri__set_Query, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Scheme", Uri__set_Scheme, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_UserInfo", Uri__set_UserInfo, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Uri___ObjInit(Uri* __this, ::uString* uriString)
{
    if (::app::Uno::String__IsNullOrEmpty(NULL, uriString))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("uriString")));
    }

    uriString = ::app::Uno::String::Trim(::uPtr< ::uString*>(uriString));

    if (uriString->Length() > 65519)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The length of uriString exceeds 65519 characters.")));
    }

    __this->CreateThis(uriString);
}

::uString* Uri__Combine(::uStatic* __this, ::uString* baseUri, ::uString* uri)
{
    int leftCount = (::uPtr< ::uString*>(baseUri)->Item(::uPtr< ::uString*>(baseUri)->Length() - 1) == '/') ? (::uPtr< ::uString*>(baseUri)->Length() - 1) : ::uPtr< ::uString*>(baseUri)->Length();
    int rightIndex = (::uPtr< ::uString*>(uri)->Item(0) == '/') ? 1 : 0;
    ::uArray* data = ::uNewArray(::app::Uno::Char__typeof(), ((leftCount + uri->Length()) + 1) - rightIndex);
    ::app::Uno::Array__Copy__char_1(NULL, ::app::Uno::String::ToCharArray(baseUri), 0, data, 0, leftCount);
    data->Item< ::uChar>(leftCount) = '/';
    ::app::Uno::Array__Copy__char_1(NULL, ::app::Uno::String::ToCharArray(uri), rightIndex, data, leftCount + 1, uri->Length() - rightIndex);
    return ::uNewStringFromArray(data);
}

void Uri__CreateThis(Uri* __this, ::uString* uriString)
{
    int idx = 0;
    __this->OriginalString((__this->AbsoluteUri(uriString), uriString));
    ::app::Uno::Net::Http::SchemeParserResult schemeResult = ::app::Uno::Net::Http::SchemeParser__Parse(NULL, uriString, &idx);
    __this->Scheme(schemeResult.Scheme);
    int queryOrHashPartIdx = ::uPtr< ::uString*>(uriString)->Length();
    int partStartIdx = uriString->Length();
    int absolutePathPartIdx = 0;

    if (schemeResult.Type == 2)
    {
        return;
    }

    __this->Query(::app::Uno::Net::Http::QueryParser__Parse(NULL, uriString, __this->Scheme(), idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    __this->Hash(::app::Uno::Net::Http::HashParser__Parse(NULL, uriString, idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    __this->AbsolutePath(::app::Uno::Net::Http::AbsolutePathParser__Parse(NULL, uriString, idx, queryOrHashPartIdx, &absolutePathPartIdx));
    __this->PathAndQuery(::app::Uno::String__op_Addition_2(NULL, __this->AbsolutePath(), __this->Query()));
    __this->UserInfo(::app::Uno::Net::Http::UserInfoParser__Parse(NULL, uriString, absolutePathPartIdx, &idx));
    ::app::Uno::Net::Http::HostInfo* hostInfo = ::app::Uno::Net::Http::HostInfoParser__Parse(NULL, uriString, __this->Scheme(), absolutePathPartIdx, &idx);
    __this->Host(::uPtr< ::app::Uno::Net::Http::HostInfo*>(hostInfo)->Host());
    __this->Port(hostInfo->Port());
    __this->Authority(hostInfo->Authority());
}

::uString* Uri__Decode(::uStatic* __this, ::uString* value)
{
    int count = 0;
    ::uArray* buffer = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(value)->Length());

    for (int i = 0; i < value->Length(); i++)
    {
        ::uChar symbol = ::uPtr< ::uString*>(value)->Item(i);

        if (symbol == '+')
        {
            symbol = ' ';
        }
        else if ((symbol == '%') && ((i + 2) < value->Length()))
        {
            int first = Uri__GetNumberFromHex(NULL, ::uPtr< ::uString*>(value)->Item(i + 1));
            int second = Uri__GetNumberFromHex(NULL, value->Item(i + 2));

            if ((first >= 0) && (second >= 0))
            {
                symbol = (::uChar)((first << 4) | second);
                i = i + 2;
            }
        }

        ::uPtr< ::uArray*>(buffer)->Item< ::uChar>(count++) = symbol;
    }

    if (count < value->Length())
    {
        ::uArray* result = ::uNewArray(::app::Uno::Char__typeof(), count);
        ::app::Uno::Array__Copy__char(NULL, buffer, result, count);
        return ::uNewStringFromArray(result);
    }

    return ::uNewStringFromArray(buffer);
}

::uString* Uri__Encode(::uStatic* __this, ::uString* value)
{
    int count = 0;

    for (int i = 0; i < ::uPtr< ::uString*>(value)->Length(); i++)
    {
        count++;

        if ((::uPtr< ::uString*>(value)->Item(i) != ' ') && Uri__EscapeSymbol(NULL, ::uPtr< ::uString*>(value)->Item(i)))
        {
            count = count + 2;
        }
    }

    ::uArray* result = ::uNewArray(::app::Uno::Char__typeof(), count);
    int index = 0;

    for (int i = 0; i < ::uPtr< ::uString*>(value)->Length(); i++)
    {
        ::uChar symbol = ::uPtr< ::uString*>(value)->Item(i);

        if (symbol == ' ')
        {
            ::uPtr< ::uArray*>(result)->Item< ::uChar>(index++) = '+';
        }
        else if (Uri__EscapeSymbol(NULL, symbol))
        {
            ::uPtr< ::uArray*>(result)->Item< ::uChar>(index++) = '%';
            result->Item< ::uChar>(index++) = Uri__GetHexFromNumber(NULL, (::uByte)(((int)symbol >> 4) & 15));
            result->Item< ::uChar>(index++) = Uri__GetHexFromNumber(NULL, (::uByte)((int)symbol & 15));
        }
        else
        {
            ::uPtr< ::uArray*>(result)->Item< ::uChar>(index++) = symbol;
        }
    }

    return ::uNewStringFromArray(result);
}

bool Uri__EscapeSymbol(::uStatic* __this, ::uChar symbol)
{
    if (::app::Uno::Char__IsLetter(NULL, symbol) || ::app::Uno::Char__IsDigit(NULL, symbol))
    {
        return false;
    }

    switch (symbol)
    {
        case '!':
        case '(':
        case ')':
        case '*':
        case '-':
        case '.':
        case '_':
        {
            return false;
        }
    }

    return true;
}

::uString* Uri__get_AbsolutePath(Uri* __this)
{
    return __this->_AbsolutePath;
}

::uString* Uri__get_AbsoluteUri(Uri* __this)
{
    return __this->_AbsoluteUri;
}

::uString* Uri__get_Authority(Uri* __this)
{
    return __this->_Authority;
}

::uString* Uri__get_Hash(Uri* __this)
{
    return __this->_Hash;
}

::uString* Uri__get_Host(Uri* __this)
{
    return __this->_Host;
}

::uString* Uri__get_OriginalString(Uri* __this)
{
    return __this->_OriginalString;
}

::uString* Uri__get_PathAndQuery(Uri* __this)
{
    return __this->_PathAndQuery;
}

int Uri__get_Port(Uri* __this)
{
    return __this->_Port;
}

::uString* Uri__get_Query(Uri* __this)
{
    return __this->_Query;
}

::uString* Uri__get_Scheme(Uri* __this)
{
    return __this->_Scheme;
}

::uString* Uri__get_UserInfo(Uri* __this)
{
    return __this->_UserInfo;
}

::uChar Uri__GetHexFromNumber(::uStatic* __this, ::uByte value)
{
    if (value > 9)
    {
        return (::uChar)((97 + value) - 10);
    }

    return (::uChar)(48 + value);
}

int Uri__GetNumberFromHex(::uStatic* __this, ::uChar symbol)
{
    if ((symbol >= '0') && (symbol <= '9'))
    {
        return (::uByte)symbol - 48;
    }

    ::uChar letter = ::app::Uno::Char__ToLower(NULL, symbol);

    if ((letter >= 'a') && (letter <= 'z'))
    {
        return ((::uByte)letter - 97) + 10;
    }

    return -1;
}

::app::Uno::Collections::Dictionary__string__string* Uri__GetQueryParameters(Uri* __this)
{
    ::uArray* array_126;
    ::app::Uno::Collections::Dictionary__string__string* result = ::app::Uno::Collections::Dictionary__string__string__New_1(NULL);

    if (!::app::Uno::String__IsNullOrEmpty(NULL, __this->Query()))
    {
        ::uString* parameters = ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Query()), 1);
        ::uArray* parts = ::app::Uno::String::Split(::uPtr< ::uString*>(parameters), (array_126 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_126)->Item< ::uChar>(0) = '&', array_126));

        for (int index_124 = 0, length_125 = ::uPtr< ::uArray*>(parts)->Length(); index_124 < length_125; ++index_124)
        {
            ::uString* part = ::uPtr< ::uArray*>(parts)->Item< ::uString*>(index_124);
            int index = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(part), ::uGetConstString("="), 0);

            if (index != -1)
            {
                ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(result)->Add(::app::Uno::String::Substring_1(part, 0, index), ::app::Uno::String::Substring(part, index + 1));
            }
            else
            {
                result->Add(part, ::app::Uno::String__Empty);
            }
        }
    }

    return result;
}

Uri* Uri__New_1(::uStatic* __this, ::uString* uriString)
{
    Uri* inst = (Uri*)::uAllocObject(sizeof(Uri), Uri__typeof());
    inst->_ObjInit(uriString);
    return inst;
}

void Uri__set_AbsolutePath(Uri* __this, ::uString* value)
{
    __this->_AbsolutePath = value;
}

void Uri__set_AbsoluteUri(Uri* __this, ::uString* value)
{
    __this->_AbsoluteUri = value;
}

void Uri__set_Authority(Uri* __this, ::uString* value)
{
    __this->_Authority = value;
}

void Uri__set_Hash(Uri* __this, ::uString* value)
{
    __this->_Hash = value;
}

void Uri__set_Host(Uri* __this, ::uString* value)
{
    __this->_Host = value;
}

void Uri__set_OriginalString(Uri* __this, ::uString* value)
{
    __this->_OriginalString = value;
}

void Uri__set_PathAndQuery(Uri* __this, ::uString* value)
{
    __this->_PathAndQuery = value;
}

void Uri__set_Port(Uri* __this, int value)
{
    __this->_Port = value;
}

void Uri__set_Query(Uri* __this, ::uString* value)
{
    __this->_Query = value;
}

void Uri__set_Scheme(Uri* __this, ::uString* value)
{
    __this->_Scheme = value;
}

void Uri__set_UserInfo(Uri* __this, ::uString* value)
{
    __this->_UserInfo = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UriFormatException__uType* UriFormatException__typeof()
{
    static ::uStaticStrong<UriFormatException__uType*> type;
    if (type != NULL) return type;

    type = (UriFormatException__uType*)::uAllocClassType(sizeof(UriFormatException__uType), "Uno.Net.Http.UriFormatException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UriFormatException__New_3, 0, true, UriFormatException__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UriFormatException___ObjInit_2(UriFormatException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

UriFormatException* UriFormatException__New_3(::uStatic* __this, ::uString* message)
{
    UriFormatException* inst = (UriFormatException*)::uAllocObject(sizeof(UriFormatException), UriFormatException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__int*> UriScheme___defaultPorts;
::uStaticStrong< ::app::Uno::Collections::List__string*> UriScheme__KnownInternetSchemes;
::uStaticStrong< ::app::Uno::Collections::List__string*> UriScheme__KnownNonInternetSchemes;

UriScheme__uType* UriScheme__typeof()
{
    static ::uStaticStrong<UriScheme__uType*> type;
    if (type != NULL) return type;

    type = (UriScheme__uType*)::uAllocClassType(sizeof(UriScheme__uType), "Uno.Net.Http.UriScheme", false, 0, 0, 0);

    type->SetFields(3,
        ::uNewField("_defaultPorts", &UriScheme___defaultPorts, 0, ::app::Uno::Collections::Dictionary__string__int__typeof()),
        ::uNewField("KnownInternetSchemes", &UriScheme__KnownInternetSchemes, 0, ::app::Uno::Collections::List__string__typeof()),
        ::uNewField("KnownNonInternetSchemes", &UriScheme__KnownNonInternetSchemes, 0, ::app::Uno::Collections::List__string__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_DefaultPorts", UriScheme__get_DefaultPorts, 0, true, ::app::Uno::Collections::Dictionary__string__int__typeof()),
        ::uNewFunction("GetSchemeType", UriScheme__GetSchemeType, 0, true, ::app::Uno::Net::Http::UriSchemeType__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("IsHttpScheme", UriScheme__IsHttpScheme, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", UriScheme__New_1, 0, true, UriScheme__typeof()));

    ::uRegisterType(type);
    return type;
}

void UriScheme___ObjInit(UriScheme* __this)
{
}

void UriScheme___TypeInit(::uStatic* __this)
{
    ::app::Uno::Collections::List__string* collection_124;
    ::app::Uno::Collections::List__string* collection_123;
    UriScheme__KnownInternetSchemes = (collection_124 = ::app::Uno::Collections::List__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("http")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("https")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("ftp")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("gopher")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("nntp")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("telnet")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("wais")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("file")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("prospero")), collection_124);
    UriScheme__KnownNonInternetSchemes = (collection_123 = ::app::Uno::Collections::List__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("mailto")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("news")), collection_123);
}

::app::Uno::Collections::Dictionary__string__int* UriScheme__get_DefaultPorts(::uStatic* __this)
{
    if (UriScheme___defaultPorts == NULL)
    {
        UriScheme___defaultPorts = ::app::Uno::Collections::Dictionary__string__int__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("http"), 80);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("https"), 443);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("ftp"), 21);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("gopher"), 70);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("telnet"), 119);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("wais"), -1);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("file"), -1);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("prospero"), -1);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("mailto"), 25);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("news"), -1);
    }

    return UriScheme___defaultPorts;
}

int UriScheme__GetSchemeType(::uStatic* __this, ::uString* scheme)
{
    ::uString* s = ::app::Uno::String::ToLower(::uPtr< ::uString*>(scheme));

    if (::uPtr< ::app::Uno::Collections::List__string*>(UriScheme__KnownInternetSchemes)->Contains(s))
    {
        return 0;
    }

    if (::uPtr< ::app::Uno::Collections::List__string*>(UriScheme__KnownNonInternetSchemes)->Contains(s))
    {
        return 1;
    }

    return 2;
}

bool UriScheme__IsHttpScheme(::uStatic* __this, ::uString* scheme)
{
    ::uString* s = ::app::Uno::String::ToLower(::uPtr< ::uString*>(scheme));
    return ::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("http")) || ::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("https"));
}

UriScheme* UriScheme__New_1(::uStatic* __this)
{
    UriScheme* inst = (UriScheme*)::uAllocObject(sizeof(UriScheme), UriScheme__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UriSchemeType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Http.UriSchemeType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Internet", 0LL,
        "NonInternet", 1LL,
        "Unknown", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\UriParsers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UserInfoParser__uType* UserInfoParser__typeof()
{
    static ::uStaticStrong<UserInfoParser__uType*> type;
    if (type != NULL) return type;

    type = (UserInfoParser__uType*)::uAllocClassType(sizeof(UserInfoParser__uType), "Uno.Net.Http.UserInfoParser", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction("IsValid", UserInfoParser__IsValid, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", UserInfoParser__New_1, 0, true, UserInfoParser__typeof()),
        ::uNewFunction("Parse", UserInfoParser__Parse, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void UserInfoParser___ObjInit(UserInfoParser* __this)
{
}

bool UserInfoParser__IsValid(::uStatic* __this, ::uString* userInfo)
{
    return (((::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(userInfo), ::uGetConstString("\\"), 0) < 0) && !::app::Uno::String::EndsWith(::uPtr< ::uString*>(userInfo), ::uGetConstString(":"))) && !::app::Uno::String::StartsWith(::uPtr< ::uString*>(userInfo), ::uGetConstString(":"))) && !::app::Uno::String__IsNullOrEmpty(NULL, userInfo);
}

UserInfoParser* UserInfoParser__New_1(::uStatic* __this)
{
    UserInfoParser* inst = (UserInfoParser*)::uAllocObject(sizeof(UserInfoParser), UserInfoParser__typeof());
    inst->_ObjInit();
    return inst;
}

::uString* UserInfoParser__Parse(::uStatic* __this, ::uString* uriString, int endIdx, int* idx)
{
    if (*idx >= endIdx)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("There is an invalid character sequence in uriString.")));
    }

    int end = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(uriString), ::uGetConstString("@"), *idx);

    if ((end < 0) || (end >= endIdx))
    {
        return ::app::Uno::String__Empty;
    }

    ::uString* userInfo = ::app::Uno::String::Substring_1(uriString, *idx, end - *idx);

    if (!UserInfoParser__IsValid(NULL, userInfo))
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The user name or password specified in uriString is not valid.")));
    }

    *idx = end + 1;
    return userInfo;
}

}}}}
