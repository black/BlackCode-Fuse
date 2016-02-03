// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_FLOAT_ARRAY_H__
#define __APP_ANDROID_RUNTIME_FLOAT_ARRAY_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Runtime {

struct FloatArray;

struct FloatArray__uType : ::app::Android::java::lang::Object__uType
{
};

FloatArray__uType* FloatArray__typeof();

void FloatArray___ObjInit_4(FloatArray* __this, int length);
float FloatArray__get_Item(FloatArray* __this, int i);
FloatArray* FloatArray__New_5(::uStatic* __this, int length);
void FloatArray__set_Item(FloatArray* __this, int i, float value);

struct FloatArray : ::app::Android::java::lang::Object
{
    void _ObjInit_4(int length) { FloatArray___ObjInit_4(this, length); }
    float Item(int i) { return FloatArray__get_Item(this, i); }
    void Item(int i, float value) { FloatArray__set_Item(this, i, value); }
};

}}}


#endif
