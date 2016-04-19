// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.res.AssetFileDescriptor.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.graphics.SurfaceTexture.h>
#include <Android.android.media.AudioManager.h>
#include <Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h>
#include <Android.android.media.MediaPlayer.h>
#include <Android.android.view.Surface.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Fuse.Video.Graphics.Android.AndroidAudioHelpers.h>
#include <Fuse.Video.Graphics.Android.AndroidVideoLoader.h>
#include <Fuse.Video.Graphics.Android.CompletionEvent.h>
#include <Fuse.Video.Graphics.Android.ErrorEvent.h>
#include <Fuse.Video.Graphics.Android.ErrorEventArgs.h>
#include <Fuse.Video.Graphics.Android.ErrorEventHandler.h>
#include <Fuse.Video.Graphics.Android.FrameAvailableEvent.h>
#include <Fuse.Video.Graphics.Android.PreparedEvent.h>
#include <Fuse.Video.Graphics.Android.VideoPlayer.h>
#include <Fuse.Video.Graphics.Android.VideoSurface.h>
#include <Fuse.Video.IVideoPlayer.h>
#include <Fuse.Video.LoadedHandler.h>
#include <Fuse.Video.LoadFailed.h>
#include <Fuse.Video.LoadResult.h>
#include <Fuse.Video.LoadSucceded.h>
#include <Fuse.Video.VideoDiskCache.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Type.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
//~
JNFUN(jboolean,Binding_Fuse_Video_Graphics_Android_ErrorEvent__onError9438,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::android::media::MediaPlayer*,((::g::Android::android::media::MediaPlayer*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::media::MediaPlayer_typeof(), false, true, true)));
    JTRY
    return (jboolean)::g::Android::android::media::MediaPlayerDLROnErrorListener::onError(uInterface(uPtr, ::g::Android::android::media::MediaPlayerDLROnErrorListener_typeof()), tmparg3, ((int)arg1), ((int)arg2));
    JCATCH
}
JNFUN(void,Binding_Fuse_Video_Graphics_Android_CompletionEvent__onCompletion9437,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::media::MediaPlayer*,((::g::Android::android::media::MediaPlayer*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::media::MediaPlayer_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::media::MediaPlayerDLROnCompletionListener::onCompletion(uInterface(uPtr, ::g::Android::android::media::MediaPlayerDLROnCompletionListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Video_Graphics_Android_FrameAvailableEvent__onFrameAvailable7295,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::graphics::SurfaceTexture*,((::g::Android::android::graphics::SurfaceTexture*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::graphics::SurfaceTexture_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::graphics::SurfaceTextureDLROnFrameAvailableListener::onFrameAvailable(uInterface(uPtr, ::g::Android::android::graphics::SurfaceTextureDLROnFrameAvailableListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Video_Graphics_Android_PreparedEvent__onPrepared9440,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::media::MediaPlayer*,((::g::Android::android::media::MediaPlayer*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::media::MediaPlayer_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::media::MediaPlayerDLROnPreparedListener::onPrepared(uInterface(uPtr, ::g::Android::android::media::MediaPlayerDLROnPreparedListener_typeof()), tmparg1);
    JCATCH
}
static uString* STRINGS[14];
static uType* TYPES[28];

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(623)
// -------------------------------------------------------------------------

// internal static extern class AndroidAudioHelpers :623
// {
uClassType* AndroidAudioHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Video.Graphics.Android.AndroidAudioHelpers", options);
    ::TYPES[0] = ::g::Android::android::media::AudioManager_typeof();
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    return type;
}

// public static void GetAudioFocus() :626
void AndroidAudioHelpers__GetAudioFocus_fn()
{
    AndroidAudioHelpers::GetAudioFocus();
}

// public static void GetAudioFocus(int streamType) :631
void AndroidAudioHelpers__GetAudioFocus1_fn(int* streamType)
{
    AndroidAudioHelpers::GetAudioFocus1(*streamType);
}

// public static void ReleaseAudioFocus() :637
void AndroidAudioHelpers__ReleaseAudioFocus_fn()
{
    AndroidAudioHelpers::ReleaseAudioFocus();
}

// public static void GetAudioFocus() [static] :626
void AndroidAudioHelpers::GetAudioFocus()
{
    AndroidAudioHelpers::GetAudioFocus1(::g::Android::android::media::AudioManager::STREAM_MUSIC());
}

// public static void GetAudioFocus(int streamType) [static] :631
void AndroidAudioHelpers::GetAudioFocus1(int streamType)
{
    ::g::Android::android::media::AudioManager* am = uCast< ::g::Android::android::media::AudioManager*>(uPtr(::g::Android::android::app::Activity::GetAppActivity())->getSystemService(::g::Android::android::content::Context::AUDIO_SERVICE()), ::TYPES[0/*Android.android.media.AudioManager*/]);
    uPtr(am)->requestAudioFocus(NULL, streamType, ::g::Android::android::media::AudioManager::AUDIOFOCUS_GAIN());
}

// public static void ReleaseAudioFocus() [static] :637
void AndroidAudioHelpers::ReleaseAudioFocus()
{
    ::g::Android::android::media::AudioManager* am = uCast< ::g::Android::android::media::AudioManager*>(uPtr(::g::Android::android::app::Activity::GetAppActivity())->getSystemService(::g::Android::android::content::Context::AUDIO_SERVICE()), ::TYPES[0/*Android.android.media.AudioManager*/]);
    uPtr(am)->abandonAudioFocus(NULL);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(349)
// -------------------------------------------------------------------------

// internal sealed extern class AndroidVideoLoader :349
// {
::g::Fuse::Video::VideoLoader_type* AndroidVideoLoader_typeof()
{
    static uSStrong< ::g::Fuse::Video::VideoLoader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(AndroidVideoLoader);
    options.TypeSize = sizeof(::g::Fuse::Video::VideoLoader_type);
    type = (::g::Fuse::Video::VideoLoader_type*)uClassType::New("Fuse.Video.Graphics.Android.AndroidVideoLoader", options);
    type->SetBase(::g::Fuse::Video::VideoLoader_typeof());
    type->fp_Dispose = (void(*)(::g::Fuse::Video::VideoLoader*))AndroidVideoLoader__Dispose_fn;
    type->fp_LoadInternal = (void(*)(::g::Fuse::Video::VideoLoader*, uString*, uDelegate*))AndroidVideoLoader__LoadInternal_fn;
    type->fp_LoadInternal1 = (void(*)(::g::Fuse::Video::VideoLoader*, ::g::Uno::UX::FileSource*, uDelegate*))AndroidVideoLoader__LoadInternal1_fn;
    ::TYPES[2] = ::g::Fuse::Video::Graphics::Android::VideoPlayer_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Uno::BundleFile_typeof();
    ::TYPES[6] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[7] = ::g::Fuse::Video::LoadedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Video::LoadResult_typeof();
    ::TYPES[9] = ::g::Fuse::Video::IVideoPlayer_typeof();
    type->SetFields(3,
        ::g::Fuse::Video::LoadedHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::AndroidVideoLoader, _loadedHandler1), 0,
        ::g::Fuse::Video::Graphics::Android::VideoPlayer_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::AndroidVideoLoader, _videoPlayer), 0);
    return type;
}

// public AndroidVideoLoader(Fuse.Video.LoadedHandler loadedHandler) :354
void AndroidVideoLoader__ctor_1_fn(AndroidVideoLoader* __this, uDelegate* loadedHandler)
{
    __this->ctor_1(loadedHandler);
}

// protected override sealed void Dispose() :409
void AndroidVideoLoader__Dispose_fn(AndroidVideoLoader* __this)
{
    if (__this->_videoPlayer != NULL)
        uPtr(__this->_videoPlayer)->Dispose();
}

// private void HookEvents() :360
void AndroidVideoLoader__HookEvents_fn(AndroidVideoLoader* __this)
{
    __this->HookEvents();
}

// private void LoadBundleFile(Uno.BundleFile file, Fuse.Video.LoadedHandler loadedHandler) :401
void AndroidVideoLoader__LoadBundleFile_fn(AndroidVideoLoader* __this, ::g::Uno::BundleFile* file, uDelegate* loadedHandler)
{
    __this->LoadBundleFile(file, loadedHandler);
}

// protected override sealed void LoadInternal(string url, Fuse.Video.LoadedHandler loadedHandler) :386
void AndroidVideoLoader__LoadInternal_fn(AndroidVideoLoader* __this, uString* url, uDelegate* loadedHandler)
{
    __this->_loadedHandler1 = loadedHandler;
    uPtr(__this->_videoPlayer)->LoadAsync1(url);
}

// protected override sealed void LoadInternal(Uno.UX.FileSource fileSource, Fuse.Video.LoadedHandler loadedHandler) :392
void AndroidVideoLoader__LoadInternal1_fn(AndroidVideoLoader* __this, ::g::Uno::UX::FileSource* fileSource, uDelegate* loadedHandler)
{
    if (uIs(fileSource, ::TYPES[6/*Uno.UX.BundleFileSource*/]))
        __this->LoadBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[6/*Uno.UX.BundleFileSource*/]))->BundleFile, loadedHandler);
    else
        __this->LoadInternal(::g::Fuse::Video::VideoDiskCache::GetFilePath(fileSource), loadedHandler);
}

// public AndroidVideoLoader New(Fuse.Video.LoadedHandler loadedHandler) :354
void AndroidVideoLoader__New1_fn(uDelegate* loadedHandler, AndroidVideoLoader** __retval)
{
    *__retval = AndroidVideoLoader::New1(loadedHandler);
}

// private void OnError(object sender, string msg) :378
void AndroidVideoLoader__OnError_fn(AndroidVideoLoader* __this, uObject* sender, uString* msg)
{
    __this->OnError(sender, msg);
}

// private void OnPrepared(object sender, Uno.EventArgs args) :372
void AndroidVideoLoader__OnPrepared_fn(AndroidVideoLoader* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPrepared(sender, args);
}

// private void UnhookEvents() :366
void AndroidVideoLoader__UnhookEvents_fn(AndroidVideoLoader* __this)
{
    __this->UnhookEvents();
}

// public AndroidVideoLoader(Fuse.Video.LoadedHandler loadedHandler) [instance] :354
void AndroidVideoLoader::ctor_1(uDelegate* loadedHandler)
{
    ctor_(loadedHandler);
    _videoPlayer = ::g::Fuse::Video::Graphics::Android::VideoPlayer::New1();
    HookEvents();
}

// private void HookEvents() [instance] :360
void AndroidVideoLoader::HookEvents()
{
    uPtr(_videoPlayer)->add_Prepared(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)AndroidVideoLoader__OnPrepared_fn, this));
    uPtr(_videoPlayer)->add_Error(uDelegate::New(::TYPES[4/*Uno.EventHandler<string>*/], (void*)AndroidVideoLoader__OnError_fn, this));
}

// private void LoadBundleFile(Uno.BundleFile file, Fuse.Video.LoadedHandler loadedHandler) [instance] :401
void AndroidVideoLoader::LoadBundleFile(::g::Uno::BundleFile* file, uDelegate* loadedHandler)
{
    _loadedHandler1 = loadedHandler;
    ::g::Android::android::content::res::AssetManager* assetManager = uPtr(::g::Android::android::app::Activity::GetAppActivity())->getAssets();
    ::g::Android::android::content::res::AssetFileDescriptor* fileDescriptor = uPtr(assetManager)->openFd(::g::Android::java::lang::String::op_Implicit1(uPtr(file)->Name()));
    uPtr(_videoPlayer)->LoadAsync(fileDescriptor);
}

// private void OnError(object sender, string msg) [instance] :378
void AndroidVideoLoader::OnError(uObject* sender, uString* msg)
{
    UnhookEvents();
    uPtr(_videoPlayer)->Dispose();
    uPtr(_loadedHandler1)->InvokeVoid(::g::Fuse::Video::LoadFailed::New1(msg));
}

// private void OnPrepared(object sender, Uno.EventArgs args) [instance] :372
void AndroidVideoLoader::OnPrepared(uObject* sender, ::g::Uno::EventArgs* args)
{
    UnhookEvents();
    uPtr(_loadedHandler1)->InvokeVoid(::g::Fuse::Video::LoadSucceded::New1((uObject*)_videoPlayer));
}

// private void UnhookEvents() [instance] :366
void AndroidVideoLoader::UnhookEvents()
{
    uPtr(_videoPlayer)->remove_Prepared(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)AndroidVideoLoader__OnPrepared_fn, this));
    uPtr(_videoPlayer)->remove_Error(uDelegate::New(::TYPES[4/*Uno.EventHandler<string>*/], (void*)AndroidVideoLoader__OnError_fn, this));
}

// public AndroidVideoLoader New(Fuse.Video.LoadedHandler loadedHandler) [static] :354
AndroidVideoLoader* AndroidVideoLoader::New1(uDelegate* loadedHandler)
{
    AndroidVideoLoader* obj1 = (AndroidVideoLoader*)uNew(AndroidVideoLoader_typeof());
    obj1->ctor_1(loadedHandler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(93)
// ------------------------------------------------------------------------

// internal sealed extern class CompletionEvent :93
// {
CompletionEvent_type* CompletionEvent_typeof()
{
    static uSStrong<CompletionEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CompletionEvent);
    options.TypeSize = sizeof(CompletionEvent_type);
    type = (CompletionEvent_type*)uClassType::New("Fuse.Video.Graphics.Android.CompletionEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onCompletion = (void(*)(uObject*, ::g::Android::android::media::MediaPlayer*))CompletionEvent__Android_android_media_MediaPlayerDLROnCompletionListener_onCompletion_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))CompletionEvent__Uno_IDisposable_Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[0] = uString::Const("com.Bindings.Binding_Fuse_Video_Graphics_Android_CompletionEvent");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[12] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[13] = ::g::Android::android::media::MediaPlayerDLROnCompletionListener_typeof();
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::EventArgs_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CompletionEvent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CompletionEvent_type, interface1),
        ::g::Android::android::media::MediaPlayerDLROnCompletionListener_typeof(), offsetof(CompletionEvent_type, interface2));
    type->SetFields(5,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::CompletionEvent, _handler), 0,
        ::g::Android::android::media::MediaPlayer_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::CompletionEvent, _mediaPlayer), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Video::Graphics::Android::CompletionEvent::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private CompletionEvent(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) :106
void CompletionEvent__ctor_4_fn(CompletionEvent* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    __this->ctor_4(mediaPlayer, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) :98
void CompletionEvent__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval)
{
    *__retval = CompletionEvent::AddHandler(mediaPlayer, handler);
}

// private void Android.android.media.MediaPlayerDLROnCompletionListener.onCompletion(Android.android.media.MediaPlayer arg0) :113
void CompletionEvent__Android_android_media_MediaPlayerDLROnCompletionListener_onCompletion_fn(CompletionEvent* __this, ::g::Android::android::media::MediaPlayer* arg0)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(2, arg0, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private CompletionEvent New(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) :106
void CompletionEvent__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, CompletionEvent** __retval)
{
    *__retval = CompletionEvent::New5(mediaPlayer, handler);
}

// private void Uno.IDisposable.Dispose() :119
void CompletionEvent__Uno_IDisposable_Dispose1_fn(CompletionEvent* __this)
{
    uPtr(__this->_mediaPlayer)->setOnCompletionListener(NULL);
}

jclass CompletionEvent::_javaClass2_;

// private CompletionEvent(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) [instance] :106
void CompletionEvent::ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[0/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(CompletionEvent::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        CompletionEvent::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onCompletion","(JLandroid/media/MediaPlayer;J)V",Binding_Fuse_Video_Graphics_Android_CompletionEvent__onCompletion9437);
        COMMIT_REG_MTD(CompletionEvent::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _mediaPlayer = mediaPlayer;
    _handler = handler;
    uPtr(_mediaPlayer)->setOnCompletionListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) [static] :98
uObject* CompletionEvent::AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    return (uObject*)CompletionEvent::New5(mediaPlayer, handler);
}

// private CompletionEvent New(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) [static] :106
CompletionEvent* CompletionEvent::New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    CompletionEvent* obj1 = (CompletionEvent*)uNew(CompletionEvent_typeof());
    obj1->ctor_4(mediaPlayer, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(288)
// -------------------------------------------------------------------------

// internal sealed extern class ErrorEvent :288
// {
ErrorEvent_type* ErrorEvent_typeof()
{
    static uSStrong<ErrorEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ErrorEvent);
    options.TypeSize = sizeof(ErrorEvent_type);
    type = (ErrorEvent_type*)uClassType::New("Fuse.Video.Graphics.Android.ErrorEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onError = (void(*)(uObject*, ::g::Android::android::media::MediaPlayer*, int*, int*, bool*))ErrorEvent__Android_android_media_MediaPlayerDLROnErrorListener_onError_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ErrorEvent__Uno_IDisposable_Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[3] = uString::Const("com.Bindings.Binding_Fuse_Video_Graphics_Android_ErrorEvent");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[12] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[18] = ::g::Android::android::media::MediaPlayerDLROnErrorListener_typeof();
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[19] = ::g::Fuse::Video::Graphics::Android::ErrorEventHandler_typeof();
    ::TYPES[16] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ErrorEvent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ErrorEvent_type, interface1),
        ::g::Android::android::media::MediaPlayerDLROnErrorListener_typeof(), offsetof(ErrorEvent_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Video::Graphics::Android::ErrorEventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::ErrorEvent, _handler), 0,
        ::g::Android::android::media::MediaPlayer_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::ErrorEvent, _mediaPlayer), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Video::Graphics::Android::ErrorEvent::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private ErrorEvent(Android.android.media.MediaPlayer mediaPlayer, Fuse.Video.Graphics.Android.ErrorEventHandler handler) :301
void ErrorEvent__ctor_4_fn(ErrorEvent* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    __this->ctor_4(mediaPlayer, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.media.MediaPlayer mediaPlayer, Fuse.Video.Graphics.Android.ErrorEventHandler handler) :293
void ErrorEvent__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval)
{
    *__retval = ErrorEvent::AddHandler(mediaPlayer, handler);
}

// private bool Android.android.media.MediaPlayerDLROnErrorListener.onError(Android.android.media.MediaPlayer arg0, int arg1, int arg2) :308
void ErrorEvent__Android_android_media_MediaPlayerDLROnErrorListener_onError_fn(ErrorEvent* __this, ::g::Android::android::media::MediaPlayer* arg0, int* arg1, int* arg2, bool* __retval)
{
    bool ret2;
    int arg1_ = *arg1;
    int arg2_ = *arg2;

    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        return *__retval = (uPtr(__this->_handler)->Invoke(&ret2, 2, arg0, (::g::Fuse::Video::Graphics::Android::ErrorEventArgs*)::g::Fuse::Video::Graphics::Android::ErrorEventArgs::New2(arg1_, arg2_)), ret2), void();

    return *__retval = false, void();
}

// private ErrorEvent New(Android.android.media.MediaPlayer mediaPlayer, Fuse.Video.Graphics.Android.ErrorEventHandler handler) :301
void ErrorEvent__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, ErrorEvent** __retval)
{
    *__retval = ErrorEvent::New5(mediaPlayer, handler);
}

// private void Uno.IDisposable.Dispose() :315
void ErrorEvent__Uno_IDisposable_Dispose1_fn(ErrorEvent* __this)
{
    uPtr(__this->_mediaPlayer)->setOnErrorListener(NULL);
}

jclass ErrorEvent::_javaClass2_;

// private ErrorEvent(Android.android.media.MediaPlayer mediaPlayer, Fuse.Video.Graphics.Android.ErrorEventHandler handler) [instance] :301
void ErrorEvent::ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[3/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(ErrorEvent::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        ErrorEvent::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[3/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onError","(JLandroid/media/MediaPlayer;IIJJJ)Z",Binding_Fuse_Video_Graphics_Android_ErrorEvent__onError9438);
        COMMIT_REG_MTD(ErrorEvent::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _mediaPlayer = mediaPlayer;
    _handler = handler;
    uPtr(_mediaPlayer)->setOnErrorListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.media.MediaPlayer mediaPlayer, Fuse.Video.Graphics.Android.ErrorEventHandler handler) [static] :293
uObject* ErrorEvent::AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    return (uObject*)ErrorEvent::New5(mediaPlayer, handler);
}

// private ErrorEvent New(Android.android.media.MediaPlayer mediaPlayer, Fuse.Video.Graphics.Android.ErrorEventHandler handler) [static] :301
ErrorEvent* ErrorEvent::New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    ErrorEvent* obj1 = (ErrorEvent*)uNew(ErrorEvent_typeof());
    obj1->ctor_4(mediaPlayer, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(233)
// -------------------------------------------------------------------------

// internal sealed extern class ErrorEventArgs :233
// {
uType* ErrorEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ErrorEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.Graphics.Android.ErrorEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_ToString = (void(*)(uObject*, uString**))ErrorEventArgs__ToString_fn;
    ::STRINGS[4] = uString::Const("MEDIA_ERROR_UNKNOWN");
    ::STRINGS[5] = uString::Const("MEDIA_ERROR_SERVER_DIED");
    ::STRINGS[6] = uString::Const("UNKNOWN");
    ::STRINGS[7] = uString::Const("MEDIA_ERROR_IO");
    ::STRINGS[8] = uString::Const("MEDIA_ERROR_MALFORMED");
    ::STRINGS[9] = uString::Const("MEDIA_ERROR_UNSUPPORTED");
    ::STRINGS[10] = uString::Const("MEDIA_ERROR_TIMED_OUT");
    ::STRINGS[11] = uString::Const(" : ");
    ::TYPES[20] = ::g::Android::android::media::MediaPlayer_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::ErrorEventArgs, _ErrorReason), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::ErrorEventArgs, _ErrorType), 0);
    return type;
}

// public ErrorEventArgs(int errorReason, int errorType) :238
void ErrorEventArgs__ctor_1_fn(ErrorEventArgs* __this, int* errorReason, int* errorType)
{
    __this->ctor_1(*errorReason, *errorType);
}

// public generated int get_ErrorReason() :235
void ErrorEventArgs__get_ErrorReason_fn(ErrorEventArgs* __this, int* __retval)
{
    *__retval = __this->ErrorReason();
}

// private generated void set_ErrorReason(int value) :235
void ErrorEventArgs__set_ErrorReason_fn(ErrorEventArgs* __this, int* value)
{
    __this->ErrorReason(*value);
}

// public generated int get_ErrorType() :236
void ErrorEventArgs__get_ErrorType_fn(ErrorEventArgs* __this, int* __retval)
{
    *__retval = __this->ErrorType();
}

// private generated void set_ErrorType(int value) :236
void ErrorEventArgs__set_ErrorType_fn(ErrorEventArgs* __this, int* value)
{
    __this->ErrorType(*value);
}

// private static string GetReason(int reason) :253
void ErrorEventArgs__GetReason_fn(int* reason, uString** __retval)
{
    *__retval = ErrorEventArgs::GetReason(*reason);
}

// private static string GetType(int type) :265
void ErrorEventArgs__GetType1_fn(int* type, uString** __retval)
{
    *__retval = ErrorEventArgs::GetType1(*type);
}

// public ErrorEventArgs New(int errorReason, int errorType) :238
void ErrorEventArgs__New2_fn(int* errorReason, int* errorType, ErrorEventArgs** __retval)
{
    *__retval = ErrorEventArgs::New2(*errorReason, *errorType);
}

// public override sealed string ToString() :244
void ErrorEventArgs__ToString_fn(ErrorEventArgs* __this, uString** __retval)
{
    ::g::Uno::Text::StringBuilder* message = ::g::Uno::Text::StringBuilder::New1();
    message->Append1(ErrorEventArgs::GetReason(__this->ErrorReason()));
    message->Append1(::STRINGS[11/*" : "*/]);
    message->AppendLine(ErrorEventArgs::GetType1(__this->ErrorType()));
    return *__retval = message->ToString(), void();
}

// public ErrorEventArgs(int errorReason, int errorType) [instance] :238
void ErrorEventArgs::ctor_1(int errorReason, int errorType)
{
    ctor_();
    ErrorReason(errorReason);
    ErrorType(errorType);
}

// public generated int get_ErrorReason() [instance] :235
int ErrorEventArgs::ErrorReason()
{
    return _ErrorReason;
}

// private generated void set_ErrorReason(int value) [instance] :235
void ErrorEventArgs::ErrorReason(int value)
{
    _ErrorReason = value;
}

// public generated int get_ErrorType() [instance] :236
int ErrorEventArgs::ErrorType()
{
    return _ErrorType;
}

// private generated void set_ErrorType(int value) [instance] :236
void ErrorEventArgs::ErrorType(int value)
{
    _ErrorType = value;
}

// private static string GetReason(int reason) [static] :253
uString* ErrorEventArgs::GetReason(int reason)
{
    if (reason == ::g::Android::android::media::MediaPlayer::MEDIA_ERROR_UNKNOWN())
        return ::STRINGS[4/*"MEDIA_ERROR...*/];
    else if (reason == ::g::Android::android::media::MediaPlayer::MEDIA_ERROR_SERVER_DIED())
        return ::STRINGS[5/*"MEDIA_ERROR...*/];
    else
        return ::STRINGS[6/*"UNKNOWN"*/];
}

// private static string GetType(int type) [static] :265
uString* ErrorEventArgs::GetType1(int type)
{
    if (type == ::g::Android::android::media::MediaPlayer::MEDIA_ERROR_IO())
        return ::STRINGS[7/*"MEDIA_ERROR...*/];
    else if (type == ::g::Android::android::media::MediaPlayer::MEDIA_ERROR_MALFORMED())
        return ::STRINGS[8/*"MEDIA_ERROR...*/];
    else if (type == ::g::Android::android::media::MediaPlayer::MEDIA_ERROR_UNSUPPORTED())
        return ::STRINGS[9/*"MEDIA_ERROR...*/];
    else if (type == ::g::Android::android::media::MediaPlayer::MEDIA_ERROR_TIMED_OUT())
        return ::STRINGS[10/*"MEDIA_ERROR...*/];
    else
        return ::STRINGS[6/*"UNKNOWN"*/];
}

// public ErrorEventArgs New(int errorReason, int errorType) [static] :238
ErrorEventArgs* ErrorEventArgs::New2(int errorReason, int errorType)
{
    ErrorEventArgs* obj1 = (ErrorEventArgs*)uNew(ErrorEventArgs_typeof());
    obj1->ctor_1(errorReason, errorType);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(286)
// -------------------------------------------------------------------------

// internal extern delegate bool ErrorEventHandler(object sender, Fuse.Video.Graphics.Android.ErrorEventArgs args) :286
uDelegateType* ErrorEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Video.Graphics.Android.ErrorEventHandler", 2, 0);
    type->SetSignature(::g::Uno::Bool_typeof(),
        uObject_typeof(),
        ::g::Fuse::Video::Graphics::Android::ErrorEventArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(27)
// ------------------------------------------------------------------------

// internal sealed extern class FrameAvailableEvent :27
// {
FrameAvailableEvent_type* FrameAvailableEvent_typeof()
{
    static uSStrong<FrameAvailableEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FrameAvailableEvent);
    options.TypeSize = sizeof(FrameAvailableEvent_type);
    type = (FrameAvailableEvent_type*)uClassType::New("Fuse.Video.Graphics.Android.FrameAvailableEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onFrameAvailable = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*))FrameAvailableEvent__Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_onFrameAvailable_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))FrameAvailableEvent__Uno_IDisposable_Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[12] = uString::Const("com.Bindings.Binding_Fuse_Video_Graphics_Android_FrameAvailableEvent");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[12] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[21] = ::g::Android::android::graphics::SurfaceTextureDLROnFrameAvailableListener_typeof();
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::EventArgs_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(FrameAvailableEvent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(FrameAvailableEvent_type, interface1),
        ::g::Android::android::graphics::SurfaceTextureDLROnFrameAvailableListener_typeof(), offsetof(FrameAvailableEvent_type, interface2));
    type->SetFields(5,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::FrameAvailableEvent, _handler), 0,
        ::g::Android::android::graphics::SurfaceTexture_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::FrameAvailableEvent, _surfaceTexture), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Video::Graphics::Android::FrameAvailableEvent::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private FrameAvailableEvent(Android.android.graphics.SurfaceTexture surfaceTexture, Uno.EventHandler handler) :40
void FrameAvailableEvent__ctor_4_fn(FrameAvailableEvent* __this, ::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler)
{
    __this->ctor_4(surfaceTexture, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.graphics.SurfaceTexture surfaceTexture, Uno.EventHandler handler) :32
void FrameAvailableEvent__AddHandler_fn(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler, uObject** __retval)
{
    *__retval = FrameAvailableEvent::AddHandler(surfaceTexture, handler);
}

// private void Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.onFrameAvailable(Android.android.graphics.SurfaceTexture arg0) :47
void FrameAvailableEvent__Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_onFrameAvailable_fn(FrameAvailableEvent* __this, ::g::Android::android::graphics::SurfaceTexture* arg0)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(2, arg0, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private FrameAvailableEvent New(Android.android.graphics.SurfaceTexture surfaceTexture, Uno.EventHandler handler) :40
void FrameAvailableEvent__New5_fn(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler, FrameAvailableEvent** __retval)
{
    *__retval = FrameAvailableEvent::New5(surfaceTexture, handler);
}

// private void Uno.IDisposable.Dispose() :54
void FrameAvailableEvent__Uno_IDisposable_Dispose1_fn(FrameAvailableEvent* __this)
{
    uPtr(__this->_surfaceTexture)->setOnFrameAvailableListener(NULL);
}

jclass FrameAvailableEvent::_javaClass2_;

// private FrameAvailableEvent(Android.android.graphics.SurfaceTexture surfaceTexture, Uno.EventHandler handler) [instance] :40
void FrameAvailableEvent::ctor_4(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[12/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(FrameAvailableEvent::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        FrameAvailableEvent::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[12/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onFrameAvailable","(JLandroid/graphics/SurfaceTexture;J)V",Binding_Fuse_Video_Graphics_Android_FrameAvailableEvent__onFrameAvailable7295);
        COMMIT_REG_MTD(FrameAvailableEvent::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _surfaceTexture = surfaceTexture;
    _handler = handler;
    uPtr(_surfaceTexture)->setOnFrameAvailableListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.graphics.SurfaceTexture surfaceTexture, Uno.EventHandler handler) [static] :32
uObject* FrameAvailableEvent::AddHandler(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler)
{
    return (uObject*)FrameAvailableEvent::New5(surfaceTexture, handler);
}

// private FrameAvailableEvent New(Android.android.graphics.SurfaceTexture surfaceTexture, Uno.EventHandler handler) [static] :40
FrameAvailableEvent* FrameAvailableEvent::New5(::g::Android::android::graphics::SurfaceTexture* surfaceTexture, uDelegate* handler)
{
    FrameAvailableEvent* obj1 = (FrameAvailableEvent*)uNew(FrameAvailableEvent_typeof());
    obj1->ctor_4(surfaceTexture, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(61)
// ------------------------------------------------------------------------

// internal sealed extern class PreparedEvent :61
// {
PreparedEvent_type* PreparedEvent_typeof()
{
    static uSStrong<PreparedEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(PreparedEvent);
    options.TypeSize = sizeof(PreparedEvent_type);
    type = (PreparedEvent_type*)uClassType::New("Fuse.Video.Graphics.Android.PreparedEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onPrepared = (void(*)(uObject*, ::g::Android::android::media::MediaPlayer*))PreparedEvent__Android_android_media_MediaPlayerDLROnPreparedListener_onPrepared_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))PreparedEvent__Uno_IDisposable_Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[13] = uString::Const("com.Bindings.Binding_Fuse_Video_Graphics_Android_PreparedEvent");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[12] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[22] = ::g::Android::android::media::MediaPlayerDLROnPreparedListener_typeof();
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::EventArgs_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(PreparedEvent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(PreparedEvent_type, interface1),
        ::g::Android::android::media::MediaPlayerDLROnPreparedListener_typeof(), offsetof(PreparedEvent_type, interface2));
    type->SetFields(5,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::PreparedEvent, _handler), 0,
        ::g::Android::android::media::MediaPlayer_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::PreparedEvent, _mediaPlayer), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Video::Graphics::Android::PreparedEvent::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private PreparedEvent(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) :74
void PreparedEvent__ctor_4_fn(PreparedEvent* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    __this->ctor_4(mediaPlayer, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) :66
void PreparedEvent__AddHandler_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, uObject** __retval)
{
    *__retval = PreparedEvent::AddHandler(mediaPlayer, handler);
}

// private void Android.android.media.MediaPlayerDLROnPreparedListener.onPrepared(Android.android.media.MediaPlayer arg0) :81
void PreparedEvent__Android_android_media_MediaPlayerDLROnPreparedListener_onPrepared_fn(PreparedEvent* __this, ::g::Android::android::media::MediaPlayer* arg0)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(2, arg0, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private PreparedEvent New(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) :74
void PreparedEvent__New5_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler, PreparedEvent** __retval)
{
    *__retval = PreparedEvent::New5(mediaPlayer, handler);
}

// private void Uno.IDisposable.Dispose() :87
void PreparedEvent__Uno_IDisposable_Dispose1_fn(PreparedEvent* __this)
{
    uPtr(__this->_mediaPlayer)->setOnPreparedListener(NULL);
}

jclass PreparedEvent::_javaClass2_;

// private PreparedEvent(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) [instance] :74
void PreparedEvent::ctor_4(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[13/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(PreparedEvent::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        PreparedEvent::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[13/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onPrepared","(JLandroid/media/MediaPlayer;J)V",Binding_Fuse_Video_Graphics_Android_PreparedEvent__onPrepared9440);
        COMMIT_REG_MTD(PreparedEvent::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _mediaPlayer = mediaPlayer;
    _handler = handler;
    uPtr(_mediaPlayer)->setOnPreparedListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) [static] :66
uObject* PreparedEvent::AddHandler(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    return (uObject*)PreparedEvent::New5(mediaPlayer, handler);
}

// private PreparedEvent New(Android.android.media.MediaPlayer mediaPlayer, Uno.EventHandler handler) [static] :74
PreparedEvent* PreparedEvent::New5(::g::Android::android::media::MediaPlayer* mediaPlayer, uDelegate* handler)
{
    PreparedEvent* obj1 = (PreparedEvent*)uNew(PreparedEvent_typeof());
    obj1->ctor_4(mediaPlayer, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(417)
// -------------------------------------------------------------------------

// internal sealed extern class VideoPlayer :417
// {
VideoPlayer_type* VideoPlayer_typeof()
{
    static uSStrong<VideoPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VideoPlayer);
    options.TypeSize = sizeof(VideoPlayer_type);
    type = (VideoPlayer_type*)uClassType::New("Fuse.Video.Graphics.Android.VideoPlayer", options);
    type->fp_ctor_ = (void*)VideoPlayer__New1_fn;
    type->interface0.fp_Update = (void(*)(uObject*))VideoPlayer__Update_fn;
    type->interface0.fp_Play = (void(*)(uObject*))VideoPlayer__Play_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))VideoPlayer__Pause_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))VideoPlayer__get_VideoTexture_fn;
    type->interface0.fp_get_IsPlaying = (void(*)(uObject*, bool*))VideoPlayer__get_IsPlaying_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))VideoPlayer__get_Size_fn;
    type->interface0.fp_get_Volume = (void(*)(uObject*, float*))VideoPlayer__get_Volume_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))VideoPlayer__set_Volume_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))VideoPlayer__get_Duration_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))VideoPlayer__get_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))VideoPlayer__set_Position_fn;
    type->interface0.fp_get_IsLooping = (void(*)(uObject*, bool*))VideoPlayer__get_IsLooping_fn;
    type->interface0.fp_set_IsLooping = (void(*)(uObject*, bool*))VideoPlayer__set_IsLooping_fn;
    type->interface0.fp_get_Flip = (void(*)(uObject*, bool*))VideoPlayer__get_Flip_fn;
    type->interface0.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))VideoPlayer__add_FrameAvailable_fn;
    type->interface0.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_FrameAvailable_fn;
    type->interface0.fp_add_Completed = (void(*)(uObject*, uDelegate*))VideoPlayer__add_Completed_fn;
    type->interface0.fp_remove_Completed = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_Completed_fn;
    type->interface0.fp_add_Error = (void(*)(uObject*, uDelegate*))VideoPlayer__add_Error_fn;
    type->interface0.fp_remove_Error = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_Error_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))VideoPlayer__Dispose_fn;
    ::TYPES[0] = ::g::Android::android::media::AudioManager_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Video::Graphics::Android::ErrorEventHandler_typeof();
    ::TYPES[23] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[24] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Uno::Delegate_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::EventArgs_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[25] = ::g::Fuse::Video::Graphics::Android::VideoSurface_typeof();
    ::TYPES[26] = ::g::Uno::Double_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Video::IVideoPlayer_typeof(), offsetof(VideoPlayer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(VideoPlayer_type, interface1));
    type->SetFields(0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _completionEvent), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _errorEvent), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _isPaused), 0,
        ::g::Android::android::media::MediaPlayer_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _mediaPlayer), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _preparedEvent), 0,
        ::g::Fuse::Video::Graphics::Android::VideoSurface_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _videoSurface), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _volume), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, _IsLooping), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, Completed1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, Error1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, FrameAvailable1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoPlayer, Prepared1), 0);
    return type;
}

// public VideoPlayer() :484
void VideoPlayer__ctor__fn(VideoPlayer* __this)
{
    __this->ctor_();
}

// public generated void add_Completed(Uno.EventHandler value) :471
void VideoPlayer__add_Completed_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_Completed(value);
}

// public generated void remove_Completed(Uno.EventHandler value) :471
void VideoPlayer__remove_Completed_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_Completed(value);
}

// public void Dispose() :605
void VideoPlayer__Dispose_fn(VideoPlayer* __this)
{
    __this->Dispose();
}

// public double get_Duration() :427
void VideoPlayer__get_Duration_fn(VideoPlayer* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void add_Error(Uno.EventHandler<string> value) :473
void VideoPlayer__add_Error_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.EventHandler<string> value) :473
void VideoPlayer__remove_Error_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public bool get_Flip() :422
void VideoPlayer__get_Flip_fn(VideoPlayer* __this, bool* __retval)
{
    *__retval = __this->Flip();
}

// public generated void add_FrameAvailable(Uno.EventHandler value) :467
void VideoPlayer__add_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_FrameAvailable(value);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) :467
void VideoPlayer__remove_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_FrameAvailable(value);
}

// public generated bool get_IsLooping() :465
void VideoPlayer__get_IsLooping_fn(VideoPlayer* __this, bool* __retval)
{
    *__retval = __this->IsLooping();
}

// public generated void set_IsLooping(bool value) :465
void VideoPlayer__set_IsLooping_fn(VideoPlayer* __this, bool* value)
{
    __this->IsLooping(*value);
}

// public bool get_IsPlaying() :454
void VideoPlayer__get_IsPlaying_fn(VideoPlayer* __this, bool* __retval)
{
    *__retval = __this->IsPlaying();
}

// public void LoadAsync(Android.android.content.res.AssetFileDescriptor afd) :511
void VideoPlayer__LoadAsync_fn(VideoPlayer* __this, ::g::Android::android::content::res::AssetFileDescriptor* afd)
{
    __this->LoadAsync(afd);
}

// public void LoadAsync(string url) :518
void VideoPlayer__LoadAsync1_fn(VideoPlayer* __this, uString* url)
{
    __this->LoadAsync1(url);
}

// public VideoPlayer New() :484
void VideoPlayer__New1_fn(VideoPlayer** __retval)
{
    *__retval = VideoPlayer::New1();
}

// private void OnCompletion(object sender, Uno.EventArgs args) :531
void VideoPlayer__OnCompletion_fn(VideoPlayer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnCompletion(sender, args);
}

// private void OnEnteringBackground(Uno.Platform2.ApplicationState args) :505
void VideoPlayer__OnEnteringBackground_fn(VideoPlayer* __this, int* args)
{
    __this->OnEnteringBackground(*args);
}

// private void OnEnteringForeground(Uno.Platform2.ApplicationState args) :499
void VideoPlayer__OnEnteringForeground_fn(VideoPlayer* __this, int* args)
{
    __this->OnEnteringForeground(*args);
}

// private bool OnError(object sender, Fuse.Video.Graphics.Android.ErrorEventArgs args) :546
void VideoPlayer__OnError_fn(VideoPlayer* __this, uObject* sender, ::g::Fuse::Video::Graphics::Android::ErrorEventArgs* args, bool* __retval)
{
    *__retval = __this->OnError(sender, args);
}

// private void OnFrameAvailable() :553
void VideoPlayer__OnFrameAvailable_fn(VideoPlayer* __this)
{
    __this->OnFrameAvailable();
}

// private void OnPrepared(object sender, Uno.EventArgs args) :525
void VideoPlayer__OnPrepared_fn(VideoPlayer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPrepared(sender, args);
}

// public void Pause() :580
void VideoPlayer__Pause_fn(VideoPlayer* __this)
{
    __this->Pause();
}

// public void Play() :559
void VideoPlayer__Play_fn(VideoPlayer* __this)
{
    __this->Play();
}

// public double get_Position() :437
void VideoPlayer__get_Position_fn(VideoPlayer* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :438
void VideoPlayer__set_Position_fn(VideoPlayer* __this, double* value)
{
    __this->Position(*value);
}

// public generated void add_Prepared(Uno.EventHandler value) :469
void VideoPlayer__add_Prepared_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_Prepared(value);
}

// public generated void remove_Prepared(Uno.EventHandler value) :469
void VideoPlayer__remove_Prepared_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_Prepared(value);
}

// public int2 get_Size() :432
void VideoPlayer__get_Size_fn(VideoPlayer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public void Update() :595
void VideoPlayer__Update_fn(VideoPlayer* __this)
{
    __this->Update();
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :592
void VideoPlayer__get_VideoTexture_fn(VideoPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// public float get_Volume() :444
void VideoPlayer__get_Volume_fn(VideoPlayer* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :445
void VideoPlayer__set_Volume_fn(VideoPlayer* __this, float* value)
{
    __this->Volume(*value);
}

// public VideoPlayer() [instance] :484
void VideoPlayer::ctor_()
{
    _volume = 1.0f;
    _mediaPlayer = ::g::Android::android::media::MediaPlayer::New5();
    uPtr(_mediaPlayer)->setAudioStreamType(::g::Android::android::media::AudioManager::STREAM_MUSIC());
    _preparedEvent = ::g::Fuse::Video::Graphics::Android::PreparedEvent::AddHandler(_mediaPlayer, uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)VideoPlayer__OnPrepared_fn, this));
    _completionEvent = ::g::Fuse::Video::Graphics::Android::CompletionEvent::AddHandler(_mediaPlayer, uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)VideoPlayer__OnCompletion_fn, this));
    _errorEvent = ::g::Fuse::Video::Graphics::Android::ErrorEvent::AddHandler(_mediaPlayer, uDelegate::New(::TYPES[19/*Fuse.Video.Graphics.Android.ErrorEventHandler*/], (void*)VideoPlayer__OnError_fn, this));
    _videoSurface = ::g::Fuse::Video::Graphics::Android::VideoSurface::Create(_mediaPlayer);
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[24/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)VideoPlayer__OnEnteringForeground_fn, this));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[24/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)VideoPlayer__OnEnteringBackground_fn, this));
}

// public generated void add_Completed(Uno.EventHandler value) [instance] :471
void VideoPlayer::add_Completed(uDelegate* value)
{
    Completed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Completed1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_Completed(Uno.EventHandler value) [instance] :471
void VideoPlayer::remove_Completed(uDelegate* value)
{
    Completed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Completed1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public void Dispose() [instance] :605
void VideoPlayer::Dispose()
{
    if (!_isDisposed)
    {
        ::g::Uno::Platform2::Application::remove_EnteringForeground(uDelegate::New(::TYPES[24/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)VideoPlayer__OnEnteringForeground_fn, this));
        ::g::Uno::Platform2::Application::remove_EnteringBackground(uDelegate::New(::TYPES[24/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)VideoPlayer__OnEnteringBackground_fn, this));
        uPtr(_mediaPlayer)->reset();
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_errorEvent), ::TYPES[14/*Uno.IDisposable*/]));
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_preparedEvent), ::TYPES[14/*Uno.IDisposable*/]));
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_completionEvent), ::TYPES[14/*Uno.IDisposable*/]));
        uPtr(_videoSurface)->Dispose();
        uPtr(_mediaPlayer)->release();
        _isDisposed = true;
    }
}

// public double get_Duration() [instance] :427
double VideoPlayer::Duration()
{
    return (double)uPtr(_mediaPlayer)->getDuration() / 1000.0;
}

// public generated void add_Error(Uno.EventHandler<string> value) [instance] :473
void VideoPlayer::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[4/*Uno.EventHandler<string>*/]);
}

// public generated void remove_Error(Uno.EventHandler<string> value) [instance] :473
void VideoPlayer::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[4/*Uno.EventHandler<string>*/]);
}

// public bool get_Flip() [instance] :422
bool VideoPlayer::Flip()
{
    return false;
}

// public generated void add_FrameAvailable(Uno.EventHandler value) [instance] :467
void VideoPlayer::add_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameAvailable1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) [instance] :467
void VideoPlayer::remove_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameAvailable1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated bool get_IsLooping() [instance] :465
bool VideoPlayer::IsLooping()
{
    return _IsLooping;
}

// public generated void set_IsLooping(bool value) [instance] :465
void VideoPlayer::IsLooping(bool value)
{
    _IsLooping = value;
}

// public bool get_IsPlaying() [instance] :454
bool VideoPlayer::IsPlaying()
{
    return uPtr(_mediaPlayer)->isPlaying();
}

// public void LoadAsync(Android.android.content.res.AssetFileDescriptor afd) [instance] :511
void VideoPlayer::LoadAsync(::g::Android::android::content::res::AssetFileDescriptor* afd)
{
    uPtr(_mediaPlayer)->reset();
    uPtr(_mediaPlayer)->setDataSource3(uPtr(afd)->getFileDescriptor(), uPtr(afd)->getStartOffset(), uPtr(afd)->getLength());
    uPtr(_mediaPlayer)->prepareAsync();
}

// public void LoadAsync(string url) [instance] :518
void VideoPlayer::LoadAsync1(uString* url)
{
    uPtr(_mediaPlayer)->reset();
    uPtr(_mediaPlayer)->setDataSource4(::g::Android::java::lang::String::op_Implicit1(url));
    uPtr(_mediaPlayer)->prepareAsync();
}

// private void OnCompletion(object sender, Uno.EventArgs args) [instance] :531
void VideoPlayer::OnCompletion(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (IsLooping())
    {
        Pause();
        Position(0.0);
        Play();
    }
    else
    {
        if (::g::Uno::Delegate::op_Inequality(Completed1, NULL))
            uPtr(Completed1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
}

// private void OnEnteringBackground(Uno.Platform2.ApplicationState args) [instance] :505
void VideoPlayer::OnEnteringBackground(int args)
{
    if (uPtr(_mediaPlayer)->isPlaying())
        Pause();
}

// private void OnEnteringForeground(Uno.Platform2.ApplicationState args) [instance] :499
void VideoPlayer::OnEnteringForeground(int args)
{
    if (_isPaused)
        Play();
}

// private bool OnError(object sender, Fuse.Video.Graphics.Android.ErrorEventArgs args) [instance] :546
bool VideoPlayer::OnError(uObject* sender, ::g::Fuse::Video::Graphics::Android::ErrorEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, (uString*)uPtr(args)->ToString());

    return false;
}

// private void OnFrameAvailable() [instance] :553
void VideoPlayer::OnFrameAvailable()
{
    if (::g::Uno::Delegate::op_Inequality(FrameAvailable1, NULL))
        uPtr(FrameAvailable1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnPrepared(object sender, Uno.EventArgs args) [instance] :525
void VideoPlayer::OnPrepared(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Prepared1, NULL))
        uPtr(Prepared1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Pause() [instance] :580
void VideoPlayer::Pause()
{
    if (uPtr(_mediaPlayer)->isPlaying())
    {
        ::g::Fuse::Video::Graphics::Android::AndroidAudioHelpers::ReleaseAudioFocus();
        _isPaused = true;
        uPtr(_mediaPlayer)->pause();
    }
}

// public void Play() [instance] :559
void VideoPlayer::Play()
{
    if (!uPtr(_mediaPlayer)->isPlaying())
    {
        ::g::Fuse::Video::Graphics::Android::AndroidAudioHelpers::GetAudioFocus();
        _isPaused = false;
        uPtr(_mediaPlayer)->start();
    }
}

// public double get_Position() [instance] :437
double VideoPlayer::Position()
{
    return (double)uPtr(_mediaPlayer)->getCurrentPosition() / 1000.0;
}

// public void set_Position(double value) [instance] :438
void VideoPlayer::Position(double value)
{
    uPtr(_mediaPlayer)->seekTo((int)value * 1000);
}

// public generated void add_Prepared(Uno.EventHandler value) [instance] :469
void VideoPlayer::add_Prepared(uDelegate* value)
{
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Prepared1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_Prepared(Uno.EventHandler value) [instance] :469
void VideoPlayer::remove_Prepared(uDelegate* value)
{
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Prepared1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public int2 get_Size() [instance] :432
::g::Uno::Int2 VideoPlayer::Size()
{
    return ::g::Uno::Int2__New2(uPtr(_mediaPlayer)->getVideoWidth(), uPtr(_mediaPlayer)->getVideoHeight());
}

// public void Update() [instance] :595
void VideoPlayer::Update()
{
    if (uPtr(_videoSurface)->FrameAvailable())
    {
        uPtr(_videoSurface)->UpdateTexture();
        OnFrameAvailable();
    }
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :592
::g::Uno::Graphics::VideoTexture* VideoPlayer::VideoTexture()
{
    return uPtr(_videoSurface)->VideoTexture();
}

// public float get_Volume() [instance] :444
float VideoPlayer::Volume()
{
    return _volume;
}

// public void set_Volume(float value) [instance] :445
void VideoPlayer::Volume(float value)
{
    _volume = ::g::Uno::Math::Clamp1(value, 0.0f, 1.0f);
    uPtr(_mediaPlayer)->setVolume(_volume, _volume);
}

// public VideoPlayer New() [static] :484
VideoPlayer* VideoPlayer::New1()
{
    VideoPlayer* obj1 = (VideoPlayer*)uNew(VideoPlayer_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Video\0.19.3\Graphics\Android\$.uno(644)
// -------------------------------------------------------------------------

// internal sealed extern class VideoSurface :644
// {
VideoSurface_type* VideoSurface_typeof()
{
    static uSStrong<VideoSurface_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoSurface);
    options.TypeSize = sizeof(VideoSurface_type);
    type = (VideoSurface_type*)uClassType::New("Fuse.Video.Graphics.Android.VideoSurface", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))VideoSurface__Dispose_fn;
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(VideoSurface_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoSurface, _frameAvailable), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoSurface, _frameAvailableListener), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoSurface, _isDisposed), 0,
        ::g::Android::android::media::MediaPlayer_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoSurface, _mediaPlayer), 0,
        ::g::Android::android::view::Surface_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoSurface, _surface), 0,
        ::g::Android::android::graphics::SurfaceTexture_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoSurface, _surfaceTexture), 0,
        ::g::Uno::Graphics::VideoTexture_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoSurface, _videoTexture), 0);
    return type;
}

// private VideoSurface(Android.android.media.MediaPlayer mediaPlayer) :680
void VideoSurface__ctor__fn(VideoSurface* __this, ::g::Android::android::media::MediaPlayer* mediaPlayer)
{
    __this->ctor_(mediaPlayer);
}

// public static Fuse.Video.Graphics.Android.VideoSurface Create(Android.android.media.MediaPlayer mediaPlayer) :647
void VideoSurface__Create_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, VideoSurface** __retval)
{
    *__retval = VideoSurface::Create(mediaPlayer);
}

// public void Dispose() :707
void VideoSurface__Dispose_fn(VideoSurface* __this)
{
    __this->Dispose();
}

// public bool get_FrameAvailable() :656
void VideoSurface__get_FrameAvailable_fn(VideoSurface* __this, bool* __retval)
{
    *__retval = __this->FrameAvailable();
}

// private VideoSurface New(Android.android.media.MediaPlayer mediaPlayer) :680
void VideoSurface__New1_fn(::g::Android::android::media::MediaPlayer* mediaPlayer, VideoSurface** __retval)
{
    *__retval = VideoSurface::New1(mediaPlayer);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) :701
void VideoSurface__OnFrameAvailable_fn(VideoSurface* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFrameAvailable(sender, args);
}

// public void UpdateTexture() :691
void VideoSurface__UpdateTexture_fn(VideoSurface* __this)
{
    __this->UpdateTexture();
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :652
void VideoSurface__get_VideoTexture_fn(VideoSurface* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// private VideoSurface(Android.android.media.MediaPlayer mediaPlayer) [instance] :680
void VideoSurface::ctor_(::g::Android::android::media::MediaPlayer* mediaPlayer)
{
    _mediaPlayer = mediaPlayer;
    uint32_t glHandle = ::g::OpenGL::GL::CreateTexture();
    _videoTexture = ::g::Uno::Graphics::VideoTexture::New1(glHandle);
    _surfaceTexture = ::g::Android::android::graphics::SurfaceTexture::New6(::g::OpenGL::GLTextureHandle::op_Explicit1(glHandle));
    _surface = ::g::Android::android::view::Surface::New5(_surfaceTexture);
    _frameAvailableListener = ::g::Fuse::Video::Graphics::Android::FrameAvailableEvent::AddHandler(_surfaceTexture, uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)VideoSurface__OnFrameAvailable_fn, this));
    uPtr(_mediaPlayer)->setSurface(_surface);
}

// public void Dispose() [instance] :707
void VideoSurface::Dispose()
{
    if (!_isDisposed)
    {
        uPtr(_mediaPlayer)->setSurface(NULL);
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_frameAvailableListener), ::TYPES[14/*Uno.IDisposable*/]));
        uPtr(_surface)->release();
        uPtr(_surfaceTexture)->release();
        uPtr(_videoTexture)->Dispose();
        _isDisposed = true;
    }
}

// public bool get_FrameAvailable() [instance] :656
bool VideoSurface::FrameAvailable()
{
    return _frameAvailable;
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) [instance] :701
void VideoSurface::OnFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args)
{
    _frameAvailable = true;
}

// public void UpdateTexture() [instance] :691
void VideoSurface::UpdateTexture()
{
    if (_frameAvailable)
    {
        uPtr(_surfaceTexture)->updateTexImage();
        _frameAvailable = false;
    }
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :652
::g::Uno::Graphics::VideoTexture* VideoSurface::VideoTexture()
{
    return _videoTexture;
}

// public static Fuse.Video.Graphics.Android.VideoSurface Create(Android.android.media.MediaPlayer mediaPlayer) [static] :647
VideoSurface* VideoSurface::Create(::g::Android::android::media::MediaPlayer* mediaPlayer)
{
    return VideoSurface::New1(mediaPlayer);
}

// private VideoSurface New(Android.android.media.MediaPlayer mediaPlayer) [static] :680
VideoSurface* VideoSurface::New1(::g::Android::android::media::MediaPlayer* mediaPlayer)
{
    VideoSurface* obj1 = (VideoSurface*)uNew(VideoSurface_typeof());
    obj1->ctor_(mediaPlayer);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
