// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.AbsolutePathParser.h>
#include <Uno.Net.Http.HashParser.h>
#include <Uno.Net.Http.HostInfo.h>
#include <Uno.Net.Http.HostInfoParser.h>
#include <Uno.Net.Http.HttpDefaultDispatcher.h>
#include <Uno.Net.Http.HttpMessageCache.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandler.StaticData.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.Implementation.AndroidHttpRequest.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Net.Http.InvalidResponseTypeException.h>
#include <Uno.Net.Http.InvalidStateException.h>
#include <Uno.Net.Http.QueryParser.h>
#include <Uno.Net.Http.SchemeParser.h>
#include <Uno.Net.Http.SchemeParserResult.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Net.Http.UriFormatException.h>
#include <Uno.Net.Http.UriScheme.h>
#include <Uno.Net.Http.UriSchemeType.h>
#include <Uno.Net.Http.UserInfoParser.h>
#include <Uno.NotSupportedException.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
static uString* STRINGS[60];
static uType* TYPES[27];

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno(8)
// -------------------------------------------------------------------

// public sealed class AbsolutePathParser :8
// {
uType* AbsolutePathParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AbsolutePathParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.AbsolutePathParser", options);
    ::STRINGS[0] = uString::Const("/");
    return type;
}

// public static string Parse(string uriString, int idx, int endIdx, int& startPartIdx) :10
void AbsolutePathParser__Parse_fn(uString* uriString, int* idx, int* endIdx, int* startPartIdx, uString** __retval)
{
    *__retval = AbsolutePathParser::Parse(uriString, *idx, *endIdx, startPartIdx);
}

// public static string Parse(string uriString, int idx, int endIdx, int& startPartIdx) [static] :10
uString* AbsolutePathParser::Parse(uString* uriString, int idx, int endIdx, int* startPartIdx)
{
    int start = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[0/*"/"*/], idx);

    if ((start < 0) || (start >= endIdx))
    {
        *startPartIdx = endIdx;
        return ::STRINGS[0/*"/"*/];
    }

    *startPartIdx = start;
    return ::g::Uno::String::Substring1(uriString, start, endIdx - start);
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(334)
// ----------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure :334
// {
uType* HttpMessageHandlerRequest__DispatchClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", options);
    ::STRINGS[1] = uString::Const("Invalid state: The request has already completed.");
    ::TYPES[0] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _arg), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _state), 0);
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :340
void HttpMessageHandlerRequest__DispatchClosure__ctor__fn(HttpMessageHandlerRequest__DispatchClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    __this->ctor_(*state, action, arg);
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :340
void HttpMessageHandlerRequest__DispatchClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg, HttpMessageHandlerRequest__DispatchClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__DispatchClosure::New1(*state, action, arg);
}

// public void Run() :347
void HttpMessageHandlerRequest__DispatchClosure__Run_fn(HttpMessageHandlerRequest__DispatchClosure* __this)
{
    __this->Run();
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [instance] :340
void HttpMessageHandlerRequest__DispatchClosure::ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    _action = action;
    _arg = arg;
    _state = state;
}

// public void Run() [instance] :347
void HttpMessageHandlerRequest__DispatchClosure::Run()
{
    if (uPtr(_arg)->IsComplete())
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New5(::STRINGS[1/*"Invalid sta...*/]));

    uPtr(_arg)->State(_state);
    uPtr(_action)->InvokeVoid(_arg);
    uPtr(_arg)->CompleteRequest();
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [static] :340
HttpMessageHandlerRequest__DispatchClosure* HttpMessageHandlerRequest__DispatchClosure::New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    HttpMessageHandlerRequest__DispatchClosure* obj1 = (HttpMessageHandlerRequest__DispatchClosure*)uNew(HttpMessageHandlerRequest__DispatchClosure_typeof());
    obj1->ctor_(state, action, arg);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(357)
// ----------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure<TArg1> :357
// {
uType* HttpMessageHandlerRequest__DispatchClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", options);
    ::STRINGS[1] = uString::Const("Invalid state: The request has already completed.");
    ::TYPES[0] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[2] = ::g::Uno::Action2_typeof();
    type->SetPrecalc(
        ::TYPES[2/*Uno.Action`2*/]->MakeType(::TYPES[0/*Uno.Net.Http.HttpMessageHandlerRequest*/], type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), type->T(0)), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _arg0), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _state), 0);
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :364
void HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(HttpMessageHandlerRequest__DispatchClosure1* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    int state_ = *state;
    __this->_action = action;
    __this->_arg0 = arg0;
    __this->_arg1() = arg1;
    __this->_state = state_;
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :364
void HttpMessageHandlerRequest__DispatchClosure1__New1_fn(uType* __type, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1, HttpMessageHandlerRequest__DispatchClosure1** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    int state_ = *state;
    HttpMessageHandlerRequest__DispatchClosure1* obj1 = (HttpMessageHandlerRequest__DispatchClosure1*)uNew(__type);
    HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(obj1, uCRef<int>(state_), action, arg0, arg1);
    return *__retval = obj1, void();
}

// public void Run() :372
void HttpMessageHandlerRequest__DispatchClosure1__Run_fn(HttpMessageHandlerRequest__DispatchClosure1* __this)
{
    __this->Run();
}

// public void Run() [instance] :372
void HttpMessageHandlerRequest__DispatchClosure1::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1>*/),
        __type->T(0),
    };

    if (uPtr(_arg0)->IsComplete())
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New5(::STRINGS[1/*"Invalid sta...*/]));

    uPtr(_arg0)->State(_state);
    uPtr(_action)->Invoke(2, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_arg0, (void*)_arg1());
    uPtr(_arg0)->CompleteRequest();
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno(31)
// --------------------------------------------------------------------

// public sealed class HashParser :31
// {
uType* HashParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(HashParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HashParser", options);
    ::TYPES[3] = ::g::Uno::String_typeof();
    return type;
}

// public static string Parse(string uriString, int idx, int& startPartIdx) :33
void HashParser__Parse_fn(uString* uriString, int* idx, int* startPartIdx, uString** __retval)
{
    *__retval = HashParser::Parse(uriString, *idx, startPartIdx);
}

// public static string Parse(string uriString, int idx, int& startPartIdx) [static] :33
uString* HashParser::Parse(uString* uriString, int idx, int* startPartIdx)
{
    if (idx >= uPtr(uriString)->Length())
        return ::g::Uno::String::Empty();

    int start = ::g::Uno::String::IndexOf(uPtr(uriString), '#', idx);

    if (start >= 0)
    {
        *startPartIdx = start;
        return ::g::Uno::String::Substring(uPtr(uriString), *startPartIdx);
    }

    return ::g::Uno::String::Empty();
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno(58)
// --------------------------------------------------------------------

// public sealed class HostInfo :58
// {
uType* HostInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HostInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HostInfo", options);
    type->fp_ctor_ = (void*)HostInfo__New1_fn;
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HostInfo, _Authority), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HostInfo, _Host), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::HostInfo, _Port), 0);
    return type;
}

// public generated HostInfo() :58
void HostInfo__ctor__fn(HostInfo* __this)
{
    __this->ctor_();
}

// public generated string get_Authority() :60
void HostInfo__get_Authority_fn(HostInfo* __this, uString** __retval)
{
    *__retval = __this->Authority();
}

// public generated void set_Authority(string value) :60
void HostInfo__set_Authority_fn(HostInfo* __this, uString* value)
{
    __this->Authority(value);
}

// public generated string get_Host() :62
void HostInfo__get_Host_fn(HostInfo* __this, uString** __retval)
{
    *__retval = __this->Host();
}

// public generated void set_Host(string value) :62
void HostInfo__set_Host_fn(HostInfo* __this, uString* value)
{
    __this->Host(value);
}

// public generated HostInfo New() :58
void HostInfo__New1_fn(HostInfo** __retval)
{
    *__retval = HostInfo::New1();
}

// public generated int get_Port() :64
void HostInfo__get_Port_fn(HostInfo* __this, int* __retval)
{
    *__retval = __this->Port();
}

// public generated void set_Port(int value) :64
void HostInfo__set_Port_fn(HostInfo* __this, int* value)
{
    __this->Port(*value);
}

// public generated HostInfo() [instance] :58
void HostInfo::ctor_()
{
}

// public generated string get_Authority() [instance] :60
uString* HostInfo::Authority()
{
    return _Authority;
}

// public generated void set_Authority(string value) [instance] :60
void HostInfo::Authority(uString* value)
{
    _Authority = value;
}

// public generated string get_Host() [instance] :62
uString* HostInfo::Host()
{
    return _Host;
}

// public generated void set_Host(string value) [instance] :62
void HostInfo::Host(uString* value)
{
    _Host = value;
}

// public generated int get_Port() [instance] :64
int HostInfo::Port()
{
    return _Port;
}

// public generated void set_Port(int value) [instance] :64
void HostInfo::Port(int value)
{
    _Port = value;
}

// public generated HostInfo New() [static] :58
HostInfo* HostInfo::New1()
{
    HostInfo* obj1 = (HostInfo*)uNew(HostInfo_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno(67)
// --------------------------------------------------------------------

// public sealed class HostInfoParser :67
// {
// static HostInfoParser() :67
static void HostInfoParser__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::List* collection1;
    HostInfoParser::_invalidChars_ = (collection1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[2/*".."*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[3/*","*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[4/*"\\"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[5/*"|"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[6/*"<"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[7/*">"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[8/*"'"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[9/*";"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[10/*":"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[11/*"["*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[12/*"]"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[13/*"{"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[14/*"}"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[15/*"("*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[16/*")"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[17/*"="*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[18/*"+"*/]), collection1);
}

uType* HostInfoParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HostInfoParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HostInfoParser", options);
    type->fp_cctor_ = HostInfoParser__cctor__fn;
    ::STRINGS[2] = uString::Const("..");
    ::STRINGS[3] = uString::Const(",");
    ::STRINGS[4] = uString::Const("\\");
    ::STRINGS[5] = uString::Const("|");
    ::STRINGS[6] = uString::Const("<");
    ::STRINGS[7] = uString::Const(">");
    ::STRINGS[8] = uString::Const("'");
    ::STRINGS[9] = uString::Const(";");
    ::STRINGS[10] = uString::Const(":");
    ::STRINGS[11] = uString::Const("[");
    ::STRINGS[12] = uString::Const("]");
    ::STRINGS[13] = uString::Const("{");
    ::STRINGS[14] = uString::Const("}");
    ::STRINGS[15] = uString::Const("(");
    ::STRINGS[16] = uString::Const(")");
    ::STRINGS[17] = uString::Const("=");
    ::STRINGS[18] = uString::Const("+");
    ::STRINGS[19] = uString::Const("The port number specified in uriString is not valid or cannot be parsed.");
    ::STRINGS[20] = uString::Const(".");
    ::STRINGS[21] = uString::Const("There is an invalid character sequence in uriString.");
    ::STRINGS[0] = uString::Const("/");
    ::STRINGS[22] = uString::Const("The host specified in uriString is not valid or cannot be parsed.");
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[7] = ::g::Uno::Net::Http::UriScheme_typeof();
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[9] = ::g::Uno::Net::Http::HostInfo_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::HostInfoParser::_invalidChars_, uFieldFlagsStatic);
    return type;
}

// private static int ExtractPort(string portString, int defaultPort) :127
void HostInfoParser__ExtractPort_fn(uString* portString, int* defaultPort, int* __retval)
{
    *__retval = HostInfoParser::ExtractPort(portString, *defaultPort);
}

// private static int GetDafaultPort(string scheme) :145
void HostInfoParser__GetDafaultPort_fn(uString* scheme, int* __retval)
{
    *__retval = HostInfoParser::GetDafaultPort(scheme);
}

// private static bool IsHostValid(string userInfo) :116
void HostInfoParser__IsHostValid_fn(uString* userInfo, bool* __retval)
{
    *__retval = HostInfoParser::IsHostValid(userInfo);
}

// public static Uno.Net.Http.HostInfo Parse(string uriString, string scheme, int endIdx, int& idx) :71
void HostInfoParser__Parse_fn(uString* uriString, uString* scheme, int* endIdx, int* idx, ::g::Uno::Net::Http::HostInfo** __retval)
{
    *__retval = HostInfoParser::Parse(uriString, scheme, *endIdx, idx);
}

uSStrong< ::g::Uno::Collections::List*> HostInfoParser::_invalidChars_;

// private static int ExtractPort(string portString, int defaultPort) [static] :127
int HostInfoParser::ExtractPort(uString* portString, int defaultPort)
{
    HostInfoParser_typeof()->Init();
    int port = 0;

    if (::g::Uno::String::IsNullOrEmpty(portString))
        port = defaultPort;
    else
    {
        if (!::g::Uno::Int::TryParse(portString, &port))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[19/*"The port nu...*/]));
    }

    return port;
}

// private static int GetDafaultPort(string scheme) [static] :145
int HostInfoParser::GetDafaultPort(uString* scheme)
{
    HostInfoParser_typeof()->Init();
    int ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Uno::Net::Http::UriScheme::DefaultPorts()), ::g::Uno::String::ToLower(uPtr(scheme)), &ret5), ret5);
}

// private static bool IsHostValid(string userInfo) [static] :116
bool HostInfoParser::IsHostValid(uString* userInfo)
{
    HostInfoParser_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret6;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(HostInfoParser::_invalidChars()), &ret6), ret6); enum3.MoveNext(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* chars = enum3.Current(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]);

        if (::g::Uno::String::IndexOf1(uPtr(userInfo), chars, 0) >= 0)
            return false;
    }

    return !::g::Uno::String::StartsWith(uPtr(userInfo), ::STRINGS[20/*"."*/]);
}

// public static Uno.Net.Http.HostInfo Parse(string uriString, string scheme, int endIdx, int& idx) [static] :71
::g::Uno::Net::Http::HostInfo* HostInfoParser::Parse(uString* uriString, uString* scheme, int endIdx, int* idx)
{
    HostInfoParser_typeof()->Init();
    ::g::Uno::Net::Http::HostInfo* collection2;

    if (*idx >= endIdx)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"There is an...*/]));

    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[0/*"/"*/], *idx);

    if ((end < 0) || (end >= endIdx))
        end = endIdx;

    uString* hostInfoString = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);
    *idx = end;

    if (::g::Uno::String::IsNullOrEmpty(hostInfoString))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[22/*"The host sp...*/]));

    int delim = ::g::Uno::String::IndexOf1(uPtr(hostInfoString), ::STRINGS[10/*":"*/], 0);
    collection2 = ::g::Uno::Net::Http::HostInfo::New1();
    uPtr(collection2)->Authority(hostInfoString);
    hostInfoString;
    ::g::Uno::Net::Http::HostInfo* hostInfo = collection2;

    if (delim > 0)
    {
        uString* portString = ::g::Uno::String::Substring(uPtr(hostInfoString), delim + 1);
        uPtr(hostInfo)->Host(::g::Uno::String::Substring1(hostInfoString, 0, delim));
        hostInfo->Port(HostInfoParser::ExtractPort(portString, HostInfoParser::GetDafaultPort(scheme)));
    }
    else
    {
        uPtr(hostInfo)->Host(hostInfoString);
        hostInfo->Port(HostInfoParser::GetDafaultPort(scheme));
    }

    if (!HostInfoParser::IsHostValid(uPtr(hostInfo)->Host()))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[22/*"The host sp...*/]));

    return hostInfo;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(843)
// ----------------------------------------------------------

// internal sealed class HttpDefaultDispatcher :843
// {
HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof()
{
    static uSStrong<HttpDefaultDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpDefaultDispatcher);
    options.TypeSize = sizeof(HttpDefaultDispatcher_type);
    type = (HttpDefaultDispatcher_type*)uClassType::New("Uno.Net.Http.HttpDefaultDispatcher", options);
    type->fp_ctor_ = (void*)HttpDefaultDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))HttpDefaultDispatcher__Invoke_fn;
    ::TYPES[10] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpDefaultDispatcher_type, interface0));
    return type;
}

// public HttpDefaultDispatcher() :845
void HttpDefaultDispatcher__ctor__fn(HttpDefaultDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :850
void HttpDefaultDispatcher__Invoke_fn(HttpDefaultDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public HttpDefaultDispatcher New() :845
void HttpDefaultDispatcher__New1_fn(HttpDefaultDispatcher** __retval)
{
    *__retval = HttpDefaultDispatcher::New1();
}

// public HttpDefaultDispatcher() [instance] :845
void HttpDefaultDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :850
void HttpDefaultDispatcher::Invoke(uDelegate* action)
{
    uPtr(action)->InvokeVoid();
}

// public HttpDefaultDispatcher New() [static] :845
HttpDefaultDispatcher* HttpDefaultDispatcher::New1()
{
    HttpDefaultDispatcher* obj1 = (HttpDefaultDispatcher*)uNew(HttpDefaultDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(5)
// --------------------------------------------------------

// public static class HttpMessageCache :5
// {
// static HttpMessageCache() :36
static void HttpMessageCache__cctor__fn(uType* __type)
{
    ::g::Uno::Platform2::Application::add_Started(uDelegate::New(::TYPES[12/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
}

uClassType* HttpMessageCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageCache", options);
    type->fp_cctor_ = HttpMessageCache__cctor__fn;
    ::TYPES[11] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[12] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_isCacheDisabled_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_isInitialized_, uFieldFlagsStatic,
        ::g::Uno::Long_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_maxCacheSizeInBytes_, uFieldFlagsStatic);
    return type;
}

// public static void Init() :47
void HttpMessageCache__Init_fn()
{
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() :13
void HttpMessageCache__get_IsCacheEnabled_fn(bool* __retval)
{
    *__retval = HttpMessageCache::IsCacheEnabled();
}

// public static void set_IsCacheEnabled(bool value) :14
void HttpMessageCache__set_IsCacheEnabled_fn(bool* value)
{
    HttpMessageCache::IsCacheEnabled(*value);
}

// private static void OnApplicationStarted(Uno.Platform2.ApplicationState state) :42
void HttpMessageCache__OnApplicationStarted_fn(int* state)
{
    HttpMessageCache::OnApplicationStarted(*state);
}

bool HttpMessageCache::_isCacheDisabled_;
bool HttpMessageCache::_isInitialized_;
int64_t HttpMessageCache::_maxCacheSizeInBytes_;

// public static void Init() [static] :47
void HttpMessageCache::Init()
{
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized())
        return;

    HttpMessageCache::_isInitialized() = true;
    ::g::Uno::Platform2::Application::remove_Started(uDelegate::New(::TYPES[12/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));

    if (!HttpMessageCache::IsCacheEnabled())
        return;

    int64_t cacheSize = (HttpMessageCache::_maxCacheSizeInBytes() != 0LL) ? HttpMessageCache::_maxCacheSizeInBytes() : 20971520LL;
    ::g::Android::com::fuse::ExperimentalHttp::HttpRequest::InstallCache((uObject*)::g::Android::Base::JNI::GetWrappedActivityObject(), cacheSize);
}

// private static void OnApplicationStarted(Uno.Platform2.ApplicationState state) [static] :42
void HttpMessageCache::OnApplicationStarted(int state)
{
    HttpMessageCache_typeof()->Init();
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() [static] :13
bool HttpMessageCache::IsCacheEnabled()
{
    HttpMessageCache_typeof()->Init();
    return !HttpMessageCache::_isCacheDisabled();
}

// public static void set_IsCacheEnabled(bool value) [static] :14
void HttpMessageCache::IsCacheEnabled(bool value)
{
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized())
        ;
    else
        HttpMessageCache::_isCacheDisabled() = !value;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(91)
// ---------------------------------------------------------

// public sealed class HttpMessageHandler :91
// {
HttpMessageHandler_type* HttpMessageHandler_typeof()
{
    static uSStrong<HttpMessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandler);
    options.TypeSize = sizeof(HttpMessageHandler_type);
    type = (HttpMessageHandler_type*)uClassType::New("Uno.Net.Http.HttpMessageHandler", options);
    type->fp_ctor_ = (void*)HttpMessageHandler__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandler__Dispose_fn;
    ::TYPES[14] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    ::TYPES[15] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[16] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandler_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandler, _defaultDispatcher), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandler, _pendingRequests), 0);
    return type;
}

// public HttpMessageHandler() :123
void HttpMessageHandler__ctor__fn(HttpMessageHandler* __this)
{
    __this->ctor_();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) :174
void HttpMessageHandler__CompleteRequest_fn(HttpMessageHandler* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->CompleteRequest(request);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) :155
void HttpMessageHandler__CreateRequest1_fn(HttpMessageHandler* __this, uString* method, uString* url, uObject* dispatcher, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest1(method, url, dispatcher);
}

// public void Dispose() :134
void HttpMessageHandler__Dispose_fn(HttpMessageHandler* __this)
{
    __this->Dispose();
}

// public HttpMessageHandler New() :123
void HttpMessageHandler__New1_fn(HttpMessageHandler** __retval)
{
    *__retval = HttpMessageHandler::New1();
}

// public HttpMessageHandler() [instance] :123
void HttpMessageHandler::ctor_()
{
    ::g::Uno::Net::Http::HttpMessageCache::Init();
    _pendingRequests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[14/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>*/]));
    _defaultDispatcher = (uObject*)::g::Uno::Net::Http::HttpDefaultDispatcher::New1();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) [instance] :174
void HttpMessageHandler::CompleteRequest(::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret5;

    for (int i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), &ret5), ret5) == request)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), NULL);
            HttpMessageHandler__StaticData::DecrementPendingRequests();
            break;
        }
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :155
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest1(uString* method, uString* url, uObject* dispatcher)
{
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret6;
    HttpMessageHandler__StaticData::IncrementPendingRequests();
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = ::g::Uno::Net::Http::HttpMessageHandlerRequest::New1(this, method, url, dispatcher);

    for (int i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), &ret6), ret6) == NULL)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), request);
            return request;
        }

    ::g::Uno::Collections::List__Add_fn(uPtr(_pendingRequests), request);
    return request;
}

// public void Dispose() [instance] :134
void HttpMessageHandler::Dispose()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret7;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret7), ret7); enum1.MoveNext(::TYPES[16/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator*/]); )
    {
        ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum1.Current(::TYPES[16/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator*/]);

        if (request != NULL)
            uPtr(request)->Dispose();
    }

    _pendingRequests = NULL;
}

// public HttpMessageHandler New() [static] :123
HttpMessageHandler* HttpMessageHandler::New1()
{
    HttpMessageHandler* obj3 = (HttpMessageHandler*)uNew(HttpMessageHandler_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(200)
// ----------------------------------------------------------

// public sealed class HttpMessageHandlerRequest :200
// {
//  ~HttpMessageHandlerRequest() :261
static void HttpMessageHandlerRequest__Finalize_fn(HttpMessageHandlerRequest* __this)
{
    if (__this->_httpRequest == NULL)
        return;

    __this->Dispose();
}

HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof()
{
    static uSStrong<HttpMessageHandlerRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest);
    options.TypeSize = sizeof(HttpMessageHandlerRequest_type);
    type = (HttpMessageHandlerRequest_type*)uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest", options);
    type->fp_Finalize = (void(*)(uObject*))HttpMessageHandlerRequest__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandlerRequest__Dispose_fn;
    ::STRINGS[23] = uString::Const("handler");
    ::STRINGS[24] = uString::Const("method");
    ::STRINGS[25] = uString::Const("url");
    ::STRINGS[26] = uString::Const("dispatcher");
    ::STRINGS[27] = uString::Const("DELETE");
    ::STRINGS[28] = uString::Const("GET");
    ::STRINGS[29] = uString::Const("HEAD");
    ::STRINGS[30] = uString::Const("POST");
    ::STRINGS[31] = uString::Const("PUT");
    ::STRINGS[32] = uString::Const("OPTIONS");
    ::STRINGS[33] = uString::Const("HTTP method not supported.");
    ::STRINGS[34] = uString::Const("HttpMessageHandlerRequest");
    ::STRINGS[35] = uString::Const("");
    ::STRINGS[36] = uString::Const("Not allowed to set header \"");
    ::STRINGS[37] = uString::Const("\" on this target.");
    ::TYPES[17] = ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[22] = HttpMessageHandlerRequest__DispatchClosure1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof());
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[23] = ::g::Uno::Net::Http::Implementation::AndroidHttpRequest_typeof();
    ::TYPES[24] = ::g::Uno::Action2_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof());
    ::TYPES[25] = ::g::Uno::Action4_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandlerRequest_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _dispatcher), 0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _httpMessageHandler), 0,
        ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _httpRequest), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _method), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _optionalPayloadCache), 0,
        ::g::Uno::Net::Http::HttpResponseType_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _responseType), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _state), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _url), 0,
        ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Aborted1), 0,
        ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Done1), 0,
        ::g::Uno::Action2_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Error1), 0,
        ::g::Uno::Action4_typeof()->MakeType(HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Progress1), 0,
        ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, StateChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(HttpMessageHandlerRequest_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Timeout1), 0);
    return type;
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :214
void HttpMessageHandlerRequest__ctor__fn(HttpMessageHandlerRequest* __this, ::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    __this->ctor_(handler, method, url, dispatcher);
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :327
void HttpMessageHandlerRequest__add_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Aborted(value);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :327
void HttpMessageHandlerRequest__remove_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Aborted(value);
}

// private void CheckDisposed() :269
void HttpMessageHandlerRequest__CheckDisposed_fn(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();
}

// internal void CompleteRequest() :286
void HttpMessageHandlerRequest__CompleteRequest_fn(HttpMessageHandlerRequest* __this)
{
    __this->CompleteRequest();
}

// public void Dispose() :275
void HttpMessageHandlerRequest__Dispose_fn(HttpMessageHandlerRequest* __this)
{
    __this->Dispose();
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :330
void HttpMessageHandlerRequest__add_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Done(value);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :330
void HttpMessageHandlerRequest__remove_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Done(value);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :328
void HttpMessageHandlerRequest__add_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :328
void HttpMessageHandlerRequest__remove_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// private void FireSetHeadersReceived() :447
void HttpMessageHandlerRequest__FireSetHeadersReceived_fn(HttpMessageHandlerRequest* __this)
{
    __this->FireSetHeadersReceived();
}

// public byte[] GetResponseContentByteArray() :630
void HttpMessageHandlerRequest__GetResponseContentByteArray_fn(HttpMessageHandlerRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseContentString() :616
void HttpMessageHandlerRequest__GetResponseContentString_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseContentString();
}

// public string GetResponseHeaders() :604
void HttpMessageHandlerRequest__GetResponseHeaders_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public int GetResponseStatus() :582
void HttpMessageHandlerRequest__GetResponseStatus_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() :297
void HttpMessageHandlerRequest__get_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->HttpResponseType();
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) :298
void HttpMessageHandlerRequest__set_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* value)
{
    __this->HttpResponseType(*value);
}

// private bool IsComplete() :410
void HttpMessageHandlerRequest__IsComplete_fn(HttpMessageHandlerRequest* __this, bool* __retval)
{
    *__retval = __this->IsComplete();
}

// private static bool IsHeaderValid(string name, string value) :645
void HttpMessageHandlerRequest__IsHeaderValid_fn(uString* name, uString* value, bool* __retval)
{
    *__retval = HttpMessageHandlerRequest::IsHeaderValid(name, value);
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :214
void HttpMessageHandlerRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher, HttpMessageHandlerRequest** __retval)
{
    *__retval = HttpMessageHandlerRequest::New1(handler, method, url, dispatcher);
}

// internal void OnAborted() :415
void HttpMessageHandlerRequest__OnAborted_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnAborted();
}

// internal void OnDone() :436
void HttpMessageHandlerRequest__OnDone_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnDone();
}

// internal void OnError(string platformspesificErrorMessage) :422
void HttpMessageHandlerRequest__OnError_fn(HttpMessageHandlerRequest* __this, uString* platformspesificErrorMessage)
{
    __this->OnError(platformspesificErrorMessage);
}

// internal void OnHeadersReceived() :443
void HttpMessageHandlerRequest__OnHeadersReceived_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnHeadersReceived();
}

// internal void OnProgress(int current, int total, bool hasTotal) :452
void HttpMessageHandlerRequest__OnProgress_fn(HttpMessageHandlerRequest* __this, int* current, int* total, bool* hasTotal)
{
    __this->OnProgress(*current, *total, *hasTotal);
}

// internal void OnStateChanged() :314
void HttpMessageHandlerRequest__OnStateChanged_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnStateChanged();
}

// internal void OnTimeout() :429
void HttpMessageHandlerRequest__OnTimeout_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnTimeout();
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :332
void HttpMessageHandlerRequest__add_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Progress(value);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :332
void HttpMessageHandlerRequest__remove_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Progress(value);
}

// public void SendAsync() :555
void HttpMessageHandlerRequest__SendAsync_fn(HttpMessageHandlerRequest* __this)
{
    __this->SendAsync();
}

// public void SetHeader(string name, string value) :471
void HttpMessageHandlerRequest__SetHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString* value)
{
    __this->SetHeader(name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) :494
void HttpMessageHandlerRequest__SetResponseType_fn(HttpMessageHandlerRequest* __this, int* responseType)
{
    __this->SetResponseType(*responseType);
}

// public Uno.Net.Http.HttpRequestState get_State() :303
void HttpMessageHandlerRequest__get_State_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->State();
}

// private void set_State(Uno.Net.Http.HttpRequestState value) :304
void HttpMessageHandlerRequest__set_State_fn(HttpMessageHandlerRequest* __this, int* value)
{
    __this->State(*value);
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :331
void HttpMessageHandlerRequest__add_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :331
void HttpMessageHandlerRequest__remove_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :329
void HttpMessageHandlerRequest__add_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Timeout(value);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :329
void HttpMessageHandlerRequest__remove_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Timeout(value);
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :214
void HttpMessageHandlerRequest::ctor_(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    if (handler == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[23/*"handler"*/]));

    if (::g::Uno::String::op_Equality(method, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[24/*"method"*/]));

    if (::g::Uno::String::op_Equality(url, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[25/*"url"*/]));

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[26/*"dispatcher"*/]));

    method = ::g::Uno::String::ToUpper(uPtr(method));

    if (((((::g::Uno::String::op_Inequality(method, ::STRINGS[27/*"DELETE"*/]) && ::g::Uno::String::op_Inequality(method, ::STRINGS[28/*"GET"*/])) && ::g::Uno::String::op_Inequality(method, ::STRINGS[29/*"HEAD"*/])) && ::g::Uno::String::op_Inequality(method, ::STRINGS[30/*"POST"*/])) && ::g::Uno::String::op_Inequality(method, ::STRINGS[31/*"PUT"*/])) && ::g::Uno::String::op_Inequality(method, ::STRINGS[32/*"OPTIONS"*/]))
        U_THROW(::g::Uno::NotSupportedException::New5(::STRINGS[33/*"HTTP method...*/]));

    _httpRequest = (uObject*)::g::Uno::Net::Http::Implementation::AndroidHttpRequest::New3(this, method, url);
    _httpMessageHandler = handler;
    _method = method;
    _url = url;
    _dispatcher = dispatcher;
    State(1);
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :327
void HttpMessageHandlerRequest::add_Aborted(uDelegate* value)
{
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Aborted1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :327
void HttpMessageHandlerRequest::remove_Aborted(uDelegate* value)
{
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Aborted1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// private void CheckDisposed() [instance] :269
void HttpMessageHandlerRequest::CheckDisposed()
{
    if (_httpRequest == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[34/*"HttpMessage...*/]));
}

// internal void CompleteRequest() [instance] :286
void HttpMessageHandlerRequest::CompleteRequest()
{
    uPtr(_httpMessageHandler)->CompleteRequest(this);
    _httpMessageHandler = NULL;
}

// public void Dispose() [instance] :275
void HttpMessageHandlerRequest::Dispose()
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_httpRequest), ::g::Uno::IDisposable_typeof()));
    _httpRequest = NULL;
    _optionalPayloadCache = NULL;
    ::g::Uno::GC::SuppressFinalize(this);
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :330
void HttpMessageHandlerRequest::add_Done(uDelegate* value)
{
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Done1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :330
void HttpMessageHandlerRequest::remove_Done(uDelegate* value)
{
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Done1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :328
void HttpMessageHandlerRequest::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[24/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/]);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :328
void HttpMessageHandlerRequest::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[24/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/]);
}

// private void FireSetHeadersReceived() [instance] :447
void HttpMessageHandlerRequest::FireSetHeadersReceived()
{
    State(3);
}

// public byte[] GetResponseContentByteArray() [instance] :630
uArray* HttpMessageHandlerRequest::GetResponseContentByteArray()
{
    CheckDisposed();

    if (HttpResponseType() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uArray::New(::TYPES[20/*byte[]*/], 0);

    uArray* ind2 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentByteArray(uInterface(uPtr(_httpRequest), ::TYPES[17/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    return (ind2 != NULL) ? ind2 : uArray::New(::TYPES[20/*byte[]*/], 0);
}

// public string GetResponseContentString() [instance] :616
uString* HttpMessageHandlerRequest::GetResponseContentString()
{
    CheckDisposed();

    if (HttpResponseType() != 0)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return ::STRINGS[35/*""*/];

    uString* ind1 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentString(uInterface(uPtr(_httpRequest), ::TYPES[17/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    return (ind1 != NULL) ? ind1 : ::STRINGS[35/*""*/];
}

// public string GetResponseHeaders() [instance] :604
uString* HttpMessageHandlerRequest::GetResponseHeaders()
{
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return ::STRINGS[35/*""*/];

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeaders(uInterface(uPtr(_httpRequest), ::TYPES[17/*Uno.Net.Http.Implementation.IHttpRequest*/]));
}

// public int GetResponseStatus() [instance] :582
int HttpMessageHandlerRequest::GetResponseStatus()
{
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return 0;

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseStatus(uInterface(uPtr(_httpRequest), ::TYPES[17/*Uno.Net.Http.Implementation.IHttpRequest*/]));
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() [instance] :297
int HttpMessageHandlerRequest::HttpResponseType()
{
    return _responseType;
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) [instance] :298
void HttpMessageHandlerRequest::HttpResponseType(int value)
{
    SetResponseType(value);
}

// private bool IsComplete() [instance] :410
bool HttpMessageHandlerRequest::IsComplete()
{
    return State() >= 5;
}

// internal void OnAborted() [instance] :415
void HttpMessageHandlerRequest::OnAborted()
{
    uDelegate* handler = Aborted1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[15/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(6, handler, this)));
}

// internal void OnDone() [instance] :436
void HttpMessageHandlerRequest::OnDone()
{
    uDelegate* handler = Done1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[15/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(5, handler, this)));
}

// internal void OnError(string platformspesificErrorMessage) [instance] :422
void HttpMessageHandlerRequest::OnError(uString* platformspesificErrorMessage)
{
    HttpMessageHandlerRequest__DispatchClosure1* ret4;
    uDelegate* handler = Error1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[15/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure1__Run_fn, (HttpMessageHandlerRequest__DispatchClosure1__New1_fn(::TYPES[22/*Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure<string>*/], uCRef<int>(7), handler, this, platformspesificErrorMessage, &ret4), ret4)));
}

// internal void OnHeadersReceived() [instance] :443
void HttpMessageHandlerRequest::OnHeadersReceived()
{
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[15/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__FireSetHeadersReceived_fn, this));
}

// internal void OnProgress(int current, int total, bool hasTotal) [instance] :452
void HttpMessageHandlerRequest::OnProgress(int current, int total, bool hasTotal)
{
    uDelegate* handler = Progress1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[15/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__ProgressClosure__Run_fn, HttpMessageHandlerRequest__ProgressClosure::New1(4, handler, this, current, total, hasTotal)));
}

// internal void OnStateChanged() [instance] :314
void HttpMessageHandlerRequest::OnStateChanged()
{
    if (State() > 5)
        return;

    uDelegate* handler = StateChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(this);
}

// internal void OnTimeout() [instance] :429
void HttpMessageHandlerRequest::OnTimeout()
{
    uDelegate* handler = Timeout1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[15/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(8, handler, this)));
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :332
void HttpMessageHandlerRequest::add_Progress(uDelegate* value)
{
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Progress1, value), ::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/]);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :332
void HttpMessageHandlerRequest::remove_Progress(uDelegate* value)
{
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Progress1, value), ::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/]);
}

// public void SendAsync() [instance] :555
void HttpMessageHandlerRequest::SendAsync()
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;
    ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::TYPES[17/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    OnStateChanged();
}

// public void SetHeader(string name, string value) [instance] :471
void HttpMessageHandlerRequest::SetHeader(uString* name, uString* value)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    if (!HttpMessageHandlerRequest::IsHeaderValid(name, value))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[36/*"Not allowed...*/], name), ::STRINGS[37/*"\" on this ...*/])));

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetHeader(uInterface(uPtr(_httpRequest), ::TYPES[17/*Uno.Net.Http.Implementation.IHttpRequest*/]), name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) [instance] :494
void HttpMessageHandlerRequest::SetResponseType(int responseType)
{
    CheckDisposed();

    if (State() >= 4)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _responseType = responseType;
    uPtr(uAs< ::g::Uno::Net::Http::Implementation::AndroidHttpRequest*>(_httpRequest, ::TYPES[23/*Uno.Net.Http.Implementation.AndroidHttpRequest*/]))->SetResponseType1(responseType);
}

// public Uno.Net.Http.HttpRequestState get_State() [instance] :303
int HttpMessageHandlerRequest::State()
{
    return _state;
}

// private void set_State(Uno.Net.Http.HttpRequestState value) [instance] :304
void HttpMessageHandlerRequest::State(int value)
{
    if (_state == value)
        return;

    _state = value;
    OnStateChanged();
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :331
void HttpMessageHandlerRequest::add_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :331
void HttpMessageHandlerRequest::remove_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :329
void HttpMessageHandlerRequest::add_Timeout(uDelegate* value)
{
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Timeout1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :329
void HttpMessageHandlerRequest::remove_Timeout(uDelegate* value)
{
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Timeout1, value), ::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// private static bool IsHeaderValid(string name, string value) [static] :645
bool HttpMessageHandlerRequest::IsHeaderValid(uString* name, uString* value)
{
    return true;
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [static] :214
HttpMessageHandlerRequest* HttpMessageHandlerRequest::New1(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    HttpMessageHandlerRequest* obj3 = (HttpMessageHandlerRequest*)uNew(HttpMessageHandlerRequest_typeof());
    obj3->ctor_(handler, method, url, dispatcher);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(711)
// ----------------------------------------------------------

// public enum HttpRequestState :711
uEnumType* HttpRequestState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpRequestState", ::g::Uno::Int_typeof(), 10);
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
    return type;
}

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(734)
// ----------------------------------------------------------

// public enum HttpResponseType :734
uEnumType* HttpResponseType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpResponseType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", -1LL,
        "String", 0LL,
        "ByteArray", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(691)
// ----------------------------------------------------------

// public sealed class InvalidResponseTypeException :691
// {
uType* InvalidResponseTypeException_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidResponseTypeException);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.InvalidResponseTypeException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)InvalidResponseTypeException__New4_fn;
    ::STRINGS[38] = uString::Const("Response type is invalid.");
    type->SetFields(3);
    return type;
}

// public InvalidResponseTypeException() :693
void InvalidResponseTypeException__ctor_3_fn(InvalidResponseTypeException* __this)
{
    __this->ctor_3();
}

// public InvalidResponseTypeException New() :693
void InvalidResponseTypeException__New4_fn(InvalidResponseTypeException** __retval)
{
    *__retval = InvalidResponseTypeException::New4();
}

// public InvalidResponseTypeException() [instance] :693
void InvalidResponseTypeException::ctor_3()
{
    ctor_1(::STRINGS[38/*"Response ty...*/]);
}

// public InvalidResponseTypeException New() [static] :693
InvalidResponseTypeException* InvalidResponseTypeException::New4()
{
    InvalidResponseTypeException* obj1 = (InvalidResponseTypeException*)uNew(InvalidResponseTypeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(697)
// ----------------------------------------------------------

// public sealed class InvalidStateException :697
// {
uType* InvalidStateException_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidStateException);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.InvalidStateException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)InvalidStateException__New4_fn;
    ::STRINGS[39] = uString::Const("The object is in an invalid state.");
    type->SetFields(3);
    return type;
}

// public InvalidStateException() :699
void InvalidStateException__ctor_3_fn(InvalidStateException* __this)
{
    __this->ctor_3();
}

// public InvalidStateException(string message) :702
void InvalidStateException__ctor_4_fn(InvalidStateException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidStateException New() :699
void InvalidStateException__New4_fn(InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New4();
}

// public InvalidStateException New(string message) :702
void InvalidStateException__New5_fn(uString* message, InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New5(message);
}

// public InvalidStateException() [instance] :699
void InvalidStateException::ctor_3()
{
    ctor_1(::STRINGS[39/*"The object ...*/]);
}

// public InvalidStateException(string message) [instance] :702
void InvalidStateException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidStateException New() [static] :699
InvalidStateException* InvalidStateException::New4()
{
    InvalidStateException* obj1 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public InvalidStateException New(string message) [static] :702
InvalidStateException* InvalidStateException::New5(uString* message)
{
    InvalidStateException* obj2 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(382)
// ----------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.ProgressClosure :382
// {
uType* HttpMessageHandlerRequest__ProgressClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__ProgressClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure", options);
    ::STRINGS[1] = uString::Const("Invalid state: The request has already completed.");
    ::TYPES[0] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[25] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof());
    type->SetFields(0,
        ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _action), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _current), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _hasTotal), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _request), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _state), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _total), 0);
    return type;
}

// public ProgressClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) :391
void HttpMessageHandlerRequest__ProgressClosure__ctor__fn(HttpMessageHandlerRequest__ProgressClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int* current, int* total, bool* hasTotal)
{
    __this->ctor_(*state, action, request, *current, *total, *hasTotal);
}

// public ProgressClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) :391
void HttpMessageHandlerRequest__ProgressClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int* current, int* total, bool* hasTotal, HttpMessageHandlerRequest__ProgressClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__ProgressClosure::New1(*state, action, request, *current, *total, *hasTotal);
}

// public void Run() :401
void HttpMessageHandlerRequest__ProgressClosure__Run_fn(HttpMessageHandlerRequest__ProgressClosure* __this)
{
    __this->Run();
}

// public ProgressClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) [instance] :391
void HttpMessageHandlerRequest__ProgressClosure::ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal)
{
    _action = action;
    _request = request;
    _current = current;
    _total = total;
    _hasTotal = hasTotal;
    _state = state;
}

// public void Run() [instance] :401
void HttpMessageHandlerRequest__ProgressClosure::Run()
{
    if (uPtr(_request)->IsComplete())
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New5(::STRINGS[1/*"Invalid sta...*/]));

    uPtr(_request)->State(_state);
    uPtr(_action)->Invoke(4, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_request, uCRef<int>(_current), uCRef<int>(_total), uCRef(_hasTotal));
}

// public ProgressClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) [static] :391
HttpMessageHandlerRequest__ProgressClosure* HttpMessageHandlerRequest__ProgressClosure::New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal)
{
    HttpMessageHandlerRequest__ProgressClosure* obj1 = (HttpMessageHandlerRequest__ProgressClosure*)uNew(HttpMessageHandlerRequest__ProgressClosure_typeof());
    obj1->ctor_(state, action, request, current, total, hasTotal);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno(158)
// ---------------------------------------------------------------------

// public sealed class QueryParser :158
// {
uType* QueryParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(QueryParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.QueryParser", options);
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    return type;
}

// public static string Parse(string uriString, string scheme, int idx, int& startPartIdx) :160
void QueryParser__Parse_fn(uString* uriString, uString* scheme, int* idx, int* startPartIdx, uString** __retval)
{
    *__retval = QueryParser::Parse(uriString, scheme, *idx, startPartIdx);
}

// public static string Parse(string uriString, string scheme, int idx, int& startPartIdx) [static] :160
uString* QueryParser::Parse(uString* uriString, uString* scheme, int idx, int* startPartIdx)
{
    if ((idx >= uPtr(uriString)->Length()) || !::g::Uno::Net::Http::UriScheme::IsHttpScheme(scheme))
        return ::g::Uno::String::Empty();

    int startQuery = ::g::Uno::String::IndexOf(uPtr(uriString), '?', idx);
    int startHash = ::g::Uno::String::IndexOf(uriString, '#', idx);

    if (startHash < 0)
        startHash = uPtr(uriString)->Length();

    if ((startQuery >= 0) && (startQuery < startHash))
    {
        *startPartIdx = startQuery;
        return ::g::Uno::String::Substring1(uPtr(uriString), *startPartIdx, startHash - *startPartIdx);
    }

    return ::g::Uno::String::Empty();
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno(197)
// ---------------------------------------------------------------------

// public sealed class SchemeParser :197
// {
uType* SchemeParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SchemeParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.SchemeParser", options);
    ::STRINGS[10] = uString::Const(":");
    ::STRINGS[40] = uString::Const("The scheme isn't specified in uriString.");
    ::STRINGS[41] = uString::Const("The scheme specified in uriString is not correctly formed.");
    ::STRINGS[42] = uString::Const("The length of the scheme specified in uriString exceeds 1023 characters.");
    ::STRINGS[21] = uString::Const("There is an invalid character sequence in uriString.");
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Net::Http::SchemeParserResult_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    return type;
}

// public static Uno.Net.Http.SchemeParserResult Parse(string uriString, int& idx) :200
void SchemeParser__Parse_fn(uString* uriString, int* idx, ::g::Uno::Net::Http::SchemeParserResult* __retval)
{
    *__retval = SchemeParser::Parse(uriString, idx);
}

// public static Uno.Net.Http.SchemeParserResult Parse(string uriString, int& idx) [static] :200
::g::Uno::Net::Http::SchemeParserResult SchemeParser::Parse(uString* uriString, int* idx)
{
    ::g::Uno::Net::Http::SchemeParserResult result;
    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[10/*":"*/], *idx);

    if (end < 0)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[40/*"The scheme ...*/]));

    if (((*idx + 2) >= uriString->Length()) || (end == *idx))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[41/*"The scheme ...*/]));

    if ((end - *idx) > 1023)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[42/*"The length ...*/]));

    result.Scheme = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);
    result.Type = ::g::Uno::Net::Http::UriScheme::GetSchemeType(result.Scheme);

    if (result.Type == 2)
        return result;

    *idx = end + 1;

    if (result.Type == 0)
    {
        if ((((*idx + 1) >= uPtr(uriString)->Length()) || (uPtr(uriString)->Item(*idx) != '/')) || (uPtr(uriString)->Item(*idx + 1) != '/'))
            U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"There is an...*/]));

        *idx = *idx + 2;
    }

    return result;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno(191)
// ---------------------------------------------------------------------

// public struct SchemeParserResult :191
// {
uStructType* SchemeParserResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(SchemeParserResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Http.SchemeParserResult", options);
    type->SetFields(0,
        ::g::Uno::Net::Http::UriSchemeType_typeof(), offsetof(::g::Uno::Net::Http::SchemeParserResult, Type), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::SchemeParserResult, Scheme), 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(93)
// ---------------------------------------------------------

// internal static class HttpMessageHandler.StaticData :93
// {
uClassType* HttpMessageHandler__StaticData_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandler.StaticData", options);
    return type;
}

// internal static void DecrementPendingRequests() :104
void HttpMessageHandler__StaticData__DecrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::DecrementPendingRequests();
}

// internal static void IncrementPendingRequests() :97
void HttpMessageHandler__StaticData__IncrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::IncrementPendingRequests();
}

// internal static void DecrementPendingRequests() [static] :104
void HttpMessageHandler__StaticData::DecrementPendingRequests()
{
}

// internal static void IncrementPendingRequests() [static] :97
void HttpMessageHandler__StaticData::IncrementPendingRequests()
{
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(864)
// ----------------------------------------------------------

// public sealed class Uri :864
// {
uType* Uri_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(Uri);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.Uri", options);
    ::STRINGS[43] = uString::Const("uriString");
    ::STRINGS[44] = uString::Const("The length of uriString exceeds 65519 characters.");
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Net::Http::SchemeParserResult_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Uno::Net::Http::HostInfo_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _AbsolutePath), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _AbsoluteUri), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Authority), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Hash), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Host), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _OriginalString), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _PathAndQuery), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Port), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Query), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _Scheme), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::Uri, _UserInfo), 0);
    return type;
}

// public Uri(string uriString) :888
void Uri__ctor__fn(Uri* __this, uString* uriString)
{
    __this->ctor_(uriString);
}

// public generated string get_AbsolutePath() :866
void Uri__get_AbsolutePath_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->AbsolutePath();
}

// private generated void set_AbsolutePath(string value) :866
void Uri__set_AbsolutePath_fn(Uri* __this, uString* value)
{
    __this->AbsolutePath(value);
}

// public generated string get_AbsoluteUri() :868
void Uri__get_AbsoluteUri_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->AbsoluteUri();
}

// private generated void set_AbsoluteUri(string value) :868
void Uri__set_AbsoluteUri_fn(Uri* __this, uString* value)
{
    __this->AbsoluteUri(value);
}

// public generated string get_Authority() :870
void Uri__get_Authority_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Authority();
}

// private generated void set_Authority(string value) :870
void Uri__set_Authority_fn(Uri* __this, uString* value)
{
    __this->Authority(value);
}

// private void CreateThis(string uriString) :924
void Uri__CreateThis_fn(Uri* __this, uString* uriString)
{
    __this->CreateThis(uriString);
}

// public generated string get_Hash() :882
void Uri__get_Hash_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Hash();
}

// private generated void set_Hash(string value) :882
void Uri__set_Hash_fn(Uri* __this, uString* value)
{
    __this->Hash(value);
}

// public generated string get_Host() :872
void Uri__get_Host_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Host();
}

// private generated void set_Host(string value) :872
void Uri__set_Host_fn(Uri* __this, uString* value)
{
    __this->Host(value);
}

// public Uri New(string uriString) :888
void Uri__New1_fn(uString* uriString, Uri** __retval)
{
    *__retval = Uri::New1(uriString);
}

// public generated string get_OriginalString() :874
void Uri__get_OriginalString_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->OriginalString();
}

// private generated void set_OriginalString(string value) :874
void Uri__set_OriginalString_fn(Uri* __this, uString* value)
{
    __this->OriginalString(value);
}

// public generated string get_PathAndQuery() :876
void Uri__get_PathAndQuery_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->PathAndQuery();
}

// private generated void set_PathAndQuery(string value) :876
void Uri__set_PathAndQuery_fn(Uri* __this, uString* value)
{
    __this->PathAndQuery(value);
}

// public generated int get_Port() :878
void Uri__get_Port_fn(Uri* __this, int* __retval)
{
    *__retval = __this->Port();
}

// private generated void set_Port(int value) :878
void Uri__set_Port_fn(Uri* __this, int* value)
{
    __this->Port(*value);
}

// public generated string get_Query() :880
void Uri__get_Query_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Query();
}

// private generated void set_Query(string value) :880
void Uri__set_Query_fn(Uri* __this, uString* value)
{
    __this->Query(value);
}

// public generated string get_Scheme() :884
void Uri__get_Scheme_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->Scheme();
}

// private generated void set_Scheme(string value) :884
void Uri__set_Scheme_fn(Uri* __this, uString* value)
{
    __this->Scheme(value);
}

// public generated string get_UserInfo() :886
void Uri__get_UserInfo_fn(Uri* __this, uString** __retval)
{
    *__retval = __this->UserInfo();
}

// private generated void set_UserInfo(string value) :886
void Uri__set_UserInfo_fn(Uri* __this, uString* value)
{
    __this->UserInfo(value);
}

// public Uri(string uriString) [instance] :888
void Uri::ctor_(uString* uriString)
{
    if (::g::Uno::String::IsNullOrEmpty(uriString))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[43/*"uriString"*/]));

    uriString = ::g::Uno::String::Trim(uPtr(uriString));

    if (uriString->Length() > 65519)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[44/*"The length ...*/]));

    CreateThis(uriString);
}

// public generated string get_AbsolutePath() [instance] :866
uString* Uri::AbsolutePath()
{
    return _AbsolutePath;
}

// private generated void set_AbsolutePath(string value) [instance] :866
void Uri::AbsolutePath(uString* value)
{
    _AbsolutePath = value;
}

// public generated string get_AbsoluteUri() [instance] :868
uString* Uri::AbsoluteUri()
{
    return _AbsoluteUri;
}

// private generated void set_AbsoluteUri(string value) [instance] :868
void Uri::AbsoluteUri(uString* value)
{
    _AbsoluteUri = value;
}

// public generated string get_Authority() [instance] :870
uString* Uri::Authority()
{
    return _Authority;
}

// private generated void set_Authority(string value) [instance] :870
void Uri::Authority(uString* value)
{
    _Authority = value;
}

// private void CreateThis(string uriString) [instance] :924
void Uri::CreateThis(uString* uriString)
{
    int idx = 0;
    OriginalString((AbsoluteUri(uriString), uriString));
    ::g::Uno::Net::Http::SchemeParserResult schemeResult = ::g::Uno::Net::Http::SchemeParser::Parse(uriString, &idx);
    Scheme(schemeResult.Scheme);
    int queryOrHashPartIdx = uPtr(uriString)->Length();
    int partStartIdx = uriString->Length();
    int absolutePathPartIdx = 0;

    if (schemeResult.Type == 2)
        return;

    Query(::g::Uno::Net::Http::QueryParser::Parse(uriString, Scheme(), idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    Hash(::g::Uno::Net::Http::HashParser::Parse(uriString, idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    AbsolutePath(::g::Uno::Net::Http::AbsolutePathParser::Parse(uriString, idx, queryOrHashPartIdx, &absolutePathPartIdx));
    PathAndQuery(::g::Uno::String::op_Addition2(AbsolutePath(), Query()));
    UserInfo(::g::Uno::Net::Http::UserInfoParser::Parse(uriString, absolutePathPartIdx, &idx));
    ::g::Uno::Net::Http::HostInfo* hostInfo = ::g::Uno::Net::Http::HostInfoParser::Parse(uriString, Scheme(), absolutePathPartIdx, &idx);
    Host(uPtr(hostInfo)->Host());
    Port(hostInfo->Port());
    Authority(hostInfo->Authority());
}

// public generated string get_Hash() [instance] :882
uString* Uri::Hash()
{
    return _Hash;
}

// private generated void set_Hash(string value) [instance] :882
void Uri::Hash(uString* value)
{
    _Hash = value;
}

// public generated string get_Host() [instance] :872
uString* Uri::Host()
{
    return _Host;
}

// private generated void set_Host(string value) [instance] :872
void Uri::Host(uString* value)
{
    _Host = value;
}

// public generated string get_OriginalString() [instance] :874
uString* Uri::OriginalString()
{
    return _OriginalString;
}

// private generated void set_OriginalString(string value) [instance] :874
void Uri::OriginalString(uString* value)
{
    _OriginalString = value;
}

// public generated string get_PathAndQuery() [instance] :876
uString* Uri::PathAndQuery()
{
    return _PathAndQuery;
}

// private generated void set_PathAndQuery(string value) [instance] :876
void Uri::PathAndQuery(uString* value)
{
    _PathAndQuery = value;
}

// public generated int get_Port() [instance] :878
int Uri::Port()
{
    return _Port;
}

// private generated void set_Port(int value) [instance] :878
void Uri::Port(int value)
{
    _Port = value;
}

// public generated string get_Query() [instance] :880
uString* Uri::Query()
{
    return _Query;
}

// private generated void set_Query(string value) [instance] :880
void Uri::Query(uString* value)
{
    _Query = value;
}

// public generated string get_Scheme() [instance] :884
uString* Uri::Scheme()
{
    return _Scheme;
}

// private generated void set_Scheme(string value) [instance] :884
void Uri::Scheme(uString* value)
{
    _Scheme = value;
}

// public generated string get_UserInfo() [instance] :886
uString* Uri::UserInfo()
{
    return _UserInfo;
}

// private generated void set_UserInfo(string value) [instance] :886
void Uri::UserInfo(uString* value)
{
    _UserInfo = value;
}

// public Uri New(string uriString) [static] :888
Uri* Uri::New1(uString* uriString)
{
    Uri* obj4 = (Uri*)uNew(Uri_typeof());
    obj4->ctor_(uriString);
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(1081)
// -----------------------------------------------------------

// public sealed class UriFormatException :1081
// {
uType* UriFormatException_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UriFormatException);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UriFormatException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    return type;
}

// public UriFormatException(string message) :1083
void UriFormatException__ctor_3_fn(UriFormatException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public UriFormatException New(string message) :1083
void UriFormatException__New4_fn(uString* message, UriFormatException** __retval)
{
    *__retval = UriFormatException::New4(message);
}

// public UriFormatException(string message) [instance] :1083
void UriFormatException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public UriFormatException New(string message) [static] :1083
UriFormatException* UriFormatException::New4(uString* message)
{
    UriFormatException* obj1 = (UriFormatException*)uNew(UriFormatException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(1103)
// -----------------------------------------------------------

// public sealed class UriScheme :1103
// {
// static UriScheme() :1103
static void UriScheme__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::List* collection2;
    ::g::Uno::Collections::List* collection1;
    UriScheme::KnownInternetSchemes_ = (collection2 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[45/*"http"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[46/*"https"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[47/*"ftp"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[48/*"gopher"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[49/*"nntp"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[50/*"telnet"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[51/*"wais"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[52/*"file"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[53/*"prospero"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[54/*"ws"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection2), ::STRINGS[55/*"wss"*/]), collection2);
    UriScheme::KnownNonInternetSchemes_ = (collection1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<string>*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[56/*"mailto"*/]), ::g::Uno::Collections::List__Add_fn(uPtr(collection1), ::STRINGS[57/*"news"*/]), collection1);
}

uType* UriScheme_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UriScheme);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UriScheme", options);
    type->fp_cctor_ = UriScheme__cctor__fn;
    ::STRINGS[45] = uString::Const("http");
    ::STRINGS[46] = uString::Const("https");
    ::STRINGS[47] = uString::Const("ftp");
    ::STRINGS[48] = uString::Const("gopher");
    ::STRINGS[49] = uString::Const("nntp");
    ::STRINGS[50] = uString::Const("telnet");
    ::STRINGS[51] = uString::Const("wais");
    ::STRINGS[52] = uString::Const("file");
    ::STRINGS[53] = uString::Const("prospero");
    ::STRINGS[54] = uString::Const("ws");
    ::STRINGS[55] = uString::Const("wss");
    ::STRINGS[56] = uString::Const("mailto");
    ::STRINGS[57] = uString::Const("news");
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof()), (uintptr_t)&::g::Uno::Net::Http::UriScheme::_defaultPorts_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::UriScheme::KnownInternetSchemes_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::Net::Http::UriScheme::KnownNonInternetSchemes_, uFieldFlagsStatic);
    return type;
}

// public static Uno.Collections.Dictionary<string, int> get_DefaultPorts() :1113
void UriScheme__get_DefaultPorts_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = UriScheme::DefaultPorts();
}

// public static Uno.Net.Http.UriSchemeType GetSchemeType(string scheme) :1136
void UriScheme__GetSchemeType_fn(uString* scheme, int* __retval)
{
    *__retval = UriScheme::GetSchemeType(scheme);
}

// public static bool IsHttpScheme(string scheme) :1150
void UriScheme__IsHttpScheme_fn(uString* scheme, bool* __retval)
{
    *__retval = UriScheme::IsHttpScheme(scheme);
}

uSStrong< ::g::Uno::Collections::Dictionary*> UriScheme::_defaultPorts_;
uSStrong< ::g::Uno::Collections::List*> UriScheme::KnownInternetSchemes_;
uSStrong< ::g::Uno::Collections::List*> UriScheme::KnownNonInternetSchemes_;

// public static Uno.Net.Http.UriSchemeType GetSchemeType(string scheme) [static] :1136
int UriScheme::GetSchemeType(uString* scheme)
{
    UriScheme_typeof()->Init();
    bool ret4;
    bool ret5;
    uString* s = ::g::Uno::String::ToLower(uPtr(scheme));

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(UriScheme::KnownInternetSchemes()), s, &ret4), ret4))
        return 0;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(UriScheme::KnownNonInternetSchemes()), s, &ret5), ret5))
        return 1;

    return 2;
}

// public static bool IsHttpScheme(string scheme) [static] :1150
bool UriScheme::IsHttpScheme(uString* scheme)
{
    UriScheme_typeof()->Init();
    uString* s = ::g::Uno::String::ToLower(uPtr(scheme));
    return ::g::Uno::String::op_Equality(s, ::STRINGS[45/*"http"*/]) || ::g::Uno::String::op_Equality(s, ::STRINGS[46/*"https"*/]);
}

// public static Uno.Collections.Dictionary<string, int> get_DefaultPorts() [static] :1113
::g::Uno::Collections::Dictionary* UriScheme::DefaultPorts()
{
    UriScheme_typeof()->Init();

    if (UriScheme::_defaultPorts() == NULL)
    {
        UriScheme::_defaultPorts() = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<string, int>*/]));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[45/*"http"*/], uCRef<int>(80));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[46/*"https"*/], uCRef<int>(443));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[47/*"ftp"*/], uCRef<int>(21));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[48/*"gopher"*/], uCRef<int>(70));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[50/*"telnet"*/], uCRef<int>(119));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[51/*"wais"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[52/*"file"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[53/*"prospero"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[56/*"mailto"*/], uCRef<int>(25));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[57/*"news"*/], uCRef<int>(-1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[54/*"ws"*/], uCRef<int>(80));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(UriScheme::_defaultPorts()), ::STRINGS[55/*"wss"*/], uCRef<int>(443));
    }

    return UriScheme::_defaultPorts();
}
// }

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\$.uno(1096)
// -----------------------------------------------------------

// public enum UriSchemeType :1096
uEnumType* UriSchemeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.UriSchemeType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Internet", 0LL,
        "NonInternet", 1LL,
        "Unknown", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\UriParsers\$.uno(252)
// ---------------------------------------------------------------------

// public sealed class UserInfoParser :252
// {
uType* UserInfoParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UserInfoParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.UserInfoParser", options);
    ::STRINGS[4] = uString::Const("\\");
    ::STRINGS[10] = uString::Const(":");
    ::STRINGS[21] = uString::Const("There is an invalid character sequence in uriString.");
    ::STRINGS[58] = uString::Const("@");
    ::STRINGS[59] = uString::Const("The user name or password specified in uriString is not valid.");
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Uno::String_typeof();
    return type;
}

// private static bool IsValid(string userInfo) :277
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval)
{
    *__retval = UserInfoParser::IsValid(userInfo);
}

// public static string Parse(string uriString, int endIdx, int& idx) :254
void UserInfoParser__Parse_fn(uString* uriString, int* endIdx, int* idx, uString** __retval)
{
    *__retval = UserInfoParser::Parse(uriString, *endIdx, idx);
}

// private static bool IsValid(string userInfo) [static] :277
bool UserInfoParser::IsValid(uString* userInfo)
{
    return (((::g::Uno::String::IndexOf1(uPtr(userInfo), ::STRINGS[4/*"\\"*/], 0) < 0) && !::g::Uno::String::EndsWith(uPtr(userInfo), ::STRINGS[10/*":"*/])) && !::g::Uno::String::StartsWith(uPtr(userInfo), ::STRINGS[10/*":"*/])) && !::g::Uno::String::IsNullOrEmpty(userInfo);
}

// public static string Parse(string uriString, int endIdx, int& idx) [static] :254
uString* UserInfoParser::Parse(uString* uriString, int endIdx, int* idx)
{
    if (*idx >= endIdx)
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[21/*"There is an...*/]));

    int end = ::g::Uno::String::IndexOf1(uPtr(uriString), ::STRINGS[58/*"@"*/], *idx);

    if ((end < 0) || (end >= endIdx))
        return ::g::Uno::String::Empty();

    uString* userInfo = ::g::Uno::String::Substring1(uriString, *idx, end - *idx);

    if (!UserInfoParser::IsValid(userInfo))
        U_THROW(::g::Uno::Net::Http::UriFormatException::New4(::STRINGS[59/*"The user na...*/]));

    *idx = end + 1;
    return userInfo;
}
// }

}}}} // ::g::Uno::Net::Http
