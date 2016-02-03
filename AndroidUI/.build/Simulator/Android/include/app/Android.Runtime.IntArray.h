// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_INT_ARRAY_H__
#define __APP_ANDROID_RUNTIME_INT_ARRAY_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.Collections.IEnumerable__int.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Runtime {

struct IntArray;

struct IntArray__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Uno::Collections::IEnumerable__int __interface_2;
};

IntArray__uType* IntArray__typeof();

void IntArray___ObjInit_4(IntArray* __this, int length);
int IntArray__get_Item(IntArray* __this, int i);
::uObject* IntArray__GetEnumerator(IntArray* __this);
IntArray* IntArray__New_5(::uStatic* __this, int length);
void IntArray__set_Item(IntArray* __this, int i, int value);

struct IntArray : ::app::Android::java::lang::Object
{
    void _ObjInit_4(int length) { IntArray___ObjInit_4(this, length); }
    int Item(int i) { return IntArray__get_Item(this, i); }
    ::uObject* GetEnumerator() { return IntArray__GetEnumerator(this); }
    void Item(int i, int value) { IntArray__set_Item(this, i, value); }
};

}}}


#endif
