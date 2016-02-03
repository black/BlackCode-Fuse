// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\app\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnCreateContextMenuListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace app{struct Fragment;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace app{

// public sealed extern class Fragment :3501
// {
struct Fragment_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnCreateContextMenuListener interface2;
};

Fragment_type* Fragment_typeof();
void Fragment___Init2_fn();
void Fragment__equals1_fn(Fragment* __this, ::g::Android::java::lang::Object* arg0, bool* __retval);
void Fragment__equals_IMPL_1415_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Fragment__hashCode1_fn(Fragment* __this, int* __retval);
void Fragment__hashCode_IMPL_1416_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Fragment__onCreateContextMenu_fn(Fragment* __this, uObject* arg0, ::g::Android::android::view::View* arg1, uObject* arg2);
void Fragment__onCreateContextMenu_IMPL_1480_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
void Fragment__toString_fn(Fragment* __this, ::g::Android::java::lang::String** __retval);
void Fragment__toString_IMPL_1417_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Fragment : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID equals_1415_ID_;
    static jmethodID& equals_1415_ID() { return equals_1415_ID_; }
    static jmethodID hashCode_1416_ID_;
    static jmethodID& hashCode_1416_ID() { return hashCode_1416_ID_; }
    static jmethodID onCreateContextMenu_1480_ID_;
    static jmethodID& onCreateContextMenu_1480_ID() { return onCreateContextMenu_1480_ID_; }
    static jmethodID toString_1417_ID_;
    static jmethodID& toString_1417_ID() { return toString_1417_ID_; }

    void onCreateContextMenu(uObject* arg0, ::g::Android::android::view::View* arg1, uObject* arg2);
    static void _Init2();
    static bool equals_IMPL_1415(bool arg0_, jobject arg1_, uObject* arg2_);
    static int hashCode_IMPL_1416(bool arg0_, jobject arg1_);
    static void onCreateContextMenu_IMPL_1480(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static uObject* toString_IMPL_1417(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::app
