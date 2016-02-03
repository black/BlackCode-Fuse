// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_D_L_R_CALLBACK_H__
#define __APP_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_D_L_R_CALLBACK_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* SurfaceHolderDLRCallback__typeof();

struct SurfaceHolderDLRCallback
{
    void(*__fp_surfaceChanged)(void*, ::uObject*, int, int, int);
    void(*__fp_surfaceCreated)(void*, ::uObject*);
    void(*__fp_surfaceDestroyed)(void*, ::uObject*);

    static void surfaceChanged(::uObject* __this, ::uObject* arg0, int arg1, int arg2, int arg3) { ((SurfaceHolderDLRCallback*)uGetInterfacePtr(__this, SurfaceHolderDLRCallback__typeof()))->__fp_surfaceChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2, arg3); }
    static void surfaceCreated(::uObject* __this, ::uObject* arg0) { ((SurfaceHolderDLRCallback*)uGetInterfacePtr(__this, SurfaceHolderDLRCallback__typeof()))->__fp_surfaceCreated((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void surfaceDestroyed(::uObject* __this, ::uObject* arg0) { ((SurfaceHolderDLRCallback*)uGetInterfacePtr(__this, SurfaceHolderDLRCallback__typeof()))->__fp_surfaceDestroyed((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
