// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_ANDROID_BINDING_MACROS_H__
#define __APP_ANDROID_BASE_ANDROID_BINDING_MACROS_H__

#include <jni.h>
#include <app/Uno.Type.h>
#include <app/Uno.Exception.h>

#define U_JNIVAR jni
#define U_JOBJECT jobject
#define U_JCLASS jclass
#define U_JMETHODID jmethodID
#define U_JFIELDID jfieldID

#define UNO_TO_JAVA_EXCEPTION(VAR) ::uString* str = ::uNewStringAnsi("Unknown Uno Exception", 21); if (VAR.Exception && VAR.Exception->Message()) { str = VAR.Exception->Message(); } ::app::Android::Base::JNI__ThrowNewException(NULL, str);

#define BEGIN_REG_MTD(COUNT) JNINativeMethod funcs[COUNT]; JNINativeMethod tmp; int count = 0;

#define COMMIT_REG_MTD(PROXYCLASS) if (count > 0) { bool attached = ((jni->RegisterNatives(PROXYCLASS, funcs, (jint)count)) == 0); if (!attached) { THROW_UNO_EXCEPTION("Could not attach native callbacks", 33); } }

#define REG_MTD(ID,NAMESTR,SIGSTR,CBFUNC) JNINativeMethod tmp ## ID = {(char* const)NAMESTR, (char* const)SIGSTR, (void *)&CBFUNC}; funcs[count] = tmp ## ID; count += 1;

#define INITCALLBACK(PTRNAME,UNOTYPE) if (!ujPtr) THROW_UNO_EXCEPTION("Callback recieved null ptr from proxy", 37); INIT_JNI; uAutoReleasePool pool; UNOTYPE PTRNAME = (UNOTYPE)uLoadWeakObject((uWeakObject*)ujPtr);

#define INIT_JNI JNIEnv* U_JNIVAR = ::app::Android::Base::JNI__GetEnvPtr(NULL)

#define LOAD_SYS_CLASS(CLASSSIG) ::app::Android::Base::JNI__LoadClass_1(NULL, U_JNIVAR, CLASSSIG, false)

#define LOAD_CLASS(CLASSSIG) ::app::Android::Base::JNI__LoadClass_1(NULL, U_JNIVAR, CLASSSIG, false)

#define CHECK_JNI_EXCEPTIONS ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR)

#define THROW_UNO_EXCEPTION(MSGSTRING,MSGLEN) U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8( MSGSTRING, MSGLEN)))

#define NEW_GLOBAL_REF(TYPE,LINE) reinterpret_cast<TYPE>(U_JNIVAR->NewGlobalRef(LINE))

#define CLASS_INIT(CLASS,INITCALL) if (::uEnterCriticalIfNull(&CLASS)) { INITCALL; ::uExitCritical(); }

#define JARG_TO_UNO(ARG,UNOTYPE,NEWUNO) UNOTYPE tmp ## ARG = (ARG==0 ? NULL : (ARG == -1 ? NEWUNO : (UNOTYPE)uLoadWeakObject((uWeakObject*)ARG)));

#define JNFUN(RETURNTYPE,FUNCNAME,...) RETURNTYPE JNICALL FUNCNAME(JNIEnv *env, jclass clazz, ##__VA_ARGS__)

#define JTRY try{
#define JCATCH } catch (const ::uThrowable& __t) { uAutoReleasePool pool; JniHelper jni; jni->ExceptionClear(); ::uString* message; if (::uIs(__t.Exception, ::app::Uno::Exception__typeof())) { ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception; message = e->ToString(); } else { message = ::uNewStringAnsi("Unhandled c++ error"); } ::app::Android::Base::JNI__ThrowNewException(NULL, message); } catch (...) { uAutoReleasePool pool; JniHelper jni; jni->ExceptionClear(); ::uString* message = ::uNewStringAnsi("Unhandled c++ error"); ::app::Android::Base::JNI__ThrowNewException(NULL, message); }

#define CACHE_FALLBACK_METHOD(ID,CLSSIGSTR,NAMESTR,SIGSTR,MTDGETFUNC,MTDEXCEPTIONMSG,MTDEXCEPTIONLEN) if (::uEnterCriticalIfNull(&ID)) { U_JCLASS jcls = (jclass)NEW_GLOBAL_REF(jclass, LOAD_CLASS(CLSSIGSTR)); ID = U_JNIVAR->MTDGETFUNC (jcls, NAMESTR, SIGSTR); CHECK_JNI_EXCEPTIONS; if (((long)ID) == 0) { THROW_UNO_EXCEPTION(MTDEXCEPTIONMSG,MTDEXCEPTIONLEN); } ::uExitCritical(); }

#define CACHE_METHOD(ID,CLASSFIELD,NAMESTR,SIGSTR,MTDGETFUNC,MTDEXCEPTIONMSG,MTDEXCEPTIONLEN) if (::uEnterCriticalIfNull(&ID)) { ID = U_JNIVAR->MTDGETFUNC (CLASSFIELD, NAMESTR, SIGSTR); CHECK_JNI_EXCEPTIONS; if (((long)ID) == 0) { THROW_UNO_EXCEPTION(MTDEXCEPTIONMSG,MTDEXCEPTIONLEN); } ::uExitCritical(); }

#define CACHE_FIELD(ID,CLASSFIELD,NAMESTR,SIGSTR,FLDGETFUNC,MTDEXCEPTIONMSG,MTDEXCEPTIONLEN) if (::uEnterCriticalIfNull(&ID)) { ID = U_JNIVAR->FLDGETFUNC(CLASSFIELD, NAMESTR, SIGSTR); CHECK_JNI_EXCEPTIONS; if (((long)ID) == 0) { THROW_UNO_EXCEPTION(MTDEXCEPTIONMSG,MTDEXCEPTIONLEN); } ::uExitCritical(); }

#define STATICACHE_FIELD(ID,CLASSFIELD,NAMESTR,SIGSTR,FLDGETFUNC,MTDEXCEPTIONMSG,MTDEXCEPTIONLEN) static jfieldID ID = U_JNIVAR->FLDGETFUNC(CLASSFIELD, NAMESTR, SIGSTR); if (::uEnterCriticalIfNull(&ID)) { CHECK_JNI_EXCEPTIONS; if (!ID) { THROW_UNO_EXCEPTION(MTDEXCEPTIONMSG,MTDEXCEPTIONLEN); } ::uExitCritical(); }
#include <Uno.h>

namespace app {
namespace Android {
namespace Base {

struct AndroidBindingMacros__uType : ::uClassType
{
};

AndroidBindingMacros__uType* AndroidBindingMacros__typeof();

}}}


#endif
