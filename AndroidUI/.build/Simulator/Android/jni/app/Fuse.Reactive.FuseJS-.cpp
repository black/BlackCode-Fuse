#include <app/Fuse.Camera.Camera.h>
#include <app/Fuse.Camera.PictureResult.h>
#include <app/Fuse.Camera.TakePictureOptions.h>
#include <app/Fuse.Launcher.h>
#include <app/Fuse.Reactive.FuseJS.Base64.h>
#include <app/Fuse.Reactive.FuseJS.Camera.h>
#include <app/Fuse.Reactive.FuseJS.Email.h>
#include <app/Fuse.Reactive.FuseJS.FileReaderImpl.h>
#include <app/Fuse.Reactive.FuseJS.FuseJSHttp.h>
#include <app/Fuse.Reactive.FuseJS.Globals.h>
#include <app/Fuse.Reactive.FuseJS.Http.h>
#include <app/Fuse.Reactive.FuseJS.InterApp.h>
#include <app/Fuse.Reactive.FuseJS.Lifecycle.h>
#include <app/Fuse.Reactive.FuseJS.Maps.h>
#include <app/Fuse.Reactive.FuseJS.Phone.h>
#include <app/Fuse.Reactive.FuseJS.Storage.h>
#include <app/Fuse.Reactive.FuseJS.Timer.h>
#include <app/Fuse.Reactive.FuseJS.Timer_Closure.h>
#include <app/Fuse.Reactive.FuseJS.Timer_Time.h>
#include <app/Fuse.Reactive.FuseJS.Vibration.h>
#include <app/Fuse.Reactive.Marshal.h>
#include <app/Fuse.Reactive.ThreadWorker.h>
#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Scripting.Context.h>
#include <app/Fuse.Scripting.Error.h>
#include <app/Fuse.Scripting.Function.h>
#include <app/Fuse.Scripting.FutureFactory__bool.h>
#include <app/Fuse.Scripting.FutureFactory__Fuse_Camera_PictureResult.h>
#include <app/Fuse.Scripting.FutureFactory__string.h>
#include <app/Fuse.Scripting.IModule.h>
#include <app/Fuse.Scripting.NativeCallback.h>
#include <app/Fuse.Scripting.NativeEvent.h>
#include <app/Fuse.Scripting.NativeFunction.h>
#include <app/Fuse.Scripting.NativeMember.h>
#include <app/Fuse.Scripting.NativeModule.h>
#include <app/Fuse.Scripting.NativePromise__bool__bool.h>
#include <app/Fuse.Scripting.NativePromise__Fuse_Camera_PictureResult__Fuse_S-92fa740c.h>
#include <app/Fuse.Scripting.NativePromise__string__string.h>
#include <app/Fuse.Scripting.Object.h>
#include <app/Fuse.Scripting.ResultConverter__bool__bool.h>
#include <app/Fuse.Scripting.ResultConverter__Fuse_Camera_PictureResult__Fuse-a3f014a.h>
#include <app/Fuse.Scripting.ResultConverter__string__string.h>
#include <app/Fuse.Scripting.ResultFactory__string.h>
#include <app/Fuse.Scripting.TaskPriority.h>
#include <app/Fuse.Scripting.Value.h>
#include <app/Fuse.Storage.ApplicationDir.h>
#include <app/Fuse.Vibration.Vibration.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection__string__string.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__string.h>
#include <app/Uno.Collections.List__Fuse_Reactive_FuseJS_Timer_Time.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Collections.List1_Enumerator__string.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__string.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.Path.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.Http.HttpMessageHandler.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.Http.HttpResponseType.h>
#include <app/Uno.Net.Http.Uri.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.ApplicationState.h>
#include <app/Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.Ascii.h>
#include <app/Uno.Text.Base64.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Text.Utf8.h>
#include <app/Uno.Threading.Future__bool.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Future__string.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Base64__uType* Base64__typeof()
{
    static ::uStaticStrong<Base64__uType*> type;
    if (type != NULL) return type;

    type = (Base64__uType*)::uAllocClassType(sizeof(Base64__uType), "Fuse.Reactive.FuseJS.Base64", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Scripting::NativeModule__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IModule__typeof(), offsetof(Base64__uType, __interface_0));

    type->SetFunctions(5,
        ::uNewFunction("DecodeAscii", Base64__DecodeAscii, 0, false, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("DecodeUtf8", Base64__DecodeUtf8, 0, false, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("EncodeAscii", Base64__EncodeAscii, 0, false, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("EncodeUtf8", Base64__EncodeUtf8, 0, false, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction(".ctor", Base64__New_2, 0, true, Base64__typeof()));

    ::uRegisterType(type);
    return type;
}

void Base64___ObjInit_1(Base64* __this)
{
    ::app::Fuse::Scripting::NativeModule___ObjInit(__this, ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 0));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("encodeAscii"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Base64__EncodeAscii, __this)));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("decodeAscii"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Base64__DecodeAscii, __this)));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("encodeUtf8"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Base64__EncodeUtf8, __this)));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("decodeUtf8"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Base64__DecodeUtf8, __this)));
}

::uObject* Base64__DecodeAscii(Base64* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::uString* str = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());

        if (::app::Uno::String__op_Inequality(NULL, str, NULL))
        {
            return (::uObject*)::app::Uno::Text::Ascii__GetString(NULL, ::app::Uno::Text::Base64__GetBytes(NULL, str));
        }
    }

    return NULL;
}

::uObject* Base64__DecodeUtf8(Base64* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::uString* str = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());

        if (::app::Uno::String__op_Inequality(NULL, str, NULL))
        {
            return (::uObject*)::app::Uno::Text::Utf8__GetString(NULL, ::app::Uno::Text::Base64__GetBytes(NULL, str));
        }
    }

    return NULL;
}

::uObject* Base64__EncodeAscii(Base64* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::uString* str = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());

        if (::app::Uno::String__op_Inequality(NULL, str, NULL))
        {
            return (::uObject*)::app::Uno::Text::Base64__GetString(NULL, ::app::Uno::Text::Ascii__GetBytes(NULL, str));
        }
    }

    return NULL;
}

::uObject* Base64__EncodeUtf8(Base64* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::uString* str = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());

        if (::app::Uno::String__op_Inequality(NULL, str, NULL))
        {
            return (::uObject*)::app::Uno::Text::Base64__GetString(NULL, ::app::Uno::Text::Utf8__GetBytes(NULL, str));
        }
    }

    return NULL;
}

Base64* Base64__New_2(::uStatic* __this)
{
    Base64* inst = (Base64*)::uAllocObject(sizeof(Base64), Base64__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Camera__uType* Camera__typeof()
{
    static ::uStaticStrong<Camera__uType*> type;
    if (type != NULL) return type;

    type = (Camera__uType*)::uAllocClassType(sizeof(Camera__uType), "Fuse.Reactive.FuseJS.Camera");

    type->SetFunctions(3,
        ::uNewFunction("Converter", Camera__Converter, 0, true, ::app::Fuse::Scripting::Object__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::app::Fuse::Camera::PictureResult__typeof()),
        ::uNewFunction("CreateModule", Camera__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction("TakePicture", Camera__TakePicture, 0, true, ::app::Uno::Threading::Future__Fuse_Camera_PictureResult__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Scripting::Object* Camera__Converter(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::app::Fuse::Camera::PictureResult* result)
{
    ::app::Fuse::Scripting::Function* func = ::uCast< ::app::Fuse::Scripting::Function*>(::uPtr< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::Context*>(context)->GlobalObject())->Item(::uGetConstString("File")), ::app::Fuse::Scripting::Function__typeof());
    ::app::Fuse::Scripting::Object* file = ::uPtr< ::app::Fuse::Scripting::Function*>(func)->Construct(::uNewArray(::uObject__typeof(), 0));
    ::uPtr< ::app::Fuse::Scripting::Object*>(file)->Item(::uGetConstString("path"), (::uObject*)::uPtr< ::app::Fuse::Camera::PictureResult*>(result)->Path());
    file->Item(::uGetConstString("name"), (::uObject*)::app::Uno::IO::Path__GetFileName(NULL, result->Path()));
    return file;
}

::uObject* Camera__CreateModule(::uStatic* __this)
{
    ::uArray* array_126;
    return (::uObject*)::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_126 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 1), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1(NULL, ::uGetConstString("takePicture"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::FutureFactory__Fuse_Camera_PictureResult__typeof(), (const void*)Camera__TakePicture), ::uNewDelegateNonVirt(::app::Fuse::Scripting::ResultConverter__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof(), (const void*)Camera__Converter)), array_126));
}

::app::Uno::Threading::Future__Fuse_Camera_PictureResult* Camera__TakePicture(::uStatic* __this, ::uArray* args)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Fuse::Camera::TakePictureOptions* options = ::app::Fuse::Camera::TakePictureOptions__New_1(NULL);

    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::app::Fuse::Scripting::Object* arg = ::uAs< ::app::Fuse::Scripting::Object*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Scripting::Object__typeof());

        if (arg != NULL)
        {
            for (array_123 = ::uPtr< ::app::Fuse::Scripting::Object*>(arg)->Keys(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
            {
                ::uString* k = ::uPtr< ::uArray*>(array_123)->Item< ::uString*>(index_124);

                if (::app::Uno::String__op_Equality(NULL, k, ::uGetConstString("targetWidth")))
                {
                    ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetWidth(::app::Fuse::Reactive::Marshal__ToInt(NULL, ::uPtr< ::app::Fuse::Scripting::Object*>(arg)->Item(k)));
                }

                if (::app::Uno::String__op_Equality(NULL, k, ::uGetConstString("targetHeight")))
                {
                    ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetHeight(::app::Fuse::Reactive::Marshal__ToInt(NULL, ::uPtr< ::app::Fuse::Scripting::Object*>(arg)->Item(k)));
                }

                if (::app::Uno::String__op_Equality(NULL, k, ::uGetConstString("correctOrientation")))
                {
                    ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->CorrectOrientation(::app::Fuse::Reactive::Marshal__ToBool(NULL, ::uPtr< ::app::Fuse::Scripting::Object*>(arg)->Item(k)));
                }
            }
        }
    }

    return ::app::Fuse::Camera::Camera__TakePicture_1(NULL, options);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Email__uType* Email__typeof()
{
    static ::uStaticStrong<Email__uType*> type;
    if (type != NULL) return type;

    type = (Email__uType*)::uAllocClassType(sizeof(Email__uType), "Fuse.Reactive.FuseJS.Email", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction("Compose", Email__Compose, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("CreateModule", Email__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction(".ctor", Email__New_1, 0, true, Email__typeof()));

    ::uRegisterType(type);
    return type;
}

void Email___ObjInit(Email* __this)
{
}

::uObject* Email__Compose(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    ::uString* to = ::uCast< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
    ::uString* cc = ::uCast< ::uString*>(args->Item< ::uObject*>(1), ::app::Uno::String__typeof());
    ::uString* bcc = ::uCast< ::uString*>(args->Item< ::uObject*>(2), ::app::Uno::String__typeof());
    ::uString* subject = ::uCast< ::uString*>(args->Item< ::uObject*>(3), ::app::Uno::String__typeof());
    ::uString* message = ::uCast< ::uString*>(args->Item< ::uObject*>(4), ::app::Uno::String__typeof());
    ::app::Fuse::Launcher__LaunchEmail(NULL, to, cc, bcc, subject, message);
    return NULL;
}

::uObject* Email__CreateModule(::uStatic* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_123 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("compose"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Email__Compose)), array_123));
}

Email* Email__New_1(::uStatic* __this)
{
    Email* inst = (Email*)::uAllocObject(sizeof(Email), Email__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileReaderImpl__uType* FileReaderImpl__typeof()
{
    static ::uStaticStrong<FileReaderImpl__uType*> type;
    if (type != NULL) return type;

    type = (FileReaderImpl__uType*)::uAllocClassType(sizeof(FileReaderImpl__uType), "Fuse.Reactive.FuseJS.FileReaderImpl");

    type->SetFunctions(3,
        ::uNewFunction("CreateModule", FileReaderImpl__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction("readAsDataURL", FileReaderImpl__readAsDataURL, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("readAsText", FileReaderImpl__readAsText, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

::uObject* FileReaderImpl__CreateModule(::uStatic* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_123 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativePromise__string__string__New_2(NULL, ::uGetConstString("readAsDataURL"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::ResultFactory__string__typeof(), (const void*)FileReaderImpl__readAsDataURL), NULL), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(1) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativePromise__string__string__New_2(NULL, ::uGetConstString("readAsText"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::ResultFactory__string__typeof(), (const void*)FileReaderImpl__readAsText), NULL), array_123));
}

::uString* FileReaderImpl__readAsDataURL(::uStatic* __this, ::uArray* args)
{
    ::uString* path = ::uCast< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
    ::uArray* file = ::app::Uno::IO::File__ReadAllBytes(NULL, path);
    ::uString* type = ::app::Uno::String::EndsWith(::uPtr< ::uString*>(::app::Uno::String::ToUpper(::uPtr< ::uString*>(path))), ::uGetConstString("PNG")) ? ::uGetConstString("png") : ::uGetConstString("jpeg");
    ::uString* base64 = ::app::Uno::Text::Base64__GetString(NULL, file);
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("data:image/"), type), ::uGetConstString(";base64,")), base64);
}

::uString* FileReaderImpl__readAsText(::uStatic* __this, ::uArray* args)
{
    ::uString* path = ::uCast< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
    return ::app::Uno::IO::File__ReadAllText(NULL, path);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FuseJSHttp__uType* FuseJSHttp__typeof()
{
    static ::uStaticStrong<FuseJSHttp__uType*> type;
    if (type != NULL) return type;

    type = (FuseJSHttp__uType*)::uAllocClassType(sizeof(FuseJSHttp__uType), "Fuse.Reactive.FuseJS.FuseJSHttp", false, 0, 7, 0);

    type->SetStrongRefs(
        "_callback", offsetof(FuseJSHttp, _callback),
        "_data", offsetof(FuseJSHttp, _data),
        "_headers", offsetof(FuseJSHttp, _headers),
        "_method", offsetof(FuseJSHttp, _method),
        "_req", offsetof(FuseJSHttp, _req),
        "_url", offsetof(FuseJSHttp, _url),
        "_w", offsetof(FuseJSHttp, _w));

    type->SetFields(7,
        ::uNewField("_callback", NULL, offsetof(FuseJSHttp, _callback), ::app::Fuse::Scripting::Function__typeof()),
        ::uNewField("_data", NULL, offsetof(FuseJSHttp, _data), ::app::Uno::String__typeof()),
        ::uNewField("_headers", NULL, offsetof(FuseJSHttp, _headers), ::app::Uno::Collections::Dictionary__string__string__typeof()),
        ::uNewField("_method", NULL, offsetof(FuseJSHttp, _method), ::app::Uno::String__typeof()),
        ::uNewField("_req", NULL, offsetof(FuseJSHttp, _req), ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()),
        ::uNewField("_url", NULL, offsetof(FuseJSHttp, _url), ::app::Uno::String__typeof()),
        ::uNewField("_w", NULL, offsetof(FuseJSHttp, _w), ::app::Fuse::Reactive::ThreadWorker__typeof()));

    type->SetFunctions(6,
        ::uNewFunction(".ctor", FuseJSHttp__New_1, 0, true, FuseJSHttp__typeof(), ::app::Fuse::Reactive::ThreadWorker__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunctionVoid("OnAborted", FuseJSHttp__OnAborted, 0, false, ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("OnDone", FuseJSHttp__OnDone, 0, false, ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof()),
        ::uNewFunctionVoid("OnError", FuseJSHttp__OnError, 0, false, ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Run", FuseJSHttp__Run, 0, false),
        ::uNewFunction("Stringify", FuseJSHttp__Stringify, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void FuseJSHttp___ObjInit(FuseJSHttp* __this, ::app::Fuse::Reactive::ThreadWorker* w, ::uArray* r)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->_w = w;
    __this->_method = ::uAs< ::uString*>(::uPtr< ::uArray*>(r)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
    __this->_url = ::uAs< ::uString*>(r->Item< ::uObject*>(1), ::app::Uno::String__typeof());
    __this->_data = ::uAs< ::uString*>(r->Item< ::uObject*>(3), ::app::Uno::String__typeof());
    __this->_callback = ::uAs< ::app::Fuse::Scripting::Function*>(r->Item< ::uObject*>(4), ::app::Fuse::Scripting::Function__typeof());
    ::app::Fuse::Scripting::Object* h = ::uAs< ::app::Fuse::Scripting::Object*>(r->Item< ::uObject*>(2), ::app::Fuse::Scripting::Object__typeof());

    if (__this->_headers == NULL)
    {
        __this->_headers = ::app::Uno::Collections::Dictionary__string__string__New_1(NULL);
    }

    for (array_123 = ::uPtr< ::app::Fuse::Scripting::Object*>(h)->Keys(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uString* f = ::uPtr< ::uArray*>(array_123)->Item< ::uString*>(index_124);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_headers)->Add(f, ::uAs< ::uString*>(::uPtr< ::app::Fuse::Scripting::Object*>(h)->Item(f), ::app::Uno::String__typeof()));
    }
}

FuseJSHttp* FuseJSHttp__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* w, ::uArray* r)
{
    FuseJSHttp* inst = (FuseJSHttp*)::uAllocObject(sizeof(FuseJSHttp), FuseJSHttp__typeof());
    inst->_ObjInit(w, r);
    return inst;
}

void FuseJSHttp__OnAborted(FuseJSHttp* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
}

void FuseJSHttp__OnDone(FuseJSHttp* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::uArray* array_127;
    ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_callback)->Call((array_127 = ::uNewArray(::uObject__typeof(), 3), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->GetResponseStatus()), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uObject*>(1) = (::uObject*)::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->GetResponseHeaders(), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uObject*>(2) = (::uObject*)::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->GetResponseContentString(), array_127));
}

void FuseJSHttp__OnError(FuseJSHttp* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* res, ::uString* err)
{
}

void FuseJSHttp__Run(FuseJSHttp* __this)
{
    ::app::Uno::Net::Http::HttpMessageHandler* handler = ::app::Uno::Net::Http::HttpMessageHandler__New_1(NULL);
    __this->_req = ::uPtr< ::app::Uno::Net::Http::HttpMessageHandler*>(handler)->CreateRequest_1(__this->_method, __this->_url, (::uObject*)__this->_w);
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->add_Aborted(::uNewDelegateNonVirt(::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof(), (const void*)FuseJSHttp__OnAborted, __this));
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->add_Done(::uNewDelegateNonVirt(::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof(), (const void*)FuseJSHttp__OnDone, __this));
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->add_Error(::uNewDelegateNonVirt(::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__string__typeof(), (const void*)FuseJSHttp__OnError, __this));
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->SetResponseType(0);

    if (__this->_headers != NULL)
    {
        for (::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__string enum_126 = ::uPtr< ::app::Uno::Collections::Dictionary2_KeyCollection__string__string*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_headers)->Keys())->GetEnumerator(); enum_126.MoveNext(); )
        {
            ::uString* key = enum_126.Current();
            ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->SetHeader(key, ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_headers)->Item(key));
        }
    }

    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_req)->SendAsync_2(__this->_data);
}

::uString* FuseJSHttp__Stringify(::uStatic* __this, ::uString* s)
{
    ::uArray* array_128;
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (int i = 0; i < ::uPtr< ::uString*>(s)->Length(); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(s)->Item(i);

        if (c == '"')
        {
            ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::uGetConstString("\\\""));
        }
        else if (c == 10)
        {
            sb->Append_1(::uGetConstString("\\n"));
        }
        else if (c == 13)
        {
            sb->Append_1(::uGetConstString("\\r"));
        }
        else if (c == 9)
        {
            sb->Append_1(::uGetConstString("\\t"));
        }
        else if (c == '\\')
        {
            sb->Append_1(::uGetConstString("\\"));
        }
        else
        {
            sb->Append((array_128 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_128)->Item< ::uChar>(0) = c, array_128));
        }
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Globals__uType* Globals__typeof()
{
    static ::uStaticStrong<Globals__uType*> type;
    if (type != NULL) return type;

    type = (Globals__uType*)::uAllocClassType(sizeof(Globals__uType), "Fuse.Reactive.FuseJS.Globals");

    type->SetFunctions(3,
        ::uNewFunction("CreateModule", Globals__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction("FileSourceAcceptor", Globals__FileSourceAcceptor, 0, true, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("readAsText", Globals__readAsText, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

::uObject* Globals__CreateModule(::uStatic* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_123 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativePromise__string__string__New_2(NULL, ::uGetConstString("readAsText"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::ResultFactory__string__typeof(), (const void*)Globals__readAsText), NULL), array_123));
}

bool Globals__FileSourceAcceptor(::uStatic* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::UX::BundleFileSource__typeof());
}

::uString* Globals__readAsText(::uStatic* __this, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() != 1)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Globals.readAsText(): Exactly one argument expected")));
    }

    ::uString* key = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());

    if (args->Length() != 1)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Globals.readAsText(): Argument must be string")));
    }

    ::uObject* res;

    if (::app::Uno::UX::Resource__TryFindGlobal(NULL, key, ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)Globals__FileSourceAcceptor), &res))
    {
        ::app::Uno::UX::BundleFileSource* fs = ::uCast< ::app::Uno::UX::BundleFileSource*>(res, ::app::Uno::UX::BundleFileSource__typeof());
        return ::uPtr< ::app::Uno::UX::BundleFileSource*>(fs)->ReadAllText();
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Globals.readAsText(): Global resource file '"), key), ::uGetConstString("' not found"))));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Http__uType* Http__typeof()
{
    static ::uStaticStrong<Http__uType*> type;
    if (type != NULL) return type;

    type = (Http__uType*)::uAllocClassType(sizeof(Http__uType), "Fuse.Reactive.FuseJS.Http", false, 0, 1, 0);

    type->SetStrongRefs(
        "_w", offsetof(Http, _w));

    type->SetFields(1,
        ::uNewField("_w", NULL, offsetof(Http, _w), ::app::Fuse::Reactive::ThreadWorker__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("fusejs_http_send", Http__fusejs_http_send, 0, false, ::uObject__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction(".ctor", Http__New_1, 0, true, Http__typeof(), ::app::Fuse::Reactive::ThreadWorker__typeof()));

    ::uRegisterType(type);
    return type;
}

void Http___ObjInit(Http* __this, ::app::Fuse::Reactive::ThreadWorker* w)
{
    __this->_w = w;
    ::uPtr< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(w)->GlobalObject())->Item(::uGetConstString("fusejs_http_send"), (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)Http__fusejs_http_send, __this));
}

::uObject* Http__fusejs_http_send(Http* __this, ::uArray* args)
{
    ::uPtr< ::app::Fuse::Reactive::ThreadWorker*>(__this->_w)->Dispatch(0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::FuseJS::FuseJSHttp__Run, ::app::Fuse::Reactive::FuseJS::FuseJSHttp__New_1(NULL, __this->_w, args)));
    return NULL;
}

Http* Http__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* w)
{
    Http* inst = (Http*)::uAllocObject(sizeof(Http), Http__typeof());
    inst->_ObjInit(w);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__string*> InterApp___cachedUris;
bool InterApp___jsInitialized;
::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> InterApp___onReceivedUri;

InterApp__uType* InterApp__typeof()
{
    static ::uStaticStrong<InterApp__uType*> type;
    if (type != NULL) return type;

    type = (InterApp__uType*)::uAllocClassType(sizeof(InterApp__uType), "Fuse.Reactive.FuseJS.InterApp", false, 0, 0, 0);

    type->SetFields(3,
        ::uNewField("_cachedUris", &InterApp___cachedUris, 0, ::app::Uno::Collections::List__string__typeof()),
        ::uNewField("_jsInitialized", &InterApp___jsInitialized, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_onReceivedUri", &InterApp___onReceivedUri, 0, ::app::Fuse::Scripting::NativeEvent__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("CreateModule", InterApp__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction("LaunchUri", InterApp__LaunchUri, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction(".ctor", InterApp__New_1, 0, true, InterApp__typeof()),
        ::uNewFunctionVoid("OnJsInitialized", InterApp__OnJsInitialized, 0, true, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnReceivedUri", InterApp__OnReceivedUri, 0, true, ::uObject__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void InterApp___ObjInit(InterApp* __this)
{
}

void InterApp___TypeInit(::uStatic* __this)
{
    InterApp___cachedUris = ::app::Uno::Collections::List__string__New_1(NULL);
    ::app::Uno::Platform2::Application__add_ReceivedURI(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__string__typeof(), (const void*)InterApp__OnReceivedUri));
}

::uObject* InterApp__CreateModule(::uStatic* __this)
{
    ::uArray* array_124;
    InterApp___onReceivedUri = ::app::Fuse::Scripting::NativeEvent__New_1(NULL, ::uGetConstString("onReceivedUri"), true);
    ::app::Fuse::Scripting::NativeModule* module = ::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_124 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 2), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)InterApp___onReceivedUri, ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(1) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("launchUri"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)InterApp__LaunchUri)), array_124));
    ::uPtr< ::app::Fuse::Scripting::NativeModule*>(module)->add_Evaluated(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)InterApp__OnJsInitialized));
    return (::uObject*)module;
}

::uObject* InterApp__LaunchUri(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    ::app::Fuse::Launcher__LaunchUri(NULL, ::app::Uno::Net::Http::Uri__New_1(NULL, ::uCast< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof())));
    return NULL;
}

InterApp* InterApp__New_1(::uStatic* __this)
{
    InterApp* inst = (InterApp*)::uAllocObject(sizeof(InterApp), InterApp__typeof());
    inst->_ObjInit();
    return inst;
}

void InterApp__OnJsInitialized(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uArray* array_125;

    if (InterApp___cachedUris != NULL)
    {
        for (::app::Uno::Collections::List1_Enumerator__string enum_123 = ::uPtr< ::app::Uno::Collections::List__string*>(InterApp___cachedUris)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uString* uri = enum_123.Current();
            ::uPtr< ::app::Fuse::Scripting::NativeEvent*>(InterApp___onReceivedUri)->RaiseAsync((array_125 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(0) = (::uObject*)uri, array_125));
        }
    }

    InterApp___cachedUris = NULL;
    InterApp___jsInitialized = true;
}

void InterApp__OnReceivedUri(::uStatic* __this, ::uObject* sender, ::uString* uri)
{
    ::uArray* array_126;

    if (InterApp___jsInitialized)
    {
        ::uPtr< ::app::Fuse::Scripting::NativeEvent*>(InterApp___onReceivedUri)->RaiseAsync((array_126 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uObject*>(0) = (::uObject*)uri, array_126));
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__string*>(InterApp___cachedUris)->Add(uri);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___enteringBackground;
::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___enteringForeground;
::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___enteringInteractive;
::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___exitedInteractive;
::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___terminating;

Lifecycle__uType* Lifecycle__typeof()
{
    static ::uStaticStrong<Lifecycle__uType*> type;
    if (type != NULL) return type;

    type = (Lifecycle__uType*)::uAllocClassType(sizeof(Lifecycle__uType), "Fuse.Reactive.FuseJS.Lifecycle", false, 0, 0, 0);

    type->SetFields(5,
        ::uNewField("_enteringBackground", &Lifecycle___enteringBackground, 0, ::app::Fuse::Scripting::NativeEvent__typeof()),
        ::uNewField("_enteringForeground", &Lifecycle___enteringForeground, 0, ::app::Fuse::Scripting::NativeEvent__typeof()),
        ::uNewField("_enteringInteractive", &Lifecycle___enteringInteractive, 0, ::app::Fuse::Scripting::NativeEvent__typeof()),
        ::uNewField("_exitedInteractive", &Lifecycle___exitedInteractive, 0, ::app::Fuse::Scripting::NativeEvent__typeof()),
        ::uNewField("_terminating", &Lifecycle___terminating, 0, ::app::Fuse::Scripting::NativeEvent__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("CreateModule", Lifecycle__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction(".ctor", Lifecycle__New_1, 0, true, Lifecycle__typeof()),
        ::uNewFunctionVoid("OnEnteringBackground", Lifecycle__OnEnteringBackground, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnEnteringForeground", Lifecycle__OnEnteringForeground, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnEnteringInteractive", Lifecycle__OnEnteringInteractive, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnExitedInteractive", Lifecycle__OnExitedInteractive, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnJsInitialized", Lifecycle__OnJsInitialized, 0, true, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnTerminating", Lifecycle__OnTerminating, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()));

    ::uRegisterType(type);
    return type;
}

void Lifecycle___ObjInit(Lifecycle* __this)
{
}

::uObject* Lifecycle__CreateModule(::uStatic* __this)
{
    ::uArray* array_123;
    Lifecycle___enteringForeground = ::app::Fuse::Scripting::NativeEvent__New_1(NULL, ::uGetConstString("onEnteringForeground"), true);
    Lifecycle___enteringInteractive = ::app::Fuse::Scripting::NativeEvent__New_1(NULL, ::uGetConstString("onEnteringInteractive"), true);
    Lifecycle___exitedInteractive = ::app::Fuse::Scripting::NativeEvent__New_1(NULL, ::uGetConstString("onExitedInteractive"), true);
    Lifecycle___enteringBackground = ::app::Fuse::Scripting::NativeEvent__New_1(NULL, ::uGetConstString("onEnteringBackground"), true);
    Lifecycle___terminating = ::app::Fuse::Scripting::NativeEvent__New_1(NULL, ::uGetConstString("onTerminating"), true);
    ::app::Fuse::Scripting::NativeModule* module = ::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_123 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 5), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)Lifecycle___enteringForeground, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(1) = (::app::Fuse::Scripting::NativeMember*)Lifecycle___enteringInteractive, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(2) = (::app::Fuse::Scripting::NativeMember*)Lifecycle___exitedInteractive, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(3) = (::app::Fuse::Scripting::NativeMember*)Lifecycle___enteringBackground, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(4) = (::app::Fuse::Scripting::NativeMember*)Lifecycle___terminating, array_123));
    ::uPtr< ::app::Fuse::Scripting::NativeModule*>(module)->add_Evaluated(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Lifecycle__OnJsInitialized));
    return (::uObject*)module;
}

Lifecycle* Lifecycle__New_1(::uStatic* __this)
{
    Lifecycle* inst = (Lifecycle*)::uAllocObject(sizeof(Lifecycle), Lifecycle__typeof());
    inst->_ObjInit();
    return inst;
}

void Lifecycle__OnEnteringBackground(::uStatic* __this, int newState)
{
    ::app::Fuse::Scripting::NativeEvent* handler = Lifecycle___enteringBackground;

    if (handler != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::NativeEvent*>(Lifecycle___enteringBackground)->RaiseAsync(::uNewArray(::uObject__typeof(), 0));
    }
}

void Lifecycle__OnEnteringForeground(::uStatic* __this, int newState)
{
    ::app::Fuse::Scripting::NativeEvent* handler = Lifecycle___enteringForeground;

    if (handler != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::NativeEvent*>(Lifecycle___enteringForeground)->RaiseAsync(::uNewArray(::uObject__typeof(), 0));
    }
}

void Lifecycle__OnEnteringInteractive(::uStatic* __this, int newState)
{
    ::app::Fuse::Scripting::NativeEvent* handler = Lifecycle___enteringInteractive;

    if (handler != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::NativeEvent*>(Lifecycle___enteringInteractive)->RaiseAsync(::uNewArray(::uObject__typeof(), 0));
    }
}

void Lifecycle__OnExitedInteractive(::uStatic* __this, int newState)
{
    ::app::Fuse::Scripting::NativeEvent* handler = Lifecycle___exitedInteractive;

    if (handler != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::NativeEvent*>(Lifecycle___exitedInteractive)->RaiseAsync(::uNewArray(::uObject__typeof(), 0));
    }
}

void Lifecycle__OnJsInitialized(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Uno::Platform2::Application__add_EnteringForeground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)Lifecycle__OnEnteringForeground));
    ::app::Uno::Platform2::Application__add_EnteringInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)Lifecycle__OnEnteringInteractive));
    ::app::Uno::Platform2::Application__add_ExitedInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)Lifecycle__OnExitedInteractive));
    ::app::Uno::Platform2::Application__add_EnteringBackground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)Lifecycle__OnEnteringBackground));
    ::app::Uno::Platform2::Application__add_Terminating(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)Lifecycle__OnTerminating));
}

void Lifecycle__OnTerminating(::uStatic* __this, int newState)
{
    ::app::Fuse::Scripting::NativeEvent* handler = Lifecycle___terminating;

    if (handler != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::NativeEvent*>(Lifecycle___terminating)->RaiseAsync(::uNewArray(::uObject__typeof(), 0));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Maps__uType* Maps__typeof()
{
    static ::uStaticStrong<Maps__uType*> type;
    if (type != NULL) return type;

    type = (Maps__uType*)::uAllocClassType(sizeof(Maps__uType), "Fuse.Reactive.FuseJS.Maps", false, 0, 0, 0);

    type->SetFunctions(5,
        ::uNewFunction("CreateModule", Maps__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction(".ctor", Maps__New_1, 0, true, Maps__typeof()),
        ::uNewFunction("OpenAt", Maps__OpenAt, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("SearchNear", Maps__SearchNear, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("SearchNearby", Maps__SearchNearby, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

void Maps___ObjInit(Maps* __this)
{
}

::uObject* Maps__CreateModule(::uStatic* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_123 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 3), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("openAt"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Maps__OpenAt)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(1) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("searchNearby"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Maps__SearchNearby)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(2) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("searchNear"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Maps__SearchNear)), array_123));
}

Maps* Maps__New_1(::uStatic* __this)
{
    Maps* inst = (Maps*)::uAllocObject(sizeof(Maps), Maps__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* Maps__OpenAt(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    double latitude = ::uUnbox< double>(::app::Uno::Double__typeof(), ::uPtr< ::uArray*>(args)->Item< ::uObject*>(0));
    double longitude = ::uUnbox< double>(::app::Uno::Double__typeof(), args->Item< ::uObject*>(1));
    ::app::Fuse::Launcher__LaunchMaps(NULL, latitude, longitude);
    return NULL;
}

::uObject* Maps__SearchNear(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    ::uString* query = ::uCast< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
    double latitude = ::uUnbox< double>(::app::Uno::Double__typeof(), args->Item< ::uObject*>(1));
    double longitude = ::uUnbox< double>(::app::Uno::Double__typeof(), args->Item< ::uObject*>(2));
    ::app::Fuse::Launcher__LaunchMaps_2(NULL, query);
    return NULL;
}

::uObject* Maps__SearchNearby(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    ::uString* query = ::uCast< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
    ::app::Fuse::Launcher__LaunchMaps_2(NULL, query);
    return NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Phone__uType* Phone__typeof()
{
    static ::uStaticStrong<Phone__uType*> type;
    if (type != NULL) return type;

    type = (Phone__uType*)::uAllocClassType(sizeof(Phone__uType), "Fuse.Reactive.FuseJS.Phone", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction("Call", Phone__Call, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("CreateModule", Phone__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction(".ctor", Phone__New_1, 0, true, Phone__typeof()));

    ::uRegisterType(type);
    return type;
}

void Phone___ObjInit(Phone* __this)
{
}

::uObject* Phone__Call(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    ::uString* callString = ::uCast< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
    ::app::Fuse::Launcher__LaunchCall(NULL, callString);
    return NULL;
}

::uObject* Phone__CreateModule(::uStatic* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_123 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("call"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Phone__Call)), array_123));
}

Phone* Phone__New_1(::uStatic* __this)
{
    Phone* inst = (Phone*)::uAllocObject(sizeof(Phone), Phone__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Storage__uType* Storage__typeof()
{
    static ::uStaticStrong<Storage__uType*> type;
    if (type != NULL) return type;

    type = (Storage__uType*)::uAllocClassType(sizeof(Storage__uType), "Fuse.Reactive.FuseJS.Storage");

    type->SetFunctions(6,
        ::uNewFunction("CreateModule", Storage__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction("Delete", Storage__Delete, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Read", Storage__Read, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("ReadAsync", Storage__ReadAsync, 0, true, ::app::Uno::Threading::Future__string__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Write", Storage__Write, 0, true, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("WriteAsync", Storage__WriteAsync, 0, true, ::app::Uno::Threading::Future__bool__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

::uObject* Storage__CreateModule(::uStatic* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_123 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 5), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("writeSync"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Storage__Write)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(1) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("readSync"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Storage__Read)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(2) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("deleteSync"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Storage__Delete)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(3) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativePromise__bool__bool__New_1(NULL, ::uGetConstString("write"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::FutureFactory__bool__typeof(), (const void*)Storage__WriteAsync), NULL), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(4) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativePromise__string__string__New_1(NULL, ::uGetConstString("read"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::FutureFactory__string__typeof(), (const void*)Storage__ReadAsync), NULL), array_123));
}

::uObject* Storage__Delete(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::uString* filename = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
        return ::uBox(::app::Uno::Bool__typeof(), ::app::Fuse::Storage::ApplicationDir__Delete(NULL, filename));
    }

    return ::uBox(::app::Uno::Bool__typeof(), false);
}

::uObject* Storage__Read(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args)
{
    try
    {
        if (::uPtr< ::uArray*>(args)->Length() > 0)
        {
            ::uString* filename = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
            return (::uObject*)::app::Fuse::Storage::ApplicationDir__Read(NULL, (filename != NULL) ? filename : ::uGetConstString(""));
        }

        return (::uObject*)::app::Fuse::Storage::ApplicationDir__Read(NULL, ::uGetConstString(""));
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            return (::uObject*)::uGetConstString("");
        }
        else
        {
            throw __t;
        }
    }
}

::app::Uno::Threading::Future__string* Storage__ReadAsync(::uStatic* __this, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::uString* filename = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
        return ::app::Fuse::Storage::ApplicationDir__ReadAsync(NULL, (filename != NULL) ? filename : ::uGetConstString(""));
    }

    return ::app::Fuse::Storage::ApplicationDir__ReadAsync(NULL, ::uGetConstString(""));
}

::uObject* Storage__Write(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::uString* filename = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
        ::uString* value = ::uAs< ::uString*>(args->Item< ::uObject*>(1), ::app::Uno::String__typeof());
        return ::uBox(::app::Uno::Bool__typeof(), ::app::Fuse::Storage::ApplicationDir__Write(NULL, (filename != NULL) ? filename : ::uGetConstString(""), (value != NULL) ? value : ::uGetConstString("")));
    }

    return ::uBox(::app::Uno::Bool__typeof(), ::app::Fuse::Storage::ApplicationDir__Write(NULL, ::uGetConstString(""), ::uGetConstString("")));
}

::app::Uno::Threading::Future__bool* Storage__WriteAsync(::uStatic* __this, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() > 0)
    {
        ::uString* filename = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());
        ::uString* value = ::uAs< ::uString*>(args->Item< ::uObject*>(1), ::app::Uno::String__typeof());
        return ::app::Fuse::Storage::ApplicationDir__WriteAsync(NULL, (filename != NULL) ? filename : ::uGetConstString(""), (value != NULL) ? value : ::uGetConstString(""));
    }

    return ::app::Fuse::Storage::ApplicationDir__WriteAsync(NULL, ::uGetConstString(""), ::uGetConstString(""));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Timer__uType* Timer__typeof()
{
    static ::uStaticStrong<Timer__uType*> type;
    if (type != NULL) return type;

    type = (Timer__uType*)::uAllocClassType(sizeof(Timer__uType), "Fuse.Reactive.FuseJS.Timer", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Scripting::NativeModule__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IModule__typeof(), offsetof(Timer__uType, __interface_0));

    type->SetStrongRefs(
        "_timers", offsetof(Timer, _timers));

    type->SetFields(1,
        ::uNewField("_timers", NULL, offsetof(Timer, _timers), ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("AddTimer", Timer__AddTimer, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Action__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("Create", Timer__Create, 0, false, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Delete", Timer__Delete, 0, false, ::uObject__typeof(), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction(".ctor", Timer__New_2, 0, true, Timer__typeof()),
        ::uNewFunctionVoid("Process", Timer__Process, 0, false),
        ::uNewFunction("RemoveTimer", Timer__RemoveTimer, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Timer___ObjInit_1(Timer* __this)
{
    __this->_timers = ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time__New_1(NULL);
    ::app::Fuse::Scripting::NativeModule___ObjInit(__this, ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 0));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("create"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Timer__Create, __this)));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("delete"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Timer__Delete, __this)));
}

int Timer__AddTimer(Timer* __this, double ms, ::uDelegate* callback, bool repeat)
{
    ::app::Fuse::Reactive::FuseJS::Timer_Time* t = ::app::Fuse::Reactive::FuseJS::Timer_Time__New_1(NULL, __this, ms, callback, repeat);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time*>(__this->_timers)->Add(t);
    return ::uPtr< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(t)->ID;
}

::uObject* Timer__Create(Timer* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() < 3)
    {
        U_THROW(::app::Fuse::Scripting::Error__New_3(NULL, ::uGetConstString("create(): requires at least three arguments")));
    }

    if (!::uIs(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Scripting::Function__typeof()))
    {
        U_THROW(::app::Fuse::Scripting::Error__New_3(NULL, ::uGetConstString("create(): first argument must be a function")));
    }

    ::app::Fuse::Scripting::Function* func = ::uAs< ::app::Fuse::Scripting::Function*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Scripting::Function__typeof());
    double ms = ::app::Fuse::Scripting::Value__ToNumber(NULL, args->Item< ::uObject*>(1));
    bool repeat = ::uUnbox< bool>(::app::Uno::Bool__typeof(), args->Item< ::uObject*>(2));
    ::uArray* innerArgs = ::uNewArray(::uObject__typeof(), args->Length() - 3);

    for (int i = 0; i < innerArgs->Length(); i++)
    {
        innerArgs->ItemStrong< ::uObject*>(i) = args->Item< ::uObject*>(3 + i);
    }

    return ::uBox< int>(::app::Uno::Int__typeof(), __this->AddTimer(ms, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Reactive::FuseJS::Timer_Closure__Callback, ::app::Fuse::Reactive::FuseJS::Timer_Closure__New_1(NULL, func, innerArgs)), repeat));
}

::uObject* Timer__Delete(Timer* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() < 1)
    {
        U_THROW(::app::Fuse::Scripting::Error__New_3(NULL, ::uGetConstString("delete(): requires one argument")));
    }

    __this->RemoveTimer(::app::Fuse::Reactive::Marshal__ToInt(NULL, ::uPtr< ::uArray*>(args)->Item< ::uObject*>(0)));
    return NULL;
}

Timer* Timer__New_2(::uStatic* __this)
{
    Timer* inst = (Timer*)::uAllocObject(sizeof(Timer), Timer__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Timer__Process(Timer* __this)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time*>(__this->_timers)->Count(); i++)
    {
        ::uPtr< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time*>(__this->_timers)->Item(i))->Visit();
    }
}

bool Timer__RemoveTimer(Timer* __this, int id)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time*>(__this->_timers)->Count(); i++)
    {
        if (::uPtr< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time*>(__this->_timers)->Item(i))->ID == id)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time*>(__this->_timers)->RemoveAt(i);
            return true;
        }
    }

    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Timer_Closure__uType* Timer_Closure__typeof()
{
    static ::uStaticStrong<Timer_Closure__uType*> type;
    if (type != NULL) return type;

    type = (Timer_Closure__uType*)::uAllocClassType(sizeof(Timer_Closure__uType), "Fuse.Reactive.FuseJS.Timer.Closure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_args", offsetof(Timer_Closure, _args),
        "_func", offsetof(Timer_Closure, _func));

    return type;
}

void Timer_Closure___ObjInit(Timer_Closure* __this, ::app::Fuse::Scripting::Function* func, ::uArray* args)
{
    __this->_func = func;
    __this->_args = args;
}

void Timer_Closure__Callback(Timer_Closure* __this)
{
    ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_func)->Call(__this->_args);
}

Timer_Closure* Timer_Closure__New_1(::uStatic* __this, ::app::Fuse::Scripting::Function* func, ::uArray* args)
{
    Timer_Closure* inst = (Timer_Closure*)::uAllocObject(sizeof(Timer_Closure), Timer_Closure__typeof());
    inst->_ObjInit(func, args);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int Timer_Time___id;

Timer_Time__uType* Timer_Time__typeof()
{
    static ::uStaticStrong<Timer_Time__uType*> type;
    if (type != NULL) return type;

    type = (Timer_Time__uType*)::uAllocClassType(sizeof(Timer_Time__uType), "Fuse.Reactive.FuseJS.Timer.Time", false, 0, 2, 0);

    type->SetStrongRefs(
        "_callback", offsetof(Timer_Time, _callback),
        "_timoutManager", offsetof(Timer_Time, _timoutManager));

    return type;
}

void Timer_Time___ObjInit(Timer_Time* __this, ::app::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, ::uDelegate* callback, bool repeat)
{
    __this->ID = Timer_Time___id++;
    __this->_timoutManager = timoutManager;
    __this->_timestamp = __this->GetMilliseconds();
    __this->_ms = ms;
    __this->_callback = callback;
    __this->_repeat = repeat;
}

double Timer_Time__GetMilliseconds(Timer_Time* __this)
{
    return (double)(::app::Uno::Diagnostics::Clock__GetTicks(NULL) / 10000ll);
}

Timer_Time* Timer_Time__New_1(::uStatic* __this, ::app::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, ::uDelegate* callback, bool repeat)
{
    Timer_Time* inst = (Timer_Time*)::uAllocObject(sizeof(Timer_Time), Timer_Time__typeof());
    inst->_ObjInit(timoutManager, ms, callback, repeat);
    return inst;
}

void Timer_Time__Visit(Timer_Time* __this)
{
    double m = __this->GetMilliseconds();
    double elapsed = m - __this->_timestamp;

    if (__this->_ms < elapsed)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_callback, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_callback)->InvokeVoid();
        }

        if (__this->_repeat)
        {
            __this->_timestamp = m;
        }
        else
        {
            ::uPtr< ::app::Fuse::Reactive::FuseJS::Timer*>(__this->_timoutManager)->RemoveTimer(__this->ID);
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vibration__uType* Vibration__typeof()
{
    static ::uStaticStrong<Vibration__uType*> type;
    if (type != NULL) return type;

    type = (Vibration__uType*)::uAllocClassType(sizeof(Vibration__uType), "Fuse.Reactive.FuseJS.Vibration");

    type->SetFunctions(2,
        ::uNewFunction("CreateModule", Vibration__CreateModule, 0, true, ::app::Fuse::Scripting::IModule__typeof()),
        ::uNewFunction("Vibrate", Vibration__Vibrate, 0, true, ::uGetArrayType(::uObject__typeof()), ::app::Fuse::Scripting::Context__typeof(), ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

::uObject* Vibration__CreateModule(::uStatic* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Fuse::Scripting::NativeModule__New_1(NULL, (array_123 = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(0) = (::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("vibrate"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)Vibration__Vibrate)), array_123));
}

::uArray* Vibration__Vibrate(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args)
{
    double ms = (::uPtr< ::uArray*>(args)->Length() > 0) ? ::app::Fuse::Reactive::Marshal__ToDouble(NULL, ::uPtr< ::uArray*>(args)->Item< ::uObject*>(0)) : 200.0;
    ::app::Fuse::Vibration::Vibration__Vibrate(NULL, ms);
    return NULL;
}

}}}}
