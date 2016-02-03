// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_IO_INPUT_STREAM_H__
#define __APP_ANDROID_JAVA_IO_INPUT_STREAM_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace java {
namespace io {

struct InputStream;

extern jclass InputStream___javaClass_2;
extern jmethodID InputStream__close_29700_ID;

struct InputStream__uType : ::app::Android::java::lang::Object__uType
{
};

InputStream__uType* InputStream__typeof();

void InputStream___Init_2(::uStatic* __this);
void InputStream__close(InputStream* __this);
void InputStream__close_IMPL_29700(::uStatic* __this, bool arg0_, jobject arg1_);

struct InputStream : ::app::Android::java::lang::Object
{
    void close() { InputStream__close(this); }
};

}}}}


#endif
