// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
//~Callbacks forHttpRequest

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnDataReceived(Android.Base.Wrappers.IJWrapper,int):IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnDataReceived44285,jlong ujPtr, jobject arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);

    JARG_TO_UNO(arg2,uObject*,((::g::Android::Base::Wrappers::JWrapper*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Base::Wrappers::JWrapper_typeof(), false, false, true)));

    JTRY
    uPtr->OnDataReceived(tmparg2, ((int)arg1));

    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnAborted():IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnAborted44286,jlong ujPtr) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnAborted();
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnError(Android.Base.Wrappers.IJWrapper):IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnError44287,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JARG_TO_UNO(arg1,uObject*,((::g::Android::Base::Wrappers::JWrapper*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Base::Wrappers::JWrapper_typeof(), false, false, true)));
    JTRY
    uPtr->OnError(tmparg1);
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnTimeout():IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnTimeout44288,jlong ujPtr) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnTimeout();
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnDone():IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnDone44289,jlong ujPtr) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnDone();
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnHeadersReceived():IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnHeadersReceived44290,jlong ujPtr) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnHeadersReceived();
    JCATCH
}
//#endif

//#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnProgress(int,int,bool):IsStripped}
JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnProgress44291,jlong ujPtr, jint arg0, jint arg1, jboolean arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnProgress(((int)arg0), ((int)arg1), ((bool)arg2));
    JCATCH
}
//#endi
static uType* TYPES[2];

namespace g{
namespace Android{
namespace com{
namespace fuse{
namespace ExperimentalHttp{

// C:\ProgramData\Uno\Packages\Uno.Net.Http\0.20.1\Implementation\Android\ExperimentalHttp\$.uno(9)
// ------------------------------------------------------------------------------------------------

// public abstract extern class HttpRequest :9
// {
HttpRequest_type* HttpRequest_typeof()
{
    static uSStrong<HttpRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(HttpRequest);
    options.TypeSize = sizeof(HttpRequest_type);
    type = (HttpRequest_type*)uClassType::New("Android.com.fuse.ExperimentalHttp.HttpRequest", options);
    type->SetBase(::g::Android::Base::Wrappers::JWrapper_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(HttpRequest_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(HttpRequest_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::_javaClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::_javaProxyClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::GetResponseHeaders_44308_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::GetResponseStatus_44306_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::GetResponseString_44297_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::HttpRequest_44284_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::HttpRequest_44284_ID_c_prox_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::InstallCache_44279_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::SendAsync_44299_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::SetHeader_44293_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::com::fuse::ExperimentalHttp::HttpRequest::SetResponseType_44292_ID_, uFieldFlagsStatic);
    return type;
}

// protected HttpRequest(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1, Android.Base.Wrappers.IJWrapper arg2) :61
void HttpRequest__ctor_3_fn(HttpRequest* __this, uObject* arg0, uObject* arg1, uObject* arg2)
{
    __this->ctor_3(arg0, arg1, arg2);
}

// public static extern new void _Init() :19
void HttpRequest___Init1_fn()
{
    HttpRequest::_Init1();
}

// public static extern new void _InitProxy() :15
void HttpRequest___InitProxy1_fn()
{
    HttpRequest::_InitProxy1();
}

// public static extern new bool _IsThisType(Android.Base.Wrappers.IJWrapper obj) :17
void HttpRequest___IsThisType1_fn(uObject* obj_, bool* __retval)
{
    *__retval = HttpRequest::_IsThisType1(obj_);
}

// public Android.Base.Wrappers.IJWrapper GetResponseHeaders() :158
void HttpRequest__GetResponseHeaders_fn(HttpRequest* __this, uObject** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseHeaders_IMPL_44308(bool arg0, Android.Base.Primitives.ujobject arg1) :241
void HttpRequest__GetResponseHeaders_IMPL_44308_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = HttpRequest::GetResponseHeaders_IMPL_44308(*arg0_, *arg1_);
}

// public int GetResponseStatus() :148
void HttpRequest__GetResponseStatus_fn(HttpRequest* __this, int* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// public static extern int GetResponseStatus_IMPL_44306(bool arg0, Android.Base.Primitives.ujobject arg1) :235
void HttpRequest__GetResponseStatus_IMPL_44306_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = HttpRequest::GetResponseStatus_IMPL_44306(*arg0_, *arg1_);
}

// public Android.Base.Wrappers.IJWrapper GetResponseString() :108
void HttpRequest__GetResponseString_fn(HttpRequest* __this, uObject** __retval)
{
    *__retval = __this->GetResponseString();
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseString_IMPL_44297(bool arg0, Android.Base.Primitives.ujobject arg1) :211
void HttpRequest__GetResponseString_IMPL_44297_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = HttpRequest::GetResponseString_IMPL_44297(*arg0_, *arg1_);
}

// public static extern Android.Base.Primitives.ujobject HttpRequest_IMPL_44284(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :193
void HttpRequest__HttpRequest_IMPL_44284_fn(uObject* arg0_, uObject* arg1_, uObject* arg2_, uObject* arg3_, jobject* __retval)
{
    *__retval = HttpRequest::HttpRequest_IMPL_44284(arg0_, arg1_, arg2_, arg3_);
}

// public static bool InstallCache(Android.Base.Wrappers.IJWrapper arg0, long arg1) :36
void HttpRequest__InstallCache_fn(uObject* arg0, int64_t* arg1, bool* __retval)
{
    *__retval = HttpRequest::InstallCache(arg0, *arg1);
}

// public static extern bool InstallCache_IMPL_44279(Android.Base.Wrappers.IJWrapper arg0, long arg1) :177
void HttpRequest__InstallCache_IMPL_44279_fn(uObject* arg0_, int64_t* arg1_, bool* __retval)
{
    *__retval = HttpRequest::InstallCache_IMPL_44279(arg0_, *arg1_);
}

// public void SendAsync() :113
void HttpRequest__SendAsync_fn(HttpRequest* __this)
{
    __this->SendAsync();
}

// public static extern void SendAsync_IMPL_44299(bool arg0, Android.Base.Primitives.ujobject arg1) :214
void HttpRequest__SendAsync_IMPL_44299_fn(bool* arg0_, jobject* arg1_)
{
    HttpRequest::SendAsync_IMPL_44299(*arg0_, *arg1_);
}

// public void SetHeader(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1) :88
void HttpRequest__SetHeader_fn(HttpRequest* __this, uObject* arg0, uObject* arg1)
{
    __this->SetHeader(arg0, arg1);
}

// public static extern void SetHeader_IMPL_44293(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :199
void HttpRequest__SetHeader_IMPL_44293_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    HttpRequest::SetHeader_IMPL_44293(*arg0_, *arg1_, arg2_, arg3_);
}

// public void SetResponseType(int arg0) :83
void HttpRequest__SetResponseType_fn(HttpRequest* __this, int* arg0)
{
    __this->SetResponseType(*arg0);
}

// public static extern void SetResponseType_IMPL_44292(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :196
void HttpRequest__SetResponseType_IMPL_44292_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    HttpRequest::SetResponseType_IMPL_44292(*arg0_, *arg1_, *arg2_);
}

jclass HttpRequest::_javaClass1_;
jclass HttpRequest::_javaProxyClass1_;
jmethodID HttpRequest::GetResponseHeaders_44308_ID_;
jmethodID HttpRequest::GetResponseStatus_44306_ID_;
jmethodID HttpRequest::GetResponseString_44297_ID_;
jmethodID HttpRequest::HttpRequest_44284_ID_c_;
jmethodID HttpRequest::HttpRequest_44284_ID_c_prox_;
jmethodID HttpRequest::InstallCache_44279_ID_;
jmethodID HttpRequest::SendAsync_44299_ID_;
jmethodID HttpRequest::SetHeader_44293_ID_;
jmethodID HttpRequest::SetResponseType_44292_ID_;

// protected HttpRequest(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1, Android.Base.Wrappers.IJWrapper arg2) [instance] :61
void HttpRequest::ctor_3(uObject* arg0, uObject* arg1, uObject* arg2)
{
    ctor_(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    _subclassed = HttpRequest::_IsThisType1((uObject*)this);
    HttpRequest* wrapper = _subclassed ? this : NULL;
    _javaObject = HttpRequest::HttpRequest_IMPL_44284((uObject*)wrapper, arg0, arg1, arg2);
}

// public Android.Base.Wrappers.IJWrapper GetResponseHeaders() [instance] :158
uObject* HttpRequest::GetResponseHeaders()
{
    return HttpRequest::GetResponseHeaders_IMPL_44308(_subclassed, _javaObject);
}

// public int GetResponseStatus() [instance] :148
int HttpRequest::GetResponseStatus()
{
    return HttpRequest::GetResponseStatus_IMPL_44306(_subclassed, _javaObject);
}

// public Android.Base.Wrappers.IJWrapper GetResponseString() [instance] :108
uObject* HttpRequest::GetResponseString()
{
    return HttpRequest::GetResponseString_IMPL_44297(_subclassed, _javaObject);
}

// public void SendAsync() [instance] :113
void HttpRequest::SendAsync()
{
    HttpRequest::SendAsync_IMPL_44299(_subclassed, _javaObject);
}

// public void SetHeader(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1) [instance] :88
void HttpRequest::SetHeader(uObject* arg0, uObject* arg1)
{
    HttpRequest::SetHeader_IMPL_44293(_subclassed, _javaObject, arg0, arg1);
}

// public void SetResponseType(int arg0) [instance] :83
void HttpRequest::SetResponseType(int arg0)
{
    int arg0_ = arg0;
    HttpRequest::SetResponseType_IMPL_44292(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :19
void HttpRequest::_Init1()
{
    if (HttpRequest::_javaClass1()) { return; }
    INIT_JNI;
    HttpRequest::_javaClass1() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/ExperimentalHttp/HttpRequest"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!HttpRequest::_javaClass1()) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.ExperimentalHttp.HttpRequest'", 61);; }
}

// public static extern new void _InitProxy() [static] :15
void HttpRequest::_InitProxy1()
{
    if (HttpRequest::_javaProxyClass1()) { return; }
    INIT_JNI;
    HttpRequest::_javaProxyClass1() = NEW_GLOBAL_REF(jclass,::g::Android::Base::JNI::LoadClass(jni, "com.Bindings.Android_com_fuse_ExperimentalHttp_HttpRequest"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!HttpRequest::_javaProxyClass1()) { THROW_UNO_EXCEPTION("Unable to cache class 'Android_com_fuse_ExperimentalHttp_HttpRequest'", 69);; }
    
    BEGIN_REG_MTD(7);
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnDataReceived(Android.Base.Wrappers.IJWrapper,int):IsStripped}
    REG_MTD(0,"__n_OnDataReceived","(J[BIJJ)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnDataReceived44285);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnAborted():IsStripped}
    REG_MTD(1,"__n_OnAborted","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnAborted44286);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnError(Android.Base.Wrappers.IJWrapper):IsStripped}
    REG_MTD(2,"__n_OnError","(JLjava/lang/String;J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnError44287);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnTimeout():IsStripped}
    REG_MTD(3,"__n_OnTimeout","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnTimeout44288);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnDone():IsStripped}
    REG_MTD(4,"__n_OnDone","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnDone44289);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnHeadersReceived():IsStripped}
    REG_MTD(5,"__n_OnHeadersReceived","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnHeadersReceived44290);
    //#endif
    //#if !#{Android.com.fuse.ExperimentalHttp.HttpRequest.OnProgress(int,int,bool):IsStripped}
    REG_MTD(6,"__n_OnProgress","(JIIZJJJ)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnProgress44291);
    //#endif
    COMMIT_REG_MTD(HttpRequest::_javaProxyClass1());
}

// public static extern new bool _IsThisType(Android.Base.Wrappers.IJWrapper obj) [static] :17
bool HttpRequest::_IsThisType1(uObject* obj_)
{
    int N = 44;
    const char* typ = "Android.com.fuse.ExperimentalHttp.HttpRequest";
    const char* potential = obj_->__type->FullName;
    for (int i = 0; i < N; ++i)
    {
        if (potential[i]==0 || (potential[i] != typ[i])) {
            return true;
        }
    }
    return false;
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseHeaders_IMPL_44308(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :241
uObject* HttpRequest::GetResponseHeaders_IMPL_44308(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    uObject* result;
    CLASS_INIT(HttpRequest::_javaClass1(),HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::GetResponseHeaders_44308_ID(),HttpRequest::_javaClass1(),"GetResponseHeaders","()Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseHeaders could not be cached",99);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, HttpRequest::_javaClass1(), HttpRequest::GetResponseHeaders_44308_ID()),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, HttpRequest::GetResponseHeaders_44308_ID()),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern int GetResponseStatus_IMPL_44306(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :235
int HttpRequest::GetResponseStatus_IMPL_44306(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    int result;
    CLASS_INIT(HttpRequest::_javaClass1(),HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::GetResponseStatus_44306_ID(),HttpRequest::_javaClass1(),"GetResponseStatus","()I",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseStatus could not be cached",98);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, HttpRequest::_javaClass1(), HttpRequest::GetResponseStatus_44306_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, HttpRequest::GetResponseStatus_44306_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper GetResponseString_IMPL_44297(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :211
uObject* HttpRequest::GetResponseString_IMPL_44297(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    uObject* result;
    CLASS_INIT(HttpRequest::_javaClass1(),HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::GetResponseString_44297_ID(),HttpRequest::_javaClass1(),"GetResponseString","()Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseString could not be cached",98);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, HttpRequest::_javaClass1(), HttpRequest::GetResponseString_44297_ID()),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, HttpRequest::GetResponseString_44297_ID()),result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern Android.Base.Primitives.ujobject HttpRequest_IMPL_44284(Android.Base.Wrappers.IJWrapper arg0, Android.Base.Wrappers.IJWrapper arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :193
jobject HttpRequest::HttpRequest_IMPL_44284(uObject* arg0_, uObject* arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(HttpRequest::_javaClass1(),HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::HttpRequest_44284_ID_c(),HttpRequest::_javaClass1(),"<init>","(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.<init> could not be cached",87);
    if (arg0_) {
        CLASS_INIT(HttpRequest::_javaProxyClass1(),HttpRequest::_InitProxy1());
        CACHE_METHOD(HttpRequest::HttpRequest_44284_ID_c_prox(),HttpRequest::_javaProxyClass1(),"<init>","(JLandroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Proxy Id for method Android_com_fuse_ExperimentalHttp_HttpRequest.HttpRequest_44284_ID_c_prox could not be cached",113);
    }
    jobject _obArg1 = ((!arg1_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject result;
    jobject _tmp;
    if (!arg0_) {
        _tmp = U_JNIVAR->NewObject(HttpRequest::_javaClass1(), HttpRequest::HttpRequest_44284_ID_c(), _obArg1, _obArg2, _obArg3);
        result = NEW_GLOBAL_REF(jobject,_tmp);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    } else {
            _tmp = U_JNIVAR->NewObject(HttpRequest::_javaProxyClass1(), HttpRequest::HttpRequest_44284_ID_c_prox(), (jlong)arg0_->__weakptr, _obArg1, _obArg2, _obArg3);
        result = NEW_GLOBAL_REF(jobject,_tmp);
        ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    }
    
    U_JNIVAR->DeleteLocalRef(_tmp);
    return result;
}

// public static bool InstallCache(Android.Base.Wrappers.IJWrapper arg0, long arg1) [static] :36
bool HttpRequest::InstallCache(uObject* arg0, int64_t arg1)
{
    return HttpRequest::InstallCache_IMPL_44279(arg0, arg1);
}

// public static extern bool InstallCache_IMPL_44279(Android.Base.Wrappers.IJWrapper arg0, long arg1) [static] :177
bool HttpRequest::InstallCache_IMPL_44279(uObject* arg0_, int64_t arg1_)
{
    INIT_JNI;
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CLASS_INIT(HttpRequest::_javaClass1(),HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::InstallCache_44279_ID(),HttpRequest::_javaClass1(),"InstallCache","(Landroid/app/Activity;J)Z",GetStaticMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.InstallCache could not be cached",93);
    result = ((bool)U_JNIVAR->CallStaticBooleanMethod(HttpRequest::_javaClass1(), HttpRequest::InstallCache_44279_ID(), _obArg0, ((jlong)arg1_)));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    
    return result;
}

// public static extern void SendAsync_IMPL_44299(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :214
void HttpRequest::SendAsync_IMPL_44299(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    CLASS_INIT(HttpRequest::_javaClass1(),HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SendAsync_44299_ID(),HttpRequest::_javaClass1(),"SendAsync","()V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsync could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1(), HttpRequest::SendAsync_44299_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SendAsync_44299_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void SetHeader_IMPL_44293(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :199
void HttpRequest::SetHeader_IMPL_44293(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CLASS_INIT(HttpRequest::_javaClass1(),HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SetHeader_44293_ID(),HttpRequest::_javaClass1(),"SetHeader","(Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetHeader could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1(), HttpRequest::SetHeader_44293_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SetHeader_44293_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void SetResponseType_IMPL_44292(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :196
void HttpRequest::SetResponseType_IMPL_44292(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    
    CLASS_INIT(HttpRequest::_javaClass1(),HttpRequest::_Init1());
    CACHE_METHOD(HttpRequest::SetResponseType_44292_ID(),HttpRequest::_javaClass1(),"SetResponseType","(I)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetResponseType could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HttpRequest::_javaClass1(), HttpRequest::SetResponseType_44292_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HttpRequest::SetResponseType_44292_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

}}}}} // ::g::Android::com::fuse::ExperimentalHttp
