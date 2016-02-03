// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_CHAR_ARRAY_H__
#define __APP_ANDROID_RUNTIME_CHAR_ARRAY_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.Collections.IEnumerable__char.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Runtime {

struct CharArray;

struct CharArray__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Uno::Collections::IEnumerable__char __interface_2;
};

CharArray__uType* CharArray__typeof();

::uObject* CharArray__GetEnumerator(CharArray* __this);

struct CharArray : ::app::Android::java::lang::Object
{
    ::uObject* GetEnumerator() { return CharArray__GetEnumerator(this); }
};

}}}


#endif
