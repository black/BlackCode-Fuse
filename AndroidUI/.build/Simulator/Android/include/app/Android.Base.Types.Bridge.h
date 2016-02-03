// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_TYPES_BRIDGE_H__
#define __APP_ANDROID_BASE_TYPES_BRIDGE_H__

#include <android/log.h>
#include <app/Android.Base.JNI.h>
#include <app/Uno.Exception.h>
#include <jni.h>
#include <Uno.h>
#include <Xli.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace app { namespace Android { namespace Base { namespace Wrappers { struct JWrapper; } } } }

namespace app {
namespace Android {
namespace Base {
namespace Types {

extern jclass Bridge___helperCls;
extern bool Bridge___inited;
extern jmethodID Bridge___javaToUnoMid;
extern jmethodID Bridge___registerFallbackMid;
extern jmethodID Bridge___registerTypeMid;
extern jmethodID Bridge___unoToJavaMid;

struct Bridge__uType : ::uClassType
{
};

Bridge__uType* Bridge__typeof();

void Bridge__Init(::uStatic* __this);
::uType* Bridge__JavaToUnoType(::uStatic* __this, jobject javaObj, ::uType* fallbackType, bool typeHasFallbackClass);
void Bridge__RegisterUnoFallback(::uStatic* __this, const char* typeName_, int nameLen_, ::uType* typePtr_);
void Bridge__RegisterUnoType(::uStatic* __this, const char* typeName_, int nameLen_, ::uType* typePtr_);
void Bridge__SetWrapperType(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* wrapper_, jobject obj_, ::uType* typePtr_, bool typeHasFallbackClass_, bool resolveType_);
jclass Bridge__UnoToJavaType(::uStatic* __this, ::uType* unoTypePtr);

}}}}


#endif
