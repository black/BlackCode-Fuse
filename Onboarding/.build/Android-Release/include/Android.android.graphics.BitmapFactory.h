// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct BitmapFactory;}}}}
namespace g{namespace Android{namespace java{namespace io{struct InputStream;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class BitmapFactory :3202
// {
::g::Android::java::lang::Object_type* BitmapFactory_typeof();
void BitmapFactory___Init2_fn();
void BitmapFactory__decodeFile_fn(::g::Android::java::lang::String* arg0, ::g::Android::android::graphics::Bitmap** __retval);
void BitmapFactory__decodeFile_IMPL_6516_fn(uObject* arg0_, uObject** __retval);
void BitmapFactory__decodeStream_fn(::g::Android::java::io::InputStream* arg0, ::g::Android::android::graphics::Bitmap** __retval);
void BitmapFactory__decodeStream_IMPL_6523_fn(uObject* arg0_, uObject** __retval);

struct BitmapFactory : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID decodeFile_6516_ID_;
    static jmethodID& decodeFile_6516_ID() { return decodeFile_6516_ID_; }
    static jmethodID decodeStream_6523_ID_;
    static jmethodID& decodeStream_6523_ID() { return decodeStream_6523_ID_; }

    static void _Init2();
    static ::g::Android::android::graphics::Bitmap* decodeFile(::g::Android::java::lang::String* arg0);
    static uObject* decodeFile_IMPL_6516(uObject* arg0_);
    static ::g::Android::android::graphics::Bitmap* decodeStream(::g::Android::java::io::InputStream* arg0);
    static uObject* decodeStream_IMPL_6523(uObject* arg0_);
};
// }

}}}} // ::g::Android::android::graphics
