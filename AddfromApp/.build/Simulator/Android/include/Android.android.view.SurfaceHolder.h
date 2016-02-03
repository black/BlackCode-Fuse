// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace view{struct Surface;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface SurfaceHolder :27074
// {
uInterfaceType* SurfaceHolder_typeof();

struct SurfaceHolder
{
    void(*fp_addCallback)(uObject*, uObject*);
    void(*fp_getSurface)(uObject*, ::g::Android::android::view::Surface**);
    void(*fp_getSurfaceFrame)(uObject*, ::g::Android::android::graphics::Rect**);
    void(*fp_isCreating)(uObject*, bool*);
    void(*fp_lockCanvas)(uObject*, ::g::Android::android::graphics::Canvas**);
    void(*fp_lockCanvas1)(uObject*, ::g::Android::android::graphics::Rect*, ::g::Android::android::graphics::Canvas**);
    void(*fp_removeCallback)(uObject*, uObject*);
    void(*fp_setFixedSize)(uObject*, int*, int*);
    void(*fp_setFormat)(uObject*, int*);
    void(*fp_setKeepScreenOn)(uObject*, bool*);
    void(*fp_setSizeFromLayout)(uObject*);
    void(*fp_setType)(uObject*, int*);
    void(*fp_unlockCanvasAndPost)(uObject*, ::g::Android::android::graphics::Canvas*);
    static void addCallback(const uInterface& __this, uObject* arg0) { __this.VTable<SurfaceHolder>()->fp_addCallback(__this, arg0); }
    static ::g::Android::android::view::Surface* getSurface(const uInterface& __this) { ::g::Android::android::view::Surface* __retval; return __this.VTable<SurfaceHolder>()->fp_getSurface(__this, &__retval), __retval; }
    static ::g::Android::android::graphics::Rect* getSurfaceFrame(const uInterface& __this) { ::g::Android::android::graphics::Rect* __retval; return __this.VTable<SurfaceHolder>()->fp_getSurfaceFrame(__this, &__retval), __retval; }
    static bool isCreating(const uInterface& __this) { bool __retval; return __this.VTable<SurfaceHolder>()->fp_isCreating(__this, &__retval), __retval; }
    static ::g::Android::android::graphics::Canvas* lockCanvas(const uInterface& __this) { ::g::Android::android::graphics::Canvas* __retval; return __this.VTable<SurfaceHolder>()->fp_lockCanvas(__this, &__retval), __retval; }
    static ::g::Android::android::graphics::Canvas* lockCanvas1(const uInterface& __this, ::g::Android::android::graphics::Rect* arg0) { ::g::Android::android::graphics::Canvas* __retval; return __this.VTable<SurfaceHolder>()->fp_lockCanvas1(__this, arg0, &__retval), __retval; }
    static void removeCallback(const uInterface& __this, uObject* arg0) { __this.VTable<SurfaceHolder>()->fp_removeCallback(__this, arg0); }
    static void setFixedSize(const uInterface& __this, int arg0, int arg1) { __this.VTable<SurfaceHolder>()->fp_setFixedSize(__this, &arg0, &arg1); }
    static void setFormat(const uInterface& __this, int arg0) { __this.VTable<SurfaceHolder>()->fp_setFormat(__this, &arg0); }
    static void setKeepScreenOn(const uInterface& __this, bool arg0) { __this.VTable<SurfaceHolder>()->fp_setKeepScreenOn(__this, &arg0); }
    static void setSizeFromLayout(const uInterface& __this) { __this.VTable<SurfaceHolder>()->fp_setSizeFromLayout(__this); }
    static void setType(const uInterface& __this, int arg0) { __this.VTable<SurfaceHolder>()->fp_setType(__this, &arg0); }
    static void unlockCanvasAndPost(const uInterface& __this, ::g::Android::android::graphics::Canvas* arg0) { __this.VTable<SurfaceHolder>()->fp_unlockCanvasAndPost(__this, arg0); }
};
// }

}}}} // ::g::Android::android::view
