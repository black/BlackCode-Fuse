// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\test\mock\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_TEST_MOCK_MOCK_CONTEXT_H__
#define __APP_ANDROID_ANDROID_TEST_MOCK_MOCK_CONTEXT_H__

#include <app/Android.android.content.Context.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Resources; } } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace test {
namespace mock {

struct MockContext;

extern jclass MockContext___javaClass_3;
extern jmethodID MockContext__getResources_18557_ID;
extern jmethodID MockContext__getSystemService_18620_ID;

struct MockContext__uType : ::app::Android::android::content::Context__uType
{
};

MockContext__uType* MockContext__typeof();

void MockContext___Init_3(::uStatic* __this);
::app::Android::android::content::res::Resources* MockContext__getResources(MockContext* __this);
::uObject* MockContext__getResources_IMPL_18557(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::Object* MockContext__getSystemService(MockContext* __this, ::app::Android::java::lang::String* arg0);
::uObject* MockContext__getSystemService_IMPL_18620(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct MockContext : ::app::Android::android::content::Context
{
};

}}}}}


#endif
