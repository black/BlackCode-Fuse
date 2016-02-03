// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_D_L_R_CALLBACK2_H__
#define __APP_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_D_L_R_CALLBACK2_H__

#include <app/Android.android.view.SurfaceHolderDLRCallback.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* SurfaceHolderDLRCallback2__typeof();

struct SurfaceHolderDLRCallback2
{
    void(*__fp_surfaceRedrawNeeded)(void*, ::uObject*);

    static void surfaceRedrawNeeded(::uObject* __this, ::uObject* arg0) { ((SurfaceHolderDLRCallback2*)uGetInterfacePtr(__this, SurfaceHolderDLRCallback2__typeof()))->__fp_surfaceRedrawNeeded((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
