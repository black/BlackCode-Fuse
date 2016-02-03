#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.com.fuse.Native.Camera.h>
#include <app/Android.com.fuse.Native.CameraTask.h>
#include <app/Fuse.Camera.AndroidCameraImpl.h>
#include <app/Fuse.Camera.AndroidCameraImpl_DispatchTakePicture.h>
#include <app/Fuse.Camera.AndroidCameraImpl_TakePictureTask.h>
#include <app/Fuse.Camera.Camera.h>
#include <app/Fuse.Camera.PictureResult.h>
#include <app/Fuse.Camera.TakePictureHelpers.h>
#include <app/Fuse.Camera.TakePictureOptions.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>

namespace app {
namespace Fuse {
namespace Camera {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Android::com::fuse::Native::CameraTask*> AndroidCameraImpl___pendingTask;

AndroidCameraImpl__uType* AndroidCameraImpl__typeof()
{
    static ::uStaticStrong<AndroidCameraImpl__uType*> type;
    if (type != NULL) return type;

    type = (AndroidCameraImpl__uType*)::uAllocClassType(sizeof(AndroidCameraImpl__uType), "Fuse.Camera.AndroidCameraImpl");

    type->SetFields(1,
        ::uNewField("_pendingTask", &AndroidCameraImpl___pendingTask, 0, ::app::Android::com::fuse::Native::CameraTask__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("IsAvailable", AndroidCameraImpl__IsAvailable, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("TakePicture", AndroidCameraImpl__TakePicture, 0, true, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof(), ::app::Fuse::Camera::TakePictureOptions__typeof()));

    ::uRegisterType(type);
    return type;
}

bool AndroidCameraImpl__IsAvailable(::uStatic* __this)
{
    return true;
}

void AndroidCameraImpl__TakePicture(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    ::app::Fuse::Camera::AndroidCameraImpl_DispatchTakePicture* d = ::app::Fuse::Camera::AndroidCameraImpl_DispatchTakePicture__New_1(NULL, futurePath, options);
    ::uPtr< ::app::Fuse::Camera::AndroidCameraImpl_DispatchTakePicture*>(d)->Fire();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidCameraImpl_DispatchTakePicture__uType* AndroidCameraImpl_DispatchTakePicture__typeof()
{
    static ::uStaticStrong<AndroidCameraImpl_DispatchTakePicture__uType*> type;
    if (type != NULL) return type;

    type = (AndroidCameraImpl_DispatchTakePicture__uType*)::uAllocClassType(sizeof(AndroidCameraImpl_DispatchTakePicture__uType), "Fuse.Camera.AndroidCameraImpl.DispatchTakePicture", false, 0, 2, 0);

    type->SetStrongRefs(
        "_futurePath", offsetof(AndroidCameraImpl_DispatchTakePicture, _futurePath),
        "_options", offsetof(AndroidCameraImpl_DispatchTakePicture, _options));

    return type;
}

void AndroidCameraImpl_DispatchTakePicture___ObjInit(AndroidCameraImpl_DispatchTakePicture* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    __this->_futurePath = futurePath;
    __this->_options = options;
}

void AndroidCameraImpl_DispatchTakePicture__Fire(AndroidCameraImpl_DispatchTakePicture* __this)
{
    ::app::Fuse::Camera::AndroidCameraImpl___pendingTask = (::app::Android::com::fuse::Native::CameraTask*)::app::Fuse::Camera::AndroidCameraImpl_TakePictureTask__New_3(NULL, __this->_futurePath, __this->_options);
    ::app::Android::com::fuse::Native::Camera__TakePicture(NULL, (::uObject*)::app::Fuse::Camera::AndroidCameraImpl___pendingTask);
}

AndroidCameraImpl_DispatchTakePicture* AndroidCameraImpl_DispatchTakePicture__New_1(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    AndroidCameraImpl_DispatchTakePicture* inst = (AndroidCameraImpl_DispatchTakePicture*)::uAllocObject(sizeof(AndroidCameraImpl_DispatchTakePicture), AndroidCameraImpl_DispatchTakePicture__typeof());
    inst->_ObjInit(futurePath, options);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidCameraImpl_TakePictureTask__uType* AndroidCameraImpl_TakePictureTask__typeof()
{
    static ::uStaticStrong<AndroidCameraImpl_TakePictureTask__uType*> type;
    if (type != NULL) return type;

    type = (AndroidCameraImpl_TakePictureTask__uType*)::uAllocClassType(sizeof(AndroidCameraImpl_TakePictureTask__uType), "Fuse.Camera.AndroidCameraImpl.TakePictureTask", false, 2, 3, 0);

    type->SetBaseType(::app::Android::com::fuse::Native::CameraTask__typeof());
    type->__fp_OnFailed = (void(*)(::app::Android::com::fuse::Native::CameraTask*, ::uObject*))AndroidCameraImpl_TakePictureTask__OnFailed;
    type->__fp_OnSuccess = (void(*)(::app::Android::com::fuse::Native::CameraTask*, ::uObject*))AndroidCameraImpl_TakePictureTask__OnSuccess;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AndroidCameraImpl_TakePictureTask__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AndroidCameraImpl_TakePictureTask__uType, __interface_1));

    type->SetStrongRefs(
        "_futurePath", offsetof(AndroidCameraImpl_TakePictureTask, _futurePath),
        "_options", offsetof(AndroidCameraImpl_TakePictureTask, _options),
        "_payload", offsetof(AndroidCameraImpl_TakePictureTask, _payload));

    return type;
}

void AndroidCameraImpl_TakePictureTask___ObjInit_4(AndroidCameraImpl_TakePictureTask* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    ::app::Android::com::fuse::Native::CameraTask___ObjInit_2(__this, ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetWidth(), ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetHeight(), ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->CorrectOrientation());
    __this->_futurePath = futurePath;
    __this->_options = options;
}

void AndroidCameraImpl_TakePictureTask__fireResultCode(AndroidCameraImpl_TakePictureTask* __this)
{
    ::app::Fuse::Camera::AndroidCameraImpl___pendingTask = NULL;

    if (__this->_success)
    {
        ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_futurePath)->Resolve(::app::Fuse::Camera::PictureResult__New_1(NULL, __this->_payload, 0));
    }
    else
    {
        ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_futurePath)->Reject(::app::Uno::Exception__New_2(NULL, __this->_payload));
    }
}

AndroidCameraImpl_TakePictureTask* AndroidCameraImpl_TakePictureTask__New_3(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    AndroidCameraImpl_TakePictureTask* inst = (AndroidCameraImpl_TakePictureTask*)::uAllocObject(sizeof(AndroidCameraImpl_TakePictureTask), AndroidCameraImpl_TakePictureTask__typeof());
    inst->_ObjInit_4(futurePath, options);
    return inst;
}

void AndroidCameraImpl_TakePictureTask__OnFailed(AndroidCameraImpl_TakePictureTask* __this, ::uObject* message)
{
    __this->_payload = ::app::Android::Base::Types::String__JavaToUno(NULL, message);
    __this->_success = false;
    __this->fireResultCode();
}

void AndroidCameraImpl_TakePictureTask__OnSuccess(AndroidCameraImpl_TakePictureTask* __this, ::uObject* path)
{
    __this->_payload = ::app::Android::Base::Types::String__JavaToUno(NULL, path);
    __this->_success = true;
    __this->fireResultCode();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Camera__uType* Camera__typeof()
{
    static ::uStaticStrong<Camera__uType*> type;
    if (type != NULL) return type;

    type = (Camera__uType*)::uAllocClassType(sizeof(Camera__uType), "Fuse.Camera.Camera");

    type->SetFunctions(3,
        ::uNewFunction("IsAvailable", Camera__IsAvailable, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("TakePicture", Camera__TakePicture, 0, true, ::app::Uno::Threading::Future__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunction("TakePicture", Camera__TakePicture_1, 0, true, ::app::Uno::Threading::Future__Fuse_Camera_PictureResult__typeof(), ::app::Fuse::Camera::TakePictureOptions__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Camera__IsAvailable(::uStatic* __this)
{
    {
        return ::app::Fuse::Camera::AndroidCameraImpl__IsAvailable(NULL);
    }

    return false;
}

::app::Uno::Threading::Future__Fuse_Camera_PictureResult* Camera__TakePicture(::uStatic* __this)
{
    return Camera__TakePicture_1(NULL, ::app::Fuse::Camera::TakePictureOptions__New_1(NULL));
}

::app::Uno::Threading::Future__Fuse_Camera_PictureResult* Camera__TakePicture_1(::uStatic* __this, ::app::Fuse::Camera::TakePictureOptions* options)
{
    {
        ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath = ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__New_1(NULL);
        ::app::Fuse::Camera::AndroidCameraImpl__TakePicture(NULL, futurePath, options);
        return (::app::Uno::Threading::Future__Fuse_Camera_PictureResult*)futurePath;
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PictureResult__uType* PictureResult__typeof()
{
    static ::uStaticStrong<PictureResult__uType*> type;
    if (type != NULL) return type;

    type = (PictureResult__uType*)::uAllocClassType(sizeof(PictureResult__uType), "Fuse.Camera.PictureResult", false, 0, 1, 0);

    type->SetStrongRefs(
        "_Path", offsetof(PictureResult, _Path));

    type->SetFunctions(5,
        ::uNewFunction("get_Path", PictureResult__get_Path, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Rotation", PictureResult__get_Rotation, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", PictureResult__New_1, 0, true, PictureResult__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Path", PictureResult__set_Path, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Rotation", PictureResult__set_Rotation, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void PictureResult___ObjInit(PictureResult* __this, ::uString* path, int rotation)
{
    __this->Path(path);
    __this->Rotation(rotation);
}

::uString* PictureResult__get_Path(PictureResult* __this)
{
    return __this->_Path;
}

int PictureResult__get_Rotation(PictureResult* __this)
{
    return __this->_Rotation;
}

PictureResult* PictureResult__New_1(::uStatic* __this, ::uString* path, int rotation)
{
    PictureResult* inst = (PictureResult*)::uAllocObject(sizeof(PictureResult), PictureResult__typeof());
    inst->_ObjInit(path, rotation);
    return inst;
}

void PictureResult__set_Path(PictureResult* __this, ::uString* value)
{
    __this->_Path = value;
}

void PictureResult__set_Rotation(PictureResult* __this, int value)
{
    __this->_Rotation = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TakePictureHelpers__uType* TakePictureHelpers__typeof()
{
    static ::uStaticStrong<TakePictureHelpers__uType*> type;
    if (type != NULL) return type;

    type = (TakePictureHelpers__uType*)::uAllocClassType(sizeof(TakePictureHelpers__uType), "Fuse.Camera.TakePictureHelpers");

    type->SetFunctions(1,
        ::uNewFunction("GetAspectCorrectedSize", TakePictureHelpers__GetAspectCorrectedSize, 0, true, ::app::Uno::Int2__typeof(), ::app::Fuse::Camera::TakePictureOptions__typeof(), ::app::Uno::Int2__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Int2 TakePictureHelpers__GetAspectCorrectedSize(::uStatic* __this, ::app::Fuse::Camera::TakePictureOptions* options, ::app::Uno::Int2 originalImageSize)
{
    if (!::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetHeightSet() && !::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetWidthSet())
    {
        return originalImageSize;
    }

    float targetWidth = (float)::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetWidth();
    float targetHeight = (float)options->TargetHeight();
    float ratio = 1.0f;
    float width = (float)originalImageSize.X;
    float height = (float)originalImageSize.Y;

    if (options->TargetWidthSet() && !options->TargetHeightSet())
    {
        float origRatio = height / width;
        targetHeight = targetWidth * origRatio;
    }
    else if (!options->TargetWidthSet() && options->TargetHeightSet())
    {
        float origRatio = width / height;
        targetWidth = targetHeight * origRatio;
    }

    float w = (float)originalImageSize.X;
    float h = (float)originalImageSize.Y;

    if (::app::Uno::Math__Floor_1(NULL, w) > targetWidth)
    {
        ratio = targetWidth / width;
        w = targetWidth;
        h = h * ratio;
    }

    if (::app::Uno::Math__Floor_1(NULL, h) > targetHeight)
    {
        ratio = targetHeight / height;
        w = width * ratio;
        h = targetHeight;
    }

    return ::app::Uno::Int2__New_2(NULL, (int)::app::Uno::Math__Floor_1(NULL, w), (int)::app::Uno::Math__Floor_1(NULL, h));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Camera\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TakePictureOptions__uType* TakePictureOptions__typeof()
{
    static ::uStaticStrong<TakePictureOptions__uType*> type;
    if (type != NULL) return type;

    type = (TakePictureOptions__uType*)::uAllocClassType(sizeof(TakePictureOptions__uType), "Fuse.Camera.TakePictureOptions", false, 0, 0, 0);

    type->SetFields(3,
        ::uNewField("_correctOrientation", NULL, offsetof(TakePictureOptions, _correctOrientation), ::app::Uno::Bool__typeof()),
        ::uNewField("_targetHeight", NULL, offsetof(TakePictureOptions, _targetHeight), ::app::Uno::Int__typeof()),
        ::uNewField("_targetWidth", NULL, offsetof(TakePictureOptions, _targetWidth), ::app::Uno::Int__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_CorrectOrientation", TakePictureOptions__get_CorrectOrientation, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_TargetHeight", TakePictureOptions__get_TargetHeight, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TargetHeightSet", TakePictureOptions__get_TargetHeightSet, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_TargetWidth", TakePictureOptions__get_TargetWidth, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TargetWidthSet", TakePictureOptions__get_TargetWidthSet, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", TakePictureOptions__New_1, 0, true, TakePictureOptions__typeof()),
        ::uNewFunctionVoid("set_CorrectOrientation", TakePictureOptions__set_CorrectOrientation, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_TargetHeight", TakePictureOptions__set_TargetHeight, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_TargetHeightSet", TakePictureOptions__set_TargetHeightSet, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_TargetWidth", TakePictureOptions__set_TargetWidth, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_TargetWidthSet", TakePictureOptions__set_TargetWidthSet, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void TakePictureOptions___ObjInit(TakePictureOptions* __this)
{
    __this->_targetWidth = -1;
    __this->_targetHeight = -1;
    __this->_correctOrientation = true;
}

bool TakePictureOptions__get_CorrectOrientation(TakePictureOptions* __this)
{
    return __this->_correctOrientation;
}

int TakePictureOptions__get_TargetHeight(TakePictureOptions* __this)
{
    return __this->_targetHeight;
}

bool TakePictureOptions__get_TargetHeightSet(TakePictureOptions* __this)
{
    return __this->_TargetHeightSet;
}

int TakePictureOptions__get_TargetWidth(TakePictureOptions* __this)
{
    return __this->_targetWidth;
}

bool TakePictureOptions__get_TargetWidthSet(TakePictureOptions* __this)
{
    return __this->_TargetWidthSet;
}

TakePictureOptions* TakePictureOptions__New_1(::uStatic* __this)
{
    TakePictureOptions* inst = (TakePictureOptions*)::uAllocObject(sizeof(TakePictureOptions), TakePictureOptions__typeof());
    inst->_ObjInit();
    return inst;
}

void TakePictureOptions__set_CorrectOrientation(TakePictureOptions* __this, bool value)
{
    __this->_correctOrientation = value;
}

void TakePictureOptions__set_TargetHeight(TakePictureOptions* __this, int value)
{
    if (!__this->TargetHeightSet())
    {
        __this->TargetHeightSet(true);
    }

    __this->_targetHeight = value;
}

void TakePictureOptions__set_TargetHeightSet(TakePictureOptions* __this, bool value)
{
    __this->_TargetHeightSet = value;
}

void TakePictureOptions__set_TargetWidth(TakePictureOptions* __this, int value)
{
    if (!__this->TargetWidthSet())
    {
        __this->TargetWidthSet(true);
    }

    __this->_targetWidth = value;
}

void TakePictureOptions__set_TargetWidthSet(TakePictureOptions* __this, bool value)
{
    __this->_TargetWidthSet = value;
}

}}}
