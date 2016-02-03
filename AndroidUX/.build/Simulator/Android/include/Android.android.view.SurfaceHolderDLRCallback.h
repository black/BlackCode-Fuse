// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface SurfaceHolderDLRCallback :27038
// {
uInterfaceType* SurfaceHolderDLRCallback_typeof();

struct SurfaceHolderDLRCallback
{
    void(*fp_surfaceChanged)(uObject*, uObject*, int*, int*, int*);
    void(*fp_surfaceCreated)(uObject*, uObject*);
    void(*fp_surfaceDestroyed)(uObject*, uObject*);
    static void surfaceChanged(const uInterface& __this, uObject* arg0, int arg1, int arg2, int arg3) { __this.VTable<SurfaceHolderDLRCallback>()->fp_surfaceChanged(__this, arg0, &arg1, &arg2, &arg3); }
    static void surfaceCreated(const uInterface& __this, uObject* arg0) { __this.VTable<SurfaceHolderDLRCallback>()->fp_surfaceCreated(__this, arg0); }
    static void surfaceDestroyed(const uInterface& __this, uObject* arg0) { __this.VTable<SurfaceHolderDLRCallback>()->fp_surfaceDestroyed(__this, arg0); }
};
// }

}}}} // ::g::Android::android::view
