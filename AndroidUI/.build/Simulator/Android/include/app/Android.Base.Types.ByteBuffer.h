// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_TYPES_BYTE_BUFFER_H__
#define __APP_ANDROID_BASE_TYPES_BYTE_BUFFER_H__

#include <android/log.h>
#include <app/Android.Base.JNI.h>
#include <jni.h>
#include <Uno.h>
#include <Xli.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace app { namespace Android { namespace Base { namespace Wrappers { struct JWrapper; } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct DirectBuffer; } } } }

namespace app {
namespace Android {
namespace Base {
namespace Types {

struct ByteBuffer__uType : ::uClassType
{
};

ByteBuffer__uType* ByteBuffer__typeof();

void* ByteBuffer__GetDirectBufferAddress(::uStatic* __this, jobject directByteBuffer_);
::uLong ByteBuffer__GetDirectBufferCapacity(::uStatic* __this, jobject directByteBuffer_);
jobject ByteBuffer__NewDirectByteBuffer(::uStatic* __this, ::uArray* data_);
jobject ByteBuffer__NewDirectByteBuffer_1(::uStatic* __this, ::uArray* data_);
jobject ByteBuffer__NewDirectByteBuffer_2(::uStatic* __this, void* data_, ::uLong capacity_);
bool ByteBuffer__ValidDirectByteBuffer(::uStatic* __this, jobject directByteBuffer_);
::app::Uno::Runtime::Implementation::DirectBuffer* ByteBuffer__WrappedToUnoDirect(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* directByteBuffer);

}}}}


#endif
