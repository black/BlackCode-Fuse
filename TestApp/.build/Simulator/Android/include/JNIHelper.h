#pragma once
#include <jni.h>
#include <Xli/String.h>
#include <pthread.h>
#include <Uno/Uno.h>
#include "Source/Common/AndroidCommon.h"
#include <android/asset_manager.h>
#include <android/asset_manager_jni.h>

#define WITH_STATIC_JAVA_METHOD(HANDLEVAR,JCLASS,METHODNAMESTR,METHODSIGSTR) JniHelper __jni; static jmethodID HANDLEVAR; if (uEnterCriticalIfNull(&HANDLEVAR)) { HANDLEVAR = __jni->GetStaticMethodID(JCLASS, METHODNAMESTR, METHODSIGSTR); uExitCritical(); if (!HANDLEVAR) {LOGD("Cannot cache mid for " METHODNAMESTR); XLI_THROW("Cannot cache mid for " METHODNAMESTR);}}
#define WITH_STATIC_JAVA_METHOD_USEJNI(HANDLEVAR,JCLASS,METHODNAMESTR,METHODSIGSTR) static jmethodID HANDLEVAR; if (uEnterCriticalIfNull(&HANDLEVAR)) { HANDLEVAR = __jni->GetStaticMethodID(JCLASS, METHODNAMESTR, METHODSIGSTR); uExitCritical(); if (!HANDLEVAR) { LOGD("Cannot cache mid for " METHODNAMESTR); XLI_THROW("Cannot cache mid for " METHODNAMESTR); } }

#if 2==2
#define JNI_TRY try{
#define JNI_CATCH } catch (const uThrowable& __t) { JniHelper jni; jni->ExceptionClear(); uString* message; if (uIs(__t.Exception, ::g::Uno::Exception_typeof())) { ::g::Uno::Exception* e = __t.Exception; message = e->Message(); } else { message = uString::Ansi("Unhandled C++ error in Main Loop"); }  ::g::Android::Base::JNI::ThrowNewException(message); } catch (...) { JniHelper jni; jni->ExceptionClear(); uString* message; message = uString::Ansi("Unhandled C++ error in Main Loop"); ::g::Android::Base::JNI::ThrowNewException(message); }
#elif 2==1
#define JNI_TRY try{
#define JNI_CATCH } catch (const ::uThrowable& __t) { uAutoReleasePool pool; JniHelper jni; jni->ExceptionClear(); uString* message; if (::uIs(__t.Exception, ::g::Uno::Exception_typeof())) {  ::g::Uno::Exception* e = (::g::Uno::Exception*)__t.Exception; message = e->ToString(); } else { message = uString::Ansi("Unhandled c++ error in Main Loop"); } ::g::Android::Base::JNI::ThrowNewException(message); }
#else
#define JNI_TRY //
#define JNI_CATCH //
#endif

class JniHelper
{
    JNIEnv* env;
    static JavaVM* VM;
    static jobject ActivityObject;
    static jclass ActivityClass;
    static jclass DisplayClass;
    static pthread_key_t JniThreadKey;

    static void JniDestroyThread(void* value);

public:
    static void Init(JavaVM* vm, JNIEnv* env, jclass activityClass, jclass displayClass);
    JniHelper();
    static JavaVM* GetVM();

    static jclass GetDisplayClass();
    static jclass GetActivityClass();
    static jobject GetActivity();
    static Xli::String GetString(jobject jstr);
    static uString* JavaToUnoString(jstring jstr);
    static jstring UnoToJavaString(uString* ustr);
    static float GetDensity();

    JNIEnv* GetEnv();
    JNIEnv* operator->();
    void UpdateActivityObject();
};
