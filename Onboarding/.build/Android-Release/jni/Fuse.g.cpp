// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseCore_bundle.h>
#include <Android.android.animation.Animator.h>
#include <Android.android.animation.TimeAnimator.h>
#include <Android.android.animation.TimeAnimatorDLRTimeListener.h>
#include <Android.android.animation.ValueAnimator.h>
#include <Android.android.app.Activity.h>
#include <Android.android.content.Intent.h>
#include <Android.android.net.Uri.h>
#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.view.Choreographer.h>
#include <Android.android.view.ChoreographerDLRFrameCallback.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Permissions.h>
#include <Android.Base.PlatPermission.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.String.h>
#include <Android.java.lang.System.h>
#include <Fuse.Android.NativeStyle.h>
#include <Fuse.App.FrameCallback.h>
#include <Fuse.App.h>
#include <Fuse.App.TimeListener.h>
#include <Fuse.AppBase.h>
#include <Fuse.BeginRemoveArgs.h>
#include <Fuse.BeginRemoveHandler.h>
#include <Fuse.Behavior.h>
#include <Fuse.Behavior.RootStatus.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawArgs.h>
#include <Fuse.DrawContext.h>
#include <Fuse.DrawHandler.h>
#include <Fuse.DrawHelpers.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.Font.h>
#include <Fuse.Fonts.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FramebufferPoolImpl.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.GraphicsTheme.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestHandler.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IFlush.h>
#include <Fuse.IFrustum.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusNavigationDirection.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.SimpleLock.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.KeyboardBootstrapper.h>
#include <Fuse.Launcher.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.MobileBootstrapping.h>
#include <Fuse.Node.h>
#include <Fuse.Node.HitTestRecord.h>
#include <Fuse.Node.NodeBits.h>
#include <Fuse.Node.RootStage.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.NodeEventMode.h>
#include <Fuse.NodeListCache.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.PropertyState.h>
#include <Fuse.RenderTargetEntry.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.ScalingModes.IdentityMode.h>
#include <Fuse.Scripting.NameRegistry.h>
#include <Fuse.Shear.h>
#include <Fuse.SizeFlags.h>
#include <Fuse.Stage.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Fuse.Theme.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.TranslationModes.LocalMode.h>
#include <Fuse.TranslationModes.ParentSizeMode.h>
#include <Fuse.TranslationModes.SizeMode.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.UpdateDispatcher.h>
#include <Fuse.UpdateListener.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLInteger4Name.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.BundleFile.h>
#include <Uno.Byte.h>
#include <Uno.Collections.ConcurrentCollection-1.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.Enumerator.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.Window.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
#include <Uno.Vector.h>
//~
JNFUN(void,Binding_Fuse_App_FrameCallback__doFrame21642,jlong ujPtr, jlong arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JTRY
    ::g::Android::android::view::ChoreographerDLRFrameCallback::doFrame(uInterface(uPtr, ::g::Android::android::view::ChoreographerDLRFrameCallback_typeof()), ((int64_t)arg0));
    JCATCH
}
JNFUN(void,Binding_Fuse_App_TimeListener__onTimeUpdate375,jlong ujPtr, jobject arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::android::animation::TimeAnimator*,((::g::Android::android::animation::TimeAnimator*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::animation::TimeAnimator_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::animation::TimeAnimatorDLRTimeListener::onTimeUpdate(uInterface(uPtr, ::g::Android::android::animation::TimeAnimatorDLRTimeListener_typeof()), tmparg3, ((int64_t)arg1), ((int64_t)arg2));
    JCATCH
}
static uString* STRINGS[62];
static uType* TYPES[166];

namespace g{
namespace Fuse{

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(9)
// --------------------------------------------------------

// public abstract extern class App :9
// {
::g::Fuse::AppBase_type* App_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(App);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("Fuse.App", options);
    type->SetBase(::g::Fuse::AppBase_typeof());
    type->fp_OnSetRootNode = (void(*)(::g::Fuse::AppBase*, ::g::Fuse::Node*))App__OnSetRootNode_fn;
    type->fp_OnSetTheme = (void(*)(::g::Fuse::AppBase*, ::g::Fuse::Theme*))App__OnSetTheme_fn;
    ::STRINGS[0] = uString::Const("RootViewport.Content is not null, unroot before changing theme");
    ::TYPES[0] = ::g::Fuse::AppBase_typeof();
    ::TYPES[1] = ::g::Fuse::Style_typeof();
    ::TYPES[2] = ::g::Uno::Application_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    ::TYPES[5] = ::g::Android::android::view::ChoreographerDLRFrameCallback_typeof();
    ::TYPES[6] = ::g::Android::android::animation::TimeAnimatorDLRTimeListener_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[8] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[9] = ::g::Fuse::GraphicsTheme_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::GraphicsView_typeof();
    type->SetFields(15,
        ::g::Fuse::Controls::GraphicsView_typeof(), offsetof(::g::Fuse::App, _graphicsView), 0);
    return type;
}

// public App() :13
void App__ctor_2_fn(App* __this)
{
    __this->ctor_2();
}

// protected override sealed void OnSetRootNode(Fuse.Node root) :114
void App__OnSetRootNode_fn(App* __this, ::g::Fuse::Node* root)
{
    if (__this->_graphicsView != NULL)
        uPtr(__this->_graphicsView)->Content(root);
    else
        uPtr(__this->RootViewport())->Content(root);
}

// protected override sealed void OnSetTheme(Fuse.Theme theme) :122
void App__OnSetTheme_fn(App* __this, ::g::Fuse::Theme* theme)
{
    if (uIs(theme, ::TYPES[9/*Fuse.GraphicsTheme*/]))
    {
        if (__this->_graphicsView == NULL)
        {
            if (uPtr(__this->RootViewport())->Content() != NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"RootViewpor...*/]));

            __this->_graphicsView = ::g::Fuse::Controls::GraphicsView::New2();
            uPtr(__this->_graphicsView)->IsFullScreen = true;
            uPtr(__this->RootViewport())->Content(__this->_graphicsView);
        }
    }
    else
    {
        if (__this->_graphicsView != NULL)
        {
            if (uPtr(__this->_graphicsView)->Content() != NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"RootViewpor...*/]));

            __this->_graphicsView = NULL;
            uPtr(__this->RootViewport())->Content(NULL);
        }
    }
}

// private void PropagateBackground() :35
void App__PropagateBackground_fn(App* __this)
{
    __this->PropagateBackground();
}

// public App() [instance] :13
void App::ctor_2()
{
    ctor_1();
    ::g::Fuse::MobileBootstrapping::Init();
    NativeStyle(::g::Fuse::Android::NativeStyle::New2());
    RootViewport(::g::Fuse::RootViewport::New1(Window(), -1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(RootViewport())->Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/]), NativeStyle());

    if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 16)
    {
        ::g::Android::android::view::Choreographer* choreographer = ::g::Android::android::view::Choreographer::getInstance();
        uPtr(choreographer)->postFrameCallback((uObject*)App__FrameCallback::New5(this));
    }
    else
    {
        ::g::Android::android::animation::TimeAnimator* anim = ::g::Android::android::animation::TimeAnimator::New7();
        anim->setDuration(100000000000LL);
        anim->setTimeListener((uObject*)App__TimeListener::New5(this));
        anim->start();
    }
}

// private void PropagateBackground() [instance] :35
void App::PropagateBackground()
{
    if (_graphicsView != NULL)
        uPtr(_graphicsView)->Background1(Background());
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(30)
// -----------------------------------------------------

// public abstract class AppBase :30
// {
AppBase_type* AppBase_typeof()
{
    static uSStrong<AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(AppBase);
    options.TypeSize = sizeof(AppBase_type);
    type = (AppBase_type*)uClassType::New("Fuse.AppBase", options);
    type->SetBase(::g::Uno::Application_typeof());
    type->fp_OnSetTheme = AppBase__OnSetTheme_fn;
    ::STRINGS[1] = uString::Const("Unhandled exception: \n"
        "\n"
        "");
    ::STRINGS[2] = uString::Const("\n"
        "\n"
        "");
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Fuse::GraphicsTheme_typeof();
    ::TYPES[2] = ::g::Uno::Application_typeof();
    ::TYPES[12] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[13] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Preview::SelectionManager_typeof();
    ::TYPES[16] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Fuse::Style_typeof();
    ::TYPES[18] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[19] = uObject_typeof();
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[22] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    ::TYPES[23] = ::g::Fuse::UnhandledExceptionArgs_typeof();
    ::TYPES[24] = ::g::Uno::AggregateException_typeof();
    ::TYPES[25] = ::g::Uno::Collections::ReadOnlyCollection_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[26] = ::g::Uno::Exception_typeof();
    type->SetFields(5,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AppBase, _hasPendingReify), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AppBase, _hasPendingRootNode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::AppBase, _pendingRootNode), 0,
        ::g::Fuse::Theme_typeof(), offsetof(::g::Fuse::AppBase, _pendingTheme), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::AppBase, _rootNode), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::AppBase, _selection), 0,
        ::g::Fuse::Theme_typeof(), offsetof(::g::Fuse::AppBase, _theme), 0,
        ::g::Fuse::Style_typeof(), offsetof(::g::Fuse::AppBase, _NativeStyle), 0,
        ::g::Fuse::RootViewport_typeof(), offsetof(::g::Fuse::AppBase, _RootViewport), 0,
        ::g::Fuse::UnhandledExceptionHandler_typeof(), offsetof(::g::Fuse::AppBase, UnhandledException1), 0);
    return type;
}

// protected AppBase() :36
void AppBase__ctor_1_fn(AppBase* __this)
{
    __this->ctor_1();
}

// public float4 get_Background() :130
void AppBase__get_Background_fn(AppBase* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background();
}

// public void set_Background(float4 value) :131
void AppBase__set_Background_fn(AppBase* __this, ::g::Uno::Float4* value)
{
    __this->Background(*value);
}

// private void CheckPendingReify() :153
void AppBase__CheckPendingReify_fn(AppBase* __this)
{
    __this->CheckPendingReify();
}

// public static new Fuse.AppBase get_Current() :125
void AppBase__get_Current1_fn(AppBase** __retval)
{
    *__retval = AppBase::Current1();
}

// public void DrawSelection(Fuse.DrawContext dc) :67
void AppBase__DrawSelection_fn(AppBase* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawSelection(dc);
}

// private void FindSelection(Fuse.Node n) :59
void AppBase__FindSelection_fn(AppBase* __this, ::g::Fuse::Node* n)
{
    __this->FindSelection(n);
}

// internal generated Fuse.Style get_NativeStyle() :34
void AppBase__get_NativeStyle_fn(AppBase* __this, ::g::Fuse::Style** __retval)
{
    *__retval = __this->NativeStyle();
}

// internal generated void set_NativeStyle(Fuse.Style value) :34
void AppBase__set_NativeStyle_fn(AppBase* __this, ::g::Fuse::Style* value)
{
    __this->NativeStyle(value);
}

// private void OnEnteringBackground(Uno.Platform2.ApplicationState s) :78
void AppBase__OnEnteringBackground_fn(AppBase* __this, int* s)
{
    __this->OnEnteringBackground(*s);
}

// private void OnLowMemory(object s, object a) :83
void AppBase__OnLowMemory_fn(AppBase* __this, uObject* s, uObject* a)
{
    __this->OnLowMemory(s, a);
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) :49
void AppBase__OnSelectionChanged_fn(AppBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSelectionChanged(sender, args);
}

// protected virtual void OnSetTheme(Fuse.Theme theme) :207
void AppBase__OnSetTheme_fn(AppBase* __this, ::g::Fuse::Theme* theme)
{
}

// public void OnUnhandledException(Uno.Exception e) :90
void AppBase__OnUnhandledException_fn(AppBase* __this, ::g::Uno::Exception* e)
{
    __this->OnUnhandledException(e);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) :117
void AppBase__OnUnhandledExceptionInternal_fn(::g::Uno::Exception* e)
{
    AppBase::OnUnhandledExceptionInternal(e);
}

// protected void OnUpdate() :215
void AppBase__OnUpdate_fn(AppBase* __this)
{
    __this->OnUpdate();
}

// public Fuse.Node get_RootNode() :139
void AppBase__get_RootNode_fn(AppBase* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RootNode();
}

// public void set_RootNode(Fuse.Node value) :140
void AppBase__set_RootNode_fn(AppBase* __this, ::g::Fuse::Node* value)
{
    __this->RootNode(value);
}

// protected generated Fuse.RootViewport get_RootViewport() :32
void AppBase__get_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// protected generated void set_RootViewport(Fuse.RootViewport value) :32
void AppBase__set_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport* value)
{
    __this->RootViewport(value);
}

// public Fuse.Theme get_Theme() :197
void AppBase__get_Theme_fn(AppBase* __this, ::g::Fuse::Theme** __retval)
{
    *__retval = __this->Theme();
}

// public void set_Theme(Fuse.Theme value) :198
void AppBase__set_Theme_fn(AppBase* __this, ::g::Fuse::Theme* value)
{
    __this->Theme(value);
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) :88
void AppBase__add_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->add_UnhandledException(value);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) :88
void AppBase__remove_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->remove_UnhandledException(value);
}

// protected AppBase() [instance] :36
void AppBase::ctor_1()
{
    _selection = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<Fuse.Node>*/]));
    _pendingTheme = ::g::Fuse::GraphicsTheme::Singleton();
    ctor_();
    ClearColor(::g::Uno::Float4__New1(1.0f));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)AppBase__OnEnteringBackground_fn, this));
    ::g::Uno::Platform2::Application::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)AppBase__OnLowMemory_fn, this));
    ::g::Fuse::Preview::SelectionManager::add_SelectionChanged(uDelegate::New(::TYPES[16/*Uno.EventHandler<Uno.EventArgs>*/], (void*)AppBase__OnSelectionChanged_fn, this));
}

// public float4 get_Background() [instance] :130
::g::Uno::Float4 AppBase::Background()
{
    return ClearColor();
}

// public void set_Background(float4 value) [instance] :131
void AppBase::Background(::g::Uno::Float4 value)
{
    ClearColor(value);
}

// private void CheckPendingReify() [instance] :153
void AppBase::CheckPendingReify()
{
    bool ret4;

    if (!_hasPendingReify)
        return;

    _hasPendingReify = false;

    if (_pendingTheme != NULL)
    {
        OnSetRootNode(NULL);

        if (_theme != NULL)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(RootViewport())->Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/]), _theme, &ret4);

        _theme = _pendingTheme;
        OnSetTheme(_theme);

        if (_theme != NULL)
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(RootViewport())->Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/]), _theme);

        _pendingTheme = NULL;
    }

    if (_hasPendingRootNode)
    {
        _rootNode = _pendingRootNode;
        _pendingRootNode = NULL;
        _hasPendingRootNode = false;
    }

    OnSetRootNode(_rootNode);
}

// public void DrawSelection(Fuse.DrawContext dc) [instance] :67
void AppBase::DrawSelection(::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret5;

    if (uPtr(_selection)->Count() > 0)
    {
        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_selection), &ret5), ret5); enum1.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
        {
            ::g::Fuse::Node* n = enum1.Current(::TYPES[18/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
            uPtr(n)->DrawSelection(dc);
        }

        uPtr(RootNode())->InvalidateVisual();
    }
}

// private void FindSelection(Fuse.Node n) [instance] :59
void AppBase::FindSelection(::g::Fuse::Node* n)
{
    if (::g::Fuse::Preview::SelectionManager::IsSelected(n))
        ::g::Uno::Collections::List__Add_fn(uPtr(_selection), n);
}

// internal generated Fuse.Style get_NativeStyle() [instance] :34
::g::Fuse::Style* AppBase::NativeStyle()
{
    return _NativeStyle;
}

// internal generated void set_NativeStyle(Fuse.Style value) [instance] :34
void AppBase::NativeStyle(::g::Fuse::Style* value)
{
    _NativeStyle = value;
}

// private void OnEnteringBackground(Uno.Platform2.ApplicationState s) [instance] :78
void AppBase::OnEnteringBackground(int s)
{
    ::g::Fuse::Resources::DisposalManager::Clean(1);
}

// private void OnLowMemory(object s, object a) [instance] :83
void AppBase::OnLowMemory(uObject* s, uObject* a)
{
    ::g::Fuse::Resources::DisposalManager::Clean(2);
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) [instance] :49
void AppBase::OnSelectionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uPtr(_selection)->Clear();

    if (RootNode() != NULL)
        uPtr(RootNode())->VisitSubtree(uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Node>*/], (void*)AppBase__FindSelection_fn, this));
}

// public void OnUnhandledException(Uno.Exception e) [instance] :90
void AppBase::OnUnhandledException(::g::Uno::Exception* e)
{
    ::g::Uno::Exception* ret6;

    if (::g::Uno::Delegate::op_Inequality(UnhandledException1, NULL))
    {
        ::g::Fuse::UnhandledExceptionArgs* args = ::g::Fuse::UnhandledExceptionArgs::New2(e);
        uPtr(UnhandledException1)->Invoke(2, this, args);

        if (args->IsHandled())
            return;
    }
    else
    {
        ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[1/*"Unhandled e...*/]);
        ::g::Uno::AggregateException* ae = uAs< ::g::Uno::AggregateException*>(e, ::TYPES[24/*Uno.AggregateException*/]);

        if (ae != NULL)

            for (int i = 0; i < uPtr(uPtr(ae)->InnerExceptions())->Count(); i++)
            {
                ::g::Uno::Exception* inner = (::g::Uno::Collections::ReadOnlyCollection__get_Item_fn(uPtr(uPtr(ae)->InnerExceptions()), uCRef<int>(i), &ret6), ret6);
                ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(inner)->Message(), ::STRINGS[2/*"\n\n"*/]), uPtr(inner)->StackTrace()), ::STRINGS[2/*"\n\n"*/]));
            }
        else
            ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(e)->Message(), ::STRINGS[2/*"\n\n"*/]), uPtr(e)->StackTrace()));
    }

    U_THROW(e);
}

// protected void OnUpdate() [instance] :215
void AppBase::OnUpdate()
{
    CheckPendingReify();
    ::g::Fuse::UpdateManager::Update();
    ::g::Fuse::UpdateManager::IncreaseFrameIndex();
}

// public Fuse.Node get_RootNode() [instance] :139
::g::Fuse::Node* AppBase::RootNode()
{
    return _hasPendingRootNode ? (::g::Fuse::Node*)_pendingRootNode : (::g::Fuse::Node*)_rootNode;
}

// public void set_RootNode(Fuse.Node value) [instance] :140
void AppBase::RootNode(::g::Fuse::Node* value)
{
    if (_rootNode != value)
    {
        _pendingRootNode = value;
        _hasPendingRootNode = true;
        _hasPendingReify = true;
    }
}

// protected generated Fuse.RootViewport get_RootViewport() [instance] :32
::g::Fuse::RootViewport* AppBase::RootViewport()
{
    return _RootViewport;
}

// protected generated void set_RootViewport(Fuse.RootViewport value) [instance] :32
void AppBase::RootViewport(::g::Fuse::RootViewport* value)
{
    _RootViewport = value;
}

// public Fuse.Theme get_Theme() [instance] :197
::g::Fuse::Theme* AppBase::Theme()
{
    ::g::Fuse::Theme* ind2 = _pendingTheme;
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Theme*)_theme;
}

// public void set_Theme(Fuse.Theme value) [instance] :198
void AppBase::Theme(::g::Fuse::Theme* value)
{
    ::g::Fuse::Theme* ind3;

    if ((ind3 = _pendingTheme, ((ind3 != NULL) ? ind3 : (::g::Fuse::Theme*)_theme)) != value)
    {
        _pendingTheme = value;
        _hasPendingReify = true;
    }
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :88
void AppBase::add_UnhandledException(uDelegate* value)
{
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UnhandledException1, value), ::TYPES[22/*Fuse.UnhandledExceptionHandler*/]);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :88
void AppBase::remove_UnhandledException(uDelegate* value)
{
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UnhandledException1, value), ::TYPES[22/*Fuse.UnhandledExceptionHandler*/]);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) [static] :117
void AppBase::OnUnhandledExceptionInternal(::g::Uno::Exception* e)
{
    AppBase* app = uAs<AppBase*>(AppBase::Current1(), AppBase_typeof());

    if (app != NULL)
        uPtr(app)->OnUnhandledException(e);
}

// public static new Fuse.AppBase get_Current() [static] :125
AppBase* AppBase::Current1()
{
    return uAs<AppBase*>(::g::Uno::Application::Current(), AppBase_typeof());
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(3879)
// -------------------------------------------------------

// public abstract class BeginRemoveArgs :3879
// {
BeginRemoveArgs_type* BeginRemoveArgs_typeof()
{
    static uSStrong<BeginRemoveArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(BeginRemoveArgs);
    options.TypeSize = sizeof(BeginRemoveArgs_type);
    type = (BeginRemoveArgs_type*)uClassType::New("Fuse.BeginRemoveArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::BeginRemoveArgs, _done), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::BeginRemoveArgs, subscribers), 0);
    return type;
}

// protected generated BeginRemoveArgs() :3879
void BeginRemoveArgs__ctor_1_fn(BeginRemoveArgs* __this)
{
    __this->ctor_1();
}

// public bool get_HasSubscribers() :3898
void BeginRemoveArgs__get_HasSubscribers_fn(BeginRemoveArgs* __this, bool* __retval)
{
    *__retval = __this->HasSubscribers();
}

// public void Remove() :3901
void BeginRemoveArgs__Remove_fn(BeginRemoveArgs* __this)
{
    __this->Remove();
}

// protected generated BeginRemoveArgs() [instance] :3879
void BeginRemoveArgs::ctor_1()
{
    ctor_();
}

// public bool get_HasSubscribers() [instance] :3898
bool BeginRemoveArgs::HasSubscribers()
{
    return subscribers > 0;
}

// public void Remove() [instance] :3901
void BeginRemoveArgs::Remove()
{
    if (_done)
        return;

    _done = true;
    OnRemoved();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(3914)
// -------------------------------------------------------

// public delegate void BeginRemoveHandler(object sender, Fuse.BeginRemoveArgs args) :3914
uDelegateType* BeginRemoveHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.BeginRemoveHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::BeginRemoveArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(230)
// ------------------------------------------------------

// public abstract class Behavior :230
// {
Behavior_type* Behavior_typeof()
{
    static uSStrong<Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Behavior);
    options.TypeSize = sizeof(Behavior_type);
    type = (Behavior_type*)uClassType::New("Fuse.Behavior", options);
    type->fp_OnRooted = Behavior__OnRooted_fn;
    type->fp_OnUnrooted = Behavior__OnUnrooted_fn;
    ::STRINGS[3] = uString::Const("duplicate behavior rooting");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.19.3\\$.uno");
    ::STRINGS[5] = uString::Const("Rooted");
    ::STRINGS[6] = uString::Const("duplicate behavior unrooting");
    ::STRINGS[7] = uString::Const("Unrooted");
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[19] = uObject_typeof();
    type->SetFields(0,
        Behavior__RootStatus_typeof(), offsetof(::g::Fuse::Behavior, _status), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Behavior, AddedByStyle), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Behavior, _ParentNode), 0);
    return type;
}

// protected generated Behavior() :230
void Behavior__ctor__fn(Behavior* __this)
{
    __this->ctor_();
}

// protected internal bool get_IsRooted() :273
void Behavior__get_IsRooted_fn(Behavior* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// protected virtual void OnRooted(Fuse.Node parentNode) :277
void Behavior__OnRooted_fn(Behavior* __this, ::g::Fuse::Node* parentNode)
{
}

// protected virtual void OnUnrooted(Fuse.Node parentNode) :278
void Behavior__OnUnrooted_fn(Behavior* __this, ::g::Fuse::Node* parentNode)
{
}

// protected internal generated Fuse.Node get_ParentNode() :241
void Behavior__get_ParentNode_fn(Behavior* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->ParentNode();
}

// private generated void set_ParentNode(Fuse.Node value) :241
void Behavior__set_ParentNode_fn(Behavior* __this, ::g::Fuse::Node* value)
{
    __this->ParentNode(value);
}

// internal void Rooted(Fuse.Node e) :246
void Behavior__Rooted_fn(Behavior* __this, ::g::Fuse::Node* e)
{
    __this->Rooted(e);
}

// internal bool get_TriggerCanStartTest() :244
void Behavior__get_TriggerCanStartTest_fn(Behavior* __this, bool* __retval)
{
    *__retval = __this->TriggerCanStartTest();
}

// internal void Unrooted(Fuse.Node e) :260
void Behavior__Unrooted_fn(Behavior* __this, ::g::Fuse::Node* e)
{
    __this->Unrooted(e);
}

// protected generated Behavior() [instance] :230
void Behavior::ctor_()
{
}

// protected internal bool get_IsRooted() [instance] :273
bool Behavior::IsRooted()
{
    return _status == 2;
}

// protected internal generated Fuse.Node get_ParentNode() [instance] :241
::g::Fuse::Node* Behavior::ParentNode()
{
    return _ParentNode;
}

// private generated void set_ParentNode(Fuse.Node value) [instance] :241
void Behavior::ParentNode(::g::Fuse::Node* value)
{
    _ParentNode = value;
}

// internal void Rooted(Fuse.Node e) [instance] :246
void Behavior::Rooted(::g::Fuse::Node* e)
{
    if (_status != 0)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[3/*"duplicate b...*/], this, ::STRINGS[4/*"C:\\Program...*/], 250, ::STRINGS[5/*"Rooted"*/]);
        return;
    }

    _status = 1;
    ParentNode(e);
    OnRooted(ParentNode());
    _status = 2;
}

// internal bool get_TriggerCanStartTest() [instance] :244
bool Behavior::TriggerCanStartTest()
{
    return _status > 0;
}

// internal void Unrooted(Fuse.Node e) [instance] :260
void Behavior::Unrooted(::g::Fuse::Node* e)
{
    if (_status == 0)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[6/*"duplicate b...*/], this, ::STRINGS[4/*"C:\\Program...*/], 264, ::STRINGS[7/*"Unrooted"*/]);
        return;
    }

    OnUnrooted(ParentNode());
    ParentNode(NULL);
    _status = 0;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(289)
// ------------------------------------------------------

// public sealed class CacheFramebuffer :289
// {
uType* CacheFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(CacheFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CacheFramebuffer", options);
    ::STRINGS[8] = uString::Const("Cannot access unpinned CacheFramebuffer");
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[28] = ::g::Fuse::FramebufferPool_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _isContentValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _isPinned), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _lastFrameUsed), 0,
        uObject_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _owner), 0,
        ::g::Uno::Graphics::FramebufferFlags_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Flags), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Format), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Height), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Width), 0);
    return type;
}

// public CacheFramebuffer(object owner, int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :390
void CacheFramebuffer__ctor__fn(CacheFramebuffer* __this, uObject* owner, int* width, int* height, int* format, int* flags)
{
    __this->ctor_(owner, *width, *height, *format, *flags);
}

// internal void Collect() :308
void CacheFramebuffer__Collect_fn(CacheFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :315
void CacheFramebuffer__Dispose_fn(CacheFramebuffer* __this)
{
    __this->Dispose();
}

// private void EnsurePinned() :301
void CacheFramebuffer__EnsurePinned_fn(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() :386
void CacheFramebuffer__get_Flags_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) :386
void CacheFramebuffer__set_Flags_fn(CacheFramebuffer* __this, int* value)
{
    __this->Flags(*value);
}

// public generated Uno.Graphics.Format get_Format() :385
void CacheFramebuffer__get_Format_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Format();
}

// private generated void set_Format(Uno.Graphics.Format value) :385
void CacheFramebuffer__set_Format_fn(CacheFramebuffer* __this, int* value)
{
    __this->Format(*value);
}

// public framebuffer get_Framebuffer() :329
void CacheFramebuffer__get_Framebuffer_fn(CacheFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Framebuffer();
}

// internal int get_FramesSinceLastUse() :357
void CacheFramebuffer__get_FramesSinceLastUse_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->FramesSinceLastUse();
}

// public generated int get_Height() :384
void CacheFramebuffer__get_Height_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Height();
}

// private generated void set_Height(int value) :384
void CacheFramebuffer__set_Height_fn(CacheFramebuffer* __this, int* value)
{
    __this->Height(*value);
}

// public bool get_IsContentValid() :339
void CacheFramebuffer__get_IsContentValid_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsContentValid();
}

// public bool get_IsPinned() :295
void CacheFramebuffer__get_IsPinned_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public CacheFramebuffer New(object owner, int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :390
void CacheFramebuffer__New1_fn(uObject* owner, int* width, int* height, int* format, int* flags, CacheFramebuffer** __retval)
{
    *__retval = CacheFramebuffer::New1(owner, *width, *height, *format, *flags);
}

// public void Pin() :363
void CacheFramebuffer__Pin_fn(CacheFramebuffer* __this)
{
    __this->Pin();
}

// public void Unpin(bool validate) :375
void CacheFramebuffer__Unpin_fn(CacheFramebuffer* __this, bool* validate)
{
    __this->Unpin(*validate);
}

// public generated int get_Width() :383
void CacheFramebuffer__get_Width_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Width();
}

// private generated void set_Width(int value) :383
void CacheFramebuffer__set_Width_fn(CacheFramebuffer* __this, int* value)
{
    __this->Width(*value);
}

// public CacheFramebuffer(object owner, int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :390
void CacheFramebuffer::ctor_(uObject* owner, int width, int height, int format, int flags)
{
    _owner = owner;
    Width(width);
    Height(height);
    Format(format);
    Flags(flags);
}

// internal void Collect() [instance] :308
void CacheFramebuffer::Collect()
{
    if (_fb != NULL)
        ::g::Fuse::FramebufferPool::Release(_fb);

    _fb = NULL;
    _isContentValid = false;
}

// public void Dispose() [instance] :315
void CacheFramebuffer::Dispose()
{
    Collect();
    ::g::Fuse::FramebufferPool::UnRegister(this);
}

// private void EnsurePinned() [instance] :301
void CacheFramebuffer::EnsurePinned()
{
    if (!IsPinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"Cannot acce...*/]));
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() [instance] :386
int CacheFramebuffer::Flags()
{
    return _Flags;
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) [instance] :386
void CacheFramebuffer::Flags(int value)
{
    _Flags = value;
}

// public generated Uno.Graphics.Format get_Format() [instance] :385
int CacheFramebuffer::Format()
{
    return _Format;
}

// private generated void set_Format(Uno.Graphics.Format value) [instance] :385
void CacheFramebuffer::Format(int value)
{
    _Format = value;
}

// public framebuffer get_Framebuffer() [instance] :329
::g::Uno::Graphics::Framebuffer* CacheFramebuffer::Framebuffer()
{
    EnsurePinned();
    return _fb;
}

// internal int get_FramesSinceLastUse() [instance] :357
int CacheFramebuffer::FramesSinceLastUse()
{
    return ::g::Fuse::FramebufferPool::Frame() - _lastFrameUsed;
}

// public generated int get_Height() [instance] :384
int CacheFramebuffer::Height()
{
    return _Height;
}

// private generated void set_Height(int value) [instance] :384
void CacheFramebuffer::Height(int value)
{
    _Height = value;
}

// public bool get_IsContentValid() [instance] :339
bool CacheFramebuffer::IsContentValid()
{
    EnsurePinned();
    return _isContentValid;
}

// public bool get_IsPinned() [instance] :295
bool CacheFramebuffer::IsPinned()
{
    return _isPinned;
}

// public void Pin() [instance] :363
void CacheFramebuffer::Pin()
{
    _isPinned = true;
    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();

    if (_fb == NULL)
    {
        _fb = ::g::Fuse::FramebufferPool::Lock(Width(), Height(), Format(), (Flags() & 1) == 1);
        ::g::Fuse::FramebufferPool::Register(this);
    }
}

// public void Unpin(bool validate) [instance] :375
void CacheFramebuffer::Unpin(bool validate)
{
    EnsurePinned();
    _isPinned = false;

    if (validate)
        _isContentValid = true;

    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();
}

// public generated int get_Width() [instance] :383
int CacheFramebuffer::Width()
{
    return _Width;
}

// private generated void set_Width(int value) [instance] :383
void CacheFramebuffer::Width(int value)
{
    _Width = value;
}

// public CacheFramebuffer New(object owner, int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [static] :390
CacheFramebuffer* CacheFramebuffer::New1(uObject* owner, int width, int height, int format, int flags)
{
    CacheFramebuffer* obj1 = (CacheFramebuffer*)uNew(CacheFramebuffer_typeof());
    obj1->ctor_(owner, width, height, format, flags);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(409)
// ------------------------------------------------------

// public static class Diagnostics :409
// {
uClassType* Diagnostics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Diagnostics", options);
    ::STRINGS[9] = uString::Const("Deprecated: ");
    ::STRINGS[10] = uString::Const(" ");
    ::STRINGS[11] = uString::Const("Unsupported: ");
    return type;
}

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :419
void Diagnostics__Deprecated_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Deprecated(msg, obj, filePath, *lineNumber, memberName);
}

// public static void Error(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) :411
void Diagnostics__Error_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Error(msg, obj, filePath, *lineNumber, memberName);
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :427
void Diagnostics__Unsupported_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Unsupported(msg, obj, filePath, *lineNumber, memberName);
}

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :419
void Diagnostics::Deprecated(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"Deprecated: "*/], msg), ::STRINGS[10/*" "*/]), obj), 4, filePath, lineNumber);
}

// public static void Error(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) [static] :411
void Diagnostics::Error(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(msg, ::STRINGS[10/*" "*/]), obj), 3, filePath, lineNumber);
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :427
void Diagnostics::Unsupported(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[11/*"Unsupported: "*/], msg), ::STRINGS[10/*" "*/]), obj), 4, filePath, lineNumber);
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1674)
// -------------------------------------------------------

// public sealed class DrawArgs :1674
// {
uType* DrawArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DrawArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::DrawArgs, _Context), 0);
    return type;
}

// public DrawArgs(Fuse.DrawContext dc) :1678
void DrawArgs__ctor_1_fn(DrawArgs* __this, ::g::Fuse::DrawContext* dc)
{
    __this->ctor_1(dc);
}

// public generated Fuse.DrawContext get_Context() :1676
void DrawArgs__get_Context_fn(DrawArgs* __this, ::g::Fuse::DrawContext** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(Fuse.DrawContext value) :1676
void DrawArgs__set_Context_fn(DrawArgs* __this, ::g::Fuse::DrawContext* value)
{
    __this->Context(value);
}

// public DrawArgs New(Fuse.DrawContext dc) :1678
void DrawArgs__New2_fn(::g::Fuse::DrawContext* dc, DrawArgs** __retval)
{
    *__retval = DrawArgs::New2(dc);
}

// public DrawArgs(Fuse.DrawContext dc) [instance] :1678
void DrawArgs::ctor_1(::g::Fuse::DrawContext* dc)
{
    ctor_();
    Context(dc);
}

// public generated Fuse.DrawContext get_Context() [instance] :1676
::g::Fuse::DrawContext* DrawArgs::Context()
{
    return _Context;
}

// private generated void set_Context(Fuse.DrawContext value) [instance] :1676
void DrawArgs::Context(::g::Fuse::DrawContext* value)
{
    _Context = value;
}

// public DrawArgs New(Fuse.DrawContext dc) [static] :1678
DrawArgs* DrawArgs::New2(::g::Fuse::DrawContext* dc)
{
    DrawArgs* obj1 = (DrawArgs*)uNew(DrawArgs_typeof());
    obj1->ctor_1(dc);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(479)
// ------------------------------------------------------

// public sealed class DrawContext :479
// {
uType* DrawContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(DrawContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawContext", options);
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.19.3\\$.uno");
    ::STRINGS[12] = uString::Const("CaptureRootbuffer");
    ::STRINGS[13] = uString::Const("Clear");
    ::STRINGS[14] = uString::Const("PopRenderTarget");
    ::STRINGS[15] = uString::Const("PushRenderTarget");
    ::STRINGS[16] = uString::Const("Unpopped Scissor");
    ::STRINGS[17] = uString::Const("ReleaseRootbuffer");
    ::STRINGS[18] = uString::Const("Unpopped CullFace");
    ::STRINGS[19] = uString::Const("Unpopped Viewport");
    ::STRINGS[20] = uString::Const("Unpopped RenderTarget");
    ::STRINGS[21] = uString::Const("set_GLFramebuffer");
    ::STRINGS[22] = uString::Const("set_GLScissor");
    ::STRINGS[23] = uString::Const("set_GLViewportPixelSize");
    ::TYPES[29] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IViewport_typeof());
    ::TYPES[30] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof());
    ::TYPES[31] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int4_typeof());
    ::TYPES[32] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof());
    ::TYPES[33] = ::g::Uno::Graphics::RenderTarget_typeof();
    ::TYPES[34] = ::g::Uno::Float4_typeof();
    ::TYPES[35] = ::g::Uno::Collections::HashSet__Enumerator_typeof()->MakeType(::g::Fuse::IFlush_typeof());
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[36] = ::g::Fuse::IViewport_typeof();
    ::TYPES[37] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Uno::Graphics::PolygonFace_typeof());
    ::TYPES[38] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof());
    ::TYPES[39] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::RenderTargetEntry_typeof());
    ::TYPES[40] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof());
    ::TYPES[41] = ::g::Fuse::RenderTargetEntry_typeof();
    ::TYPES[42] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Uno::Int4_typeof());
    ::TYPES[43] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::Int4_typeof());
    ::TYPES[44] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::IViewport_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::IViewport_typeof());
    ::TYPES[46] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[47] = ::g::Uno::Int2_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[48] = ::g::Uno::Int4_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[49] = ::g::Uno::Recti_typeof();
    type->SetFields(0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::DrawContext, _cullFace), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof()), offsetof(::g::Fuse::DrawContext, _cullFaces), 0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Fuse::DrawContext, _glFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::DrawContext, _glScissor), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int4_typeof()), offsetof(::g::Fuse::DrawContext, _glScissors), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::DrawContext, _glViewport), 0,
        ::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof(), offsetof(::g::Fuse::DrawContext, _handle), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::DrawContext, _renderTarget), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof()), offsetof(::g::Fuse::DrawContext, _renderTargets), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::DrawContext, _rootbuffer), 0,
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::DrawContext, _viewport), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IViewport_typeof()), offsetof(::g::Fuse::DrawContext, _viewports), 0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Fuse::IFlush_typeof()), offsetof(::g::Fuse::DrawContext, flushSet), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::DrawContext, _IsCaching), 0);
    return type;
}

// public DrawContext(Fuse.IViewport viewport) :520
void DrawContext__ctor__fn(DrawContext* __this, uObject* viewport)
{
    __this->ctor_(viewport);
}

// internal void CaptureRootbuffer() :549
void DrawContext__CaptureRootbuffer_fn(DrawContext* __this)
{
    __this->CaptureRootbuffer();
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) :808
void DrawContext__CheckGLError_fn(DrawContext* __this, uString* filePath, int* lineNumber, uString* memberName)
{
    __this->CheckGLError(filePath, *lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) :673
void DrawContext__Clear_fn(DrawContext* __this, ::g::Uno::Float4* color, float* depth)
{
    __this->Clear(*color, *depth);
}

// public Uno.Graphics.PolygonFace get_CullFace() :794
void DrawContext__get_CullFace_fn(DrawContext* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public void Flush() :539
void DrawContext__Flush_fn(DrawContext* __this)
{
    __this->Flush();
}

// public float4x4 GetLocalToClipTransform(Fuse.Node n) :502
void DrawContext__GetLocalToClipTransform_fn(DrawContext* __this, ::g::Fuse::Node* n, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetLocalToClipTransform(n);
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() :615
void DrawContext__GetRenderTargetEntry_fn(DrawContext* __this, ::g::Fuse::RenderTargetEntry** __retval)
{
    *__retval = __this->GetRenderTargetEntry();
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() :597
void DrawContext__get_GLFramebuffer_fn(DrawContext* __this, uint32_t* __retval)
{
    *__retval = __this->GLFramebuffer();
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) :607
void DrawContext__set_GLFramebuffer_fn(DrawContext* __this, uint32_t* value)
{
    __this->GLFramebuffer(*value);
}

// private int4 get_GLScissor() :705
void DrawContext__get_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* __retval)
{
    *__retval = __this->GLScissor();
}

// private void set_GLScissor(int4 value) :716
void DrawContext__set_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* value)
{
    __this->GLScissor(*value);
}

// public int2 get_GLViewportPixelSize() :749
void DrawContext__get_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->GLViewportPixelSize();
}

// private void set_GLViewportPixelSize(int2 value) :760
void DrawContext__set_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* value)
{
    __this->GLViewportPixelSize(*value);
}

// public generated bool get_IsCaching() :788
void DrawContext__get_IsCaching_fn(DrawContext* __this, bool* __retval)
{
    *__retval = __this->IsCaching();
}

// public generated void set_IsCaching(bool value) :788
void DrawContext__set_IsCaching_fn(DrawContext* __this, bool* value)
{
    __this->IsCaching(*value);
}

// public DrawContext New(Fuse.IViewport viewport) :520
void DrawContext__New1_fn(uObject* viewport, DrawContext** __retval)
{
    *__retval = DrawContext::New1(viewport);
}

// public void PopCullFace() :803
void DrawContext__PopCullFace_fn(DrawContext* __this)
{
    __this->PopCullFace();
}

// public void PopRenderTarget() :647
void DrawContext__PopRenderTarget_fn(DrawContext* __this)
{
    __this->PopRenderTarget();
}

// public void PopRenderTargetViewport() :667
void DrawContext__PopRenderTargetViewport_fn(DrawContext* __this)
{
    __this->PopRenderTargetViewport();
}

// public void PopScissor() :735
void DrawContext__PopScissor_fn(DrawContext* __this)
{
    __this->PopScissor();
}

// public void PopViewport() :496
void DrawContext__PopViewport_fn(DrawContext* __this)
{
    __this->PopViewport();
}

// public void PushCullFace(Uno.Graphics.PolygonFace cf) :797
void DrawContext__PushCullFace_fn(DrawContext* __this, int* cf)
{
    __this->PushCullFace(*cf);
}

// public void PushRenderTarget(framebuffer fb) :623
void DrawContext__PushRenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->PushRenderTarget(fb);
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) :628
void DrawContext__PushRenderTarget1_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt)
{
    __this->PushRenderTarget1(rt);
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) :633
void DrawContext__PushRenderTarget2_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glscissor)
{
    __this->PushRenderTarget2(rt, *viewportPixelSize, *glscissor);
}

// public void PushRenderTargetViewport(framebuffer fb, Fuse.IFrustum frustum) :661
void DrawContext__PushRenderTargetViewport_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    __this->PushRenderTargetViewport(fb, frustum);
}

// public void PushScissor(Uno.Recti scissor) :729
void DrawContext__PushScissor_fn(DrawContext* __this, ::g::Uno::Recti* scissor)
{
    __this->PushScissor(*scissor);
}

// public void PushViewport(Fuse.IViewport v) :489
void DrawContext__PushViewport_fn(DrawContext* __this, uObject* v)
{
    __this->PushViewport(v);
}

// internal void ReleaseRootbuffer() :566
void DrawContext__ReleaseRootbuffer_fn(DrawContext* __this)
{
    __this->ReleaseRootbuffer();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() :591
void DrawContext__get_RenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->RenderTarget();
}

// public Uno.Recti get_Scissor() :687
void DrawContext__get_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->Scissor();
}

// internal void set_Scissor(Uno.Recti value) :695
void DrawContext__set_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* value)
{
    __this->Scissor(*value);
}

// public Fuse.IViewport get_Viewport() :485
void DrawContext__get_Viewport_fn(DrawContext* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public float get_ViewportPointDensity() :782
void DrawContext__get_ViewportPointDensity_fn(DrawContext* __this, float* __retval)
{
    *__retval = __this->ViewportPointDensity();
}

// public DrawContext(Fuse.IViewport viewport) [instance] :520
void DrawContext::ctor_(uObject* viewport)
{
    _viewports = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[29/*Uno.Collections.List<Fuse.IViewport>*/]));
    _renderTargets = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<Fuse.RenderTargetEntry>*/]));
    _glScissors = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[31/*Uno.Collections.List<int4>*/]));
    _cullFaces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[32/*Uno.Collections.List<Uno.Graphics.PolygonFace>*/]));
    _handle = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetInstance();
    _viewport = viewport;
    _rootbuffer = ::g::Uno::Graphics::RenderTarget::New1();
    _renderTarget = _rootbuffer;
}

// internal void CaptureRootbuffer() [instance] :549
void DrawContext::CaptureRootbuffer()
{
    ::g::OpenGL::GL::Enable(3089);
    CheckGLError(::STRINGS[4/*"C:\\Program...*/], 554, ::STRINGS[12/*"CaptureRoot...*/]);
    _glScissor = ::g::OpenGL::GL::GetInteger(3088);
    _glViewport = ::g::OpenGL::GL::GetInteger(2978);
    _glFramebuffer = ::g::OpenGL::GL::GetFramebufferBinding();
    uPtr(_rootbuffer)->GLFramebufferHandle(_glFramebuffer);
    uPtr(_rootbuffer)->Size(::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetBackbufferSize(_handle));
    uPtr(_rootbuffer)->HasDepth(true);
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) [instance] :808
void DrawContext::CheckGLError(uString* filePath, int lineNumber, uString* memberName)
{
}

// public void Clear(float4 color, [float depth]) [instance] :673
void DrawContext::Clear(::g::Uno::Float4 color, float depth)
{
    ::g::OpenGL::GL::ClearDepth(depth);
    ::g::OpenGL::GL::ClearColor(color.X, color.Y, color.Z, color.W);
    ::g::OpenGL::GL::Clear(17664);
    CheckGLError(::STRINGS[4/*"C:\\Program...*/], 681, ::STRINGS[13/*"Clear"*/]);
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :794
int DrawContext::CullFace()
{
    return _cullFace;
}

// public void Flush() [instance] :539
void DrawContext::Flush()
{
    ::g::Uno::Collections::HashSet__Enumerator<uStrong<uObject*> > ret5;

    if (flushSet != NULL)
    {
        for (::g::Uno::Collections::HashSet__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::HashSet__GetEnumerator_fn(uPtr(flushSet), &ret5), ret5); enum1.MoveNext(::TYPES[35/*Uno.Collections.HashSet<Fuse.IFlush>.Enumerator*/]); )
        {
            uObject* f = enum1.Current(::TYPES[35/*Uno.Collections.HashSet<Fuse.IFlush>.Enumerator*/]);
            ::g::Fuse::IFlush::Flush(uInterface(uPtr(f), ::g::Fuse::IFlush_typeof()), this);
        }

        uPtr(flushSet)->Clear();
        flushSet = NULL;
    }
}

// public float4x4 GetLocalToClipTransform(Fuse.Node n) [instance] :502
::g::Uno::Float4x4 DrawContext::GetLocalToClipTransform(::g::Fuse::Node* n)
{
    ::g::Uno::Float4x4 m = uPtr(n)->WorldTransform();
    ::g::Uno::Float4x4 p = ::g::Uno::Matrix::Mul8(m, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(_viewport), ::TYPES[36/*Fuse.IViewport*/])));
    return p;
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() [instance] :615
::g::Fuse::RenderTargetEntry* DrawContext::GetRenderTargetEntry()
{
    return ::g::Fuse::RenderTargetEntry::New1(RenderTarget(), GLViewportPixelSize(), GLScissor(), GLFramebuffer());
    return NULL;
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() [instance] :597
uint32_t DrawContext::GLFramebuffer()
{
    return _glFramebuffer;
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) [instance] :607
void DrawContext::GLFramebuffer(uint32_t value)
{
    _glFramebuffer = value;
    ::g::OpenGL::GL::BindFramebuffer(36160, value);
    CheckGLError(::STRINGS[4/*"C:\\Program...*/], 611, ::STRINGS[21/*"set_GLFrame...*/]);
}

// private int4 get_GLScissor() [instance] :705
::g::Uno::Int4 DrawContext::GLScissor()
{
    return _glScissor;
}

// private void set_GLScissor(int4 value) [instance] :716
void DrawContext::GLScissor(::g::Uno::Int4 value)
{
    _glScissor = value;
    ::g::OpenGL::GL::Scissor(value.Item(0), value.Item(1), value.Item(2), value.Item(3));
    CheckGLError(::STRINGS[4/*"C:\\Program...*/], 722, ::STRINGS[22/*"set_GLScissor"*/]);
}

// public int2 get_GLViewportPixelSize() [instance] :749
::g::Uno::Int2 DrawContext::GLViewportPixelSize()
{
    ::g::Uno::Int4 ind2 = _glViewport;
    return ::g::Uno::Int2__New2(ind2.Z, ind2.W);
}

// private void set_GLViewportPixelSize(int2 value) [instance] :760
void DrawContext::GLViewportPixelSize(::g::Uno::Int2 value)
{
    _glViewport = ::g::Uno::Int4__New2(0, 0, value.X, value.Y);
    ::g::OpenGL::GL::Viewport(0, 0, value.X, value.Y);
    CheckGLError(::STRINGS[4/*"C:\\Program...*/], 766, ::STRINGS[23/*"set_GLViewp...*/]);
}

// public generated bool get_IsCaching() [instance] :788
bool DrawContext::IsCaching()
{
    return _IsCaching;
}

// public generated void set_IsCaching(bool value) [instance] :788
void DrawContext::IsCaching(bool value)
{
    _IsCaching = value;
}

// public void PopCullFace() [instance] :803
void DrawContext::PopCullFace()
{
    int ret6;
    _cullFace = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[37/*Uno.Collections.IListExtensions.RemoveLast<Uno.Graphics.PolygonFace>*/], (uObject*)_cullFaces, &ret6), ret6);
}

// public void PopRenderTarget() [instance] :647
void DrawContext::PopRenderTarget()
{
    ::g::Fuse::RenderTargetEntry* ret7;
    Flush();
    ::g::Fuse::RenderTargetEntry* old = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[39/*Uno.Collections.IListExtensions.RemoveLast<Fuse.RenderTargetEntry>*/], (uObject*)_renderTargets, &ret7), ret7);
    _renderTarget = uPtr(old)->RenderTarget;
    GLFramebuffer(uPtr(old)->GLFramebuffer);
    CheckGLError(::STRINGS[4/*"C:\\Program...*/], 655, ::STRINGS[14/*"PopRenderTa...*/]);
    GLViewportPixelSize(old->GLViewportPixelSize);
    GLScissor(old->GLScissor);
}

// public void PopRenderTargetViewport() [instance] :667
void DrawContext::PopRenderTargetViewport()
{
    PopViewport();
    PopRenderTarget();
}

// public void PopScissor() [instance] :735
void DrawContext::PopScissor()
{
    ::g::Uno::Int4 ret8;
    ::g::Uno::Int4 s = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[42/*Uno.Collections.IListExtensions.RemoveLast<int4>*/], (uObject*)_glScissors, &ret8), ret8);
    GLScissor(s);
}

// public void PopViewport() [instance] :496
void DrawContext::PopViewport()
{
    uObject* ret9;
    Flush();
    _viewport = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[44/*Uno.Collections.IListExtensions.RemoveLast<Fuse.IViewport>*/], (uObject*)_viewports, &ret9), ret9);
}

// public void PushCullFace(Uno.Graphics.PolygonFace cf) [instance] :797
void DrawContext::PushCullFace(int cf)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_cullFaces), uCRef<int>(_cullFace));
    _cullFace = cf;
}

// public void PushRenderTarget(framebuffer fb) [instance] :623
void DrawContext::PushRenderTarget(::g::Uno::Graphics::Framebuffer* fb)
{
    PushRenderTarget1(uPtr(fb)->RenderTarget());
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) [instance] :628
void DrawContext::PushRenderTarget1(::g::Uno::Graphics::RenderTarget* rt)
{
    PushRenderTarget2(rt, uPtr(rt)->Size(), ::g::Uno::Int4__New2(0, 0, uPtr(rt)->Size().X, uPtr(rt)->Size().Y));
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) [instance] :633
void DrawContext::PushRenderTarget2(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glscissor)
{
    Flush();
    ::g::Uno::Collections::List__Add_fn(uPtr(_renderTargets), GetRenderTargetEntry());
    GLFramebuffer(uPtr(rt)->GLFramebufferHandle());
    CheckGLError(::STRINGS[4/*"C:\\Program...*/], 640, ::STRINGS[15/*"PushRenderT...*/]);
    _renderTarget = rt;
    GLViewportPixelSize(viewportPixelSize);
    GLScissor(glscissor);
}

// public void PushRenderTargetViewport(framebuffer fb, Fuse.IFrustum frustum) [instance] :661
void DrawContext::PushRenderTargetViewport(::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    PushRenderTarget2(uPtr(fb)->RenderTarget(), uPtr(fb)->Size(), ::g::Uno::Int4__New7(::g::Uno::Int2__New2(0, 0), uPtr(fb)->Size()));
    PushViewport((uObject*)::g::Fuse::FixedViewport::New1(fb->Size(), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[36/*Fuse.IViewport*/])), frustum));
}

// public void PushScissor(Uno.Recti scissor) [instance] :729
void DrawContext::PushScissor(::g::Uno::Recti scissor)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_glScissors), uCRef(GLScissor()));
    Scissor(scissor);
}

// public void PushViewport(Fuse.IViewport v) [instance] :489
void DrawContext::PushViewport(uObject* v)
{
    Flush();
    ::g::Uno::Collections::List__Add_fn(uPtr(_viewports), _viewport);
    _viewport = v;
}

// internal void ReleaseRootbuffer() [instance] :566
void DrawContext::ReleaseRootbuffer()
{
    if (uPtr(_glScissors)->Count() > 0)
        ::g::Fuse::Diagnostics::Error(::STRINGS[16/*"Unpopped Sc...*/], this, ::STRINGS[4/*"C:\\Program...*/], 571, ::STRINGS[17/*"ReleaseRoot...*/]);

    uPtr(_glScissors)->Clear();

    if (uPtr(_cullFaces)->Count() > 0)
        ::g::Fuse::Diagnostics::Error(::STRINGS[18/*"Unpopped Cu...*/], this, ::STRINGS[4/*"C:\\Program...*/], 575, ::STRINGS[17/*"ReleaseRoot...*/]);

    uPtr(_cullFaces)->Clear();

    if (uPtr(_viewports)->Count() > 0)
        ::g::Fuse::Diagnostics::Error(::STRINGS[19/*"Unpopped Vi...*/], this, ::STRINGS[4/*"C:\\Program...*/], 579, ::STRINGS[17/*"ReleaseRoot...*/]);

    uPtr(_viewports)->Clear();

    if (uPtr(_renderTargets)->Count() > 0)
        ::g::Fuse::Diagnostics::Error(::STRINGS[20/*"Unpopped Re...*/], this, ::STRINGS[4/*"C:\\Program...*/], 583, ::STRINGS[17/*"ReleaseRoot...*/]);

    uPtr(_renderTargets)->Clear();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() [instance] :591
::g::Uno::Graphics::RenderTarget* DrawContext::RenderTarget()
{
    return _renderTarget;
}

// public Uno.Recti get_Scissor() [instance] :687
::g::Uno::Recti DrawContext::Scissor()
{
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    ::g::Uno::Int4 gl = GLScissor();
    int x = gl.X;
    int y = -gl.W - (gl.Y - vsz.Y);
    return ::g::Uno::Recti__New1(x, y, x + gl.Z, y + gl.W);
}

// internal void set_Scissor(Uno.Recti value) [instance] :695
void DrawContext::Scissor(::g::Uno::Recti value)
{
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    GLScissor(::g::Uno::Int4__New2(value.Left, vsz.Y - (value.Top + value.Size().Y), value.Size().X, value.Size().Y));
}

// public Fuse.IViewport get_Viewport() [instance] :485
uObject* DrawContext::Viewport()
{
    return _viewport;
}

// public float get_ViewportPointDensity() [instance] :782
float DrawContext::ViewportPointDensity()
{
    return ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[36/*Fuse.IViewport*/]));
}

// public DrawContext New(Fuse.IViewport viewport) [static] :520
DrawContext* DrawContext::New1(uObject* viewport)
{
    DrawContext* obj3 = (DrawContext*)uNew(DrawContext_typeof());
    obj3->ctor_(viewport);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1684)
// -------------------------------------------------------

// public delegate void DrawHandler(object sender, Fuse.DrawArgs args) :1684
uDelegateType* DrawHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.DrawHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::DrawArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2235)
// -------------------------------------------------------

// internal sealed class DrawHelpers :2235
// {
uType* DrawHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DrawHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawHelpers", options);
    type->fp_ctor_ = (void*)DrawHelpers__New1_fn;
    ::TYPES[50] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[51] = ::g::Uno::Rect_typeof();
    ::TYPES[52] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[53] = ::g::FuseCore_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::DrawHelpers, _draw_311c1aa8), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::DrawHelpers, DrawLocalRect_Coord_311c1aa8_1_2_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::DrawHelpers, DrawLocalRect_Vertices_311c1aa8_1_1_4), 0,
        DrawHelpers_typeof(), (uintptr_t)&::g::Fuse::DrawHelpers::_instance_, uFieldFlagsStatic);
    return type;
}

// public generated DrawHelpers() :2235
void DrawHelpers__ctor__fn(DrawHelpers* __this)
{
    __this->ctor_();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) :2249
void DrawHelpers__DrawLocalRect_fn(DrawHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, ::g::Uno::Float4x4* transform, float* lineWidth, ::g::Uno::Float4* color)
{
    __this->DrawLocalRect(dc, *rect, *transform, *lineWidth, *color);
}

// private generated void init_DrawCalls() :2235
void DrawHelpers__init_DrawCalls_fn(DrawHelpers* __this)
{
    __this->init_DrawCalls();
}

// public generated DrawHelpers New() :2235
void DrawHelpers__New1_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::New1();
}

// internal static Fuse.DrawHelpers get_Singelton() :2241
void DrawHelpers__get_Singelton_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::Singelton();
}

uSStrong<DrawHelpers*> DrawHelpers::_instance_;

// public generated DrawHelpers() [instance] :2235
void DrawHelpers::ctor_()
{
    init_DrawCalls();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) [instance] :2249
void DrawHelpers::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, ::g::Uno::Float4x4 transform, float lineWidth, ::g::Uno::Float4 color)
{
    _draw_311c1aa8.BlendEnabled(true);
    _draw_311c1aa8.DepthTestEnabled(false);
    _draw_311c1aa8.LineWidth(lineWidth);
    _draw_311c1aa8.PrimitiveType(5);
    _draw_311c1aa8.BlendSrcRgb(2);
    _draw_311c1aa8.BlendSrcAlpha(2);
    _draw_311c1aa8.BlendDstRgb(3);
    _draw_311c1aa8.BlendDstAlpha(3);
    _draw_311c1aa8.Use();
    _draw_311c1aa8.Attrib1(0, 2, DrawLocalRect_Coord_311c1aa8_1_2_1, 8, 0);
    _draw_311c1aa8.Uniform2(1, rect.Size());
    _draw_311c1aa8.Uniform2(2, rect.Position());
    _draw_311c1aa8.Uniform12(3, transform);
    _draw_311c1aa8.Uniform10(4, color);
    _draw_311c1aa8.DrawArrays(uPtr(DrawLocalRect_Vertices_311c1aa8_1_1_4)->Length());
}

// private generated void init_DrawCalls() [instance] :2235
void DrawHelpers::init_DrawCalls()
{
    uArray* Vertices_311c1aa8_1_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[52/*float2[]*/], 5, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 0.0f));
    DrawLocalRect_Coord_311c1aa8_1_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_311c1aa8_1_1_0), 0);
    DrawLocalRect_Vertices_311c1aa8_1_1_4 = Vertices_311c1aa8_1_1_0;
    _draw_311c1aa8 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseCore_bundle::DrawHelpers53a11bf4());
}

// public generated DrawHelpers New() [static] :2235
DrawHelpers* DrawHelpers::New1()
{
    DrawHelpers* obj1 = (DrawHelpers*)uNew(DrawHelpers_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static Fuse.DrawHelpers get_Singelton() [static] :2241
DrawHelpers* DrawHelpers::Singelton()
{
    if (DrawHelpers::_instance() == NULL)
        DrawHelpers::_instance() = DrawHelpers::New1();

    return DrawHelpers::_instance();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1009)
// -------------------------------------------------------

// public sealed class FastMatrix :1009
// {
uType* FastMatrix_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FastMatrix);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastMatrix", options);
    type->fp_ctor_ = (void*)FastMatrix__New1_fn;
    ::TYPES[54] = ::g::Uno::Float4x4_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[55] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::FastMatrix, _hasNonTranslation), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FastMatrix, _matrix), 0);
    return type;
}

// private FastMatrix() :1016
void FastMatrix__ctor__fn(FastMatrix* __this)
{
    __this->ctor_();
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) :1188
void FastMatrix__AppendFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->AppendFastMatrix(fm);
}

// public void AppendRotationQuaternion(float4 q) :1145
void FastMatrix__AppendRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->AppendRotationQuaternion(*q);
}

// public void AppendScale(float3 scale) :1139
void FastMatrix__AppendScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->AppendScale1(*scale);
}

// public void AppendShear(float xRadians, float yRadians) :1101
void FastMatrix__AppendShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->AppendShear(*xRadians, *yRadians);
}

// public void AppendTranslation(float x, float y, float z) :1047
void FastMatrix__AppendTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->AppendTranslation(*x, *y, *z);
}

// public void AppendTranslation(float3 offset) :1151
void FastMatrix__AppendTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset)
{
    __this->AppendTranslation1(*offset);
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) :1039
void FastMatrix__FromFloat4x4_fn(::g::Uno::Float4x4* m, FastMatrix** __retval)
{
    *__retval = FastMatrix::FromFloat4x4(*m);
}

// public static Fuse.FastMatrix Identity() :1027
void FastMatrix__Identity_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::Identity();
}

// public void Invert() :1125
void FastMatrix__Invert_fn(FastMatrix* __this)
{
    __this->Invert();
}

// public float4x4 get_Matrix() :1012
void FastMatrix__get_Matrix_fn(FastMatrix* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->Matrix();
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) :1114
void FastMatrix__Mul_fn(FastMatrix* __this, FastMatrix* m, FastMatrix** __retval)
{
    *__retval = __this->Mul(m);
}

// private FastMatrix New() :1016
void FastMatrix__New1_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::New1();
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) :1173
void FastMatrix__PrependFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->PrependFastMatrix(fm);
}

// public void PrependRotationQuaternion(float4 q) :1162
void FastMatrix__PrependRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->PrependRotationQuaternion(*q);
}

// public void PrependScale(float3 scale) :1156
void FastMatrix__PrependScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->PrependScale1(*scale);
}

// public void PrependShear(float xRadians, float yRadians) :1095
void FastMatrix__PrependShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->PrependShear(*xRadians, *yRadians);
}

// public void PrependTranslation(float x, float y, float z) :1059
void FastMatrix__PrependTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->PrependTranslation(*x, *y, *z);
}

// public void PrependTranslation(float3 offset) :1168
void FastMatrix__PrependTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset)
{
    __this->PrependTranslation1(*offset);
}

// public void ResetIdentity() :1034
void FastMatrix__ResetIdentity_fn(FastMatrix* __this)
{
    __this->ResetIdentity();
}

// private void SimpleTranslation(float x, float y, float z) :1107
void FastMatrix__SimpleTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->SimpleTranslation(*x, *y, *z);
}

// private FastMatrix() [instance] :1016
void FastMatrix::ctor_()
{
    _matrix = ::g::Uno::Float4x4__Identity();
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) [instance] :1188
void FastMatrix::AppendFastMatrix(FastMatrix* fm)
{
    if (_hasNonTranslation || uPtr(fm)->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(fm)->Matrix());
        _hasNonTranslation = true;
    }
    else
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void AppendRotationQuaternion(float4 q) [instance] :1145
void FastMatrix::AppendRotationQuaternion(::g::Uno::Float4 q)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationQuaternion(q));
    _hasNonTranslation = true;
}

// public void AppendScale(float3 scale) [instance] :1139
void FastMatrix::AppendScale1(::g::Uno::Float3 scale)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(scale));
    _hasNonTranslation = true;
}

// public void AppendShear(float xRadians, float yRadians) [instance] :1101
void FastMatrix::AppendShear(float xRadians, float yRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)));
    _hasNonTranslation = true;
}

// public void AppendTranslation(float x, float y, float z) [instance] :1047
void FastMatrix::AppendTranslation(float x, float y, float z)
{
    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)));
}

// public void AppendTranslation(float3 offset) [instance] :1151
void FastMatrix::AppendTranslation1(::g::Uno::Float3 offset)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Translation1(offset));
}

// public void Invert() [instance] :1125
void FastMatrix::Invert()
{
    if (!_hasNonTranslation)
    {
        _matrix.M41 = -_matrix.M41;
        _matrix.M42 = -_matrix.M42;
        _matrix.M43 = -_matrix.M43;
    }
    else
        _matrix = ::g::Uno::Matrix::Invert2(_matrix);
}

// public float4x4 get_Matrix() [instance] :1012
::g::Uno::Float4x4 FastMatrix::Matrix()
{
    return _matrix;
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) [instance] :1114
FastMatrix* FastMatrix::Mul(FastMatrix* m)
{
    FastMatrix* res = FastMatrix::New1();
    res->_matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(m)->_matrix);
    res->_hasNonTranslation = (_hasNonTranslation || m->_hasNonTranslation);
    return res;
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) [instance] :1173
void FastMatrix::PrependFastMatrix(FastMatrix* fm)
{
    if (_hasNonTranslation || uPtr(fm)->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(uPtr(fm)->Matrix(), _matrix);
        _hasNonTranslation = true;
    }
    else
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void PrependRotationQuaternion(float4 q) [instance] :1162
void FastMatrix::PrependRotationQuaternion(::g::Uno::Float4 q)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationQuaternion(q), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float3 scale) [instance] :1156
void FastMatrix::PrependScale1(::g::Uno::Float3 scale)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(scale), _matrix);
    _hasNonTranslation = true;
}

// public void PrependShear(float xRadians, float yRadians) [instance] :1095
void FastMatrix::PrependShear(float xRadians, float yRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependTranslation(float x, float y, float z) [instance] :1059
void FastMatrix::PrependTranslation(float x, float y, float z)
{
    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else
        _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)), _matrix);
}

// public void PrependTranslation(float3 offset) [instance] :1168
void FastMatrix::PrependTranslation1(::g::Uno::Float3 offset)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(offset), _matrix);
}

// public void ResetIdentity() [instance] :1034
void FastMatrix::ResetIdentity()
{
    _matrix = ::g::Uno::Float4x4__Identity();
}

// private void SimpleTranslation(float x, float y, float z) [instance] :1107
void FastMatrix::SimpleTranslation(float x, float y, float z)
{
    _matrix.M41 = (_matrix.M41 + x);
    _matrix.M42 = (_matrix.M42 + y);
    _matrix.M43 = (_matrix.M43 + z);
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) [static] :1039
FastMatrix* FastMatrix::FromFloat4x4(::g::Uno::Float4x4 m)
{
    FastMatrix* k = FastMatrix::New1();
    k->_matrix = m;
    k->_hasNonTranslation = true;
    return k;
}

// public static Fuse.FastMatrix Identity() [static] :1027
FastMatrix* FastMatrix::Identity()
{
    return FastMatrix::New1();
}

// private FastMatrix New() [static] :1016
FastMatrix* FastMatrix::New1()
{
    FastMatrix* obj1 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1964)
// -------------------------------------------------------

// internal sealed class FixedViewport :1964
// {
FixedViewport_type* FixedViewport_typeof()
{
    static uSStrong<FixedViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FixedViewport);
    options.TypeSize = sizeof(FixedViewport_type);
    type = (FixedViewport_type*)uClassType::New("Fuse.FixedViewport", options);
    type->interface0.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))FixedViewport__PointToWorldRay_fn;
    type->interface0.fp_get_PointDensity = (void(*)(uObject*, float*))FixedViewport__get_PointDensity_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_Size_fn;
    type->interface0.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewProjectionTransform_fn;
    type->interface0.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewProjectionTransformInverse_fn;
    ::TYPES[55] = ::g::Uno::Float_typeof();
    ::TYPES[47] = ::g::Uno::Int2_typeof();
    ::TYPES[36] = ::g::Fuse::IViewport_typeof();
    ::TYPES[56] = ::g::Fuse::FrustumViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IViewport_typeof(), offsetof(FixedViewport_type, interface0));
    type->SetFields(0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::FixedViewport, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::FixedViewport, _frustumViewport), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::FixedViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::FixedViewport, _pointDensity), 0);
    return type;
}

// public FixedViewport(int2 pixelSize, float pointDensity, Fuse.IFrustum frustum) :1999
void FixedViewport__ctor__fn(FixedViewport* __this, ::g::Uno::Int2* pixelSize, float* pointDensity, uObject* frustum)
{
    __this->ctor_(*pixelSize, *pointDensity, frustum);
}

// public FixedViewport New(int2 pixelSize, float pointDensity, Fuse.IFrustum frustum) :1999
void FixedViewport__New1_fn(::g::Uno::Int2* pixelSize, float* pointDensity, uObject* frustum, FixedViewport** __retval)
{
    *__retval = FixedViewport::New1(*pixelSize, *pointDensity, frustum);
}

// public float2 get_PixelSize() :1972
void FixedViewport__get_PixelSize_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PointDensity() :1967
void FixedViewport__get_PointDensity_fn(FixedViewport* __this, float* __retval)
{
    *__retval = __this->PointDensity();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) :1992
void FixedViewport__PointToWorldRay_fn(FixedViewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public float2 get_Size() :1969
void FixedViewport__get_Size_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float4x4 get_ViewProjectionTransform() :1981
void FixedViewport__get_ViewProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :1983
void FixedViewport__get_ViewProjectionTransformInverse_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public FixedViewport(int2 pixelSize, float pointDensity, Fuse.IFrustum frustum) [instance] :1999
void FixedViewport::ctor_(::g::Uno::Int2 pixelSize, float pointDensity, uObject* frustum)
{
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = frustum;
    _pixelSize = ::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y);
    _pointDensity = pointDensity;
    uPtr(_frustumViewport)->Update((uObject*)this, frustum);
}

// public float2 get_PixelSize() [instance] :1972
::g::Uno::Float2 FixedViewport::PixelSize()
{
    return _pixelSize;
}

// public float get_PointDensity() [instance] :1967
float FixedViewport::PointDensity()
{
    return _pointDensity;
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) [instance] :1992
::g::Uno::Geometry::Ray FixedViewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pointPos);
}

// public float2 get_Size() [instance] :1969
::g::Uno::Float2 FixedViewport::Size()
{
    return ::g::Uno::Float2__op_Division1(PixelSize(), PointDensity());
}

// public float4x4 get_ViewProjectionTransform() [instance] :1981
::g::Uno::Float4x4 FixedViewport::ViewProjectionTransform()
{
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :1983
::g::Uno::Float4x4 FixedViewport::ViewProjectionTransformInverse()
{
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public FixedViewport New(int2 pixelSize, float pointDensity, Fuse.IFrustum frustum) [static] :1999
FixedViewport* FixedViewport::New1(::g::Uno::Int2 pixelSize, float pointDensity, uObject* frustum)
{
    FixedViewport* obj1 = (FixedViewport*)uNew(FixedViewport_typeof());
    obj1->ctor_(pixelSize, pointDensity, frustum);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1234)
// -------------------------------------------------------

// public sealed class Font :1234
// {
// static Font() :1234
static void Font__cctor__fn(uType* __type)
{
    Font::_fontFaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[57/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.Content.Fonts.FontFace>*/]));
}

uType* Font_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Font);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Font", options);
    type->fp_cctor_ = Font__cctor__fn;
    ::TYPES[57] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::Content::Fonts::FontFace_typeof());
    ::TYPES[58] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[59] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[60] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Font, _file), 0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(::g::Fuse::Font, _fontFace), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::Content::Fonts::FontFace_typeof()), (uintptr_t)&::g::Fuse::Font::_fontFaces_, uFieldFlagsStatic);
    return type;
}

// public Font(Uno.UX.FileSource file) :1284
void Font__ctor__fn(Font* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_(file);
}

// internal Uno.UX.FileSource get_File() :1240
void Font__get_File_fn(Font* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// internal Uno.Content.Fonts.FontFace get_FontFace() :1252
void Font__get_FontFace_fn(Font* __this, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = __this->FontFace();
}

// private Uno.Content.Fonts.FontFace Load() :1268
void Font__Load_fn(Font* __this, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = __this->Load();
}

// public Font New(Uno.UX.FileSource file) :1284
void Font__New1_fn(::g::Uno::UX::FileSource* file, Font** __retval)
{
    *__retval = Font::New1(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Font::_fontFaces_;

// public Font(Uno.UX.FileSource file) [instance] :1284
void Font::ctor_(::g::Uno::UX::FileSource* file)
{
    _file = file;
}

// internal Uno.UX.FileSource get_File() [instance] :1240
::g::Uno::UX::FileSource* Font::File()
{
    return _file;
}

// internal Uno.Content.Fonts.FontFace get_FontFace() [instance] :1252
::g::Uno::Content::Fonts::FontFace* Font::FontFace()
{
    bool ret2;

    if (_fontFace == NULL)
    {
        ::g::Uno::Content::Fonts::FontFace* ff;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Font::_fontFaces()), _file, (void**)(&ff), &ret2), ret2))
        {
            _fontFace = Load();
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Font::_fontFaces()), _file, _fontFace);
        }
        else
            _fontFace = ff;
    }

    return _fontFace;
}

// private Uno.Content.Fonts.FontFace Load() [instance] :1268
::g::Uno::Content::Fonts::FontFace* Font::Load()
{
    ::g::Uno::UX::BundleFileSource* bfs = uAs< ::g::Uno::UX::BundleFileSource*>(File(), ::TYPES[58/*Uno.UX.BundleFileSource*/]);

    if (bfs != NULL)
        return ::g::Uno::Content::Fonts::FontFace::Load1(uPtr(bfs)->BundleFile);
    else
    {
        uArray* data = uPtr(File())->ReadAllBytes();
        return ::g::Uno::Content::Fonts::FontFace::Load(uPtr(File())->Name, data, 0, uPtr(data)->Length());
    }
}

// public Font New(Uno.UX.FileSource file) [static] :1284
Font* Font::New1(::g::Uno::UX::FileSource* file)
{
    Font* obj1 = (Font*)uNew(Font_typeof());
    obj1->ctor_(file);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1211)
// -------------------------------------------------------

// public static class Fonts :1211
// {
uClassType* Fonts_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Fonts", options);
    ::TYPES[59] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[53] = ::g::FuseCore_bundle_typeof();
    type->SetFields(0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::Fuse::Fonts::_fallback_, uFieldFlagsStatic);
    return type;
}

// public static Fuse.Font get_Fallback() :1217
void Fonts__get_Fallback_fn(::g::Fuse::Font** __retval)
{
    *__retval = Fonts::Fallback();
}

uSStrong< ::g::Fuse::Font*> Fonts::_fallback_;

// public static Fuse.Font get_Fallback() [static] :1217
::g::Fuse::Font* Fonts::Fallback()
{
    if (Fonts::_fallback() == NULL)
        Fonts::_fallback() = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::FuseCore_bundle::OpenSans_Light2d3bea71()));

    return Fonts::_fallback();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1299)
// -------------------------------------------------------

// public static class FramebufferPool :1299
// {
uClassType* FramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FramebufferPool", options);
    ::TYPES[47] = ::g::Uno::Int2_typeof();
    ::TYPES[61] = ::g::Fuse::FramebufferPoolImpl_typeof();
    type->SetFields(0,
        ::g::Fuse::FramebufferPoolImpl_typeof(), (uintptr_t)&::g::Fuse::FramebufferPool::framebufferPool_, uFieldFlagsStatic);
    return type;
}

// private static void EnsurePool() :1303
void FramebufferPool__EnsurePool_fn()
{
    FramebufferPool::EnsurePool();
}

// internal static int get_Frame() :1335
void FramebufferPool__get_Frame_fn(int* __retval)
{
    *__retval = FramebufferPool::Frame();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :1321
void FramebufferPool__Lock_fn(int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock(*width, *height, *format, *depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) :1317
void FramebufferPool__Lock1_fn(::g::Uno::Int2* size, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock1(*size, *format, *depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) :1305
void FramebufferPool__Register_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::Register(cfb);
}

// public static void Release(framebuffer fb) :1327
void FramebufferPool__Release_fn(::g::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool::Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) :1311
void FramebufferPool__UnRegister_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::UnRegister(cfb);
}

uSStrong< ::g::Fuse::FramebufferPoolImpl*> FramebufferPool::framebufferPool_;

// private static void EnsurePool() [static] :1303
void FramebufferPool::EnsurePool()
{
    if (FramebufferPool::framebufferPool() == NULL)
        FramebufferPool::framebufferPool() = ::g::Fuse::FramebufferPoolImpl::New1();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [static] :1321
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock(int width, int height, int format, bool depth)
{
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool())->Lock(width, height, format, depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) [static] :1317
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock1(::g::Uno::Int2 size, int format, bool depth)
{
    return FramebufferPool::Lock(size.X, size.Y, format, depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) [static] :1305
void FramebufferPool::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool())->Register(cfb);
}

// public static void Release(framebuffer fb) [static] :1327
void FramebufferPool::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool())->Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) [static] :1311
void FramebufferPool::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool())->UnRegister(cfb);
}

// internal static int get_Frame() [static] :1335
int FramebufferPool::Frame()
{
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool())->frame;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1344)
// -------------------------------------------------------

// internal sealed class FramebufferPoolImpl :1344
// {
FramebufferPoolImpl_type* FramebufferPoolImpl_typeof()
{
    static uSStrong<FramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FramebufferPoolImpl);
    options.TypeSize = sizeof(FramebufferPoolImpl_type);
    type = (FramebufferPoolImpl_type*)uClassType::New("Fuse.FramebufferPoolImpl", options);
    type->fp_ctor_ = (void*)FramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))FramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose_fn;
    ::STRINGS[24] = uString::Const("Attempted to allocate ");
    ::STRINGS[25] = uString::Const("x");
    ::STRINGS[26] = uString::Const(" framebuffer, max is ");
    ::STRINGS[27] = uString::Const("framebuffer pinned while app going into the background");
    ::STRINGS[28] = uString::Const("Pool is leaking");
    ::TYPES[62] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof());
    ::TYPES[63] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[64] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof());
    ::TYPES[65] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof());
    ::TYPES[66] = ::g::Uno::Action_typeof();
    ::TYPES[67] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[68] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof());
    ::TYPES[69] = ::g::Fuse::CacheFramebuffer_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[47] = ::g::Uno::Int2_typeof();
    ::TYPES[46] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[70] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[19] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(FramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, cacheFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, frame), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, framebufferPool), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, framebuffersProvidedSinceLastCollect), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Int_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, lastFrameUsed), 0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, lockedFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, pixelsProvidedSinceLastCollect), 0);
    return type;
}

// public FramebufferPoolImpl() :1346
void FramebufferPoolImpl__ctor__fn(FramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private void CollectCacheFramebuffers() :1433
void FramebufferPoolImpl__CollectCacheFramebuffers_fn(FramebufferPoolImpl* __this)
{
    __this->CollectCacheFramebuffers();
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :1364
void FramebufferPoolImpl__FindBuffer_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, int* flags, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->FindBuffer(*width, *height, *format, *flags);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :1465
void FramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose_fn(FramebufferPoolImpl* __this)
{
    ::g::Fuse::CacheFramebuffer* ret7;
    ::g::Uno::Graphics::Framebuffer* ret8;
    bool ret9;

    for (int i = 0; i < uPtr(__this->cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->cacheFramebuffers), uCRef<int>(i), &ret7), ret7);

        if (uPtr(c)->IsPinned())
            U_THROW(::g::Uno::Exception::New2(::STRINGS[27/*"framebuffer...*/]));

        uPtr(c)->Collect();
        uPtr(__this->cacheFramebuffers)->RemoveAt(i--);
    }

    for (int i1 = 0; i1 < uPtr(__this->framebufferPool)->Count(); i1++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->framebufferPool), uCRef<int>(i1), &ret8), ret8);
        uPtr(fb)->Dispose();
        uPtr(__this->framebufferPool)->RemoveAt(i1--);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->lastFrameUsed), fb, &ret9);
    }
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :1487
void FramebufferPoolImpl__Lock_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Lock(*width, *height, *format, *depth);
}

// public FramebufferPoolImpl New() :1346
void FramebufferPoolImpl__New1_fn(FramebufferPoolImpl** __retval)
{
    *__retval = FramebufferPoolImpl::New1();
}

// internal void Register(Fuse.CacheFramebuffer cfb) :1405
void FramebufferPoolImpl__Register_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->Register(cfb);
}

// internal void Release(framebuffer fb) :1495
void FramebufferPoolImpl__Release_fn(FramebufferPoolImpl* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->Release(fb);
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) :1426
void FramebufferPoolImpl__UnRegister_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->UnRegister(cfb);
}

// public void Update() :1505
void FramebufferPoolImpl__Update_fn(FramebufferPoolImpl* __this)
{
    __this->Update();
}

// public FramebufferPoolImpl() [instance] :1346
void FramebufferPoolImpl::ctor_()
{
    framebufferPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[62/*Uno.Collections.List<framebuffer>*/]));
    lastFrameUsed = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[63/*Uno.Collections.Dictionary<framebuffer, int>*/]));
    lockedFramebuffers = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[64/*Uno.Collections.HashSet<framebuffer>*/]));
    cacheFramebuffers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[65/*Uno.Collections.List<Fuse.CacheFramebuffer>*/]));
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)FramebufferPoolImpl__Update_fn, this), 0);
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
}

// private void CollectCacheFramebuffers() [instance] :1433
void FramebufferPoolImpl::CollectCacheFramebuffers()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > ret3;
    ::g::Fuse::CacheFramebuffer* ret4;

    if (uPtr(cacheFramebuffers)->Count() < 3)
        return;

    int sum = 0;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(cacheFramebuffers), &ret3), ret3); enum1.MoveNext(::TYPES[68/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]); )
    {
        ::g::Fuse::CacheFramebuffer* cfb = enum1.Current(::TYPES[68/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]);
        sum = sum + uPtr(cfb)->FramesSinceLastUse();
    }

    int avg = sum / uPtr(cacheFramebuffers)->Count();
    int limit = avg + 3;

    for (int i = 0; i < uPtr(cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(cacheFramebuffers), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(c)->IsPinned() && (uPtr(c)->FramesSinceLastUse() >= limit))
        {
            uPtr(c)->Collect();
            uPtr(cacheFramebuffers)->RemoveAt(i--);
        }
    }

    framebuffersProvidedSinceLastCollect = 0;
    pixelsProvidedSinceLastCollect = 0;
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :1364
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::FindBuffer(int width, int height, int format, int flags)
{
    ::g::Uno::Graphics::Framebuffer* ret5;
    bool ret6;
    width = ::g::Uno::Math::Max8(1, width);
    height = ::g::Uno::Math::Max8(1, height);

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret5), ret5);

        if (uPtr(fb)->Size().X != width)
            continue;

        if (uPtr(fb)->Size().Y != height)
            continue;

        if (uPtr(fb)->Format() != format)
            continue;

        if (uPtr(fb)->HasDepth() != ((flags & 1) == 1))
            continue;

        if (uPtr(fb)->SupportsMipmap() != ((flags & 2) == 2))
            continue;

        uPtr(framebufferPool)->RemoveAt(i);
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret6);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        return fb;
    }

    int maxSize = ::g::Uno::Graphics::Texture2D::MaxSize();

    if ((width > maxSize) || (height > maxSize))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[24/*"Attempted t...*/], uBox<int>(::TYPES[27/*int*/], width)), ::STRINGS[25/*"x"*/]), uBox<int>(::TYPES[27/*int*/], height)), ::STRINGS[26/*" framebuffe...*/]), uBox<int>(::TYPES[27/*int*/], maxSize)), ::STRINGS[25/*"x"*/]), uBox<int>(::TYPES[27/*int*/], maxSize))));

    double t = 0.0;
    ::g::Uno::Graphics::Framebuffer* buffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Uno::Int2__New2(width, height), format, flags);
    return buffer;
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [instance] :1487
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::Lock(int width, int height, int format, bool depth)
{
    bool ret10;
    ::g::Uno::Graphics::Framebuffer* fb = FindBuffer(width, height, format, depth ? 1 : 0);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
    ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret10);
    return fb;
}

// internal void Register(Fuse.CacheFramebuffer cfb) [instance] :1405
void FramebufferPoolImpl::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    framebuffersProvidedSinceLastCollect = (framebuffersProvidedSinceLastCollect + 1);
    pixelsProvidedSinceLastCollect = (pixelsProvidedSinceLastCollect + (uPtr(cfb)->Width() * uPtr(cfb)->Height()));
    ::g::Uno::Collections::List__Add_fn(uPtr(cacheFramebuffers), cfb);

    if (pixelsProvidedSinceLastCollect > 1000000)
        CollectCacheFramebuffers();
    else if (framebuffersProvidedSinceLastCollect > 50)
        CollectCacheFramebuffers();
}

// internal void Release(framebuffer fb) [instance] :1495
void FramebufferPoolImpl::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    bool ret11;
    bool ret12;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(lockedFramebuffers), fb, &ret11), ret11))
    {
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(lockedFramebuffers), fb, &ret12);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        ::g::Uno::Collections::List__Add_fn(uPtr(framebufferPool), fb);
    }
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) [instance] :1426
void FramebufferPoolImpl::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    bool ret13;
    framebuffersProvidedSinceLastCollect = 0;
    ::g::Uno::Collections::List__Remove_fn(uPtr(cacheFramebuffers), cfb, &ret13);
}

// public void Update() [instance] :1505
void FramebufferPoolImpl::Update()
{
    ::g::Uno::Graphics::Framebuffer* ret14;
    bool ret15;
    bool ret16;
    bool contextBound = false;
    frame++;

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret14), ret14);
        int framesSinceUse;
        ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(lastFrameUsed), fb, &framesSinceUse, &ret15);
        framesSinceUse = frame - framesSinceUse;

        if (framesSinceUse < 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[28/*"Pool is lea...*/]));

        if (framesSinceUse > 1)
        {
            if (!contextBound)
            {
                GLHelper::SwapBackToBackgroundSurface();
                contextBound = true;
            }

            uPtr(fb)->Dispose();
            uPtr(framebufferPool)->RemoveAt(i--);
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(lastFrameUsed), fb, &ret16);
        }
    }
}

// public FramebufferPoolImpl New() [static] :1346
FramebufferPoolImpl* FramebufferPoolImpl::New1()
{
    FramebufferPoolImpl* obj2 = (FramebufferPoolImpl*)uNew(FramebufferPoolImpl_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(73)
// ---------------------------------------------------------

// private sealed class App.FrameCallback :73
// {
App__FrameCallback_type* App__FrameCallback_typeof()
{
    static uSStrong<App__FrameCallback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(App__FrameCallback);
    options.TypeSize = sizeof(App__FrameCallback_type);
    type = (App__FrameCallback_type*)uClassType::New("Fuse.App.FrameCallback", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_doFrame = (void(*)(uObject*, int64_t*))App__FrameCallback__doFrame_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[29] = uString::Const("com.Bindings.Binding_Fuse_App_FrameCallback");
    ::STRINGS[30] = uString::Const("<init>");
    ::STRINGS[31] = uString::Const("(J)V");
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[71] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[72] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[5] = ::g::Android::android::view::ChoreographerDLRFrameCallback_typeof();
    ::TYPES[73] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(App__FrameCallback_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(App__FrameCallback_type, interface1),
        ::g::Android::android::view::ChoreographerDLRFrameCallback_typeof(), offsetof(App__FrameCallback_type, interface2));
    type->SetFields(5,
        ::g::Fuse::App_typeof(), offsetof(::g::Fuse::App__FrameCallback, _app), 0,
        ::g::Android::android::view::Choreographer_typeof(), offsetof(::g::Fuse::App__FrameCallback, _choreographer), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Fuse::App__FrameCallback, _prevTimeNanos), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::App__FrameCallback::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public FrameCallback(Fuse.App app) :81
void App__FrameCallback__ctor_4_fn(App__FrameCallback* __this, ::g::Fuse::App* app)
{
    __this->ctor_4(app);
}

// public void doFrame(long frameTimeNanos) :88
void App__FrameCallback__doFrame_fn(App__FrameCallback* __this, int64_t* frameTimeNanos)
{
    __this->doFrame(*frameTimeNanos);
}

// public FrameCallback New(Fuse.App app) :81
void App__FrameCallback__New5_fn(::g::Fuse::App* app, App__FrameCallback** __retval)
{
    *__retval = App__FrameCallback::New5(app);
}

jclass App__FrameCallback::_javaClass2_;

// public FrameCallback(Fuse.App app) [instance] :81
void App__FrameCallback::ctor_4(::g::Fuse::App* app)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[29/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(App__FrameCallback::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        App__FrameCallback::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[29/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_doFrame","(JJJ)V",Binding_Fuse_App_FrameCallback__doFrame21642);
        COMMIT_REG_MTD(App__FrameCallback::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[30/*"<init>"*/], ::STRINGS[31/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _app = app;
    _prevTimeNanos = ::g::Android::java::lang::System::nanoTime();
    _choreographer = ::g::Android::android::view::Choreographer::getInstance();
}

// public void doFrame(long frameTimeNanos) [instance] :88
void App__FrameCallback::doFrame(int64_t frameTimeNanos)
{
    uPtr(_choreographer)->postFrameCallback((uObject*)this);

    try
    {
        uPtr(_app)->PropagateBackground();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }

    double currentTime = (double)frameTimeNanos * 1e-09;
    double deltaTime = (double)(frameTimeNanos - _prevTimeNanos) * 1e-09;
    ::g::Fuse::Time::Set(currentTime, deltaTime);

    try
    {
        uPtr(_app)->OnUpdate();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e1 = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e1);
    }

    _prevTimeNanos = frameTimeNanos;
}

// public FrameCallback New(Fuse.App app) [static] :81
App__FrameCallback* App__FrameCallback::New5(::g::Fuse::App* app)
{
    App__FrameCallback* obj1 = (App__FrameCallback*)uNew(App__FrameCallback_typeof());
    obj1->ctor_4(app);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1922)
// -------------------------------------------------------

// internal sealed class FrustumViewport :1922
// {
uType* FrustumViewport_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FrustumViewport);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FrustumViewport", options);
    type->fp_ctor_ = (void*)FrustumViewport__New1_fn;
    ::TYPES[74] = ::g::Uno::Float2_typeof();
    ::TYPES[36] = ::g::Fuse::IViewport_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[75] = ::g::Uno::Geometry::Ray_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewTransformInverse), 0);
    return type;
}

// public generated FrustumViewport() :1922
void FrustumViewport__ctor__fn(FrustumViewport* __this)
{
    __this->ctor_();
}

// public generated FrustumViewport New() :1922
void FrustumViewport__New1_fn(FrustumViewport** __retval)
{
    *__retval = FrustumViewport::New1();
}

// public static Uno.Geometry.Ray PointToWorldRay(Fuse.IViewport viewport, float2 pointPos) :1942
void FrustumViewport__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = FrustumViewport::PointToWorldRay(viewport, *pointPos);
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) :1931
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum)
{
    __this->Update(viewport, frustum);
}

// public static Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.Node where, Uno.Geometry.Ray world) :1954
void FrustumViewport__WorldToLocalRay_fn(uObject* viewport, ::g::Fuse::Node* where, ::g::Uno::Geometry::Ray* world, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = FrustumViewport::WorldToLocalRay(viewport, where, *world);
}

// public generated FrustumViewport() [instance] :1922
void FrustumViewport::ctor_()
{
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) [instance] :1931
void FrustumViewport::Update(uObject* viewport, uObject* frustum)
{
    ProjectionTransform = ::g::Fuse::IFrustum::GetProjectionTransform(uInterface(uPtr(frustum), ::TYPES[137/*Fuse.IFrustum*/]), viewport);
    ProjectionTransformInverse = ::g::Fuse::IFrustum::GetProjectionTransformInverse(uInterface(frustum, ::TYPES[137/*Fuse.IFrustum*/]), viewport);
    ViewTransform = ::g::Fuse::IFrustum::GetViewTransform(uInterface(frustum, ::TYPES[137/*Fuse.IFrustum*/]), viewport);
    ViewTransformInverse = ::g::Fuse::IFrustum::GetViewTransformInverse(uInterface(frustum, ::TYPES[137/*Fuse.IFrustum*/]), viewport);
    ViewProjectionTransform = ::g::Uno::Matrix::Mul8(ViewTransform, ProjectionTransform);
    ViewProjectionTransformInverse = ::g::Uno::Matrix::Mul8(ProjectionTransformInverse, ViewTransformInverse);
}

// public generated FrustumViewport New() [static] :1922
FrustumViewport* FrustumViewport::New1()
{
    FrustumViewport* obj1 = (FrustumViewport*)uNew(FrustumViewport_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Geometry.Ray PointToWorldRay(Fuse.IViewport viewport, float2 pointPos) [static] :1942
::g::Uno::Geometry::Ray FrustumViewport::PointToWorldRay(uObject* viewport, ::g::Uno::Float2 pointPos)
{
    ::g::Uno::Float2 p = ::g::Uno::Float2__New2(((pointPos.X / ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[36/*Fuse.IViewport*/])).X) * 2.0f) - 1.0f, ((pointPos.Y / ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[36/*Fuse.IViewport*/])).Y) * -2.0f) + 1.0f);
    ::g::Uno::Float4x4 vpi = ::g::Fuse::IViewport::ViewProjectionTransformInverse(uInterface(viewport, ::TYPES[36/*Fuse.IViewport*/]));
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, -1.0f), vpi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, 1.0f), vpi);
    return ::g::Uno::Geometry::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}

// public static Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.Node where, Uno.Geometry.Ray world) [static] :1954
::g::Uno::Geometry::Ray FrustumViewport::WorldToLocalRay(uObject* viewport, ::g::Fuse::Node* where, ::g::Uno::Geometry::Ray world)
{
    ::g::Uno::Float4x4 wi = uPtr(where)->WorldTransformInverse();
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(world.Position, wi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__op_Addition2(world.Position, world.Direction), wi);
    return ::g::Uno::Geometry::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5886)
// -------------------------------------------------------

// public class GraphicsTheme :5886
// {
::g::Fuse::Style_type* GraphicsTheme_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsTheme);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.GraphicsTheme", options);
    type->SetBase(::g::Fuse::Theme_typeof());
    type->fp_ctor_ = (void*)GraphicsTheme__New2_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[76] = ::g::Fuse::Theme_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Theme_typeof(), (uintptr_t)&::g::Fuse::GraphicsTheme::_singleton_, uFieldFlagsStatic);
    return type;
}

// public generated GraphicsTheme() :5886
void GraphicsTheme__ctor_3_fn(GraphicsTheme* __this)
{
    __this->ctor_3();
}

// public generated GraphicsTheme New() :5886
void GraphicsTheme__New2_fn(GraphicsTheme** __retval)
{
    *__retval = GraphicsTheme::New2();
}

// public static Fuse.Theme get_Singleton() :5892
void GraphicsTheme__get_Singleton_fn(::g::Fuse::Theme** __retval)
{
    *__retval = GraphicsTheme::Singleton();
}

uSStrong< ::g::Fuse::Theme*> GraphicsTheme::_singleton_;

// public generated GraphicsTheme() [instance] :5886
void GraphicsTheme::ctor_3()
{
    ctor_1();
}

// public generated GraphicsTheme New() [static] :5886
GraphicsTheme* GraphicsTheme::New2()
{
    GraphicsTheme* obj1 = (GraphicsTheme*)uNew(GraphicsTheme_typeof());
    obj1->ctor_3();
    return obj1;
}

// public static Fuse.Theme get_Singleton() [static] :5892
::g::Fuse::Theme* GraphicsTheme::Singleton()
{
    if (GraphicsTheme::_singleton() == NULL)
        GraphicsTheme::_singleton() = GraphicsTheme::New2();

    return GraphicsTheme::_singleton();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(4438)
// -------------------------------------------------------

// public static class GraphicsWorker :4438
// {
// static GraphicsWorker() :4438
static void GraphicsWorker__cctor__fn(uType* __type)
{
    GraphicsWorker::_work_ = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[77/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
}

uClassType* GraphicsWorker_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.GraphicsWorker", options);
    type->fp_cctor_ = GraphicsWorker__cctor__fn;
    ::TYPES[77] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[66] = ::g::Uno::Action_typeof();
    ::TYPES[78] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[2] = ::g::Uno::Application_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_terminating_, uFieldFlagsStatic,
        ::g::Uno::Threading::Thread_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_thread_, uFieldFlagsStatic,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::GraphicsWorker::_work_, uFieldFlagsStatic);
    return type;
}

// public static void Dispatch(Uno.Action a) :4440
void GraphicsWorker__Dispatch_fn(uDelegate* a)
{
    GraphicsWorker::Dispatch(a);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :4481
void GraphicsWorker__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    GraphicsWorker::OnWindowClosed(sender, args);
}

// private static void Run() :4487
void GraphicsWorker__Run_fn()
{
    GraphicsWorker::Run();
}

// private static void Start() :4462
void GraphicsWorker__Start_fn()
{
    GraphicsWorker::Start();
}

bool GraphicsWorker::_terminating_;
uSStrong< ::g::Uno::Threading::Thread*> GraphicsWorker::_thread_;
uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_work_;

// public static void Dispatch(Uno.Action a) [static] :4440
void GraphicsWorker::Dispatch(uDelegate* a)
{
    GraphicsWorker_typeof()->Init();
    GraphicsWorker::Start();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_work()), a);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :4481
void GraphicsWorker::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    GraphicsWorker_typeof()->Init();
    GraphicsWorker::_terminating() = true;
    uPtr(GraphicsWorker::_thread())->Join();
}

// private static void Run() [static] :4487
void GraphicsWorker::Run()
{
    GraphicsWorker_typeof()->Init();
    bool ret1;
    GLHelper::MakeWorkerThreadContextCurrent();

    while (!GraphicsWorker::_terminating())
    {
        uDelegate* a;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_work()), (void**)(&a), &ret1), ret1))
        {
            ::uAutoReleasePool ____pool;
            uPtr(a)->InvokeVoid();
            continue;
        }

        ::g::Uno::Threading::Thread::Sleep(1);
    }
}

// private static void Start() [static] :4462
void GraphicsWorker::Start()
{
    GraphicsWorker_typeof()->Init();

    if (GraphicsWorker::_thread() != NULL)
        return;

    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)GraphicsWorker__OnWindowClosed_fn));
    GraphicsWorker::_thread() = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)GraphicsWorker__Run_fn));
    uPtr(GraphicsWorker::_thread())->Start();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1562)
// -------------------------------------------------------

// public delegate void HitTestCallback(Fuse.HitTestResult result) :1562
uDelegateType* HitTestCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.HitTestCallback", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::HitTestResult_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1572)
// -------------------------------------------------------

// public sealed class HitTestContext :1572
// {
uType* HitTestContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HitTestContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestContext", options);
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[79] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[80] = ::g::Fuse::HitTestResult_typeof();
    type->SetFields(0,
        ::g::Fuse::HitTestCallback_typeof(), offsetof(::g::Fuse::HitTestContext, _callback), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::HitTestContext, _localPoint), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::HitTestContext, _WindowPoint), 0);
    return type;
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) :1634
void HitTestContext__ctor__fn(HitTestContext* __this, ::g::Uno::Float2* windowPoint, uDelegate* callback)
{
    __this->ctor_(*windowPoint, callback);
}

// public Fuse.HitTestCallback get_Callback() :1609
void HitTestContext__get_Callback_fn(HitTestContext* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// public void Dispose() :1641
void HitTestContext__Dispose_fn(HitTestContext* __this)
{
    __this->Dispose();
}

// public void Hit(Fuse.Node obj) :1612
void HitTestContext__Hit_fn(HitTestContext* __this, ::g::Fuse::Node* obj)
{
    __this->Hit(obj);
}

// public float2 get_LocalPoint() :1577
void HitTestContext__get_LocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalPoint();
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) :1634
void HitTestContext__New1_fn(::g::Uno::Float2* windowPoint, uDelegate* callback, HitTestContext** __retval)
{
    *__retval = HitTestContext::New1(*windowPoint, callback);
}

// public void PopLocalPoint(float2 lp) :1586
void HitTestContext__PopLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp)
{
    __this->PopLocalPoint(*lp);
}

// public float2 PushLocalPoint(float2 lp) :1579
void HitTestContext__PushLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PushLocalPoint(*lp);
}

// public generated float2 get_WindowPoint() :1574
void HitTestContext__get_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// private generated void set_WindowPoint(float2 value) :1574
void HitTestContext__set_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* value)
{
    __this->WindowPoint(*value);
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) [instance] :1634
void HitTestContext::ctor_(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    WindowPoint(windowPoint);
    _localPoint = windowPoint;
    _callback = callback;
}

// public Fuse.HitTestCallback get_Callback() [instance] :1609
uDelegate* HitTestContext::Callback()
{
    return _callback;
}

// public void Dispose() [instance] :1641
void HitTestContext::Dispose()
{
    _callback = NULL;
}

// public void Hit(Fuse.Node obj) [instance] :1612
void HitTestContext::Hit(::g::Fuse::Node* obj)
{
    ::g::Fuse::HitTestResult* collection1;

    if (::g::Uno::Delegate::op_Inequality(Callback(), NULL))
        uPtr(Callback())->InvokeVoid((collection1 = ::g::Fuse::HitTestResult::New1(), uPtr(collection1)->HitObject(obj), obj, collection1));
}

// public float2 get_LocalPoint() [instance] :1577
::g::Uno::Float2 HitTestContext::LocalPoint()
{
    return _localPoint;
}

// public void PopLocalPoint(float2 lp) [instance] :1586
void HitTestContext::PopLocalPoint(::g::Uno::Float2 lp)
{
    _localPoint = lp;
}

// public float2 PushLocalPoint(float2 lp) [instance] :1579
::g::Uno::Float2 HitTestContext::PushLocalPoint(::g::Uno::Float2 lp)
{
    ::g::Uno::Float2 r = _localPoint;
    _localPoint = lp;
    return r;
}

// public generated float2 get_WindowPoint() [instance] :1574
::g::Uno::Float2 HitTestContext::WindowPoint()
{
    return _WindowPoint;
}

// private generated void set_WindowPoint(float2 value) [instance] :1574
void HitTestContext::WindowPoint(::g::Uno::Float2 value)
{
    _WindowPoint = value;
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) [static] :1634
HitTestContext* HitTestContext::New1(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    HitTestContext* obj3 = (HitTestContext*)uNew(HitTestContext_typeof());
    obj3->ctor_(windowPoint, callback);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1686)
// -------------------------------------------------------

// public delegate void HitTestHandler(object sender, Fuse.HitTestContext htc) :1686
uDelegateType* HitTestHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.HitTestHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::HitTestContext_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2508)
// -------------------------------------------------------

// private sealed class Node.HitTestRecord :2508
// {
uType* Node__HitTestRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Node__HitTestRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Node.HitTestRecord", options);
    type->fp_ctor_ = (void*)Node__HitTestRecord__New1_fn;
    ::TYPES[80] = ::g::Fuse::HitTestResult_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Node__HitTestRecord, Node), 0);
    return type;
}

// public generated HitTestRecord() :2508
void Node__HitTestRecord__ctor__fn(Node__HitTestRecord* __this)
{
    __this->ctor_();
}

// public void HitTestCallback(Fuse.HitTestResult result) :2511
void Node__HitTestRecord__HitTestCallback_fn(Node__HitTestRecord* __this, ::g::Fuse::HitTestResult* result)
{
    __this->HitTestCallback(result);
}

// public generated HitTestRecord New() :2508
void Node__HitTestRecord__New1_fn(Node__HitTestRecord** __retval)
{
    *__retval = Node__HitTestRecord::New1();
}

// public generated HitTestRecord() [instance] :2508
void Node__HitTestRecord::ctor_()
{
}

// public void HitTestCallback(Fuse.HitTestResult result) [instance] :2511
void Node__HitTestRecord::HitTestCallback(::g::Fuse::HitTestResult* result)
{
    if (Node == NULL)
        Node = uPtr(result)->HitObject();
}

// public generated HitTestRecord New() [static] :2508
Node__HitTestRecord* Node__HitTestRecord::New1()
{
    Node__HitTestRecord* obj1 = (Node__HitTestRecord*)uNew(Node__HitTestRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1565)
// -------------------------------------------------------

// public sealed class HitTestResult :1565
// {
uType* HitTestResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HitTestResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestResult", options);
    type->fp_ctor_ = (void*)HitTestResult__New1_fn;
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::HitTestResult, _HasHitDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::HitTestResult, _HitDistance), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::HitTestResult, _HitObject), 0);
    return type;
}

// public generated HitTestResult() :1565
void HitTestResult__ctor__fn(HitTestResult* __this)
{
    __this->ctor_();
}

// public generated bool get_HasHitDistance() :1567
void HitTestResult__get_HasHitDistance_fn(HitTestResult* __this, bool* __retval)
{
    *__retval = __this->HasHitDistance();
}

// internal generated void set_HasHitDistance(bool value) :1567
void HitTestResult__set_HasHitDistance_fn(HitTestResult* __this, bool* value)
{
    __this->HasHitDistance(*value);
}

// public generated float get_HitDistance() :1568
void HitTestResult__get_HitDistance_fn(HitTestResult* __this, float* __retval)
{
    *__retval = __this->HitDistance();
}

// internal generated void set_HitDistance(float value) :1568
void HitTestResult__set_HitDistance_fn(HitTestResult* __this, float* value)
{
    __this->HitDistance(*value);
}

// public generated Fuse.Node get_HitObject() :1569
void HitTestResult__get_HitObject_fn(HitTestResult* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->HitObject();
}

// internal generated void set_HitObject(Fuse.Node value) :1569
void HitTestResult__set_HitObject_fn(HitTestResult* __this, ::g::Fuse::Node* value)
{
    __this->HitObject(value);
}

// public generated HitTestResult New() :1565
void HitTestResult__New1_fn(HitTestResult** __retval)
{
    *__retval = HitTestResult::New1();
}

// public generated HitTestResult() [instance] :1565
void HitTestResult::ctor_()
{
}

// public generated bool get_HasHitDistance() [instance] :1567
bool HitTestResult::HasHitDistance()
{
    return _HasHitDistance;
}

// internal generated void set_HasHitDistance(bool value) [instance] :1567
void HitTestResult::HasHitDistance(bool value)
{
    _HasHitDistance = value;
}

// public generated float get_HitDistance() [instance] :1568
float HitTestResult::HitDistance()
{
    return _HitDistance;
}

// internal generated void set_HitDistance(float value) [instance] :1568
void HitTestResult::HitDistance(float value)
{
    _HitDistance = value;
}

// public generated Fuse.Node get_HitObject() [instance] :1569
::g::Fuse::Node* HitTestResult::HitObject()
{
    return _HitObject;
}

// internal generated void set_HitObject(Fuse.Node value) [instance] :1569
void HitTestResult::HitObject(::g::Fuse::Node* value)
{
    _HitObject = value;
}

// public generated HitTestResult New() [static] :1565
HitTestResult* HitTestResult::New1()
{
    HitTestResult* obj1 = (HitTestResult*)uNew(HitTestResult_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6307)
// -------------------------------------------------------

// public abstract interface IActualPlacement :6307
// {
uInterfaceType* IActualPlacement_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IActualPlacement", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5266)
// -------------------------------------------------------

// private sealed class ScalingModes.IdentityMode :5266
// {
ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof()
{
    static uSStrong<ScalingModes__IdentityMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ScalingModes__IdentityMode);
    options.TypeSize = sizeof(ScalingModes__IdentityMode_type);
    type = (ScalingModes__IdentityMode_type*)uClassType::New("Fuse.ScalingModes.IdentityMode", options);
    type->fp_ctor_ = (void*)ScalingModes__IdentityMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))ScalingModes__IdentityMode__GetScaleVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))ScalingModes__IdentityMode__get_Flags_fn;
    ::TYPES[81] = ::g::Fuse::Scaling_typeof();
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface1));
    return type;
}

// public generated IdentityMode() :5266
void ScalingModes__IdentityMode__ctor__fn(ScalingModes__IdentityMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :5269
void ScalingModes__IdentityMode__get_Flags_fn(ScalingModes__IdentityMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetScaleVector(Fuse.Scaling t) :5268
void ScalingModes__IdentityMode__GetScaleVector_fn(ScalingModes__IdentityMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated IdentityMode New() :5266
void ScalingModes__IdentityMode__New1_fn(ScalingModes__IdentityMode** __retval)
{
    *__retval = ScalingModes__IdentityMode::New1();
}

// public generated IdentityMode() [instance] :5266
void ScalingModes__IdentityMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :5269
int ScalingModes__IdentityMode::Flags()
{
    return 0;
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :5268
::g::Uno::Float3 ScalingModes__IdentityMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    return uPtr(t)->Vector();
}

// public generated IdentityMode New() [static] :5266
ScalingModes__IdentityMode* ScalingModes__IdentityMode::New1()
{
    ScalingModes__IdentityMode* obj1 = (ScalingModes__IdentityMode*)uNew(ScalingModes__IdentityMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(457)
// ------------------------------------------------------

// public abstract interface IFlush :457
// {
uInterfaceType* IFlush_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFlush", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1655)
// -------------------------------------------------------

// public abstract interface IFrustum :1655
// {
uInterfaceType* IFrustum_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFrustum", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2785)
// -------------------------------------------------------

// public enum InvalidateLayoutReason :2785
uEnumType* InvalidateLayoutReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.InvalidateLayoutReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NothingChanged", 0LL,
        "ChildChanged", 1LL,
        "MarginBoxChanged", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5259)
// -------------------------------------------------------

// public abstract interface IScalingMode :5259
// {
uInterfaceType* IScalingMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IScalingMode", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6328)
// -------------------------------------------------------

// public abstract interface ITransformMode :6328
// {
uInterfaceType* ITransformMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITransformMode", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6333)
// -------------------------------------------------------

// public abstract interface ITranslationMode :6333
// {
uInterfaceType* ITranslationMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITranslationMode", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1899)
// -------------------------------------------------------

// public abstract interface IViewport :1899
// {
uInterfaceType* IViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IViewport", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1703)
// -------------------------------------------------------

// internal sealed class KeyboardBootstrapper :1703
// {
uType* KeyboardBootstrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(KeyboardBootstrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.KeyboardBootstrapper", options);
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[82] = ::g::Uno::Platform::KeyEventArgs_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    return type;
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :1705
void KeyboardBootstrapper__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyPressed(sender, args);
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) :1722
void KeyboardBootstrapper__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyReleased(sender, args);
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [static] :1705
void KeyboardBootstrapper::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    try
    {
        if (!uPtr(args)->Handled() && (uPtr(args)->Key() == 9))
            ::g::Fuse::Input::Focus::Move(uPtr(args)->IsShiftKeyPressed() ? 0 : 1);

        ::g::Fuse::Input::Keyboard::RaiseKeyPressed(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) [static] :1722
void KeyboardBootstrapper::OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    try
    {
        ::g::Fuse::Input::Keyboard::RaiseKeyReleased(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Launcher\0.19.3\$.uno(20)
// ----------------------------------------------------------

// public static class Launcher :20
// {
uClassType* Launcher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Launcher", options);
    ::STRINGS[32] = uString::Const("com.google.android.apps.maps");
    ::STRINGS[33] = uString::Const("com.google.android.maps.MapsActivity");
    ::STRINGS[34] = uString::Const("tel:");
    ::STRINGS[35] = uString::Const("mailto:");
    ::STRINGS[36] = uString::Const("?");
    ::STRINGS[37] = uString::Const("cc=");
    ::STRINGS[38] = uString::Const("&");
    ::STRINGS[39] = uString::Const("bcc=");
    ::STRINGS[40] = uString::Const("subject=");
    ::STRINGS[10] = uString::Const(" ");
    ::STRINGS[41] = uString::Const("%20");
    ::STRINGS[42] = uString::Const("body=");
    ::STRINGS[43] = uString::Const(",");
    ::STRINGS[44] = uString::Const("geo:");
    ::STRINGS[45] = uString::Const("?q=");
    ::TYPES[83] = ::g::Android::android::content::Intent_typeof();
    ::TYPES[84] = ::g::Android::Base::Permissions_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[73] = ::g::Uno::Double_typeof();
    ::TYPES[85] = ::g::Uno::Net::Http::Uri_typeof();
    return type;
}

// public static void _launchMaps(string uri) :85
void Launcher___launchMaps_fn(uString* uri)
{
    Launcher::_launchMaps(uri);
}

// public static void LaunchCall(string callString) :22
void Launcher__LaunchCall_fn(uString* callString)
{
    Launcher::LaunchCall(callString);
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) :125
void Launcher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    Launcher::LaunchEmail(to, carbonCopy, blindCarbonCopy, subject, message);
}

// public static void LaunchMaps(double latitude, double longitude) :47
void Launcher__LaunchMaps_fn(double* latitude, double* longitude)
{
    Launcher::LaunchMaps(*latitude, *longitude);
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) :101
void Launcher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri)
{
    Launcher::LaunchUri(uri);
}

// public static void _launchMaps(string uri) [static] :85
void Launcher::_launchMaps(uString* uri)
{
    ::g::Android::android::content::Intent* mapIntent = ::g::Android::android::content::Intent::New9(::g::Android::android::content::Intent::ACTION_VIEW());
    mapIntent->setData(::g::Android::android::net::Uri::parse(::g::Android::java::lang::String::op_Implicit1(uri)));
    mapIntent->setClassName1(::g::Android::java::lang::String::op_Implicit1(::STRINGS[32/*"com.google....*/]), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[33/*"com.google....*/]));
    uPtr(::g::Android::android::app::Activity::GetAppActivity())->startActivity(mapIntent);
}

// public static void LaunchCall(string callString) [static] :22
void Launcher::LaunchCall(uString* callString)
{
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append1(::STRINGS[34/*"tel:"*/]);
    builder->Append1(callString);
    ::g::Android::Base::Permissions::RequestPermission(::g::Android::Base::Permissions::CALL_PHONE());
    ::g::Android::android::content::Intent* callIntent = ::g::Android::android::content::Intent::New9(::g::Android::android::content::Intent::ACTION_CALL());
    callIntent->setData(::g::Android::android::net::Uri::parse(::g::Android::java::lang::String::op_Implicit1(uPtr(builder)->ToString())));
    ::g::Android::android::app::Activity* a = ::g::Android::android::app::Activity::GetAppActivity();
    uPtr(a)->startActivity(callIntent);
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) [static] :125
void Launcher::LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append1(::STRINGS[35/*"mailto:"*/]);
    builder->Append1(to);
    builder->Append1(::STRINGS[36/*"?"*/]);

    if (!::g::Uno::String::IsNullOrEmpty(carbonCopy))
    {
        uPtr(builder)->Append1(::STRINGS[37/*"cc="*/]);
        builder->Append1(carbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(blindCarbonCopy))
    {
        uPtr(builder)->Append1(::STRINGS[38/*"&"*/]);
        builder->Append1(::STRINGS[39/*"bcc="*/]);
        builder->Append1(blindCarbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(subject))
    {
        uPtr(builder)->Append1(::STRINGS[38/*"&"*/]);
        builder->Append1(::STRINGS[40/*"subject="*/]);
        builder->Append1(::g::Uno::String::Replace1(uPtr(subject), ::STRINGS[10/*" "*/], ::STRINGS[41/*"%20"*/]));
    }

    if (!::g::Uno::String::IsNullOrEmpty(message))
    {
        uPtr(builder)->Append1(::STRINGS[38/*"&"*/]);
        builder->Append1(::STRINGS[42/*"body="*/]);
        builder->Append1(::g::Uno::String::Replace1(uPtr(message), ::STRINGS[10/*" "*/], ::STRINGS[41/*"%20"*/]));
    }

    ::g::Android::Base::Permissions::RequestPermission(::g::Android::Base::Permissions::INTERNET());
    ::g::Android::android::content::Intent* mailIntent = ::g::Android::android::content::Intent::New9(::g::Android::android::content::Intent::ACTION_SENDTO());
    mailIntent->setData(::g::Android::android::net::Uri::parse(::g::Android::java::lang::String::op_Implicit1(uPtr(builder)->ToString())));
    ::g::Android::android::app::Activity* a = ::g::Android::android::app::Activity::GetAppActivity();
    uPtr(a)->startActivity(mailIntent);
}

// public static void LaunchMaps(double latitude, double longitude) [static] :47
void Launcher::LaunchMaps(double latitude, double longitude)
{
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[73/*double*/]), ::STRINGS[43/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[73/*double*/]));
    Launcher::_launchMaps(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[44/*"geo:"*/], latlon), ::STRINGS[45/*"?q="*/]), latlon));
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) [static] :101
void Launcher::LaunchUri(::g::Uno::Net::Http::Uri* uri)
{
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append1(uPtr(uri)->AbsoluteUri());
    ::g::Android::Base::Permissions::RequestPermission(::g::Android::Base::Permissions::INTERNET());
    ::g::Android::android::content::Intent* callIntent = ::g::Android::android::content::Intent::New9(::g::Android::android::content::Intent::ACTION_VIEW());
    callIntent->setData(::g::Android::android::net::Uri::parse(::g::Android::java::lang::String::op_Implicit1(uPtr(builder)->ToString())));
    ::g::Android::android::app::Activity* a = ::g::Android::android::app::Activity::GetAppActivity();
    uPtr(a)->startActivity(callIntent);
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2758)
// -------------------------------------------------------

// public enum Layer :2758
uEnumType* Layer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layer", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Background", 0LL,
        "Layout", 1LL,
        "Overlay", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2793)
// -------------------------------------------------------

// public enum LayoutDependent :2793
uEnumType* LayoutDependent_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutDependent", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "No", 0LL,
        "NoArrange", 1LL,
        "Maybe", 2LL,
        "MaybeArrange", 3LL,
        "Yes", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2765)
// -------------------------------------------------------

// public enum LayoutRole :2765
uEnumType* LayoutRole_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutRole", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Standard", 0LL,
        "Inert", 1LL,
        "Independent", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6340)
// -------------------------------------------------------

// private sealed class TranslationModes.LocalMode :6340
// {
TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof()
{
    static uSStrong<TranslationModes__LocalMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__LocalMode);
    options.TypeSize = sizeof(TranslationModes__LocalMode_type);
    type = (TranslationModes__LocalMode_type*)uClassType::New("Fuse.TranslationModes.LocalMode", options);
    type->fp_ctor_ = (void*)TranslationModes__LocalMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__LocalMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__LocalMode__get_Flags_fn;
    ::TYPES[86] = ::g::Fuse::Translation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface1));
    return type;
}

// public generated LocalMode() :6340
void TranslationModes__LocalMode__ctor__fn(TranslationModes__LocalMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :6343
void TranslationModes__LocalMode__get_Flags_fn(TranslationModes__LocalMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :6342
void TranslationModes__LocalMode__GetAbsVector_fn(TranslationModes__LocalMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated LocalMode New() :6340
void TranslationModes__LocalMode__New1_fn(TranslationModes__LocalMode** __retval)
{
    *__retval = TranslationModes__LocalMode::New1();
}

// public generated LocalMode() [instance] :6340
void TranslationModes__LocalMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :6343
int TranslationModes__LocalMode::Flags()
{
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :6342
::g::Uno::Float3 TranslationModes__LocalMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return uPtr(t)->Vector();
}

// public generated LocalMode New() [static] :6340
TranslationModes__LocalMode* TranslationModes__LocalMode::New1()
{
    TranslationModes__LocalMode* obj1 = (TranslationModes__LocalMode*)uNew(TranslationModes__LocalMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2016)
// -------------------------------------------------------

// internal sealed extern class MobileBootstrapping :2016
// {
uType* MobileBootstrapping_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MobileBootstrapping);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.MobileBootstrapping", options);
    ::TYPES[12] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[13] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[87] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof());
    ::TYPES[88] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[2] = ::g::Uno::Application_typeof();
    ::TYPES[89] = ::g::Uno::EventArgs_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::MobileBootstrapping::_isInited_, uFieldFlagsStatic);
    return type;
}

// public static void Init() :2019
void MobileBootstrapping__Init_fn()
{
    MobileBootstrapping::Init();
}

// private static void OnEnterBackground(Uno.Platform2.ApplicationState state) :2081
void MobileBootstrapping__OnEnterBackground_fn(int* state)
{
    MobileBootstrapping::OnEnterBackground(*state);
}

// private static void OnEnterForeground(Uno.Platform2.ApplicationState state) :2064
void MobileBootstrapping__OnEnterForeground_fn(int* state)
{
    MobileBootstrapping::OnEnterForeground(*state);
}

// private static void OnEnterInteractive(Uno.Platform2.ApplicationState state) :2069
void MobileBootstrapping__OnEnterInteractive_fn(int* state)
{
    MobileBootstrapping::OnEnterInteractive(*state);
}

// private static void OnExitInteractive(Uno.Platform2.ApplicationState state) :2075
void MobileBootstrapping__OnExitInteractive_fn(int* state)
{
    MobileBootstrapping::OnExitInteractive(*state);
}

// internal static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :2049
void MobileBootstrapping__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    MobileBootstrapping::OnKeyPressed(sender, args);
}

// internal static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) :2054
void MobileBootstrapping__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    MobileBootstrapping::OnKeyReleased(sender, args);
}

// private static void OnReceivedLowMemoryWarning(object sender, Uno.EventArgs args) :2085
void MobileBootstrapping__OnReceivedLowMemoryWarning_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    MobileBootstrapping::OnReceivedLowMemoryWarning(sender, args);
}

// private static void OnStarted(Uno.Platform2.ApplicationState state) :2059
void MobileBootstrapping__OnStarted_fn(int* state)
{
    MobileBootstrapping::OnStarted(*state);
}

// private static void OnTerminating(Uno.Platform2.ApplicationState state) :2038
void MobileBootstrapping__OnTerminating_fn(int* state)
{
    MobileBootstrapping::OnTerminating(*state);
}

bool MobileBootstrapping::_isInited_;

// public static void Init() [static] :2019
void MobileBootstrapping::Init()
{
    if (MobileBootstrapping::_isInited())
        return;

    MobileBootstrapping::_isInited() = true;
    ::g::Uno::Platform2::Application::add_Started(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Uno::Platform2::Application::add_EnteringInteractive(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Uno::Platform2::Application::add_ExitedInteractive(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterBackground_fn));
    ::g::Uno::Platform2::Application::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)MobileBootstrapping__OnReceivedLowMemoryWarning_fn));
    ::g::Uno::Platform2::Application::add_Terminating(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnTerminating_fn));
    ::g::Uno::Platform2::Application::add_KeyDown(uDelegate::New(::TYPES[87/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyPressed_fn));
    ::g::Uno::Platform2::Application::add_KeyDown(uDelegate::New(::TYPES[87/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)MobileBootstrapping__OnKeyPressed_fn));
    ::g::Uno::Platform2::Application::add_KeyUp(uDelegate::New(::TYPES[87/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyReleased_fn));
    ::g::Uno::Platform2::Application::add_KeyUp(uDelegate::New(::TYPES[87/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)MobileBootstrapping__OnKeyReleased_fn));
}

// private static void OnEnterBackground(Uno.Platform2.ApplicationState state) [static] :2081
void MobileBootstrapping::OnEnterBackground(int state)
{
}

// private static void OnEnterForeground(Uno.Platform2.ApplicationState state) [static] :2064
void MobileBootstrapping::OnEnterForeground(int state)
{
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->FramesPerSecond(20U);
}

// private static void OnEnterInteractive(Uno.Platform2.ApplicationState state) [static] :2069
void MobileBootstrapping::OnEnterInteractive(int state)
{
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->FramesPerSecond(60U);
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnGotFocus(::g::Uno::EventArgs::Empty());
}

// private static void OnExitInteractive(Uno.Platform2.ApplicationState state) [static] :2075
void MobileBootstrapping::OnExitInteractive(int state)
{
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->FramesPerSecond(20U);
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnLostFocus(::g::Uno::EventArgs::Empty());
}

// internal static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [static] :2049
void MobileBootstrapping::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnKeyPressed(args);
}

// internal static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) [static] :2054
void MobileBootstrapping::OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnKeyReleased(args);
}

// private static void OnReceivedLowMemoryWarning(object sender, Uno.EventArgs args) [static] :2085
void MobileBootstrapping::OnReceivedLowMemoryWarning(uObject* sender, ::g::Uno::EventArgs* args)
{
}

// private static void OnStarted(Uno.Platform2.ApplicationState state) [static] :2059
void MobileBootstrapping::OnStarted(int state)
{
    uPtr(::g::Uno::Application::Current())->Load();
}

// private static void OnTerminating(Uno.Platform2.ApplicationState state) [static] :2038
void MobileBootstrapping::OnTerminating(int state)
{
    ::g::Uno::Platform2::Application::remove_Started(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Uno::Platform2::Application::remove_EnteringForeground(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Uno::Platform2::Application::remove_EnteringInteractive(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Uno::Platform2::Application::remove_ExitedInteractive(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Uno::Platform2::Application::remove_EnteringBackground(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterBackground_fn));
    ::g::Uno::Platform2::Application::remove_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)MobileBootstrapping__OnReceivedLowMemoryWarning_fn));
    ::g::Uno::Platform2::Application::remove_Terminating(uDelegate::New(::TYPES[13/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnTerminating_fn));
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2099)
// -------------------------------------------------------

// public interfacemodifiers class Node :2099
// {
// static Node() :2099
static void Node__cctor__fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    ::g::Fuse::StyleProperty1* ret8;
    Node::_nameHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::NameProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[90/*Fuse.StyleProperty<Fuse.Node, string>*/], NULL, uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Node>*/], (void*)Node__OnNameChanged_fn), &ret6), ret6);
    Node::_isEnabledChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::IsEnabledProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[91/*Fuse.StyleProperty<Fuse.Node, bool>*/], uCRef(true), uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Node>*/], (void*)Node__OnIsEnabledChangedInternal_fn), NULL, NULL, &ret7), ret7);
    Node::_isVisibleChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_layerProperty_ = ::g::Fuse::Properties::CreateHandle();
    Node::_layoutRoleProperty_ = ::g::Fuse::Properties::CreateHandle();
    Node::SnapToPixelsProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[91/*Fuse.StyleProperty<Fuse.Node, bool>*/], uCRef(true), uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Node>*/], (void*)Node__InvalidateLayout1_fn), &ret8), ret8);
    Node::_resourcesHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_styleHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_addedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_removedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_rootedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_unrootedHandle_ = ::g::Fuse::Properties::CreateHandle();
}

Node_type* Node_typeof()
{
    static uSStrong<Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 66;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Node);
    options.TypeSize = sizeof(Node_type);
    type = (Node_type*)uClassType::New("Fuse.Node", options);
    type->fp_cctor_ = Node__cctor__fn;
    type->fp_get_AbsoluteViewportOrigin = Node__get_AbsoluteViewportOrigin_fn;
    type->fp_get_CanAdjustMarginBox = Node__get_CanAdjustMarginBox_fn;
    type->fp_Draw = Node__Draw_fn;
    type->fp_DrawSelection = Node__DrawSelection_fn;
    type->fp_GetMarginSize = Node__GetMarginSize_fn;
    type->fp_GetSubNode = Node__GetSubNode_fn;
    type->fp_get_HitTestBounds = Node__get_HitTestBounds_fn;
    type->fp_get_HitTestChildrenBounds = Node__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = Node__get_HitTestLocalBounds_fn;
    type->fp_InvalidateLocalTransform = Node__InvalidateLocalTransform_fn;
    type->fp_InvalidateVisual = Node__InvalidateVisual_fn;
    type->fp_get_IsLocalVisible = Node__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = Node__IsMarginBoxDependent_fn;
    type->fp_get_LocalRenderBounds = Node__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = Node__OnAdjustMarginBoxPosition_fn;
    type->fp_OnApplyStyle = Node__OnApplyStyle_fn;
    type->fp_OnArrangeMarginBox = Node__OnArrangeMarginBox_fn;
    type->fp_OnBehaviorAdded = Node__OnBehaviorAdded_fn;
    type->fp_OnBehaviorRemoved = Node__OnBehaviorRemoved_fn;
    type->fp_OnHitTest = Node__OnHitTest_fn;
    type->fp_OnInvalidateLayout = Node__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = Node__OnInvalidateRenderBounds_fn;
    type->fp_OnIsEnabledChanged = Node__OnIsEnabledChanged_fn;
    type->fp_OnResetStyle = Node__OnResetStyle_fn;
    type->fp_OnRooted = Node__OnRooted_fn;
    type->fp_OnUnrooted = Node__OnUnrooted_fn;
    type->fp_PrependImplicitTransform = Node__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = Node__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = Node__PrependTransformOrigin_fn;
    type->fp_SoftDispose = Node__SoftDispose_fn;
    type->fp_get_SubNodeCount = Node__get_SubNodeCount_fn;
    ::STRINGS[46] = uString::Const("Should not have styling applied if not rooted");
    ::STRINGS[47] = uString::Const("Too many style properties - not enough backing store bits in Node");
    ::STRINGS[48] = uString::Const("Layout was invalidated while performing layout");
    ::STRINGS[49] = uString::Const("Rooting happening after the mixers update phase");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.19.3\\$.uno");
    ::STRINGS[50] = uString::Const("MarkRooted");
    ::STRINGS[51] = uString::Const("Unrooting happening after the mixers update phase");
    ::STRINGS[52] = uString::Const("MarkUnrooted");
    ::STRINGS[53] = uString::Const(" already has a parent");
    ::STRINGS[54] = uString::Const(" (");
    ::STRINGS[55] = uString::Const(")");
    ::STRINGS[56] = uString::Const("");
    ::TYPES[90] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::String_typeof());
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(Node_typeof());
    ::TYPES[91] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[92] = ::g::Fuse::Behavior_typeof();
    ::TYPES[1] = ::g::Fuse::Style_typeof();
    ::TYPES[93] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Style_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[94] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Style_typeof());
    ::TYPES[19] = uObject_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[74] = ::g::Uno::Float2_typeof();
    ::TYPES[95] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[96] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[54] = ::g::Uno::Float4x4_typeof();
    ::TYPES[34] = ::g::Uno::Float4_typeof();
    ::TYPES[97] = ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(::g::Uno::EventHandler_typeof());
    ::TYPES[66] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[89] = ::g::Uno::EventArgs_typeof();
    ::TYPES[98] = ::g::Fuse::DrawHelpers_typeof();
    ::TYPES[99] = ::g::Fuse::Time_typeof();
    ::TYPES[55] = ::g::Uno::Float_typeof();
    ::TYPES[79] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[100] = Node__HitTestRecord_typeof();
    ::TYPES[101] = ::g::Fuse::PropertyState_typeof();
    ::TYPES[102] = ::g::Uno::Collections::HashSet_typeof()->MakeType(Node_typeof());
    ::TYPES[103] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[104] = ::g::Uno::Float3_typeof();
    ::TYPES[75] = ::g::Uno::Geometry::Ray_typeof();
    ::TYPES[105] = ::g::Fuse::UpdateManager_typeof();
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[106] = ::g::Fuse::BeginRemoveHandler_typeof();
    ::TYPES[107] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    ::TYPES[108] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[109] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[110] = ::g::Fuse::Transform_typeof();
    ::TYPES[111] = ::g::Uno::UX::Resource_typeof();
    ::TYPES[112] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[36] = ::g::Fuse::IViewport_typeof();
    ::TYPES[113] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    ::TYPES[114] = ::g::Uno::UInt_typeof();
    ::TYPES[115] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[116] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[117] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[118] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[119] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[120] = ::g::Fuse::NodeBounds_typeof();
    ::TYPES[121] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[122] = ::g::Fuse::Layer_typeof();
    ::TYPES[123] = ::g::Fuse::LayoutRole_typeof();
    ::TYPES[124] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[125] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[126] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Style_typeof());
    ::TYPES[127] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Style_typeof());
    ::TYPES[128] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetFields(0,
        ::g::Fuse::SizeFlags_typeof(), offsetof(::g::Fuse::Node, _ambAvailSet), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Node, _ambMargin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Node, _ambPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Node, _ambSize), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b0), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b1), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b2), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b3), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b4), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b5), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b6), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), offsetof(::g::Fuse::Node, _behaviors), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Node, _cachedRenderTargetSize), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Node, _drawCost), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _hasListenerAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _hasMarginBox), 0,
        ::g::Fuse::NodeBounds_typeof(), offsetof(::g::Fuse::Node, _hitTestBoundsCache), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _ignoreStyle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isAddedUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isEnabledCache), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isFlat), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isFlatCached), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isHitTestBoundsCacheValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isLocalFlat), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isLocalFlatCached), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isVisibleCached), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _lastInvalidate), 0,
        ::g::Fuse::InvalidateLayoutReason_typeof(), offsetof(::g::Fuse::Node, _layoutDirty), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Node, _localTransform), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Node, _localTransformInverse), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _nodebits), 0,
        Node_typeof(), offsetof(::g::Fuse::Node, _parent), 0,
        ::g::Fuse::BeginRemoveArgs_typeof(), offsetof(::g::Fuse::Node, _pendingRemove), 0,
        ::g::Fuse::Properties_typeof(), offsetof(::g::Fuse::Node, _properties), 0,
        Node__RootStage_typeof(), offsetof(::g::Fuse::Node, _rootStage), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Node, _transforms), 0,
        ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(::g::Uno::EventHandler_typeof()), offsetof(::g::Fuse::Node, _updateListeners), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _visualDirty), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Node, _worldTransform), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _worldTransformCacheVersion), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Node, _worldTransformInverse), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _worldTransformInverseCacheVersion), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _worldTransformParentCacheVersion), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _worldTransformVersion), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, ZLayer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, ZOffset), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, ZOffsetFixed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _AddedByStyle), 0,
        ::g::Fuse::BeginRemoveHandler_typeof(), offsetof(::g::Fuse::Node, BeginRemove1), 0,
        ::g::Fuse::RequestBringIntoViewHandler_typeof(), offsetof(::g::Fuse::Node, RequestBringIntoView1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Node, TransformsChanged1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_addedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_isEnabledChangedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_isVisibleChangedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_layerProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_layoutRoleProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_nameHandle_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Node::_performingLayout_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_removedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_resourcesHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_rootedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_styleHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_unrootedHandle_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Node::IsEnabledProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Node::NameProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Node::SnapToPixelsProperty_, uFieldFlagsStatic);
    return type;
}

// protected generated Node() :2099
void Node__ctor__fn(Node* __this)
{
    __this->ctor_();
}

// protected virtual float2 get_AbsoluteViewportOrigin() :3153
void Node__get_AbsoluteViewportOrigin_fn(Node* __this, ::g::Uno::Float2* __retval)
{
    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->AbsoluteViewportOrigin(), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_AbsoluteZoom() :2992
void Node__get_AbsoluteZoom_fn(Node* __this, float* __retval)
{
    *__retval = __this->AbsoluteZoom();
}

// public void AddDrawCost(double cost) :3934
void Node__AddDrawCost_fn(Node* __this, double* cost)
{
    __this->AddDrawCost(*cost);
}

// internal generated bool get_AddedByStyle() :3956
void Node__get_AddedByStyle_fn(Node* __this, bool* __retval)
{
    *__retval = __this->AddedByStyle();
}

// internal generated void set_AddedByStyle(bool value) :3956
void Node__set_AddedByStyle_fn(Node* __this, bool* value)
{
    __this->AddedByStyle(*value);
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne, object handler) :2349
void Node__AddEventHandler_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->AddEventHandler(ph, *ne, handler);
}

// public void AddStyleBehavior(Fuse.Behavior b) :2113
void Node__AddStyleBehavior_fn(Node* __this, ::g::Fuse::Behavior* b)
{
    __this->AddStyleBehavior(b);
}

// public void AddStyleStyle(Fuse.Style style) :3353
void Node__AddStyleStyle_fn(Node* __this, ::g::Fuse::Style* style)
{
    __this->AddStyleStyle(style);
}

// internal void AdjustMarginBoxPosition(float2 position) :3142
void Node__AdjustMarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* position)
{
    __this->AdjustMarginBoxPosition(*position);
}

// protected bool ApplyLocalStyles(object target) :3470
void Node__ApplyLocalStyles_fn(Node* __this, uObject* target, bool* __retval)
{
    *__retval = __this->ApplyLocalStyles(target);
}

// private void ApplyStyle() :3447
void Node__ApplyStyle_fn(Node* __this)
{
    __this->ApplyStyle();
}

// public void ApplyStyle(object target) :3459
void Node__ApplyStyle1_fn(Node* __this, uObject* target)
{
    __this->ApplyStyle1(target);
}

// public float2 ArrangeMarginBox(float2 position, float2 availableSize, Fuse.SizeFlags availSet) :3100
void Node__ArrangeMarginBox_fn(Node* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ArrangeMarginBox(*position, *availableSize, *availSet);
}

// public generated void add_BeginRemove(Fuse.BeginRemoveHandler value) :3954
void Node__add_BeginRemove_fn(Node* __this, uDelegate* value)
{
    __this->add_BeginRemove(value);
}

// public generated void remove_BeginRemove(Fuse.BeginRemoveHandler value) :3954
void Node__remove_BeginRemove_fn(Node* __this, uDelegate* value)
{
    __this->remove_BeginRemove(value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() :2106
void Node__get_Behaviors_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Behaviors();
}

// public void BringIntoView() :3173
void Node__BringIntoView_fn(Node* __this)
{
    __this->BringIntoView();
}

// internal Uno.Rect CalcRenderBoundsInParentSpace() :3816
void Node__CalcRenderBoundsInParentSpace_fn(Node* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcRenderBoundsInParentSpace();
}

// private Fuse.FastMatrix CalcWorldTransform() :3701
void Node__CalcWorldTransform_fn(Node* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->CalcWorldTransform();
}

// internal virtual bool get_CanAdjustMarginBox() :3147
void Node__get_CanAdjustMarginBox_fn(Node* __this, bool* __retval)
{
    return *__retval = false, void();
}

// private void CheckUpdateListening([bool forceOff]) :4069
void Node__CheckUpdateListening_fn(Node* __this, bool* forceOff)
{
    __this->CheckUpdateListening(*forceOff);
}

// private void ClearBit(Fuse.Node.NodeBits nb) :2336
void Node__ClearBit_fn(Node* __this, int* nb)
{
    __this->ClearBit(*nb);
}

// private void DoUpdate() :4054
void Node__DoUpdate_fn(Node* __this)
{
    __this->DoUpdate();
}

// public virtual void Draw(Fuse.DrawContext dc) :2283
void Node__Draw_fn(Node* __this, ::g::Fuse::DrawContext* dc)
{
}

// public double get_DrawCost() :3932
void Node__get_DrawCost_fn(Node* __this, double* __retval)
{
    *__retval = __this->DrawCost();
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) :2285
void Node__DrawLocalRect_fn(Node* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, float* lineWidth, ::g::Uno::Float4* color, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->DrawLocalRect(dc, *rect, *lineWidth, *color, *localToClipTransform);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) :2290
void Node__DrawLocalSelectionRect_fn(Node* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect)
{
    __this->DrawLocalSelectionRect(dc, *rect);
}

// public virtual void DrawSelection(Fuse.DrawContext dc) :2300
void Node__DrawSelection_fn(Node* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawLocalSelectionRect(dc, __this->LocalRenderBounds());
}

// public T FindByType<T>() :4001
void Node__FindByType_fn(Node* __this, uType* __type, Node** __retval)
{
    *__retval = __this->FindByType(__type);
}

// public Fuse.Node GetHitWindowPoint(float2 windowPoint) :2498
void Node__GetHitWindowPoint_fn(Node* __this, ::g::Uno::Float2* windowPoint, Node** __retval)
{
    *__retval = __this->GetHitWindowPoint(*windowPoint);
}

// public virtual float2 GetMarginSize(float2 fillSize, Fuse.SizeFlags fillSet) :2867
void Node__GetMarginSize_fn(Node* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public T GetNearestAncestorOfType<T>() :4007
void Node__GetNearestAncestorOfType_fn(Node* __this, uType* __type, Node** __retval)
{
    *__retval = __this->GetNearestAncestorOfType(__type);
}

// internal Fuse.PropertyState GetPropertyState(int id) :3203
void Node__GetPropertyState_fn(Node* __this, int* id, int* __retval)
{
    *__retval = __this->GetPropertyState(*id);
}

// public virtual Fuse.Node GetSubNode(int index) :4242
void Node__GetSubNode_fn(Node* __this, int* index, Node** __retval)
{
    U_THROW(::g::Uno::Exception::New1());
}

// public float4x4 GetTransformTo(Fuse.Node other) :3713
void Node__GetTransformTo_fn(Node* __this, Node* other, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformTo(other);
}

// private float4x4 GetTransformToAncestor(Fuse.Node ancestor) :3742
void Node__GetTransformToAncestor_fn(Node* __this, Node* ancestor, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformToAncestor(ancestor);
}

// private bool HasBit(Fuse.Node.NodeBits nb) :2334
void Node__HasBit_fn(Node* __this, int* nb, bool* __retval)
{
    *__retval = __this->HasBit(*nb);
}

// private bool get_HasExplicitTransforms() :3539
void Node__get_HasExplicitTransforms_fn(Node* __this, bool* __retval)
{
    *__retval = __this->HasExplicitTransforms();
}

// private bool get_HasResources() :3311
void Node__get_HasResources_fn(Node* __this, bool* __retval)
{
    *__retval = __this->HasResources();
}

// public void HitTest(Fuse.HitTestContext htc) :2461
void Node__HitTest_fn(Node* __this, ::g::Fuse::HitTestContext* htc)
{
    __this->HitTest(htc);
}

// public virtual Fuse.NodeBounds get_HitTestBounds() :2533
void Node__get_HitTestBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval)
{
    if (__this->_isHitTestBoundsCacheValid)
        return *__retval = __this->_hitTestBoundsCache, void();

    ::g::Fuse::NodeBounds* nb = ::g::Fuse::NodeBounds::Empty();

    if (__this->IsEnabled() && __this->IsVisible())
    {
        nb = uPtr(nb)->Merge(__this->HitTestLocalBounds(), NULL);
        nb = uPtr(nb)->Merge(__this->HitTestChildrenBounds(), NULL);
    }

    __this->_hitTestBoundsCache = nb;
    __this->_isHitTestBoundsCacheValid = true;
    return *__retval = nb, void();
}

// protected virtual Fuse.NodeBounds get_HitTestChildrenBounds() :2562
void Node__get_HitTestChildrenBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval)
{
    ::g::Fuse::NodeBounds* nb = ::g::Fuse::NodeBounds::Empty();

    for (int i = 0; i < __this->SubNodeCount(); ++i)
    {
        Node* n = __this->GetSubNode(i);
        nb = uPtr(nb)->MergeChild(n, uPtr(n)->HitTestBounds());
    }

    return *__retval = nb, void();
}

// protected virtual Fuse.NodeBounds get_HitTestLocalBounds() :2554
void Node__get_HitTestLocalBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Empty(), void();
}

// public bool get_IgnoreStyle() :3436
void Node__get_IgnoreStyle_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IgnoreStyle();
}

// public void set_IgnoreStyle(bool value) :3437
void Node__set_IgnoreStyle_fn(Node* __this, bool* value)
{
    __this->IgnoreStyle(*value);
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() :3672
void Node__get_InternLocalTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->InternLocalTransformInternal();
}

// internal float2 InternSnap(float2 p) :2972
void Node__InternSnap_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnap(*p);
}

// internal float2 InternSnapUp(float2 p) :2981
void Node__InternSnapUp_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnapUp(*p);
}

// private void InvalidateFlat() :2640
void Node__InvalidateFlat_fn(Node* __this)
{
    __this->InvalidateFlat();
}

// protected void InvalidateHitTestBounds() :2518
void Node__InvalidateHitTestBounds_fn(Node* __this)
{
    __this->InvalidateHitTestBounds();
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) :2885
void Node__InvalidateLayout_fn(Node* __this, int* reason)
{
    __this->InvalidateLayout(*reason);
}

// protected static void InvalidateLayout(Fuse.Node elm) :3017
void Node__InvalidateLayout1_fn(Node* elm)
{
    Node::InvalidateLayout1(elm);
}

// protected virtual void InvalidateLocalTransform() :3571
void Node__InvalidateLocalTransform_fn(Node* __this)
{
    __this->_localTransform = NULL;
    __this->_localTransformInverse = NULL;
    __this->_worldTransformVersion++;
    __this->InvalidateFlat();
    __this->InvalidateHitTestBounds();
}

// public void InvalidateRenderBounds() :3798
void Node__InvalidateRenderBounds_fn(Node* __this)
{
    __this->InvalidateRenderBounds();
}

// public virtual void InvalidateVisual() :3850
void Node__InvalidateVisual_fn(Node* __this)
{
    __this->_lastInvalidate = ::g::Fuse::UpdateManager::FrameIndex();
    __this->_visualDirty = true;

    if (__this->Parent() != NULL)
        uPtr(__this->Parent())->InvalidateVisual();
}

// private void InvokeEventHandler(object obj, object args) :2343
void Node__InvokeEventHandler_fn(Node* __this, uObject* obj, uObject* args)
{
    __this->InvokeEventHandler(obj, args);
}

// public bool get_IsEnabled() :2602
void Node__get_IsEnabled_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :2603
void Node__set_IsEnabled_fn(Node* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public void add_IsEnabledChanged(Uno.EventHandler value) :2591
void Node__add_IsEnabledChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_IsEnabledChanged(value);
}

// public void remove_IsEnabledChanged(Uno.EventHandler value) :2592
void Node__remove_IsEnabledChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_IsEnabledChanged(value);
}

// internal bool get_IsFlat() :2675
void Node__get_IsFlat_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsFlat();
}

// internal bool get_IsLocalFlat() :2656
void Node__get_IsLocalFlat_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsLocalFlat();
}

// public bool get_IsLocalRooted() :4122
void Node__get_IsLocalRooted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsLocalRooted();
}

// public virtual bool get_IsLocalVisible() :2720
void Node__get_IsLocalVisible_fn(Node* __this, bool* __retval)
{
    return *__retval = true, void();
}

// protected virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :2966
void Node__IsMarginBoxDependent_fn(Node* __this, Node* child, int* __retval)
{
    return *__retval = 2, void();
}

// public bool get_IsRooted() :4103
void Node__get_IsRooted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// private bool IsRootStage(Fuse.Node.RootStage stage) :4136
void Node__IsRootStage_fn(Node* __this, int* stage, bool* __retval)
{
    *__retval = __this->IsRootStage(*stage);
}

// public bool get_IsVisible() :2718
void Node__get_IsVisible_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void add_IsVisibleChanged(Uno.EventHandler value) :2713
void Node__add_IsVisibleChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_IsVisibleChanged(value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) :2714
void Node__remove_IsVisibleChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_IsVisibleChanged(value);
}

// internal bool IsWorldMatrixValid() :3625
void Node__IsWorldMatrixValid_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsWorldMatrixValid();
}

// public Fuse.Layer get_Layer() :2829
void Node__get_Layer_fn(Node* __this, int* __retval)
{
    *__retval = __this->Layer();
}

// public void set_Layer(Fuse.Layer value) :2836
void Node__set_Layer_fn(Node* __this, int* value)
{
    __this->Layer(*value);
}

// public Fuse.LayoutRole get_LayoutRole() :2848
void Node__get_LayoutRole_fn(Node* __this, int* __retval)
{
    *__retval = __this->LayoutRole();
}

// public void set_LayoutRole(Fuse.LayoutRole value) :2860
void Node__set_LayoutRole_fn(Node* __this, int* value)
{
    __this->LayoutRole(*value);
}

// public virtual Uno.Rect get_LocalRenderBounds() :3792
void Node__get_LocalRenderBounds_fn(Node* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(-FLT_INF), ::g::Uno::Float2__New1(FLT_INF)), void();
}

// public float4x4 get_LocalTransform() :3666
void Node__get_LocalTransform_fn(Node* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransform();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() :3676
void Node__get_LocalTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->LocalTransformInternal();
}

// protected float4x4 get_LocalTransformInverse() :3690
void Node__get_LocalTransformInverse_fn(Node* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransformInverse();
}

// internal float2 get_MarginBoxPosition() :3140
void Node__get_MarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MarginBoxPosition();
}

// internal void MarkRooted() :4142
void Node__MarkRooted_fn(Node* __this)
{
    __this->MarkRooted();
}

// internal void MarkUnrooted() :4193
void Node__MarkUnrooted_fn(Node* __this)
{
    __this->MarkUnrooted();
}

// public string get_Name() :2382
void Node__get_Name_fn(Node* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public void set_Name(string value) :2383
void Node__set_Name_fn(Node* __this, uString* value)
{
    __this->Name(value);
}

// public void OnAdded(Fuse.Node parent) :4018
void Node__OnAdded_fn(Node* __this, Node* parent)
{
    __this->OnAdded(parent);
}

// internal virtual void OnAdjustMarginBoxPosition(float2 position) :3148
void Node__OnAdjustMarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* position)
{
}

// protected virtual void OnApplyStyle(object target) :3464
void Node__OnApplyStyle_fn(Node* __this, uObject* target)
{
    if (!__this->ApplyLocalStyles(target))
        return;

    if (__this->Parent() != NULL)
        uPtr(__this->Parent())->ApplyStyle1(target);
}

// protected virtual float2 OnArrangeMarginBox(float2 position, float2 availableSizxe, Fuse.SizeFlags availSet) :3094
void Node__OnArrangeMarginBox_fn(Node* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSizxe, int* availSet, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// protected void OnBeginRemove(Fuse.BeginRemoveArgs args) :3958
void Node__OnBeginRemove_fn(Node* __this, ::g::Fuse::BeginRemoveArgs* args)
{
    __this->OnBeginRemove(args);
}

// internal virtual void OnBehaviorAdded(Fuse.Behavior b) :2119
void Node__OnBehaviorAdded_fn(Node* __this, ::g::Fuse::Behavior* b)
{
    if (__this->IsRootStage(3))
        uPtr(b)->Rooted(__this);
}

// internal virtual void OnBehaviorRemoved(Fuse.Behavior b) :2127
void Node__OnBehaviorRemoved_fn(Node* __this, ::g::Fuse::Behavior* b)
{
    if (uPtr(b)->IsRooted())
    {
        uPtr(b)->Unrooted(__this);
        b->AddedByStyle = false;
    }
}

// protected void OnBringIntoView(Fuse.Node elm) :3164
void Node__OnBringIntoView_fn(Node* __this, Node* elm)
{
    __this->OnBringIntoView(elm);
}

// protected virtual void OnHitTest(Fuse.HitTestContext htc) :2496
void Node__OnHitTest_fn(Node* __this, ::g::Fuse::HitTestContext* htc)
{
}

// protected virtual void OnInvalidateLayout() :2872
void Node__OnInvalidateLayout_fn(Node* __this)
{
    __this->InvalidateHitTestBounds();
}

// protected virtual bool OnInvalidateRenderBounds() :3810
void Node__OnInvalidateRenderBounds_fn(Node* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected virtual void OnIsEnabledChanged() :2625
void Node__OnIsEnabledChanged_fn(Node* __this)
{
    __this->RaiseEvent(Node::_isEnabledChangedHandle(), 4);
    __this->InvalidateHitTestBounds();
}

// private static void OnIsEnabledChangedInternal(Fuse.Node n) :2606
void Node__OnIsEnabledChangedInternal_fn(Node* n)
{
    Node::OnIsEnabledChangedInternal(n);
}

// protected void OnIsVisibleChanged() :2742
void Node__OnIsVisibleChanged_fn(Node* __this)
{
    __this->OnIsVisibleChanged();
}

// protected void OnLocalVisibleChanged() :2723
void Node__OnLocalVisibleChanged_fn(Node* __this)
{
    __this->OnLocalVisibleChanged();
}

// private void OnMatrixChanged(Fuse.Transform t) :3557
void Node__OnMatrixChanged_fn(Node* __this, ::g::Fuse::Transform* t)
{
    __this->OnMatrixChanged(t);
}

// private static void OnNameChanged(Fuse.Node n) :2386
void Node__OnNameChanged_fn(Node* n)
{
    Node::OnNameChanged(n);
}

// public void OnRemoved(Fuse.Node parent) :4043
void Node__OnRemoved_fn(Node* __this, Node* parent)
{
    __this->OnRemoved(parent);
}

// protected virtual void OnResetStyle() :3414
void Node__OnResetStyle_fn(Node* __this)
{
    ::g::Fuse::Behavior* ret16;
    ::g::Fuse::Transform* ret17;

    if (__this->_behaviors != NULL)

        for (int i = 0; i < uPtr(__this->_behaviors)->Count(); i++)
            if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_behaviors), uCRef<int>(i), &ret16), ret16))->AddedByStyle)
                uPtr(__this->_behaviors)->RemoveAt(i--);

    if (__this->_transforms != NULL)

        for (int i1 = 0; i1 < uPtr(__this->_transforms)->Count(); i1++)
            if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_transforms), uCRef<int>(i1), &ret17), ret17))->AddedByStyle)
                uPtr(__this->_transforms)->RemoveAt(i1--);

    ::g::Fuse::StyleProperty::ResetAllStyle(__this);
}

// private void OnResourceChanged(Uno.UX.Resource res) :3314
void Node__OnResourceChanged_fn(Node* __this, ::g::Uno::UX::Resource* res)
{
    __this->OnResourceChanged(res);
}

// protected virtual void OnRooted() :4189
void Node__OnRooted_fn(Node* __this)
{
}

// private void OnTransformAdded(Fuse.Transform t) :3542
void Node__OnTransformAdded_fn(Node* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformAdded(t);
}

// private void OnTransformRemoved(Fuse.Transform t) :3549
void Node__OnTransformRemoved_fn(Node* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformRemoved(t);
}

// private void OnTransformsChanged() :3565
void Node__OnTransformsChanged_fn(Node* __this)
{
    __this->OnTransformsChanged();
}

// protected virtual void OnUnrooted() :4233
void Node__OnUnrooted_fn(Node* __this)
{
}

// protected void OnWorldTransformValidated() :3658
void Node__OnWorldTransformValidated_fn(Node* __this)
{
    __this->OnWorldTransformValidated();
}

// public Fuse.Node get_Parent() :3980
void Node__get_Parent_fn(Node* __this, Node** __retval)
{
    *__retval = __this->Parent();
}

// public float2 ParentToLocal(float2 parentPoint) :4247
void Node__ParentToLocal_fn(Node* __this, ::g::Uno::Float2* parentPoint, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ParentToLocal(*parentPoint);
}

// protected void PerformLayout() :3019
void Node__PerformLayout_fn(Node* __this)
{
    __this->PerformLayout();
}

// protected void PerformLayout(float2 clientSize) :3027
void Node__PerformLayout1_fn(Node* __this, ::g::Uno::Float2* clientSize)
{
    __this->PerformLayout1(*clientSize);
}

// public float get_PointDensity() :2998
void Node__get_PointDensity_fn(Node* __this, float* __retval)
{
    *__retval = __this->PointDensity();
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) :3761
void Node__PrependExplicitTransforms_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependExplicitTransforms(m);
}

// protected virtual void PrependImplicitTransform(Fuse.FastMatrix m) :3515
void Node__PrependImplicitTransform_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
}

// protected virtual void PrependInverseTransformOrigin(Fuse.FastMatrix m) :3517
void Node__PrependInverseTransformOrigin_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
}

// private void PrependLocalTransform(Fuse.FastMatrix m) :3755
void Node__PrependLocalTransform_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependLocalTransform(m);
}

// protected virtual void PrependTransformOrigin(Fuse.FastMatrix m) :3516
void Node__PrependTransformOrigin_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
}

// public Fuse.Properties get_Properties() :3969
void Node__get_Properties_fn(Node* __this, ::g::Fuse::Properties** __retval)
{
    *__retval = __this->Properties();
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne) :2338
void Node__RaiseEvent_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne)
{
    __this->RaiseEvent(ph, *ne);
}

// private void ReapplyStyle() :3387
void Node__ReapplyStyle_fn(Node* __this)
{
    __this->ReapplyStyle();
}

// private void ReapplySubtreeStyle() :3377
void Node__ReapplySubtreeStyle_fn(Node* __this)
{
    __this->ReapplySubtreeStyle();
}

// private void RearrangeMarginBox() :3089
void Node__RearrangeMarginBox_fn(Node* __this)
{
    __this->RearrangeMarginBox();
}

// public void RemoveDrawCost(double cost) :3944
void Node__RemoveDrawCost_fn(Node* __this, double* cost)
{
    __this->RemoveDrawCost(*cost);
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne, object handler) :2355
void Node__RemoveEventHandler_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->RemoveEventHandler(ph, *ne, handler);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :3162
void Node__add_RequestBringIntoView_fn(Node* __this, uDelegate* value)
{
    __this->add_RequestBringIntoView(value);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :3162
void Node__remove_RequestBringIntoView_fn(Node* __this, uDelegate* value)
{
    __this->remove_RequestBringIntoView(value);
}

// internal void ResetStyle() :3394
void Node__ResetStyle_fn(Node* __this)
{
    __this->ResetStyle();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :3250
void Node__get_Resources_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// private void RootBehaviors() :2136
void Node__RootBehaviors_fn(Node* __this)
{
    __this->RootBehaviors();
}

// public void add_Rooted(Uno.EventHandler value) :4108
void Node__add_Rooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Rooted(value);
}

// public void remove_Rooted(Uno.EventHandler value) :4109
void Node__remove_Rooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Rooted(value);
}

// private void SetBit(Fuse.Node.NodeBits nb) :2335
void Node__SetBit_fn(Node* __this, int* nb)
{
    __this->SetBit(*nb);
}

// internal void SetPropertyState(int id, Fuse.PropertyState state) :3218
void Node__SetPropertyState_fn(Node* __this, int* id, int* state)
{
    __this->SetPropertyState(*id, *state);
}

// public void SetResource(string key, object value) :3261
void Node__SetResource_fn(Node* __this, uString* key, uObject* value)
{
    __this->SetResource(key, value);
}

// protected float2 Snap(float2 p) :2973
void Node__Snap_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap(*p);
}

// public bool get_SnapToPixels() :3013
void Node__get_SnapToPixels_fn(Node* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// public void set_SnapToPixels(bool value) :3014
void Node__set_SnapToPixels_fn(Node* __this, bool* value)
{
    __this->SnapToPixels(*value);
}

// protected float2 SnapUp(float2 p) :2982
void Node__SnapUp_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// protected virtual void SoftDispose() :4235
void Node__SoftDispose_fn(Node* __this)
{
}

// private void StyleAdded(Fuse.Style s) :3359
void Node__StyleAdded_fn(Node* __this, ::g::Fuse::Style* s)
{
    __this->StyleAdded(s);
}

// private void StyleRemoved(Fuse.Style s) :3366
void Node__StyleRemoved_fn(Node* __this, ::g::Fuse::Style* s)
{
    __this->StyleRemoved(s);
}

// public Uno.Collections.IList<Fuse.Style> get_Styles() :3340
void Node__get_Styles_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Styles();
}

// public virtual int get_SubNodeCount() :4239
void Node__get_SubNodeCount_fn(Node* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public Uno.Collections.IList<Fuse.Transform> get_Transforms() :3524
void Node__get_Transforms_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Transforms();
}

// public generated void add_TransformsChanged(Uno.EventHandler value) :3563
void Node__add_TransformsChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_TransformsChanged(value);
}

// public generated void remove_TransformsChanged(Uno.EventHandler value) :3563
void Node__remove_TransformsChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_TransformsChanged(value);
}

// public bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :3278
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    *__retval = __this->TryGetResource(key, acceptor, resource);
}

// private void UnrootBehaviors() :2148
void Node__UnrootBehaviors_fn(Node* __this)
{
    __this->UnrootBehaviors();
}

// public void add_Unrooted(Uno.EventHandler value) :4115
void Node__add_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// public void remove_Unrooted(Uno.EventHandler value) :4116
void Node__remove_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

// public void add_Update(Uno.EventHandler value) :4089
void Node__add_Update_fn(Node* __this, uDelegate* value)
{
    __this->add_Update(value);
}

// public void remove_Update(Uno.EventHandler value) :4096
void Node__remove_Update_fn(Node* __this, uDelegate* value)
{
    __this->remove_Update(value);
}

// private void UpdateIsEnabledCache() :2611
void Node__UpdateIsEnabledCache_fn(Node* __this)
{
    __this->UpdateIsEnabledCache();
}

// private void UpdateIsVisibleCache() :2728
void Node__UpdateIsVisibleCache_fn(Node* __this)
{
    __this->UpdateIsVisibleCache();
}

// private void UpdateLayout() :3061
void Node__UpdateLayout_fn(Node* __this)
{
    __this->UpdateLayout();
}

// protected void ValidateVisual() :3862
void Node__ValidateVisual_fn(Node* __this)
{
    __this->ValidateVisual();
}

// public int get_ValidFrameCount() :3859
void Node__get_ValidFrameCount_fn(Node* __this, int* __retval)
{
    *__retval = __this->ValidFrameCount();
}

// public Fuse.IViewport get_Viewport() :4260
void Node__get_Viewport_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public void VisitSubtree(Uno.Action<Fuse.Node> action) :3918
void Node__VisitSubtree_fn(Node* __this, uDelegate* action)
{
    __this->VisitSubtree(action);
}

// public float2 WindowToLocal(float2 windowCoord) :3774
void Node__WindowToLocal_fn(Node* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowToLocal(*windowCoord);
}

// public float4x4 get_WorldTransform() :3607
void Node__get_WorldTransform_fn(Node* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransform();
}

// private Fuse.FastMatrix get_WorldTransformInternal() :3641
void Node__get_WorldTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->WorldTransformInternal();
}

// public float4x4 get_WorldTransformInverse() :3591
void Node__get_WorldTransformInverse_fn(Node* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransformInverse();
}

uSStrong< ::g::Fuse::PropertyHandle*> Node::_addedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_isEnabledChangedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_isVisibleChangedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_layerProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_layoutRoleProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_nameHandle_;
bool Node::_performingLayout_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_removedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_resourcesHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_rootedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_styleHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_unrootedHandle_;
uSStrong< ::g::Fuse::StyleProperty1*> Node::IsEnabledProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Node::NameProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Node::SnapToPixelsProperty_;

// protected generated Node() [instance] :2099
void Node::ctor_()
{
    _isEnabledCache = true;
    _isVisibleCached = true;
    _worldTransformInverseCacheVersion = -1;
    _worldTransformCacheVersion = -1;
    _worldTransformParentCacheVersion = -1;
}

// public float get_AbsoluteZoom() [instance] :2992
float Node::AbsoluteZoom()
{
    return PointDensity();
}

// public void AddDrawCost(double cost) [instance] :3934
void Node::AddDrawCost(double cost)
{
    Node* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost + cost);
        p = uPtr(p)->Parent();
    }
}

// internal generated bool get_AddedByStyle() [instance] :3956
bool Node::AddedByStyle()
{
    return _AddedByStyle;
}

// internal generated void set_AddedByStyle(bool value) [instance] :3956
void Node::AddedByStyle(bool value)
{
    _AddedByStyle = value;
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne, object handler) [instance] :2349
void Node::AddEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uPtr(Properties())->AddToList(ph, handler);
    SetBit(ne);
}

// public void AddStyleBehavior(Fuse.Behavior b) [instance] :2113
void Node::AddStyleBehavior(::g::Fuse::Behavior* b)
{
    uPtr(b)->AddedByStyle = true;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[92/*Fuse.Behavior*/])), b);
}

// public void AddStyleStyle(Fuse.Style style) [instance] :3353
void Node::AddStyleStyle(::g::Fuse::Style* style)
{
    uPtr(style)->AddedByStyle = true;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/]), style);
}

// internal void AdjustMarginBoxPosition(float2 position) [instance] :3142
void Node::AdjustMarginBoxPosition(::g::Uno::Float2 position)
{
    ArrangeMarginBox(position, _ambSize, _ambAvailSet);
}

// protected bool ApplyLocalStyles(object target) [instance] :3470
bool Node::ApplyLocalStyles(uObject* target)
{
    ::g::Fuse::Style* ret9;

    if (HasBit(3) && (target != this))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/])); i++)
            if (!uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Styles()), ::TYPES[94/*Uno.Collections.IList<Fuse.Style>*/]), uCRef<int>(i), &ret9), ret9))->Apply(target))
                return false;

    return true;
}

// private void ApplyStyle() [instance] :3447
void Node::ApplyStyle()
{
    if (!IsRootStage(2))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[46/*"Should not ...*/]));

    if (!HasBit(0))
    {
        SetBit(0);

        if (!IgnoreStyle())
            ApplyStyle1(this);
    }
}

// public void ApplyStyle(object target) [instance] :3459
void Node::ApplyStyle1(uObject* target)
{
    OnApplyStyle(target);
}

// public float2 ArrangeMarginBox(float2 position, float2 availableSize, Fuse.SizeFlags availSet) [instance] :3100
::g::Uno::Float2 Node::ArrangeMarginBox(::g::Uno::Float2 position, ::g::Uno::Float2 availableSize, int availSet)
{
    if (!((availSet & 1) == 1))
        availableSize.X = 0.0f;

    if (!((availSet & 2) == 2))
        availableSize.Y = 0.0f;

    int cacheFillSet = availSet & 3;
    bool same = ((_hasMarginBox && (_layoutDirty == 0)) && (::g::Uno::Vector::Distance(availableSize, _ambSize) < 1e-05f)) && (cacheFillSet == _ambAvailSet);
    ::g::Uno::Float2 marginBox;

    if (same && (::g::Uno::Vector::Distance(position, _ambPosition) < 1e-05f))
        return _ambMargin;
    else if (same && CanAdjustMarginBox())
    {
        marginBox = _ambMargin;
        OnAdjustMarginBoxPosition(position);
    }
    else
        marginBox = OnArrangeMarginBox(position, availableSize, availSet);

    _layoutDirty = 0;
    _ambMargin = marginBox;
    _ambPosition = position;
    _ambSize = availableSize;
    _ambAvailSet = cacheFillSet;
    _hasMarginBox = true;
    return marginBox;
}

// public generated void add_BeginRemove(Fuse.BeginRemoveHandler value) [instance] :3954
void Node::add_BeginRemove(uDelegate* value)
{
    BeginRemove1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginRemove1, value), ::TYPES[106/*Fuse.BeginRemoveHandler*/]);
}

// public generated void remove_BeginRemove(Fuse.BeginRemoveHandler value) [instance] :3954
void Node::remove_BeginRemove(uDelegate* value)
{
    BeginRemove1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginRemove1, value), ::TYPES[106/*Fuse.BeginRemoveHandler*/]);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() [instance] :2106
uObject* Node::Behaviors()
{
    if (_behaviors == NULL)
        _behaviors = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[108/*Uno.Collections.ObservableList<Fuse.Behavior>*/], uDelegate::New(::TYPES[118/*Uno.Action<Fuse.Behavior>*/], this, offsetof(Node_type, fp_OnBehaviorAdded)), uDelegate::New(::TYPES[118/*Uno.Action<Fuse.Behavior>*/], this, offsetof(Node_type, fp_OnBehaviorRemoved))));

    return (uObject*)_behaviors;
}

// public void BringIntoView() [instance] :3173
void Node::BringIntoView()
{
    OnBringIntoView(this);
}

// internal Uno.Rect CalcRenderBoundsInParentSpace() [instance] :3816
::g::Uno::Rect Node::CalcRenderBoundsInParentSpace()
{
    ::g::Uno::Float4 ind4;
    ::g::Uno::Rect childRect = LocalRenderBounds();
    ::g::Fuse::FastMatrix* fastMatrix = LocalTransformInternal();
    ::g::Uno::Rect childRectInParentSpace;

    if (uPtr(fastMatrix)->_hasNonTranslation)
        childRectInParentSpace = ::g::Uno::Rect__Transform(childRect, LocalTransform());
    else
        childRectInParentSpace = ::g::Uno::Rect__Translate(childRect, (ind4 = LocalTransform().Item(3), ::g::Uno::Float2__New2(ind4.X, ind4.Y)));

    return childRectInParentSpace;
}

// private Fuse.FastMatrix CalcWorldTransform() [instance] :3701
::g::Fuse::FastMatrix* Node::CalcWorldTransform()
{
    ::g::Fuse::FastMatrix* m = LocalTransformInternal();

    if (Parent() != NULL)
        m = uPtr(m)->Mul(uPtr(Parent())->WorldTransformInternal());

    return m;
}

// private void CheckUpdateListening([bool forceOff]) [instance] :4069
void Node::CheckUpdateListening(bool forceOff)
{
    bool shouldListen = (IsRooted() && (_updateListeners != NULL)) && (uPtr(_updateListeners)->Count() > 0);

    if (forceOff)
        shouldListen = false;

    if (_hasListenerAction == shouldListen)
        return;

    if (shouldListen)
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)Node__DoUpdate_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)Node__DoUpdate_fn, this), 0);

    _hasListenerAction = shouldListen;
}

// private void ClearBit(Fuse.Node.NodeBits nb) [instance] :2336
void Node::ClearBit(int nb)
{
    _nodebits = (_nodebits & ~(1 << nb));
}

// private void DoUpdate() [instance] :4054
void Node::DoUpdate()
{
    uDelegate* ret10;

    if (_updateListeners == NULL)
        return;

    uObject* lk = uPtr(_updateListeners)->DeferLock();

    try
    {
        int c = uPtr(_updateListeners)->Count();

        for (int i = 0; i < c; ++i)
            uPtr((::g::Uno::Collections::ConcurrentCollection__get_Item_fn(uPtr(_updateListeners), uCRef<int>(i), &ret10), ret10))->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lk), ::g::Uno::IDisposable_typeof()));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lk), ::g::Uno::IDisposable_typeof()));
}

// public double get_DrawCost() [instance] :3932
double Node::DrawCost()
{
    return _drawCost;
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) [instance] :2285
void Node::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, float lineWidth, ::g::Uno::Float4 color, ::g::Uno::Float4x4 localToClipTransform)
{
    uPtr(::g::Fuse::DrawHelpers::Singelton())->DrawLocalRect(dc, rect, localToClipTransform, lineWidth, color);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) [instance] :2290
void Node::DrawLocalSelectionRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect)
{
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(this);
    double phase = ::g::Fuse::Time::FrameTime() * 4.0;
    float pulse = (float)(0.667 + (0.333 * ::g::Uno::Math::Sin(phase * 3.1415926535897931)));
    ::g::Uno::Float4 color = ::g::Uno::Float4__New2(0.25f, 0.5f, 0.75f, pulse);
    DrawLocalRect(dc, rect, 4.0f, ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f), localToClipTransform);
    DrawLocalRect(dc, rect, 2.0f, color, localToClipTransform);
}

// public T FindByType<T>() [instance] :4001
Node* Node::FindByType(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
        Node_typeof()->MakeMethod(1, __type->U(0)),
    };

    if (uIs(this, __types[0]))
        return uAs<Node*>(this, __types[0]);

    return (Node*)GetNearestAncestorOfType(__types[1]);
}

// public Fuse.Node GetHitWindowPoint(float2 windowPoint) [instance] :2498
Node* Node::GetHitWindowPoint(::g::Uno::Float2 windowPoint)
{
    Node__HitTestRecord* htr = Node__HitTestRecord::New1();
    ::g::Fuse::HitTestContext* htc = ::g::Fuse::HitTestContext::New1(windowPoint, uDelegate::New(::TYPES[79/*Fuse.HitTestCallback*/], (void*)Node__HitTestRecord__HitTestCallback_fn, htr));

    if (Parent() != NULL)
        htc->PushLocalPoint(uPtr(Parent())->WindowToLocal(windowPoint));

    HitTest(htc);
    return htr->Node;
}

// public T GetNearestAncestorOfType<T>() [instance] :4007
Node* Node::GetNearestAncestorOfType(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    Node* current = Parent();

    while (current != NULL)
    {
        if (uIs(current, __types[0]))
            return uAs<Node*>(current, __types[0]);

        current = uPtr(current)->Parent();
    }

    return NULL;
}

// internal Fuse.PropertyState GetPropertyState(int id) [instance] :3203
int Node::GetPropertyState(int id)
{
    int bits = (id & 15) * 2;
    uint32_t mask = 3U;

    if (id < 16)
        return (int)((_b0 >> bits) & mask);
    else if (id < 32)
        return (int)((_b1 >> bits) & mask);
    else if (id < 48)
        return (int)((_b2 >> bits) & mask);
    else if (id < 64)
        return (int)((_b3 >> bits) & mask);
    else if (id < 80)
        return (int)((_b4 >> bits) & mask);
    else if (id < 96)
        return (int)((_b5 >> bits) & mask);
    else if (id < 112)
        return (int)((_b6 >> bits) & mask);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[47/*"Too many st...*/]));
}

// public float4x4 GetTransformTo(Fuse.Node other) [instance] :3713
::g::Uno::Float4x4 Node::GetTransformTo(Node* other)
{
    bool ret14;
    bool ret15;
    ::g::Uno::Collections::HashSet* parents = (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[102/*Uno.Collections.HashSet<Fuse.Node>*/]);
    Node* q = this;

    while (q != NULL)
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(parents), q, &ret14);
        q = uPtr(q)->Parent();
    }

    Node* c = other;

    while (c != NULL)
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(parents), c, &ret15), ret15))
            break;

        c = uPtr(c)->Parent();
    }

    if (c == NULL)
        return ::g::Uno::Float4x4__Identity();

    ::g::Uno::Float4x4 thisTo = GetTransformToAncestor(c);
    ::g::Uno::Float4x4 otherTo = uPtr(other)->GetTransformToAncestor(c);
    return ::g::Uno::Matrix::Mul8(thisTo, ::g::Uno::Matrix::Invert2(otherTo));
}

// private float4x4 GetTransformToAncestor(Fuse.Node ancestor) [instance] :3742
::g::Uno::Float4x4 Node::GetTransformToAncestor(Node* ancestor)
{
    ::g::Fuse::FastMatrix* m = ::g::Fuse::FastMatrix::Identity();
    Node* n = this;

    while ((n != NULL) && (n != ancestor))
    {
        m = uPtr(m)->Mul(uPtr(n)->LocalTransformInternal());
        n = uPtr(n)->Parent();
    }

    return uPtr(m)->Matrix();
}

// private bool HasBit(Fuse.Node.NodeBits nb) [instance] :2334
bool Node::HasBit(int nb)
{
    return (_nodebits & (1 << nb)) != 0;
}

// private bool get_HasExplicitTransforms() [instance] :3539
bool Node::HasExplicitTransforms()
{
    return (_transforms != NULL) && (uPtr(_transforms)->Count() > 0);
}

// private bool get_HasResources() [instance] :3311
bool Node::HasResources()
{
    return HasBit(1);
}

// public void HitTest(Fuse.HitTestContext htc) [instance] :2461
void Node::HitTest(::g::Fuse::HitTestContext* htc)
{
    if (!IsVisible())
        return;

    ::g::Fuse::NodeBounds* bounds = HitTestBounds();
    ::g::Uno::Float2 localPoint;
    bool hit;

    if (IsFlat() && IsLocalFlat())
    {
        localPoint = ParentToLocal(uPtr(htc)->LocalPoint());
        hit = uPtr(bounds)->ContainsPoint(localPoint);
    }
    else
    {
        ::g::Uno::Geometry::Ray world = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[36/*Fuse.IViewport*/]), uPtr(htc)->WindowPoint());
        ::g::Uno::Geometry::Ray local = ::g::Fuse::FrustumViewport::WorldToLocalRay(Viewport(), this, world);
        float t = -local.Position.Z / local.Direction.Z;
        ::g::Uno::Float3 plane = ::g::Uno::Float3__op_Addition2(local.Position, ::g::Uno::Float3__op_Multiply1(local.Direction, t));
        localPoint = ::g::Uno::Float2__New2(plane.X, plane.Y);
        hit = uPtr(bounds)->IntersectsRay(local);
    }

    if (true && !hit)
        return;

    ::g::Uno::Float2 old = uPtr(htc)->PushLocalPoint(localPoint);
    OnHitTest(htc);
    htc->PopLocalPoint(old);
}

// public bool get_IgnoreStyle() [instance] :3436
bool Node::IgnoreStyle()
{
    return _ignoreStyle;
}

// public void set_IgnoreStyle(bool value) [instance] :3437
void Node::IgnoreStyle(bool value)
{
    if (_ignoreStyle != value)
    {
        _ignoreStyle = value;
        ReapplyStyle();
    }
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() [instance] :3672
::g::Fuse::FastMatrix* Node::InternLocalTransformInternal()
{
    return LocalTransformInternal();
}

// internal float2 InternSnap(float2 p) [instance] :2972
::g::Uno::Float2 Node::InternSnap(::g::Uno::Float2 p)
{
    return Snap(p);
}

// internal float2 InternSnapUp(float2 p) [instance] :2981
::g::Uno::Float2 Node::InternSnapUp(::g::Uno::Float2 p)
{
    return SnapUp(p);
}

// private void InvalidateFlat() [instance] :2640
void Node::InvalidateFlat()
{
    if (_isLocalFlatCached || _isFlatCached)
    {
        _isLocalFlatCached = false;
        _isFlatCached = false;

        if (Parent() != NULL)
            uPtr(Parent())->InvalidateFlat();
    }
}

// protected void InvalidateHitTestBounds() [instance] :2518
void Node::InvalidateHitTestBounds()
{
    Node* p = this;

    while ((p != NULL) && p->_isHitTestBoundsCacheValid)
    {
        uPtr(p)->_isHitTestBoundsCacheValid = false;
        p = uPtr(p)->Parent();
    }
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) [instance] :2885
void Node::InvalidateLayout(int reason)
{
    if (Node::_performingLayout())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[48/*"Layout was ...*/]));

    if (reason <= _layoutDirty)
        return;

    _layoutDirty = reason;
    OnInvalidateLayout();
    Node* child = this;
    Node* parent = Parent();
    Node* maybeChild = NULL;

    while (parent != NULL)
    {
        if (reason <= uPtr(parent)->_layoutDirty)
            break;

        int useReason = reason;

        if (uPtr(child)->_hasMarginBox && (reason > 1))
        {
            int mb = uPtr(parent)->IsMarginBoxDependent(child);

            if ((mb == 4) || (mb == 3))
            {
                while ((maybeChild != NULL) && (maybeChild != parent))
                {
                    uPtr(maybeChild)->_layoutDirty = 2;
                    maybeChild = uPtr(maybeChild)->Parent();
                }

                maybeChild = NULL;
            }

            switch (mb)
            {
                case 0:
                {
                    useReason = reason = 1;
                    break;
                }
                case 1:
                {
                    useReason = 2;
                    reason = 1;
                    break;
                }
                case 2:
                {
                    useReason = 1;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 3:
                {
                    useReason = 2;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 4:
                {
                    reason = useReason = 2;
                    break;
                }
            }
        }

        uPtr(parent)->OnInvalidateLayout();

        if (useReason > parent->_layoutDirty)
            parent->_layoutDirty = useReason;

        child = parent;
        parent = uPtr(parent)->Parent();
    }
}

// public void InvalidateRenderBounds() [instance] :3798
void Node::InvalidateRenderBounds()
{
    Node* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->OnInvalidateRenderBounds())
            break;

        p = uPtr(p)->Parent();
    }
}

// private void InvokeEventHandler(object obj, object args) [instance] :2343
void Node::InvokeEventHandler(uObject* obj, uObject* args)
{
    uPtr(uCast<uDelegate*>(obj, ::TYPES[14/*Uno.EventHandler*/]))->Invoke(2, this, uCast< ::g::Uno::EventArgs*>(args, ::TYPES[89/*Uno.EventArgs*/]));
}

// public bool get_IsEnabled() [instance] :2602
bool Node::IsEnabled()
{
    return _isEnabledCache;
}

// public void set_IsEnabled(bool value) [instance] :2603
void Node::IsEnabled(bool value)
{
    bool ret29;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Node::IsEnabledProperty()), this, uCRef(value), &ret29);
}

// public void add_IsEnabledChanged(Uno.EventHandler value) [instance] :2591
void Node::add_IsEnabledChanged(uDelegate* value)
{
    AddEventHandler(Node::_isEnabledChangedHandle(), 4, value);
}

// public void remove_IsEnabledChanged(Uno.EventHandler value) [instance] :2592
void Node::remove_IsEnabledChanged(uDelegate* value)
{
    RemoveEventHandler(Node::_isEnabledChangedHandle(), 4, value);
}

// internal bool get_IsFlat() [instance] :2675
bool Node::IsFlat()
{
    if (_isFlatCached)
        return _isFlat;

    bool flat = true;

    for (int i = 0; i < SubNodeCount(); ++i)
        if (!uPtr(GetSubNode(i))->IsFlat() || !uPtr(GetSubNode(i))->IsLocalFlat())
        {
            flat = false;
            break;
        }

    _isFlat = flat;
    _isFlatCached = true;
    return flat;
}

// internal bool get_IsLocalFlat() [instance] :2656
bool Node::IsLocalFlat()
{
    ::g::Fuse::Transform* ret30;

    if (_isLocalFlatCached)
        return _isLocalFlat;

    bool v = true;

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Transforms()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[110/*Fuse.Transform*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Transform* t = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[121/*Uno.Collections.IEnumerator<Fuse.Transform>*/]), &ret30), ret30);
        v = v && uPtr(t)->IsFlat();
    }

    _isLocalFlat = v;
    _isLocalFlatCached = true;
    return v;
}

// public bool get_IsLocalRooted() [instance] :4122
bool Node::IsLocalRooted()
{
    return _rootStage >= 6;
}

// public bool get_IsRooted() [instance] :4103
bool Node::IsRooted()
{
    return IsLocalRooted();
}

// private bool IsRootStage(Fuse.Node.RootStage stage) [instance] :4136
bool Node::IsRootStage(int stage)
{
    return _rootStage >= stage;
}

// public bool get_IsVisible() [instance] :2718
bool Node::IsVisible()
{
    return _isVisibleCached;
}

// public void add_IsVisibleChanged(Uno.EventHandler value) [instance] :2713
void Node::add_IsVisibleChanged(uDelegate* value)
{
    AddEventHandler(Node::_isVisibleChangedHandle(), 5, value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) [instance] :2714
void Node::remove_IsVisibleChanged(uDelegate* value)
{
    RemoveEventHandler(Node::_isVisibleChangedHandle(), 5, value);
}

// internal bool IsWorldMatrixValid() [instance] :3625
bool Node::IsWorldMatrixValid()
{
    if ((_worldTransformCacheVersion != _worldTransformVersion) || (_worldTransform == NULL))
        return false;

    if (Parent() != NULL)
        return (_worldTransformParentCacheVersion == uPtr(Parent())->_worldTransformVersion) && uPtr(Parent())->IsWorldMatrixValid();

    return true;
}

// public Fuse.Layer get_Layer() [instance] :2829
int Node::Layer()
{
    uObject* v;

    if (uPtr(Properties())->TryGet(Node::_layerProperty(), &v))
        return uUnbox<int>(::TYPES[122/*Fuse.Layer*/], v);

    return 1;
}

// public void set_Layer(Fuse.Layer value) [instance] :2836
void Node::Layer(int value)
{
    uPtr(Properties())->Set(Node::_layerProperty(), uBox<int>(::TYPES[122/*Fuse.Layer*/], value));
    InvalidateLayout(2);
}

// public Fuse.LayoutRole get_LayoutRole() [instance] :2848
int Node::LayoutRole()
{
    uObject* v;

    if (uPtr(Properties())->TryGet(Node::_layoutRoleProperty(), &v))
        return uUnbox<int>(::TYPES[123/*Fuse.LayoutRole*/], v);

    if (Layer() != 1)
        return 1;

    return 0;
}

// public void set_LayoutRole(Fuse.LayoutRole value) [instance] :2860
void Node::LayoutRole(int value)
{
    uPtr(Properties())->Set(Node::_layoutRoleProperty(), uBox<int>(::TYPES[123/*Fuse.LayoutRole*/], value));
    InvalidateLayout(2);
}

// public float4x4 get_LocalTransform() [instance] :3666
::g::Uno::Float4x4 Node::LocalTransform()
{
    return uPtr(LocalTransformInternal())->Matrix();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() [instance] :3676
::g::Fuse::FastMatrix* Node::LocalTransformInternal()
{
    if (_localTransform == NULL)
    {
        _localTransform = ::g::Fuse::FastMatrix::Identity();
        PrependLocalTransform(_localTransform);
    }

    return _localTransform;
}

// protected float4x4 get_LocalTransformInverse() [instance] :3690
::g::Uno::Float4x4 Node::LocalTransformInverse()
{
    if (_localTransformInverse == NULL)
    {
        _localTransformInverse = ::g::Fuse::FastMatrix::FromFloat4x4(LocalTransform());
        uPtr(_localTransformInverse)->Invert();
    }

    return uPtr(_localTransformInverse)->Matrix();
}

// internal float2 get_MarginBoxPosition() [instance] :3140
::g::Uno::Float2 Node::MarginBoxPosition()
{
    return _ambPosition;
}

// internal void MarkRooted() [instance] :4142
void Node::MarkRooted()
{
    if (_rootStage > 0)
        return;

    _rootStage = 1;

    if (::g::Fuse::UpdateManager::IsPastStage(1))
        ::g::Fuse::Diagnostics::Error(::STRINGS[49/*"Rooting hap...*/], this, ::STRINGS[4/*"C:\\Program...*/], 4149, ::STRINGS[50/*"MarkRooted"*/]);

    if (::g::Uno::String::op_Inequality(Name(), NULL))
        ::g::Fuse::Scripting::NameRegistry::SetName(this, Name());

    UpdateIsEnabledCache();
    UpdateIsVisibleCache();
    _rootStage = 2;
    ApplyStyle();
    _rootStage = 3;
    RootBehaviors();
    _rootStage = 4;

    for (int i = 0; i < SubNodeCount(); i++)
        uPtr(GetSubNode(i))->MarkRooted();

    _rootStage = 5;
    RaiseEvent(Node::_rootedHandle(), 8);
    OnRooted();
    _rootStage = 6;
    _hasMarginBox = false;
    CheckUpdateListening(false);

    if (Parent() == NULL)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)Node__PerformLayout_fn, this), 2);
        _isAddedUpdate = true;
    }
}

// internal void MarkUnrooted() [instance] :4193
void Node::MarkUnrooted()
{
    if (_rootStage == 0)
        return;

    _rootStage = 0;

    if (_pendingRemove != NULL)
    {
        uPtr(_pendingRemove)->Remove();
        _pendingRemove = NULL;
    }

    if (::g::Fuse::UpdateManager::IsPastStage(1))
        ::g::Fuse::Diagnostics::Error(::STRINGS[51/*"Unrooting h...*/], this, ::STRINGS[4/*"C:\\Program...*/], 4206, ::STRINGS[52/*"MarkUnrooted"*/]);

    RaiseEvent(Node::_unrootedHandle(), 9);
    OnUnrooted();

    if (::g::Uno::String::op_Inequality(Name(), NULL))
        ::g::Fuse::Scripting::NameRegistry::ClearName(this);

    ResetStyle();
    UnrootBehaviors();

    for (int i = 0; i < SubNodeCount(); i++)
        uPtr(GetSubNode(i))->MarkUnrooted();

    CheckUpdateListening(true);

    if (_isAddedUpdate)
    {
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)Node__PerformLayout_fn, this), 2);
        _isAddedUpdate = false;
    }

    SoftDispose();
}

// public string get_Name() [instance] :2382
uString* Node::Name()
{
    uString* ret31;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Node::NameProperty()), this, &ret31), ret31);
}

// public void set_Name(string value) [instance] :2383
void Node::Name(uString* value)
{
    bool ret32;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Node::NameProperty()), this, value, &ret32);
}

// public void OnAdded(Fuse.Node parent) [instance] :4018
void Node::OnAdded(Node* parent)
{
    if (_parent != NULL)
    {
        if (_pendingRemove == NULL)
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Object::ToString(this), ::STRINGS[53/*" already ha...*/]), (parent != _parent) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[54/*" ("*/], ::g::Uno::Object::ToString(uPtr(parent))), ::STRINGS[55/*")"*/]) : ::STRINGS[56/*""*/])));

        uPtr(_pendingRemove)->Remove();
    }

    _pendingRemove = NULL;
    RaiseEvent(Node::_addedHandle(), 6);
    _parent = parent;

    if (uPtr(parent)->IsRootStage(4))
        MarkRooted();

    InvalidateLocalTransform();
    InvalidateLayout(2);
}

// protected void OnBeginRemove(Fuse.BeginRemoveArgs args) [instance] :3958
void Node::OnBeginRemove(::g::Fuse::BeginRemoveArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(BeginRemove1, NULL))
        uPtr(BeginRemove1)->Invoke(2, this, args);
}

// protected void OnBringIntoView(Fuse.Node elm) [instance] :3164
void Node::OnBringIntoView(Node* elm)
{
    if (::g::Uno::Delegate::op_Inequality(RequestBringIntoView1, NULL))
        uPtr(RequestBringIntoView1)->Invoke(2, this, (::g::Fuse::RequestBringIntoViewArgs*)::g::Fuse::RequestBringIntoViewArgs::New2(elm));

    if (Parent() != NULL)
        uPtr(Parent())->OnBringIntoView(elm);
}

// protected void OnIsVisibleChanged() [instance] :2742
void Node::OnIsVisibleChanged()
{
    RaiseEvent(Node::_isVisibleChangedHandle(), 5);
    InvalidateHitTestBounds();
}

// protected void OnLocalVisibleChanged() [instance] :2723
void Node::OnLocalVisibleChanged()
{
    UpdateIsVisibleCache();
}

// private void OnMatrixChanged(Fuse.Transform t) [instance] :3557
void Node::OnMatrixChanged(::g::Fuse::Transform* t)
{
    OnTransformsChanged();
    InvalidateLocalTransform();
}

// public void OnRemoved(Fuse.Node parent) [instance] :4043
void Node::OnRemoved(Node* parent)
{
    if (_parent == parent)
    {
        RaiseEvent(Node::_removedHandle(), 7);
        MarkUnrooted();
        _parent = NULL;
    }
    else
        U_THROW(::g::Uno::Exception::New1());
}

// private void OnResourceChanged(Uno.UX.Resource res) [instance] :3314
void Node::OnResourceChanged(::g::Uno::UX::Resource* res)
{
    ::g::Fuse::Resources::ResourceRegistry::NotifyResourceChanged(uPtr(res)->Key());
}

// private void OnTransformAdded(Fuse.Transform t) [instance] :3542
void Node::OnTransformAdded(::g::Fuse::Transform* t)
{
    uPtr(t)->Added(this);
    t->add_MatrixChanged(uDelegate::New(::TYPES[112/*Uno.Action<Fuse.Transform>*/], (void*)Node__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
}

// private void OnTransformRemoved(Fuse.Transform t) [instance] :3549
void Node::OnTransformRemoved(::g::Fuse::Transform* t)
{
    uPtr(t)->Removed(this);
    t->remove_MatrixChanged(uDelegate::New(::TYPES[112/*Uno.Action<Fuse.Transform>*/], (void*)Node__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
    t->AddedByStyle = false;
}

// private void OnTransformsChanged() [instance] :3565
void Node::OnTransformsChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TransformsChanged1, NULL))
        uPtr(TransformsChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// protected void OnWorldTransformValidated() [instance] :3658
void Node::OnWorldTransformValidated()
{
}

// public Fuse.Node get_Parent() [instance] :3980
Node* Node::Parent()
{
    return _parent;
}

// public float2 ParentToLocal(float2 parentPoint) [instance] :4247
::g::Uno::Float2 Node::ParentToLocal(::g::Uno::Float2 parentPoint)
{
    ::g::Uno::Float2 parentPoint_ = parentPoint;
    return ::g::Uno::Vector::TransformCoordinate(parentPoint_, LocalTransformInverse());
}

// protected void PerformLayout() [instance] :3019
void Node::PerformLayout()
{
    PerformLayout1(::g::Fuse::IViewport::Size(uInterface(uPtr(Viewport()), ::TYPES[36/*Fuse.IViewport*/])));
}

// protected void PerformLayout(float2 clientSize) [instance] :3027
void Node::PerformLayout1(::g::Uno::Float2 clientSize)
{
    if ((_cachedRenderTargetSize.X != clientSize.X) || (_cachedRenderTargetSize.Y != clientSize.Y))
    {
        _cachedRenderTargetSize = clientSize;
        InvalidateLayout(2);
    }

    if (_layoutDirty != 0)
    {
        Node::_performingLayout() = true;

        try
        {
            if (_layoutDirty == 2)
            {
                ::g::Uno::Float2 availableSize = clientSize;
                ::g::Uno::Float2 offset = ::g::Uno::Float2__New1(0.0f);
                ArrangeMarginBox(offset, availableSize, 3);
            }
            else
                UpdateLayout();
        }
        catch (const uThrowable& __t)
        {
            Node::_performingLayout() = false;
            throw __t;
        }
        // finally
        Node::_performingLayout() = false;
    }
}

// public float get_PointDensity() [instance] :2998
float Node::PointDensity()
{
    uObject* w = Viewport();

    if (w == NULL)
        return 1.0f;

    return ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(w), ::TYPES[36/*Fuse.IViewport*/]));
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) [instance] :3761
void Node::PrependExplicitTransforms(::g::Fuse::FastMatrix* m)
{
    ::g::Fuse::Transform* ret18;

    if (HasExplicitTransforms())
    {
        PrependTransformOrigin(m);

        for (int i = 0; i < uPtr(_transforms)->Count(); i++)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_transforms), uCRef<int>(i), &ret18), ret18))->PrependTo(m);

        PrependInverseTransformOrigin(m);
    }
}

// private void PrependLocalTransform(Fuse.FastMatrix m) [instance] :3755
void Node::PrependLocalTransform(::g::Fuse::FastMatrix* m)
{
    PrependImplicitTransform(m);
    PrependExplicitTransforms(m);
}

// public Fuse.Properties get_Properties() [instance] :3969
::g::Fuse::Properties* Node::Properties()
{
    if (_properties == NULL)
        _properties = ::g::Fuse::Properties::New1();

    return _properties;
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne) [instance] :2338
void Node::RaiseEvent(::g::Fuse::PropertyHandle* ph, int ne)
{
    if (HasBit(ne))
        uPtr(Properties())->ForeachInList1(ph, uDelegate::New(::TYPES[113/*Uno.Action<object, object>*/], (void*)Node__InvokeEventHandler_fn, this), ::g::Uno::EventArgs::Empty());
}

// private void ReapplyStyle() [instance] :3387
void Node::ReapplyStyle()
{
    ResetStyle();

    if (IsRootStage(2))
        ApplyStyle();
}

// private void ReapplySubtreeStyle() [instance] :3377
void Node::ReapplySubtreeStyle()
{
    for (int i = 0; i < SubNodeCount(); i++)
    {
        Node* n = GetSubNode(i);
        uPtr(n)->ReapplyStyle();
        n->ReapplySubtreeStyle();
    }
}

// private void RearrangeMarginBox() [instance] :3089
void Node::RearrangeMarginBox()
{
    ArrangeMarginBox(_ambPosition, _ambSize, _ambAvailSet);
}

// public void RemoveDrawCost(double cost) [instance] :3944
void Node::RemoveDrawCost(double cost)
{
    Node* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost - cost);
        p = uPtr(p)->Parent();
    }
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne, object handler) [instance] :2355
void Node::RemoveEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uPtr(Properties())->RemoveFromList(ph, handler);
    uObject* foo;

    if (!uPtr(Properties())->TryGet(ph, &foo))
        ClearBit(ne);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :3162
void Node::add_RequestBringIntoView(uDelegate* value)
{
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RequestBringIntoView1, value), ::TYPES[107/*Fuse.RequestBringIntoViewHandler*/]);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :3162
void Node::remove_RequestBringIntoView(uDelegate* value)
{
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RequestBringIntoView1, value), ::TYPES[107/*Fuse.RequestBringIntoViewHandler*/]);
}

// internal void ResetStyle() [instance] :3394
void Node::ResetStyle()
{
    ::g::Fuse::Style* ret19;

    if (HasBit(0))
    {
        OnResetStyle();
        ClearBit(0);
    }

    uObject* listobj;

    if (uPtr(Properties())->TryGet(Node::_styleHandle(), &listobj))
    {
        uObject* s = (uObject*)listobj;

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(s), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/])) - 1; i >= 0; --i)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(s), ::TYPES[94/*Uno.Collections.IList<Fuse.Style>*/]), uCRef<int>(i), &ret19), ret19))->AddedByStyle)
                ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(s), ::TYPES[94/*Uno.Collections.IList<Fuse.Style>*/]), i);
    }
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :3250
uObject* Node::Resources()
{
    if (!HasResources())
    {
        SetBit(1);
        uPtr(Properties())->Set(Node::_resourcesHandle(), (::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[124/*Uno.Collections.ObservableList<Uno.UX.Resource>*/], uDelegate::New(::TYPES[125/*Uno.Action<Uno.UX.Resource>*/], (void*)Node__OnResourceChanged_fn, this), uDelegate::New(::TYPES[125/*Uno.Action<Uno.UX.Resource>*/], (void*)Node__OnResourceChanged_fn, this)));
    }

    return (uObject*)uPtr(Properties())->Get(Node::_resourcesHandle());
}

// private void RootBehaviors() [instance] :2136
void Node::RootBehaviors()
{
    ::g::Fuse::Behavior* ret20;
    ::g::Fuse::Behavior* ret21;

    if (_behaviors != NULL)

        for (int i = 0; i < uPtr(_behaviors)->Count(); i++)
            if (!uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_behaviors), uCRef<int>(i), &ret20), ret20))->IsRooted())
                uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_behaviors), uCRef<int>(i), &ret21), ret21))->Rooted(this);
}

// public void add_Rooted(Uno.EventHandler value) [instance] :4108
void Node::add_Rooted(uDelegate* value)
{
    AddEventHandler(Node::_rootedHandle(), 8, value);
}

// public void remove_Rooted(Uno.EventHandler value) [instance] :4109
void Node::remove_Rooted(uDelegate* value)
{
    RemoveEventHandler(Node::_rootedHandle(), 8, value);
}

// private void SetBit(Fuse.Node.NodeBits nb) [instance] :2335
void Node::SetBit(int nb)
{
    _nodebits = (_nodebits | (1 << nb));
}

// internal void SetPropertyState(int id, Fuse.PropertyState state) [instance] :3218
void Node::SetPropertyState(int id, int state)
{
    int bits = (id & 15) * 2;
    uint32_t mask = ~(3U << bits);

    if (id < 16)
        _b0 = ((_b0 & mask) | ((uint32_t)state << bits));
    else if (id < 32)
        _b1 = ((_b1 & mask) | ((uint32_t)state << bits));
    else if (id < 48)
        _b2 = ((_b2 & mask) | ((uint32_t)state << bits));
    else if (id < 64)
        _b3 = ((_b3 & mask) | ((uint32_t)state << bits));
    else if (id < 80)
        _b4 = ((_b4 & mask) | ((uint32_t)state << bits));
    else if (id < 96)
        _b5 = ((_b5 & mask) | ((uint32_t)state << bits));
    else if (id < 112)
        _b6 = ((_b6 & mask) | ((uint32_t)state << bits));
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[47/*"Too many st...*/]));
}

// public void SetResource(string key, object value) [instance] :3261
void Node::SetResource(uString* key, uObject* value)
{
    ::g::Uno::UX::Resource* ret22;
    uObject* resources = Resources();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[115/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); ++i)
    {
        ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[116/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret22), ret22);

        if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key))
        {
            ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(resources), ::TYPES[116/*Uno.Collections.IList<Uno.UX.Resource>*/]), i);
            break;
        }
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(resources), ::TYPES[115/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), ::g::Uno::UX::Resource::New1(key, value));
}

// protected float2 Snap(float2 p) [instance] :2973
::g::Uno::Float2 Node::Snap(::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom())), AbsoluteZoom());
    return s;
}

// public bool get_SnapToPixels() [instance] :3013
bool Node::SnapToPixels()
{
    bool ret33;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Node::SnapToPixelsProperty()), this, &ret33), ret33);
}

// public void set_SnapToPixels(bool value) [instance] :3014
void Node::SnapToPixels(bool value)
{
    bool ret34;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Node::SnapToPixelsProperty()), this, uCRef(value), &ret34);
}

// protected float2 SnapUp(float2 p) [instance] :2982
::g::Uno::Float2 Node::SnapUp(::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// private void StyleAdded(Fuse.Style s) [instance] :3359
void Node::StyleAdded(::g::Fuse::Style* s)
{
    uPtr(s)->add_TemplatesChanged(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)Node__ReapplySubtreeStyle_fn, this));
    SetBit(3);
    ReapplySubtreeStyle();
}

// private void StyleRemoved(Fuse.Style s) [instance] :3366
void Node::StyleRemoved(::g::Fuse::Style* s)
{
    uPtr(s)->remove_TemplatesChanged(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)Node__ReapplySubtreeStyle_fn, this));

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/])) == 0)
    {
        uPtr(Properties())->Clear(Node::_styleHandle());
        ClearBit(3);
    }

    ReapplySubtreeStyle();
}

// public Uno.Collections.IList<Fuse.Style> get_Styles() [instance] :3340
uObject* Node::Styles()
{
    uObject* listobj;

    if (!uPtr(Properties())->TryGet(Node::_styleHandle(), &listobj))
    {
        listobj = (::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[126/*Uno.Collections.ObservableList<Fuse.Style>*/], uDelegate::New(::TYPES[127/*Uno.Action<Fuse.Style>*/], (void*)Node__StyleAdded_fn, this), uDelegate::New(::TYPES[127/*Uno.Action<Fuse.Style>*/], (void*)Node__StyleRemoved_fn, this));
        uPtr(Properties())->Set(Node::_styleHandle(), listobj);
    }

    return (uObject*)listobj;
}

// public Uno.Collections.IList<Fuse.Transform> get_Transforms() [instance] :3524
uObject* Node::Transforms()
{
    if (_transforms == NULL)
        _transforms = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[109/*Uno.Collections.ObservableList<Fuse.Transform>*/], uDelegate::New(::TYPES[112/*Uno.Action<Fuse.Transform>*/], (void*)Node__OnTransformAdded_fn, this), uDelegate::New(::TYPES[112/*Uno.Action<Fuse.Transform>*/], (void*)Node__OnTransformRemoved_fn, this)));

    return (uObject*)_transforms;
}

// public generated void add_TransformsChanged(Uno.EventHandler value) [instance] :3563
void Node::add_TransformsChanged(uDelegate* value)
{
    TransformsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TransformsChanged1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_TransformsChanged(Uno.EventHandler value) [instance] :3563
void Node::remove_TransformsChanged(uDelegate* value)
{
    TransformsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TransformsChanged1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) [instance] :3278
bool Node::TryGetResource(uString* key, uDelegate* acceptor, uObject** resource)
{
    ::g::Uno::UX::Resource* ret23;
    bool ret24;
    ::g::Fuse::Style* ret25;

    if (HasResources())
    {
        uObject* resources = Resources();

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[115/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); i++)
        {
            ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[116/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret23), ret23);

            if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key) && (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret24, 1, (uObject*)uPtr(r)->Value()), ret24)))
            {
                *resource = uPtr(r)->Value();
                return true;
            }
        }
    }

    if (HasBit(3))

        for (int si = 0; si < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/])); si++)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Styles()), ::TYPES[94/*Uno.Collections.IList<Fuse.Style>*/]), uCRef<int>(si), &ret25), ret25))->TryGetResource(key, acceptor, resource))
                return true;

    if (Parent() != NULL)
        return uPtr(Parent())->TryGetResource(key, acceptor, resource);

    *resource = NULL;
    return false;
}

// private void UnrootBehaviors() [instance] :2148
void Node::UnrootBehaviors()
{
    ::g::Fuse::Behavior* ret26;
    ::g::Fuse::Behavior* ret27;

    if (_behaviors != NULL)

        for (int i = 0; i < uPtr(_behaviors)->Count(); i++)
            if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_behaviors), uCRef<int>(i), &ret26), ret26))->IsRooted())
                uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_behaviors), uCRef<int>(i), &ret27), ret27))->Unrooted(this);
}

// public void add_Unrooted(Uno.EventHandler value) [instance] :4115
void Node::add_Unrooted(uDelegate* value)
{
    AddEventHandler(Node::_unrootedHandle(), 9, value);
}

// public void remove_Unrooted(Uno.EventHandler value) [instance] :4116
void Node::remove_Unrooted(uDelegate* value)
{
    RemoveEventHandler(Node::_unrootedHandle(), 9, value);
}

// public void add_Update(Uno.EventHandler value) [instance] :4089
void Node::add_Update(uDelegate* value)
{
    if (_updateListeners == NULL)
        _updateListeners = ((::g::Uno::Collections::ConcurrentCollection*)::g::Uno::Collections::ConcurrentCollection::New1(::TYPES[97/*Uno.Collections.ConcurrentCollection<Uno.EventHandler>*/]));

    ::g::Uno::Collections::ConcurrentCollection__Add_fn(uPtr(_updateListeners), value);
    CheckUpdateListening(false);
}

// public void remove_Update(Uno.EventHandler value) [instance] :4096
void Node::remove_Update(uDelegate* value)
{
    bool ret35;
    ::g::Uno::Collections::ConcurrentCollection__Remove_fn(uPtr(_updateListeners), value, &ret35);
    CheckUpdateListening(false);
}

// private void UpdateIsEnabledCache() [instance] :2611
void Node::UpdateIsEnabledCache()
{
    bool ret28;
    bool newValue = (::g::Fuse::StyleProperty1__Get_fn(uPtr(Node::IsEnabledProperty()), this, &ret28), ret28) && ((Parent() == NULL) || uPtr(Parent())->_isEnabledCache);

    if (_isEnabledCache != newValue)
    {
        _isEnabledCache = newValue;
        OnIsEnabledChanged();

        for (int i = 0; i < SubNodeCount(); i++)
            uPtr(GetSubNode(i))->UpdateIsEnabledCache();
    }
}

// private void UpdateIsVisibleCache() [instance] :2728
void Node::UpdateIsVisibleCache()
{
    bool newValue = IsLocalVisible() && ((Parent() == NULL) || uPtr(Parent())->IsVisible());

    if (_isVisibleCached != newValue)
    {
        _isVisibleCached = newValue;
        OnIsVisibleChanged();

        for (int i = 0; i < SubNodeCount(); i++)
            uPtr(GetSubNode(i))->UpdateIsVisibleCache();
    }
}

// private void UpdateLayout() [instance] :3061
void Node::UpdateLayout()
{
    switch (_layoutDirty)
    {
        case 0:
            break;
        case 1:
        {
            for (int i = 0; i < SubNodeCount(); ++i)
                uPtr(GetSubNode(i))->UpdateLayout();

            break;
        }
        case 2:
        {
            RearrangeMarginBox();
            break;
        }
    }

    _layoutDirty = 0;
}

// protected void ValidateVisual() [instance] :3862
void Node::ValidateVisual()
{
    _visualDirty = false;
}

// public int get_ValidFrameCount() [instance] :3859
int Node::ValidFrameCount()
{
    return ::g::Fuse::UpdateManager::FrameIndex() - _lastInvalidate;
}

// public Fuse.IViewport get_Viewport() [instance] :4260
uObject* Node::Viewport()
{
    Node* p = this;

    while (p != NULL)
    {
        uObject* vp = uAs<uObject*>(p, ::TYPES[36/*Fuse.IViewport*/]);

        if (vp != NULL)
            return vp;

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// public void VisitSubtree(Uno.Action<Fuse.Node> action) [instance] :3918
void Node::VisitSubtree(uDelegate* action)
{
    uPtr(action)->InvokeVoid(this);

    for (int i = 0; i < SubNodeCount(); i++)
        uPtr(GetSubNode(i))->VisitSubtree(action);
}

// public float2 WindowToLocal(float2 windowCoord) [instance] :3774
::g::Uno::Float2 Node::WindowToLocal(::g::Uno::Float2 windowCoord)
{
    ::g::Uno::Float2 windowCoord_ = windowCoord;
    ::g::Uno::Float2 parentCoord = (Parent() == NULL) ? windowCoord_ : uPtr(Parent())->WindowToLocal(windowCoord_);
    return ::g::Uno::Vector::TransformCoordinate(parentCoord, LocalTransformInverse());
}

// public float4x4 get_WorldTransform() [instance] :3607
::g::Uno::Float4x4 Node::WorldTransform()
{
    return uPtr(WorldTransformInternal())->Matrix();
}

// private Fuse.FastMatrix get_WorldTransformInternal() [instance] :3641
::g::Fuse::FastMatrix* Node::WorldTransformInternal()
{
    if (!IsWorldMatrixValid())
    {
        _worldTransform = CalcWorldTransform();
        _worldTransformCacheVersion = (++_worldTransformVersion);

        if (Parent() != NULL)
            _worldTransformParentCacheVersion = uPtr(Parent())->_worldTransformVersion;

        OnWorldTransformValidated();
    }

    return _worldTransform;
}

// public float4x4 get_WorldTransformInverse() [instance] :3591
::g::Uno::Float4x4 Node::WorldTransformInverse()
{
    if ((_worldTransformInverseCacheVersion != _worldTransformVersion) || !IsWorldMatrixValid())
    {
        _worldTransformInverse = ::g::Fuse::FastMatrix::FromFloat4x4(WorldTransform());
        uPtr(_worldTransformInverse)->Invert();
        _worldTransformInverseCacheVersion = _worldTransformVersion;
    }

    return uPtr(_worldTransformInverse)->Matrix();
}

// protected static void InvalidateLayout(Fuse.Node elm) [static] :3017
void Node::InvalidateLayout1(Node* elm)
{
    Node_typeof()->Init();
    uPtr(elm)->InvalidateLayout(2);
}

// private static void OnIsEnabledChangedInternal(Fuse.Node n) [static] :2606
void Node::OnIsEnabledChangedInternal(Node* n)
{
    Node_typeof()->Init();
    uPtr(n)->UpdateIsEnabledCache();
}

// private static void OnNameChanged(Fuse.Node n) [static] :2386
void Node::OnNameChanged(Node* n)
{
    Node_typeof()->Init();

    if (uPtr(n)->IsRootStage(1))
    {
        if (::g::Uno::String::op_Equality(uPtr(n)->Name(), NULL))
            ::g::Fuse::Scripting::NameRegistry::ClearName(n);
        else
            ::g::Fuse::Scripting::NameRegistry::SetName(n, uPtr(n)->Name());
    }
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2320)
// -------------------------------------------------------

// private enum Node.NodeBits :2320
uEnumType* Node__NodeBits_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Node.NodeBits", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Styled", 0LL,
        "Resources", 1LL,
        "ResourceChanged", 2LL,
        "Style", 3LL,
        "IsEnabledChanged", 4LL,
        "IsVisibleChanged", 5LL,
        "Added", 6LL,
        "Removed", 7LL,
        "Rooted", 8LL,
        "Unrooted", 9LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(4289)
// -------------------------------------------------------

// public sealed class NodeBounds :4289
// {
// static NodeBounds() :4289
static void NodeBounds__cctor__fn(uType* __type)
{
    NodeBounds* collection1;
    NodeBounds::_empty_ = NodeBounds::New1();
    NodeBounds::_infinite_ = (collection1 = NodeBounds::New1(), uPtr(collection1)->_isInfinite = true, uPtr(collection1)->_isEmpty = false, collection1);
}

uType* NodeBounds_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(NodeBounds);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.NodeBounds", options);
    type->fp_ctor_ = (void*)NodeBounds__New1_fn;
    type->fp_cctor_ = NodeBounds__cctor__fn;
    ::TYPES[104] = ::g::Uno::Float3_typeof();
    ::TYPES[129] = ::g::Uno::Geometry::Box_typeof();
    ::TYPES[74] = ::g::Uno::Float2_typeof();
    ::TYPES[96] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        ::g::Uno::Geometry::Box_typeof(), offsetof(::g::Fuse::NodeBounds, _box), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::NodeBounds, _isEmpty), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::NodeBounds, _isInfinite), 0,
        NodeBounds_typeof(), (uintptr_t)&::g::Fuse::NodeBounds::_empty_, uFieldFlagsStatic,
        NodeBounds_typeof(), (uintptr_t)&::g::Fuse::NodeBounds::_infinite_, uFieldFlagsStatic);
    return type;
}

// private NodeBounds() :4291
void NodeBounds__ctor__fn(NodeBounds* __this)
{
    __this->ctor_();
}

// public Fuse.NodeBounds AddRect(float2 mn, float2 mx) :4365
void NodeBounds__AddRect_fn(NodeBounds* __this, ::g::Uno::Float2* mn, ::g::Uno::Float2* mx, NodeBounds** __retval)
{
    *__retval = __this->AddRect(*mn, *mx);
}

// public static Fuse.NodeBounds Box(Uno.Geometry.Box a) :4328
void NodeBounds__Box_fn(::g::Uno::Geometry::Box* a, NodeBounds** __retval)
{
    *__retval = NodeBounds::Box(*a);
}

// public bool ContainsPoint(float2 pt) :4393
void NodeBounds__ContainsPoint_fn(NodeBounds* __this, ::g::Uno::Float2* pt, bool* __retval)
{
    *__retval = __this->ContainsPoint(*pt);
}

// public static Fuse.NodeBounds get_Empty() :4296
void NodeBounds__get_Empty_fn(NodeBounds** __retval)
{
    *__retval = NodeBounds::Empty();
}

// public static Fuse.NodeBounds get_Infinite() :4302
void NodeBounds__get_Infinite_fn(NodeBounds** __retval)
{
    *__retval = NodeBounds::Infinite();
}

// public bool IntersectsRay(Uno.Geometry.Ray ray) :4405
void NodeBounds__IntersectsRay_fn(NodeBounds* __this, ::g::Uno::Geometry::Ray* ray, bool* __retval)
{
    *__retval = __this->IntersectsRay(*ray);
}

// public bool get_IsEmpty() :4339
void NodeBounds__get_IsEmpty_fn(NodeBounds* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public bool get_IsInfinite() :4348
void NodeBounds__get_IsInfinite_fn(NodeBounds* __this, bool* __retval)
{
    *__retval = __this->IsInfinite();
}

// public Fuse.NodeBounds Merge(Fuse.NodeBounds nb, [Fuse.FastMatrix trans]) :4370
void NodeBounds__Merge_fn(NodeBounds* __this, NodeBounds* nb, ::g::Fuse::FastMatrix* trans, NodeBounds** __retval)
{
    *__retval = __this->Merge(nb, trans);
}

// public Fuse.NodeBounds MergeChild(Fuse.Node child, Fuse.NodeBounds nb) :4388
void NodeBounds__MergeChild_fn(NodeBounds* __this, ::g::Fuse::Node* child, NodeBounds* nb, NodeBounds** __retval)
{
    *__retval = __this->MergeChild(child, nb);
}

// private NodeBounds New() :4291
void NodeBounds__New1_fn(NodeBounds** __retval)
{
    *__retval = NodeBounds::New1();
}

// public static Fuse.NodeBounds Rect(float2 a, float2 b) :4323
void NodeBounds__Rect_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, NodeBounds** __retval)
{
    *__retval = NodeBounds::Rect(*a, *b);
}

// public static Fuse.NodeBounds Rect(float3 a, float3 b) :4314
void NodeBounds__Rect1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, NodeBounds** __retval)
{
    *__retval = NodeBounds::Rect1(*a, *b);
}

uSStrong<NodeBounds*> NodeBounds::_empty_;
uSStrong<NodeBounds*> NodeBounds::_infinite_;

// private NodeBounds() [instance] :4291
void NodeBounds::ctor_()
{
    _isEmpty = true;
}

// public Fuse.NodeBounds AddRect(float2 mn, float2 mx) [instance] :4365
NodeBounds* NodeBounds::AddRect(::g::Uno::Float2 mn, ::g::Uno::Float2 mx)
{
    return Merge(NodeBounds::Rect1(::g::Uno::Float3__New4(mn, 0.0f), ::g::Uno::Float3__New4(mx, 0.0f)), NULL);
}

// public bool ContainsPoint(float2 pt) [instance] :4393
bool NodeBounds::ContainsPoint(::g::Uno::Float2 pt)
{
    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    return (((((_box.Minimum.X <= pt.X) && (_box.Minimum.Y <= pt.Y)) && (_box.Maximum.X >= pt.X)) && (_box.Maximum.Y >= pt.Y)) && (_box.Minimum.Z <= 0.0f)) && (_box.Maximum.Z >= 0.0f);
}

// public bool IntersectsRay(Uno.Geometry.Ray ray) [instance] :4405
bool NodeBounds::IntersectsRay(::g::Uno::Geometry::Ray ray)
{
    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    float distance;
    return ::g::Uno::Geometry::Collision::RayIntersectsBox(ray, _box, &distance);
}

// public bool get_IsEmpty() [instance] :4339
bool NodeBounds::IsEmpty()
{
    return _isEmpty;
}

// public bool get_IsInfinite() [instance] :4348
bool NodeBounds::IsInfinite()
{
    return _isInfinite;
}

// public Fuse.NodeBounds Merge(Fuse.NodeBounds nb, [Fuse.FastMatrix trans]) [instance] :4370
NodeBounds* NodeBounds::Merge(NodeBounds* nb, ::g::Fuse::FastMatrix* trans)
{
    if (uPtr(nb)->IsEmpty())
        return this;

    if (uPtr(nb)->IsInfinite() || IsInfinite())
        return NodeBounds::_infinite();

    ::g::Uno::Geometry::Box add = (trans != NULL) ? ::g::Uno::Geometry::Box__Transform(uPtr(nb)->_box, uPtr(trans)->Matrix()) : uPtr(nb)->_box;

    if (!IsEmpty())
    {
        add.Minimum = ::g::Uno::Math::Min5(_box.Minimum, add.Minimum);
        add.Maximum = ::g::Uno::Math::Max5(_box.Maximum, add.Maximum);
    }

    return NodeBounds::Box(add);
}

// public Fuse.NodeBounds MergeChild(Fuse.Node child, Fuse.NodeBounds nb) [instance] :4388
NodeBounds* NodeBounds::MergeChild(::g::Fuse::Node* child, NodeBounds* nb)
{
    return Merge(nb, uPtr(child)->InternLocalTransformInternal());
}

// public static Fuse.NodeBounds Box(Uno.Geometry.Box a) [static] :4328
NodeBounds* NodeBounds::Box(::g::Uno::Geometry::Box a)
{
    NodeBounds_typeof()->Init();
    NodeBounds* nb = NodeBounds::New1();
    nb->_box = a;
    nb->_isEmpty = false;
    return nb;
}

// private NodeBounds New() [static] :4291
NodeBounds* NodeBounds::New1()
{
    NodeBounds* obj2 = (NodeBounds*)uNew(NodeBounds_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.NodeBounds Rect(float2 a, float2 b) [static] :4323
NodeBounds* NodeBounds::Rect(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    NodeBounds_typeof()->Init();
    return NodeBounds::Rect1(::g::Uno::Float3__New4(a, 0.0f), ::g::Uno::Float3__New4(b, 0.0f));
}

// public static Fuse.NodeBounds Rect(float3 a, float3 b) [static] :4314
NodeBounds* NodeBounds::Rect1(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    NodeBounds_typeof()->Init();
    NodeBounds* nb = NodeBounds::New1();
    nb->_box.Minimum = ::g::Uno::Math::Min5(a, b);
    nb->_box.Maximum = ::g::Uno::Math::Max5(a, b);
    nb->_isEmpty = false;
    return nb;
}

// public static Fuse.NodeBounds get_Empty() [static] :4296
NodeBounds* NodeBounds::Empty()
{
    NodeBounds_typeof()->Init();
    return NodeBounds::_empty();
}

// public static Fuse.NodeBounds get_Infinite() [static] :4302
NodeBounds* NodeBounds::Infinite()
{
    NodeBounds_typeof()->Init();
    return NodeBounds::_infinite();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(872)
// ------------------------------------------------------

// public abstract class NodeEvent<THandler, TArgs> :872
// {
NodeEvent_type* NodeEvent_typeof()
{
    static uSStrong<NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NodeEvent);
    options.TypeSize = sizeof(NodeEvent_type);
    type = (NodeEvent_type*)uClassType::New("Fuse.NodeEvent`2", options);
    ::TYPES[130] = ::g::Uno::Collections::List_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[131] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[132] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[133] = uObject_typeof()->Array();
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[134] = ::g::Uno::Action2_typeof();
    ::TYPES[135] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetPrecalc(
        ::TYPES[130/*Uno.Collections.List`1*/]->MakeType(type->T(0)),
        ::TYPES[134/*Uno.Action`2*/]->MakeType(type->T(1), ::TYPES[135/*Uno.Collections.IList<Fuse.Node>*/]));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::NodeEvent, _globalHandlers), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::NodeEvent, _handle), 0);
    return type;
}

// protected generated NodeEvent() :872
void NodeEvent__ctor__fn(NodeEvent* __this)
{
    __this->ctor_();
}

// public void AddGlobalHandler(THandler handler) :887
void NodeEvent__AddGlobalHandler_fn(NodeEvent* __this, void* handler)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_globalHandlers), handler);
}

// public void AddHandler(Fuse.Node node, THandler handler) :876
void NodeEvent__AddHandler_fn(NodeEvent* __this, ::g::Fuse::Node* node, void* handler)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    uPtr(uPtr(node)->Properties())->AddToList(__this->_handle, uBoxPtr(__types[0], handler));
}

// private void InvokeGlobalHandlers(Fuse.Node node, TArgs args) :897
void NodeEvent__InvokeGlobalHandlers_fn(NodeEvent* __this, ::g::Fuse::Node* node, ::g::Fuse::NodeEventArgs* args)
{
    __this->InvokeGlobalHandlers(node, args);
}

// private void OnRaise(object target, object[] args) :957
void NodeEvent__OnRaise_fn(NodeEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaise(target, args);
}

// private void OnRaiseEnabled(object target, object[] args) :965
void NodeEvent__OnRaiseEnabled_fn(NodeEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaiseEnabled(target, args);
}

// private void Raise(TArgs args, Fuse.NodeEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>> PostBubbleAction]) :922
void NodeEvent__Raise_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type, bool* bubble, uDelegate* PostBubbleAction)
{
    __this->Raise(args, *type, *bubble, PostBubbleAction);
}

// public void RaiseWithBubble(TArgs args, [Fuse.NodeEventMode type]) :906
void NodeEvent__RaiseWithBubble_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type)
{
    __this->RaiseWithBubble(args, *type);
}

// internal void RaiseWithBubble(TArgs args, Fuse.NodeEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>> PostBubbleAction) :911
void NodeEvent__RaiseWithBubble1_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type, uDelegate* PostBubbleAction)
{
    __this->RaiseWithBubble1(args, *type, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.NodeEventMode type]) :917
void NodeEvent__RaiseWithoutBubble_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type)
{
    __this->RaiseWithoutBubble(args, *type);
}

// public void RemoveGlobalHandler(THandler handler) :892
void NodeEvent__RemoveGlobalHandler_fn(NodeEvent* __this, void* handler)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(__this->_globalHandlers), handler, &ret4);
}

// public void RemoveHandler(Fuse.Node node, THandler handler) :881
void NodeEvent__RemoveHandler_fn(NodeEvent* __this, ::g::Fuse::Node* node, void* handler)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    uPtr(uPtr(node)->Properties())->RemoveFromList(__this->_handle, uBoxPtr(__types[0], handler));
}

// protected generated NodeEvent() [instance] :872
void NodeEvent::ctor_()
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->Precalced(0/*Uno.Collections.List<THandler>*/),
        __type->GetBase(NodeEvent_typeof())->T(0),
    };
    _handle = ::g::Fuse::Properties::CreateHandle();
    _globalHandlers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// private void InvokeGlobalHandlers(Fuse.Node node, TArgs args) [instance] :897
void NodeEvent::InvokeGlobalHandlers(::g::Fuse::Node* node, ::g::Fuse::NodeEventArgs* args)
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->T(0),
        __type->GetBase(NodeEvent_typeof())->Precalced(0/*Uno.Collections.List<THandler>*/),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(_globalHandlers)->Count() > 0)

        for (int i = 0; i < uPtr(_globalHandlers)->Count(); i++)
            Invoke_ex((::g::Uno::Collections::List__get_Item_fn(uPtr(_globalHandlers), uCRef<int>(i), &ret1), ret1), node, args);
}

// private void OnRaise(object target, object[] args) [instance] :957
void NodeEvent::OnRaise(uObject* target, uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->T(0),
        __type->GetBase(NodeEvent_typeof())->T(1),
    };
    uT handler(__types[0], U_ALLOCA(__types[0]->ValueSize));
    handler = uUnboxAny(__types[0], target);
    ::g::Fuse::Node* node = uCast< ::g::Fuse::Node*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[3/*Fuse.Node*/]);
    ::g::Fuse::NodeEventArgs* eventArgs = uCast< ::g::Fuse::NodeEventArgs*>(args->Strong<uObject*>(1), __types[1]);
    Invoke_ex(handler, node, eventArgs);
}

// private void OnRaiseEnabled(object target, object[] args) [instance] :965
void NodeEvent::OnRaiseEnabled(uObject* target, uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->T(0),
        __type->GetBase(NodeEvent_typeof())->T(1),
    };
    uT handler(__types[0], U_ALLOCA(__types[0]->ValueSize));
    handler = uUnboxAny(__types[0], target);
    ::g::Fuse::Node* node = uCast< ::g::Fuse::Node*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[3/*Fuse.Node*/]);
    ::g::Fuse::NodeEventArgs* eventArgs = uCast< ::g::Fuse::NodeEventArgs*>(args->Strong<uObject*>(1), __types[1]);

    if (uPtr(node)->IsEnabled())
        Invoke_ex(handler, node, eventArgs);
}

// private void Raise(TArgs args, Fuse.NodeEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>> PostBubbleAction]) [instance] :922
void NodeEvent::Raise(::g::Fuse::NodeEventArgs* args, int type, bool bubble, uDelegate* PostBubbleAction)
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->Precalced(1/*Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>>*/),
        __type->GetBase(NodeEvent_typeof())->T(1),
    };
    ::g::Fuse::Node* ret2;
    ::g::Fuse::Node* ret3;
    ::g::Fuse::Node* node = uPtr(args)->Node();
    uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = uDelegate::New(::TYPES[132/*Uno.Action<object, object[]>*/], (void*)NodeEvent__OnRaise_fn, this);
            break;
        }
        case 2:
        {
            handler = uDelegate::New(::TYPES[132/*Uno.Action<object, object[]>*/], (void*)NodeEvent__OnRaise_fn, this);
            break;
        }
        case 1:
        {
            handler = uDelegate::New(::TYPES[132/*Uno.Action<object, object[]>*/], (void*)NodeEvent__OnRaiseEnabled_fn, this);
            break;
        }
        default:
            return;
    }

    ::g::Uno::Collections::List* list = ::g::Fuse::NodeListCache::Acquire();

    while (node != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(list), node);

        if (!bubble)
            break;

        node = uPtr(node)->Parent();
    }

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret2), ret2))->Properties())->ForeachInList(_handle, handler, uArray::Init<uObject*>(::TYPES[133/*object[]*/], 2, (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret3), ret3), args));

    if (::g::Uno::Delegate::op_Inequality(PostBubbleAction, NULL))
        uPtr(PostBubbleAction)->Invoke(2, args, (uObject*)list);

    InvokeGlobalHandlers(node, args);
    ::g::Fuse::NodeListCache::Release(list);
}

// public void RaiseWithBubble(TArgs args, [Fuse.NodeEventMode type]) [instance] :906
void NodeEvent::RaiseWithBubble(::g::Fuse::NodeEventArgs* args, int type)
{
    Raise(args, type, true, NULL);
}

// internal void RaiseWithBubble(TArgs args, Fuse.NodeEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>> PostBubbleAction) [instance] :911
void NodeEvent::RaiseWithBubble1(::g::Fuse::NodeEventArgs* args, int type, uDelegate* PostBubbleAction)
{
    Raise(args, type, true, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.NodeEventMode type]) [instance] :917
void NodeEvent::RaiseWithoutBubble(::g::Fuse::NodeEventArgs* args, int type)
{
    Raise(args, type, false, NULL);
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(978)
// ------------------------------------------------------

// public class NodeEventArgs :978
// {
uType* NodeEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NodeEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.NodeEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::NodeEventArgs, _IsHandled), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::NodeEventArgs, _Node), 0);
    return type;
}

// public NodeEventArgs(Fuse.Node node) :984
void NodeEventArgs__ctor_1_fn(NodeEventArgs* __this, ::g::Fuse::Node* node)
{
    __this->ctor_1(node);
}

// public generated bool get_IsHandled() :980
void NodeEventArgs__get_IsHandled_fn(NodeEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :980
void NodeEventArgs__set_IsHandled_fn(NodeEventArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public NodeEventArgs New(Fuse.Node node) :984
void NodeEventArgs__New2_fn(::g::Fuse::Node* node, NodeEventArgs** __retval)
{
    *__retval = NodeEventArgs::New2(node);
}

// public generated Fuse.Node get_Node() :982
void NodeEventArgs__get_Node_fn(NodeEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private generated void set_Node(Fuse.Node value) :982
void NodeEventArgs__set_Node_fn(NodeEventArgs* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// public NodeEventArgs(Fuse.Node node) [instance] :984
void NodeEventArgs::ctor_1(::g::Fuse::Node* node)
{
    ctor_();
    Node(node);
}

// public generated bool get_IsHandled() [instance] :980
bool NodeEventArgs::IsHandled()
{
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :980
void NodeEventArgs::IsHandled(bool value)
{
    _IsHandled = value;
}

// public generated Fuse.Node get_Node() [instance] :982
::g::Fuse::Node* NodeEventArgs::Node()
{
    return _Node;
}

// private generated void set_Node(Fuse.Node value) [instance] :982
void NodeEventArgs::Node(::g::Fuse::Node* value)
{
    _Node = value;
}

// public NodeEventArgs New(Fuse.Node node) [static] :984
NodeEventArgs* NodeEventArgs::New2(::g::Fuse::Node* node)
{
    NodeEventArgs* obj1 = (NodeEventArgs*)uNew(NodeEventArgs_typeof());
    obj1->ctor_1(node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(999)
// ------------------------------------------------------

// public delegate void NodeEventHandler(object sender, Fuse.NodeEventArgs args) :999
uDelegateType* NodeEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.NodeEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::NodeEventArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(837)
// ------------------------------------------------------

// public enum NodeEventMode :837
uEnumType* NodeEventMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.NodeEventMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Enabled", 1LL,
        "Force", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(850)
// ------------------------------------------------------

// internal static class NodeListCache :850
// {
// static NodeListCache() :850
static void NodeListCache__cctor__fn(uType* __type)
{
    NodeListCache::_nodeListCache_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[136/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
}

uClassType* NodeListCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.NodeListCache", options);
    type->fp_cctor_ = NodeListCache__cctor__fn;
    ::TYPES[136] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()));
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof())), (uintptr_t)&::g::Fuse::NodeListCache::_nodeListCache_, uFieldFlagsStatic);
    return type;
}

// public static Uno.Collections.List<Fuse.Node> Acquire() :854
void NodeListCache__Acquire_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = NodeListCache::Acquire();
}

// public static void Release(Uno.Collections.List<Fuse.Node> list) :865
void NodeListCache__Release_fn(::g::Uno::Collections::List* list)
{
    NodeListCache::Release(list);
}

uSStrong< ::g::Uno::Collections::List*> NodeListCache::_nodeListCache_;

// public static Uno.Collections.List<Fuse.Node> Acquire() [static] :854
::g::Uno::Collections::List* NodeListCache::Acquire()
{
    NodeListCache_typeof()->Init();
    ::g::Uno::Collections::List* ret1;

    if (uPtr(NodeListCache::_nodeListCache())->Count() > 0)
    {
        ::g::Uno::Collections::List* l = (::g::Uno::Collections::List__get_Item_fn(uPtr(NodeListCache::_nodeListCache()), uCRef<int>(uPtr(NodeListCache::_nodeListCache())->Count() - 1), &ret1), ret1);
        uPtr(NodeListCache::_nodeListCache())->RemoveAt(uPtr(NodeListCache::_nodeListCache())->Count() - 1);
        return l;
    }

    return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<Fuse.Node>*/]);
}

// public static void Release(Uno.Collections.List<Fuse.Node> list) [static] :865
void NodeListCache::Release(::g::Uno::Collections::List* list)
{
    NodeListCache_typeof()->Init();
    uPtr(list)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(NodeListCache::_nodeListCache()), list);
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(4521)
// -------------------------------------------------------

// public sealed class OrthographicFrustum :4521
// {
OrthographicFrustum_type* OrthographicFrustum_typeof()
{
    static uSStrong<OrthographicFrustum_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OrthographicFrustum);
    options.TypeSize = sizeof(OrthographicFrustum_type);
    type = (OrthographicFrustum_type*)uClassType::New("Fuse.OrthographicFrustum", options);
    type->fp_ctor_ = (void*)OrthographicFrustum__New1_fn;
    type->interface0.fp_GetProjectionTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetProjectionTransform_fn;
    type->interface0.fp_GetProjectionTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetProjectionTransformInverse_fn;
    type->interface0.fp_GetViewTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransform_fn;
    type->interface0.fp_GetViewTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransformInverse_fn;
    ::TYPES[54] = ::g::Uno::Float4x4_typeof();
    ::TYPES[36] = ::g::Fuse::IViewport_typeof();
    ::TYPES[74] = ::g::Uno::Float2_typeof();
    ::TYPES[55] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFrustum_typeof(), offsetof(OrthographicFrustum_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasLocalFromWorld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasOrigin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _localFromWorld), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _size), 0);
    return type;
}

// public generated OrthographicFrustum() :4521
void OrthographicFrustum__ctor__fn(OrthographicFrustum* __this)
{
    __this->ctor_();
}

// public float4x4 GetProjectionTransform(Fuse.IViewport viewport) :4562
void OrthographicFrustum__GetProjectionTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransform(viewport);
}

// public float4x4 GetProjectionTransformInverse(Fuse.IViewport viewport) :4575
void OrthographicFrustum__GetProjectionTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransformInverse(viewport);
}

// public float4x4 GetViewTransform(Fuse.IViewport viewport) :4567
void OrthographicFrustum__GetViewTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransform(viewport);
}

// public float4x4 GetViewTransformInverse(Fuse.IViewport viewport) :4580
void OrthographicFrustum__GetViewTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransformInverse(viewport);
}

// public float4x4 get_LocalFromWorld() :4554
void OrthographicFrustum__get_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalFromWorld();
}

// public void set_LocalFromWorld(float4x4 value) :4555
void OrthographicFrustum__set_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* value)
{
    __this->LocalFromWorld(*value);
}

// private float4x4 MatrixProjection(float2 viewSize) :4612
void OrthographicFrustum__MatrixProjection_fn(OrthographicFrustum* __this, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixProjection(*viewSize);
}

// private float4x4 MatrixProjectionInverse(float2 viewSize) :4617
void OrthographicFrustum__MatrixProjectionInverse_fn(OrthographicFrustum* __this, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixProjectionInverse(*viewSize);
}

// private float4x4 MatrixView(float2 origin, float2 viewSize) :4598
void OrthographicFrustum__MatrixView_fn(OrthographicFrustum* __this, ::g::Uno::Float2* origin, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixView(*origin, *viewSize);
}

// private float4x4 MatrixViewInverse(float2 origin, float2 viewSize) :4605
void OrthographicFrustum__MatrixViewInverse_fn(OrthographicFrustum* __this, ::g::Uno::Float2* origin, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixViewInverse(*origin, *viewSize);
}

// public generated OrthographicFrustum New() :4521
void OrthographicFrustum__New1_fn(OrthographicFrustum** __retval)
{
    *__retval = OrthographicFrustum::New1();
}

// public float2 get_Origin() :4527
void OrthographicFrustum__get_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Origin();
}

// public void set_Origin(float2 value) :4528
void OrthographicFrustum__set_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Origin(*value);
}

// public float2 get_Size() :4539
void OrthographicFrustum__get_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :4543
void OrthographicFrustum__set_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public generated OrthographicFrustum() [instance] :4521
void OrthographicFrustum::ctor_()
{
    _localFromWorld = ::g::Uno::Float4x4__Identity();
}

// public float4x4 GetProjectionTransform(Fuse.IViewport viewport) [instance] :4562
::g::Uno::Float4x4 OrthographicFrustum::GetProjectionTransform(uObject* viewport)
{
    return MatrixProjection(_hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[36/*Fuse.IViewport*/])));
}

// public float4x4 GetProjectionTransformInverse(Fuse.IViewport viewport) [instance] :4575
::g::Uno::Float4x4 OrthographicFrustum::GetProjectionTransformInverse(uObject* viewport)
{
    return MatrixProjectionInverse(_hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[36/*Fuse.IViewport*/])));
}

// public float4x4 GetViewTransform(Fuse.IViewport viewport) [instance] :4567
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransform(uObject* viewport)
{
    ::g::Uno::Float4x4 ts = MatrixView(_hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f), _hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[36/*Fuse.IViewport*/])));

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(LocalFromWorld(), ts);

    return ts;
}

// public float4x4 GetViewTransformInverse(Fuse.IViewport viewport) [instance] :4580
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransformInverse(uObject* viewport)
{
    ::g::Uno::Float4x4 ts = MatrixViewInverse(_hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f), _hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[36/*Fuse.IViewport*/])));

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(ts, ::g::Uno::Matrix::Invert2(LocalFromWorld()));

    return ts;
}

// public float4x4 get_LocalFromWorld() [instance] :4554
::g::Uno::Float4x4 OrthographicFrustum::LocalFromWorld()
{
    return _localFromWorld;
}

// public void set_LocalFromWorld(float4x4 value) [instance] :4555
void OrthographicFrustum::LocalFromWorld(::g::Uno::Float4x4 value)
{
    _localFromWorld = value;
    _hasLocalFromWorld = true;
}

// private float4x4 MatrixProjection(float2 viewSize) [instance] :4612
::g::Uno::Float4x4 OrthographicFrustum::MatrixProjection(::g::Uno::Float2 viewSize)
{
    return ::g::Fuse::Internal::FrustumMatrix::OrthoRH(viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

// private float4x4 MatrixProjectionInverse(float2 viewSize) [instance] :4617
::g::Uno::Float4x4 OrthographicFrustum::MatrixProjectionInverse(::g::Uno::Float2 viewSize)
{
    return ::g::Fuse::Internal::FrustumMatrix::OrthoRHInverse(viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

// private float4x4 MatrixView(float2 origin, float2 viewSize) [instance] :4598
::g::Uno::Float4x4 OrthographicFrustum::MatrixView(::g::Uno::Float2 origin, ::g::Uno::Float2 viewSize)
{
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((-viewSize.X / 2.0f) - origin.X, (-viewSize.Y / 2.0f) - origin.Y, -2.0f);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    return ::g::Uno::Matrix::Mul8(t, s);
}

// private float4x4 MatrixViewInverse(float2 origin, float2 viewSize) [instance] :4605
::g::Uno::Float4x4 OrthographicFrustum::MatrixViewInverse(::g::Uno::Float2 origin, ::g::Uno::Float2 viewSize)
{
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((viewSize.X / 2.0f) + origin.X, (viewSize.Y / 2.0f) + origin.Y, 2.0f);
    return ::g::Uno::Matrix::Mul8(s, t);
}

// public float2 get_Origin() [instance] :4527
::g::Uno::Float2 OrthographicFrustum::Origin()
{
    return _origin;
}

// public void set_Origin(float2 value) [instance] :4528
void OrthographicFrustum::Origin(::g::Uno::Float2 value)
{
    _origin = value;
    _hasOrigin = true;
}

// public float2 get_Size() [instance] :4539
::g::Uno::Float2 OrthographicFrustum::Size()
{
    return _size;
}

// public void set_Size(float2 value) [instance] :4543
void OrthographicFrustum::Size(::g::Uno::Float2 value)
{
    _size = value;
    _hasSize = true;
}

// public generated OrthographicFrustum New() [static] :4521
OrthographicFrustum* OrthographicFrustum::New1()
{
    OrthographicFrustum* obj1 = (OrthographicFrustum*)uNew(OrthographicFrustum_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6352)
// -------------------------------------------------------

// private sealed class TranslationModes.ParentSizeMode :6352
// {
TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof()
{
    static uSStrong<TranslationModes__ParentSizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__ParentSizeMode);
    options.TypeSize = sizeof(TranslationModes__ParentSizeMode_type);
    type = (TranslationModes__ParentSizeMode_type*)uClassType::New("Fuse.TranslationModes.ParentSizeMode", options);
    type->fp_ctor_ = (void*)TranslationModes__ParentSizeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__ParentSizeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__ParentSizeMode__get_Flags_fn;
    ::TYPES[86] = ::g::Fuse::Translation_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[110] = ::g::Fuse::Transform_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface1));
    return type;
}

// public generated ParentSizeMode() :6352
void TranslationModes__ParentSizeMode__ctor__fn(TranslationModes__ParentSizeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :6355
void TranslationModes__ParentSizeMode__get_Flags_fn(TranslationModes__ParentSizeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :6354
void TranslationModes__ParentSizeMode__GetAbsVector_fn(TranslationModes__ParentSizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated ParentSizeMode New() :6352
void TranslationModes__ParentSizeMode__New1_fn(TranslationModes__ParentSizeMode** __retval)
{
    *__retval = TranslationModes__ParentSizeMode::New1();
}

// public generated ParentSizeMode() [instance] :6352
void TranslationModes__ParentSizeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :6355
int TranslationModes__ParentSizeMode::Flags()
{
    return 2;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :6354
::g::Uno::Float3 TranslationModes__ParentSizeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Fuse::TranslationModes::RelativeToSize(uPtr(t)->Vector(), uPtr(uPtr(t)->RelativeNode())->Parent());
}

// public generated ParentSizeMode New() [static] :6352
TranslationModes__ParentSizeMode* TranslationModes__ParentSizeMode::New1()
{
    TranslationModes__ParentSizeMode* obj1 = (TranslationModes__ParentSizeMode*)uNew(TranslationModes__ParentSizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6280)
// -------------------------------------------------------

// public sealed class PlacedArgs :6280
// {
uType* PlacedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(PlacedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PlacedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::PlacedArgs, _HasPrev), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _NewPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _NewSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _PrevPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _PrevSize), 0);
    return type;
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :6288
void PlacedArgs__ctor_1_fn(PlacedArgs* __this, bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize)
{
    __this->ctor_1(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public generated bool get_HasPrev() :6282
void PlacedArgs__get_HasPrev_fn(PlacedArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :6282
void PlacedArgs__set_HasPrev_fn(PlacedArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :6288
void PlacedArgs__New2_fn(bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize, PlacedArgs** __retval)
{
    *__retval = PlacedArgs::New2(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public generated float2 get_NewPosition() :6286
void PlacedArgs__get_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewPosition();
}

// private generated void set_NewPosition(float2 value) :6286
void PlacedArgs__set_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewPosition(*value);
}

// public generated float2 get_NewSize() :6285
void PlacedArgs__get_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewSize();
}

// private generated void set_NewSize(float2 value) :6285
void PlacedArgs__set_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewSize(*value);
}

// public generated float2 get_PrevPosition() :6283
void PlacedArgs__get_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevPosition();
}

// private generated void set_PrevPosition(float2 value) :6283
void PlacedArgs__set_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevPosition(*value);
}

// public generated float2 get_PrevSize() :6284
void PlacedArgs__get_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevSize();
}

// private generated void set_PrevSize(float2 value) :6284
void PlacedArgs__set_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevSize(*value);
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [instance] :6288
void PlacedArgs::ctor_1(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    ctor_();
    HasPrev(hasPrev);
    PrevPosition(prevPosition);
    PrevSize(prevSize);
    NewSize(newSize);
    NewPosition(newPosition);
}

// public generated bool get_HasPrev() [instance] :6282
bool PlacedArgs::HasPrev()
{
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :6282
void PlacedArgs::HasPrev(bool value)
{
    _HasPrev = value;
}

// public generated float2 get_NewPosition() [instance] :6286
::g::Uno::Float2 PlacedArgs::NewPosition()
{
    return _NewPosition;
}

// private generated void set_NewPosition(float2 value) [instance] :6286
void PlacedArgs::NewPosition(::g::Uno::Float2 value)
{
    _NewPosition = value;
}

// public generated float2 get_NewSize() [instance] :6285
::g::Uno::Float2 PlacedArgs::NewSize()
{
    return _NewSize;
}

// private generated void set_NewSize(float2 value) [instance] :6285
void PlacedArgs::NewSize(::g::Uno::Float2 value)
{
    _NewSize = value;
}

// public generated float2 get_PrevPosition() [instance] :6283
::g::Uno::Float2 PlacedArgs::PrevPosition()
{
    return _PrevPosition;
}

// private generated void set_PrevPosition(float2 value) [instance] :6283
void PlacedArgs::PrevPosition(::g::Uno::Float2 value)
{
    _PrevPosition = value;
}

// public generated float2 get_PrevSize() [instance] :6284
::g::Uno::Float2 PlacedArgs::PrevSize()
{
    return _PrevSize;
}

// private generated void set_PrevSize(float2 value) [instance] :6284
void PlacedArgs::PrevSize(::g::Uno::Float2 value)
{
    _PrevSize = value;
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [static] :6288
PlacedArgs* PlacedArgs::New2(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    PlacedArgs* obj1 = (PlacedArgs*)uNew(PlacedArgs_typeof());
    obj1->ctor_1(hasPrev, prevPosition, newPosition, prevSize, newSize);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6305)
// -------------------------------------------------------

// public delegate void PlacedHandler(object sender, Fuse.PlacedArgs args) :6305
uDelegateType* PlacedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.PlacedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::PlacedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5062)
// -------------------------------------------------------

// public sealed class Properties :5062
// {
// static Properties() :5062
static void Properties__cctor__fn(uType* __type)
{
    Properties::NoValue_ = ::g::Uno::Object::New();
}

uType* Properties_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Properties);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Properties", options);
    type->fp_ctor_ = (void*)Properties__New1_fn;
    type->fp_cctor_ = Properties__cctor__fn;
    ::TYPES[132] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array());
    ::TYPES[113] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Properties, _handle), 0,
        Properties_typeof(), offsetof(::g::Fuse::Properties, _next), 0,
        uObject_typeof(), offsetof(::g::Fuse::Properties, _value), 0,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Properties::NoValue_, uFieldFlagsStatic);
    return type;
}

// public generated Properties() :5062
void Properties__ctor__fn(Properties* __this)
{
    __this->ctor_();
}

// public void AddToList(Fuse.PropertyHandle handle, object val) :5113
void Properties__AddToList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) :5196
void Properties__Clear_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle)
{
    __this->Clear(handle);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) :5203
void Properties__Clear1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val, bool* all)
{
    __this->Clear1(handle, val, *all);
}

// public static Fuse.PropertyHandle CreateHandle() :5068
void Properties__CreateHandle_fn(::g::Fuse::PropertyHandle** __retval)
{
    *__retval = Properties::CreateHandle();
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) :5179
void Properties__ForeachInList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    __this->ForeachInList(handle, action, state);
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) :5162
void Properties__ForeachInList1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    __this->ForeachInList1(handle, action, state);
}

// public object Get(Fuse.PropertyHandle handle) :5073
void Properties__Get_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** __retval)
{
    *__retval = __this->Get(handle);
}

// public generated Properties New() :5062
void Properties__New1_fn(Properties** __retval)
{
    *__retval = Properties::New1();
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) :5131
void Properties__RemoveFromList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->RemoveFromList(handle, val);
}

// public void Set(Fuse.PropertyHandle handle, object val) :5095
void Properties__Set_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->Set(handle, val);
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) :5080
void Properties__TryGet_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** val, bool* __retval)
{
    *__retval = __this->TryGet(handle, val);
}

uSStrong<uObject*> Properties::NoValue_;

// public generated Properties() [instance] :5062
void Properties::ctor_()
{
}

// public void AddToList(Fuse.PropertyHandle handle, object val) [instance] :5113
void Properties::AddToList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else if (_next == NULL)
    {
        _next = Properties::New1();
        uPtr(_next)->AddToList(handle, val);
    }
    else
        uPtr(_next)->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) [instance] :5196
void Properties::Clear(::g::Fuse::PropertyHandle* handle)
{
    Clear1(handle, Properties::NoValue(), true);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) [instance] :5203
void Properties::Clear1(::g::Fuse::PropertyHandle* handle, uObject* val, bool all)
{
    if (_handle == NULL)
        return;

    Properties* p = this;
    Properties* previous = NULL;

    while (p != NULL)
        if ((uPtr(p)->_handle == handle) && ((val == Properties::NoValue()) || ::g::Uno::Object::Equals(uPtr(val), uPtr(p)->_value)))
        {
            if (previous == NULL)
            {
                if (uPtr(p)->_next == NULL)
                {
                    uPtr(p)->_handle = NULL;
                    p->_value = NULL;
                    break;
                }
                else
                {
                    uPtr(p)->_handle = uPtr(uPtr(p)->_next)->_handle;
                    p->_value = uPtr(p->_next)->_value;
                    p->_next = uPtr(p->_next)->_next;

                    if (all)
                        continue;
                    else
                        break;
                }
            }
            else
            {
                uPtr(previous)->_next = uPtr(p)->_next;
                p = uPtr(p)->_next;

                if (all)
                    continue;
                else
                    break;
            }
        }
        else
        {
            previous = p;
            p = uPtr(p)->_next;
        }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) [instance] :5179
void Properties::ForeachInList(::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) [instance] :5162
void Properties::ForeachInList1(::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public object Get(Fuse.PropertyHandle handle) [instance] :5073
uObject* Properties::Get(::g::Fuse::PropertyHandle* handle)
{
    if (_handle == handle)
        return _value;

    if (_next != NULL)
        return uPtr(_next)->Get(handle);

    return NULL;
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) [instance] :5131
void Properties::RemoveFromList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    Clear1(handle, val, false);
}

// public void Set(Fuse.PropertyHandle handle, object val) [instance] :5095
void Properties::Set(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else if (_handle == handle)
        _value = val;
    else
    {
        if (_next == NULL)
            _next = Properties::New1();

        uPtr(_next)->Set(handle, val);
    }
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) [instance] :5080
bool Properties::TryGet(::g::Fuse::PropertyHandle* handle, uObject** val)
{
    if (_handle == handle)
    {
        *val = _value;
        return true;
    }

    if (_next != NULL)
        return uPtr(_next)->TryGet(handle, val);

    *val = NULL;
    return false;
}

// public static Fuse.PropertyHandle CreateHandle() [static] :5068
::g::Fuse::PropertyHandle* Properties::CreateHandle()
{
    Properties_typeof()->Init();
    return ::g::Fuse::PropertyHandle::New1();
}

// public generated Properties New() [static] :5062
Properties* Properties::New1()
{
    Properties* obj1 = (Properties*)uNew(Properties_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5057)
// -------------------------------------------------------

// public sealed class PropertyHandle :5057
// {
uType* PropertyHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PropertyHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PropertyHandle", options);
    type->fp_ctor_ = (void*)PropertyHandle__New1_fn;
    return type;
}

// internal PropertyHandle() :5059
void PropertyHandle__ctor__fn(PropertyHandle* __this)
{
    __this->ctor_();
}

// internal PropertyHandle New() :5059
void PropertyHandle__New1_fn(PropertyHandle** __retval)
{
    *__retval = PropertyHandle::New1();
}

// internal PropertyHandle() [instance] :5059
void PropertyHandle::ctor_()
{
}

// internal PropertyHandle New() [static] :5059
PropertyHandle* PropertyHandle::New1()
{
    PropertyHandle* obj1 = (PropertyHandle*)uNew(PropertyHandle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(3192)
// -------------------------------------------------------

// public enum PropertyState :3192
uEnumType* PropertyState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.PropertyState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NoValue", 0LL,
        "StyleValue", 1LL,
        "LocalValue", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(462)
// ------------------------------------------------------

// internal sealed class RenderTargetEntry :462
// {
uType* RenderTargetEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RenderTargetEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RenderTargetEntry", options);
    type->SetFields(0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLScissor), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLViewportPixelSize), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::RenderTargetEntry, RenderTarget), 0);
    return type;
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :469
void RenderTargetEntry__ctor__fn(RenderTargetEntry* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle)
{
    __this->ctor_(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :469
void RenderTargetEntry__New1_fn(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle, RenderTargetEntry** __retval)
{
    *__retval = RenderTargetEntry::New1(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [instance] :469
void RenderTargetEntry::ctor_(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    RenderTarget = rt;
    GLViewportPixelSize = viewportPixelSize;
    GLScissor = glScissor;
    GLFramebuffer = handle;
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [static] :469
RenderTargetEntry* RenderTargetEntry::New1(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    RenderTargetEntry* obj1 = (RenderTargetEntry*)uNew(RenderTargetEntry_typeof());
    obj1->ctor_(rt, viewportPixelSize, glScissor, handle);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2812)
// -------------------------------------------------------

// public sealed class RequestBringIntoViewArgs :2812
// {
uType* RequestBringIntoViewArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(RequestBringIntoViewArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RequestBringIntoViewArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::RequestBringIntoViewArgs, _Node), 0);
    return type;
}

// public RequestBringIntoViewArgs(Fuse.Node elm) :2815
void RequestBringIntoViewArgs__ctor_1_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node* elm)
{
    __this->ctor_1(elm);
}

// public RequestBringIntoViewArgs New(Fuse.Node elm) :2815
void RequestBringIntoViewArgs__New2_fn(::g::Fuse::Node* elm, RequestBringIntoViewArgs** __retval)
{
    *__retval = RequestBringIntoViewArgs::New2(elm);
}

// public generated Fuse.Node get_Node() :2814
void RequestBringIntoViewArgs__get_Node_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private generated void set_Node(Fuse.Node value) :2814
void RequestBringIntoViewArgs__set_Node_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// public RequestBringIntoViewArgs(Fuse.Node elm) [instance] :2815
void RequestBringIntoViewArgs::ctor_1(::g::Fuse::Node* elm)
{
    ctor_();
    Node(elm);
}

// public generated Fuse.Node get_Node() [instance] :2814
::g::Fuse::Node* RequestBringIntoViewArgs::Node()
{
    return _Node;
}

// private generated void set_Node(Fuse.Node value) [instance] :2814
void RequestBringIntoViewArgs::Node(::g::Fuse::Node* value)
{
    _Node = value;
}

// public RequestBringIntoViewArgs New(Fuse.Node elm) [static] :2815
RequestBringIntoViewArgs* RequestBringIntoViewArgs::New2(::g::Fuse::Node* elm)
{
    RequestBringIntoViewArgs* obj1 = (RequestBringIntoViewArgs*)uNew(RequestBringIntoViewArgs_typeof());
    obj1->ctor_1(elm);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2821)
// -------------------------------------------------------

// public delegate void RequestBringIntoViewHandler(object sender, Fuse.RequestBringIntoViewArgs args) :2821
uDelegateType* RequestBringIntoViewHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.RequestBringIntoViewHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::RequestBringIntoViewArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(4124)
// -------------------------------------------------------

// private enum Node.RootStage :4124
uEnumType* Node__RootStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Node.RootStage", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "None", 0LL,
        "Rooting", 1LL,
        "Styles", 2LL,
        "Behaviors", 3LL,
        "Children", 4LL,
        "LocalRooting", 5LL,
        "LocalRooted", 6LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(232)
// ------------------------------------------------------

// private enum Behavior.RootStatus :232
uEnumType* Behavior__RootStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Behavior.RootStatus", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Unrooted", 0LL,
        "Rooting", 1LL,
        "Rooted", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(1747)
// -------------------------------------------------------

// public sealed class RootViewport :1747
// {
// static RootViewport() :1747
static void RootViewport__cctor_1_fn(uType* __type)
{
    RootViewport::_defaultDensity_ = -1.0f;
}

RootViewport_type* RootViewport_typeof()
{
    static uSStrong<RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootViewport);
    options.TypeSize = sizeof(RootViewport_type);
    type = (RootViewport_type*)uClassType::New("Fuse.RootViewport", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_cctor_ = RootViewport__cctor_1_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))RootViewport__GetSubNode_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))RootViewport__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))RootViewport__OnHitTest_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))RootViewport__get_SubNodeCount_fn;
    type->interface0.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))RootViewport__PointToWorldRay_fn;
    type->interface0.fp_get_PointDensity = (void(*)(uObject*, float*))RootViewport__get_PointDensity1_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))RootViewport__get_Size_fn;
    type->interface0.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ViewProjectionTransform_fn;
    type->interface0.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ViewProjectionTransformInverse_fn;
    ::STRINGS[57] = uString::Const("A Window cannot have zero density.");
    ::TYPES[137] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[78] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[36] = ::g::Fuse::IViewport_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::Application_typeof();
    ::TYPES[0] = ::g::Fuse::AppBase_typeof();
    ::TYPES[55] = ::g::Uno::Float_typeof();
    ::TYPES[47] = ::g::Uno::Int2_typeof();
    ::TYPES[56] = ::g::Fuse::FrustumViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IViewport_typeof(), offsetof(RootViewport_type, interface0));
    type->SetFields(51,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::RootViewport, _frustumViewport), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _pointDensity), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::RootViewport, _root), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::RootViewport, Frustum), 0,
        ::g::Uno::Platform::Window_typeof(), offsetof(::g::Fuse::RootViewport, Window), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::RootViewport::_defaultDensity_, uFieldFlagsStatic);
    return type;
}

// public RootViewport(Uno.Platform.Window window, [float pointDensity]) :1751
void RootViewport__ctor_1_fn(RootViewport* __this, ::g::Uno::Platform::Window* window, float* pointDensity)
{
    __this->ctor_1(window, *pointDensity);
}

// public Fuse.Node get_Content() :1767
void RootViewport__get_Content_fn(RootViewport* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Content();
}

// public void set_Content(Fuse.Node value) :1768
void RootViewport__set_Content_fn(RootViewport* __this, ::g::Fuse::Node* value)
{
    __this->Content(value);
}

// internal static float get_DefaultDensity() :1827
void RootViewport__get_DefaultDensity_fn(float* __retval)
{
    *__retval = RootViewport::DefaultDensity();
}

// public override sealed Fuse.Node GetSubNode(int i) :1880
void RootViewport__GetSubNode_fn(RootViewport* __this, int* i, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->Content(), void();
}

// public RootViewport New(Uno.Platform.Window window, [float pointDensity]) :1751
void RootViewport__New1_fn(::g::Uno::Platform::Window* window, float* pointDensity, RootViewport** __retval)
{
    *__retval = RootViewport::New1(window, *pointDensity);
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, float2 availableSize, Fuse.SizeFlags availSet) :1882
void RootViewport__OnArrangeMarginBox_fn(RootViewport* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 availableSize_ = *availableSize;
    int availSet_ = *availSet;

    if (__this->Content() == NULL)
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    return *__retval = uPtr(__this->Content())->ArrangeMarginBox(position_, availableSize_, availSet_), void();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :1785
void RootViewport__OnGotFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :1809
void RootViewport__OnHitTest_fn(RootViewport* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->Content() != NULL)
        uPtr(__this->Content())->HitTest(htc);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :1797
void RootViewport__OnLostFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// private void OnResized(object s, object a) :1815
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a)
{
    __this->OnResized(s, a);
}

// public new float get_PointDensity() :1844
void RootViewport__get_PointDensity1_fn(RootViewport* __this, float* __retval)
{
    *__retval = __this->PointDensity1();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) :1873
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pixelPos);
}

// public float2 get_Size() :1851
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public override sealed int get_SubNodeCount() :1878
void RootViewport__get_SubNodeCount_fn(RootViewport* __this, int* __retval)
{
    return *__retval = (__this->Content() != NULL) ? 1 : 0, void();
}

// public float4x4 get_ViewProjectionTransform() :1864
void RootViewport__get_ViewProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :1866
void RootViewport__get_ViewProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

float RootViewport::_defaultDensity_;

// public RootViewport(Uno.Platform.Window window, [float pointDensity]) [instance] :1751
void RootViewport::ctor_1(::g::Uno::Platform::Window* window, float pointDensity)
{
    Frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    ctor_();
    _pointDensity = pointDensity;
    Window = window;
    uPtr(Window)->add_GotFocus(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)RootViewport__OnGotFocus_fn, this));
    uPtr(Window)->add_LostFocus(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)RootViewport__OnLostFocus_fn, this));
    uPtr(Window)->add_Resized(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)RootViewport__OnResized_fn, this));
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
    MarkRooted();
}

// public Fuse.Node get_Content() [instance] :1767
::g::Fuse::Node* RootViewport::Content()
{
    return _root;
}

// public void set_Content(Fuse.Node value) [instance] :1768
void RootViewport::Content(::g::Fuse::Node* value)
{
    if (_root != value)
    {
        if (_root != NULL)
            uPtr(_root)->OnRemoved(this);

        _root = value;

        if (_root != NULL)
            uPtr(_root)->OnAdded(this);

        InvalidateLayout(2);
    }
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :1785
void RootViewport::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    try
    {
        ::g::Fuse::Input::Focus::OnWindowGotFocus(sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :1797
void RootViewport::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    try
    {
        ::g::Fuse::Input::Focus::OnWindowLostFocus(sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnResized(object s, object a) [instance] :1815
void RootViewport::OnResized(uObject* s, uObject* a)
{
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
}

// public new float get_PointDensity() [instance] :1844
float RootViewport::PointDensity1()
{
    return (_pointDensity != -1.0f) ? _pointDensity : RootViewport::DefaultDensity();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) [instance] :1873
::g::Uno::Geometry::Ray RootViewport::PointToWorldRay(::g::Uno::Float2 pixelPos)
{
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pixelPos);
}

// public float2 get_Size() [instance] :1851
::g::Uno::Float2 RootViewport::Size()
{
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(Window)->ClientSize().X, (float)uPtr(Window)->ClientSize().Y), PointDensity1());
}

// public float4x4 get_ViewProjectionTransform() [instance] :1864
::g::Uno::Float4x4 RootViewport::ViewProjectionTransform()
{
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :1866
::g::Uno::Float4x4 RootViewport::ViewProjectionTransformInverse()
{
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public RootViewport New(Uno.Platform.Window window, [float pointDensity]) [static] :1751
RootViewport* RootViewport::New1(::g::Uno::Platform::Window* window, float pointDensity)
{
    RootViewport* obj1 = (RootViewport*)uNew(RootViewport_typeof());
    obj1->ctor_1(window, pointDensity);
    return obj1;
}

// internal static float get_DefaultDensity() [static] :1827
float RootViewport::DefaultDensity()
{
    RootViewport_typeof()->Init();

    if (RootViewport::_defaultDensity() < 0.0f)
    {
        ::Xli::Window* wnd = ::g::Uno::Runtime::Implementation::Internal::WindowHelpers::GetPlatformWindowHandle(uPtr(::g::Fuse::AppBase::Current1())->Window());
        RootViewport::_defaultDensity() = ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetDensity(wnd);

        if (RootViewport::_defaultDensity() == 0.0f)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[57/*"A Window ca...*/]));
    }

    return RootViewport::_defaultDensity();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6093)
// -------------------------------------------------------

// public sealed class Rotation :6093
// {
::g::Fuse::Transform_type* Rotation_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Rotation);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Rotation", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Rotation__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Rotation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Rotation__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Rotation__PrependTo_fn;
    ::TYPES[104] = ::g::Uno::Float3_typeof();
    type->SetFields(4,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Rotation, _euler), 0);
    return type;
}

// public generated Rotation() :6093
void Rotation__ctor_1_fn(Rotation* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :6180
void Rotation__AppendTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;

    if (__this->HasRotation())
        uPtr(m)->AppendRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(::g::Uno::Float3__op_Multiply1(__this->_euler, weight_)));
}

// public float get_Degrees() :6125
void Rotation__get_Degrees_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :6126
void Rotation__set_Degrees_fn(Rotation* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesZ() :6131
void Rotation__get_DegreesZ_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :6132
void Rotation__set_DegreesZ_fn(Rotation* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public float3 get_EulerAngle() :6098
void Rotation__get_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EulerAngle();
}

// public void set_EulerAngle(float3 value) :6099
void Rotation__set_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* value)
{
    __this->EulerAngle(*value);
}

// private bool get_HasRotation() :6173
void Rotation__get_HasRotation_fn(Rotation* __this, bool* __retval)
{
    *__retval = __this->HasRotation();
}

// public override sealed bool get_IsFlat() :6194
void Rotation__get_IsFlat_fn(Rotation* __this, bool* __retval)
{
    return *__retval = (::g::Uno::Math::Abs1(__this->_euler.X) < 1e-05f) && (::g::Uno::Math::Abs1(__this->_euler.Y) < 1e-05f), void();
}

// public generated Rotation New() :6093
void Rotation__New1_fn(Rotation** __retval)
{
    *__retval = Rotation::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :6186
void Rotation__PrependTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m)
{
    if (__this->HasRotation())
        uPtr(m)->PrependRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(__this->_euler));
}

// public generated Rotation() [instance] :6093
void Rotation::ctor_1()
{
    ctor_();
}

// public float get_Degrees() [instance] :6125
float Rotation::Degrees()
{
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :6126
void Rotation::Degrees(float value)
{
    DegreesZ(value);
}

// public float get_DegreesZ() [instance] :6131
float Rotation::DegreesZ()
{
    return ::g::Uno::Math::RadiansToDegrees1(_euler.Z);
}

// public void set_DegreesZ(float value) [instance] :6132
void Rotation::DegreesZ(float value)
{
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.Z != r)
    {
        _euler.Z = r;
        OnMatrixChanged();
    }
}

// public float3 get_EulerAngle() [instance] :6098
::g::Uno::Float3 Rotation::EulerAngle()
{
    return _euler;
}

// public void set_EulerAngle(float3 value) [instance] :6099
void Rotation::EulerAngle(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3::op_Inequality(_euler, value))
    {
        _euler = value;
        OnMatrixChanged();
    }
}

// private bool get_HasRotation() [instance] :6173
bool Rotation::HasRotation()
{
    return ((::g::Uno::Math::Abs1(_euler.X) + ::g::Uno::Math::Abs1(_euler.Y)) + ::g::Uno::Math::Abs1(_euler.Z)) > 1e-05f;
}

// public generated Rotation New() [static] :6093
Rotation* Rotation::New1()
{
    Rotation* obj1 = (Rotation*)uNew(Rotation_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5275)
// -------------------------------------------------------

// public sealed class Scaling :5275
// {
::g::Fuse::Transform_type* Scaling_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scaling);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Scaling", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Scaling__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Scaling__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Scaling__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Scaling__PrependTo_fn;
    ::TYPES[138] = ::g::Fuse::ScalingModes_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[104] = ::g::Uno::Float3_typeof();
    type->SetFields(4,
        ::g::Fuse::IScalingMode_typeof(), offsetof(::g::Fuse::Scaling, _relativeTo), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Scaling, _vector), 0);
    return type;
}

// public generated Scaling() :5275
void Scaling__ctor_1_fn(Scaling* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :5351
void Scaling__AppendTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->AppendScale1(::g::Uno::Math::Lerp4(::g::Uno::Float3__New1(1.0f), v, weight_));
}

// private float3 get_EffectiveVector() :5338
void Scaling__get_EffectiveVector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EffectiveVector();
}

// public override sealed bool get_IsFlat() :5367
void Scaling__get_IsFlat_fn(Scaling* __this, bool* __retval)
{
    return *__retval = true, void();
}

// private bool IsIdentity(float3 v) :5344
void Scaling__IsIdentity_fn(Scaling* __this, ::g::Uno::Float3* v, bool* __retval)
{
    *__retval = __this->IsIdentity(*v);
}

// public generated Scaling New() :5275
void Scaling__New1_fn(Scaling** __retval)
{
    *__retval = Scaling::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :5358
void Scaling__PrependTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->PrependScale1(v);
}

// public Fuse.IScalingMode get_RelativeTo() :5280
void Scaling__get_RelativeTo_fn(Scaling* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.IScalingMode value) :5281
void Scaling__set_RelativeTo_fn(Scaling* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public float3 get_Vector() :5307
void Scaling__get_Vector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :5308
void Scaling__set_Vector_fn(Scaling* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public generated Scaling() [instance] :5275
void Scaling::ctor_1()
{
    _relativeTo = ::g::Fuse::ScalingModes::Identity();
    _vector = ::g::Uno::Float3__New1(1.0f);
    ctor_();
}

// private float3 get_EffectiveVector() [instance] :5338
::g::Uno::Float3 Scaling::EffectiveVector()
{
    return ::g::Fuse::IScalingMode::GetScaleVector(uInterface(uPtr(_relativeTo), ::TYPES[139/*Fuse.IScalingMode*/]), this);
}

// private bool IsIdentity(float3 v) [instance] :5344
bool Scaling::IsIdentity(::g::Uno::Float3 v)
{
    return ((::g::Uno::Math::Abs1(v.X - 1.0f) < 1e-05f) && (::g::Uno::Math::Abs1(v.Y - 1.0f) < 1e-05f)) && (::g::Uno::Math::Abs1(v.Z - 1.0f) < 1e-05f);
}

// public Fuse.IScalingMode get_RelativeTo() [instance] :5280
uObject* Scaling::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.IScalingMode value) [instance] :5281
void Scaling::RelativeTo(uObject* value)
{
    if (_relativeTo == value)
        return;

    _relativeTo = value;
    OnMatrixChanged();
}

// public float3 get_Vector() [instance] :5307
::g::Uno::Float3 Scaling::Vector()
{
    return _vector;
}

// public void set_Vector(float3 value) [instance] :5308
void Scaling::Vector(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3::op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged();
    }
}

// public generated Scaling New() [static] :5275
Scaling* Scaling::New1()
{
    Scaling* obj1 = (Scaling*)uNew(Scaling_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5264)
// -------------------------------------------------------

// public static class ScalingModes :5264
// {
// static ScalingModes() :5264
static void ScalingModes__cctor__fn(uType* __type)
{
    ScalingModes::Identity_ = (uObject*)ScalingModes__IdentityMode::New1();
}

uClassType* ScalingModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ScalingModes", options);
    type->fp_cctor_ = ScalingModes__cctor__fn;
    ::TYPES[139] = ::g::Fuse::IScalingMode_typeof();
    type->SetFields(0,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::ScalingModes::Identity_, uFieldFlagsStatic);
    return type;
}

uSStrong<uObject*> ScalingModes::Identity_;
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6199)
// -------------------------------------------------------

// public sealed class Shear :6199
// {
::g::Fuse::Transform_type* Shear_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Shear);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Shear", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Shear__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Shear__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Shear__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Shear__PrependTo_fn;
    ::TYPES[74] = ::g::Uno::Float2_typeof();
    type->SetFields(4,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shear, _vector), 0);
    return type;
}

// public generated Shear() :6199
void Shear__ctor_1_fn(Shear* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :6253
void Shear__AppendTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float2 v = ::g::Uno::Float2__op_Multiply1(__this->Vector(), weight_);
    uPtr(m)->AppendShear(v.X, v.Y);
}

// public override sealed bool get_IsFlat() :6267
void Shear__get_IsFlat_fn(Shear* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated Shear New() :6199
void Shear__New1_fn(Shear** __retval)
{
    *__retval = Shear::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :6259
void Shear__PrependTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float2 v = __this->Vector();
    uPtr(m)->PrependShear(v.X, v.Y);
}

// public float2 get_Vector() :6204
void Shear__get_Vector_fn(Shear* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :6205
void Shear__set_Vector_fn(Shear* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public generated Shear() [instance] :6199
void Shear::ctor_1()
{
    ctor_();
}

// public float2 get_Vector() [instance] :6204
::g::Uno::Float2 Shear::Vector()
{
    return _vector;
}

// public void set_Vector(float2 value) [instance] :6205
void Shear::Vector(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2::op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged();
    }
}

// public generated Shear New() [static] :6199
Shear* Shear::New1()
{
    Shear* obj1 = (Shear*)uNew(Shear_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(2773)
// -------------------------------------------------------

// public enum SizeFlags :2773
uEnumType* SizeFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.SizeFlags", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "None", 0LL,
        "X", 1LL,
        "Y", 2LL,
        "Both", 3LL,
        "SizeMask", 3LL,
        "Temporary", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6346)
// -------------------------------------------------------

// private sealed class TranslationModes.SizeMode :6346
// {
TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof()
{
    static uSStrong<TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__SizeMode);
    options.TypeSize = sizeof(TranslationModes__SizeMode_type);
    type = (TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.SizeMode", options);
    type->fp_ctor_ = (void*)TranslationModes__SizeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__SizeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__SizeMode__get_Flags_fn;
    ::TYPES[86] = ::g::Fuse::Translation_typeof();
    ::TYPES[110] = ::g::Fuse::Transform_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface1));
    return type;
}

// public generated SizeMode() :6346
void TranslationModes__SizeMode__ctor__fn(TranslationModes__SizeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :6349
void TranslationModes__SizeMode__get_Flags_fn(TranslationModes__SizeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :6348
void TranslationModes__SizeMode__GetAbsVector_fn(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated SizeMode New() :6346
void TranslationModes__SizeMode__New1_fn(TranslationModes__SizeMode** __retval)
{
    *__retval = TranslationModes__SizeMode::New1();
}

// public generated SizeMode() [instance] :6346
void TranslationModes__SizeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :6349
int TranslationModes__SizeMode::Flags()
{
    return 1;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :6348
::g::Uno::Float3 TranslationModes__SizeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Fuse::TranslationModes::RelativeToSize(uPtr(t)->Vector(), uPtr(t)->RelativeNode());
}

// public generated SizeMode New() [static] :6346
TranslationModes__SizeMode* TranslationModes__SizeMode::New1()
{
    TranslationModes__SizeMode* obj1 = (TranslationModes__SizeMode*)uNew(TranslationModes__SizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6604)
// -------------------------------------------------------

// internal sealed class Stage :6604
// {
uType* Stage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Stage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Stage", options);
    ::TYPES[140] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof());
    ::TYPES[141] = ::g::Fuse::UpdateListener_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Stage, HasListenersRemoved), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, Listeners), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, Onces), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, OncesPending), 0,
        ::g::Fuse::UpdateStage_typeof(), offsetof(::g::Fuse::Stage, UpdateStage), 0);
    return type;
}

// public Stage(Fuse.UpdateStage _updateStage) :6614
void Stage__ctor__fn(Stage* __this, int* _updateStage)
{
    __this->ctor_(*_updateStage);
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) :6620
void Stage__Insert_fn(Stage* __this, ::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    __this->Insert(list, us);
}

// public Stage New(Fuse.UpdateStage _updateStage) :6614
void Stage__New1_fn(int* _updateStage, Stage** __retval)
{
    *__retval = Stage::New1(*_updateStage);
}

// public Stage(Fuse.UpdateStage _updateStage) [instance] :6614
void Stage::ctor_(int _updateStage)
{
    Listeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[140/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    Onces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[140/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    OncesPending = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[140/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    UpdateStage = _updateStage;
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) [instance] :6620
void Stage::Insert(::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    ::g::Fuse::UpdateListener* ret2;

    for (int i = uPtr(list)->Count(); i > 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i - 1), &ret2), ret2))->sequence <= uPtr(us)->sequence)
        {
            ::g::Uno::Collections::List__Insert_fn(uPtr(list), uCRef<int>(i), us);
            return;
        }

    ::g::Uno::Collections::List__Insert_fn(list, uCRef<int>(0), us);
}

// public Stage New(Fuse.UpdateStage _updateStage) [static] :6614
Stage* Stage::New1(int _updateStage)
{
    Stage* obj1 = (Stage*)uNew(Stage_typeof());
    obj1->ctor_(_updateStage);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5757)
// -------------------------------------------------------

// public class Style :5757
// {
Style_type* Style_typeof()
{
    static uSStrong<Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Style);
    options.TypeSize = sizeof(Style_type);
    type = (Style_type*)uClassType::New("Fuse.Style", options);
    type->fp_ctor_ = (void*)Style__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))Style__Apply_fn;
    ::TYPES[142] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[143] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof());
    ::TYPES[111] = ::g::Uno::UX::Resource_typeof();
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[66] = ::g::Uno::Action_typeof();
    ::TYPES[115] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[116] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[117] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[144] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(Style_typeof());
    ::TYPES[124] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[125] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[94] = ::g::Uno::Collections::IList_typeof()->MakeType(Style_typeof());
    ::TYPES[145] = ::g::Uno::Collections::List_typeof()->MakeType(Style_typeof());
    ::TYPES[146] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof());
    ::TYPES[147] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(Style_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), offsetof(::g::Fuse::Style, _resources), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(Style_typeof()), offsetof(::g::Fuse::Style, _styles), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof()), offsetof(::g::Fuse::Style, _templates), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Style, AddedByStyle), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Style, TemplatesChanged1), 0);
    return type;
}

// public generated Style() :5757
void Style__ctor__fn(Style* __this)
{
    __this->ctor_();
}

// public bool Apply(object target) :5810
void Style__Apply_fn(Style* __this, uObject* target, bool* __retval)
{
    *__retval = __this->Apply(target);
}

// public bool get_HasResources() :5823
void Style__get_HasResources_fn(Style* __this, bool* __retval)
{
    *__retval = __this->HasResources();
}

// public generated Style New() :5757
void Style__New1_fn(Style** __retval)
{
    *__retval = Style::New1();
}

// private void OnResourceChanged(Uno.UX.Resource r) :5866
void Style__OnResourceChanged_fn(Style* __this, ::g::Uno::UX::Resource* r)
{
    __this->OnResourceChanged(r);
}

// private void OnTemplateAdded(Uno.UX.ITemplate tpl) :5785
void Style__OnTemplateAdded_fn(Style* __this, uObject* tpl)
{
    __this->OnTemplateAdded(tpl);
}

// private void OnTemplateRemoved(Uno.UX.ITemplate tpl) :5793
void Style__OnTemplateRemoved_fn(Style* __this, uObject* tpl)
{
    __this->OnTemplateRemoved(tpl);
}

// private void OnTemplatesChanged() :5800
void Style__OnTemplatesChanged_fn(Style* __this)
{
    __this->OnTemplatesChanged();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :5828
void Style__get_Resources_fn(Style* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// private Uno.Collections.IList<Fuse.Style> get_Styles() :5777
void Style__get_Styles_fn(Style* __this, uObject** __retval)
{
    *__retval = __this->Styles();
}

// public Uno.Collections.IList<Uno.UX.ITemplate> get_Templates() :5766
void Style__get_Templates_fn(Style* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// internal generated void add_TemplatesChanged(Uno.Action value) :5759
void Style__add_TemplatesChanged_fn(Style* __this, uDelegate* value)
{
    __this->add_TemplatesChanged(value);
}

// internal generated void remove_TemplatesChanged(Uno.Action value) :5759
void Style__remove_TemplatesChanged_fn(Style* __this, uDelegate* value)
{
    __this->remove_TemplatesChanged(value);
}

// public bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :5837
void Style__TryGetResource_fn(Style* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    *__retval = __this->TryGetResource(key, acceptor, resource);
}

// public generated Style() [instance] :5757
void Style::ctor_()
{
}

// public bool Apply(object target) [instance] :5810
bool Style::Apply(uObject* target)
{
    uObject* ret5;

    if (_templates != NULL)

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_templates), ::TYPES[142/*Uno.Collections.ICollection<Uno.UX.ITemplate>*/])); (i--) > 0; )
            if (!::g::Uno::UX::ITemplate::Apply(uInterface(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_templates), ::TYPES[143/*Uno.Collections.IList<Uno.UX.ITemplate>*/]), uCRef<int>(i), &ret5), ret5)), ::g::Uno::UX::ITemplate_typeof()), target))
                return false;

    return true;
}

// public bool get_HasResources() [instance] :5823
bool Style::HasResources()
{
    return (_resources != NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_resources), ::TYPES[115/*Uno.Collections.ICollection<Uno.UX.Resource>*/])) > 0);
}

// private void OnResourceChanged(Uno.UX.Resource r) [instance] :5866
void Style::OnResourceChanged(::g::Uno::UX::Resource* r)
{
    ::g::Fuse::Resources::ResourceRegistry::NotifyResourceChanged(uPtr(r)->Key());
}

// private void OnTemplateAdded(Uno.UX.ITemplate tpl) [instance] :5785
void Style::OnTemplateAdded(uObject* tpl)
{
    Style* s = uAs<Style*>(tpl, Style_typeof());

    if (s != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/]), s);

    OnTemplatesChanged();
}

// private void OnTemplateRemoved(Uno.UX.ITemplate tpl) [instance] :5793
void Style::OnTemplateRemoved(uObject* tpl)
{
    bool ret6;
    Style* s = uAs<Style*>(tpl, Style_typeof());

    if (s != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Styles()), ::TYPES[93/*Uno.Collections.ICollection<Fuse.Style>*/]), s, &ret6);
}

// private void OnTemplatesChanged() [instance] :5800
void Style::OnTemplatesChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TemplatesChanged1, NULL))
        uPtr(TemplatesChanged1)->InvokeVoid();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :5828
uObject* Style::Resources()
{
    if (_resources == NULL)
        _resources = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[124/*Uno.Collections.ObservableList<Uno.UX.Resource>*/], uDelegate::New(::TYPES[125/*Uno.Action<Uno.UX.Resource>*/], (void*)Style__OnResourceChanged_fn, this), uDelegate::New(::TYPES[125/*Uno.Action<Uno.UX.Resource>*/], (void*)Style__OnResourceChanged_fn, this)));

    return _resources;
}

// private Uno.Collections.IList<Fuse.Style> get_Styles() [instance] :5777
uObject* Style::Styles()
{
    uObject* ind3 = _styles;
    return (ind3 != NULL) ? ind3 : (uObject*)(_styles = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[145/*Uno.Collections.List<Fuse.Style>*/])));
}

// public Uno.Collections.IList<Uno.UX.ITemplate> get_Templates() [instance] :5766
uObject* Style::Templates()
{
    uObject* ind2 = _templates;
    return (ind2 != NULL) ? ind2 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[146/*Uno.Collections.ObservableList<Uno.UX.ITemplate>*/], uDelegate::New(::TYPES[147/*Uno.Action<Uno.UX.ITemplate>*/], (void*)Style__OnTemplateAdded_fn, this), uDelegate::New(::TYPES[147/*Uno.Action<Uno.UX.ITemplate>*/], (void*)Style__OnTemplateRemoved_fn, this))));
}

// internal generated void add_TemplatesChanged(Uno.Action value) [instance] :5759
void Style::add_TemplatesChanged(uDelegate* value)
{
    TemplatesChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TemplatesChanged1, value), ::TYPES[66/*Uno.Action*/]);
}

// internal generated void remove_TemplatesChanged(Uno.Action value) [instance] :5759
void Style::remove_TemplatesChanged(uDelegate* value)
{
    TemplatesChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TemplatesChanged1, value), ::TYPES[66/*Uno.Action*/]);
}

// public bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) [instance] :5837
bool Style::TryGetResource(uString* key, uDelegate* acceptor, uObject** resource)
{
    ::g::Uno::UX::Resource* ret7;
    bool ret8;
    Style* ret9;

    if (HasResources())
    {
        uObject* resources = Resources();

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[115/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); i++)
        {
            ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[116/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret7), ret7);

            if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key) && (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret8, 1, (uObject*)uPtr(r)->Value()), ret8)))
            {
                *resource = uPtr(r)->Value();
                return true;
            }
        }
    }

    if (_styles != NULL)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_styles), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(Style_typeof()))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            Style* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[144/*Uno.Collections.IEnumerator<Fuse.Style>*/]), &ret9), ret9);

            if (uPtr(s)->TryGetResource(key, acceptor, resource))
                return true;
        }

    *resource = NULL;
    return false;
}

// public generated Style New() [static] :5757
Style* Style::New1()
{
    Style* obj4 = (Style*)uNew(Style_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5413)
// -------------------------------------------------------

// public abstract class StyleProperty :5413
// {
StyleProperty_type* StyleProperty_typeof()
{
    static uSStrong<StyleProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StyleProperty);
    options.TypeSize = sizeof(StyleProperty_type);
    type = (StyleProperty_type*)uClassType::New("Fuse.StyleProperty", options);
    ::TYPES[148] = ::g::Uno::Collections::List_typeof()->MakeType(StyleProperty_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::StyleProperty::_propertyEnum_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(StyleProperty_typeof()), (uintptr_t)&::g::Fuse::StyleProperty::All_, uFieldFlagsStatic);
    return type;
}

// internal StyleProperty() :5441
void StyleProperty__ctor__fn(StyleProperty* __this)
{
    __this->ctor_();
}

// public static void ResetAllStyle(Fuse.Node n) :5428
void StyleProperty__ResetAllStyle_fn(::g::Fuse::Node* n)
{
    StyleProperty::ResetAllStyle(n);
}

int StyleProperty::_propertyEnum_;
uSStrong< ::g::Uno::Collections::List*> StyleProperty::All_;

// internal StyleProperty() [instance] :5441
void StyleProperty::ctor_()
{
    if (StyleProperty::All() == NULL)
        StyleProperty::All() = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[148/*Uno.Collections.List<Fuse.StyleProperty>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(StyleProperty::All()), this);
}

// public static void ResetAllStyle(Fuse.Node n) [static] :5428
void StyleProperty::ResetAllStyle(::g::Fuse::Node* n)
{
    StyleProperty* ret2;

    if (StyleProperty::All() != NULL)

        for (int i = 0; i < uPtr(StyleProperty::All())->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StyleProperty::All()), uCRef<int>(i), &ret2), ret2))->ResetStyleFor(n);
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5449)
// -------------------------------------------------------

// public class StyleProperty<TOwner, T> :5449
// {
::g::Fuse::StyleProperty_type* StyleProperty1_typeof()
{
    static uSStrong< ::g::Fuse::StyleProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(StyleProperty1);
    options.TypeSize = sizeof(::g::Fuse::StyleProperty_type);
    type = (::g::Fuse::StyleProperty_type*)uClassType::New("Fuse.StyleProperty`2", options);
    type->SetBase(::g::Fuse::StyleProperty_typeof());
    type->fp_ResetStyleFor = (void(*)(::g::Fuse::StyleProperty*, ::g::Fuse::Node*))StyleProperty1__ResetStyleFor_fn;
    ::STRINGS[58] = uString::Const("Style property - must provide getter and setter as a pair");
    ::TYPES[149] = ::g::Fuse::StyleProperty_typeof();
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[150] = ::g::Uno::Func1_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[151] = ::g::Uno::Action1_typeof();
    ::TYPES[134] = ::g::Uno::Action2_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[150/*Uno.Func`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[151/*Uno.Action`1*/]->MakeType(type->T(0)),
        ::TYPES[134/*Uno.Action`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::StyleProperty1, _changedCallback), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::StyleProperty1, _getter), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::StyleProperty1, _handle), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::StyleProperty1, _id), 0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::StyleProperty1, _setter), 0);
    return type;
}

// public StyleProperty(T defaultValue, Uno.Action<TOwner> changedCallback) :5461
void StyleProperty1__ctor_1_fn(StyleProperty1* __this, void* defaultValue, uDelegate* changedCallback)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(1),
    };
    __this->_handle = ::g::Fuse::Properties::CreateHandle();
    __this->ctor_();
    __this->_id = (::g::Fuse::StyleProperty::_propertyEnum()++);
    __this->_defaultValue() = defaultValue;
    __this->_changedCallback = changedCallback;
}

// public StyleProperty(T defaultValue, Uno.Action<TOwner> changedCallback, Uno.Action<TOwner, T> setter, Uno.Func<TOwner, T> getter) :5470
void StyleProperty1__ctor_2_fn(StyleProperty1* __this, void* defaultValue, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(1),
    };
    __this->_handle = ::g::Fuse::Properties::CreateHandle();
    StyleProperty1__ctor_1_fn(__this, defaultValue, changedCallback);

    if (::g::Uno::Delegate::op_Equality(__this->_setter, NULL) != ::g::Uno::Delegate::op_Equality(__this->_getter, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[58/*"Style prope...*/]));

    __this->_setter = setter;
    __this->_getter = getter;
}

// public T Get(TOwner owner) :5503
void StyleProperty1__Get_fn(StyleProperty1* __this, void* owner, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
        __this->__type->GetBase(StyleProperty1_typeof())->T(1),
        __this->__type->GetBase(StyleProperty1_typeof())->Precalced(0/*Uno.Func<TOwner, T>*/),
    };
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[3/*Fuse.Node*/]);

    if (::g::Uno::Delegate::op_Inequality(__this->_getter, NULL))
        return __retval.Store((uPtr(__this->_getter)->Invoke(&ret3, 1, owner), ret3)), void();
    else
    {
        if (uPtr(n)->GetPropertyState(__this->_id) == 0)
            return __retval.Store(__this->_defaultValue()), void();
        else
        {
            uObject* res;
            uPtr(uPtr(n)->Properties())->TryGet(__this->_handle, &res);
            return __retval.Store(__types[1], uUnboxAny(__types[1], res)), void();
        }
    }
}

// public bool HasValue(TOwner owner) :5497
void StyleProperty1__HasValue_fn(StyleProperty1* __this, void* owner, bool* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
    };
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[3/*Fuse.Node*/]);
    return *__retval = n->GetPropertyState(__this->_id) != 0, void();
}

// private bool IsEqual(T value, T oldValue) :5532
void StyleProperty1__IsEqual_fn(StyleProperty1* __this, void* value, void* oldValue, bool* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(1),
    };

    if (uBoxPtr(__types[0], value) == uBoxPtr(__types[0], oldValue))
        return *__retval = true, void();

    if (uBoxPtr(__types[0], value) == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uBoxPtr(__types[0], value, U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], oldValue)), void();
}

// public StyleProperty New(T defaultValue, Uno.Action<TOwner> changedCallback) :5461
void StyleProperty1__New1_fn(uType* __type, void* defaultValue, uDelegate* changedCallback, StyleProperty1** __retval)
{
    uType* __types[] = {
        __type->GetBase(StyleProperty1_typeof())->T(1),
    };
    StyleProperty1* obj1 = (StyleProperty1*)uNew(__type);
    StyleProperty1__ctor_1_fn(obj1, defaultValue, changedCallback);
    return *__retval = obj1, void();
}

// public StyleProperty New(T defaultValue, Uno.Action<TOwner> changedCallback, Uno.Action<TOwner, T> setter, Uno.Func<TOwner, T> getter) :5470
void StyleProperty1__New2_fn(uType* __type, void* defaultValue, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter, StyleProperty1** __retval)
{
    uType* __types[] = {
        __type->GetBase(StyleProperty1_typeof())->T(1),
    };
    StyleProperty1* obj2 = (StyleProperty1*)uNew(__type);
    StyleProperty1__ctor_2_fn(obj2, defaultValue, changedCallback, setter, getter);
    return *__retval = obj2, void();
}

// protected void OnChanged(TOwner owner) :5485
void StyleProperty1__OnChanged_fn(StyleProperty1* __this, void* owner)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
        __this->__type->GetBase(StyleProperty1_typeof())->Precalced(1/*Uno.Action<TOwner>*/),
    };

    if (::g::Uno::Delegate::op_Inequality(__this->_changedCallback, NULL))
        uPtr(__this->_changedCallback)->InvokeVoid(owner);
}

// public bool Reset(TOwner owner) :5588
void StyleProperty1__Reset_fn(StyleProperty1* __this, void* owner, bool* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
        __this->__type->GetBase(StyleProperty1_typeof())->Precalced(2/*Uno.Action<TOwner, T>*/),
        __this->__type->GetBase(StyleProperty1_typeof())->T(1),
    };
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[3/*Fuse.Node*/]);
    int s = n->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::g::Uno::Delegate::op_Inequality(__this->_setter, NULL))
            uPtr(__this->_setter)->Invoke(2, owner, (void*)__this->_defaultValue());
        else
            uPtr(uPtr(n)->Properties())->Clear(__this->_handle);

        uPtr(n)->SetPropertyState(__this->_id, 0);
        StyleProperty1__OnChanged_fn(__this, owner);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public bool ResetStyle(TOwner owner) :5612
void StyleProperty1__ResetStyle_fn(StyleProperty1* __this, void* owner, bool* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
    };
    bool ret6;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[3/*Fuse.Node*/]);
    int s = n->GetPropertyState(__this->_id);

    if (s == 1)
        return *__retval = (StyleProperty1__Reset_fn(__this, owner, &ret6), ret6), void();
    else
        return *__retval = false, void();
}

// internal override sealed void ResetStyleFor(Fuse.Node n) :5628
void StyleProperty1__ResetStyleFor_fn(StyleProperty1* __this, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
    };
    bool ret7;

    if (uIs(n, __types[0]))
        StyleProperty1__ResetStyle_fn(__this, uUnboxAny(__types[0], n), &ret7);
}

// public bool Set(TOwner owner, T value) :5539
void StyleProperty1__Set_fn(StyleProperty1* __this, void* owner, void* value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
        __this->__type->GetBase(StyleProperty1_typeof())->T(1),
        __this->__type->GetBase(StyleProperty1_typeof())->Precalced(2/*Uno.Action<TOwner, T>*/),
    };
    uT ret8(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT oldValue(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    bool ret9;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[3/*Fuse.Node*/]);
    oldValue = (StyleProperty1__Get_fn(__this, owner, &ret8), ret8);

    if ((n->GetPropertyState(__this->_id) != 2) || !(StyleProperty1__IsEqual_fn(__this, value, oldValue, &ret9), ret9))
    {
        if (::g::Uno::Delegate::op_Inequality(__this->_setter, NULL))
        {
            uPtr(__this->_setter)->Invoke(2, owner, value);
            uPtr(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            uPtr(uPtr(n)->Properties())->Set(__this->_handle, uBoxPtr(__types[1], value));
            n->SetPropertyState(__this->_id, 2);
        }

        StyleProperty1__OnChanged_fn(__this, owner);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public void SetLocalState(TOwner owner) :5526
void StyleProperty1__SetLocalState_fn(StyleProperty1* __this, void* owner)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
    };
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[3/*Fuse.Node*/]);
    n->SetPropertyState(__this->_id, 2);
}

// public bool SetStyle(TOwner owner, T value) :5565
void StyleProperty1__SetStyle_fn(StyleProperty1* __this, void* owner, void* value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(StyleProperty1_typeof())->T(0),
        __this->__type->GetBase(StyleProperty1_typeof())->T(1),
        __this->__type->GetBase(StyleProperty1_typeof())->Precalced(2/*Uno.Action<TOwner, T>*/),
    };
    bool ret10;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[3/*Fuse.Node*/]);

    if (!(StyleProperty1__HasValue_fn(__this, owner, &ret10), ret10))
    {
        if (::g::Uno::Delegate::op_Inequality(__this->_setter, NULL))
        {
            uPtr(__this->_setter)->Invoke(2, owner, value);
            uPtr(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            uPtr(uPtr(n)->Properties())->Set(__this->_handle, uBoxPtr(__types[1], value));
            n->SetPropertyState(__this->_id, 1);
        }

        StyleProperty1__OnChanged_fn(__this, owner);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5637)
// -------------------------------------------------------

// public sealed class StylePropertyWithUnit<TOwner, T, TUnit> :5637
// {
::g::Fuse::StyleProperty_type* StylePropertyWithUnit_typeof()
{
    static uSStrong< ::g::Fuse::StyleProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(StylePropertyWithUnit);
    options.TypeSize = sizeof(::g::Fuse::StyleProperty_type);
    type = (::g::Fuse::StyleProperty_type*)uClassType::New("Fuse.StylePropertyWithUnit`3", options);
    type->SetBase(::g::Fuse::StyleProperty1_typeof()->MakeType(type->T(0), type->T(1)));
    ::TYPES[149] = ::g::Fuse::StyleProperty_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[19] = uObject_typeof();
    type->SetFields(6,
        type->T(2), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::StylePropertyWithUnit, _unitHandle), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::StylePropertyWithUnit, _unitId), 0);
    return type;
}

// public StylePropertyWithUnit(T defaultValue, TUnit defaultUnit, Uno.Action<TOwner> changedCallback) :5645
void StylePropertyWithUnit__ctor_3_fn(StylePropertyWithUnit* __this, void* defaultValue, void* defaultUnit, uDelegate* changedCallback)
{
    uType* __types[] = {
        __this->__type->T(1),
        __this->__type->T(2),
    };
    __this->_unitHandle = ::g::Fuse::Properties::CreateHandle();
    ::g::Fuse::StyleProperty1__ctor_2_fn(__this, defaultValue, changedCallback, NULL, NULL);
    __this->_unitId = (::g::Fuse::StyleProperty::_propertyEnum()++);
    __this->_defaultUnit() = defaultUnit;
}

// public StylePropertyWithUnit(T defaultValue, TUnit defaultUnit, Uno.Action<TOwner> changedCallback, Uno.Action<TOwner, T> setter, Uno.Func<TOwner, T> getter) :5655
void StylePropertyWithUnit__ctor_4_fn(StylePropertyWithUnit* __this, void* defaultValue, void* defaultUnit, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter)
{
    uType* __types[] = {
        __this->__type->T(1),
        __this->__type->T(2),
    };
    __this->_unitHandle = ::g::Fuse::Properties::CreateHandle();
    ::g::Fuse::StyleProperty1__ctor_2_fn(__this, defaultValue, changedCallback, setter, getter);
    __this->_unitId = (::g::Fuse::StyleProperty::_propertyEnum()++);
    __this->_defaultUnit() = defaultUnit;
}

// public TUnit GetUnit(TOwner owner) :5667
void StylePropertyWithUnit__GetUnit_fn(StylePropertyWithUnit* __this, ::g::Fuse::Node* owner, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(2),
    };
    ::g::Fuse::Node* n = owner;

    if (uPtr(n)->GetPropertyState(__this->_unitId) == 0)
        return __retval.Store(__this->_defaultUnit()), void();
    else
    {
        uObject* res;
        uPtr(uPtr(n)->Properties())->TryGet(__this->_unitHandle, &res);
        return __retval.Store(__types[0], uUnboxAny(__types[0], res)), void();
    }
}

// public StylePropertyWithUnit New(T defaultValue, TUnit defaultUnit, Uno.Action<TOwner> changedCallback) :5645
void StylePropertyWithUnit__New3_fn(uType* __type, void* defaultValue, void* defaultUnit, uDelegate* changedCallback, StylePropertyWithUnit** __retval)
{
    uType* __types[] = {
        __type->T(1),
        __type->T(2),
    };
    StylePropertyWithUnit* obj1 = (StylePropertyWithUnit*)uNew(__type);
    StylePropertyWithUnit__ctor_3_fn(obj1, defaultValue, defaultUnit, changedCallback);
    return *__retval = obj1, void();
}

// public StylePropertyWithUnit New(T defaultValue, TUnit defaultUnit, Uno.Action<TOwner> changedCallback, Uno.Action<TOwner, T> setter, Uno.Func<TOwner, T> getter) :5655
void StylePropertyWithUnit__New4_fn(uType* __type, void* defaultValue, void* defaultUnit, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter, StylePropertyWithUnit** __retval)
{
    uType* __types[] = {
        __type->T(1),
        __type->T(2),
    };
    StylePropertyWithUnit* obj2 = (StylePropertyWithUnit*)uNew(__type);
    StylePropertyWithUnit__ctor_4_fn(obj2, defaultValue, defaultUnit, changedCallback, setter, getter);
    return *__retval = obj2, void();
}

// public bool Set(TOwner owner, T value, TUnit unit) :5683
void StylePropertyWithUnit__Set1_fn(StylePropertyWithUnit* __this, ::g::Fuse::Node* owner, void* value, void* unit, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
        __this->__type->T(2),
    };
    uT ret5(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    bool ret6;
    bool ret7;
    ::g::Fuse::Node* n = owner;

    if (!::g::Uno::Object::Equals(uBoxPtr(__types[1], unit, U_ALLOCA(__types[1]->ObjectSize)), uBoxPtr(__types[1], (StylePropertyWithUnit__GetUnit_fn(__this, owner, &ret5), ret5))))
    {
        uPtr(uPtr(n)->Properties())->Set(__this->_unitHandle, uBoxPtr(__types[1], unit));
        n->SetPropertyState(__this->_unitId, 2);

        if (!(::g::Fuse::StyleProperty1__Set_fn(__this, owner, value, &ret6), ret6))
            ::g::Fuse::StyleProperty1__OnChanged_fn(__this, owner);

        return *__retval = true, void();
    }
    else
        return *__retval = (::g::Fuse::StyleProperty1__Set_fn(__this, owner, value, &ret7), ret7), void();
}

// public bool SetStyle(TOwner owner, T value, TUnit unit) :5700
void StylePropertyWithUnit__SetStyle1_fn(StylePropertyWithUnit* __this, ::g::Fuse::Node* owner, void* value, void* unit, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
        __this->__type->T(2),
    };
    uT ret9(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret8;
    ;
    bool ret10;
    bool ret11;

    if (!(::g::Fuse::StyleProperty1__HasValue_fn(__this, owner, &ret8), ret8))
    {
        ::g::Fuse::Node* n = owner;

        if (!::g::Uno::Object::Equals(uBoxPtr(__types[1], unit, U_ALLOCA(__types[1]->ObjectSize)), uBoxPtr(__types[1], (StylePropertyWithUnit__GetUnit_fn(__this, owner, &ret9), ret9))))
        {
            uPtr(uPtr(n)->Properties())->Set(__this->_unitHandle, uBoxPtr(__types[1], unit));
            n->SetPropertyState(__this->_unitId, 1);

            if (!(::g::Fuse::StyleProperty1__SetStyle_fn(__this, owner, value, &ret10), ret10))
                ::g::Fuse::StyleProperty1__OnChanged_fn(__this, owner);

            return *__retval = true, void();
        }
        else
            return *__retval = (::g::Fuse::StyleProperty1__SetStyle_fn(__this, owner, value, &ret11), ret11), void();
    }

    return *__retval = false, void();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(5873)
// -------------------------------------------------------

// public abstract class Theme :5873
// {
::g::Fuse::Style_type* Theme_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Theme);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Theme", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    return type;
}

// protected Theme() :5882
void Theme__ctor_1_fn(Theme* __this)
{
    __this->ctor_1();
}

// protected Theme() [instance] :5882
void Theme::ctor_1()
{
    ctor_();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6003)
// -------------------------------------------------------

// public static class Time :6003
// {
uClassType* Time_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Time", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_delta_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_elapsed_, uFieldFlagsStatic);
    return type;
}

// public static double get_FrameInterval() :6020
void Time__get_FrameInterval_fn(double* __retval)
{
    *__retval = Time::FrameInterval();
}

// public static double get_FrameTime() :6016
void Time__get_FrameTime_fn(double* __retval)
{
    *__retval = Time::FrameTime();
}

// internal static void Set(double elapsed, double delta) :6008
void Time__Set_fn(double* elapsed, double* delta)
{
    Time::Set(*elapsed, *delta);
}

double Time::_delta_;
double Time::_elapsed_;

// internal static void Set(double elapsed, double delta) [static] :6008
void Time::Set(double elapsed, double delta)
{
    Time::_elapsed() = elapsed;
    Time::_delta() = delta;
}

// public static double get_FrameInterval() [static] :6020
double Time::FrameInterval()
{
    return Time::_delta();
}

// public static double get_FrameTime() [static] :6016
double Time::FrameTime()
{
    return Time::_elapsed();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno(41)
// ---------------------------------------------------------

// private sealed class App.TimeListener :41
// {
App__TimeListener_type* App__TimeListener_typeof()
{
    static uSStrong<App__TimeListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(App__TimeListener);
    options.TypeSize = sizeof(App__TimeListener_type);
    type = (App__TimeListener_type*)uClassType::New("Fuse.App.TimeListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onTimeUpdate = (void(*)(uObject*, ::g::Android::android::animation::TimeAnimator*, int64_t*, int64_t*))App__TimeListener__onTimeUpdate_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[59] = uString::Const("com.Bindings.Binding_Fuse_App_TimeListener");
    ::STRINGS[30] = uString::Const("<init>");
    ::STRINGS[31] = uString::Const("(J)V");
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[71] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[72] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[73] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(App__TimeListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(App__TimeListener_type, interface1),
        ::g::Android::android::animation::TimeAnimatorDLRTimeListener_typeof(), offsetof(App__TimeListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::App_typeof(), offsetof(::g::Fuse::App__TimeListener, _app), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::App__TimeListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public TimeListener(Fuse.App app) :46
void App__TimeListener__ctor_4_fn(App__TimeListener* __this, ::g::Fuse::App* app)
{
    __this->ctor_4(app);
}

// public TimeListener New(Fuse.App app) :46
void App__TimeListener__New5_fn(::g::Fuse::App* app, App__TimeListener** __retval)
{
    *__retval = App__TimeListener::New5(app);
}

// public void onTimeUpdate(Android.android.animation.TimeAnimator animation, long totalTime, long deltaTime) :51
void App__TimeListener__onTimeUpdate_fn(App__TimeListener* __this, ::g::Android::android::animation::TimeAnimator* animation, int64_t* totalTime, int64_t* deltaTime)
{
    __this->onTimeUpdate(animation, *totalTime, *deltaTime);
}

jclass App__TimeListener::_javaClass2_;

// public TimeListener(Fuse.App app) [instance] :46
void App__TimeListener::ctor_4(::g::Fuse::App* app)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[59/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(App__TimeListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        App__TimeListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[59/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTimeUpdate","(JLandroid/animation/TimeAnimator;JJJJJ)V",Binding_Fuse_App_TimeListener__onTimeUpdate375);
        COMMIT_REG_MTD(App__TimeListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[30/*"<init>"*/], ::STRINGS[31/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _app = app;
}

// public void onTimeUpdate(Android.android.animation.TimeAnimator animation, long totalTime, long deltaTime) [instance] :51
void App__TimeListener::onTimeUpdate(::g::Android::android::animation::TimeAnimator* animation, int64_t totalTime, int64_t deltaTime)
{
    try
    {
        uPtr(_app)->PropagateBackground();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }

    ::g::Fuse::Time::Set((double)totalTime / 1000.0, (double)deltaTime / 1000.0);

    try
    {
        uPtr(_app)->OnUpdate();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e1 = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e1);
    }
}

// public TimeListener New(Fuse.App app) [static] :46
App__TimeListener* App__TimeListener::New5(::g::Fuse::App* app)
{
    App__TimeListener* obj1 = (App__TimeListener*)uNew(App__TimeListener_typeof());
    obj1->ctor_4(app);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6036)
// -------------------------------------------------------

// public abstract class Transform :6036
// {
Transform_type* Transform_typeof()
{
    static uSStrong<Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Transform);
    options.TypeSize = sizeof(Transform_type);
    type = (Transform_type*)uClassType::New("Fuse.Transform", options);
    type->fp_OnAdded = Transform__OnAdded_fn;
    type->fp_OnRelativeNodeChanged = Transform__OnRelativeNodeChanged_fn;
    type->fp_OnRemoved = Transform__OnRemoved_fn;
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[112] = ::g::Uno::Action1_typeof()->MakeType(Transform_typeof());
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Transform, _relativeNode), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Transform, AddedByStyle), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Transform, Node), 0,
        ::g::Uno::Action1_typeof()->MakeType(Transform_typeof()), offsetof(::g::Fuse::Transform, MatrixChanged1), 0);
    return type;
}

// internal Transform() :6090
void Transform__ctor__fn(Transform* __this)
{
    __this->ctor_();
}

// internal void Added(Fuse.Node n) :6061
void Transform__Added_fn(Transform* __this, ::g::Fuse::Node* n)
{
    __this->Added(n);
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) :6079
void Transform__add_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->add_MatrixChanged(value);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) :6079
void Transform__remove_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->remove_MatrixChanged(value);
}

// protected virtual void OnAdded() :6073
void Transform__OnAdded_fn(Transform* __this)
{
}

// protected void OnMatrixChanged() :6081
void Transform__OnMatrixChanged_fn(Transform* __this)
{
    __this->OnMatrixChanged();
}

// protected virtual void OnRelativeNodeChanged() :6056
void Transform__OnRelativeNodeChanged_fn(Transform* __this)
{
    __this->OnMatrixChanged();
}

// protected virtual void OnRemoved() :6074
void Transform__OnRemoved_fn(Transform* __this)
{
}

// public Fuse.Node get_RelativeNode() :6045
void Transform__get_RelativeNode_fn(Transform* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RelativeNode();
}

// public void set_RelativeNode(Fuse.Node value) :6046
void Transform__set_RelativeNode_fn(Transform* __this, ::g::Fuse::Node* value)
{
    __this->RelativeNode(value);
}

// internal void Removed(Fuse.Node n) :6067
void Transform__Removed_fn(Transform* __this, ::g::Fuse::Node* n)
{
    __this->Removed(n);
}

// internal Transform() [instance] :6090
void Transform::ctor_()
{
}

// internal void Added(Fuse.Node n) [instance] :6061
void Transform::Added(::g::Fuse::Node* n)
{
    Node = n;
    OnAdded();
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :6079
void Transform::add_MatrixChanged(uDelegate* value)
{
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(MatrixChanged1, value), ::TYPES[112/*Uno.Action<Fuse.Transform>*/]);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :6079
void Transform::remove_MatrixChanged(uDelegate* value)
{
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(MatrixChanged1, value), ::TYPES[112/*Uno.Action<Fuse.Transform>*/]);
}

// protected void OnMatrixChanged() [instance] :6081
void Transform::OnMatrixChanged()
{
    if (::g::Uno::Delegate::op_Inequality(MatrixChanged1, NULL))
        uPtr(MatrixChanged1)->InvokeVoid(this);
}

// public Fuse.Node get_RelativeNode() [instance] :6045
::g::Fuse::Node* Transform::RelativeNode()
{
    ::g::Fuse::Node* ind1 = _relativeNode;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)Node;
}

// public void set_RelativeNode(Fuse.Node value) [instance] :6046
void Transform::RelativeNode(::g::Fuse::Node* value)
{
    if (_relativeNode == value)
        return;

    _relativeNode = value;
    OnRelativeNodeChanged();
}

// internal void Removed(Fuse.Node n) [instance] :6067
void Transform::Removed(::g::Fuse::Node* n)
{
    OnRemoved();
    Node = NULL;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6315)
// -------------------------------------------------------

// public enum TransformModeFlags :6315
uEnumType* TransformModeFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.TransformModeFlags", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "None", 0LL,
        "Size", 1LL,
        "ParentSize", 2LL,
        "Position", 4LL,
        "WorldTransform", 8LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6377)
// -------------------------------------------------------

// public sealed class Translation :6377
// {
::g::Fuse::Transform_type* Translation_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Translation);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Translation", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Translation__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Translation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Translation__get_IsFlat_fn;
    type->fp_OnAdded = (void(*)(::g::Fuse::Transform*))Translation__OnAdded_fn;
    type->fp_OnRelativeNodeChanged = (void(*)(::g::Fuse::Transform*))Translation__OnRelativeNodeChanged_fn;
    type->fp_OnRemoved = (void(*)(::g::Fuse::Transform*))Translation__OnRemoved_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Translation__PrependTo_fn;
    ::TYPES[152] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[104] = ::g::Uno::Float3_typeof();
    ::TYPES[110] = ::g::Fuse::Transform_typeof();
    ::TYPES[153] = ::g::Fuse::ITransformMode_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[154] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[155] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    type->SetFields(4,
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Translation, _relativeTo), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Translation, _rootedSubscribed), 0,
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Translation, _subscribed), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _y), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _z), 0);
    return type;
}

// public generated Translation() :6377
void Translation__ctor_1_fn(Translation* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :6547
void Translation__AppendTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float3 v = ::g::Uno::Float3__op_Multiply1(::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr(__this->RelativeTo()), ::TYPES[156/*Fuse.ITranslationMode*/]), __this), weight_);
    uPtr(m)->AppendTranslation(v.X, v.Y, v.Z);
}

// private void CheckSubscription() :6410
void Translation__CheckSubscription_fn(Translation* __this)
{
    __this->CheckSubscription();
}

// public override sealed bool get_IsFlat() :6561
void Translation__get_IsFlat_fn(Translation* __this, bool* __retval)
{
    return *__retval = ::g::Uno::Math::Abs1(__this->Z()) < 1e-05f, void();
}

// public generated Translation New() :6377
void Translation__New1_fn(Translation** __retval)
{
    *__retval = Translation::New1();
}

// protected override sealed void OnAdded() :6398
void Translation__OnAdded_fn(Translation* __this)
{
    __this->CheckSubscription();
}

// private void OnPlaced(object sender, object args) :6464
void Translation__OnPlaced_fn(Translation* __this, uObject* sender, uObject* args)
{
    __this->OnPlaced(sender, args);
}

// protected override sealed void OnRelativeNodeChanged() :6393
void Translation__OnRelativeNodeChanged_fn(Translation* __this)
{
    __this->CheckSubscription();
}

// protected override sealed void OnRemoved() :6403
void Translation__OnRemoved_fn(Translation* __this)
{
    __this->CheckSubscription();
}

// private void OnRooted(object sender, object args) :6469
void Translation__OnRooted_fn(Translation* __this, uObject* sender, uObject* args)
{
    __this->OnRooted(sender, args);
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :6553
void Translation__PrependTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float3 v = ::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr(__this->RelativeTo()), ::TYPES[156/*Fuse.ITranslationMode*/]), __this);
    uPtr(m)->PrependTranslation(v.X, v.Y, v.Z);
}

// public Fuse.ITranslationMode get_RelativeTo() :6382
void Translation__get_RelativeTo_fn(Translation* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.ITranslationMode value) :6383
void Translation__set_RelativeTo_fn(Translation* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public float3 get_Vector() :6533
void Translation__get_Vector_fn(Translation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :6534
void Translation__set_Vector_fn(Translation* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :6478
void Translation__get_X_fn(Translation* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :6479
void Translation__set_X_fn(Translation* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :6506
void Translation__get_Y_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :6507
void Translation__set_Y_fn(Translation* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :6520
void Translation__get_Z_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :6521
void Translation__set_Z_fn(Translation* __this, float* value)
{
    __this->Z(*value);
}

// public generated Translation() [instance] :6377
void Translation::ctor_1()
{
    _relativeTo = ::g::Fuse::TranslationModes::Local();
    ctor_();
}

// private void CheckSubscription() [instance] :6410
void Translation::CheckSubscription()
{
    ::g::Fuse::Node* root = NULL;
    ::g::Fuse::Node* node = RelativeNode();
    int flags = ::g::Fuse::ITransformMode::Flags(uInterface(uPtr(RelativeTo()), ::TYPES[153/*Fuse.ITransformMode*/]));

    if (((flags & 2) == 2) && (node != NULL))
    {
        root = node;
        node = uAs< ::g::Fuse::Node*>(uPtr(node)->Parent(), ::TYPES[3/*Fuse.Node*/]);
    }
    else if ((flags & 1) == 1)
        ;
    else
        node = NULL;

    uObject* act = uAs<uObject*>(node, ::TYPES[154/*Fuse.IActualPlacement*/]);

    if (_subscribed != act)
    {
        if (_subscribed != NULL)
        {
            ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(_subscribed), ::TYPES[154/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[155/*Fuse.PlacedHandler*/], (void*)Translation__OnPlaced_fn, this));
            _subscribed = NULL;
        }

        if (act != NULL)
        {
            ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(act), ::TYPES[154/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[155/*Fuse.PlacedHandler*/], (void*)Translation__OnPlaced_fn, this));
            _subscribed = act;
        }
    }

    if (root != _rootedSubscribed)
    {
        if (_rootedSubscribed != NULL)
        {
            uPtr(_rootedSubscribed)->remove_Rooted(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)Translation__OnRooted_fn, this));
            _rootedSubscribed = NULL;
        }

        if (root != NULL)
        {
            uPtr(root)->add_Rooted(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)Translation__OnRooted_fn, this));
            _rootedSubscribed = root;
        }
    }
}

// private void OnPlaced(object sender, object args) [instance] :6464
void Translation::OnPlaced(uObject* sender, uObject* args)
{
    OnMatrixChanged();
}

// private void OnRooted(object sender, object args) [instance] :6469
void Translation::OnRooted(uObject* sender, uObject* args)
{
    CheckSubscription();
    OnMatrixChanged();
}

// public Fuse.ITranslationMode get_RelativeTo() [instance] :6382
uObject* Translation::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.ITranslationMode value) [instance] :6383
void Translation::RelativeTo(uObject* value)
{
    if (_relativeTo == value)
        return;

    _relativeTo = value;
    CheckSubscription();
}

// public float3 get_Vector() [instance] :6533
::g::Uno::Float3 Translation::Vector()
{
    return ::g::Uno::Float3__New2(X(), Y(), Z());
}

// public void set_Vector(float3 value) [instance] :6534
void Translation::Vector(::g::Uno::Float3 value)
{
    if (((_x != value.X) || (_y != value.Y)) || (_z != value.Z))
    {
        _x = value.X;
        _y = value.Y;
        _z = value.Z;
        OnMatrixChanged();
    }
}

// public float get_X() [instance] :6478
float Translation::X()
{
    return _x;
}

// public void set_X(float value) [instance] :6479
void Translation::X(float value)
{
    if (_x != value)
    {
        _x = value;
        OnMatrixChanged();
    }
}

// public float get_Y() [instance] :6506
float Translation::Y()
{
    return _y;
}

// public void set_Y(float value) [instance] :6507
void Translation::Y(float value)
{
    if (_y != value)
    {
        _y = value;
        OnMatrixChanged();
    }
}

// public float get_Z() [instance] :6520
float Translation::Z()
{
    return _z;
}

// public void set_Z(float value) [instance] :6521
void Translation::Z(float value)
{
    if (_z != value)
    {
        _z = value;
        OnMatrixChanged();
    }
}

// public generated Translation New() [static] :6377
Translation* Translation::New1()
{
    Translation* obj1 = (Translation*)uNew(Translation_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6338)
// -------------------------------------------------------

// public static class TranslationModes :6338
// {
// static TranslationModes() :6338
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::Local_ = (uObject*)TranslationModes__LocalMode::New1();
    TranslationModes::Size_ = (uObject*)TranslationModes__SizeMode::New1();
    TranslationModes::ParentSize_ = (uObject*)TranslationModes__ParentSizeMode::New1();
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.TranslationModes", options);
    type->fp_cctor_ = TranslationModes__cctor__fn;
    ::TYPES[156] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[154] = ::g::Fuse::IActualPlacement_typeof();
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Local_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::ParentSize_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Size_, uFieldFlagsStatic);
    return type;
}

// private static float3 RelativeToSize(float3 v, Fuse.Node node) :6358
void TranslationModes__RelativeToSize_fn(::g::Uno::Float3* v, ::g::Fuse::Node* node, ::g::Uno::Float3* __retval)
{
    *__retval = TranslationModes::RelativeToSize(*v, node);
}

uSStrong<uObject*> TranslationModes::Local_;
uSStrong<uObject*> TranslationModes::ParentSize_;
uSStrong<uObject*> TranslationModes::Size_;

// private static float3 RelativeToSize(float3 v, Fuse.Node node) [static] :6358
::g::Uno::Float3 TranslationModes::RelativeToSize(::g::Uno::Float3 v, ::g::Fuse::Node* node)
{
    TranslationModes_typeof()->Init();
    uObject* isz = uAs<uObject*>(node, ::TYPES[154/*Fuse.IActualPlacement*/]);

    if (isz == NULL)
        return v;

    return ::g::Uno::Float3__op_Multiply2(v, ::g::Fuse::IActualPlacement::ActualSize(uInterface(uPtr(isz), ::TYPES[154/*Fuse.IActualPlacement*/])));
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(15)
// -----------------------------------------------------

// public sealed class UnhandledExceptionArgs :15
// {
uType* UnhandledExceptionArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UnhandledExceptionArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UnhandledExceptionArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::UnhandledExceptionArgs, _Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UnhandledExceptionArgs, _IsHandled), 0);
    return type;
}

// public UnhandledExceptionArgs(Uno.Exception e) :20
void UnhandledExceptionArgs__ctor_1_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* e)
{
    __this->ctor_1(e);
}

// public generated Uno.Exception get_Exception() :17
void UnhandledExceptionArgs__get_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception** __retval)
{
    *__retval = __this->Exception();
}

// private generated void set_Exception(Uno.Exception value) :17
void UnhandledExceptionArgs__set_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* value)
{
    __this->Exception(value);
}

// public generated bool get_IsHandled() :18
void UnhandledExceptionArgs__get_IsHandled_fn(UnhandledExceptionArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :18
void UnhandledExceptionArgs__set_IsHandled_fn(UnhandledExceptionArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public UnhandledExceptionArgs New(Uno.Exception e) :20
void UnhandledExceptionArgs__New2_fn(::g::Uno::Exception* e, UnhandledExceptionArgs** __retval)
{
    *__retval = UnhandledExceptionArgs::New2(e);
}

// public UnhandledExceptionArgs(Uno.Exception e) [instance] :20
void UnhandledExceptionArgs::ctor_1(::g::Uno::Exception* e)
{
    ctor_();
    Exception(e);
}

// public generated Uno.Exception get_Exception() [instance] :17
::g::Uno::Exception* UnhandledExceptionArgs::Exception()
{
    return _Exception;
}

// private generated void set_Exception(Uno.Exception value) [instance] :17
void UnhandledExceptionArgs::Exception(::g::Uno::Exception* value)
{
    _Exception = value;
}

// public generated bool get_IsHandled() [instance] :18
bool UnhandledExceptionArgs::IsHandled()
{
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :18
void UnhandledExceptionArgs::IsHandled(bool value)
{
    _IsHandled = value;
}

// public UnhandledExceptionArgs New(Uno.Exception e) [static] :20
UnhandledExceptionArgs* UnhandledExceptionArgs::New2(::g::Uno::Exception* e)
{
    UnhandledExceptionArgs* obj1 = (UnhandledExceptionArgs*)uNew(UnhandledExceptionArgs_typeof());
    obj1->ctor_1(e);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(26)
// -----------------------------------------------------

// public delegate void UnhandledExceptionHandler(object sender, Fuse.UnhandledExceptionArgs args) :26
uDelegateType* UnhandledExceptionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UnhandledExceptionHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UnhandledExceptionArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6635)
// -------------------------------------------------------

// internal sealed class UpdateDispatcher :6635
// {
UpdateDispatcher_type* UpdateDispatcher_typeof()
{
    static uSStrong<UpdateDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UpdateDispatcher);
    options.TypeSize = sizeof(UpdateDispatcher_type);
    type = (UpdateDispatcher_type*)uClassType::New("Fuse.UpdateDispatcher", options);
    type->fp_ctor_ = (void*)UpdateDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))UpdateDispatcher__Invoke_fn;
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(UpdateDispatcher_type, interface0));
    return type;
}

// public generated UpdateDispatcher() :6635
void UpdateDispatcher__ctor__fn(UpdateDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :6637
void UpdateDispatcher__Invoke_fn(UpdateDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated UpdateDispatcher New() :6635
void UpdateDispatcher__New1_fn(UpdateDispatcher** __retval)
{
    *__retval = UpdateDispatcher::New1();
}

// public generated UpdateDispatcher() [instance] :6635
void UpdateDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :6637
void UpdateDispatcher::Invoke(uDelegate* action)
{
    ::g::Fuse::UpdateManager::PostAction(action);
}

// public generated UpdateDispatcher New() [static] :6635
UpdateDispatcher* UpdateDispatcher::New1()
{
    UpdateDispatcher* obj1 = (UpdateDispatcher*)uNew(UpdateDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6586)
// -------------------------------------------------------

// internal sealed class UpdateListener :6586
// {
uType* UpdateListener_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UpdateListener);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UpdateListener", options);
    type->fp_ctor_ = (void*)UpdateListener__New1_fn;
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[66] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::UpdateListener, action), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UpdateListener, defer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UpdateListener, removed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::UpdateListener, sequence), 0);
    return type;
}

// public generated UpdateListener() :6586
void UpdateListener__ctor__fn(UpdateListener* __this)
{
    __this->ctor_();
}

// public void Invoke() :6594
void UpdateListener__Invoke_fn(UpdateListener* __this)
{
    __this->Invoke();
}

// public generated UpdateListener New() :6586
void UpdateListener__New1_fn(UpdateListener** __retval)
{
    *__retval = UpdateListener::New1();
}

// public generated UpdateListener() [instance] :6586
void UpdateListener::ctor_()
{
}

// public void Invoke() [instance] :6594
void UpdateListener::Invoke()
{
    if (removed)
        return;

    if (::g::Uno::Delegate::op_Inequality(action, NULL))
        uPtr(action)->InvokeVoid();
}

// public generated UpdateListener New() [static] :6586
UpdateListener* UpdateListener::New1()
{
    UpdateListener* obj1 = (UpdateListener*)uNew(UpdateListener_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6643)
// -------------------------------------------------------

// public static class UpdateManager :6643
// {
// static UpdateManager() :6652
static void UpdateManager__cctor__fn(uType* __type)
{
    UpdateManager::_stages_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[157/*Uno.Collections.List<Fuse.Stage>*/]));
    UpdateManager::_postActions_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[158/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::_postActionsSwap_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[158/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::_phaseDeferredActions_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[158/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::Dispatcher_ = (uObject*)::g::Fuse::UpdateDispatcher::New1();
    UpdateManager::_postActionLock_ = ::g::Fuse::Internal::SimpleLock::New1();
    UpdateManager::_currentStage_ = -1;
    UpdateManager::_frameIndex_ = 1;
    UpdateManager::_postActionLock_ = ::g::Fuse::Internal::SimpleLock::New1();

    for (int i = 0; i <= 4; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_stages_), ::g::Fuse::Stage::New1(i));
}

uClassType* UpdateManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.UpdateManager", options);
    type->fp_cctor_ = UpdateManager__cctor__fn;
    ::STRINGS[60] = uString::Const("no Action found to remove");
    ::STRINGS[61] = uString::Const("no OnceAction found to remove");
    ::TYPES[157] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Stage_typeof());
    ::TYPES[158] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[159] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[160] = ::g::Fuse::UpdateStage_typeof();
    ::TYPES[141] = ::g::Fuse::UpdateListener_typeof();
    ::TYPES[27] = ::g::Uno::Int_typeof();
    ::TYPES[161] = ::g::Fuse::Stage_typeof();
    ::TYPES[66] = ::g::Uno::Action_typeof();
    ::TYPES[162] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[140] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof());
    ::TYPES[19] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::UpdateStage_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_currentStage_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_frameIndex_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_phaseDeferredActions_, uFieldFlagsStatic,
        ::g::Fuse::Internal::SimpleLock_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_postActionLock_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_postActions_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_postActionsSwap_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Stage_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_stages_, uFieldFlagsStatic,
        ::g::Uno::Threading::IDispatcher_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::Dispatcher_, uFieldFlagsStatic);
    return type;
}

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) :6663
void UpdateManager__AddAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddAction(pu, *stage);
}

// public static void AddDeferredAction(Uno.Action pu) :6743
void UpdateManager__AddDeferredAction_fn(uDelegate* pu)
{
    UpdateManager::AddDeferredAction(pu);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) :6698
void UpdateManager__AddOnceAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddOnceAction(pu, *stage);
}

// public static int get_FrameIndex() :6899
void UpdateManager__get_FrameIndex_fn(int* __retval)
{
    *__retval = UpdateManager::FrameIndex();
}

// public static void IncreaseFrameIndex() :6748
void UpdateManager__IncreaseFrameIndex_fn()
{
    UpdateManager::IncreaseFrameIndex();
}

// internal static bool IsPastStage(Fuse.UpdateStage stage) :6774
void UpdateManager__IsPastStage_fn(int* stage, bool* __retval)
{
    *__retval = UpdateManager::IsPastStage(*stage);
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) :6715
void UpdateManager__PerformNextFrame_fn(uDelegate* pu, int* stage)
{
    UpdateManager::PerformNextFrame(pu, *stage);
}

// public static void PostAction(Uno.Action pu) :6729
void UpdateManager__PostAction_fn(uDelegate* pu)
{
    UpdateManager::PostAction(pu);
}

// private static void ProcessPostActions() :6860
void UpdateManager__ProcessPostActions_fn()
{
    UpdateManager::ProcessPostActions();
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) :6690
void UpdateManager__RemoveAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::RemoveAction(pu, *stage);
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action) :6676
void UpdateManager__RemoveFrom_fn(::g::Uno::Collections::List* list, uDelegate* action, bool* __retval)
{
    *__retval = UpdateManager::RemoveFrom(list, action);
}

// public static void RemoveOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) :6705
void UpdateManager__RemoveOnceAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::RemoveOnceAction(pu, *stage);
}

// public static void Update() :6754
void UpdateManager__Update_fn()
{
    UpdateManager::Update();
}

// private static void Update(Fuse.Stage stage) :6779
void UpdateManager__Update1_fn(::g::Fuse::Stage* stage)
{
    UpdateManager::Update1(stage);
}

int UpdateManager::_currentStage_;
int UpdateManager::_frameIndex_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_phaseDeferredActions_;
uSStrong< ::g::Fuse::Internal::SimpleLock*> UpdateManager::_postActionLock_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActions_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActionsSwap_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_stages_;
uSStrong<uObject*> UpdateManager::Dispatcher_;

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :6663
void UpdateManager::AddAction(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret1;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret1), ret1);
    uPtr(s)->Insert(uPtr(s)->Listeners, us);
}

// public static void AddDeferredAction(Uno.Action pu) [static] :6743
void UpdateManager::AddDeferredAction(uDelegate* pu)
{
    UpdateManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_phaseDeferredActions()), pu);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :6698
void UpdateManager::AddOnceAction(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret2;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret2), ret2))->OncesPending), us);
}

// public static void IncreaseFrameIndex() [static] :6748
void UpdateManager::IncreaseFrameIndex()
{
    UpdateManager_typeof()->Init();
    UpdateManager::_frameIndex()++;
}

// internal static bool IsPastStage(Fuse.UpdateStage stage) [static] :6774
bool UpdateManager::IsPastStage(int stage)
{
    UpdateManager_typeof()->Init();
    return stage < UpdateManager::_currentStage();
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :6715
void UpdateManager::PerformNextFrame(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret3;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    us->defer = true;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret3), ret3))->OncesPending), us);
}

// public static void PostAction(Uno.Action pu) [static] :6729
void UpdateManager::PostAction(uDelegate* pu)
{
    UpdateManager_typeof()->Init();
    uPtr(UpdateManager::_postActionLock())->Lock();

    try
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_postActions()), pu);
    }
    catch (const uThrowable& __t)
    {
        uPtr(UpdateManager::_postActionLock())->Unlock();
        throw __t;
    }
    // finally
    uPtr(UpdateManager::_postActionLock())->Unlock();
}

// private static void ProcessPostActions() [static] :6860
void UpdateManager::ProcessPostActions()
{
    UpdateManager_typeof()->Init();
    uDelegate* ret4;
    ::g::Uno::Collections::List* _exceptions = NULL;

    while (true)
    {
        uPtr(UpdateManager::_postActionLock())->Lock();
        ::g::Uno::Collections::List* a = UpdateManager::_postActions();
        UpdateManager::_postActions() = UpdateManager::_postActionsSwap();
        UpdateManager::_postActionsSwap() = a;
        uPtr(UpdateManager::_postActionLock())->Unlock();

        if (uPtr(a)->Count() == 0)
            break;

        for (int i = 0; i < uPtr(a)->Count(); ++i)

            try
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(a), uCRef<int>(i), &ret4), ret4))->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;

                if (_exceptions == NULL)
                    _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[162/*Uno.Collections.List<Uno.Exception>*/]);

                ::g::Uno::Collections::List__Add_fn(_exceptions, e);
            }

        uPtr(a)->Clear();
    }

    if (_exceptions != NULL)
        U_THROW(::g::Uno::AggregateException::New7((uArray*)uPtr(_exceptions)->ToArray()));
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :6690
void UpdateManager::RemoveAction(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret5;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret5), ret5);

    if (!UpdateManager::RemoveFrom(uPtr(s)->Listeners, pu))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[60/*"no Action f...*/]));

    uPtr(s)->HasListenersRemoved = true;
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action) [static] :6676
bool UpdateManager::RemoveFrom(::g::Uno::Collections::List* list, uDelegate* action)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret6;
    ::g::Fuse::UpdateListener* ret7;
    ::g::Fuse::UpdateListener* ret8;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        if (::g::Uno::Object::Equals1(action, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret6), ret6))->action) && !uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret7), ret7))->removed)
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret8), ret8))->removed = true;
            return true;
        }

    return false;
}

// public static void RemoveOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :6705
void UpdateManager::RemoveOnceAction(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret9;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret9), ret9);

    if (UpdateManager::RemoveFrom(uPtr(s)->OncesPending, pu))
        return;

    if (!UpdateManager::RemoveFrom(uPtr(s)->Onces, pu))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[61/*"no OnceActi...*/]));
}

// public static void Update() [static] :6754
void UpdateManager::Update()
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret10;
    ::g::Fuse::Stage* ret11;
    UpdateManager::ProcessPostActions();
    int c = uPtr(UpdateManager::_stages())->Count();

    for (int i = 0; i < c; ++i)
    {
        UpdateManager::_currentStage() = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(i), &ret10), ret10))->UpdateStage;
        UpdateManager::Update1((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(i), &ret11), ret11));
    }

    UpdateManager::_currentStage() = -1;
}

// private static void Update(Fuse.Stage stage) [static] :6779
void UpdateManager::Update1(::g::Fuse::Stage* stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret12;
    ::g::Fuse::UpdateListener* ret13;
    ::g::Fuse::UpdateListener* ret14;
    uDelegate* ret15;
    ::g::Uno::Collections::List* _exceptions = NULL;

    if (uPtr(uPtr(stage)->OncesPending)->Count() > 0)
    {
        ::g::Uno::Collections::List* t = uPtr(stage)->Onces;
        stage->Onces = stage->OncesPending;
        stage->OncesPending = t;
        uPtr(stage->OncesPending)->Clear();
        int c = uPtr(stage->Onces)->Count();

        for (int i = 0; i < c; ++i)
        {
            ::g::Fuse::UpdateListener* ul = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Onces), uCRef<int>(i), &ret12), ret12);

            if (uPtr(ul)->defer)
            {
                uPtr(ul)->defer = false;
                ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(stage)->OncesPending), ul);
            }
            else
            {
                try
                {
                    uPtr(ul)->Invoke();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;

                    if (_exceptions == NULL)
                        _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[162/*Uno.Collections.List<Uno.Exception>*/]);

                    ::g::Uno::Collections::List__Add_fn(_exceptions, e);
                }
            }
        }
    }

    for (int i1 = 0; i1 < uPtr(uPtr(stage)->Listeners)->Count(); ++i1)
    {
        ::g::Fuse::UpdateListener* ul1 = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i1), &ret13), ret13);

        try
        {
            uPtr(ul1)->Invoke();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e1 = __t.Exception;

            if (_exceptions == NULL)
                _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[162/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(_exceptions, e1);
        }
    }

    if (uPtr(stage)->HasListenersRemoved)

        for (int i2 = uPtr(uPtr(stage)->Listeners)->Count() - 1; i2 >= 0; --i2)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i2), &ret14), ret14))->removed)
                uPtr(uPtr(stage)->Listeners)->RemoveAt(i2);

    for (int i3 = 0; i3 < uPtr(UpdateManager::_phaseDeferredActions())->Count(); ++i3)

        try
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_phaseDeferredActions()), uCRef<int>(i3), &ret15), ret15))->InvokeVoid();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e2 = __t.Exception;

            if (_exceptions == NULL)
                _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[162/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(_exceptions, e2);
        }

    uPtr(UpdateManager::_phaseDeferredActions())->Clear();

    if (_exceptions != NULL)
        U_THROW(::g::Uno::AggregateException::New7((uArray*)uPtr(_exceptions)->ToArray()));
}

// public static int get_FrameIndex() [static] :6899
int UpdateManager::FrameIndex()
{
    UpdateManager_typeof()->Init();
    return UpdateManager::_frameIndex();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno(6573)
// -------------------------------------------------------

// public enum UpdateStage :6573
uEnumType* UpdateStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.UpdateStage", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "None", -1LL,
        "Primary", 0LL,
        "Mixers", 1LL,
        "Layout", 2LL,
        "PostLayoutMixers", 3LL,
        "Draw", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno(255)
// -------------------------------------------------------------

// public sealed class UserEvent :255
// {
::g::Fuse::Behavior_type* UserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(UserEvent);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.UserEvent", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    ::TYPES[92] = ::g::Fuse::Behavior_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[163] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(3,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::UserEvent, Dispatch), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::UserEvent, _Name), 0);
    return type;
}

// public generated string get_Name() :260
void UserEvent__get_Name_fn(UserEvent* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :260
void UserEvent__set_Name_fn(UserEvent* __this, uString* value)
{
    __this->Name(value);
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) :295
void UserEvent__Raise_fn(UserEvent* __this, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(args);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, string name, Fuse.Node& node) :275
void UserEvent__ScanTree_fn(::g::Fuse::Node* at, uString* name, ::g::Fuse::Node** node, UserEvent** __retval)
{
    *__retval = UserEvent::ScanTree(at, name, node);
}

// public generated string get_Name() [instance] :260
uString* UserEvent::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :260
void UserEvent::Name(uString* value)
{
    _Name = value;
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) [instance] :295
void UserEvent::Raise(::g::Uno::Collections::Dictionary* args)
{
    uPtr(Dispatch)->Raise(ParentNode(), args);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, string name, Fuse.Node& node) [static] :275
UserEvent* UserEvent::ScanTree(::g::Fuse::Node* at, uString* name, ::g::Fuse::Node** node)
{
    ::g::Fuse::Behavior* ret3;

    while (at != NULL)
    {
        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(at)->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[92/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[163/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            UserEvent* ue = uAs<UserEvent*>(b, UserEvent_typeof());

            if ((ue != NULL) && ::g::Uno::String::op_Equality(uPtr(ue)->Name(), name))
            {
                *node = at;
                return ue;
            }
        }

        at = uPtr(at)->Parent();
    }

    *node = NULL;
    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno(176)
// -------------------------------------------------------------

// public sealed class UserEventArgs :176
// {
uType* UserEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UserEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::UserEventArgs, _Args), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::UserEventArgs, _Dispatch), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::UserEventArgs, _Source), 0);
    return type;
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :190
void UserEventArgs__ctor_1_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->ctor_1(dispatch, source, args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() :188
void UserEventArgs__get_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Args();
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) :188
void UserEventArgs__set_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Args(value);
}

// internal generated Fuse.UserEventDispatch get_Dispatch() :178
void UserEventArgs__get_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch** __retval)
{
    *__retval = __this->Dispatch();
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) :178
void UserEventArgs__set_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* value)
{
    __this->Dispatch(value);
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :190
void UserEventArgs__New2_fn(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args, UserEventArgs** __retval)
{
    *__retval = UserEventArgs::New2(dispatch, source, args);
}

// internal void Raise() :197
void UserEventArgs__Raise_fn(UserEventArgs* __this)
{
    __this->Raise();
}

// public generated Fuse.Node get_Source() :185
void UserEventArgs__get_Source_fn(UserEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Node value) :185
void UserEventArgs__set_Source_fn(UserEventArgs* __this, ::g::Fuse::Node* value)
{
    __this->Source(value);
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :190
void UserEventArgs::ctor_1(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    ctor_();
    Dispatch(dispatch);
    Source(source);
    Args(args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() [instance] :188
::g::Uno::Collections::Dictionary* UserEventArgs::Args()
{
    return _Args;
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) [instance] :188
void UserEventArgs::Args(::g::Uno::Collections::Dictionary* value)
{
    _Args = value;
}

// internal generated Fuse.UserEventDispatch get_Dispatch() [instance] :178
::g::Fuse::UserEventDispatch* UserEventArgs::Dispatch()
{
    return _Dispatch;
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) [instance] :178
void UserEventArgs::Dispatch(::g::Fuse::UserEventDispatch* value)
{
    _Dispatch = value;
}

// internal void Raise() [instance] :197
void UserEventArgs::Raise()
{
    uPtr(Dispatch())->OnRaised(this);
}

// public generated Fuse.Node get_Source() [instance] :185
::g::Fuse::Node* UserEventArgs::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Node value) [instance] :185
void UserEventArgs::Source(::g::Fuse::Node* value)
{
    _Source = value;
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [static] :190
UserEventArgs* UserEventArgs::New2(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    UserEventArgs* obj2 = (UserEventArgs*)uNew(UserEventArgs_typeof());
    obj2->ctor_1(dispatch, source, args);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno(215)
// -------------------------------------------------------------

// internal sealed class UserEventDispatch :215
// {
// static UserEventDispatch() :215
static void UserEventDispatch__cctor__fn(uType* __type)
{
    UserEventDispatch::_userEvents_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[164/*Uno.Collections.Dictionary<string, Fuse.UserEventDispatch>*/]));
}

uType* UserEventDispatch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UserEventDispatch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UserEventDispatch", options);
    type->fp_cctor_ = UserEventDispatch__cctor__fn;
    ::TYPES[164] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), UserEventDispatch_typeof());
    ::TYPES[21] = ::g::Uno::Delegate_typeof();
    ::TYPES[165] = ::g::Fuse::UserEventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[66] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::UserEventHandler_typeof(), offsetof(::g::Fuse::UserEventDispatch, Raised1), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), UserEventDispatch_typeof()), (uintptr_t)&::g::Fuse::UserEventDispatch::_userEvents_, uFieldFlagsStatic);
    return type;
}

// internal void OnRaised(Fuse.UserEventArgs args) :248
void UserEventDispatch__OnRaised_fn(UserEventDispatch* __this, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :236
void UserEventDispatch__Raise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(source, args);
}

// public generated void add_Raised(Fuse.UserEventHandler value) :220
void UserEventDispatch__add_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->add_Raised(value);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) :220
void UserEventDispatch__remove_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->remove_Raised(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> UserEventDispatch::_userEvents_;

// internal void OnRaised(Fuse.UserEventArgs args) [instance] :248
void UserEventDispatch::OnRaised(::g::Fuse::UserEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Raised1, NULL))
        uPtr(Raised1)->Invoke(2, this, args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :236
void UserEventDispatch::Raise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)::g::Fuse::UserEventArgs__Raise_fn, m));
}

// public generated void add_Raised(Fuse.UserEventHandler value) [instance] :220
void UserEventDispatch::add_Raised(uDelegate* value)
{
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Raised1, value), ::TYPES[165/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) [instance] :220
void UserEventDispatch::remove_Raised(uDelegate* value)
{
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Raised1, value), ::TYPES[165/*Fuse.UserEventHandler*/]);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno(213)
// -------------------------------------------------------------

// public delegate void UserEventHandler(object sender, Fuse.UserEventArgs args) :213
uDelegateType* UserEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UserEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UserEventArgs_typeof());
    return type;
}

}} // ::g::Fuse
