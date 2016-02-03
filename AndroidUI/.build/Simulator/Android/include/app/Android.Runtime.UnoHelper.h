// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_UNO_HELPER_H__
#define __APP_ANDROID_RUNTIME_UNO_HELPER_H__

#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Runtime {

extern jclass UnoHelper___helperCls;
extern bool UnoHelper___inited;

struct UnoHelper__uType : ::uClassType
{
};

UnoHelper__uType* UnoHelper__typeof();

void UnoHelper__Init(::uStatic* __this);
void UnoHelper__RegisterCallback(::uStatic* __this, JNINativeMethod nativeFunc_, jobject optionalClass_);
::uObject* UnoHelper__RunnableFromAction(::uStatic* __this, ::uDelegate* actn);

}}}


#endif
