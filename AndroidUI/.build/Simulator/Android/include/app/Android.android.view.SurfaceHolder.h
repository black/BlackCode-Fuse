// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_H__
#define __APP_ANDROID_ANDROID_VIEW_SURFACE_HOLDER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace view { struct Surface; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* SurfaceHolder__typeof();

struct SurfaceHolder
{
    void(*__fp_addCallback)(void*, ::uObject*);
    ::app::Android::android::view::Surface*(*__fp_getSurface)(void*);
    ::app::Android::android::graphics::Rect*(*__fp_getSurfaceFrame)(void*);
    bool(*__fp_isCreating)(void*);
    ::app::Android::android::graphics::Canvas*(*__fp_lockCanvas)(void*);
    ::app::Android::android::graphics::Canvas*(*__fp_lockCanvas_1)(void*, ::app::Android::android::graphics::Rect*);
    void(*__fp_removeCallback)(void*, ::uObject*);
    void(*__fp_setFixedSize)(void*, int, int);
    void(*__fp_setFormat)(void*, int);
    void(*__fp_setKeepScreenOn)(void*, bool);
    void(*__fp_setSizeFromLayout)(void*);
    void(*__fp_setType)(void*, int);
    void(*__fp_unlockCanvasAndPost)(void*, ::app::Android::android::graphics::Canvas*);

    static void addCallback(::uObject* __this, ::uObject* arg0) { ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_addCallback((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::app::Android::android::view::Surface* getSurface(::uObject* __this) { return ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_getSurface((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::android::graphics::Rect* getSurfaceFrame(::uObject* __this) { return ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_getSurfaceFrame((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isCreating(::uObject* __this) { return ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_isCreating((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::android::graphics::Canvas* lockCanvas(::uObject* __this) { return ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_lockCanvas((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Android::android::graphics::Canvas* lockCanvas_1(::uObject* __this, ::app::Android::android::graphics::Rect* arg0) { return ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_lockCanvas_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void removeCallback(::uObject* __this, ::uObject* arg0) { ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_removeCallback((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void setFixedSize(::uObject* __this, int arg0, int arg1) { ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_setFixedSize((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void setFormat(::uObject* __this, int arg0) { ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_setFormat((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void setKeepScreenOn(::uObject* __this, bool arg0) { ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_setKeepScreenOn((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void setSizeFromLayout(::uObject* __this) { ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_setSizeFromLayout((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void setType(::uObject* __this, int arg0) { ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_setType((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void unlockCanvasAndPost(::uObject* __this, ::app::Android::android::graphics::Canvas* arg0) { ((SurfaceHolder*)uGetInterfacePtr(__this, SurfaceHolder__typeof()))->__fp_unlockCanvasAndPost((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
};

}}}}


#endif
