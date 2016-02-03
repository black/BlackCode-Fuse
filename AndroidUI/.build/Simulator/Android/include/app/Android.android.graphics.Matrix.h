// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_MATRIX_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_MATRIX_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }
namespace app { namespace Android { namespace Runtime { struct FloatArray; } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct Matrix;

extern jclass Matrix___javaClass_2;
extern jmethodID Matrix__equals_6769_ID;
extern jmethodID Matrix__finalize_6814_ID;
extern jmethodID Matrix__hashCode_6770_ID;
extern jmethodID Matrix__Matrix_6764_ID_c;
extern jmethodID Matrix__setValues_6811_ID;
extern jmethodID Matrix__toString_6812_ID;

struct Matrix__uType : ::app::Android::java::lang::Object__uType
{
};

Matrix__uType* Matrix__typeof();

void Matrix___Init_2(::uStatic* __this);
void Matrix___ObjInit_4(Matrix* __this);
bool Matrix__equals_1(Matrix* __this, ::app::Android::java::lang::Object* arg0);
bool Matrix__equals_IMPL_6769(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Matrix__finalize(Matrix* __this);
void Matrix__finalize_IMPL_6814(::uStatic* __this, bool arg0_, jobject arg1_);
int Matrix__hashCode_1(Matrix* __this);
int Matrix__hashCode_IMPL_6770(::uStatic* __this, bool arg0_, jobject arg1_);
Matrix* Matrix__New_5(::uStatic* __this);
void Matrix__setValues(Matrix* __this, ::app::Android::Runtime::FloatArray* arg0);
void Matrix__setValues_IMPL_6811(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::java::lang::String* Matrix__toString(Matrix* __this);
::uObject* Matrix__toString_IMPL_6812(::uStatic* __this, bool arg0_, jobject arg1_);

struct Matrix : ::app::Android::java::lang::Object
{
    void _ObjInit_4() { Matrix___ObjInit_4(this); }
    void setValues(::app::Android::Runtime::FloatArray* arg0) { Matrix__setValues(this, arg0); }
};

}}}}


#endif
