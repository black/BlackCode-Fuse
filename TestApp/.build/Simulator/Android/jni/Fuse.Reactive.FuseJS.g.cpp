// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Camera.Camera.h>
#include <Fuse.Camera.PictureResult.h>
#include <Fuse.Camera.TakePictureOptions.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GeoLocation.GeoCoordinates.h>
#include <Fuse.GeoLocation.GeoLocationAuthorizationType.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.LocationTracker.h>
#include <Fuse.Launcher.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.FuseJS.Base64.h>
#include <Fuse.Reactive.FuseJS.Camera.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Environment.h>
#include <Fuse.Reactive.FuseJS.FileReaderImpl.h>
#include <Fuse.Reactive.FuseJS.FunctionClosure.h>
#include <Fuse.Reactive.FuseJS.GeoLocation.h>
#include <Fuse.Reactive.FuseJS.Globals.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Lifecycle.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.FuseJS.RaiseEvent.h>
#include <Fuse.Reactive.FuseJS.Storage.h>
#include <Fuse.Reactive.FuseJS.Timer.Closure.h>
#include <Fuse.Reactive.FuseJS.Timer.h>
#include <Fuse.Reactive.FuseJS.Timer.Time.h>
#include <Fuse.Reactive.FuseJS.UserEvents.h>
#include <Fuse.Reactive.FuseJS.Vibration.h>
#include <Fuse.Reactive.Marshal.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IDispatcher.h>
#include <Fuse.Scripting.IModule.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.Storage.ApplicationDir.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.Vibration.Vibration.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[83];
static uType* TYPES[74];

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(629)
// ------------------------------------------------------------------

// internal sealed class Base64 :629
// {
::g::Fuse::Scripting::NativeModule_type* Base64_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Base64);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Base64", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Base64__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[0] = uString::Const("encodeAscii");
    ::STRINGS[1] = uString::Const("decodeAscii");
    ::STRINGS[2] = uString::Const("encodeUtf8");
    ::STRINGS[3] = uString::Const("decodeUtf8");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3);
    return type;
}

// public Base64() :631
void Base64__ctor_1_fn(Base64* __this)
{
    __this->ctor_1();
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) :650
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeAscii(context, args);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) :672
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeUtf8(context, args);
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) :639
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeAscii(context, args);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) :661
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeUtf8(context, args);
}

// public Base64 New() :631
void Base64__New2_fn(Base64** __retval)
{
    *__retval = Base64::New2();
}

// public Base64() [instance] :631
void Base64::ctor_1()
{
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"encodeAscii"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"decodeAscii"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"encodeUtf8"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"decodeUtf8"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeUtf8_fn, this)));
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :650
uObject* Base64::DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Ascii::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :672
uObject* Base64::DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Utf8::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :639
uObject* Base64::EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Ascii::GetBytes(str));
    }

    return NULL;
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :661
uObject* Base64::EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Utf8::GetBytes(str));
    }

    return NULL;
}

// public Base64 New() [static] :631
Base64* Base64::New2()
{
    Base64* obj1 = (Base64*)uNew(Base64_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(52)
// -----------------------------------------------------------------

// internal static class Camera :52
// {
uClassType* Camera_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Camera", options);
    ::STRINGS[4] = uString::Const("File");
    ::STRINGS[5] = uString::Const("path");
    ::STRINGS[6] = uString::Const("name");
    ::STRINGS[7] = uString::Const("takePicture");
    ::STRINGS[8] = uString::Const("targetWidth");
    ::STRINGS[9] = uString::Const("targetHeight");
    ::STRINGS[10] = uString::Const("correctOrientation");
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[9] = ::g::Fuse::Camera::PictureResult_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[12] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof());
    ::TYPES[13] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[14] = ::g::Uno::String_typeof()->Array();
    ::TYPES[15] = ::g::Fuse::Camera::TakePictureOptions_typeof();
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.Camera.PictureResult result) :90
void Camera__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = Camera::Converter(context, result);
}

// public static Fuse.Scripting.IModule CreateModule() :54
void Camera__CreateModule_fn(uObject** __retval)
{
    *__retval = Camera::CreateModule();
}

// private static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(object[] args) :60
void Camera__TakePicture_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture(args);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.Camera.PictureResult result) [static] :90
::g::Fuse::Scripting::Object* Camera::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result)
{
    ::g::Fuse::Scripting::Function* func = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(context)->GlobalObject())->Item(::STRINGS[4/*"File"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);
    ::g::Fuse::Scripting::Object* file = uPtr(func)->Construct(uArray::New(::TYPES[3/*object[]*/], 0));
    uPtr(file)->Item(::STRINGS[5/*"path"*/], uPtr(result)->Path());
    file->Item(::STRINGS[6/*"name"*/], ::g::Uno::IO::Path::GetFileName(result->Path()));
    return file;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :54
uObject* Camera::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[11/*Fuse.Scripting.NativePromise<Fuse.Camera.PictureResult, Fuse.Scripting.Object>*/], ::STRINGS[7/*"takePicture"*/], uDelegate::New(::TYPES[12/*Fuse.Scripting.FutureFactory<Fuse.Camera.PictureResult>*/], (void*)Camera__TakePicture_fn), uDelegate::New(::TYPES[13/*Fuse.Scripting.ResultConverter<Fuse.Camera.PictureResult, Fuse.Scripting.Object>*/], (void*)Camera__Converter_fn))));
}

// private static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(object[] args) [static] :60
::g::Uno::Threading::Future1* Camera::TakePicture(uArray* args)
{
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Camera::TakePictureOptions* options = ::g::Fuse::Camera::TakePictureOptions::New1();

    if (uPtr(args)->Length() > 0)
    {
        ::g::Fuse::Scripting::Object* arg = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[7/*Fuse.Scripting.Object*/]);

        if (arg != NULL)

            for (array1 = uPtr(arg)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);

                if (::g::Uno::String::op_Equality(k, ::STRINGS[8/*"targetWidth"*/]))
                    uPtr(options)->TargetWidth(::g::Fuse::Reactive::Marshal::ToInt(uPtr(arg)->Item(k)));

                if (::g::Uno::String::op_Equality(k, ::STRINGS[9/*"targetHeight"*/]))
                    uPtr(options)->TargetHeight(::g::Fuse::Reactive::Marshal::ToInt(uPtr(arg)->Item(k)));

                if (::g::Uno::String::op_Equality(k, ::STRINGS[10/*"correctOrie...*/]))
                    uPtr(options)->CorrectOrientation(::g::Fuse::Reactive::Marshal::ToBool(uPtr(arg)->Item(k)));
            }
    }

    return ::g::Fuse::Camera::Camera::TakePicture1(options);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(438)
// ------------------------------------------------------------------

// private sealed class Timer.Closure :438
// {
uType* Timer__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Timer__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Timer.Closure", options);
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::FuseJS::Timer__Closure, _args), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Timer__Closure, _func), 0);
    return type;
}

// public Closure(Fuse.Scripting.Function func, object[] args) :443
void Timer__Closure__ctor__fn(Timer__Closure* __this, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    __this->ctor_(func, args);
}

// public void Callback() :449
void Timer__Closure__Callback_fn(Timer__Closure* __this)
{
    __this->Callback();
}

// public Closure New(Fuse.Scripting.Function func, object[] args) :443
void Timer__Closure__New1_fn(::g::Fuse::Scripting::Function* func, uArray* args, Timer__Closure** __retval)
{
    *__retval = Timer__Closure::New1(func, args);
}

// public Closure(Fuse.Scripting.Function func, object[] args) [instance] :443
void Timer__Closure::ctor_(::g::Fuse::Scripting::Function* func, uArray* args)
{
    _func = func;
    _args = args;
}

// public void Callback() [instance] :449
void Timer__Closure::Callback()
{
    uPtr(_func)->Call(_args);
}

// public Closure New(Fuse.Scripting.Function func, object[] args) [static] :443
Timer__Closure* Timer__Closure::New1(::g::Fuse::Scripting::Function* func, uArray* args)
{
    Timer__Closure* obj1 = (Timer__Closure*)uNew(Timer__Closure_typeof());
    obj1->ctor_(func, args);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(265)
// ------------------------------------------------------------------

// public sealed class Email :265
// {
uType* Email_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Email);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Email", options);
    type->fp_ctor_ = (void*)Email__New1_fn;
    ::STRINGS[11] = uString::Const("compose");
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Compose", NULL, (void*)Email__Compose_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateModule", NULL, (void*)Email__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Email__New1_fn, 0, true, Email_typeof(), 0));
    return type;
}

// public generated Email() :265
void Email__ctor__fn(Email* __this)
{
    __this->ctor_();
}

// public static object Compose(Fuse.Scripting.Context context, object[] args) :272
void Email__Compose_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Email::Compose(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() :267
void Email__CreateModule_fn(uObject** __retval)
{
    *__retval = Email::CreateModule();
}

// public generated Email New() :265
void Email__New1_fn(Email** __retval)
{
    *__retval = Email::New1();
}

// public generated Email() [instance] :265
void Email::ctor_()
{
}

// public static object Compose(Fuse.Scripting.Context context, object[] args) [static] :272
uObject* Email::Compose(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* to = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uString* cc = uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
    uString* bcc = uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[4/*string*/]);
    uString* subject = uCast<uString*>(args->Strong<uObject*>(3), ::TYPES[4/*string*/]);
    uString* message = uCast<uString*>(args->Strong<uObject*>(4), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchEmail(to, cc, bcc, subject, message);
    return NULL;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :267
uObject* Email::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[11/*"compose"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Email__Compose_fn))));
}

// public generated Email New() [static] :265
Email* Email::New1()
{
    Email* obj1 = (Email*)uNew(Email_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(294)
// ------------------------------------------------------------------

// internal sealed class Environment :294
// {
::g::Fuse::Scripting::NativeModule_type* Environment_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Environment", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Environment__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[12] = uString::Const("android");
    ::STRINGS[13] = uString::Const("iOS");
    ::STRINGS[14] = uString::Const("mobile");
    ::STRINGS[15] = uString::Const("desktop");
    ::STRINGS[16] = uString::Const("preview");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3);
    return type;
}

// public Environment() :296
void Environment__ctor_1_fn(Environment* __this)
{
    __this->ctor_1();
}

// public Environment New() :296
void Environment__New2_fn(Environment** __retval)
{
    *__retval = Environment::New2();
}

// public Environment() [instance] :296
void Environment::ctor_1()
{
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ::g::Fuse::Scripting::NativeProperty* ret5;
    ::g::Fuse::Scripting::NativeProperty* ret6;
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[16/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[12/*"android"*/], uCRef(true), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[16/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[13/*"iOS"*/], uCRef(false), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[16/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[14/*"mobile"*/], uCRef(true), &ret4), ret4));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[16/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[15/*"desktop"*/], uCRef(false), &ret5), ret5));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[16/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[16/*"preview"*/], uCRef(true), &ret6), ret6));
}

// public Environment New() [static] :296
Environment* Environment::New2()
{
    Environment* obj1 = (Environment*)uNew(Environment_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(778)
// ------------------------------------------------------------------

// internal static class FileReaderImpl :778
// {
uClassType* FileReaderImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FileReaderImpl", options);
    ::STRINGS[17] = uString::Const("readAsDataURL");
    ::STRINGS[18] = uString::Const("readAsText");
    ::STRINGS[19] = uString::Const("PNG");
    ::STRINGS[20] = uString::Const("png");
    ::STRINGS[21] = uString::Const("jpeg");
    ::STRINGS[22] = uString::Const("data:image/");
    ::STRINGS[23] = uString::Const(";base64,");
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[18] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::String_typeof();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :780
void FileReaderImpl__CreateModule_fn(uObject** __retval)
{
    *__retval = FileReaderImpl::CreateModule();
}

// private static string readAsDataURL(object[] args) :787
void FileReaderImpl__readAsDataURL_fn(uArray* args, uString** __retval)
{
    *__retval = FileReaderImpl::readAsDataURL(args);
}

// private static string readAsText(object[] args) :796
void FileReaderImpl__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = FileReaderImpl::readAsText(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :780
uObject* FileReaderImpl::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[17/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[17/*"readAsDataURL"*/], uDelegate::New(::TYPES[18/*Fuse.Scripting.ResultFactory<string>*/], (void*)FileReaderImpl__readAsDataURL_fn), NULL), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[17/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[18/*"readAsText"*/], uDelegate::New(::TYPES[18/*Fuse.Scripting.ResultFactory<string>*/], (void*)FileReaderImpl__readAsText_fn), NULL)));
}

// private static string readAsDataURL(object[] args) [static] :787
uString* FileReaderImpl::readAsDataURL(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uArray* file = ::g::Uno::IO::File::ReadAllBytes(path);
    uString* type = ::g::Uno::String::EndsWith(uPtr(::g::Uno::String::ToUpper(uPtr(path))), ::STRINGS[19/*"PNG"*/]) ? ::STRINGS[20/*"png"*/] : ::STRINGS[21/*"jpeg"*/];
    uString* base64 = ::g::Uno::Text::Base64::GetString(file);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[22/*"data:image/"*/], type), ::STRINGS[23/*";base64,"*/]), base64);
}

// private static string readAsText(object[] args) [static] :796
uString* FileReaderImpl::readAsText(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    return ::g::Uno::IO::File::ReadAllText(path);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(1035)
// -------------------------------------------------------------------

// internal sealed class FunctionClosure :1035
// {
uType* FunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.FunctionClosure", options);
    ::TYPES[19] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[20] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::FunctionClosure, _context), 0);
    return type;
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :1040
void FunctionClosure__ctor__fn(FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.Callback get_Callback() :1053
void FunctionClosure__get_Callback_fn(FunctionClosure* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// private object function(object[] args) :1046
void FunctionClosure__function_fn(FunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->function(args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :1040
void FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, FunctionClosure** __retval)
{
    *__retval = FunctionClosure::New1(context, callback);
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [instance] :1040
void FunctionClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.Callback get_Callback() [instance] :1053
uDelegate* FunctionClosure::Callback()
{
    return uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)FunctionClosure__function_fn, this);
}

// private object function(object[] args) [instance] :1046
uObject* FunctionClosure::function(uArray* args)
{
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [static] :1040
FunctionClosure* FunctionClosure::New1(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    FunctionClosure* obj1 = (FunctionClosure*)uNew(FunctionClosure_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(893)
// ------------------------------------------------------------------

// private sealed class Http.FuseJSHttpClient :893
// {
uType* Http__FuseJSHttpClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Http__FuseJSHttpClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", options);
    ::STRINGS[24] = uString::Const("createRequest");
    ::TYPES[7] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[21] = ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest_typeof();
    ::TYPES[22] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Context_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _client), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _Obj), 0);
    return type;
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) :900
void Http__FuseJSHttpClient__ctor__fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateRequest(object[] args) :909
void Http__FuseJSHttpClient__CreateRequest_fn(Http__FuseJSHttpClient* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateRequest(args);
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) :900
void Http__FuseJSHttpClient__New1_fn(::g::Fuse::Scripting::Context* context, Http__FuseJSHttpClient** __retval)
{
    *__retval = Http__FuseJSHttpClient::New1(context);
}

// public generated Fuse.Scripting.Object get_Obj() :895
void Http__FuseJSHttpClient__get_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :895
void Http__FuseJSHttpClient__set_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) [instance] :900
void Http__FuseJSHttpClient::ctor_(::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    Obj(uPtr(context)->NewObject());
    uPtr(Obj())->Item(::STRINGS[24/*"createRequest"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpClient__CreateRequest_fn, this));
}

// private object CreateRequest(object[] args) [instance] :909
uObject* Http__FuseJSHttpClient::CreateRequest(uArray* args)
{
    uString* method = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    uString* url = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
    return ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest::New1(_context, uPtr(_client)->CreateRequest1(method, url, uPtr(_context)->Dispatcher()))->Obj();
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :895
::g::Fuse::Scripting::Object* Http__FuseJSHttpClient::Obj()
{
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :895
void Http__FuseJSHttpClient::Obj(::g::Fuse::Scripting::Object* value)
{
    _Obj = value;
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) [static] :900
Http__FuseJSHttpClient* Http__FuseJSHttpClient::New1(::g::Fuse::Scripting::Context* context)
{
    Http__FuseJSHttpClient* obj1 = (Http__FuseJSHttpClient*)uNew(Http__FuseJSHttpClient_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(918)
// ------------------------------------------------------------------

// private sealed class Http.FuseJSHttpRequest :918
// {
uType* Http__FuseJSHttpRequest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Http__FuseJSHttpRequest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", options);
    ::STRINGS[25] = uString::Const("enableCache");
    ::STRINGS[26] = uString::Const("setTimeout");
    ::STRINGS[27] = uString::Const("sendAsync");
    ::STRINGS[28] = uString::Const("abort");
    ::STRINGS[29] = uString::Const("setHeader");
    ::STRINGS[30] = uString::Const("getResponseHeader");
    ::STRINGS[31] = uString::Const("getResponseHeaders");
    ::STRINGS[32] = uString::Const("getState");
    ::STRINGS[33] = uString::Const("getResponseStatus");
    ::STRINGS[34] = uString::Const("getResponseReasonPhrase");
    ::STRINGS[35] = uString::Const("getResponseContentString");
    ::STRINGS[36] = uString::Const("onaborted");
    ::STRINGS[37] = uString::Const("ondone");
    ::STRINGS[38] = uString::Const("onerror");
    ::STRINGS[39] = uString::Const("onprogress");
    ::STRINGS[40] = uString::Const("onstatechanged");
    ::STRINGS[41] = uString::Const("ontimeout");
    ::TYPES[23] = ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof();
    ::TYPES[24] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof());
    ::TYPES[25] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof());
    ::TYPES[26] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[7] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[28] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[29] = ::g::Uno::Action_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[31] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[32] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[33] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[34] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[35] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[36] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1, ::g::Uno::Int_typeof());
    ::TYPES[37] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[38] = ::g::Uno::Int_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _req), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _Obj), 0);
    return type;
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :924
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    __this->ctor_(context, req);
}

// private object EnableCache(object[] args) :1011
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->EnableCache(args);
}

// private object GetResponseReasonPhrase(object[] args) :1028
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseReasonPhrase(args);
}

// private object GetState(object[] args) :1023
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetState(args);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :924
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval)
{
    *__retval = Http__FuseJSHttpRequest::New1(context, req);
}

// public generated Fuse.Scripting.Object get_Obj() :920
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :920
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// private void OnAborted(Uno.Net.Http.HttpMessageHandlerRequest res) :952
void Http__FuseJSHttpRequest__OnAborted_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnAborted(res);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) :980
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnDone(res);
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) :959
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    __this->OnError(res, error);
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) :987
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int* current, int* total, bool* hastotal)
{
    __this->OnProgress(res, *current, *total, *hastotal);
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) :973
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnStateChanged(res);
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) :966
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnTimeout(res);
}

// private object SendAsync(object[] args) :994
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SendAsync(args);
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [instance] :924
void Http__FuseJSHttpRequest::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    _req = req;
    Obj(uPtr(context)->NewObject());
    uPtr(_req)->add_Aborted(uDelegate::New(::TYPES[24/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAborted_fn, this));
    uPtr(_req)->add_Error(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->add_Timeout(uDelegate::New(::TYPES[24/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->add_Done(uDelegate::New(::TYPES[24/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->add_StateChanged(uDelegate::New(::TYPES[24/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->add_Progress(uDelegate::New(::TYPES[26/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(Obj())->Item(::STRINGS[25/*"enableCache"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__EnableCache_fn, this));
    uPtr(Obj())->Item(::STRINGS[26/*"setTimeout"*/], ::g::Fuse::Scripting::JSCallback::FromAction1(::TYPES[27/*Fuse.Scripting.JSCallback.FromAction<int>*/], uDelegate::New(::TYPES[28/*Uno.Action<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetTimeout_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[27/*"sendAsync"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SendAsync_fn, this));
    uPtr(Obj())->Item(::STRINGS[28/*"abort"*/], ::g::Fuse::Scripting::JSCallback::FromAction(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__Abort_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[29/*"setHeader"*/], ::g::Fuse::Scripting::JSCallback::FromAction2(::TYPES[30/*Fuse.Scripting.JSCallback.FromAction<string, string>*/], uDelegate::New(::TYPES[31/*Uno.Action<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__SetHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[30/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc1(::TYPES[32/*Fuse.Scripting.JSCallback.FromFunc<string, string>*/], uDelegate::New(::TYPES[33/*Uno.Func<string, string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeader_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[31/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[34/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[35/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseHeaders_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[32/*"getState"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetState_fn, this));
    uPtr(Obj())->Item(::STRINGS[33/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[36/*Fuse.Scripting.JSCallback.FromFunc<int>*/], uDelegate::New(::TYPES[37/*Uno.Func<int>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseStatus_fn, uPtr(_req))));
    uPtr(Obj())->Item(::STRINGS[34/*"getResponse...*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn, this));
    uPtr(Obj())->Item(::STRINGS[35/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[34/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[35/*Uno.Func<string>*/], (void*)::g::Uno::Net::Http::HttpMessageHandlerRequest__GetResponseContentString_fn, uPtr(_req))));
}

// private object EnableCache(object[] args) [instance] :1011
uObject* Http__FuseJSHttpRequest::EnableCache(uArray* args)
{
    if (uPtr(args)->Length() > 0)
        ;

    return NULL;
}

// private object GetResponseReasonPhrase(object[] args) [instance] :1028
uObject* Http__FuseJSHttpRequest::GetResponseReasonPhrase(uArray* args)
{
    return ::g::Uno::Net::Http::HttpStatusReasonPhrase::GetFromStatusCode(uPtr(_req)->GetResponseStatus());
}

// private object GetState(object[] args) [instance] :1023
uObject* Http__FuseJSHttpRequest::GetState(uArray* args)
{
    return uBox<int>(::TYPES[38/*int*/], uPtr(_req)->State());
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :920
::g::Fuse::Scripting::Object* Http__FuseJSHttpRequest::Obj()
{
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :920
void Http__FuseJSHttpRequest::Obj(::g::Fuse::Scripting::Object* value)
{
    _Obj = value;
}

// private void OnAborted(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :952
void Http__FuseJSHttpRequest::OnAborted(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[36/*"onaborted"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :980
void Http__FuseJSHttpRequest::OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[37/*"ondone"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) [instance] :959
void Http__FuseJSHttpRequest::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[38/*"onerror"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, error));
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) [instance] :987
void Http__FuseJSHttpRequest::OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int current, int total, bool hastotal)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[39/*"onprogress"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, uBox<int>(::TYPES[38/*int*/], current), uBox<int>(::TYPES[38/*int*/], total), uBox(::TYPES[71/*bool*/], hastotal)));
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :973
void Http__FuseJSHttpRequest::OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[40/*"onstatechan...*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uBox<int>(::TYPES[38/*int*/], uPtr(_req)->State())));
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :966
void Http__FuseJSHttpRequest::OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[41/*"ontimeout"*/]), ::TYPES[6/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private object SendAsync(object[] args) [instance] :994
uObject* Http__FuseJSHttpRequest::SendAsync(uArray* args)
{
    uPtr(_req)->SetResponseType(0);

    if (uPtr(args)->Length() > 0)
    {
        uString* data = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

        if (::g::Uno::String::op_Inequality(data, NULL))
        {
            uPtr(_req)->SendAsync2(data);
            return NULL;
        }
    }

    uPtr(_req)->SendAsync();
    return NULL;
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [static] :924
Http__FuseJSHttpRequest* Http__FuseJSHttpRequest::New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    Http__FuseJSHttpRequest* obj1 = (Http__FuseJSHttpRequest*)uNew(Http__FuseJSHttpRequest_typeof());
    obj1->ctor_(context, req);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(544)
// ------------------------------------------------------------------

// internal sealed class GeoLocation :544
// {
::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GeoLocation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.GeoLocation", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)GeoLocation__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[42] = uString::Const("auhtorizationRequest");
    ::STRINGS[43] = uString::Const("startListening");
    ::STRINGS[44] = uString::Const("stopListening");
    ::STRINGS[45] = uString::Const("onChanged");
    ::STRINGS[46] = uString::Const("location");
    ::STRINGS[47] = uString::Const("getLocation");
    ::STRINGS[48] = uString::Const("latitude");
    ::STRINGS[49] = uString::Const("longitude");
    ::STRINGS[50] = uString::Const("accuracy");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[39] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[40] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof());
    ::TYPES[28] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[41] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[42] = ::g::Fuse::GeoLocation::LocationTracker_typeof();
    ::TYPES[43] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[44] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[45] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[46] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[47] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[48] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[49] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof());
    ::TYPES[38] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[50] = ::g::Fuse::GeoLocation::GeoCoordinates_typeof();
    ::TYPES[51] = ::g::Fuse::GeoLocation::Location_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[52] = ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3,
        ::g::Fuse::GeoLocation::LocationTracker_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _locationTracker), 0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::GeoLocation, _onChangedEvent), 0);
    return type;
}

// public GeoLocation() :549
void GeoLocation__ctor_1_fn(GeoLocation* __this)
{
    __this->ctor_1();
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) :581
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval)
{
    *__retval = GeoLocation::AuthorizationRequestConverter(context, *type);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :607
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = GeoLocation::Converter(context, location);
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() :591
void GeoLocation__GetAuhtorizationRequest_fn(GeoLocation* __this, int* __retval)
{
    *__retval = __this->GetAuhtorizationRequest();
}

// private Fuse.GeoLocation.Location GetLocation() :596
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLocation();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) :601
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(args);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) :575
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location)
{
    __this->LocationChanged(location);
}

// public GeoLocation New() :549
void GeoLocation__New2_fn(GeoLocation** __retval)
{
    *__retval = GeoLocation::New2();
}

// private void SetAuhtorizationRequest(int value) :586
void GeoLocation__SetAuhtorizationRequest_fn(GeoLocation* __this, int* value)
{
    __this->SetAuhtorizationRequest(*value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) :563
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StartListening(c, args);
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) :569
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StopListening(c, args);
}

// public GeoLocation() [instance] :549
void GeoLocation::ctor_1()
{
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    _locationTracker = ::g::Fuse::GeoLocation::LocationTracker::New1();
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[39/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], ::STRINGS[42/*"auhtorizati...*/], uDelegate::New(::TYPES[40/*Uno.Func<Fuse.GeoLocation.GeoLocationAuthorizationType>*/], (void*)GeoLocation__GetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[28/*Uno.Action<int>*/], (void*)GeoLocation__SetAuhtorizationRequest_fn, this), uDelegate::New(::TYPES[41/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], (void*)GeoLocation__AuthorizationRequestConverter_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[43/*"startListen...*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StartListening_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[44/*"stopListening"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StopListening_fn, this)));
    _onChangedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[45/*"onChanged"*/], true);
    uPtr(_locationTracker)->add_LocationChanged(uDelegate::New(::TYPES[43/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__LocationChanged_fn, this));
    AddMember(_onChangedEvent);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[44/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[46/*"location"*/], uDelegate::New(::TYPES[45/*Uno.Func<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocation_fn, this), NULL, uDelegate::New(::TYPES[46/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[47/*Fuse.Scripting.NativePromise<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[47/*"getLocation"*/], uDelegate::New(::TYPES[48/*Fuse.Scripting.FutureFactory<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocationAsync_fn, this), uDelegate::New(::TYPES[49/*Fuse.Scripting.ResultConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuhtorizationRequest() [instance] :591
int GeoLocation::GetAuhtorizationRequest()
{
    return uPtr(_locationTracker)->AuthorizationType();
}

// private Fuse.GeoLocation.Location GetLocation() [instance] :596
::g::Fuse::GeoLocation::Location* GeoLocation::GetLocation()
{
    return uPtr(_locationTracker)->Location();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) [instance] :601
::g::Uno::Threading::Future1* GeoLocation::GetLocationAsync(uArray* args)
{
    double timeout = (uPtr(args)->Length() > 0) ? ::g::Fuse::Reactive::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 20000.0;
    return uPtr(_locationTracker)->GetLocationAsync(timeout);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) [instance] :575
void GeoLocation::LocationChanged(::g::Fuse::GeoLocation::Location* location)
{
    uPtr(_onChangedEvent)->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, (::g::Fuse::Scripting::Object*)GeoLocation::Converter(uPtr(_onChangedEvent)->Context(), location)));
}

// private void SetAuhtorizationRequest(int value) [instance] :586
void GeoLocation::SetAuhtorizationRequest(int value)
{
    uPtr(_locationTracker)->AuthorizationType(value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) [instance] :563
uObject* GeoLocation::StartListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uPtr(_locationTracker)->StartListening(0, 0.0);
    return NULL;
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) [instance] :569
uObject* GeoLocation::StopListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uPtr(_locationTracker)->StopListening();
    return NULL;
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :581
int GeoLocation::AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type)
{
    return type;
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :607
::g::Fuse::Scripting::Object* GeoLocation::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (location != NULL)
    {
        uPtr(obj)->Item(::STRINGS[48/*"latitude"*/], uBox(::TYPES[64/*double*/], uPtr(uPtr(location)->Coordinates())->Latitude()));
        obj->Item(::STRINGS[49/*"longitude"*/], uBox(::TYPES[64/*double*/], uPtr(location->Coordinates())->Longitude()));
        obj->Item(::STRINGS[50/*"accuracy"*/], uBox(::TYPES[64/*double*/], location->Accuracy()));
    }

    return obj;
}

// public GeoLocation New() [static] :549
GeoLocation* GeoLocation::New2()
{
    GeoLocation* obj1 = (GeoLocation*)uNew(GeoLocation_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(10)
// -----------------------------------------------------------------

// internal static class Globals :10
// {
uClassType* Globals_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Globals", options);
    ::STRINGS[18] = uString::Const("readAsText");
    ::STRINGS[51] = uString::Const("Globals.readAsText(): Exactly one argument expected");
    ::STRINGS[52] = uString::Const("Globals.readAsText(): Argument must be string");
    ::STRINGS[53] = uString::Const("Globals.readAsText(): Global resource file '");
    ::STRINGS[54] = uString::Const("' not found");
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[18] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[53] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[54] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :12
void Globals__CreateModule_fn(uObject** __retval)
{
    *__retval = Globals::CreateModule();
}

// private static bool FileSourceAcceptor(object obj) :35
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval)
{
    *__retval = Globals::FileSourceAcceptor(obj);
}

// private static string readAsText(object[] args) :18
void Globals__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = Globals::readAsText(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :12
uObject* Globals::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[17/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[18/*"readAsText"*/], uDelegate::New(::TYPES[18/*Fuse.Scripting.ResultFactory<string>*/], (void*)Globals__readAsText_fn), NULL)));
}

// private static bool FileSourceAcceptor(object obj) [static] :35
bool Globals::FileSourceAcceptor(uObject* obj)
{
    return uIs(obj, ::TYPES[53/*Uno.UX.BundleFileSource*/]);
}

// private static string readAsText(object[] args) [static] :18
uString* Globals::readAsText(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[51/*"Globals.rea...*/]));

    uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);

    if (args->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[52/*"Globals.rea...*/]));

    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(key, uDelegate::New(::TYPES[54/*Uno.Predicate<object>*/], (void*)Globals__FileSourceAcceptor_fn), &res))
    {
        ::g::Uno::UX::BundleFileSource* fs = uCast< ::g::Uno::UX::BundleFileSource*>(res, ::TYPES[53/*Uno.UX.BundleFileSource*/]);
        return uPtr(fs)->ReadAllText();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[53/*"Globals.rea...*/], key), ::STRINGS[54/*"' not found"*/])));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(881)
// ------------------------------------------------------------------

// internal sealed class Http :881
// {
uType* Http_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Http);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http", options);
    ::STRINGS[55] = uString::Const("HttpClient");
    ::TYPES[7] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[55] = ::g::Fuse::Reactive::FuseJS::FunctionClosure_typeof();
    ::TYPES[19] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[56] = Http__FuseJSHttpClient_typeof();
    return type;
}

// public Http(Fuse.Scripting.Context context) :883
void Http__ctor__fn(Http* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) :888
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateClient(context, args);
}

// public Http New(Fuse.Scripting.Context context) :883
void Http__New1_fn(::g::Fuse::Scripting::Context* context, Http** __retval)
{
    *__retval = Http::New1(context);
}

// public Http(Fuse.Scripting.Context context) [instance] :883
void Http::ctor_(::g::Fuse::Scripting::Context* context)
{
    uPtr(uPtr(context)->GlobalObject())->Item(::STRINGS[55/*"HttpClient"*/], ::g::Fuse::Reactive::FuseJS::FunctionClosure::New1(context, uDelegate::New(::TYPES[19/*Uno.Func<Fuse.Scripting.Context, object[], object>*/], (void*)Http__CreateClient_fn, this))->Callback());
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) [instance] :888
uObject* Http::CreateClient(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return Http__FuseJSHttpClient::New1(context)->Obj();
}

// public Http New(Fuse.Scripting.Context context) [static] :883
Http* Http::New1(::g::Fuse::Scripting::Context* context)
{
    Http* obj1 = (Http*)uNew(Http_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(314)
// ------------------------------------------------------------------

// public sealed class InterApp :314
// {
// static InterApp() :320
static void InterApp__cctor__fn(uType* __type)
{
    InterApp::_cachedUris_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[57/*Uno.Collections.List<string>*/]));
    ::g::Uno::Platform2::Application::add_ReceivedURI(uDelegate::New(::TYPES[59/*Uno.EventHandler<string>*/], (void*)InterApp__OnReceivedUri_fn));
}

uType* InterApp_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InterApp);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.InterApp", options);
    type->fp_ctor_ = (void*)InterApp__New1_fn;
    type->fp_cctor_ = InterApp__cctor__fn;
    ::STRINGS[56] = uString::Const("onReceivedUri");
    ::STRINGS[57] = uString::Const("launchUri");
    ::TYPES[57] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[58] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[59] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[60] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[61] = ::g::Uno::EventHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[62] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[5] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_cachedUris_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_jsInitialized_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::InterApp::_onReceivedUri_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateModule", NULL, (void*)InterApp__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction("LaunchUri", NULL, (void*)InterApp__LaunchUri_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)InterApp__New1_fn, 0, true, InterApp_typeof(), 0));
    return type;
}

// public generated InterApp() :314
void InterApp__ctor__fn(InterApp* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :325
void InterApp__CreateModule_fn(uObject** __retval)
{
    *__retval = InterApp::CreateModule();
}

// public static object LaunchUri(Fuse.Scripting.Context context, object[] args) :354
void InterApp__LaunchUri_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = InterApp::LaunchUri(context, args);
}

// public generated InterApp New() :314
void InterApp__New1_fn(InterApp** __retval)
{
    *__retval = InterApp::New1();
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :337
void InterApp__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    InterApp::OnJsInitialized(sender, args);
}

// private static void OnReceivedUri(object sender, string uri) :346
void InterApp__OnReceivedUri_fn(uObject* sender, uString* uri)
{
    InterApp::OnReceivedUri(sender, uri);
}

uSStrong< ::g::Uno::Collections::List*> InterApp::_cachedUris_;
bool InterApp::_jsInitialized_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> InterApp::_onReceivedUri_;

// public generated InterApp() [instance] :314
void InterApp::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :325
uObject* InterApp::CreateModule()
{
    InterApp_typeof()->Init();
    InterApp::_onReceivedUri() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[56/*"onReceivedUri"*/], true);
    ::g::Fuse::Scripting::NativeModule* module = ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 2, (::g::Fuse::Scripting::NativeEvent*)InterApp::_onReceivedUri(), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[57/*"launchUri"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)InterApp__LaunchUri_fn))));
    module->add_Evaluated(uDelegate::New(::TYPES[61/*Uno.EventHandler*/], (void*)InterApp__OnJsInitialized_fn));
    return (uObject*)module;
}

// public static object LaunchUri(Fuse.Scripting.Context context, object[] args) [static] :354
uObject* InterApp::LaunchUri(::g::Fuse::Scripting::Context* context, uArray* args)
{
    InterApp_typeof()->Init();
    ::g::Fuse::Launcher::LaunchUri(::g::Uno::Net::Http::Uri::New1(uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/])));
    return NULL;
}

// public generated InterApp New() [static] :314
InterApp* InterApp::New1()
{
    InterApp* obj2 = (InterApp*)uNew(InterApp_typeof());
    obj2->ctor_();
    return obj2;
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :337
void InterApp::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    InterApp_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;

    if (InterApp::_cachedUris() != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(InterApp::_cachedUris()), &ret3), ret3); enum1.MoveNext(::TYPES[62/*Uno.Collections.List<string>.Enumerator*/]); )
        {
            uString* uri = enum1.Current(::TYPES[62/*Uno.Collections.List<string>.Enumerator*/]);
            uPtr(InterApp::_onReceivedUri())->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uri));
        }

    InterApp::_cachedUris() = NULL;
    InterApp::_jsInitialized() = true;
}

// private static void OnReceivedUri(object sender, string uri) [static] :346
void InterApp::OnReceivedUri(uObject* sender, uString* uri)
{
    InterApp_typeof()->Init();

    if (InterApp::_jsInitialized())
        uPtr(InterApp::_onReceivedUri())->RaiseAsync(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uri));
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(InterApp::_cachedUris()), uri);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(107)
// ------------------------------------------------------------------

// public sealed class Lifecycle :107
// {
uType* Lifecycle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Lifecycle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Lifecycle", options);
    type->fp_ctor_ = (void*)Lifecycle__New1_fn;
    ::STRINGS[58] = uString::Const("onEnteringForeground");
    ::STRINGS[59] = uString::Const("onEnteringInteractive");
    ::STRINGS[60] = uString::Const("onExitedInteractive");
    ::STRINGS[61] = uString::Const("onEnteringBackground");
    ::STRINGS[62] = uString::Const("onTerminating");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[60] = ::g::Fuse::Scripting::NativeModule_typeof();
    ::TYPES[61] = ::g::Uno::EventHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[58] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[63] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringBackground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringForeground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_enteringInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_exitedInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Lifecycle::_terminating_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("CreateModule", NULL, (void*)Lifecycle__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Lifecycle__New1_fn, 0, true, Lifecycle_typeof(), 0));
    return type;
}

// public generated Lifecycle() :107
void Lifecycle__ctor__fn(Lifecycle* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :121
void Lifecycle__CreateModule_fn(uObject** __retval)
{
    *__retval = Lifecycle::CreateModule();
}

// public generated Lifecycle New() :107
void Lifecycle__New1_fn(Lifecycle** __retval)
{
    *__retval = Lifecycle::New1();
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) :172
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) :151
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) :158
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) :165
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :142
void Lifecycle__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Lifecycle::OnJsInitialized(sender, args);
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) :179
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringBackground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringForeground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_exitedInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_terminating_;

// public generated Lifecycle() [instance] :107
void Lifecycle::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :121
uObject* Lifecycle::CreateModule()
{
    Lifecycle::_enteringForeground() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[58/*"onEnteringF...*/], true);
    Lifecycle::_enteringInteractive() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[59/*"onEnteringI...*/], true);
    Lifecycle::_exitedInteractive() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[60/*"onExitedInt...*/], true);
    Lifecycle::_enteringBackground() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[61/*"onEnteringB...*/], true);
    Lifecycle::_terminating() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[62/*"onTerminating"*/], true);
    ::g::Fuse::Scripting::NativeModule* module = ::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 5, (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringForeground(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringInteractive(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_exitedInteractive(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_enteringBackground(), (::g::Fuse::Scripting::NativeEvent*)Lifecycle::_terminating()));
    module->add_Evaluated(uDelegate::New(::TYPES[61/*Uno.EventHandler*/], (void*)Lifecycle__OnJsInitialized_fn));
    return (uObject*)module;
}

// public generated Lifecycle New() [static] :107
Lifecycle* Lifecycle::New1()
{
    Lifecycle* obj1 = (Lifecycle*)uNew(Lifecycle_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) [static] :172
void Lifecycle::OnEnteringBackground(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringBackground();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringBackground())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) [static] :151
void Lifecycle::OnEnteringForeground(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringForeground();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringForeground())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) [static] :158
void Lifecycle::OnEnteringInteractive(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringInteractive();

    if (handler != NULL)
        uPtr(Lifecycle::_enteringInteractive())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) [static] :165
void Lifecycle::OnExitedInteractive(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_exitedInteractive();

    if (handler != NULL)
        uPtr(Lifecycle::_exitedInteractive())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :142
void Lifecycle::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform2::Application::add_EnteringInteractive(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform2::Application::add_ExitedInteractive(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform2::Application::add_Terminating(uDelegate::New(::TYPES[63/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) [static] :179
void Lifecycle::OnTerminating(int newState)
{
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_terminating();

    if (handler != NULL)
        uPtr(Lifecycle::_terminating())->RaiseAsync(uArray::New(::TYPES[3/*object[]*/], 0));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(197)
// ------------------------------------------------------------------

// public sealed class Maps :197
// {
uType* Maps_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Maps);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Maps", options);
    type->fp_ctor_ = (void*)Maps__New1_fn;
    ::STRINGS[63] = uString::Const("openAt");
    ::STRINGS[64] = uString::Const("searchNearby");
    ::STRINGS[65] = uString::Const("searchNear");
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[64] = ::g::Uno::Double_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("CreateModule", NULL, (void*)Maps__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Maps__New1_fn, 0, true, Maps_typeof(), 0),
        new uFunction("OpenAt", NULL, (void*)Maps__OpenAt_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("SearchNear", NULL, (void*)Maps__SearchNear_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("SearchNearby", NULL, (void*)Maps__SearchNearby_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()));
    return type;
}

// public generated Maps() :197
void Maps__ctor__fn(Maps* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :199
void Maps__CreateModule_fn(uObject** __retval)
{
    *__retval = Maps::CreateModule();
}

// public generated Maps New() :197
void Maps__New1_fn(Maps** __retval)
{
    *__retval = Maps::New1();
}

// public static object OpenAt(Fuse.Scripting.Context context, object[] args) :223
void Maps__OpenAt_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::OpenAt(context, args);
}

// public static object SearchNear(Fuse.Scripting.Context context, object[] args) :214
void Maps__SearchNear_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::SearchNear(context, args);
}

// public static object SearchNearby(Fuse.Scripting.Context context, object[] args) :207
void Maps__SearchNearby_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Maps::SearchNearby(context, args);
}

// public generated Maps() [instance] :197
void Maps::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :199
uObject* Maps::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 3, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[63/*"openAt"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__OpenAt_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[64/*"searchNearby"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__SearchNearby_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[65/*"searchNear"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Maps__SearchNear_fn))));
}

// public generated Maps New() [static] :197
Maps* Maps::New1()
{
    Maps* obj1 = (Maps*)uNew(Maps_typeof());
    obj1->ctor_();
    return obj1;
}

// public static object OpenAt(Fuse.Scripting.Context context, object[] args) [static] :223
uObject* Maps::OpenAt(::g::Fuse::Scripting::Context* context, uArray* args)
{
    double latitude = uUnbox<double>(::TYPES[64/*double*/], uPtr(args)->Strong<uObject*>(0));
    double longitude = uUnbox<double>(::TYPES[64/*double*/], args->Strong<uObject*>(1));
    ::g::Fuse::Launcher::LaunchMaps(latitude, longitude);
    return NULL;
}

// public static object SearchNear(Fuse.Scripting.Context context, object[] args) [static] :214
uObject* Maps::SearchNear(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* query = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchMaps2(query);
    return NULL;
}

// public static object SearchNearby(Fuse.Scripting.Context context, object[] args) [static] :207
uObject* Maps::SearchNearby(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* query = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchMaps2(query);
    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(241)
// ------------------------------------------------------------------

// public sealed class Phone :241
// {
uType* Phone_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Phone);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Phone", options);
    type->fp_ctor_ = (void*)Phone__New1_fn;
    ::STRINGS[66] = uString::Const("call");
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Call", NULL, (void*)Phone__Call_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateModule", NULL, (void*)Phone__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Phone__New1_fn, 0, true, Phone_typeof(), 0));
    return type;
}

// public generated Phone() :241
void Phone__ctor__fn(Phone* __this)
{
    __this->ctor_();
}

// public static object Call(Fuse.Scripting.Context context, object[] args) :248
void Phone__Call_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = Phone::Call(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() :243
void Phone__CreateModule_fn(uObject** __retval)
{
    *__retval = Phone::CreateModule();
}

// public generated Phone New() :241
void Phone__New1_fn(Phone** __retval)
{
    *__retval = Phone::New1();
}

// public generated Phone() [instance] :241
void Phone::ctor_()
{
}

// public static object Call(Fuse.Scripting.Context context, object[] args) [static] :248
uObject* Phone::Call(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* callString = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Fuse::Launcher::LaunchCall(callString);
    return NULL;
}

// public static Fuse.Scripting.IModule CreateModule() [static] :243
uObject* Phone::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[66/*"call"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Phone__Call_fn))));
}

// public generated Phone New() [static] :241
Phone* Phone::New1()
{
    Phone* obj1 = (Phone*)uNew(Phone_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(811)
// ------------------------------------------------------------------

// internal sealed class RaiseEvent :811
// {
uType* RaiseEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RaiseEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.RaiseEvent", options);
    type->fp_ctor_ = (void*)RaiseEvent__New1_fn;
    ::STRINGS[67] = uString::Const("Cannot find message with name: ");
    ::STRINGS[68] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Reactive\\0.18.8\\FuseJS\\$.uno");
    ::STRINGS[69] = uString::Const("Raise");
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Args), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::RaiseEvent, Source), 0);
    return type;
}

// public generated RaiseEvent() :811
void RaiseEvent__ctor__fn(RaiseEvent* __this)
{
    __this->ctor_();
}

// public generated RaiseEvent New() :811
void RaiseEvent__New1_fn(RaiseEvent** __retval)
{
    *__retval = RaiseEvent::New1();
}

// public void Raise() :818
void RaiseEvent__Raise_fn(RaiseEvent* __this)
{
    __this->Raise();
}

// public generated RaiseEvent() [instance] :811
void RaiseEvent::ctor_()
{
}

// public void Raise() [instance] :818
void RaiseEvent::Raise()
{
    ::g::Fuse::UserEventDispatch* dispatch = ::g::Fuse::UserEventDispatch::GetByName(Name);

    if (dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition2(::STRINGS[67/*"Cannot find...*/], Name), NULL, ::STRINGS[68/*"C:\\Program...*/], 823, ::STRINGS[69/*"Raise"*/]);
        return;
    }

    uPtr(dispatch)->DirectRaise(Source, Args);
}

// public generated RaiseEvent New() [static] :811
RaiseEvent* RaiseEvent::New1()
{
    RaiseEvent* obj1 = (RaiseEvent*)uNew(RaiseEvent_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(693)
// ------------------------------------------------------------------

// internal static class Storage :693
// {
uClassType* Storage_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Storage", options);
    ::STRINGS[70] = uString::Const("writeSync");
    ::STRINGS[71] = uString::Const("readSync");
    ::STRINGS[72] = uString::Const("deleteSync");
    ::STRINGS[73] = uString::Const("write");
    ::STRINGS[74] = uString::Const("read");
    ::STRINGS[75] = uString::Const("");
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[65] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[66] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[17] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[67] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = uObject_typeof();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :695
void Storage__CreateModule_fn(uObject** __retval)
{
    *__retval = Storage::CreateModule();
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) :728
void Storage__Delete_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Delete(c, args);
}

// private static object Read(Fuse.Scripting.Context c, object[] args) :750
void Storage__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Read(c, args);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) :718
void Storage__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Storage::ReadAsync(args);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) :738
void Storage__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Storage::Write(c, args);
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) :706
void Storage__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Storage::WriteAsync(args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :695
uObject* Storage::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 5, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[70/*"writeSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Write_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[71/*"readSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Read_fn)), (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[72/*"deleteSync"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Storage__Delete_fn)), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[65/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[73/*"write"*/], uDelegate::New(::TYPES[66/*Fuse.Scripting.FutureFactory<bool>*/], (void*)Storage__WriteAsync_fn), NULL), (::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[17/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[74/*"read"*/], uDelegate::New(::TYPES[67/*Fuse.Scripting.FutureFactory<string>*/], (void*)Storage__ReadAsync_fn), NULL)));
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) [static] :728
uObject* Storage::Delete(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return uBox(::TYPES[71/*bool*/], ::g::Fuse::Storage::ApplicationDir::Delete(filename));
    }

    return uBox(::TYPES[71/*bool*/], false);
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static] :750
uObject* Storage::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    try
    {
        if (uPtr(args)->Length() > 0)
        {
            uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
            return ::g::Fuse::Storage::ApplicationDir::Read((filename != NULL) ? filename : ::STRINGS[75/*""*/]);
        }

        return ::g::Fuse::Storage::ApplicationDir::Read(::STRINGS[75/*""*/]);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[75/*""*/];
    }
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :718
::g::Uno::Threading::Future1* Storage::ReadAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::ReadAsync((filename != NULL) ? filename : ::STRINGS[75/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::ReadAsync(::STRINGS[75/*""*/]);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) [static] :738
uObject* Storage::Write(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
        return uBox(::TYPES[71/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write((filename != NULL) ? filename : ::STRINGS[75/*""*/], (value != NULL) ? value : ::STRINGS[75/*""*/]));
    }

    return uBox(::TYPES[71/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write(::STRINGS[75/*""*/], ::STRINGS[75/*""*/]));
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) [static] :706
::g::Uno::Threading::Future1* Storage::WriteAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[4/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::WriteAsync((filename != NULL) ? filename : ::STRINGS[75/*""*/], (value != NULL) ? value : ::STRINGS[75/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::WriteAsync(::STRINGS[75/*""*/], ::STRINGS[75/*""*/]);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(482)
// ------------------------------------------------------------------

// private sealed class Timer.Time :482
// {
uType* Timer__Time_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Timer__Time);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Timer.Time", options);
    ::TYPES[64] = ::g::Uno::Double_typeof();
    ::TYPES[68] = ::g::Uno::Delegate_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Timer__Time, _callback), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Timer__Time, _ms), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Timer__Time, _repeat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Timer__Time, _timestamp), 0,
        ::g::Fuse::Reactive::FuseJS::Timer_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Timer__Time, _timoutManager), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Timer__Time, ID), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::Timer__Time::_id_, uFieldFlagsStatic);
    return type;
}

// public Time(Fuse.Reactive.FuseJS.Timer timoutManager, double ms, Uno.Action callback, bool repeat) :494
void Timer__Time__ctor__fn(Timer__Time* __this, ::g::Fuse::Reactive::FuseJS::Timer* timoutManager, double* ms, uDelegate* callback, bool* repeat)
{
    __this->ctor_(timoutManager, *ms, callback, *repeat);
}

// private double GetMilliseconds() :525
void Timer__Time__GetMilliseconds_fn(Timer__Time* __this, double* __retval)
{
    *__retval = __this->GetMilliseconds();
}

// public Time New(Fuse.Reactive.FuseJS.Timer timoutManager, double ms, Uno.Action callback, bool repeat) :494
void Timer__Time__New1_fn(::g::Fuse::Reactive::FuseJS::Timer* timoutManager, double* ms, uDelegate* callback, bool* repeat, Timer__Time** __retval)
{
    *__retval = Timer__Time::New1(timoutManager, *ms, callback, *repeat);
}

// public void Visit() :504
void Timer__Time__Visit_fn(Timer__Time* __this)
{
    __this->Visit();
}

int Timer__Time::_id_;

// public Time(Fuse.Reactive.FuseJS.Timer timoutManager, double ms, Uno.Action callback, bool repeat) [instance] :494
void Timer__Time::ctor_(::g::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, uDelegate* callback, bool repeat)
{
    ID = (Timer__Time::_id()++);
    _timoutManager = timoutManager;
    _timestamp = GetMilliseconds();
    _ms = ms;
    _callback = callback;
    _repeat = repeat;
}

// private double GetMilliseconds() [instance] :525
double Timer__Time::GetMilliseconds()
{
    return (double)(::g::Uno::Diagnostics::Clock::GetTicks() / 10000LL);
}

// public void Visit() [instance] :504
void Timer__Time::Visit()
{
    double m = GetMilliseconds();
    double elapsed = m - _timestamp;

    if (_ms < elapsed)
    {
        try
        {
            if (::g::Uno::Delegate::op_Inequality(_callback, NULL))
                uPtr(_callback)->InvokeVoid();
        }
        catch (const uThrowable& __t)
        {
            if (_repeat)
                _timestamp = m;
            else
                uPtr(_timoutManager)->RemoveTimer(ID);

            throw __t;
        }
        // finally

        if (_repeat)
            _timestamp = m;
        else
            uPtr(_timoutManager)->RemoveTimer(ID);
    }
}

// public Time New(Fuse.Reactive.FuseJS.Timer timoutManager, double ms, Uno.Action callback, bool repeat) [static] :494
Timer__Time* Timer__Time::New1(::g::Fuse::Reactive::FuseJS::Timer* timoutManager, double ms, uDelegate* callback, bool repeat)
{
    Timer__Time* obj1 = (Timer__Time*)uNew(Timer__Time_typeof());
    obj1->ctor_(timoutManager, ms, callback, repeat);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(399)
// ------------------------------------------------------------------

// internal sealed class Timer :399
// {
::g::Fuse::Scripting::NativeModule_type* Timer_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Timer);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Timer", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)Timer__New2_fn;
    type->interface0.fp_get_Code = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_Code_fn;
    type->interface0.fp_get_FileName = (void(*)(uObject*, uString**))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_FileName_fn;
    type->interface0.fp_get_LineNumberOffset = (void(*)(uObject*, int*))::g::Fuse::Scripting::NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset_fn;
    type->interface0.fp_Evaluate = (void(*)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**))::g::Fuse::Scripting::NativeModule__Evaluate_fn;
    ::STRINGS[76] = uString::Const("create");
    ::STRINGS[77] = uString::Const("delete");
    ::STRINGS[78] = uString::Const("create(): requires at least three arguments");
    ::STRINGS[79] = uString::Const("create(): first argument must be a function");
    ::STRINGS[80] = uString::Const("delete(): requires one argument");
    ::TYPES[69] = ::g::Uno::Collections::List_typeof()->MakeType(Timer__Time_typeof());
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[70] = Timer__Time_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[71] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IModule_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0));
    type->SetFields(3,
        ::g::Uno::Collections::List_typeof()->MakeType(Timer__Time_typeof()), offsetof(::g::Fuse::Reactive::FuseJS::Timer, _timers), 0);
    return type;
}

// public Timer() :403
void Timer__ctor_1_fn(Timer* __this)
{
    __this->ctor_1();
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) :456
void Timer__AddTimer_fn(Timer* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval)
{
    *__retval = __this->AddTimer(*ms, callback, *repeat);
}

// private object Create(Fuse.Scripting.Context context, object[] args) :409
void Timer__Create_fn(Timer* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Create(context, args);
}

// private object Delete(Fuse.Scripting.Context context, object[] args) :428
void Timer__Delete_fn(Timer* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Delete(context, args);
}

// public Timer New() :403
void Timer__New2_fn(Timer** __retval)
{
    *__retval = Timer::New2();
}

// internal void Process() :476
void Timer__Process_fn(Timer* __this)
{
    __this->Process();
}

// public bool RemoveTimer(int id) :463
void Timer__RemoveTimer_fn(Timer* __this, int* id, bool* __retval)
{
    *__retval = __this->RemoveTimer(*id);
}

// public Timer() [instance] :403
void Timer::ctor_1()
{
    _timers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[69/*Uno.Collections.List<Fuse.Reactive.FuseJS.Timer.Time>*/]));
    ctor_(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[76/*"create"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Timer__Create_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[77/*"delete"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Timer__Delete_fn, this)));
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) [instance] :456
int Timer::AddTimer(double ms, uDelegate* callback, bool repeat)
{
    Timer__Time* t = Timer__Time::New1(this, ms, callback, repeat);
    ::g::Uno::Collections::List__Add_fn(uPtr(_timers), t);
    return t->ID;
}

// private object Create(Fuse.Scripting.Context context, object[] args) [instance] :409
uObject* Timer::Create(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 3)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[78/*"create(): r...*/]));

    if (!uIs(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*Fuse.Scripting.Function*/]))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[79/*"create(): f...*/]));

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*Fuse.Scripting.Function*/]);
    double ms = ::g::Fuse::Scripting::Value::ToNumber(args->Strong<uObject*>(1));
    bool repeat = uUnbox<bool>(::TYPES[71/*bool*/], args->Strong<uObject*>(2));
    uArray* innerArgs = uArray::New(::TYPES[3/*object[]*/], args->Length() - 3);

    for (int i = 0; i < innerArgs->Length(); i++)
        innerArgs->Strong<uObject*>(i) = args->Strong<uObject*>(3 + i);

    return uBox<int>(::TYPES[38/*int*/], AddTimer(ms, uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)Timer__Closure__Callback_fn, Timer__Closure::New1(func, innerArgs)), repeat));
}

// private object Delete(Fuse.Scripting.Context context, object[] args) [instance] :428
uObject* Timer::Delete(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[80/*"delete(): r...*/]));

    RemoveTimer(::g::Fuse::Reactive::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)));
    return NULL;
}

// internal void Process() [instance] :476
void Timer::Process()
{
    Timer__Time* ret2;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret2), ret2))->Visit();
}

// public bool RemoveTimer(int id) [instance] :463
bool Timer::RemoveTimer(int id)
{
    Timer__Time* ret3;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret3), ret3))->ID == id)
        {
            uPtr(_timers)->RemoveAt(i);
            return true;
        }

    return false;
}

// public Timer New() [static] :403
Timer* Timer::New2()
{
    Timer* obj1 = (Timer*)uNew(Timer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(832)
// ------------------------------------------------------------------

// public sealed class UserEvents :832
// {
uType* UserEvents_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UserEvents);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.UserEvents", options);
    type->fp_ctor_ = (void*)UserEvents__New1_fn;
    ::STRINGS[81] = uString::Const("raise");
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[7] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[72] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[14] = ::g::Uno::String_typeof()->Array();
    ::TYPES[73] = ::g::Fuse::Reactive::FuseJS::RaiseEvent_typeof();
    ::TYPES[29] = ::g::Uno::Action_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("CreateModule", NULL, (void*)UserEvents__CreateModule_fn, 0, true, ::g::Fuse::Scripting::IModule_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UserEvents__New1_fn, 0, true, UserEvents_typeof(), 0),
        new uFunction("Raise", NULL, (void*)UserEvents__Raise_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()));
    return type;
}

// public generated UserEvents() :832
void UserEvents__ctor__fn(UserEvents* __this)
{
    __this->ctor_();
}

// public static Fuse.Scripting.IModule CreateModule() :834
void UserEvents__CreateModule_fn(uObject** __retval)
{
    *__retval = UserEvents::CreateModule();
}

// public generated UserEvents New() :832
void UserEvents__New1_fn(UserEvents** __retval)
{
    *__retval = UserEvents::New1();
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) :845
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = UserEvents::Raise(context, args);
}

// public generated UserEvents() [instance] :832
void UserEvents::ctor_()
{
}

// public static Fuse.Scripting.IModule CreateModule() [static] :834
uObject* UserEvents::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[81/*"raise"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)UserEvents__Raise_fn))));
}

// public generated UserEvents New() [static] :832
UserEvents* UserEvents::New1()
{
    UserEvents* obj4 = (UserEvents*)uNew(UserEvents_typeof());
    obj4->ctor_();
    return obj4;
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) [static] :845
uObject* UserEvents::Raise(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* eventName = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*string*/]);
    ::g::Uno::Collections::Dictionary* postArgs = NULL;
    ::g::Fuse::Scripting::Object* p = (args->Length() > 1) ? uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[7/*Fuse.Scripting.Object*/]) : NULL;

    if (p != NULL)
    {
        uArray* keys = uPtr(p)->Keys();
        postArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[72/*Uno.Collections.Dictionary<string, object>*/]);

        for (int index2 = 0, length3 = uPtr(keys)->Length(); index2 < length3; ++index2)
        {
            uString* key = uPtr(keys)->Strong<uString*>(index2);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(postArgs), key, uPtr(p)->Item(key));
        }
    }

    ::g::Fuse::Reactive::FuseJS::RaiseEvent* re = ::g::Fuse::Reactive::FuseJS::RaiseEvent::New1();
    re->Source = NULL;
    re->Name = eventName;
    re->Args = postArgs;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[29/*Uno.Action*/], (void*)::g::Fuse::Reactive::FuseJS::RaiseEvent__Raise_fn, re));
    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno(373)
// ------------------------------------------------------------------

// internal static class Vibration :373
// {
uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Vibration", options);
    ::STRINGS[82] = uString::Const("vibrate");
    ::TYPES[10] = ::g::Fuse::Scripting::IModule_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    return type;
}

// public static Fuse.Scripting.IModule CreateModule() :375
void Vibration__CreateModule_fn(uObject** __retval)
{
    *__retval = Vibration::CreateModule();
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) :380
void Vibration__Vibrate_fn(::g::Fuse::Scripting::Context* context, uArray* args, uArray** __retval)
{
    *__retval = Vibration::Vibrate(context, args);
}

// public static Fuse.Scripting.IModule CreateModule() [static] :375
uObject* Vibration::CreateModule()
{
    return (uObject*)::g::Fuse::Scripting::NativeModule::New1(uArray::Init< ::g::Fuse::Scripting::NativeMember*>(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 1, (::g::Fuse::Scripting::NativeFunction*)::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[82/*"vibrate"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)Vibration__Vibrate_fn))));
}

// private static object[] Vibrate(Fuse.Scripting.Context context, object[] args) [static] :380
uArray* Vibration::Vibrate(::g::Fuse::Scripting::Context* context, uArray* args)
{
    double ms = (uPtr(args)->Length() > 0) ? ::g::Fuse::Reactive::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 200.0;
    ::g::Fuse::Vibration::Vibration::Vibrate(ms);
    return NULL;
}
// }

}}}} // ::g::Fuse::Reactive::FuseJS
