// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.SurfaceHolderDLRCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface SurfaceHolderDLRCallback2 :27058
// {
uInterfaceType* SurfaceHolderDLRCallback2_typeof();

struct SurfaceHolderDLRCallback2
{
    void(*fp_surfaceRedrawNeeded)(uObject*, uObject*);
    static void surfaceRedrawNeeded(const uInterface& __this, uObject* arg0) { __this.VTable<SurfaceHolderDLRCallback2>()->fp_surfaceRedrawNeeded(__this, arg0); }
};
// }

}}}} // ::g::Android::android::view
