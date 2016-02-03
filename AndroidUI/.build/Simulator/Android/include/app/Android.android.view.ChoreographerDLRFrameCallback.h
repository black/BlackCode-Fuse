// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_CHOREOGRAPHER_D_L_R_FRAME_CALLBACK_H__
#define __APP_ANDROID_ANDROID_VIEW_CHOREOGRAPHER_D_L_R_FRAME_CALLBACK_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ChoreographerDLRFrameCallback__typeof();

struct ChoreographerDLRFrameCallback
{
    void(*__fp_doFrame)(void*, ::uLong);

    static void doFrame(::uObject* __this, ::uLong arg0) { ((ChoreographerDLRFrameCallback*)uGetInterfacePtr(__this, ChoreographerDLRFrameCallback__typeof()))->__fp_doFrame((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
