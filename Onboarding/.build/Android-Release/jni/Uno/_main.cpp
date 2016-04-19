// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Targets\CPlusPlus\Source\Uno\_main.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Xli/Managed.h>
#include <XliGL.h>
#include <XliPlatform.h>
#include <Uno/Support.h>
#include <Uno.Exception.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.Application.h>

/**
    \addtogroup Main
    @{
*/
Xli::Window* uXliWindowPtr;
Xli::GLContext* uXliGLContextPtr;

class uApplication : public Xli::Application
{
    Xli::Managed<Xli::GLContext> _gl;

public:
    virtual Xli::String GetInitTitle()
    {
        return "Onboarding";
    }

    virtual void OnInit(Xli::Window* wnd)
    {
        _gl = Xli::GLContext::Create(wnd, Xli::GLContextAttributes::Default());

#ifdef XLI_GL_DESKTOP
        glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
#endif
        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        _gl->SetSwapInterval(0);
        _gl->SwapBuffers();

        // Store global references to wnd and gl
        uXliWindowPtr = wnd;
        uXliGLContextPtr = _gl;
    }

    virtual void OnLoad(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::Start();
    }

    virtual void OnUpdate(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnUpdate();
    }

    virtual void OnDraw(Xli::Window* wnd)
    {
        {
            uAutoReleasePool pool;

            if (::g::Uno::Application::Current() && ::g::Uno::Application::Current()->DrawNextFrame())
            {
                ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnDraw();
                _gl->SwapBuffers();
            }
        }

#ifdef DEBUG_DUMPS
        static int frame = 0;
        char path[32];
        sprintf(path, "draw%d.dot", frame++);
        uDumpAllStrongRefs(path);
#endif
    }

    virtual bool OnKeyDown(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyDown(wnd, key))
            return true;

#ifdef XLI_PLATFORM_WIN32
        if (key == Xli::KeyF11)
        {
            wnd->SetFullscreen(!wnd->IsFullscreen());
            return true;
        }
#endif

        return false;
    }

    virtual bool OnKeyboardResized(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        return ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyboardResized(wnd);
    }

    virtual bool OnKeyUp(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyUp(wnd, key))
            return true;

        return false;
    }

    virtual bool OnTextInput(Xli::Window* wnd, const Xli::String& text)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTextInput(wnd, uStringFromXliString(text)))
            return true;

        return false;
    }

    virtual bool OnMouseDown(Xli::Window* wnd, Xli::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseDown(wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseUp(Xli::Window* wnd, Xli::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseUp(wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseMove(Xli::Window* wnd, Xli::Vector2i pos)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseMove(wnd, pos.X, pos.Y))
            return true;

        return false;
    }

    virtual bool OnMouseWheel(Xli::Window* wnd, Xli::Vector2i delta)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseWheel(wnd, (float)delta.X, (float)delta.Y, 1))
            return true;

        return false;
    }

    virtual bool OnTouchDown(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchDown(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchMove(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchMove(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchUp(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchUp(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual void OnNativeHandleChanged(Xli::Window* wnd)
    {
        _gl->MakeCurrent(wnd);
    }

    virtual void OnSizeChanged(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnWindowSizeChanged(wnd);
        Application::OnSizeChanged(wnd);
    }

    virtual bool OnClosing(Xli::Window* wnd, bool& cancel)
    {
        uAutoReleasePool pool;

        // TODO
        return false;
    }

    virtual void OnClosed(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnWindowClosed(wnd);
    }

    virtual void OnAppLowMemory(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::OnReceivedLowMemoryWarning();
    }

    virtual void OnAppTerminating(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::Terminate();
    }

    virtual void OnAppDidEnterForeground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::EnterInteractive();
    }

    virtual void OnAppDidEnterBackground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::EnterBackground();
    }
};

int Main(const Xli::Array<Xli::String>& args)
{
    uRuntime uno;
    int flags = Xli::WindowFlagsResizeable;

    try
    {
        uApplication app;
        Xli::Application::Run(&app, flags);
    }
    catch (const uThrowable& t)
    {
        Xli::String str = "(null)";

        if (t.Exception)
        {
            uAutoReleasePool _;
            str = uStringToXliString(t.Exception->ToString());
        }

        Xli::Exception x(str);
        x._func = t.Function;
        x._line = t.Line;
        throw x;
    }

    return 0;
}

namespace g{namespace Android{namespace android{namespace content{struct Context_type; ::g::Android::android::content::Context_type* ContextWrapper_typeof();}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context_type; Context_type* Context_typeof();}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context_type;}}} namespace Android{namespace android{namespace app{::g::Android::android::content::Context_type* Activity_typeof();}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context_type;}}} namespace Android{namespace android{namespace test{namespace mock{::g::Android::android::content::Context_type* MockContext_typeof();}}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context_type;}}} namespace Android{namespace android{namespace view{::g::Android::android::content::Context_type* ContextThemeWrapper_typeof();}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context_type;}}} namespace Android{namespace Fallbacks{::g::Android::android::content::Context_type* Android_android_content_Context_typeof();}}}
namespace g{namespace Android{namespace android{namespace os{struct Vibrator_type; Vibrator_type* Vibrator_typeof();}}}}
namespace g{namespace Android{namespace android{namespace os{struct Vibrator_type;}}} namespace Android{namespace Fallbacks{::g::Android::android::os::Vibrator_type* Android_android_os_Vibrator_typeof();}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type; ::g::Android::android::view::View_type* SurfaceView_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type; ::g::Android::android::view::View_type* TextureView_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type; View_type* View_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::View_type* AbsSeekBar_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::View_type* ImageView_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::View_type* ProgressBar_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::View_type* SeekBar_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type;}}} namespace Android{namespace Fallbacks{::g::Android::android::view::View_type* Android_android_widget_AbsSeekBar_typeof();}}}
namespace g{namespace Android{namespace android{namespace view{struct View_type;}}} namespace Fuse{namespace Android{namespace Controls{::g::Android::android::view::View_type* AndroidSeekBar_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type; ViewGroup_type* ViewGroup_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Android{namespace android{namespace webkit{::g::Android::android::view::ViewGroup_type* WebView_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::ViewGroup_type* AbsoluteLayout_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::ViewGroup_type* FrameLayout_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::ViewGroup_type* HorizontalScrollView_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::ViewGroup_type* RelativeLayout_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Android{namespace android{namespace widget{::g::Android::android::view::ViewGroup_type* ScrollView_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Android{namespace Fallbacks{::g::Android::android::view::ViewGroup_type* Android_android_view_ViewGroup_typeof();}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Fuse{namespace Android{::g::Android::android::view::ViewGroup_type* RootViewContainer_typeof();}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Fuse{namespace Android{namespace NativeViews{::g::Android::android::view::ViewGroup_type* HorizontalScrollView_typeof();}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup_type;}}} namespace Fuse{namespace Android{namespace NativeViews{::g::Android::android::view::ViewGroup_type* VerticalScrollView_typeof();}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebChromeClient_type; WebChromeClient_type* WebChromeClient_typeof();}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebChromeClient_type;}}} namespace Fuse{namespace Android{namespace Controls{::g::Android::android::webkit::WebChromeClient_type* WebChromeClient_typeof();}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebViewClient_type; WebViewClient_type* WebViewClient_typeof();}}}}
namespace g{namespace Android{namespace android{namespace webkit{struct WebViewClient_type;}}} namespace Fuse{namespace Android{namespace Controls{::g::Android::android::webkit::WebViewClient_type* WebViewClient_typeof();}}}}
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton_type; ::g::Android::android::widget::CompoundButton_type* Switch_typeof();}}}}
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton_type; CompoundButton_type* CompoundButton_typeof();}}}}
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton_type;}}} namespace Android{namespace Fallbacks{::g::Android::android::widget::CompoundButton_type* Android_android_widget_CompoundButton_typeof();}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView_type; ::g::Android::android::widget::TextView_type* Button_typeof();}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView_type; ::g::Android::android::widget::TextView_type* EditText_typeof();}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView_type; TextView_type* TextView_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ConstCharPtr_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* JavaVMPtr_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* jfieldID_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* jmethodID_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* JNIEnvPtr_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* JNINativeMethod_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* jweak_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujboolean_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujbyte_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujchar_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujclass_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujdouble_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujfloat_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujint_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujlong_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujobject_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujshort_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujstring_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujvalue_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* uweakptr_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Types{uClassType* Arrays_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Types{uClassType* Bridge_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Types{uClassType* ByteBuffer_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Types{uClassType* String_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JWrapper_type; JWrapper_type* JWrapper_typeof();}}}}
namespace g{namespace Android{namespace Base{uClassType* AndroidBindingMacros_typeof();}}}
namespace g{namespace Android{namespace Base{uClassType* JNI_typeof();}}}
namespace g{namespace Android{namespace Base{uClassType* Versions_typeof();}}}
namespace g{namespace Android{namespace Base{uType* Permissions_typeof();}}}
namespace g{namespace Android{namespace Base{uType* PlatPermission_typeof();}}}
namespace g{namespace Android{namespace com{namespace fuse{namespace ExperimentalHttp{struct HttpRequest_type; HttpRequest_type* HttpRequest_typeof();}}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_animation_TimeAnimatorDLRTimeListener_type; Android_android_animation_TimeAnimatorDLRTimeListener_type* Android_android_animation_TimeAnimatorDLRTimeListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type; Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_type* Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type; Android_android_media_AudioManagerDLROnAudioFocusChangeListener_type* Android_android_media_AudioManagerDLROnAudioFocusChangeListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnCompletionListener_type; Android_android_media_MediaPlayerDLROnCompletionListener_type* Android_android_media_MediaPlayerDLROnCompletionListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnErrorListener_type; Android_android_media_MediaPlayerDLROnErrorListener_type* Android_android_media_MediaPlayerDLROnErrorListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_media_MediaPlayerDLROnPreparedListener_type; Android_android_media_MediaPlayerDLROnPreparedListener_type* Android_android_media_MediaPlayerDLROnPreparedListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_os_IBinder_type; Android_android_os_IBinder_type* Android_android_os_IBinder_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_os_IBinderDLRDeathRecipient_type; Android_android_os_IBinderDLRDeathRecipient_type* Android_android_os_IBinderDLRDeathRecipient_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_os_IInterface_type; Android_android_os_IInterface_type* Android_android_os_IInterface_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_Editable_type; Android_android_text_Editable_type* Android_android_text_Editable_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_GetChars_type; Android_android_text_GetChars_type* Android_android_text_GetChars_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_InputFilter_type; Android_android_text_InputFilter_type* Android_android_text_InputFilter_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_Spannable_type; Android_android_text_Spannable_type* Android_android_text_Spannable_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_Spanned_type; Android_android_text_Spanned_type* Android_android_text_Spanned_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_text_TextWatcher_type; Android_android_text_TextWatcher_type* Android_android_text_TextWatcher_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_util_AttributeSet_type; Android_android_util_AttributeSet_type* Android_android_util_AttributeSet_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ChoreographerDLRFrameCallback_type; Android_android_view_ChoreographerDLRFrameCallback_type* Android_android_view_ChoreographerDLRFrameCallback_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ContextMenuDLRContextMenuInfo_type; Android_android_view_ContextMenuDLRContextMenuInfo_type* Android_android_view_ContextMenuDLRContextMenuInfo_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_Menu_type; Android_android_view_Menu_type* Android_android_view_Menu_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_MenuItem_type; Android_android_view_MenuItem_type* Android_android_view_MenuItem_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_MenuItemDLROnActionExpandListener_type; Android_android_view_MenuItemDLROnActionExpandListener_type* Android_android_view_MenuItemDLROnActionExpandListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_MenuItemDLROnMenuItemClickListener_type; Android_android_view_MenuItemDLROnMenuItemClickListener_type* Android_android_view_MenuItemDLROnMenuItemClickListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_SubMenu_type; Android_android_view_SubMenu_type* Android_android_view_SubMenu_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_SurfaceHolder_type; Android_android_view_SurfaceHolder_type* Android_android_view_SurfaceHolder_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_SurfaceHolderDLRCallback_type; Android_android_view_SurfaceHolderDLRCallback_type* Android_android_view_SurfaceHolderDLRCallback_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_SurfaceHolderDLRCallback2_type; Android_android_view_SurfaceHolderDLRCallback2_type* Android_android_view_SurfaceHolderDLRCallback2_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_TextureViewDLRSurfaceTextureListener_type; Android_android_view_TextureViewDLRSurfaceTextureListener_type* Android_android_view_TextureViewDLRSurfaceTextureListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnFocusChangeListener_type; Android_android_view_ViewDLROnFocusChangeListener_type* Android_android_view_ViewDLROnFocusChangeListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnTouchListener_type; Android_android_view_ViewDLROnTouchListener_type* Android_android_view_ViewDLROnTouchListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type; Android_android_widget_CompoundButtonDLROnCheckedChangeListener_type* Android_android_widget_CompoundButtonDLROnCheckedChangeListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_widget_SeekBarDLROnSeekBarChangeListener_type; Android_android_widget_SeekBarDLROnSeekBarChangeListener_type* Android_android_widget_SeekBarDLROnSeekBarChangeListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_widget_TextViewDLROnEditorActionListener_type; Android_android_widget_TextViewDLROnEditorActionListener_type* Android_android_widget_TextViewDLROnEditorActionListener_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_java_lang_CharSequence_type; Android_java_lang_CharSequence_type* Android_java_lang_CharSequence_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_java_lang_Runnable_type; Android_java_lang_Runnable_type* Android_java_lang_Runnable_typeof();}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_java_util_Observer_type; Android_java_util_Observer_type* Android_java_util_Observer_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type; ::g::Android::java::lang::Object_type* Class_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type; ::g::Android::java::lang::Object_type* System_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type; namespace reflect{::g::Android::java::lang::Object_type* AccessibleObject_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type; namespace reflect{::g::Android::java::lang::Object_type* Field_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type; Object_type* Object_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace animation{::g::Android::java::lang::Object_type* Animator_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace animation{::g::Android::java::lang::Object_type* TimeAnimator_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace animation{::g::Android::java::lang::Object_type* ValueAnimator_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace app{::g::Android::java::lang::Object_type* Fragment_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace app{::g::Android::java::lang::Object_type* TaskStackBuilder_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace content{::g::Android::java::lang::Object_type* ComponentName_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace content{::g::Android::java::lang::Object_type* Intent_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace content{namespace res{::g::Android::java::lang::Object_type* AssetFileDescriptor_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace content{namespace res{::g::Android::java::lang::Object_type* AssetManager_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace content{namespace res{::g::Android::java::lang::Object_type* ColorStateList_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace content{namespace res{::g::Android::java::lang::Object_type* Configuration_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace content{namespace res{::g::Android::java::lang::Object_type* Resources_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* Bitmap_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* BitmapDLRConfig_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* BitmapFactory_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* Canvas_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* Color_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* Matrix_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* Paint_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* PaintDLRStyle_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* PorterDuffDLRMode_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* Rect_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* RectF_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* SurfaceTexture_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{::g::Android::java::lang::Object_type* Typeface_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{namespace drawable{::g::Android::java::lang::Object_type* Drawable_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{namespace drawable{::g::Android::java::lang::Object_type* LayerDrawable_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{namespace drawable{::g::Android::java::lang::Object_type* ShapeDrawable_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{namespace drawable{namespace shapes{::g::Android::java::lang::Object_type* ArcShape_typeof();}}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{namespace drawable{namespace shapes{::g::Android::java::lang::Object_type* RectShape_typeof();}}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{namespace drawable{namespace shapes{::g::Android::java::lang::Object_type* RoundRectShape_typeof();}}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace graphics{namespace drawable{namespace shapes{::g::Android::java::lang::Object_type* Shape_typeof();}}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace media{::g::Android::java::lang::Object_type* AudioManager_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace media{::g::Android::java::lang::Object_type* MediaPlayer_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace net{::g::Android::java::lang::Object_type* Uri_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace opengl{::g::Android::java::lang::Object_type* GLUtils_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace os{::g::Android::java::lang::Object_type* BuildDLRVERSION_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace os{::g::Android::java::lang::Object_type* Bundle_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace os{::g::Android::java::lang::Object_type* Parcel_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace text{::g::Android::java::lang::Object_type* Layout_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace text{::g::Android::java::lang::Object_type* LayoutDLRAlignment_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace text{::g::Android::java::lang::Object_type* StaticLayout_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace text{::g::Android::java::lang::Object_type* TextPaint_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace text{::g::Android::java::lang::Object_type* TextUtilsDLRTruncateAt_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace util{::g::Android::java::lang::Object_type* TypedValue_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* ActionMode_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* ActionProvider_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* Choreographer_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* Gravity_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* KeyEvent_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* MotionEvent_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* Surface_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* ViewDLRMeasureSpec_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* ViewGroupDLRLayoutParams_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* ViewGroupDLRMarginLayoutParams_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{::g::Android::java::lang::Object_type* WindowManagerDLRLayoutParams_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace view{namespace inputmethod{::g::Android::java::lang::Object_type* InputMethodManager_typeof();}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace webkit{::g::Android::java::lang::Object_type* WebSettings_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace widget{::g::Android::java::lang::Object_type* FrameLayoutDLRLayoutParams_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace widget{::g::Android::java::lang::Object_type* ImageViewDLRScaleType_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace android{namespace widget{::g::Android::java::lang::Object_type* RelativeLayoutDLRLayoutParams_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_android_animation_Animator_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_android_graphics_drawable_Drawable_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_android_graphics_drawable_shapes_Shape_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_android_net_Uri_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_android_text_Layout_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_android_view_ActionMode_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_android_view_ActionProvider_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_android_webkit_WebSettings_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace Fallbacks{::g::Android::java::lang::Object_type* Android_java_io_InputStream_typeof();}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace java{namespace io{::g::Android::java::lang::Object_type* FileDescriptor_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace java{namespace io{::g::Android::java::lang::Object_type* InputStream_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace java{namespace net{::g::Android::java::lang::Object_type* URL_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object_type;}}} namespace Android{namespace java{namespace util{::g::Android::java::lang::Object_type* Observable_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String_type; String_type* String_typeof();}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Thread_type; Thread_type* Thread_typeof();}}}}
namespace g{namespace Android{namespace Runtime{struct BooleanArray_type; BooleanArray_type* BooleanArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct ByteArray_type; ByteArray_type* ByteArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct CharArray_type; CharArray_type* CharArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct DoubleArray_type; DoubleArray_type* DoubleArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct FloatArray_type; FloatArray_type* FloatArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct IntArray_type; IntArray_type* IntArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct JAEnumerator_type; JAEnumerator_type* JAEnumerator_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct JOAEnumerator_type; JOAEnumerator_type* JOAEnumerator_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct LongArray_type; LongArray_type* LongArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray_type; ObjectArray_type* ObjectArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct RunnableAction_type; RunnableAction_type* RunnableAction_typeof();}}}
namespace g{namespace Android{namespace Runtime{struct ShortArray_type; ShortArray_type* ShortArray_typeof();}}}
namespace g{namespace Android{namespace Runtime{uClassType* NativeActivityHelper_typeof();}}}
namespace g{namespace Android{namespace Runtime{uClassType* ObjectArrayAUX_typeof();}}}
namespace g{namespace Android{namespace Runtime{uClassType* UnoHelper_typeof();}}}
namespace g{namespace Android{uClassType* Bootstrapper_typeof();}}
namespace g{namespace Experimental{namespace Http{namespace Internal{uClassType* DateUtil_typeof();}}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; ::g::Experimental::Http::Loader_type* BinaryLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; ::g::Experimental::Http::Loader_type* TextLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; Loader_type* Loader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uClassType* HttpLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uClassType* LoaderConst_typeof();}}}
namespace g{namespace Experimental{namespace Http{uType* HttpResponseHeader_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct BasicBoundedRegion2D_type; BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct ElasticForce_type; ElasticForce_type* ElasticForce_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct Friction_type; Friction_type* Friction_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct SmoothSnap_type; SmoothSnap_type* SmoothSnap_typeof();}}}
namespace g{namespace Experimental{namespace Physics{uType* PointerVelocity_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uClassType* TextureLoader_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uClassType* TextureLoaderImpl_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uType* Callback_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uType* InvalidContentTypeException_typeof();}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton__Listener_type; CompoundButton__Listener_type* CompoundButton__Listener_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton_type; ::g::Fuse::Android::Controls::CompoundButton_type* CheckBox_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton_type; ::g::Fuse::Android::Controls::CompoundButton_type* RadioButton_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton_type; ::g::Fuse::Android::Controls::CompoundButton_type* Switch_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton_type; ::g::Fuse::Android::Controls::CompoundButton_type* ToggleButton_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct CompoundButton_type; CompoundButton_type* CompoundButton_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Control_type; ::g::Fuse::Android::Controls::Control_type* Button_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Control_type; ::g::Fuse::Android::Controls::Control_type* Image_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Control_type; ::g::Fuse::Android::Controls::Control_type* MapView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Control_type; ::g::Fuse::Android::Controls::Control_type* SeekBar_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Control_type; Control_type* Control_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct EditorActionListener_type; EditorActionListener_type* EditorActionListener_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Element_type; Element_type* Element_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Image__ImageLoader__BitmapLoader_type; Image__ImageLoader__BitmapLoader_type* Image__ImageLoader__BitmapLoader_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct JsResultHandler_type; JsResultHandler_type* JsResultHandler_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct ProgressChangedListener_type; ProgressChangedListener_type* ProgressChangedListener_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Shape_type; ::g::Fuse::Android::Controls::Shape_type* Circle_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Shape_type; ::g::Fuse::Android::Controls::Shape_type* Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Shape_type; Shape_type* Shape_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextChangedListener_type; TextChangedListener_type* TextChangedListener_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextEdit_type; ::g::Fuse::Android::Controls::TextEdit_type* PlainTextEdit_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextEdit_type; TextEdit_type* TextEdit_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextViewBase_type; ::g::Fuse::Android::Controls::TextViewBase_type* TextView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextViewBase_type; TextViewBase_type* TextViewBase_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct WebView_type; WebView_type* WebView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{uClassType* BitmapFactory_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{uType* EditorActionArgs_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{uType* FocusManager_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{uType* Image__ImageLoader_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct GLSurfaceTextureListener_type; GLSurfaceTextureListener_type* GLSurfaceTextureListener_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct GraphicsView_type; ::g::Fuse::Android::NativeViews::GraphicsView_type* SurfaceView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct GraphicsView_type; ::g::Fuse::Android::NativeViews::GraphicsView_type* TextureView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct GraphicsView_type; GraphicsView_type* GraphicsView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView_type; ::g::Fuse::Android::NativeViews::NativeView_type* LeafNativeView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView_type; NativeView_type* NativeView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ParentNativeView_type; ::g::Fuse::Android::NativeViews::ParentNativeView_type* ContentControl_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ParentNativeView_type; ::g::Fuse::Android::NativeViews::ParentNativeView_type* NativeViewHost_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ParentNativeView_type; ::g::Fuse::Android::NativeViews::ParentNativeView_type* Panel_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ParentNativeView_type; ::g::Fuse::Android::NativeViews::ParentNativeView_type* ScrollView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct ParentNativeView_type; ParentNativeView_type* ParentNativeView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct SurfaceCallback_type; SurfaceCallback_type* SurfaceCallback_typeof();}}}}
namespace g{namespace Fuse{namespace Android{struct FocusChangedListener_type; FocusChangedListener_type* FocusChangedListener_typeof();}}}
namespace g{namespace Fuse{namespace Android{struct InputDispatch__TouchListener_type; InputDispatch__TouchListener_type* InputDispatch__TouchListener_typeof();}}}
namespace g{namespace Fuse{namespace Android{struct NativeStyle__Template__Template2__Factory_type; NativeStyle__Template__Template2__Factory_type* NativeStyle__Template__Template2__Factory_typeof();}}}
namespace g{namespace Fuse{namespace Android{struct NativeStyle__Template__Template2__Factory1_type; NativeStyle__Template__Template2__Factory1_type* NativeStyle__Template__Template2__Factory1_typeof();}}}
namespace g{namespace Fuse{namespace Android{struct NativeTemplate_type; NativeTemplate_type* NativeTemplate_typeof();}}}
namespace g{namespace Fuse{namespace Android{struct TextRenderer_type; TextRenderer_type* TextRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* AndroidExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* BindingView_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* Helpers_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* InputDispatch_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* TypefaceCache_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* Blitter_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* RootView_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* TextControlLayout_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* TextRenderer__BackgroundRender_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Change_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Cycle_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Nothing_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* OpenAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Resize_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Spin_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* TrackAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; Animator_type* Animator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct AnimatorState_type; AnimatorState_type* AnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterDouble_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; Converter_type* Converter_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct DiscreteSingleTrack_type; DiscreteSingleTrack_type* DiscreteSingleTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct EasingTrack_type; EasingTrack_type* EasingTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; MasterBase_type* MasterBase_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; ::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; ::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; MasterProperty_type* MasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; ::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; ::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; MixerBase_type* MixerBase_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerHandle_type; MixerHandle_type* MixerHandle_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; ::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; ::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; OpenAnimatorState_type* OpenAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; TrackAnimatorState_type* TrackAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Move_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Scale_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Skew_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; TransformAnimator_type* TransformAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uClassType* EasingFunctions_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uStructType* MasterBase__GFWResult_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* CreateStateParams_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* Mixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* Player_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* PlayerPart_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* TriggerAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* TriggerAnimationState_typeof();}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCachePasswordTransform_type; LineCachePasswordTransform_type* LineCachePasswordTransform_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* LineCache_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* LineCacheLine_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextEditVisual__DegreeSpan_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextEditVisual__SwipeGestureHelper_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextPosition_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextSpan_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type; ::g::Fuse::Controls::Graphics::ControlVisual_type* DefaultTextVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type; ::g::Fuse::Controls::Graphics::ControlVisual_type* ImageVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type; ::g::Fuse::Controls::Graphics::ControlVisual_type* TextVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type; ControlVisual_type* ControlVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type;}}} namespace Fuse{namespace Controls{namespace FallbackTextEdit{::g::Fuse::Controls::Graphics::ControlVisual_type* TextEditVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type;}}} namespace Fuse{namespace iOS{::g::Fuse::Controls::Graphics::ControlVisual_type* TextRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type;}}} namespace Fuse{namespace Video{::g::Fuse::Controls::Graphics::ControlVisual_type* VideoVisual_typeof();}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct PathShapeVisual_type; ::g::Fuse::Controls::Graphics::PathShapeVisual_type* EllipseVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct PathShapeVisual_type; ::g::Fuse::Controls::Graphics::PathShapeVisual_type* PathVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct PathShapeVisual_type; ::g::Fuse::Controls::Graphics::PathShapeVisual_type* RegularPolygonVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct PathShapeVisual_type; ::g::Fuse::Controls::Graphics::PathShapeVisual_type* StarVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct PathShapeVisual_type; PathShapeVisual_type* PathShapeVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ShapeVisual_type; ::g::Fuse::Controls::Graphics::ShapeVisual_type* CircleVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ShapeVisual_type; ::g::Fuse::Controls::Graphics::ShapeVisual_type* RectangleVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ShapeVisual_type; ShapeVisual_type* ShapeVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct Visual_type; Visual_type* Visual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{uType* ImageElementDraw_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uClassType* WordWrapper_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* DefaultTextRenderer__FontKey_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* DefaultTextRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* WordWrapInfo_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* WordWrapperWord_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* WrappedLine_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ::g::Fuse::Controls::ContentControl_type* ScrollView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ContentControl_type* ContentControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; Control_type* Control_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct FallbackWebViewClient_type; FallbackWebViewClient_type* FallbackWebViewClient_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct GraphicsView_type; GraphicsView_type* GraphicsView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct JavaScriptCall_type; JavaScriptCall_type* JavaScriptCall_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct LoadHtmlCall_type; LoadHtmlCall_type* LoadHtmlCall_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Number_type; Number_type* Number_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl_type; PageControl_type* PageControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* BackButton_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Button_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Circle_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* DockPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Ellipse_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Grid_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Image_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* MapView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* NativeViewHost_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* NavigationBar_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Page_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* PageIndicator_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Path_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* PlainTextEdit_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Rectangle_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* RegularPolygon_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Shape_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* StackPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; ::g::Fuse::Controls::Panel_type* Star_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Panel_type; Panel_type* Panel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl_type; ::g::Fuse::Controls::RangeControl_type* Slider_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl_type; RangeControl_type* RangeControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* Text_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* TextBlock_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* TextEdit_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* TextInput_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; TextControl_type* TextControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type;}} namespace Fuse{namespace BasicTheme{::g::Fuse::Controls::TextControl_type* ButtonText_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ToggleControl_type; ::g::Fuse::Controls::ToggleControl_type* Switch_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ToggleControl_type; ToggleControl_type* ToggleControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Video_type; Video_type* Video_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct WebView_type; WebView_type* WebView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* ScrollPropertyChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* TextInputActionArgs_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* Float2Buffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* FloatBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* TypedBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* UShortBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Circle_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ConcaveWedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ConvexWedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Coverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* FillCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* LimitCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* OneLimitCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* StrokeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Wedge_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* WedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct Dict_type; ::g::Fuse::Drawing::Tesselation::Collections::Dict_type* ActiveRegionDict_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct Dict_type; Dict_type* Dict_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type; ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* DictNodeEnumerable_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type; LinkedListEnumerable_type* LinkedListEnumerable_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgeLoopEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* FacesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* OriginEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* VerticesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerator_type; LinkedListEnumerator_type* LinkedListEnumerator_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct PriorityQueue_type; ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type* VertexQueue_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct PriorityQueue_type; PriorityQueue_type* PriorityQueue_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{uType* DictNode_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uClassType* Geom_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* ActiveRegion_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Face_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* HalfEdge_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Mesh_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* MeshBuilder_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Sweep_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Vertex_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* LinearGradient_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* SolidColor_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* StaticBrush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* StaticSolidColor_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; Brush_type* Brush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ContourEnumerable_type; ContourEnumerable_type* ContourEnumerable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ContourEnumerator_type; ContourEnumerator_type* ContourEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill_type; ImageFill_type* ImageFill_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; ::g::Fuse::Drawing::LineCapImpl_type* ButtCap_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; ::g::Fuse::Drawing::LineCapImpl_type* RoundCap_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; LineCapImpl_type* LineCapImpl_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct NonConsecutiveEnumerable_type; NonConsecutiveEnumerable_type* NonConsecutiveEnumerable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct NonConsecutiveEnumerator_type; NonConsecutiveEnumerator_type* NonConsecutiveEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* ClosePath_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* ContourTerminator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* CurveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* HorizontalLineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* LineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* MoveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* SmoothCurveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* VerticalLineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; PathGeometry_type* PathGeometry_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonFiller_type; PolygonFiller_type* PolygonFiller_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* BezierOp_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* BlendModeHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* EllipseFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* NonConsecutiveExtension_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* PathGeometryExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* RegularPolygonFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* StarFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* WindingRules_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uStructType* ImageFill__DrawParams_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Border_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Cache_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Contour_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* GradientStop_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* LinearGradientDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* PathGeometryParser_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* PathGeometryRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Polygon_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* PolygonDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* RendererContext_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Stroke_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Token_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Util_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Blur_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* DropShadow_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Halftone_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; BasicEffect_type* BasicEffect_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct Effect_type; Effect_type* Effect_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct Mask_type; Mask_type* Mask_typeof();}}}
namespace g{namespace Fuse{namespace Effects{uType* DropShadow__Blitter_typeof();}}}
namespace g{namespace Fuse{namespace Effects{uType* EffectHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{namespace Internal{uType* ElementDraw_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{namespace Internal{uType* Scale9Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; BoxSizing_type* BoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type; Element_type* Element_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type;}} namespace Fuse{namespace Controls{namespace FallbackTextEdit{::g::Fuse::Elements::Element_type* TextWindow_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolImpl_type; ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatch_type; ElementBatch_type* ElementBatch_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher_type; ElementBatcher_type* ElementBatcher_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct SingleNodeDrawable_type; SingleNodeDrawable_type* SingleNodeDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__AnchorOrigin_type; TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__BoxCenter_type; TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__CenterOrigin_type; TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__TopLeftOrigin_type; TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Viewport_type; Viewport_type* Viewport_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* AlignmentHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* DisplayHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* ElementAtlasFramebufferPool_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* TransformOrigins_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* BoxPlacement_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* CacheTile_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* Element__GMSCacheItem_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* Cache_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* CacheHelper_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlas_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlasFramebuffer_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlasFramebufferPoolEntry_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementBatchEntry_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* LayoutMasterBoxSizing__LayoutMasterData_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* PreplacementArgs_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* TextureAtlas_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* EdgeSwiper_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* Swiper_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* SwipeRegion_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{uType* Clicker_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* DegreeSpan_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* SwipeGestureHelper_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* TappedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__DefaultPointerEventResponder_type; Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Focus_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* FocusPredictStrategy_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* HitTestHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Keyboard_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Pointer_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* TextService_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* TraverseNodeExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Capturer_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* CustomPointerEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* FocusGainedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* FocusLostArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* IsFocusableChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* KeyEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* KeyPressedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* KeyReleasedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Pointer__PELHolder_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Pointer__PointerRecord_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerEnteredArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerEventData_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerLeftArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerMovedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerPressedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerReleasedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerWheelMovedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* SelectionQuery_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* TextEnteredArgs_typeof();}}}
namespace g{namespace Fuse{namespace Internal{namespace Drawing{uType* SolidRectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* DoubleBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float2Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float3Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float4Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* FloatBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; Blender_type* Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* FrustumMatrix_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* RectExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* Statistics_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* BlenderMap_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* ImageContainer_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* SimpleLock_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* SizingContainer_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* DockLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* GridLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* StackLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* WrapLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; Layout_type* Layout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uClassType* Layouts_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* Column_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* DefinitionBase_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* Row_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct DefaultNavigationAnimator_type; DefaultNavigationAnimator_type* DefaultNavigationAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct DefaultNavigationAnimatorPlayer_type; DefaultNavigationAnimatorPlayer_type* DefaultNavigationAnimatorPlayer_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* DirectNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* EdgeNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* LinearNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* StructuredNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; Navigation_type* Navigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; NavigationAnimation_type* NavigationAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; ::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; ::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; NavigationTriggerAction_type* NavigationTriggerAction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct SeekNavigationAnimatorPlayer_type; SeekNavigationAnimatorPlayer_type* SeekNavigationAnimatorPlayer_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; WhileNavigationTrigger_type* WhileNavigationTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* NavigationPageProperty_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* NavTriggerUtil_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* PlayerFactory_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* EndSeekArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigatedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationStateArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationTween_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* ProgressSpan_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* ProgressTimer_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* UpdateSeekArgs_typeof();}}}
namespace g{namespace Fuse{namespace Preview{uClassType* SelectionManager_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct GenericResourceConverter_type; GenericResourceConverter_type* GenericResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ImageSource_type* ImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; ::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; ::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; LoadingImageSource_type* LoadingImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* DoubleResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* FloatResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* IntResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; NumericResourceConverter_type* NumericResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* DisposalManager_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* FileImageSourceCache_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* HttpImageSourceCache_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* ResourceConverters_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* ResourceRegistry_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* ImageSourceErrorArgs_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* MemoryPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* ProxyImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* NameRegistry_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* BoolChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* DoubleChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* StringChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; ::g::Fuse::Shapes::PathShape_type* Ellipse_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; ::g::Fuse::Shapes::PathShape_type* Path_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; ::g::Fuse::Shapes::PathShape_type* RegularPolygon_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; ::g::Fuse::Shapes::PathShape_type* Star_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; PathShape_type* PathShape_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct Shape_type; ::g::Fuse::Shapes::Shape_type* Circle_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct Shape_type; ::g::Fuse::Shapes::Shape_type* Rectangle_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct Shape_type; Shape_type* Shape_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadHtml_type; LoadHtml_type* LoadHtml_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Call_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchEmail_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchMaps_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; TriggerAction_type* TriggerAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Controls{::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Vibration{::g::Fuse::Triggers::Actions::TriggerAction_type* Vibrate_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; WebViewNavAction_type* WebViewNavAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{uType* JSEventArgs_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{uType* UserEventArg_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__PositionChangeMode_type; LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ResizeChangeMode_type; LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ScaleChangeMode_type; LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__WorldPositionChangeMode_type; LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline_type; Timeline_type* Timeline_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* State_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; Trigger_type* Trigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Controls{::g::Fuse::Triggers::Trigger_type* DefaultSwitchBehavior_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Tapped_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileBool_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileFalse_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileTrue_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; WhileValue_type* WhileValue_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* LayoutTransition_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* LayoutTransitionedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Vibration{uClassType* Vibration_typeof();}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct CompletionEvent_type; CompletionEvent_type* CompletionEvent_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct ErrorEvent_type; ErrorEvent_type* ErrorEvent_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct FrameAvailableEvent_type; FrameAvailableEvent_type* FrameAvailableEvent_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct PreparedEvent_type; PreparedEvent_type* PreparedEvent_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoPlayer_type; VideoPlayer_type* VideoPlayer_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct VideoSurface_type; VideoSurface_type* VideoSurface_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{uClassType* AndroidAudioHelpers_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{uType* ErrorEventArgs_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{struct VideoContainer_type; VideoContainer_type* VideoContainer_typeof();}}}
namespace g{namespace Fuse{namespace Video{struct VideoLoader_type; namespace Graphics{namespace Android{::g::Fuse::Video::VideoLoader_type* AndroidVideoLoader_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{struct VideoLoader_type; VideoLoader_type* VideoLoader_typeof();}}}
namespace g{namespace Fuse{namespace Video{uClassType* VideoDiskCache_typeof();}}}
namespace g{namespace Fuse{namespace Video{uType* CancellationTokenSource_typeof();}}}
namespace g{namespace Fuse{namespace Video{uType* LoadFailed_typeof();}}}
namespace g{namespace Fuse{namespace Video{uType* LoadResult_typeof();}}}
namespace g{namespace Fuse{namespace Video{uType* LoadSucceded_typeof();}}}
namespace g{namespace Fuse{namespace Video{uType* Scale9Rectangle_typeof();}}}
namespace g{namespace Fuse{namespace Video{uType* VideoDrawElement_typeof();}}}
namespace g{namespace Fuse{struct App__FrameCallback_type; App__FrameCallback_type* App__FrameCallback_typeof();}}
namespace g{namespace Fuse{struct App__TimeListener_type; App__TimeListener_type* App__TimeListener_typeof();}}
namespace g{namespace Fuse{struct AppBase_type; ::g::Fuse::AppBase_type* App_typeof();}}
namespace g{namespace Fuse{struct AppBase_type; AppBase_type* AppBase_typeof();}}
namespace g{namespace Fuse{struct AppBase_type;} ::g::Fuse::AppBase_type* MainView_typeof();}
namespace g{namespace Fuse{struct BeginRemoveArgs_type; BeginRemoveArgs_type* BeginRemoveArgs_typeof();}}
namespace g{namespace Fuse{struct BeginRemoveArgs_type; namespace Controls{::g::Fuse::BeginRemoveArgs_type* BeginRemoveArgsImpl_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; ::g::Fuse::Behavior_type* UserEvent_typeof();}}
namespace g{namespace Fuse{struct Behavior_type; Behavior_type* Behavior_typeof();}}
namespace g{namespace Fuse{struct Behavior_type; namespace Controls{::g::Fuse::Behavior_type* PropertyBinding_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Controls{namespace Graphics{::g::Fuse::Behavior_type* LinearSliderBehavior_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* KeepFocusInView_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* KeepInViewCommon_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* Scroller_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* SwipeGesture_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Navigation{::g::Fuse::Behavior_type* SwipeNavigate_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceBinding_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Triggers{::g::Fuse::Behavior_type* StateGroup_typeof();}}}
namespace g{namespace Fuse{struct FixedViewport_type; FixedViewport_type* FixedViewport_typeof();}}
namespace g{namespace Fuse{struct FramebufferPoolImpl_type; FramebufferPoolImpl_type* FramebufferPoolImpl_typeof();}}
namespace g{namespace Fuse{struct Node_type; namespace Entities{::g::Fuse::Node_type* Entity_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace iOS{namespace Controls{::g::Fuse::Node_type* Button_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; Node_type* Node_typeof();}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* FocusGained_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* FocusLost_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* IsFocusableChangedEvent_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* KeyPressed_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* KeyReleased_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerEntered_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerLeft_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerMoved_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerPressed_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerReleased_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerWheelMoved_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* TextEntered_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Triggers{::g::Fuse::NodeEvent_type* LayoutTransitioned_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; NodeEvent_type* NodeEvent_typeof();}}
namespace g{namespace Fuse{struct OrthographicFrustum_type; OrthographicFrustum_type* OrthographicFrustum_typeof();}}
namespace g{namespace Fuse{struct RootViewport_type; RootViewport_type* RootViewport_typeof();}}
namespace g{namespace Fuse{struct ScalingModes__IdentityMode_type; ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof();}}
namespace g{namespace Fuse{struct Style_type; ::g::Fuse::Style_type* GraphicsTheme_typeof();}}
namespace g{namespace Fuse{struct Style_type; ::g::Fuse::Style_type* Theme_typeof();}}
namespace g{namespace Fuse{struct Style_type; namespace Android{::g::Fuse::Style_type* NativeStyle_typeof();}}}
namespace g{namespace Fuse{struct Style_type; namespace BasicTheme{::g::Fuse::Style_type* BasicStyle_typeof();}}}
namespace g{namespace Fuse{struct Style_type; namespace BasicTheme{::g::Fuse::Style_type* BasicTheme_typeof();}}}
namespace g{namespace Fuse{struct Style_type; namespace Themes{::g::Fuse::Style_type* GraphicsStyle_typeof();}}}
namespace g{namespace Fuse{struct Style_type; Style_type* Style_typeof();}}
namespace g{namespace Fuse{struct StyleProperty_type; ::g::Fuse::StyleProperty_type* StyleProperty1_typeof();}}
namespace g{namespace Fuse{struct StyleProperty_type; ::g::Fuse::StyleProperty_type* StylePropertyWithUnit_typeof();}}
namespace g{namespace Fuse{struct StyleProperty_type; StyleProperty_type* StyleProperty_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Rotation_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Scaling_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Shear_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Translation_typeof();}}
namespace g{namespace Fuse{struct Transform_type; namespace Animations{::g::Fuse::Transform_type* FastMatrixTransform_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; namespace Entities{::g::Fuse::Transform_type* Transform3D_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; Transform_type* Transform_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__LocalMode_type; TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__ParentSizeMode_type; TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode_type; TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof();}}
namespace g{namespace Fuse{struct UpdateDispatcher_type; UpdateDispatcher_type* UpdateDispatcher_typeof();}}
namespace g{namespace Fuse{uClassType* Diagnostics_typeof();}}
namespace g{namespace Fuse{uClassType* Fonts_typeof();}}
namespace g{namespace Fuse{uClassType* FramebufferPool_typeof();}}
namespace g{namespace Fuse{uClassType* GraphicsWorker_typeof();}}
namespace g{namespace Fuse{uClassType* Launcher_typeof();}}
namespace g{namespace Fuse{uClassType* NodeListCache_typeof();}}
namespace g{namespace Fuse{uClassType* ScalingModes_typeof();}}
namespace g{namespace Fuse{uClassType* Time_typeof();}}
namespace g{namespace Fuse{uClassType* TranslationModes_typeof();}}
namespace g{namespace Fuse{uClassType* UpdateManager_typeof();}}
namespace g{namespace Fuse{uType* CacheFramebuffer_typeof();}}
namespace g{namespace Fuse{uType* DrawArgs_typeof();}}
namespace g{namespace Fuse{uType* DrawContext_typeof();}}
namespace g{namespace Fuse{uType* DrawHelpers_typeof();}}
namespace g{namespace Fuse{uType* FastMatrix_typeof();}}
namespace g{namespace Fuse{uType* Font_typeof();}}
namespace g{namespace Fuse{uType* FrustumViewport_typeof();}}
namespace g{namespace Fuse{uType* HitTestContext_typeof();}}
namespace g{namespace Fuse{uType* HitTestResult_typeof();}}
namespace g{namespace Fuse{uType* KeyboardBootstrapper_typeof();}}
namespace g{namespace Fuse{uType* MobileBootstrapping_typeof();}}
namespace g{namespace Fuse{uType* Node__HitTestRecord_typeof();}}
namespace g{namespace Fuse{uType* NodeBounds_typeof();}}
namespace g{namespace Fuse{uType* NodeEventArgs_typeof();}}
namespace g{namespace Fuse{uType* PlacedArgs_typeof();}}
namespace g{namespace Fuse{uType* Properties_typeof();}}
namespace g{namespace Fuse{uType* PropertyHandle_typeof();}}
namespace g{namespace Fuse{uType* RenderTargetEntry_typeof();}}
namespace g{namespace Fuse{uType* RequestBringIntoViewArgs_typeof();}}
namespace g{namespace Fuse{uType* Stage_typeof();}}
namespace g{namespace Fuse{uType* UnhandledExceptionArgs_typeof();}}
namespace g{namespace Fuse{uType* UpdateListener_typeof();}}
namespace g{namespace Fuse{uType* UserEventArgs_typeof();}}
namespace g{namespace Fuse{uType* UserEventDispatch_typeof();}}
namespace g{namespace OpenGL{uClassType* GL_typeof();}}
namespace g{namespace OpenGL{uStructType* GLBufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLFramebufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLProgramHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLRenderbufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLShaderHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLTextureHandle_typeof();}}
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection__DeferLockImpl_type; ConcurrentCollection__DeferLockImpl_type* ConcurrentCollection__DeferLockImpl_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection_type; ConcurrentCollection_type* ConcurrentCollection_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__Enumerator_type; Dictionary__Enumerator_type* Dictionary__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection__Enumerator_type; Dictionary__ValueCollection__Enumerator_type* Dictionary__ValueCollection__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection_type; Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary_type; Dictionary_type* Dictionary_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct EmptyEnumerable_type; EmptyEnumerable_type* EmptyEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct EmptyEnumerator_type; EmptyEnumerator_type* EmptyEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct HashSet__Enumerator_type; HashSet__Enumerator_type* HashSet__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct HashSet_type; HashSet_type* HashSet_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList__Enumerator_type; LinkedList__Enumerator_type* LinkedList__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList_type; LinkedList_type* LinkedList_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct List__Enumerator_type; List__Enumerator_type* List__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct List_type; List_type* List_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList_type; ObservableList_type* ObservableList_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Queue__Enumerator_type; Queue__Enumerator_type* Queue__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Queue_type; Queue_type* Queue_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct SelectEnumerable_type; SelectEnumerable_type* SelectEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct SelectEnumerator_type; SelectEnumerator_type* SelectEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct UnionEnumerable_type; UnionEnumerable_type* UnionEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct UnionEnumerator_type; UnionEnumerator_type* UnionEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct WhereEnumerable_type; WhereEnumerable_type* WhereEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct WhereEnumerator_type; WhereEnumerator_type* WhereEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{uClassType* EnumerableExtensions_typeof();}}}
namespace g{namespace Uno{namespace Collections{uClassType* IListExtensions_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* ConcurrentCollection__ModItem_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* Dictionary__Bucket_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* KeyValuePair_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* EnumerableExtensions__LinkedList_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* LinkedListNode_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* ReadOnlyCollection_typeof();}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace_type; ::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace_type; FontFace_type* FontFace_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; ::g::Uno::Content::Fonts::TextShader_type* SdfFontShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; ::g::Uno::Content::Fonts::TextShader_type* SpriteFontShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; TextShader_type* TextShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type; ::g::Uno::Content::Fonts::TextTransform_type* DefaultTextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type; TextTransform_type* TextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type;}}} namespace Fuse{namespace Controls{namespace Internal{::g::Uno::Content::Fonts::TextTransform_type* ProperTextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uClassType* FontFaceHelpers_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* BitmapFont__CharPair_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* BitmapFont__GlyphInfo_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* CppFontFaceHandle_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* RenderedGlyph_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uType* BitmapFont_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uType* TextRenderer_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uType* TextShaderData_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Images{uType* Bitmap_typeof();}}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Clock_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Debug_typeof();}}}
namespace g{namespace Uno{namespace Geometry{struct VertexEnumerable_type; VertexEnumerable_type* VertexEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Geometry{struct VertexEnumerator_type; VertexEnumerator_type* VertexEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uClassType* Collision_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uClassType* Collision2D_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Box_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Ray_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uType* CubicBezier_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uType* Vertex_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; ::g::Uno::Graphics::DeviceBuffer_type* IndexBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; ::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; DeviceBuffer_type* DeviceBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer_type; Framebuffer_type* Framebuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget_type; RenderTarget_type* RenderTarget_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D_type; Texture2D_type* Texture2D_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture_type; VideoTexture_type* VideoTexture_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* FormatHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* TextureHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uStructType* SamplerState_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uStructType* VertexAttributeInfo_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uType* GraphicsContext_typeof();}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader_type; BinaryReader_type* BinaryReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter_type; BinaryWriter_type* BinaryWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; ::g::Uno::IO::Stream_type* CppXliStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; ::g::Uno::IO::Stream_type* MemoryStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; Stream_type* Stream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Experimental{namespace Cache{::g::Uno::IO::Stream_type* ProxyStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Uno{namespace Net{namespace Sockets{::g::Uno::IO::Stream_type* NetworkStream_typeof();}}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; ::g::Uno::IO::TextReader_type* StreamReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; TextReader_type* TextReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; ::g::Uno::IO::TextWriter_type* StreamWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; TextWriter_type* TextWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* Directory_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* File_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* FileSystemImpl_typeof();}}}
namespace g{namespace Uno{namespace IO{uStructType* CppXliStreamHandle_typeof();}}}
namespace g{namespace Uno{namespace IO{uType* EndOfStreamException_typeof();}}}
namespace g{namespace Uno{namespace IO{uType* IOException_typeof();}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{struct AndroidHttpRequest_type; AndroidHttpRequest_type* AndroidHttpRequest_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpDefaultDispatcher_type; HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler_type; HttpMessageHandler_type* HttpMessageHandler_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest_type; HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpMessageCache_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpMessageHandler__StaticData_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uStructType* SchemeParserResult_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* AbsolutePathParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HashParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HostInfo_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HostInfoParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__DispatchClosure_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__DispatchClosure1_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__ProgressClosure_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* InvalidResponseTypeException_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* InvalidStateException_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* QueryParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* SchemeParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* Uri_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* UriFormatException_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* UriScheme_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* UserInfoParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{namespace Berkeley{uClassType* bsd_socket_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket_type; namespace Berkeley{::g::Uno::Net::Sockets::Socket_type* Socket_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket_type; Socket_type* Socket_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{uType* SocketException_typeof();}}}}
namespace g{namespace Uno{namespace Platform{uClassType* SystemUI_typeof();}}}
namespace g{namespace Uno{namespace Platform{uStructType* ViewNativeHandle_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* FrameChangedEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* KeyEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* PointerEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* SystemUIWillResizeEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* TextInputEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* TimerEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* Window_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uClassType* Application_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uStructType* Display__PrivateState_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uType* Display_typeof();}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerable_type; ArrayEnumerable_type* ArrayEnumerable_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerator_type; ArrayEnumerator_type* ArrayEnumerator_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayList_type; ArrayList_type* ArrayList_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringItem_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringLiteral_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; FormatStringToken_type* FormatStringToken_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* BootstrapHints_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* Bootstrapper_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* BufferConverters_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* NumericFormatter_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* WindowHelpers_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uType* FormatStringTokenizer_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLCompiledProgram_type; GLCompiledProgram_type* GLCompiledProgram_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uClassType* GLHelpers_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uClassType* GLInterop_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uStructType* GLDrawCall_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uType* GLException_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uType* GLProgram_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ArrayCopyImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ArraySortImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* BufferImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ClockImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* DebugImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* GenericEqualsImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* GraphicsContextImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* PlatformWindowImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* TextEncodingImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uStructType* GraphicsContextHandle_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uStructType* PlatformWindowHandle_typeof();}}}}
namespace g{namespace Uno{namespace Text{struct Decoder_type; ::g::Uno::Text::Decoder_type* UTF8Decoder_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Decoder_type; Decoder_type* Decoder_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Encoding_type; ::g::Uno::Text::Encoding_type* UTF8Encoding_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Encoding_type; Encoding_type* Encoding_typeof();}}}
namespace g{namespace Uno{namespace Text{uType* StringBuilder_typeof();}}}
namespace g{namespace Uno{namespace Text{uType* StringBuilderElement_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue_type; ConcurrentQueue_type* ConcurrentQueue_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct LockGuard_type; LockGuard_type* LockGuard_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Mutex_type; ::g::Uno::Threading::Mutex_type* POSIXMutex_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Mutex_type; Mutex_type* Mutex_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Thread_type; ::g::Uno::Threading::Thread_type* POSIXThread_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Thread_type; Thread_type* Thread_typeof();}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator_type; ::g::Uno::Time::Calendars::YearMonthDayCalculator_type* GregorianYearMonthDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator_type; YearMonthDayCalculator_type* YearMonthDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uClassType* TimeOfDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uType* Era_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uType* WeekYearCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* SignPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; PatternPart_type* PatternPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* FixedFormatPattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDateTimePattern__LocalDateTimeBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDateTimePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetPattern__OffsetBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetPattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; ::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; ::g::Uno::Time::DateTimeZone_type* FixedDateTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; DateTimeZone_type* DateTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Converter_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* HashCodeHelper_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Preconditions_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Instant_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Offset_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* CalendarSystem_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* LocalDateTime_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* ZonedDateTime_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type; ::g::Uno::UX::FileSource_type* BundleFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type; FileSource_type* FileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Reactive{::g::Uno::UX::FileSource_type* JSFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Resources{::g::Uno::UX::FileSource_type* FileResource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type; Property_type* Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* MainView__Fuse_Elements_Element_float_Opacity_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Animations_Change_1_float4_Value_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_Button_string_Text_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextControl_float_LineSpacing_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextControl_float4_TextColor_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextControl_Fuse_Elements_TextAlignment_TextAlignment_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextControl_Fuse_Elements_TextWrapping_TextWrapping_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextControl_Fuse_Font_Font_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextControl_string_Value_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextEdit_float4_PlaceholderColor_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Controls_TextEdit_string_PlaceholderText_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Drawing_Stroke_float_Width_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Effects_DropShadow_float4_Color_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Elements_Element_float_Height_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Elements_Element_float_Opacity_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Elements_Element_float_Width_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Input_Focus_bool_Focus_IsFocusable_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Translation_float_X_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Property_type* BasicStyle__Fuse_Triggers_WhileBool_bool_Value_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Property_type* GraphicsStyle__Fuse_Controls_ScrollView_bool_KeepFocusInView_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Property_type* GraphicsStyle__Fuse_Controls_ScrollView_bool_UserScroll_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Property_type* GraphicsStyle__Fuse_Gestures_Scroller_bool_UserScroll_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Property_type* GraphicsStyle__Fuse_Triggers_WhileBool_bool_Value_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type; Template_type* Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Android{::g::Uno::UX::Template_type* NativeStyle__Template__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Android{::g::Uno::UX::Template_type* NativeStyle__Template__Template2_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Android{::g::Uno::UX::Template_type* NativeStyle__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template2_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template3_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template4_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template5_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template6_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* PageControl__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template2_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template3_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template4_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template5_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template6_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template7_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template8_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template9_typeof();}}}
namespace g{namespace Uno{namespace UX{uClassType* StreamExtensions_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* Resource_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* ValueChangedArgs_typeof();}}}
namespace g{namespace Uno{uClassType* Array_typeof();}}
namespace g{namespace Uno{uClassType* Color_typeof();}}
namespace g{namespace Uno{uClassType* ColorHelper_typeof();}}
namespace g{namespace Uno{uClassType* GC_typeof();}}
namespace g{namespace Uno{uClassType* Generic_typeof();}}
namespace g{namespace Uno{uClassType* Math_typeof();}}
namespace g{namespace Uno{uClassType* Matrix_typeof();}}
namespace g{namespace Uno{uClassType* Quaternion_typeof();}}
namespace g{namespace Uno{uClassType* Vector_typeof();}}
namespace g{namespace Uno{uStructType* Bool_typeof();}}
namespace g{namespace Uno{uStructType* Byte_typeof();}}
namespace g{namespace Uno{uStructType* Byte4_typeof();}}
namespace g{namespace Uno{uStructType* Char_typeof();}}
namespace g{namespace Uno{uStructType* Double_typeof();}}
namespace g{namespace Uno{uStructType* Float_typeof();}}
namespace g{namespace Uno{uStructType* Float2_typeof();}}
namespace g{namespace Uno{uStructType* Float2x2_typeof();}}
namespace g{namespace Uno{uStructType* Float3_typeof();}}
namespace g{namespace Uno{uStructType* Float3x3_typeof();}}
namespace g{namespace Uno{uStructType* Float4_typeof();}}
namespace g{namespace Uno{uStructType* Float4x4_typeof();}}
namespace g{namespace Uno{uStructType* Int_typeof();}}
namespace g{namespace Uno{uStructType* Int2_typeof();}}
namespace g{namespace Uno{uStructType* Int4_typeof();}}
namespace g{namespace Uno{uStructType* IntPtr_typeof();}}
namespace g{namespace Uno{uStructType* Long_typeof();}}
namespace g{namespace Uno{uStructType* Rect_typeof();}}
namespace g{namespace Uno{uStructType* Recti_typeof();}}
namespace g{namespace Uno{uStructType* SByte_typeof();}}
namespace g{namespace Uno{uStructType* Short_typeof();}}
namespace g{namespace Uno{uStructType* UInt_typeof();}}
namespace g{namespace Uno{uStructType* ULong_typeof();}}
namespace g{namespace Uno{uStructType* UShort_typeof();}}
namespace g{namespace Uno{uStructType* UShort2_typeof();}}
namespace g{namespace Uno{uType* AggregateException_typeof();}}
namespace g{namespace Uno{uType* Application_typeof();}}
namespace g{namespace Uno{uType* ArgumentException_typeof();}}
namespace g{namespace Uno{uType* ArgumentNullException_typeof();}}
namespace g{namespace Uno{uType* ArgumentOutOfRangeException_typeof();}}
namespace g{namespace Uno{uType* Buffer_typeof();}}
namespace g{namespace Uno{uType* BundleFile_typeof();}}
namespace g{namespace Uno{uType* DateTime_typeof();}}
namespace g{namespace Uno{uType* Delegate_typeof();}}
namespace g{namespace Uno{uType* EventArgs_typeof();}}
namespace g{namespace Uno{uType* Exception_typeof();}}
namespace g{namespace Uno{uType* FormatException_typeof();}}
namespace g{namespace Uno{uType* IndexOutOfRangeException_typeof();}}
namespace g{namespace Uno{uType* InvalidCastException_typeof();}}
namespace g{namespace Uno{uType* InvalidOperationException_typeof();}}
namespace g{namespace Uno{uType* NotImplementedException_typeof();}}
namespace g{namespace Uno{uType* NotSupportedException_typeof();}}
namespace g{namespace Uno{uType* NullReferenceException_typeof();}}
namespace g{namespace Uno{uType* ObjectDisposedException_typeof();}}
namespace g{namespace Uno{uType* OverflowException_typeof();}}
namespace g{namespace Uno{uType* String_typeof();}}
namespace g{namespace Uno{uType* Type_typeof();}}
namespace g{namespace Uno{uType* WeakReference_typeof();}}
namespace g{uClassType* Fuse_Android_bundle_typeof();}
namespace g{uClassType* Fuse_BasicTheme_bundle_typeof();}
namespace g{uClassType* Fuse_Controls_bundle_typeof();}
namespace g{uClassType* Fuse_Drawing_bundle_typeof();}
namespace g{uClassType* Fuse_Drawing_Polygons_bundle_typeof();}
namespace g{uClassType* Fuse_Drawing_Primitives_bundle_typeof();}
namespace g{uClassType* Fuse_Effects_bundle_typeof();}
namespace g{uClassType* Fuse_Elements_bundle_typeof();}
namespace g{uClassType* Fuse_Entities_bundle_typeof();}
namespace g{uClassType* Fuse_Themes_bundle_typeof();}
namespace g{uClassType* Fuse_Video_bundle_typeof();}
namespace g{uClassType* FuseCore_bundle_typeof();}
namespace g{uClassType* Onboarding_bundle_typeof();}
namespace g{uClassType* UnoCore_bundle_typeof();}
void uInitRtti(uType*(*factories[])());

void uInitRtti()
{
    static uType*(*factories[])() =
    {
        (uType*(*)())&::g::Android::android::animation::Animator_typeof,
        (uType*(*)())&::g::Android::android::animation::TimeAnimator_typeof,
        (uType*(*)())&::g::Android::android::animation::ValueAnimator_typeof,
        (uType*(*)())&::g::Android::android::app::Activity_typeof,
        (uType*(*)())&::g::Android::android::app::Fragment_typeof,
        (uType*(*)())&::g::Android::android::app::TaskStackBuilder_typeof,
        (uType*(*)())&::g::Android::android::content::ComponentName_typeof,
        (uType*(*)())&::g::Android::android::content::Context_typeof,
        (uType*(*)())&::g::Android::android::content::ContextWrapper_typeof,
        (uType*(*)())&::g::Android::android::content::Intent_typeof,
        (uType*(*)())&::g::Android::android::content::res::AssetFileDescriptor_typeof,
        (uType*(*)())&::g::Android::android::content::res::AssetManager_typeof,
        (uType*(*)())&::g::Android::android::content::res::ColorStateList_typeof,
        (uType*(*)())&::g::Android::android::content::res::Configuration_typeof,
        (uType*(*)())&::g::Android::android::content::res::Resources_typeof,
        (uType*(*)())&::g::Android::android::graphics::Bitmap_typeof,
        (uType*(*)())&::g::Android::android::graphics::BitmapDLRConfig_typeof,
        (uType*(*)())&::g::Android::android::graphics::BitmapFactory_typeof,
        (uType*(*)())&::g::Android::android::graphics::Canvas_typeof,
        (uType*(*)())&::g::Android::android::graphics::Color_typeof,
        (uType*(*)())&::g::Android::android::graphics::drawable::Drawable_typeof,
        (uType*(*)())&::g::Android::android::graphics::drawable::LayerDrawable_typeof,
        (uType*(*)())&::g::Android::android::graphics::drawable::ShapeDrawable_typeof,
        (uType*(*)())&::g::Android::android::graphics::drawable::shapes::ArcShape_typeof,
        (uType*(*)())&::g::Android::android::graphics::drawable::shapes::RectShape_typeof,
        (uType*(*)())&::g::Android::android::graphics::drawable::shapes::RoundRectShape_typeof,
        (uType*(*)())&::g::Android::android::graphics::drawable::shapes::Shape_typeof,
        (uType*(*)())&::g::Android::android::graphics::Matrix_typeof,
        (uType*(*)())&::g::Android::android::graphics::Paint_typeof,
        (uType*(*)())&::g::Android::android::graphics::PaintDLRStyle_typeof,
        (uType*(*)())&::g::Android::android::graphics::PorterDuffDLRMode_typeof,
        (uType*(*)())&::g::Android::android::graphics::Rect_typeof,
        (uType*(*)())&::g::Android::android::graphics::RectF_typeof,
        (uType*(*)())&::g::Android::android::graphics::SurfaceTexture_typeof,
        (uType*(*)())&::g::Android::android::graphics::Typeface_typeof,
        (uType*(*)())&::g::Android::android::media::AudioManager_typeof,
        (uType*(*)())&::g::Android::android::media::MediaPlayer_typeof,
        (uType*(*)())&::g::Android::android::net::Uri_typeof,
        (uType*(*)())&::g::Android::android::opengl::GLUtils_typeof,
        (uType*(*)())&::g::Android::android::os::BuildDLRVERSION_typeof,
        (uType*(*)())&::g::Android::android::os::Bundle_typeof,
        (uType*(*)())&::g::Android::android::os::Parcel_typeof,
        (uType*(*)())&::g::Android::android::os::Vibrator_typeof,
        (uType*(*)())&::g::Android::android::test::mock::MockContext_typeof,
        (uType*(*)())&::g::Android::android::text::Layout_typeof,
        (uType*(*)())&::g::Android::android::text::LayoutDLRAlignment_typeof,
        (uType*(*)())&::g::Android::android::text::StaticLayout_typeof,
        (uType*(*)())&::g::Android::android::text::TextPaint_typeof,
        (uType*(*)())&::g::Android::android::text::TextUtilsDLRTruncateAt_typeof,
        (uType*(*)())&::g::Android::android::util::TypedValue_typeof,
        (uType*(*)())&::g::Android::android::view::ActionMode_typeof,
        (uType*(*)())&::g::Android::android::view::ActionProvider_typeof,
        (uType*(*)())&::g::Android::android::view::Choreographer_typeof,
        (uType*(*)())&::g::Android::android::view::ContextThemeWrapper_typeof,
        (uType*(*)())&::g::Android::android::view::Gravity_typeof,
        (uType*(*)())&::g::Android::android::view::inputmethod::InputMethodManager_typeof,
        (uType*(*)())&::g::Android::android::view::KeyEvent_typeof,
        (uType*(*)())&::g::Android::android::view::MotionEvent_typeof,
        (uType*(*)())&::g::Android::android::view::Surface_typeof,
        (uType*(*)())&::g::Android::android::view::SurfaceView_typeof,
        (uType*(*)())&::g::Android::android::view::TextureView_typeof,
        (uType*(*)())&::g::Android::android::view::View_typeof,
        (uType*(*)())&::g::Android::android::view::ViewDLRMeasureSpec_typeof,
        (uType*(*)())&::g::Android::android::view::ViewGroup_typeof,
        (uType*(*)())&::g::Android::android::view::ViewGroupDLRLayoutParams_typeof,
        (uType*(*)())&::g::Android::android::view::ViewGroupDLRMarginLayoutParams_typeof,
        (uType*(*)())&::g::Android::android::view::WindowManagerDLRLayoutParams_typeof,
        (uType*(*)())&::g::Android::android::webkit::WebChromeClient_typeof,
        (uType*(*)())&::g::Android::android::webkit::WebSettings_typeof,
        (uType*(*)())&::g::Android::android::webkit::WebView_typeof,
        (uType*(*)())&::g::Android::android::webkit::WebViewClient_typeof,
        (uType*(*)())&::g::Android::android::widget::AbsoluteLayout_typeof,
        (uType*(*)())&::g::Android::android::widget::AbsSeekBar_typeof,
        (uType*(*)())&::g::Android::android::widget::Button_typeof,
        (uType*(*)())&::g::Android::android::widget::CompoundButton_typeof,
        (uType*(*)())&::g::Android::android::widget::EditText_typeof,
        (uType*(*)())&::g::Android::android::widget::FrameLayout_typeof,
        (uType*(*)())&::g::Android::android::widget::FrameLayoutDLRLayoutParams_typeof,
        (uType*(*)())&::g::Android::android::widget::HorizontalScrollView_typeof,
        (uType*(*)())&::g::Android::android::widget::ImageView_typeof,
        (uType*(*)())&::g::Android::android::widget::ImageViewDLRScaleType_typeof,
        (uType*(*)())&::g::Android::android::widget::ProgressBar_typeof,
        (uType*(*)())&::g::Android::android::widget::RelativeLayout_typeof,
        (uType*(*)())&::g::Android::android::widget::RelativeLayoutDLRLayoutParams_typeof,
        (uType*(*)())&::g::Android::android::widget::ScrollView_typeof,
        (uType*(*)())&::g::Android::android::widget::SeekBar_typeof,
        (uType*(*)())&::g::Android::android::widget::Switch_typeof,
        (uType*(*)())&::g::Android::android::widget::TextView_typeof,
        (uType*(*)())&::g::Android::Base::AndroidBindingMacros_typeof,
        (uType*(*)())&::g::Android::Base::JNI_typeof,
        (uType*(*)())&::g::Android::Base::Permissions_typeof,
        (uType*(*)())&::g::Android::Base::PlatPermission_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ConstCharPtr_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::JavaVMPtr_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::jfieldID_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::jmethodID_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::JNIEnvPtr_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::JNINativeMethod_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::jweak_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujboolean_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujbyte_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujchar_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujclass_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujdouble_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujfloat_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujint_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujlong_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujobject_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujshort_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujstring_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujvalue_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::uweakptr_typeof,
        (uType*(*)())&::g::Android::Base::Types::Arrays_typeof,
        (uType*(*)())&::g::Android::Base::Types::Bridge_typeof,
        (uType*(*)())&::g::Android::Base::Types::ByteBuffer_typeof,
        (uType*(*)())&::g::Android::Base::Types::String_typeof,
        (uType*(*)())&::g::Android::Base::Versions_typeof,
        (uType*(*)())&::g::Android::Base::Wrappers::JWrapper_typeof,
        (uType*(*)())&::g::Android::Bootstrapper_typeof,
        (uType*(*)())&::g::Android::com::fuse::ExperimentalHttp::HttpRequest_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_animation_Animator_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_content_Context_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_graphics_drawable_shapes_Shape_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_media_AudioManagerDLROnAudioFocusChangeListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnCompletionListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnErrorListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnPreparedListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_net_Uri_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_os_IBinder_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_os_IInterface_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_os_Vibrator_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_text_Editable_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_text_GetChars_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_text_InputFilter_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_text_Layout_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_text_Spannable_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_text_Spanned_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_text_TextWatcher_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_util_AttributeSet_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_ActionMode_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_ActionProvider_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_Menu_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_MenuItem_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_SubMenu_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_SurfaceHolder_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_view_ViewGroup_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_webkit_WebSettings_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_widget_AbsSeekBar_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_widget_CompoundButton_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_java_io_InputStream_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_java_lang_Runnable_typeof,
        (uType*(*)())&::g::Android::Fallbacks::Android_java_util_Observer_typeof,
        (uType*(*)())&::g::Android::java::io::FileDescriptor_typeof,
        (uType*(*)())&::g::Android::java::io::InputStream_typeof,
        (uType*(*)())&::g::Android::java::lang::Class_typeof,
        (uType*(*)())&::g::Android::java::lang::Object_typeof,
        (uType*(*)())&::g::Android::java::lang::reflect::AccessibleObject_typeof,
        (uType*(*)())&::g::Android::java::lang::reflect::Field_typeof,
        (uType*(*)())&::g::Android::java::lang::String_typeof,
        (uType*(*)())&::g::Android::java::lang::System_typeof,
        (uType*(*)())&::g::Android::java::lang::Thread_typeof,
        (uType*(*)())&::g::Android::java::net::URL_typeof,
        (uType*(*)())&::g::Android::java::util::Observable_typeof,
        (uType*(*)())&::g::Android::Runtime::BooleanArray_typeof,
        (uType*(*)())&::g::Android::Runtime::ByteArray_typeof,
        (uType*(*)())&::g::Android::Runtime::CharArray_typeof,
        (uType*(*)())&::g::Android::Runtime::DoubleArray_typeof,
        (uType*(*)())&::g::Android::Runtime::FloatArray_typeof,
        (uType*(*)())&::g::Android::Runtime::IntArray_typeof,
        (uType*(*)())&::g::Android::Runtime::JAEnumerator_typeof,
        (uType*(*)())&::g::Android::Runtime::JOAEnumerator_typeof,
        (uType*(*)())&::g::Android::Runtime::LongArray_typeof,
        (uType*(*)())&::g::Android::Runtime::NativeActivityHelper_typeof,
        (uType*(*)())&::g::Android::Runtime::ObjectArray_typeof,
        (uType*(*)())&::g::Android::Runtime::ObjectArrayAUX_typeof,
        (uType*(*)())&::g::Android::Runtime::RunnableAction_typeof,
        (uType*(*)())&::g::Android::Runtime::ShortArray_typeof,
        (uType*(*)())&::g::Android::Runtime::UnoHelper_typeof,
        (uType*(*)())&::g::Experimental::Cache::ProxyStream_typeof,
        (uType*(*)())&::g::Experimental::Http::BinaryLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::HttpLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::HttpResponseHeader_typeof,
        (uType*(*)())&::g::Experimental::Http::Internal::DateUtil_typeof,
        (uType*(*)())&::g::Experimental::Http::Loader_typeof,
        (uType*(*)())&::g::Experimental::Http::LoaderConst_typeof,
        (uType*(*)())&::g::Experimental::Http::TextLoader_typeof,
        (uType*(*)())&::g::Experimental::Physics::BasicBoundedRegion2D_typeof,
        (uType*(*)())&::g::Experimental::Physics::ElasticForce_typeof,
        (uType*(*)())&::g::Experimental::Physics::Friction_typeof,
        (uType*(*)())&::g::Experimental::Physics::PointerVelocity_typeof,
        (uType*(*)())&::g::Experimental::Physics::SmoothSnap_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::Callback_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::InvalidContentTypeException_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::TextureLoader_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::TextureLoaderImpl_typeof,
        (uType*(*)())&::g::Fuse::Android::AndroidExtensions_typeof,
        (uType*(*)())&::g::Fuse::Android::BindingView_typeof,
        (uType*(*)())&::g::Fuse::Android::Blitter_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::AndroidSeekBar_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::BitmapFactory_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Button_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::CheckBox_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Circle_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::CompoundButton__Listener_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::CompoundButton_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Control_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::EditorActionArgs_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::EditorActionListener_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Element_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::FocusManager_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Image__ImageLoader_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Image_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::JsResultHandler_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::MapView_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::PlainTextEdit_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::ProgressChangedListener_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::RadioButton_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::SeekBar_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Shape_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Switch_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::TextChangedListener_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::TextEdit_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::TextView_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::TextViewBase_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::ToggleButton_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebChromeClient_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebViewClient_typeof,
        (uType*(*)())&::g::Fuse::Android::FocusChangedListener_typeof,
        (uType*(*)())&::g::Fuse::Android::Helpers_typeof,
        (uType*(*)())&::g::Fuse::Android::InputDispatch__TouchListener_typeof,
        (uType*(*)())&::g::Fuse::Android::InputDispatch_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeStyle__Template__Template1_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeStyle__Template__Template2__Factory_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeStyle__Template__Template2__Factory1_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeStyle__Template__Template2_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeStyle__Template_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeStyle_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeTemplate_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::ContentControl_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::GLSurfaceTextureListener_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::HorizontalScrollView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::LeafNativeView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::NativeView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::NativeViewHost_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::Panel_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::ParentNativeView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::SurfaceCallback_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::SurfaceView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::TextureView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::VerticalScrollView_typeof,
        (uType*(*)())&::g::Fuse::Android::RootView_typeof,
        (uType*(*)())&::g::Fuse::Android::RootViewContainer_typeof,
        (uType*(*)())&::g::Fuse::Android::TextControlLayout_typeof,
        (uType*(*)())&::g::Fuse::Android::TextRenderer__BackgroundRender_typeof,
        (uType*(*)())&::g::Fuse::Android::TextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Android::TypefaceCache_typeof,
        (uType*(*)())&::g::Fuse::Animations::Animator_typeof,
        (uType*(*)())&::g::Fuse::Animations::AnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::Change_typeof,
        (uType*(*)())&::g::Fuse::Animations::ContinuousTrackChangeState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Converter_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterDouble_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat2_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat3_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat4_typeof,
        (uType*(*)())&::g::Fuse::Animations::CreateStateParams_typeof,
        (uType*(*)())&::g::Fuse::Animations::Cycle_typeof,
        (uType*(*)())&::g::Fuse::Animations::CycleState_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteSingleTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteTrackChangeState_typeof,
        (uType*(*)())&::g::Fuse::Animations::EasingFunctions_typeof,
        (uType*(*)())&::g::Fuse::Animations::EasingTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::FastMatrixTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterBase__GFWResult_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterBase_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::Mixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::MixerBase_typeof,
        (uType*(*)())&::g::Fuse::Animations::MixerHandle_typeof,
        (uType*(*)())&::g::Fuse::Animations::Move_typeof,
        (uType*(*)())&::g::Fuse::Animations::Nothing_typeof,
        (uType*(*)())&::g::Fuse::Animations::NothingAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::OpenAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::OpenAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Player_typeof,
        (uType*(*)())&::g::Fuse::Animations::PlayerPart_typeof,
        (uType*(*)())&::g::Fuse::Animations::Resize_typeof,
        (uType*(*)())&::g::Fuse::Animations::ResizeAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Rotate_typeof,
        (uType*(*)())&::g::Fuse::Animations::Scale_typeof,
        (uType*(*)())&::g::Fuse::Animations::Skew_typeof,
        (uType*(*)())&::g::Fuse::Animations::Spin_typeof,
        (uType*(*)())&::g::Fuse::Animations::SpinState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TrackAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::TrackAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TransformAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::TransformAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TriggerAnimation_typeof,
        (uType*(*)())&::g::Fuse::Animations::TriggerAnimationState_typeof,
        (uType*(*)())&::g::Fuse::App__FrameCallback_typeof,
        (uType*(*)())&::g::Fuse::App__TimeListener_typeof,
        (uType*(*)())&::g::Fuse::App_typeof,
        (uType*(*)())&::g::Fuse::AppBase_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Animations_Change_1_float4_Value_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_Button_string_Text_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextControl_float_FontSize_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextControl_float_LineSpacing_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextControl_float4_TextColor_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextControl_Fuse_Elements_TextAlignment_TextAlignment_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextControl_Fuse_Elements_TextWrapping_TextWrapping_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextControl_Fuse_Font_Font_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextControl_string_Value_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextEdit_float4_PlaceholderColor_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Controls_TextEdit_string_PlaceholderText_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_SolidColor_float4_Color_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Drawing_Stroke_float_Width_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Effects_DropShadow_float4_Color_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Elements_Element_float_Height_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Elements_Element_float_Opacity_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Elements_Element_float_Width_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Input_Focus_bool_Focus_IsFocusable_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Translation_float_X_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Fuse_Triggers_WhileBool_bool_Value_Property_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template__Template1_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template1_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template2_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template3_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template4_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template5_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template6_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicTheme_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::ButtonText_typeof,
        (uType*(*)())&::g::Fuse::BeginRemoveArgs_typeof,
        (uType*(*)())&::g::Fuse::Behavior_typeof,
        (uType*(*)())&::g::Fuse::CacheFramebuffer_typeof,
        (uType*(*)())&::g::Fuse::Controls::BackButton_typeof,
        (uType*(*)())&::g::Fuse::Controls::BeginRemoveArgsImpl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Button_typeof,
        (uType*(*)())&::g::Fuse::Controls::Circle_typeof,
        (uType*(*)())&::g::Fuse::Controls::ContentControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Control_typeof,
        (uType*(*)())&::g::Fuse::Controls::DefaultSwitchBehavior_typeof,
        (uType*(*)())&::g::Fuse::Controls::DockPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Ellipse_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__SwipeGestureHelper_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextWindow_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackWebViewClient_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::CircleVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::ControlVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::DefaultTextVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::EllipseVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::ImageElementDraw_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::ImageVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::LinearSliderBehavior_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::PathShapeVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::PathVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::RectangleVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::RegularPolygonVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::ShapeVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::StarVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::TextVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::Visual_typeof,
        (uType*(*)())&::g::Fuse::Controls::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Grid_typeof,
        (uType*(*)())&::g::Fuse::Controls::Image_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::DefaultTextRenderer__FontKey_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::DefaultTextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::ProperTextTransform_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::WordWrapInfo_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::WordWrapper_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::WordWrapperWord_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::WrappedLine_typeof,
        (uType*(*)())&::g::Fuse::Controls::JavaScriptCall_typeof,
        (uType*(*)())&::g::Fuse::Controls::LoadHtmlCall_typeof,
        (uType*(*)())&::g::Fuse::Controls::MapView_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationBar_typeof,
        (uType*(*)())&::g::Fuse::Controls::Number_typeof,
        (uType*(*)())&::g::Fuse::Controls::Page_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControl__Template_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicator_typeof,
        (uType*(*)())&::g::Fuse::Controls::Panel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Path_typeof,
        (uType*(*)())&::g::Fuse::Controls::PlainTextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::PropertyBinding_typeof,
        (uType*(*)())&::g::Fuse::Controls::RangeControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Controls::RegularPolygon_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollPropertyChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Shape_typeof,
        (uType*(*)())&::g::Fuse::Controls::Slider_typeof,
        (uType*(*)())&::g::Fuse::Controls::StackPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Star_typeof,
        (uType*(*)())&::g::Fuse::Controls::Switch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Text_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextBlock_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInput_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInputActionArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::Toggle_typeof,
        (uType*(*)())&::g::Fuse::Controls::ToggleControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Video_typeof,
        (uType*(*)())&::g::Fuse::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::Diagnostics_typeof,
        (uType*(*)())&::g::Fuse::DrawArgs_typeof,
        (uType*(*)())&::g::Fuse::DrawContext_typeof,
        (uType*(*)())&::g::Fuse::DrawHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::BezierOp_typeof,
        (uType*(*)())&::g::Fuse::Drawing::BlendModeHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Border_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ButtCap_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Cache_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ClosePath_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Contour_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourTerminator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::CurveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::DynamicBrush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::EllipseFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::GradientStop_typeof,
        (uType*(*)())&::g::Fuse::Drawing::HorizontalLineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ImageFill__DrawParams_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ImageFill_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::Float2Buffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::FloatBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::TypedBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::UShortBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LinearGradient_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LinearGradientDrawable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LineCapImpl_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::MoveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveExtension_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometry_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryExtensions_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryParser_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryRenderer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Polygon_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PolygonDrawable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PolygonFiller_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Circle_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Coverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::FillCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::LimitCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Wedge_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RegularPolygonFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RendererContext_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RoundCap_typeof,
        (uType*(*)())&::g::Fuse::Drawing::SmoothCurveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::SolidColor_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StarFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StaticBrush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StaticSolidColor_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Stroke_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::ActiveRegion_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::Dict_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::VertexQueue_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::EdgeLoopEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::EdgesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Face_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::FacesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Geom_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::HalfEdge_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Mesh_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::MeshBuilder_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::OriginEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Sweep_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Vertex_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::VerticesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Token_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Util_typeof,
        (uType*(*)())&::g::Fuse::Drawing::VerticalLineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::WindingRules_typeof,
        (uType*(*)())&::g::Fuse::Effects::BasicEffect_typeof,
        (uType*(*)())&::g::Fuse::Effects::Blur_typeof,
        (uType*(*)())&::g::Fuse::Effects::Desaturate_typeof,
        (uType*(*)())&::g::Fuse::Effects::DropShadow__Blitter_typeof,
        (uType*(*)())&::g::Fuse::Effects::DropShadow_typeof,
        (uType*(*)())&::g::Fuse::Effects::Effect_typeof,
        (uType*(*)())&::g::Fuse::Effects::EffectHelpers_typeof,
        (uType*(*)())&::g::Fuse::Effects::Halftone_typeof,
        (uType*(*)())&::g::Fuse::Effects::Mask_typeof,
        (uType*(*)())&::g::Fuse::Elements::AlignmentHelpers_typeof,
        (uType*(*)())&::g::Fuse::Elements::BoxPlacement_typeof,
        (uType*(*)())&::g::Fuse::Elements::BoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::Cache_typeof,
        (uType*(*)())&::g::Fuse::Elements::CacheHelper_typeof,
        (uType*(*)())&::g::Fuse::Elements::CacheTile_typeof,
        (uType*(*)())&::g::Fuse::Elements::DisplayHelpers_typeof,
        (uType*(*)())&::g::Fuse::Elements::Element__GMSCacheItem_typeof,
        (uType*(*)())&::g::Fuse::Elements::Element_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlas_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebuffer_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatch_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatchEntry_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatcher_typeof,
        (uType*(*)())&::g::Fuse::Elements::Internal::ElementDraw_typeof,
        (uType*(*)())&::g::Fuse::Elements::Internal::Scale9Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::LimitBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::PreplacementArgs_typeof,
        (uType*(*)())&::g::Fuse::Elements::SingleNodeDrawable_typeof,
        (uType*(*)())&::g::Fuse::Elements::StandardBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::TextureAtlas_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__AnchorOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__BoxCenter_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__CenterOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__TopLeftOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins_typeof,
        (uType*(*)())&::g::Fuse::Elements::Viewport_typeof,
        (uType*(*)())&::g::Fuse::Entities::Entity_typeof,
        (uType*(*)())&::g::Fuse::Entities::Transform3D_typeof,
        (uType*(*)())&::g::Fuse::FastMatrix_typeof,
        (uType*(*)())&::g::Fuse::FixedViewport_typeof,
        (uType*(*)())&::g::Fuse::Font_typeof,
        (uType*(*)())&::g::Fuse::Fonts_typeof,
        (uType*(*)())&::g::Fuse::FramebufferPool_typeof,
        (uType*(*)())&::g::Fuse::FramebufferPoolImpl_typeof,
        (uType*(*)())&::g::Fuse::FrustumViewport_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Clicker_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ClickerTrigger_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DegreeSpan_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::EdgeSwiper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::Swiper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::SwipeRegion_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepFocusInView_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepInViewCommon_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ScrollableGoto_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Scroller_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SetSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipeGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipeGestureHelper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Tapped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::TappedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ToggleSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhilePressed_typeof,
        (uType*(*)())&::g::Fuse::GraphicsTheme_typeof,
        (uType*(*)())&::g::Fuse::GraphicsWorker_typeof,
        (uType*(*)())&::g::Fuse::HitTestContext_typeof,
        (uType*(*)())&::g::Fuse::HitTestResult_typeof,
        (uType*(*)())&::g::Fuse::Input::Capturer_typeof,
        (uType*(*)())&::g::Fuse::Input::CustomPointerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Focus_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusGained_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusGainedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusLost_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusLostArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusPredictStrategy_typeof,
        (uType*(*)())&::g::Fuse::Input::HitTestHelpers_typeof,
        (uType*(*)())&::g::Fuse::Input::IsFocusableChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::IsFocusableChangedEvent_typeof,
        (uType*(*)())&::g::Fuse::Input::Keyboard_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyPressed_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyReleased_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyReleasedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__DefaultPointerEventResponder_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__PELHolder_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__PointerRecord_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEntered_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEnteredArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEventData_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerLeft_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerLeftArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerMoved_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerMovedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerPressed_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerReleased_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerReleasedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerWheelMoved_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerWheelMovedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::SelectionQuery_typeof,
        (uType*(*)())&::g::Fuse::Input::TextEntered_typeof,
        (uType*(*)())&::g::Fuse::Input::TextEnteredArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::TextService_typeof,
        (uType*(*)())&::g::Fuse::Input::TraverseNodeExtensions_typeof,
        (uType*(*)())&::g::Fuse::Internal::Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::BlenderMap_typeof,
        (uType*(*)())&::g::Fuse::Internal::DoubleBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Drawing::SolidRectangle_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float2Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float3Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float4Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::FloatBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::FrustumMatrix_typeof,
        (uType*(*)())&::g::Fuse::Internal::ImageContainer_typeof,
        (uType*(*)())&::g::Fuse::Internal::RectExtensions_typeof,
        (uType*(*)())&::g::Fuse::Internal::SimpleLock_typeof,
        (uType*(*)())&::g::Fuse::Internal::SizingContainer_typeof,
        (uType*(*)())&::g::Fuse::Internal::Statistics_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Button_typeof,
        (uType*(*)())&::g::Fuse::iOS::TextRenderer_typeof,
        (uType*(*)())&::g::Fuse::KeyboardBootstrapper_typeof,
        (uType*(*)())&::g::Fuse::Launcher_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Column_typeof,
        (uType*(*)())&::g::Fuse::Layouts::ColumnLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefaultLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefinitionBase_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DockLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::GridLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Layout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Layouts_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Row_typeof,
        (uType*(*)())&::g::Fuse::Layouts::StackLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::WrapLayout_typeof,
        (uType*(*)())&::g::Fuse::MobileBootstrapping_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ActivatingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DeactivatingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DefaultNavigationAnimator_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DirectNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EdgeNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EndSeekArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EnterExitAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EnteringAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ExitingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::GoBack_typeof,
        (uType*(*)())&::g::Fuse::Navigation::GoForward_typeof,
        (uType*(*)())&::g::Fuse::Navigation::LinearNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigatedArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigateTo_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigateToggle_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Navigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationPageProperty_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationStateArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationTriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationTween_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavTriggerUtil_typeof,
        (uType*(*)())&::g::Fuse::Navigation::PlayerFactory_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ProgressSpan_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ProgressTimer_typeof,
        (uType*(*)())&::g::Fuse::Navigation::SeekNavigationAnimatorPlayer_typeof,
        (uType*(*)())&::g::Fuse::Navigation::StructuredNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::SwipeNavigate_typeof,
        (uType*(*)())&::g::Fuse::Navigation::UpdateSeekArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileActive_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInactive_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInEnterState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInExitState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileNavigationTrigger_typeof,
        (uType*(*)())&::g::Fuse::Node__HitTestRecord_typeof,
        (uType*(*)())&::g::Fuse::Node_typeof,
        (uType*(*)())&::g::Fuse::NodeBounds_typeof,
        (uType*(*)())&::g::Fuse::NodeEvent_typeof,
        (uType*(*)())&::g::Fuse::NodeEventArgs_typeof,
        (uType*(*)())&::g::Fuse::NodeListCache_typeof,
        (uType*(*)())&::g::Fuse::OrthographicFrustum_typeof,
        (uType*(*)())&::g::Fuse::PlacedArgs_typeof,
        (uType*(*)())&::g::Fuse::Preview::SelectionManager_typeof,
        (uType*(*)())&::g::Fuse::Properties_typeof,
        (uType*(*)())&::g::Fuse::PropertyHandle_typeof,
        (uType*(*)())&::g::Fuse::Reactive::JSFileSource_typeof,
        (uType*(*)())&::g::Fuse::RenderTargetEntry_typeof,
        (uType*(*)())&::g::Fuse::RequestBringIntoViewArgs_typeof,
        (uType*(*)())&::g::Fuse::Resources::DisposalManager_typeof,
        (uType*(*)())&::g::Fuse::Resources::DoubleResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceCache_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceImpl_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileResource_typeof,
        (uType*(*)())&::g::Fuse::Resources::FloatResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::GenericResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceCache_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceImpl_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSourceErrorArgs_typeof,
        (uType*(*)())&::g::Fuse::Resources::IntResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::LoadingImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::MemoryPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::MultiDensityImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::NumericResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::ProxyImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceConverters_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceRegistry_typeof,
        (uType*(*)())&::g::Fuse::Resources::TextureImageSource_typeof,
        (uType*(*)())&::g::Fuse::RootViewport_typeof,
        (uType*(*)())&::g::Fuse::Rotation_typeof,
        (uType*(*)())&::g::Fuse::Scaling_typeof,
        (uType*(*)())&::g::Fuse::ScalingModes__IdentityMode_typeof,
        (uType*(*)())&::g::Fuse::ScalingModes_typeof,
        (uType*(*)())&::g::Fuse::Scripting::BoolChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::DoubleChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NameRegistry_typeof,
        (uType*(*)())&::g::Fuse::Scripting::StringChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Circle_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Ellipse_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Path_typeof,
        (uType*(*)())&::g::Fuse::Shapes::PathShape_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Shapes::RegularPolygon_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Shape_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Star_typeof,
        (uType*(*)())&::g::Fuse::Shear_typeof,
        (uType*(*)())&::g::Fuse::Stage_typeof,
        (uType*(*)())&::g::Fuse::Style_typeof,
        (uType*(*)())&::g::Fuse::StyleProperty_typeof,
        (uType*(*)())&::g::Fuse::StyleProperty1_typeof,
        (uType*(*)())&::g::Fuse::StylePropertyWithUnit_typeof,
        (uType*(*)())&::g::Fuse::Theme_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Fuse_Controls_ScrollView_bool_KeepFocusInView_Property_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Fuse_Controls_ScrollView_bool_UserScroll_Property_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Fuse_Gestures_Scroller_bool_UserScroll_Property_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Fuse_Triggers_WhileBool_bool_Value_Property_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template1_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template2_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template3_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template4_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template5_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template6_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template7_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template8_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template9_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle_typeof,
        (uType*(*)())&::g::Fuse::Time_typeof,
        (uType*(*)())&::g::Fuse::Transform_typeof,
        (uType*(*)())&::g::Fuse::Translation_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__LocalMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__ParentSizeMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__SizeMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::BringIntoView_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::BringToFront_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Call_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Callback_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Collapse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::EvaluateJS_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::GiveFocus_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Hide_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::JSEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LaunchEmail_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LaunchMaps_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LaunchUri_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LoadHtml_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LoadUrl_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Pause_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PlaybackAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PlayTo_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Pulse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::RaiseUserEvent_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::ReleaseFocus_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Reload_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Resume_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::SendToBack_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Set_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Show_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Stop_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::StopLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TransitionLayout_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TransitionState_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::UserEventArg_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::WebViewNavAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__PositionChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__ResizeChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__ScaleChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__WorldPositionChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransitioned_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransitionedArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ProgressAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::State_typeof,
        (uType*(*)())&::g::Fuse::Triggers::StateGroup_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Timeline_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Trigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileBool_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileCompleted_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileContainsText_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileDisabled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileEnabled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFailed_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFalse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFocused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFocusWithin_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileInteracting_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePaused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePlaying_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileTrue_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileValue_typeof,
        (uType*(*)())&::g::Fuse::UnhandledExceptionArgs_typeof,
        (uType*(*)())&::g::Fuse::UpdateDispatcher_typeof,
        (uType*(*)())&::g::Fuse::UpdateListener_typeof,
        (uType*(*)())&::g::Fuse::UpdateManager_typeof,
        (uType*(*)())&::g::Fuse::UserEvent_typeof,
        (uType*(*)())&::g::Fuse::UserEventArgs_typeof,
        (uType*(*)())&::g::Fuse::UserEventDispatch_typeof,
        (uType*(*)())&::g::Fuse::Vibration::Vibrate_typeof,
        (uType*(*)())&::g::Fuse::Vibration::Vibration_typeof,
        (uType*(*)())&::g::Fuse::Video::CancellationTokenSource_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::AndroidAudioHelpers_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::AndroidVideoLoader_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::CompletionEvent_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::ErrorEvent_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::ErrorEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::FrameAvailableEvent_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::PreparedEvent_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::VideoPlayer_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::Android::VideoSurface_typeof,
        (uType*(*)())&::g::Fuse::Video::LoadFailed_typeof,
        (uType*(*)())&::g::Fuse::Video::LoadResult_typeof,
        (uType*(*)())&::g::Fuse::Video::LoadSucceded_typeof,
        (uType*(*)())&::g::Fuse::Video::Scale9Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoContainer_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoDiskCache_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoDrawElement_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoLoader_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoVisual_typeof,
        (uType*(*)())&::g::Fuse_Android_bundle_typeof,
        (uType*(*)())&::g::Fuse_BasicTheme_bundle_typeof,
        (uType*(*)())&::g::Fuse_Controls_bundle_typeof,
        (uType*(*)())&::g::Fuse_Drawing_bundle_typeof,
        (uType*(*)())&::g::Fuse_Drawing_Polygons_bundle_typeof,
        (uType*(*)())&::g::Fuse_Drawing_Primitives_bundle_typeof,
        (uType*(*)())&::g::Fuse_Effects_bundle_typeof,
        (uType*(*)())&::g::Fuse_Elements_bundle_typeof,
        (uType*(*)())&::g::Fuse_Entities_bundle_typeof,
        (uType*(*)())&::g::Fuse_Themes_bundle_typeof,
        (uType*(*)())&::g::Fuse_Video_bundle_typeof,
        (uType*(*)())&::g::FuseCore_bundle_typeof,
        (uType*(*)())&::g::MainView__Fuse_Elements_Element_float_Opacity_Property_typeof,
        (uType*(*)())&::g::MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property_typeof,
        (uType*(*)())&::g::MainView_typeof,
        (uType*(*)())&::g::Onboarding_bundle_typeof,
        (uType*(*)())&::g::OpenGL::GL_typeof,
        (uType*(*)())&::g::OpenGL::GLBufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLFramebufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLProgramHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLRenderbufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLShaderHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLTextureHandle_typeof,
        (uType*(*)())&::g::Uno::AggregateException_typeof,
        (uType*(*)())&::g::Uno::Application_typeof,
        (uType*(*)())&::g::Uno::ArgumentException_typeof,
        (uType*(*)())&::g::Uno::ArgumentNullException_typeof,
        (uType*(*)())&::g::Uno::ArgumentOutOfRangeException_typeof,
        (uType*(*)())&::g::Uno::Array_typeof,
        (uType*(*)())&::g::Uno::Bool_typeof,
        (uType*(*)())&::g::Uno::Buffer_typeof,
        (uType*(*)())&::g::Uno::BundleFile_typeof,
        (uType*(*)())&::g::Uno::Byte_typeof,
        (uType*(*)())&::g::Uno::Byte4_typeof,
        (uType*(*)())&::g::Uno::Char_typeof,
        (uType*(*)())&::g::Uno::Collections::ConcurrentCollection__DeferLockImpl_typeof,
        (uType*(*)())&::g::Uno::Collections::ConcurrentCollection__ModItem_typeof,
        (uType*(*)())&::g::Uno::Collections::ConcurrentCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__Bucket_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__ValueCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary_typeof,
        (uType*(*)())&::g::Uno::Collections::EmptyEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::EmptyEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::EnumerableExtensions__LinkedList_typeof,
        (uType*(*)())&::g::Uno::Collections::EnumerableExtensions_typeof,
        (uType*(*)())&::g::Uno::Collections::HashSet__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::HashSet_typeof,
        (uType*(*)())&::g::Uno::Collections::IListExtensions_typeof,
        (uType*(*)())&::g::Uno::Collections::KeyValuePair_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedList__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedList_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedListNode_typeof,
        (uType*(*)())&::g::Uno::Collections::List__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::List_typeof,
        (uType*(*)())&::g::Uno::Collections::ObservableList_typeof,
        (uType*(*)())&::g::Uno::Collections::Queue__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Queue_typeof,
        (uType*(*)())&::g::Uno::Collections::ReadOnlyCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::SelectEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::SelectEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::UnionEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::UnionEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::WhereEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::WhereEnumerator_typeof,
        (uType*(*)())&::g::Uno::Color_typeof,
        (uType*(*)())&::g::Uno::ColorHelper_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont__CharPair_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont__GlyphInfo_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::CppFontFace_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::CppFontFaceHandle_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::DefaultTextTransform_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::FontFace_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::FontFaceHelpers_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::RenderedGlyph_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::SdfFontShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::SpriteFontShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextRenderer_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextShaderData_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextTransform_typeof,
        (uType*(*)())&::g::Uno::Content::Images::Bitmap_typeof,
        (uType*(*)())&::g::Uno::DateTime_typeof,
        (uType*(*)())&::g::Uno::Delegate_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Clock_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Debug_typeof,
        (uType*(*)())&::g::Uno::Double_typeof,
        (uType*(*)())&::g::Uno::EventArgs_typeof,
        (uType*(*)())&::g::Uno::Exception_typeof,
        (uType*(*)())&::g::Uno::Float_typeof,
        (uType*(*)())&::g::Uno::Float2_typeof,
        (uType*(*)())&::g::Uno::Float2x2_typeof,
        (uType*(*)())&::g::Uno::Float3_typeof,
        (uType*(*)())&::g::Uno::Float3x3_typeof,
        (uType*(*)())&::g::Uno::Float4_typeof,
        (uType*(*)())&::g::Uno::Float4x4_typeof,
        (uType*(*)())&::g::Uno::FormatException_typeof,
        (uType*(*)())&::g::Uno::GC_typeof,
        (uType*(*)())&::g::Uno::Generic_typeof,
        (uType*(*)())&::g::Uno::Geometry::Box_typeof,
        (uType*(*)())&::g::Uno::Geometry::Collision_typeof,
        (uType*(*)())&::g::Uno::Geometry::Collision2D_typeof,
        (uType*(*)())&::g::Uno::Geometry::CubicBezier_typeof,
        (uType*(*)())&::g::Uno::Geometry::Ray_typeof,
        (uType*(*)())&::g::Uno::Geometry::Vertex_typeof,
        (uType*(*)())&::g::Uno::Geometry::VertexEnumerable_typeof,
        (uType*(*)())&::g::Uno::Geometry::VertexEnumerator_typeof,
        (uType*(*)())&::g::Uno::Graphics::DeviceBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::FormatHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::Framebuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::GraphicsContext_typeof,
        (uType*(*)())&::g::Uno::Graphics::IndexBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::RenderTarget_typeof,
        (uType*(*)())&::g::Uno::Graphics::SamplerState_typeof,
        (uType*(*)())&::g::Uno::Graphics::Texture2D_typeof,
        (uType*(*)())&::g::Uno::Graphics::TextureHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexAttributeInfo_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::VideoTexture_typeof,
        (uType*(*)())&::g::Uno::IndexOutOfRangeException_typeof,
        (uType*(*)())&::g::Uno::Int_typeof,
        (uType*(*)())&::g::Uno::Int2_typeof,
        (uType*(*)())&::g::Uno::Int4_typeof,
        (uType*(*)())&::g::Uno::IntPtr_typeof,
        (uType*(*)())&::g::Uno::InvalidCastException_typeof,
        (uType*(*)())&::g::Uno::InvalidOperationException_typeof,
        (uType*(*)())&::g::Uno::IO::BinaryReader_typeof,
        (uType*(*)())&::g::Uno::IO::BinaryWriter_typeof,
        (uType*(*)())&::g::Uno::IO::CppXliStream_typeof,
        (uType*(*)())&::g::Uno::IO::CppXliStreamHandle_typeof,
        (uType*(*)())&::g::Uno::IO::Directory_typeof,
        (uType*(*)())&::g::Uno::IO::EndOfStreamException_typeof,
        (uType*(*)())&::g::Uno::IO::File_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemImpl_typeof,
        (uType*(*)())&::g::Uno::IO::IOException_typeof,
        (uType*(*)())&::g::Uno::IO::MemoryStream_typeof,
        (uType*(*)())&::g::Uno::IO::Stream_typeof,
        (uType*(*)())&::g::Uno::IO::StreamReader_typeof,
        (uType*(*)())&::g::Uno::IO::StreamWriter_typeof,
        (uType*(*)())&::g::Uno::IO::TextReader_typeof,
        (uType*(*)())&::g::Uno::IO::TextWriter_typeof,
        (uType*(*)())&::g::Uno::Long_typeof,
        (uType*(*)())&::g::Uno::Math_typeof,
        (uType*(*)())&::g::Uno::Matrix_typeof,
        (uType*(*)())&::g::Uno::Net::Http::AbsolutePathParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HashParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HostInfo_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HostInfoParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpDefaultDispatcher_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageCache_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandler__StaticData_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandler_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Implementation::AndroidHttpRequest_typeof,
        (uType*(*)())&::g::Uno::Net::Http::InvalidResponseTypeException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::InvalidStateException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::QueryParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::SchemeParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::SchemeParserResult_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Uri_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UriFormatException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UriScheme_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UserInfoParser_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Berkeley::bsd_socket_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Berkeley::Socket_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::NetworkStream_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Socket_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::SocketException_typeof,
        (uType*(*)())&::g::Uno::NotImplementedException_typeof,
        (uType*(*)())&::g::Uno::NotSupportedException_typeof,
        (uType*(*)())&::g::Uno::NullReferenceException_typeof,
        (uType*(*)())&::g::Uno::ObjectDisposedException_typeof,
        (uType*(*)())&::g::Uno::OverflowException_typeof,
        (uType*(*)())&::g::Uno::Platform::FrameChangedEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::KeyEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::PointerEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::SystemUI_typeof,
        (uType*(*)())&::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::TextInputEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::TimerEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::ViewNativeHandle_typeof,
        (uType*(*)())&::g::Uno::Platform::Window_typeof,
        (uType*(*)())&::g::Uno::Platform2::Application_typeof,
        (uType*(*)())&::g::Uno::Platform2::Display__PrivateState_typeof,
        (uType*(*)())&::g::Uno::Platform2::Display_typeof,
        (uType*(*)())&::g::Uno::Quaternion_typeof,
        (uType*(*)())&::g::Uno::Rect_typeof,
        (uType*(*)())&::g::Uno::Recti_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ArrayCopyImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ArraySortImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::BufferImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ClockImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::DebugImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GenericEqualsImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GraphicsContextImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayList_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BootstrapHints_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::Bootstrapper_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BufferConverters_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringItem_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringLiteral_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::NumericFormatter_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::WindowHelpers_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::PlatformWindowImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::TextEncodingImpl_typeof,
        (uType*(*)())&::g::Uno::SByte_typeof,
        (uType*(*)())&::g::Uno::Short_typeof,
        (uType*(*)())&::g::Uno::String_typeof,
        (uType*(*)())&::g::Uno::Text::Decoder_typeof,
        (uType*(*)())&::g::Uno::Text::Encoding_typeof,
        (uType*(*)())&::g::Uno::Text::StringBuilder_typeof,
        (uType*(*)())&::g::Uno::Text::StringBuilderElement_typeof,
        (uType*(*)())&::g::Uno::Text::UTF8Decoder_typeof,
        (uType*(*)())&::g::Uno::Text::UTF8Encoding_typeof,
        (uType*(*)())&::g::Uno::Threading::ConcurrentQueue_typeof,
        (uType*(*)())&::g::Uno::Threading::LockGuard_typeof,
        (uType*(*)())&::g::Uno::Threading::Mutex_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXMutex_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXThread_typeof,
        (uType*(*)())&::g::Uno::Threading::Thread_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::Era_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::GregorianYearMonthDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::TimeOfDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::WeekYearCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::CalendarSystem_typeof,
        (uType*(*)())&::g::Uno::Time::Converter_typeof,
        (uType*(*)())&::g::Uno::Time::DateTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::DeviceTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::FixedDateTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::HashCodeHelper_typeof,
        (uType*(*)())&::g::Uno::Time::Instant_typeof,
        (uType*(*)())&::g::Uno::Time::LocalDateTime_typeof,
        (uType*(*)())&::g::Uno::Time::Offset_typeof,
        (uType*(*)())&::g::Uno::Time::Preconditions_typeof,
        (uType*(*)())&::g::Uno::Time::Text::FixedFormatPattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDateTimePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::NumberPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPattern__OffsetBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::PatternPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::SeparatorPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::SignPart_typeof,
        (uType*(*)())&::g::Uno::Time::ZonedDateTime_typeof,
        (uType*(*)())&::g::Uno::Type_typeof,
        (uType*(*)())&::g::Uno::UInt_typeof,
        (uType*(*)())&::g::Uno::ULong_typeof,
        (uType*(*)())&::g::Uno::UShort_typeof,
        (uType*(*)())&::g::Uno::UShort2_typeof,
        (uType*(*)())&::g::Uno::UX::BundleFileSource_typeof,
        (uType*(*)())&::g::Uno::UX::FileSource_typeof,
        (uType*(*)())&::g::Uno::UX::Property_typeof,
        (uType*(*)())&::g::Uno::UX::Resource_typeof,
        (uType*(*)())&::g::Uno::UX::StreamExtensions_typeof,
        (uType*(*)())&::g::Uno::UX::Template_typeof,
        (uType*(*)())&::g::Uno::UX::ValueChangedArgs_typeof,
        (uType*(*)())&::g::Uno::Vector_typeof,
        (uType*(*)())&::g::Uno::WeakReference_typeof,
        (uType*(*)())&::g::UnoCore_bundle_typeof,
        NULL
    };

    uInitRtti(factories);
}

#include <_root.MainView.h>

void uStartApp()
{
    ::g::MainView::New1();
}

/** @} */
