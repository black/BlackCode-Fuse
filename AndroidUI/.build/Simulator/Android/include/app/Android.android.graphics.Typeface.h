// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_TYPEFACE_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_TYPEFACE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct AssetManager; } } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct Typeface;

extern jclass Typeface___javaClass_2;
extern jmethodID Typeface__createFromAsset_7328_ID;
extern jmethodID Typeface__createFromFile_7330_ID;
extern jfieldID Typeface__DEFAULT_7312_ID;
extern jmethodID Typeface__equals_7332_ID;
extern jmethodID Typeface__finalize_7331_ID;
extern jmethodID Typeface__hashCode_7333_ID;

struct Typeface__uType : ::app::Android::java::lang::Object__uType
{
};

Typeface__uType* Typeface__typeof();

void Typeface___Init_2(::uStatic* __this);
Typeface* Typeface__createFromAsset(::uStatic* __this, ::app::Android::android::content::res::AssetManager* arg0, ::app::Android::java::lang::String* arg1);
::uObject* Typeface__createFromAsset_IMPL_7328(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_);
Typeface* Typeface__createFromFile_1(::uStatic* __this, ::app::Android::java::lang::String* arg0);
::uObject* Typeface__createFromFile_IMPL_7330(::uStatic* __this, ::uObject* arg0_);
bool Typeface__equals_1(Typeface* __this, ::app::Android::java::lang::Object* arg0);
bool Typeface__equals_IMPL_7332(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Typeface__finalize(Typeface* __this);
void Typeface__finalize_IMPL_7331(::uStatic* __this, bool arg0_, jobject arg1_);
Typeface* Typeface__get_DEFAULT(::uStatic* __this);
int Typeface__hashCode_1(Typeface* __this);
int Typeface__hashCode_IMPL_7333(::uStatic* __this, bool arg0_, jobject arg1_);

struct Typeface : ::app::Android::java::lang::Object
{
};

}}}}


#endif
