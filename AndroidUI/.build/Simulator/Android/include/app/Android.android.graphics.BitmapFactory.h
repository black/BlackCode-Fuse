// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_BITMAP_FACTORY_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_BITMAP_FACTORY_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Android { namespace java { namespace io { struct InputStream; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct BitmapFactory;

extern jclass BitmapFactory___javaClass_2;
extern jmethodID BitmapFactory__decodeFile_6516_ID;
extern jmethodID BitmapFactory__decodeStream_6523_ID;

struct BitmapFactory__uType : ::app::Android::java::lang::Object__uType
{
};

BitmapFactory__uType* BitmapFactory__typeof();

void BitmapFactory___Init_2(::uStatic* __this);
::app::Android::android::graphics::Bitmap* BitmapFactory__decodeFile(::uStatic* __this, ::app::Android::java::lang::String* arg0);
::uObject* BitmapFactory__decodeFile_IMPL_6516(::uStatic* __this, ::uObject* arg0_);
::app::Android::android::graphics::Bitmap* BitmapFactory__decodeStream(::uStatic* __this, ::app::Android::java::io::InputStream* arg0);
::uObject* BitmapFactory__decodeStream_IMPL_6523(::uStatic* __this, ::uObject* arg0_);

struct BitmapFactory : ::app::Android::java::lang::Object
{
};

}}}}


#endif
