#include <app/Android.android.animation.Animator.h>
#include <app/Android.android.animation.TimeAnimator.h>
#include <app/Android.android.animation.TimeAnimatorDLRTimeListener.h>
#include <app/Android.android.animation.ValueAnimator.h>
#include <app/Android.android.app.Activity.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.android.net.Uri.h>
#include <app/Android.android.os.BuildDLRVERSION.h>
#include <app/Android.android.view.Choreographer.h>
#include <app/Android.android.view.ChoreographerDLRFrameCallback.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Permissions.h>
#include <app/Android.Base.PlatPermission.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujlong.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Primitives.ujvalue.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.java.lang.System.h>
#include <app/Fuse.Android.NativeStyle.h>
#include <app/Fuse.App.h>
#include <app/Fuse.App_FrameCallback.h>
#include <app/Fuse.App_TimeListener.h>
#include <app/Fuse.AppBase.h>
#include <app/Fuse.BeginRemoveArgs.h>
#include <app/Fuse.BeginRemoveHandler.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.DataContextChangedArgs.h>
#include <app/Fuse.DataContextChangedHandler.h>
#include <app/Fuse.Diagnostics.h>
#include <app/Fuse.DrawArgs.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.DrawHandler.h>
#include <app/Fuse.DrawHelpers.h>
#include <app/Fuse.Drawing.Polygon.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.FixedViewport.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Fonts.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.FramebufferPoolImpl.h>
#include <app/Fuse.FrustumViewport.h>
#include <app/Fuse.GraphicsTheme.h>
#include <app/Fuse.HitTestCallback.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestHandler.h>
#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.IFrustum.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusNavigationDirection.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Internal.FrustumMatrix.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.IOutput__Fuse_Drawing_Polygon.h>
#include <app/Fuse.ITranslationMode.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.KeyboardBootstrapper.h>
#include <app/Fuse.Launcher.h>
#include <app/Fuse.LayoutDependent.h>
#include <app/Fuse.MobileBootstrapping.h>
#include <app/Fuse.NativeTheme.h>
#include <app/Fuse.NativeWithFallbackTheme.h>
#include <app/Fuse.NativeWithFallbackTheme_CreateTheme.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Node_HitTestRecord.h>
#include <app/Fuse.Node_NodeBits.h>
#include <app/Fuse.Node_RootStage.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.NodeDrawCount.h>
#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.NodeEventHandler.h>
#include <app/Fuse.NodeEventMode.h>
#include <app/Fuse.OrthographicFrustum.h>
#include <app/Fuse.PerspectiveFrustum.h>
#include <app/Fuse.PlacedArgs.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Preview.SelectionManager.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.PropertyState.h>
#include <app/Fuse.RenderTargetEntry.h>
#include <app/Fuse.RequestBringIntoViewArgs.h>
#include <app/Fuse.RequestBringIntoViewHandler.h>
#include <app/Fuse.RequiresRootedException.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.DisposalRequest.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.Rotation.h>
#include <app/Fuse.Scaling.h>
#include <app/Fuse.Scripting.IEventSerializer.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Fuse.Shear.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Stage.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty.h>
#include <app/Fuse.StyleProperty__Fuse_Node__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Node__string.h>
#include <app/Fuse.SumDrawCount.h>
#include <app/Fuse.Theme.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.Timer.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.TranslationModes_LocalMode.h>
#include <app/Fuse.TranslationModes_ParentSizeMode.h>
#include <app/Fuse.TranslationModes_SizeMode.h>
#include <app/Fuse.UnhandledExceptionArgs.h>
#include <app/Fuse.UnhandledExceptionHandler.h>
#include <app/Fuse.UpdateDispatcher.h>
#include <app/Fuse.UpdateListener.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLClearBufferMask.h>
#include <app/OpenGL.GLEnableCap.h>
#include <app/OpenGL.GLError.h>
#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/OpenGL.GLFramebufferTarget.h>
#include <app/OpenGL.GLInteger4Name.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Behavior.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Node__bool.h>
#include <app/Uno.Action__Fuse_Style.h>
#include <app/Uno.Action__Fuse_Transform.h>
#include <app/Uno.Action__object__object.h>
#include <app/Uno.Action__object__object__.h>
#include <app/Uno.Action__Uno_UX_ITemplate.h>
#include <app/Uno.Action__Uno_UX_Resource.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.ConcurrentCollection__Uno_EventHandler.h>
#include <app/Uno.Collections.Dictionary__framebuffer__int.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__Uno_Content_Font-acd5257b.h>
#include <app/Uno.Collections.HashSet__framebuffer.h>
#include <app/Uno.Collections.HashSet__Fuse_IFlush.h>
#include <app/Uno.Collections.HashSet__Fuse_Node.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_IFlush.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_IViewport.h>
#include <app/Uno.Collections.IList__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.IList__int4.h>
#include <app/Uno.Collections.IList__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.List__framebuffer.h>
#include <app/Uno.Collections.List__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.List__Fuse_IViewport.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.List__Fuse_Stage.h>
#include <app/Uno.Collections.List__Fuse_Style.h>
#include <app/Uno.Collections.List__Fuse_StyleProperty.h>
#include <app/Uno.Collections.List__Fuse_UpdateListener.h>
#include <app/Uno.Collections.List__int4.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Collections.List__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.ObservableList__Fuse_Behavior.h>
#include <app/Uno.Collections.ObservableList__Fuse_Style.h>
#include <app/Uno.Collections.ObservableList__Fuse_Transform.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_Resource.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_EventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Fuse_Node__bool.h>
#include <app/Uno.Geometry.Collision.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.FramebufferFlags.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Net.Http.Uri.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.ApplicationState.h>
#include <app/Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Type.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.Vector.h>
//~
JNFUN(void,Binding_Fuse_App_FrameCallback__doFrame21642,jlong ujPtr, jlong arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JTRY
    ::app::Android::android::view::ChoreographerDLRFrameCallback::doFrame(uPtr, ((::uLong)arg0));
    JCATCH
}
JNFUN(void,Binding_Fuse_App_TimeListener__onTimeUpdate375,jlong ujPtr, jobject arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg3,::app::Android::android::animation::TimeAnimator*,((::app::Android::android::animation::TimeAnimator*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::animation::TimeAnimator__typeof(), false, true, true)));
    JTRY
    ::app::Android::android::animation::TimeAnimatorDLRTimeListener::onTimeUpdate(uPtr, tmparg3, ((::uLong)arg1), ((::uLong)arg2));
    JCATCH
}

namespace app {
namespace Fuse {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

App__uType* App__typeof()
{
    static ::uStaticStrong<App__uType*> type;
    if (type != NULL) return type;

    type = (App__uType*)::uAllocClassType(sizeof(App__uType), "Fuse.App", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::AppBase__typeof());
    type->__fp_OnSetRootNode = (void(*)(::app::Fuse::AppBase*, ::app::Fuse::Node*))App__OnSetRootNode;
    type->__fp_OnSetTheme = (void(*)(::app::Fuse::AppBase*, ::app::Fuse::Theme*))App__OnSetTheme;

    type->SetStrongRefs(
        "_graphicsView", offsetof(App, _graphicsView));

    type->SetFields(1,
        ::uNewField("_graphicsView", NULL, offsetof(App, _graphicsView), ::app::Fuse::Controls::GraphicsView__typeof()));

    type->SetFunctions(1,
        ::uNewFunctionVoid("PropagateBackground", App__PropagateBackground, 0, false));

    ::uRegisterType(type);
    return type;
}

void App___ObjInit_2(App* __this)
{
    ::app::Fuse::AppBase___ObjInit_1(__this);
    ::app::Fuse::MobileBootstrapping__Init(NULL);
    __this->RootViewport(::app::Fuse::RootViewport__New_1(NULL, __this->Window(), -1.0f));
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Styles()), (::app::Fuse::Style*)::app::Fuse::Android::NativeStyle__New_2(NULL));

    if (::app::Android::android::os::BuildDLRVERSION__get_SDK_INT(NULL) >= 16)
    {
        ::app::Android::android::view::Choreographer* choreographer = ::app::Android::android::view::Choreographer__getInstance(NULL);
        ::uPtr< ::app::Android::android::view::Choreographer*>(choreographer)->postFrameCallback((::uObject*)::app::Fuse::App_FrameCallback__New_5(NULL, __this));
    }
    else
    {
        ::app::Android::android::animation::TimeAnimator* anim = ::app::Android::android::animation::TimeAnimator__New_7(NULL);
        ::uPtr< ::app::Android::android::animation::TimeAnimator*>(anim)->setDuration(100000000000ll);
        anim->setTimeListener((::uObject*)::app::Fuse::App_TimeListener__New_5(NULL, __this));
        anim->start();
    }
}

void App__OnSetRootNode(App* __this, ::app::Fuse::Node* root)
{
    if (__this->_graphicsView != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->_graphicsView)->Content(root);
    }
    else
    {
        ::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Content(root);
    }
}

void App__OnSetTheme(App* __this, ::app::Fuse::Theme* theme)
{
    if (::uIs(theme, ::app::Fuse::GraphicsTheme__typeof()))
    {
        if (__this->_graphicsView == NULL)
        {
            if (::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Content() != NULL)
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("RootViewport.Content is not null, unroot before changing theme")));
            }

            __this->_graphicsView = ::app::Fuse::Controls::GraphicsView__New_2(NULL);
            ::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Content((::app::Fuse::Node*)__this->_graphicsView);
        }
    }
    else
    {
        if (__this->_graphicsView != NULL)
        {
            if (::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->_graphicsView)->Content() != NULL)
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("RootViewport.Content is not null, unroot before changing theme")));
            }

            __this->_graphicsView = NULL;
            ::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Content(NULL);
        }
    }
}

void App__PropagateBackground(App* __this)
{
    if (__this->_graphicsView != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->_graphicsView)->Background_1(__this->Background());
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass App_FrameCallback___javaClass_2;

App_FrameCallback__uType* App_FrameCallback__typeof()
{
    static ::uStaticStrong<App_FrameCallback__uType*> type;
    if (type != NULL) return type;

    type = (App_FrameCallback__uType*)::uAllocClassType(sizeof(App_FrameCallback__uType), "Fuse.App.FrameCallback", false, 3, 2, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_doFrame = (void(*)(void*, ::uLong))App_FrameCallback__doFrame;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(App_FrameCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(App_FrameCallback__uType, __interface_1),
        ::app::Android::android::view::ChoreographerDLRFrameCallback__typeof(), offsetof(App_FrameCallback__uType, __interface_2));

    type->SetStrongRefs(
        "_app", offsetof(App_FrameCallback, _app),
        "_choreographer", offsetof(App_FrameCallback, _choreographer));

    return type;
}

void App_FrameCallback___ObjInit_4(App_FrameCallback* __this, ::app::Fuse::App* app)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_App_FrameCallback");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, App_FrameCallback___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        App_FrameCallback___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_App_FrameCallback"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_doFrame","(JJJ)V",Binding_Fuse_App_FrameCallback__doFrame21642);
        COMMIT_REG_MTD(App_FrameCallback___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_app = app;
    __this->_prevTimeNanos = ::app::Android::java::lang::System__nanoTime(NULL);
    __this->_choreographer = ::app::Android::android::view::Choreographer__getInstance(NULL);
}

void App_FrameCallback__doFrame(App_FrameCallback* __this, ::uLong frameTimeNanos)
{
    ::uPtr< ::app::Android::android::view::Choreographer*>(__this->_choreographer)->postFrameCallback((::uObject*)__this);
    GLHelper::SwapBackToBackgroundSurface();

    try
    {
        ::uPtr< ::app::Fuse::App*>(__this->_app)->PropagateBackground();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }

    double currentTime = (double)frameTimeNanos * 1e-09;
    double deltaTime = (double)(frameTimeNanos - __this->_prevTimeNanos) * 1e-09;
    ::app::Fuse::Time__Set(NULL, currentTime, deltaTime);

    try
    {
        ::uPtr< ::app::Fuse::App*>(__this->_app)->OnUpdate();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }

    __this->_prevTimeNanos = frameTimeNanos;
}

App_FrameCallback* App_FrameCallback__New_5(::uStatic* __this, ::app::Fuse::App* app)
{
    App_FrameCallback* inst = (App_FrameCallback*)::uAllocObject(sizeof(App_FrameCallback), App_FrameCallback__typeof());
    inst->_ObjInit_4(app);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass App_TimeListener___javaClass_2;

App_TimeListener__uType* App_TimeListener__typeof()
{
    static ::uStaticStrong<App_TimeListener__uType*> type;
    if (type != NULL) return type;

    type = (App_TimeListener__uType*)::uAllocClassType(sizeof(App_TimeListener__uType), "Fuse.App.TimeListener", false, 3, 1, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onTimeUpdate = (void(*)(void*, ::app::Android::android::animation::TimeAnimator*, ::uLong, ::uLong))App_TimeListener__onTimeUpdate;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(App_TimeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(App_TimeListener__uType, __interface_1),
        ::app::Android::android::animation::TimeAnimatorDLRTimeListener__typeof(), offsetof(App_TimeListener__uType, __interface_2));

    type->SetStrongRefs(
        "_app", offsetof(App_TimeListener, _app));

    return type;
}

void App_TimeListener___ObjInit_4(App_TimeListener* __this, ::app::Fuse::App* app)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_App_TimeListener");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, App_TimeListener___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        App_TimeListener___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_App_TimeListener"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTimeUpdate","(JLandroid/animation/TimeAnimator;JJJJJ)V",Binding_Fuse_App_TimeListener__onTimeUpdate375);
        COMMIT_REG_MTD(App_TimeListener___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_app = app;
}

App_TimeListener* App_TimeListener__New_5(::uStatic* __this, ::app::Fuse::App* app)
{
    App_TimeListener* inst = (App_TimeListener*)::uAllocObject(sizeof(App_TimeListener), App_TimeListener__typeof());
    inst->_ObjInit_4(app);
    return inst;
}

void App_TimeListener__onTimeUpdate(App_TimeListener* __this, ::app::Android::android::animation::TimeAnimator* animation, ::uLong totalTime, ::uLong deltaTime)
{
    try
    {
        ::uPtr< ::app::Fuse::App*>(__this->_app)->PropagateBackground();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }

    ::app::Fuse::Time__Set(NULL, (double)totalTime / 1000.0, (double)deltaTime / 1000.0);

    try
    {
        ::uPtr< ::app::Fuse::App*>(__this->_app)->OnUpdate();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AppBase__uType* AppBase__typeof()
{
    static ::uStaticStrong<AppBase__uType*> type;
    if (type != NULL) return type;

    type = (AppBase__uType*)::uAllocClassType(sizeof(AppBase__uType), "Fuse.AppBase", false, 0, 7, 0);

    type->SetBaseType(::app::Uno::Application__typeof());
    type->__fp_OnSetTheme = AppBase__OnSetTheme;
    type->__fp_OnUpdate = AppBase__OnUpdate;

    type->SetStrongRefs(
        "_pendingRootNode", offsetof(AppBase, _pendingRootNode),
        "_pendingTheme", offsetof(AppBase, _pendingTheme),
        "_rootNode", offsetof(AppBase, _rootNode),
        "_RootViewport", offsetof(AppBase, _RootViewport),
        "_selection", offsetof(AppBase, _selection),
        "_theme", offsetof(AppBase, _theme),
        "UnhandledException", offsetof(AppBase, UnhandledException));

    type->SetFields(6,
        ::uNewField("_hasPendingRootNode", NULL, offsetof(AppBase, _hasPendingRootNode), ::app::Uno::Bool__typeof()),
        ::uNewField("_pendingRootNode", NULL, offsetof(AppBase, _pendingRootNode), ::app::Fuse::Node__typeof()),
        ::uNewField("_pendingTheme", NULL, offsetof(AppBase, _pendingTheme), ::app::Fuse::Theme__typeof()),
        ::uNewField("_rootNode", NULL, offsetof(AppBase, _rootNode), ::app::Fuse::Node__typeof()),
        ::uNewField("_selection", NULL, offsetof(AppBase, _selection), ::app::Uno::Collections::List__Fuse_Node__typeof()),
        ::uNewField("_theme", NULL, offsetof(AppBase, _theme), ::app::Fuse::Theme__typeof()));

    type->SetFunctions(24,
        ::uNewFunctionVoid("add_UnhandledException", AppBase__add_UnhandledException, 0, false, ::app::Fuse::UnhandledExceptionHandler__typeof()),
        ::uNewFunctionVoid("CheckPending", AppBase__CheckPending, 0, false),
        ::uNewFunctionVoid("DrawSelection", AppBase__DrawSelection, 0, false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("FindSelection", AppBase__FindSelection, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Background", AppBase__get_Background, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Behaviors", AppBase__get_Behaviors, 0, false, ::app::Uno::Collections::IList__Fuse_Behavior__typeof()),
        ::uNewFunction("get_Current", AppBase__get_Current_1, 0, true, AppBase__typeof()),
        ::uNewFunction("get_Resources", AppBase__get_Resources, 0, false, ::app::Uno::Collections::IList__Uno_UX_Resource__typeof()),
        ::uNewFunction("get_RootNode", AppBase__get_RootNode, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_RootViewport", AppBase__get_RootViewport, 0, false, ::app::Fuse::RootViewport__typeof()),
        ::uNewFunction("get_Theme", AppBase__get_Theme, 0, false, ::app::Fuse::Theme__typeof()),
        ::uNewFunctionVoid("OnEnteringBackground", AppBase__OnEnteringBackground, 0, false, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnLowMemory", AppBase__OnLowMemory, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnSelectionChanged", AppBase__OnSelectionChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnSetRootNode", type->__fp_OnSetRootNode, offsetof(AppBase__uType, __fp_OnSetRootNode), false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnSetTheme", type->__fp_OnSetTheme, offsetof(AppBase__uType, __fp_OnSetTheme), false, ::app::Fuse::Theme__typeof()),
        ::uNewFunctionVoid("OnUnhandledException", AppBase__OnUnhandledException, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("OnUnhandledExceptionInternal", AppBase__OnUnhandledExceptionInternal, 0, true, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("OnUpdate", type->__fp_OnUpdate, offsetof(AppBase__uType, __fp_OnUpdate), false),
        ::uNewFunctionVoid("remove_UnhandledException", AppBase__remove_UnhandledException, 0, false, ::app::Fuse::UnhandledExceptionHandler__typeof()),
        ::uNewFunctionVoid("set_Background", AppBase__set_Background, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_RootNode", AppBase__set_RootNode, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_RootViewport", AppBase__set_RootViewport, 0, false, ::app::Fuse::RootViewport__typeof()),
        ::uNewFunctionVoid("set_Theme", AppBase__set_Theme, 0, false, ::app::Fuse::Theme__typeof()));

    ::uRegisterType(type);
    return type;
}

void AppBase___ObjInit_1(AppBase* __this)
{
    __this->_selection = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    __this->_pendingTheme = ::app::Fuse::GraphicsTheme__get_Singleton(NULL);
    ::app::Uno::Application___ObjInit(__this);
    __this->ClearColor(::app::Uno::Float4__New_1(NULL, 1.0f));
    {
        ::app::Uno::Platform2::Application__add_EnteringBackground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)AppBase__OnEnteringBackground, __this));
        ::app::Uno::Platform2::Application__add_ReceivedLowMemoryWarning(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)AppBase__OnLowMemory, __this));
    }

    ::app::Fuse::Preview::SelectionManager__add_SelectionChanged(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_EventArgs__typeof(), (const void*)AppBase__OnSelectionChanged, __this));
}

void AppBase__add_UnhandledException(AppBase* __this, ::uDelegate* value)
{
    __this->UnhandledException = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->UnhandledException, (::uDelegate*)value), ::app::Fuse::UnhandledExceptionHandler__typeof());
}

void AppBase__CheckPending(AppBase* __this)
{
    if ((__this->_pendingTheme == NULL) && !__this->_hasPendingRootNode)
    {
        return;
    }

    if (__this->_pendingTheme != NULL)
    {
        __this->OnSetRootNode(NULL);

        if (__this->_theme != NULL)
        {
            ::app::Uno::Collections::ICollection__Fuse_Style::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Styles()), (::app::Fuse::Style*)__this->_theme);
        }

        __this->_theme = __this->_pendingTheme;
        __this->OnSetTheme(__this->_theme);

        if (__this->_theme != NULL)
        {
            ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Styles()), (::app::Fuse::Style*)__this->_theme);
        }

        __this->_pendingTheme = NULL;
    }

    if (__this->_hasPendingRootNode)
    {
        __this->_rootNode = __this->_pendingRootNode;
        __this->_pendingRootNode = NULL;
        __this->_hasPendingRootNode = false;
    }

    __this->OnSetRootNode(__this->_rootNode);
}

void AppBase__DrawSelection(AppBase* __this, ::app::Fuse::DrawContext* dc)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_selection)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Node* n = enum_123.Current();
        ::uPtr< ::app::Fuse::Node*>(n)->DrawSelection(dc);
    }
}

void AppBase__FindSelection(AppBase* __this, ::app::Fuse::Node* n)
{
    if (::app::Fuse::Preview::SelectionManager__IsSelected(NULL, (::uObject*)n))
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_selection)->Add(n);
    }
}

::app::Uno::Float4 AppBase__get_Background(AppBase* __this)
{
    return __this->ClearColor();
}

::uObject* AppBase__get_Behaviors(AppBase* __this)
{
    return ::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Behaviors();
}

AppBase* AppBase__get_Current_1(::uStatic* __this)
{
    return ::uAs< AppBase*>(::app::Uno::Application__get_Current(NULL), AppBase__typeof());
}

::uObject* AppBase__get_Resources(AppBase* __this)
{
    return ::uPtr< ::app::Fuse::RootViewport*>(__this->RootViewport())->Resources();
}

::app::Fuse::Node* AppBase__get_RootNode(AppBase* __this)
{
    return __this->_hasPendingRootNode ? __this->_pendingRootNode : __this->_rootNode;
}

::app::Fuse::RootViewport* AppBase__get_RootViewport(AppBase* __this)
{
    return __this->_RootViewport;
}

::app::Fuse::Theme* AppBase__get_Theme(AppBase* __this)
{
    ::app::Fuse::Theme* ind_124 = __this->_pendingTheme;
    return (ind_124 != NULL) ? ind_124 : __this->_theme;
}

void AppBase__OnEnteringBackground(AppBase* __this, int s)
{
    ::app::Fuse::Resources::DisposalManager__Clean(NULL, 1);
}

void AppBase__OnLowMemory(AppBase* __this, ::uObject* s, ::uObject* a)
{
    ::app::Fuse::Resources::DisposalManager__Clean(NULL, 2);
}

void AppBase__OnSelectionChanged(AppBase* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_selection)->Clear();

    if (__this->RootNode() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->RootNode())->VisitSubtree(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)AppBase__FindSelection, __this));
    }
}

void AppBase__OnSetTheme(AppBase* __this, ::app::Fuse::Theme* theme)
{
}

void AppBase__OnUnhandledException(AppBase* __this, ::app::Uno::Exception* e)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->UnhandledException, NULL))
    {
        ::app::Fuse::UnhandledExceptionArgs* args = ::app::Fuse::UnhandledExceptionArgs__New_2(NULL, e);
        ::uPtr< ::uDelegate*>(__this->UnhandledException)->InvokeVoid< ::uObject*, ::app::Fuse::UnhandledExceptionArgs*>((::uObject*)__this, args);

        if (::uPtr< ::app::Fuse::UnhandledExceptionArgs*>(args)->IsHandled())
        {
            return;
        }
    }
    else
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unhandled exception: \n\n"), ::uPtr< ::app::Uno::Exception*>(e)->Message()), ::uGetConstString("\n\n")), ::uPtr< ::app::Uno::Exception*>(e)->StackTrace()), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 94);
    }

    U_THROW(e);
}

void AppBase__OnUnhandledExceptionInternal(::uStatic* __this, ::app::Uno::Exception* e)
{
    AppBase* app = ::uAs< AppBase*>(AppBase__get_Current_1(NULL), AppBase__typeof());

    if (app != NULL)
    {
        ::uPtr< AppBase*>(app)->OnUnhandledException(e);
    }
}

void AppBase__OnUpdate(AppBase* __this)
{
    __this->CheckPending();
    ::app::Fuse::UpdateManager__Update(NULL);
    ::app::Fuse::UpdateManager__IncreaseFrameIndex(NULL);
    ::app::Fuse::Node__ProcessNeedsStyling(NULL);
}

void AppBase__remove_UnhandledException(AppBase* __this, ::uDelegate* value)
{
    __this->UnhandledException = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->UnhandledException, (::uDelegate*)value), ::app::Fuse::UnhandledExceptionHandler__typeof());
}

void AppBase__set_Background(AppBase* __this, ::app::Uno::Float4 value)
{
    __this->ClearColor(value);
}

void AppBase__set_RootNode(AppBase* __this, ::app::Fuse::Node* value)
{
    if (__this->_rootNode != value)
    {
        __this->_pendingRootNode = value;
        __this->_hasPendingRootNode = true;
    }
}

void AppBase__set_RootViewport(AppBase* __this, ::app::Fuse::RootViewport* value)
{
    __this->_RootViewport = value;
}

void AppBase__set_Theme(AppBase* __this, ::app::Fuse::Theme* value)
{
    ::app::Fuse::Theme* ind_125;

    if ((ind_125 = __this->_pendingTheme, ((ind_125 != NULL) ? ind_125 : __this->_theme)) != value)
    {
        __this->_pendingTheme = value;
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BeginRemoveArgs__uType* BeginRemoveArgs__typeof()
{
    static ::uStaticStrong<BeginRemoveArgs__uType*> type;
    if (type != NULL) return type;

    type = (BeginRemoveArgs__uType*)::uAllocClassType(sizeof(BeginRemoveArgs__uType), "Fuse.BeginRemoveArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFields(1,
        ::uNewField("subscribers", NULL, offsetof(BeginRemoveArgs, subscribers), ::app::Uno::Int__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("AddSubscriber", BeginRemoveArgs__AddSubscriber, 0, false),
        ::uNewFunction("get_HasSubscribers", BeginRemoveArgs__get_HasSubscribers, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Remove", type->__fp_Remove, offsetof(BeginRemoveArgs__uType, __fp_Remove), false),
        ::uNewFunctionVoid("RemoveSubscriber", BeginRemoveArgs__RemoveSubscriber, 0, false));

    ::uRegisterType(type);
    return type;
}

void BeginRemoveArgs___ObjInit_1(BeginRemoveArgs* __this)
{
    ::app::Uno::EventArgs___ObjInit(__this);
}

void BeginRemoveArgs__AddSubscriber(BeginRemoveArgs* __this)
{
    __this->subscribers++;
}

bool BeginRemoveArgs__get_HasSubscribers(BeginRemoveArgs* __this)
{
    return __this->subscribers > 0;
}

void BeginRemoveArgs__RemoveSubscriber(BeginRemoveArgs* __this)
{
    __this->subscribers--;

    if (__this->subscribers == 0)
    {
        __this->Remove();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* BeginRemoveHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.BeginRemoveHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::BeginRemoveArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Behavior__uType* Behavior__typeof()
{
    static ::uStaticStrong<Behavior__uType*> type;
    if (type != NULL) return type;

    type = (Behavior__uType*)::uAllocClassType(sizeof(Behavior__uType), "Fuse.Behavior", false, 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_isRooted", NULL, offsetof(Behavior, _isRooted), ::app::Uno::Bool__typeof()),
        ::uNewField("AddedByStyle", NULL, offsetof(Behavior, AddedByStyle), ::app::Uno::Bool__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("get_IsRooted", Behavior__get_IsRooted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_OverridesDefault", Behavior__get_OverridesDefault, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnRooted", type->__fp_OnRooted, offsetof(Behavior__uType, __fp_OnRooted), false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnUnrooted", type->__fp_OnUnrooted, offsetof(Behavior__uType, __fp_OnUnrooted), false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Rooted", Behavior__Rooted, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Unrooted", Behavior__Unrooted, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void Behavior___ObjInit(Behavior* __this)
{
}

bool Behavior__get_IsRooted(Behavior* __this)
{
    return __this->_isRooted;
}

bool Behavior__get_OverridesDefault(Behavior* __this)
{
    return false;
}

void Behavior__Rooted(Behavior* __this, ::app::Fuse::Node* e)
{
    if (__this->_isRooted)
    {
        return;
    }

    __this->_isRooted = true;
    __this->OnRooted(e);
}

void Behavior__Unrooted(Behavior* __this, ::app::Fuse::Node* e)
{
    if (!__this->_isRooted)
    {
        return;
    }

    __this->_isRooted = false;
    __this->OnUnrooted(e);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CacheFramebuffer__uType* CacheFramebuffer__typeof()
{
    static ::uStaticStrong<CacheFramebuffer__uType*> type;
    if (type != NULL) return type;

    type = (CacheFramebuffer__uType*)::uAllocClassType(sizeof(CacheFramebuffer__uType), "Fuse.CacheFramebuffer", false, 0, 2, 0);

    type->SetStrongRefs(
        "_fb", offsetof(CacheFramebuffer, _fb),
        "_owner", offsetof(CacheFramebuffer, _owner));

    type->SetFields(5,
        ::uNewField("_fb", NULL, offsetof(CacheFramebuffer, _fb), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewField("_isContentValid", NULL, offsetof(CacheFramebuffer, _isContentValid), ::app::Uno::Bool__typeof()),
        ::uNewField("_isPinned", NULL, offsetof(CacheFramebuffer, _isPinned), ::app::Uno::Bool__typeof()),
        ::uNewField("_lastFrameUsed", NULL, offsetof(CacheFramebuffer, _lastFrameUsed), ::app::Uno::Int__typeof()),
        ::uNewField("_owner", NULL, offsetof(CacheFramebuffer, _owner), ::uObject__typeof()));

    type->SetFunctions(20,
        ::uNewFunctionVoid("Collect", CacheFramebuffer__Collect, 0, false),
        ::uNewFunctionVoid("Dispose", CacheFramebuffer__Dispose, 0, false),
        ::uNewFunctionVoid("EnsurePinned", CacheFramebuffer__EnsurePinned, 0, false),
        ::uNewFunction("get_Flags", CacheFramebuffer__get_Flags, 0, false, ::app::Uno::Graphics::FramebufferFlags__typeof()),
        ::uNewFunction("get_Format", CacheFramebuffer__get_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunction("get_Framebuffer", CacheFramebuffer__get_Framebuffer, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("get_FramesSinceLastUse", CacheFramebuffer__get_FramesSinceLastUse, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_HasValidContentIfPinned", CacheFramebuffer__get_HasValidContentIfPinned, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Height", CacheFramebuffer__get_Height, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_IsContentValid", CacheFramebuffer__get_IsContentValid, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsPinned", CacheFramebuffer__get_IsPinned, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Width", CacheFramebuffer__get_Width, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", CacheFramebuffer__New_1, 0, true, CacheFramebuffer__typeof(), ::uObject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Graphics::FramebufferFlags__typeof()),
        ::uNewFunctionVoid("Pin", CacheFramebuffer__Pin, 0, false),
        ::uNewFunctionVoid("Provide", CacheFramebuffer__Provide, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunctionVoid("set_Flags", CacheFramebuffer__set_Flags, 0, false, ::app::Uno::Graphics::FramebufferFlags__typeof()),
        ::uNewFunctionVoid("set_Format", CacheFramebuffer__set_Format, 0, false, ::app::Uno::Graphics::Format__typeof()),
        ::uNewFunctionVoid("set_Height", CacheFramebuffer__set_Height, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Width", CacheFramebuffer__set_Width, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Unpin", CacheFramebuffer__Unpin, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void CacheFramebuffer___ObjInit(CacheFramebuffer* __this, ::uObject* owner, int width, int height, int format, int flags)
{
    __this->_owner = owner;
    __this->Width(width);
    __this->Height(height);
    __this->Format(format);
    __this->Flags(flags);
}

void CacheFramebuffer__Collect(CacheFramebuffer* __this)
{
    if (__this->_fb != NULL)
    {
        ::app::Fuse::FramebufferPool__Release(NULL, __this->_fb);
    }

    __this->_fb = NULL;
    __this->_isContentValid = false;
}

void CacheFramebuffer__Dispose(CacheFramebuffer* __this)
{
    __this->Collect();
    ::app::Fuse::FramebufferPool__UnRegister(NULL, __this);
}

void CacheFramebuffer__EnsurePinned(CacheFramebuffer* __this)
{
    if (!__this->IsPinned())
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Cannot access unpinned CacheFramebuffer")));
    }
}

int CacheFramebuffer__get_Flags(CacheFramebuffer* __this)
{
    return __this->_Flags;
}

int CacheFramebuffer__get_Format(CacheFramebuffer* __this)
{
    return __this->_Format;
}

::app::Uno::Graphics::Framebuffer* CacheFramebuffer__get_Framebuffer(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
    return __this->_fb;
}

int CacheFramebuffer__get_FramesSinceLastUse(CacheFramebuffer* __this)
{
    return ::app::Fuse::FramebufferPool__get_Frame(NULL) - __this->_lastFrameUsed;
}

bool CacheFramebuffer__get_HasValidContentIfPinned(CacheFramebuffer* __this)
{
    return (__this->_fb != NULL) && __this->_isContentValid;
}

int CacheFramebuffer__get_Height(CacheFramebuffer* __this)
{
    return __this->_Height;
}

bool CacheFramebuffer__get_IsContentValid(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
    return __this->_isContentValid;
}

bool CacheFramebuffer__get_IsPinned(CacheFramebuffer* __this)
{
    return __this->_isPinned;
}

int CacheFramebuffer__get_Width(CacheFramebuffer* __this)
{
    return __this->_Width;
}

CacheFramebuffer* CacheFramebuffer__New_1(::uStatic* __this, ::uObject* owner, int width, int height, int format, int flags)
{
    CacheFramebuffer* inst = (CacheFramebuffer*)::uAllocObject(sizeof(CacheFramebuffer), CacheFramebuffer__typeof());
    inst->_ObjInit(owner, width, height, format, flags);
    return inst;
}

void CacheFramebuffer__Pin(CacheFramebuffer* __this)
{
    __this->_isPinned = true;
    __this->_lastFrameUsed = ::app::Fuse::FramebufferPool__get_Frame(NULL);

    if (__this->_fb == NULL)
    {
        __this->_fb = ::app::Fuse::FramebufferPool__Lock(NULL, __this->Width(), __this->Height(), __this->Format(), (__this->Flags() & 1) == 1);
        ::app::Fuse::FramebufferPool__Register(NULL, __this);
    }
}

void CacheFramebuffer__Provide(CacheFramebuffer* __this, ::app::Uno::Graphics::Framebuffer* fb)
{
    if (__this->_fb != fb)
    {
        __this->_isContentValid = false;
    }

    __this->_fb = fb;
}

void CacheFramebuffer__set_Flags(CacheFramebuffer* __this, int value)
{
    __this->_Flags = value;
}

void CacheFramebuffer__set_Format(CacheFramebuffer* __this, int value)
{
    __this->_Format = value;
}

void CacheFramebuffer__set_Height(CacheFramebuffer* __this, int value)
{
    __this->_Height = value;
}

void CacheFramebuffer__set_Width(CacheFramebuffer* __this, int value)
{
    __this->_Width = value;
}

void CacheFramebuffer__Unpin(CacheFramebuffer* __this, bool validate)
{
    __this->EnsurePinned();
    __this->_isPinned = false;

    if (validate)
    {
        __this->_isContentValid = true;
    }

    __this->_lastFrameUsed = ::app::Fuse::FramebufferPool__get_Frame(NULL);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataContextChangedArgs__uType* DataContextChangedArgs__typeof()
{
    static ::uStaticStrong<DataContextChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (DataContextChangedArgs__uType*)::uAllocClassType(sizeof(DataContextChangedArgs__uType), "Fuse.DataContextChangedArgs", false, 0, 3, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_NewValue", offsetof(DataContextChangedArgs, _NewValue),
        "_Node", offsetof(DataContextChangedArgs, _Node),
        "_OldValue", offsetof(DataContextChangedArgs, _OldValue));

    type->SetFunctions(7,
        ::uNewFunction("get_NewValue", DataContextChangedArgs__get_NewValue, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_Node", DataContextChangedArgs__get_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_OldValue", DataContextChangedArgs__get_OldValue, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", DataContextChangedArgs__New_2, 0, true, DataContextChangedArgs__typeof(), ::app::Fuse::Node__typeof(), ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_NewValue", DataContextChangedArgs__set_NewValue, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Node", DataContextChangedArgs__set_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_OldValue", DataContextChangedArgs__set_OldValue, 0, false, ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void DataContextChangedArgs___ObjInit_1(DataContextChangedArgs* __this, ::app::Fuse::Node* node, ::uObject* oldValue, ::uObject* newValue)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Node(node);
    __this->OldValue(oldValue);
    __this->NewValue(newValue);
}

::uObject* DataContextChangedArgs__get_NewValue(DataContextChangedArgs* __this)
{
    return __this->_NewValue;
}

::app::Fuse::Node* DataContextChangedArgs__get_Node(DataContextChangedArgs* __this)
{
    return __this->_Node;
}

::uObject* DataContextChangedArgs__get_OldValue(DataContextChangedArgs* __this)
{
    return __this->_OldValue;
}

DataContextChangedArgs* DataContextChangedArgs__New_2(::uStatic* __this, ::app::Fuse::Node* node, ::uObject* oldValue, ::uObject* newValue)
{
    DataContextChangedArgs* inst = (DataContextChangedArgs*)::uAllocObject(sizeof(DataContextChangedArgs), DataContextChangedArgs__typeof());
    inst->_ObjInit_1(node, oldValue, newValue);
    return inst;
}

void DataContextChangedArgs__set_NewValue(DataContextChangedArgs* __this, ::uObject* value)
{
    __this->_NewValue = value;
}

void DataContextChangedArgs__set_Node(DataContextChangedArgs* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

void DataContextChangedArgs__set_OldValue(DataContextChangedArgs* __this, ::uObject* value)
{
    __this->_OldValue = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* DataContextChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.DataContextChangedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::DataContextChangedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Diagnostics__uType* Diagnostics__typeof()
{
    static ::uStaticStrong<Diagnostics__uType*> type;
    if (type != NULL) return type;

    type = (Diagnostics__uType*)::uAllocClassType(sizeof(Diagnostics__uType), "Fuse.Diagnostics");

    type->SetFunctions(4,
        ::uNewFunctionVoid("Deprecated", Diagnostics__Deprecated, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Error", Diagnostics__Error, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("PerformanceWarning", Diagnostics__PerformanceWarning, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Unsupported", Diagnostics__Unsupported, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Diagnostics__Deprecated(::uStatic* __this, ::uString* msg, ::uObject* obj, ::uString* filePath, int lineNumber, ::uString* memberName)
{
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Deprecated: "), msg), ::uGetConstString(" ")), obj), 4, filePath, lineNumber);
}

void Diagnostics__Error(::uStatic* __this, ::uString* msg, ::uObject* obj, ::uString* filePath, int lineNumber, ::uString* memberName)
{
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, msg, ::uGetConstString(" ")), obj), 3, filePath, lineNumber);
}

void Diagnostics__PerformanceWarning(::uStatic* __this, ::uString* msg, ::uString* filePath, int lineNumber, ::uString* memberName)
{
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Performance Warning: "), msg), 4, filePath, lineNumber);
}

void Diagnostics__Unsupported(::uStatic* __this, ::uString* msg, ::uObject* obj, ::uString* filePath, int lineNumber, ::uString* memberName)
{
    ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported: "), msg), ::uGetConstString(" ")), obj), 4, filePath, lineNumber);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DrawArgs__uType* DrawArgs__typeof()
{
    static ::uStaticStrong<DrawArgs__uType*> type;
    if (type != NULL) return type;

    type = (DrawArgs__uType*)::uAllocClassType(sizeof(DrawArgs__uType), "Fuse.DrawArgs", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Context", offsetof(DrawArgs, _Context));

    type->SetFunctions(3,
        ::uNewFunction("get_Context", DrawArgs__get_Context, 0, false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunction(".ctor", DrawArgs__New_2, 0, true, DrawArgs__typeof(), ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("set_Context", DrawArgs__set_Context, 0, false, ::app::Fuse::DrawContext__typeof()));

    ::uRegisterType(type);
    return type;
}

void DrawArgs___ObjInit_1(DrawArgs* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Context(dc);
}

::app::Fuse::DrawContext* DrawArgs__get_Context(DrawArgs* __this)
{
    return __this->_Context;
}

DrawArgs* DrawArgs__New_2(::uStatic* __this, ::app::Fuse::DrawContext* dc)
{
    DrawArgs* inst = (DrawArgs*)::uAllocObject(sizeof(DrawArgs), DrawArgs__typeof());
    inst->_ObjInit_1(dc);
    return inst;
}

void DrawArgs__set_Context(DrawArgs* __this, ::app::Fuse::DrawContext* value)
{
    __this->_Context = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< DrawContext*> DrawContext___current;

DrawContext__uType* DrawContext__typeof()
{
    static ::uStaticStrong<DrawContext__uType*> type;
    if (type != NULL) return type;

    type = (DrawContext__uType*)::uAllocClassType(sizeof(DrawContext__uType), "Fuse.DrawContext", false, 0, 8, 0);

    type->SetStrongRefs(
        "_cullFaces", offsetof(DrawContext, _cullFaces),
        "_glScissors", offsetof(DrawContext, _glScissors),
        "_renderTarget", offsetof(DrawContext, _renderTarget),
        "_renderTargets", offsetof(DrawContext, _renderTargets),
        "_rootbuffer", offsetof(DrawContext, _rootbuffer),
        "_viewport", offsetof(DrawContext, _viewport),
        "_viewports", offsetof(DrawContext, _viewports),
        "flushSet", offsetof(DrawContext, flushSet));

    type->SetFields(14,
        ::uNewField("_cullFace", NULL, offsetof(DrawContext, _cullFace), ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewField("_cullFaces", NULL, offsetof(DrawContext, _cullFaces), ::app::Uno::Collections::List__Uno_Graphics_PolygonFace__typeof()),
        ::uNewField("_current", &DrawContext___current, 0, DrawContext__typeof()),
        ::uNewField("_glFramebuffer", NULL, offsetof(DrawContext, _glFramebuffer), ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewField("_glScissor", NULL, offsetof(DrawContext, _glScissor), ::app::Uno::Int4__typeof()),
        ::uNewField("_glScissors", NULL, offsetof(DrawContext, _glScissors), ::app::Uno::Collections::List__int4__typeof()),
        ::uNewField("_glViewport", NULL, offsetof(DrawContext, _glViewport), ::app::Uno::Int4__typeof()),
        ::uNewField("_handle", NULL, offsetof(DrawContext, _handle), ::app::Uno::Runtime::Implementation::GraphicsContextHandle__typeof()),
        ::uNewField("_renderTarget", NULL, offsetof(DrawContext, _renderTarget), ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewField("_renderTargets", NULL, offsetof(DrawContext, _renderTargets), ::app::Uno::Collections::List__Fuse_RenderTargetEntry__typeof()),
        ::uNewField("_rootbuffer", NULL, offsetof(DrawContext, _rootbuffer), ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewField("_viewport", NULL, offsetof(DrawContext, _viewport), ::app::Fuse::IViewport__typeof()),
        ::uNewField("_viewports", NULL, offsetof(DrawContext, _viewports), ::app::Uno::Collections::List__Fuse_IViewport__typeof()),
        ::uNewField("flushSet", NULL, offsetof(DrawContext, flushSet), ::app::Uno::Collections::HashSet__Fuse_IFlush__typeof()));

    type->SetFunctions(39,
        ::uNewFunctionVoid("AddFlushListener", DrawContext__AddFlushListener, 0, false, ::app::Fuse::IFlush__typeof()),
        ::uNewFunctionVoid("CaptureRootbuffer", DrawContext__CaptureRootbuffer, 0, false),
        ::uNewFunctionVoid("CheckGLError", DrawContext__CheckGLError, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Clear", DrawContext__Clear, 0, false, ::app::Uno::Float4__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Flush", DrawContext__Flush, 0, false),
        ::uNewFunction("get_CullFace", DrawContext__get_CullFace, 0, false, ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewFunction("get_Current", DrawContext__get_Current, 0, true, DrawContext__typeof()),
        ::uNewFunction("get_GLFramebuffer", DrawContext__get_GLFramebuffer, 0, false, ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewFunction("get_GLScissor", DrawContext__get_GLScissor, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunction("get_GLViewportPixelSize", DrawContext__get_GLViewportPixelSize, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_GLViewportPointSize", DrawContext__get_GLViewportPointSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_IsCaching", DrawContext__get_IsCaching, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_RenderTarget", DrawContext__get_RenderTarget, 0, false, ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewFunction("get_Scissor", DrawContext__get_Scissor, 0, false, ::app::Uno::Recti__typeof()),
        ::uNewFunction("get_Viewport", DrawContext__get_Viewport, 0, false, ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("get_ViewportPointDensity", DrawContext__get_ViewportPointDensity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("GetLocalToClipTransform", DrawContext__GetLocalToClipTransform, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetRenderTargetEntry", DrawContext__GetRenderTargetEntry, 0, false, ::app::Fuse::RenderTargetEntry__typeof()),
        ::uNewFunctionVoid("GLInconsistent", DrawContext__GLInconsistent, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("MakeCurrent", DrawContext__MakeCurrent, 0, false),
        ::uNewFunction(".ctor", DrawContext__New_1, 0, true, DrawContext__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunctionVoid("PopCullFace", DrawContext__PopCullFace, 0, false),
        ::uNewFunctionVoid("PopRenderTarget", DrawContext__PopRenderTarget, 0, false),
        ::uNewFunctionVoid("PopRenderTargetViewport", DrawContext__PopRenderTargetViewport, 0, false),
        ::uNewFunctionVoid("PopScissor", DrawContext__PopScissor, 0, false),
        ::uNewFunctionVoid("PopViewport", DrawContext__PopViewport, 0, false),
        ::uNewFunctionVoid("PushCullFace", DrawContext__PushCullFace, 0, false, ::app::Uno::Graphics::PolygonFace__typeof()),
        ::uNewFunctionVoid("PushRenderTarget", DrawContext__PushRenderTarget, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunctionVoid("PushRenderTarget", DrawContext__PushRenderTarget_1, 0, false, ::app::Uno::Graphics::RenderTarget__typeof()),
        ::uNewFunctionVoid("PushRenderTarget", DrawContext__PushRenderTarget_2, 0, false, ::app::Uno::Graphics::RenderTarget__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Int4__typeof()),
        ::uNewFunctionVoid("PushRenderTargetViewport", DrawContext__PushRenderTargetViewport, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Fuse::IFrustum__typeof()),
        ::uNewFunctionVoid("PushScissor", DrawContext__PushScissor, 0, false, ::app::Uno::Recti__typeof()),
        ::uNewFunctionVoid("PushViewport", DrawContext__PushViewport, 0, false, ::app::Fuse::IViewport__typeof()),
        ::uNewFunctionVoid("ReleaseRootbuffer", DrawContext__ReleaseRootbuffer, 0, false),
        ::uNewFunctionVoid("set_GLFramebuffer", DrawContext__set_GLFramebuffer, 0, false, ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewFunctionVoid("set_GLScissor", DrawContext__set_GLScissor, 0, false, ::app::Uno::Int4__typeof()),
        ::uNewFunctionVoid("set_GLViewportPixelSize", DrawContext__set_GLViewportPixelSize, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("set_IsCaching", DrawContext__set_IsCaching, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Scissor", DrawContext__set_Scissor, 0, false, ::app::Uno::Recti__typeof()));

    ::uRegisterType(type);
    return type;
}

void DrawContext___ObjInit(DrawContext* __this, ::uObject* viewport)
{
    __this->_viewports = ::app::Uno::Collections::List__Fuse_IViewport__New_1(NULL);
    __this->_renderTargets = ::app::Uno::Collections::List__Fuse_RenderTargetEntry__New_1(NULL);
    __this->_glScissors = ::app::Uno::Collections::List__int4__New_1(NULL);
    __this->_cullFaces = ::app::Uno::Collections::List__Uno_Graphics_PolygonFace__New_1(NULL);
    __this->_handle = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetInstance(NULL);
    __this->_viewport = viewport;
    __this->_rootbuffer = ::app::Uno::Graphics::RenderTarget__New_1(NULL);
    __this->_renderTarget = __this->_rootbuffer;
}

void DrawContext__AddFlushListener(DrawContext* __this, ::uObject* f)
{
    if (__this->flushSet == NULL)
    {
        __this->flushSet = ::app::Uno::Collections::HashSet__Fuse_IFlush__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::HashSet__Fuse_IFlush*>(__this->flushSet)->Add(f);
}

void DrawContext__CaptureRootbuffer(DrawContext* __this)
{
    {
        ::app::OpenGL::GL__Enable(NULL, 3089);
        __this->CheckGLError(::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 500, ::uGetConstString("CaptureRootbuffer"));
        __this->_glScissor = ::app::OpenGL::GL__GetInteger(NULL, 3088);
        __this->_glViewport = ::app::OpenGL::GL__GetInteger(NULL, 2978);
        __this->_glFramebuffer = ::app::OpenGL::GL__GetFramebufferBinding(NULL);
        ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_rootbuffer)->GLFramebufferHandle(__this->_glFramebuffer);
        ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_rootbuffer)->Size(::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferSize(NULL, __this->_handle));
        ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_rootbuffer)->HasDepth(true);
    }
}

void DrawContext__CheckGLError(DrawContext* __this, ::uString* filePath, int lineNumber, ::uString* memberName)
{
    {
        {
            int e = ::app::OpenGL::GL__GetError(NULL);

            if (e != 0)
            {
                ::app::Fuse::Diagnostics__Error(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString(""), ::uBox< int>(::app::OpenGL::GLError__typeof(), e)), (::uObject*)__this, filePath, lineNumber, memberName);
            }
        }
    }
}

void DrawContext__Clear(DrawContext* __this, ::app::Uno::Float4 color, float depth)
{
    {
        ::app::OpenGL::GL__ClearDepth(NULL, depth);
        ::app::OpenGL::GL__ClearColor(NULL, color.X, color.Y, color.Z, color.W);
        ::app::OpenGL::GL__Clear(NULL, 17664);
        __this->CheckGLError(::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 627, ::uGetConstString("Clear"));
    }
}

void DrawContext__Flush(DrawContext* __this)
{
    if (__this->flushSet != NULL)
    {
        for (::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush enum_123 = ::uPtr< ::app::Uno::Collections::HashSet__Fuse_IFlush*>(__this->flushSet)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uObject* f = enum_123.Current();
            ::app::Fuse::IFlush::Flush(::uPtr< ::uObject*>(f), __this);
        }

        ::uPtr< ::app::Uno::Collections::HashSet__Fuse_IFlush*>(__this->flushSet)->Clear();
        __this->flushSet = NULL;
    }
}

int DrawContext__get_CullFace(DrawContext* __this)
{
    return __this->_cullFace;
}

DrawContext* DrawContext__get_Current(::uStatic* __this)
{
    return DrawContext___current;
}

::uUInt DrawContext__get_GLFramebuffer(DrawContext* __this)
{
    {
        ::uUInt g = ::app::OpenGL::GL__GetFramebufferBinding(NULL);

        if (::app::OpenGL::GLFramebufferHandle__op_Inequality(NULL, g, __this->_glFramebuffer))
        {
            __this->GLInconsistent(::uGetConstString("GLFramebuffer"));
        }
    }

    return __this->_glFramebuffer;
}

::app::Uno::Int4 DrawContext__get_GLScissor(DrawContext* __this)
{
    {
        ::app::Uno::Int4 s = ::app::OpenGL::GL__GetInteger(NULL, 3088);

        if (::app::Uno::Int4__op_Inequality(NULL, s, __this->_glScissor))
        {
            __this->GLInconsistent(::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("GLScissor: "), ::uBox(::app::Uno::Int4__typeof(), s)), ::uGetConstString(" != ")), ::uBox(::app::Uno::Int4__typeof(), __this->_glScissor)));
        }
    }

    return __this->_glScissor;
}

::app::Uno::Int2 DrawContext__get_GLViewportPixelSize(DrawContext* __this)
{
    {
        ::app::Uno::Int4 vpp = ::app::OpenGL::GL__GetInteger(NULL, 2978);

        if (::app::Uno::Int4__op_Inequality(NULL, __this->_glViewport, vpp))
        {
            __this->GLInconsistent(::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("GLViewport: "), ::uBox(::app::Uno::Int4__typeof(), vpp)), ::uGetConstString(" != ")), ::uBox(::app::Uno::Int4__typeof(), __this->_glViewport)));
        }
    }

    ::app::Uno::Int4 ind_124 = __this->_glViewport;
    return ::app::Uno::Int2__New_2(NULL, ind_124.Z, ind_124.W);
}

::app::Uno::Float2 DrawContext__get_GLViewportPointSize(DrawContext* __this)
{
    ::app::Uno::Float2 rsz = ::app::Uno::Float2__op_Implicit_1(NULL, __this->GLViewportPixelSize());
    return ::app::Uno::Float2__op_Division_1(NULL, rsz, __this->ViewportPointDensity());
}

bool DrawContext__get_IsCaching(DrawContext* __this)
{
    return __this->_IsCaching;
}

::app::Uno::Graphics::RenderTarget* DrawContext__get_RenderTarget(DrawContext* __this)
{
    return __this->_renderTarget;
}

::app::Uno::Recti DrawContext__get_Scissor(DrawContext* __this)
{
    ::app::Uno::Int2 vsz = __this->GLViewportPixelSize();
    ::app::Uno::Int4 gl = __this->GLScissor();
    int x = gl.X;
    int y = -gl.W - (gl.Y - vsz.Y);
    return ::app::Uno::Recti__New_1(NULL, x, y, x + gl.Z, y + gl.W);
}

::uObject* DrawContext__get_Viewport(DrawContext* __this)
{
    return __this->_viewport;
}

float DrawContext__get_ViewportPointDensity(DrawContext* __this)
{
    return ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport()));
}

::app::Uno::Float4x4 DrawContext__GetLocalToClipTransform(DrawContext* __this, ::app::Fuse::Node* n)
{
    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::Node*>(n)->WorldTransform();
    ::app::Uno::Float4x4 p = ::app::Uno::Matrix__Mul_8(NULL, m, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(__this->_viewport)));
    return p;
}

::app::Fuse::RenderTargetEntry* DrawContext__GetRenderTargetEntry(DrawContext* __this)
{
    return ::app::Fuse::RenderTargetEntry__New_1(NULL, __this->RenderTarget(), __this->GLViewportPixelSize(), __this->GLScissor(), __this->GLFramebuffer());
    return NULL;
}

void DrawContext__GLInconsistent(DrawContext* __this, ::uString* msg)
{
    ::app::Fuse::Diagnostics__Error(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Inconsistent GL state: "), msg), (::uObject*)__this, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 769, ::uGetConstString("GLInconsistent"));
}

void DrawContext__MakeCurrent(DrawContext* __this)
{
    DrawContext___current = __this;
}

DrawContext* DrawContext__New_1(::uStatic* __this, ::uObject* viewport)
{
    DrawContext* inst = (DrawContext*)::uAllocObject(sizeof(DrawContext), DrawContext__typeof());
    inst->_ObjInit(viewport);
    return inst;
}

void DrawContext__PopCullFace(DrawContext* __this)
{
    __this->_cullFace = ::app::Uno::Collections::IListExtensions__RemoveLast__Uno_Graphics_PolygonFace(NULL, (::uObject*)__this->_cullFaces);
}

void DrawContext__PopRenderTarget(DrawContext* __this)
{
    __this->Flush();
    ::app::Fuse::RenderTargetEntry* old = ::app::Uno::Collections::IListExtensions__RemoveLast__Fuse_RenderTargetEntry(NULL, (::uObject*)__this->_renderTargets);
    __this->_renderTarget = ::uPtr< ::app::Fuse::RenderTargetEntry*>(old)->RenderTarget;
    {
        __this->GLFramebuffer(::uPtr< ::app::Fuse::RenderTargetEntry*>(old)->GLFramebuffer);
        __this->CheckGLError(::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 601, ::uGetConstString("PopRenderTarget"));
    }

    __this->GLViewportPixelSize(old->GLViewportPixelSize);
    __this->GLScissor(old->GLScissor);
}

void DrawContext__PopRenderTargetViewport(DrawContext* __this)
{
    __this->PopViewport();
    __this->PopRenderTarget();
}

void DrawContext__PopScissor(DrawContext* __this)
{
    ::app::Uno::Int4 s = ::app::Uno::Collections::IListExtensions__RemoveLast__int4(NULL, (::uObject*)__this->_glScissors);
    __this->GLScissor(s);
}

void DrawContext__PopViewport(DrawContext* __this)
{
    __this->Flush();
    __this->_viewport = ::app::Uno::Collections::IListExtensions__RemoveLast__Fuse_IViewport(NULL, (::uObject*)__this->_viewports);
}

void DrawContext__PushCullFace(DrawContext* __this, int cf)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*>(__this->_cullFaces)->Add(__this->_cullFace);
    __this->_cullFace = cf;
}

void DrawContext__PushRenderTarget(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb)
{
    __this->PushRenderTarget_1(::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->RenderTarget());
}

void DrawContext__PushRenderTarget_1(DrawContext* __this, ::app::Uno::Graphics::RenderTarget* rt)
{
    __this->PushRenderTarget_2(rt, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(rt)->Size(), ::app::Uno::Int4__New_2(NULL, 0, 0, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(rt)->Size().X, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(rt)->Size().Y));
}

void DrawContext__PushRenderTarget_2(DrawContext* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glscissor)
{
    __this->Flush();
    ::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(__this->_renderTargets)->Add(__this->GetRenderTargetEntry());
    {
        __this->GLFramebuffer(::uPtr< ::app::Uno::Graphics::RenderTarget*>(rt)->GLFramebufferHandle());
        __this->CheckGLError(::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 586, ::uGetConstString("PushRenderTarget"));
    }

    __this->_renderTarget = rt;
    __this->GLViewportPixelSize(viewportPixelSize);
    __this->GLScissor(glscissor);
}

void DrawContext__PushRenderTargetViewport(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb, ::uObject* frustum)
{
    __this->PushRenderTarget_2(::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->RenderTarget(), ::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size(), ::app::Uno::Int4__New_7(NULL, ::app::Uno::Int2__New_2(NULL, 0, 0), ::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size()));
    __this->PushViewport((::uObject*)::app::Fuse::FixedViewport__New_1(NULL, fb->Size(), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())), frustum));
}

void DrawContext__PushScissor(DrawContext* __this, ::app::Uno::Recti scissor)
{
    ::uPtr< ::app::Uno::Collections::List__int4*>(__this->_glScissors)->Add(__this->GLScissor());
    __this->Scissor(scissor);
}

void DrawContext__PushViewport(DrawContext* __this, ::uObject* v)
{
    __this->Flush();
    ::uPtr< ::app::Uno::Collections::List__Fuse_IViewport*>(__this->_viewports)->Add(__this->_viewport);
    __this->_viewport = v;
}

void DrawContext__ReleaseRootbuffer(DrawContext* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__int4*>(__this->_glScissors)->Count() > 0)
    {
        ::app::Fuse::Diagnostics__Error(NULL, ::uGetConstString("Unpopped Scissor"), (::uObject*)__this, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 517, ::uGetConstString("ReleaseRootbuffer"));
    }

    ::uPtr< ::app::Uno::Collections::List__int4*>(__this->_glScissors)->Clear();

    if (::uPtr< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*>(__this->_cullFaces)->Count() > 0)
    {
        ::app::Fuse::Diagnostics__Error(NULL, ::uGetConstString("Unpopped CullFace"), (::uObject*)__this, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 521, ::uGetConstString("ReleaseRootbuffer"));
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*>(__this->_cullFaces)->Clear();

    if (::uPtr< ::app::Uno::Collections::List__Fuse_IViewport*>(__this->_viewports)->Count() > 0)
    {
        ::app::Fuse::Diagnostics__Error(NULL, ::uGetConstString("Unpopped Viewport"), (::uObject*)__this, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 525, ::uGetConstString("ReleaseRootbuffer"));
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_IViewport*>(__this->_viewports)->Clear();

    if (::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(__this->_renderTargets)->Count() > 0)
    {
        ::app::Fuse::Diagnostics__Error(NULL, ::uGetConstString("Unpopped RenderTarget"), (::uObject*)__this, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 529, ::uGetConstString("ReleaseRootbuffer"));
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(__this->_renderTargets)->Clear();
}

void DrawContext__set_GLFramebuffer(DrawContext* __this, ::uUInt value)
{
    __this->_glFramebuffer = value;
    ::app::OpenGL::GL__BindFramebuffer(NULL, 36160, value);
    __this->CheckGLError(::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 557, ::uGetConstString("set_GLFramebuffer"));
}

void DrawContext__set_GLScissor(DrawContext* __this, ::app::Uno::Int4 value)
{
    __this->_glScissor = value;
    {
        ::app::OpenGL::GL__Scissor(NULL, value.Item(0), value.Item(1), value.Item(2), value.Item(3));
        __this->CheckGLError(::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 668, ::uGetConstString("set_GLScissor"));
    }
}

void DrawContext__set_GLViewportPixelSize(DrawContext* __this, ::app::Uno::Int2 value)
{
    __this->_glViewport = ::app::Uno::Int4__New_2(NULL, 0, 0, value.X, value.Y);
    {
        ::app::OpenGL::GL__Viewport(NULL, 0, 0, value.X, value.Y);
        __this->CheckGLError(::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.11.3\\$.uno"), 712, ::uGetConstString("set_GLViewportPixelSize"));
    }
}

void DrawContext__set_IsCaching(DrawContext* __this, bool value)
{
    __this->_IsCaching = value;
}

void DrawContext__set_Scissor(DrawContext* __this, ::app::Uno::Recti value)
{
    ::app::Uno::Int2 vsz = __this->GLViewportPixelSize();
    __this->GLScissor(::app::Uno::Int4__New_2(NULL, value.Left, vsz.Y - (value.Top + value.Size().Y), value.Size().X, value.Size().Y));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* DrawHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.DrawHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::DrawArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< DrawHelpers*> DrawHelpers___instance;

DrawHelpers__uType* DrawHelpers__typeof()
{
    static ::uStaticStrong<DrawHelpers__uType*> type;
    if (type != NULL) return type;

    type = (DrawHelpers__uType*)::uAllocClassType(sizeof(DrawHelpers__uType), "Fuse.DrawHelpers", false, 0, 5, 0);

    type->SetStrongRefs(
        "_draw_311c1aa8._compiledProgram", offsetof(DrawHelpers, _draw_311c1aa8._compiledProgram),
        "_draw_311c1aa8._constValues", offsetof(DrawHelpers, _draw_311c1aa8._constValues),
        "_draw_311c1aa8._Program", offsetof(DrawHelpers, _draw_311c1aa8._Program),
        "DrawLocalRect_Coord_311c1aa8_1_2_1", offsetof(DrawHelpers, DrawLocalRect_Coord_311c1aa8_1_2_1),
        "DrawLocalRect_Vertices_311c1aa8_1_1_4", offsetof(DrawHelpers, DrawLocalRect_Vertices_311c1aa8_1_1_4));

    type->SetFields(1,
        ::uNewField("_instance", &DrawHelpers___instance, 0, DrawHelpers__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("DrawLocalRect", DrawHelpers__DrawLocalRect, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Rect__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Singelton", DrawHelpers__get_Singelton, 0, true, DrawHelpers__typeof()),
        ::uNewFunction(".ctor", DrawHelpers__New_1, 0, true, DrawHelpers__typeof()));

    ::uRegisterType(type);
    return type;
}

void DrawHelpers___ObjInit(DrawHelpers* __this)
{
    __this->init_DrawCalls();
}

void DrawHelpers__DrawLocalRect(DrawHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect, ::app::Uno::Float4x4 transform, float lineWidth, ::app::Uno::Float4 color)
{
    {
        __this->_draw_311c1aa8.BlendEnabled(true);
        __this->_draw_311c1aa8.BlendSrcRgb(2);
        __this->_draw_311c1aa8.BlendSrcAlpha(2);
        __this->_draw_311c1aa8.BlendDstRgb(3);
        __this->_draw_311c1aa8.BlendDstAlpha(3);
        __this->_draw_311c1aa8.DepthTestEnabled(false);
        __this->_draw_311c1aa8.LineWidth(lineWidth);
        __this->_draw_311c1aa8.PrimitiveType(5);
        __this->_draw_311c1aa8.Use();
        __this->_draw_311c1aa8.Attrib_1(0, 2, __this->DrawLocalRect_Coord_311c1aa8_1_2_1, 8, 0);
        __this->_draw_311c1aa8.Uniform_12(1, rect.Size());
        __this->_draw_311c1aa8.Uniform_12(2, rect.Position());
        __this->_draw_311c1aa8.Uniform_17(3, transform);
        __this->_draw_311c1aa8.Uniform_16(4, color);
        __this->_draw_311c1aa8.DrawArrays(::uPtr< ::uArray*>(__this->DrawLocalRect_Vertices_311c1aa8_1_1_4)->Length());
    }
}

void DrawHelpers__free_DrawCalls(DrawHelpers* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->DrawLocalRect_Coord_311c1aa8_1_2_1)->Dispose();
}

DrawHelpers* DrawHelpers__get_Singelton(::uStatic* __this)
{
    if (DrawHelpers___instance == NULL)
    {
        DrawHelpers___instance = DrawHelpers__New_1(NULL);
    }

    return DrawHelpers___instance;
}

void DrawHelpers__init_DrawCalls(DrawHelpers* __this)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 5);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uArray* Vertices_311c1aa8_1_1_0 = array_123;
    __this->DrawLocalRect_Coord_311c1aa8_1_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_311c1aa8_1_1_0), 0);
    __this->DrawLocalRect_Vertices_311c1aa8_1_1_4 = Vertices_311c1aa8_1_1_0;
    __this->_draw_311c1aa8 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 109), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

DrawHelpers* DrawHelpers__New_1(::uStatic* __this)
{
    DrawHelpers* inst = (DrawHelpers*)::uAllocObject(sizeof(DrawHelpers), DrawHelpers__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FastMatrix__uType* FastMatrix__typeof()
{
    static ::uStaticStrong<FastMatrix__uType*> type;
    if (type != NULL) return type;

    type = (FastMatrix__uType*)::uAllocClassType(sizeof(FastMatrix__uType), "Fuse.FastMatrix", false, 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_hasNonTranslation", NULL, offsetof(FastMatrix, _hasNonTranslation), ::app::Uno::Bool__typeof()),
        ::uNewField("_matrix", NULL, offsetof(FastMatrix, _matrix), ::app::Uno::Float4x4__typeof()));

    type->SetFunctions(24,
        ::uNewFunctionVoid("AppendFastMatrix", FastMatrix__AppendFastMatrix, 0, false, FastMatrix__typeof()),
        ::uNewFunctionVoid("AppendRotation", FastMatrix__AppendRotation, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("AppendRotationQuaternion", FastMatrix__AppendRotationQuaternion, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("AppendScale", FastMatrix__AppendScale, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("AppendScale", FastMatrix__AppendScale_1, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("AppendShear", FastMatrix__AppendShear, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("AppendTranslation", FastMatrix__AppendTranslation, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("AppendTranslation", FastMatrix__AppendTranslation_1, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("Copy", FastMatrix__Copy, 0, false, FastMatrix__typeof()),
        ::uNewFunction("FromFloat4x4", FastMatrix__FromFloat4x4, 0, true, FastMatrix__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Matrix", FastMatrix__get_Matrix, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("Identity", FastMatrix__Identity, 0, true, FastMatrix__typeof()),
        ::uNewFunctionVoid("Invert", FastMatrix__Invert, 0, false),
        ::uNewFunction("Mul", FastMatrix__Mul, 0, false, FastMatrix__typeof(), FastMatrix__typeof()),
        ::uNewFunctionVoid("PrependFastMatrix", FastMatrix__PrependFastMatrix, 0, false, FastMatrix__typeof()),
        ::uNewFunctionVoid("PrependRotation", FastMatrix__PrependRotation, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("PrependRotationQuaternion", FastMatrix__PrependRotationQuaternion, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("PrependScale", FastMatrix__PrependScale, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("PrependScale", FastMatrix__PrependScale_1, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("PrependShear", FastMatrix__PrependShear, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("PrependTranslation", FastMatrix__PrependTranslation, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("PrependTranslation", FastMatrix__PrependTranslation_1, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("ResetIdentity", FastMatrix__ResetIdentity, 0, false),
        ::uNewFunctionVoid("SimpleTranslation", FastMatrix__SimpleTranslation, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void FastMatrix___ObjInit(FastMatrix* __this)
{
    __this->_matrix = ::app::Uno::Float4x4__get_Identity(NULL);
}

void FastMatrix___ObjInit_1(FastMatrix* __this, FastMatrix* orig)
{
    __this->_matrix = ::uPtr< FastMatrix*>(orig)->_matrix;
    __this->_hasNonTranslation = orig->_hasNonTranslation;
}

void FastMatrix__AppendFastMatrix(FastMatrix* __this, FastMatrix* fm)
{
    if (__this->_hasNonTranslation || ::uPtr< FastMatrix*>(fm)->_hasNonTranslation)
    {
        __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::uPtr< FastMatrix*>(fm)->Matrix());
        __this->_hasNonTranslation = true;
    }
    else
    {
        __this->_matrix.M41 = __this->_matrix.M41 + ::uPtr< FastMatrix*>(fm)->_matrix.M41;
        __this->_matrix.M42 = __this->_matrix.M42 + fm->_matrix.M42;
        __this->_matrix.M43 = __this->_matrix.M43 + fm->_matrix.M43;
    }
}

void FastMatrix__AppendRotation(FastMatrix* __this, float zRadians)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::app::Uno::Matrix__RotationZ(NULL, zRadians));
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::app::Uno::Matrix__RotationQuaternion(NULL, q));
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendScale(FastMatrix* __this, float factor)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::app::Uno::Matrix__Scaling_2(NULL, ::app::Uno::Float3__New_2(NULL, factor, factor, factor)));
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendScale_1(FastMatrix* __this, ::app::Uno::Float3 scale)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::app::Uno::Matrix__Scaling_2(NULL, scale));
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendShear(FastMatrix* __this, float xRadians, float yRadians)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::app::Uno::Matrix__Shear(NULL, ::app::Uno::Float2__New_2(NULL, xRadians, yRadians)));
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendTranslation(FastMatrix* __this, float x, float y, float z)
{
    if (!__this->_hasNonTranslation)
    {
        __this->SimpleTranslation(x, y, z);
    }
    else
    {
        __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::app::Uno::Matrix__Translation_1(NULL, ::app::Uno::Float3__New_2(NULL, x, y, z)));
    }
}

void FastMatrix__AppendTranslation_1(FastMatrix* __this, ::app::Uno::Float3 offset)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::app::Uno::Matrix__Translation_1(NULL, offset));
}

FastMatrix* FastMatrix__Copy(FastMatrix* __this)
{
    return FastMatrix__New_2(NULL, __this);
}

FastMatrix* FastMatrix__FromFloat4x4(::uStatic* __this, ::app::Uno::Float4x4 m)
{
    FastMatrix* k = FastMatrix__New_1(NULL);
    ::uPtr< FastMatrix*>(k)->_matrix = m;
    k->_hasNonTranslation = true;
    return k;
}

::app::Uno::Float4x4 FastMatrix__get_Matrix(FastMatrix* __this)
{
    return __this->_matrix;
}

FastMatrix* FastMatrix__Identity(::uStatic* __this)
{
    return FastMatrix__New_1(NULL);
}

void FastMatrix__Invert(FastMatrix* __this)
{
    if (!__this->_hasNonTranslation)
    {
        __this->_matrix.M41 = -__this->_matrix.M41;
        __this->_matrix.M42 = -__this->_matrix.M42;
        __this->_matrix.M43 = -__this->_matrix.M43;
    }
    else
    {
        __this->_matrix = ::app::Uno::Matrix__Invert_2(NULL, __this->_matrix);
    }
}

FastMatrix* FastMatrix__Mul(FastMatrix* __this, FastMatrix* m)
{
    FastMatrix* res = FastMatrix__New_1(NULL);
    ::uPtr< FastMatrix*>(res)->_matrix = ::app::Uno::Matrix__Mul_8(NULL, __this->_matrix, ::uPtr< FastMatrix*>(m)->_matrix);
    res->_hasNonTranslation = __this->_hasNonTranslation || m->_hasNonTranslation;
    return res;
}

FastMatrix* FastMatrix__New_1(::uStatic* __this)
{
    FastMatrix* inst = (FastMatrix*)::uAllocObject(sizeof(FastMatrix), FastMatrix__typeof());
    inst->_ObjInit();
    return inst;
}

FastMatrix* FastMatrix__New_2(::uStatic* __this, FastMatrix* orig)
{
    FastMatrix* inst = (FastMatrix*)::uAllocObject(sizeof(FastMatrix), FastMatrix__typeof());
    inst->_ObjInit_1(orig);
    return inst;
}

void FastMatrix__PrependFastMatrix(FastMatrix* __this, FastMatrix* fm)
{
    if (__this->_hasNonTranslation || ::uPtr< FastMatrix*>(fm)->_hasNonTranslation)
    {
        __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, ::uPtr< FastMatrix*>(fm)->Matrix(), __this->_matrix);
        __this->_hasNonTranslation = true;
    }
    else
    {
        __this->_matrix.M41 = __this->_matrix.M41 + ::uPtr< FastMatrix*>(fm)->_matrix.M41;
        __this->_matrix.M42 = __this->_matrix.M42 + fm->_matrix.M42;
        __this->_matrix.M43 = __this->_matrix.M43 + fm->_matrix.M43;
    }
}

void FastMatrix__PrependRotation(FastMatrix* __this, float zRadians)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, ::app::Uno::Matrix__RotationZ(NULL, zRadians), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, ::app::Uno::Matrix__RotationQuaternion(NULL, q), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependScale(FastMatrix* __this, float factor)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, ::app::Uno::Matrix__Scaling_2(NULL, ::app::Uno::Float3__New_2(NULL, factor, factor, factor)), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependScale_1(FastMatrix* __this, ::app::Uno::Float3 scale)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, ::app::Uno::Matrix__Scaling_2(NULL, scale), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependShear(FastMatrix* __this, float xRadians, float yRadians)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, ::app::Uno::Matrix__Shear(NULL, ::app::Uno::Float2__New_2(NULL, xRadians, yRadians)), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependTranslation(FastMatrix* __this, float x, float y, float z)
{
    if (!__this->_hasNonTranslation)
    {
        __this->SimpleTranslation(x, y, z);
    }
    else
    {
        __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, ::app::Uno::Matrix__Translation_1(NULL, ::app::Uno::Float3__New_2(NULL, x, y, z)), __this->_matrix);
    }
}

void FastMatrix__PrependTranslation_1(FastMatrix* __this, ::app::Uno::Float3 offset)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_8(NULL, ::app::Uno::Matrix__Translation_1(NULL, offset), __this->_matrix);
}

void FastMatrix__ResetIdentity(FastMatrix* __this)
{
    __this->_matrix = ::app::Uno::Float4x4__get_Identity(NULL);
}

void FastMatrix__SimpleTranslation(FastMatrix* __this, float x, float y, float z)
{
    __this->_matrix.M41 = __this->_matrix.M41 + x;
    __this->_matrix.M42 = __this->_matrix.M42 + y;
    __this->_matrix.M43 = __this->_matrix.M43 + z;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedViewport__uType* FixedViewport__typeof()
{
    static ::uStaticStrong<FixedViewport__uType*> type;
    if (type != NULL) return type;

    type = (FixedViewport__uType*)::uAllocClassType(sizeof(FixedViewport__uType), "Fuse.FixedViewport", false, 1, 2, 0);

    type->__interface_0.__fp_PointToWorldRay = (::app::Uno::Geometry::Ray(*)(void*, ::app::Uno::Float2))FixedViewport__PointToWorldRay;
    type->__interface_0.__fp_get_PointDensity = (float(*)(void*))FixedViewport__get_PointDensity;
    type->__interface_0.__fp_get_Size = (::app::Uno::Float2(*)(void*))FixedViewport__get_Size;
    type->__interface_0.__fp_get_PixelSize = (::app::Uno::Float2(*)(void*))FixedViewport__get_PixelSize;
    type->__interface_0.__fp_get_ProjectionTransform = (::app::Uno::Float4x4(*)(void*))FixedViewport__get_ProjectionTransform;
    type->__interface_0.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))FixedViewport__get_ViewProjectionTransform;
    type->__interface_0.__fp_get_ViewProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*))FixedViewport__get_ViewProjectionTransformInverse;
    type->__interface_0.__fp_get_ViewTransform = (::app::Uno::Float4x4(*)(void*))FixedViewport__get_ViewTransform;
    type->__interface_0.__fp_get_ViewOrigin = (::app::Uno::Float3(*)(void*))FixedViewport__get_ViewOrigin;

    type->SetInterfaces(
        ::app::Fuse::IViewport__typeof(), offsetof(FixedViewport__uType, __interface_0));

    type->SetStrongRefs(
        "_frustum", offsetof(FixedViewport, _frustum),
        "_frustumViewport", offsetof(FixedViewport, _frustumViewport));

    type->SetFields(4,
        ::uNewField("_frustum", NULL, offsetof(FixedViewport, _frustum), ::app::Fuse::IFrustum__typeof()),
        ::uNewField("_frustumViewport", NULL, offsetof(FixedViewport, _frustumViewport), ::app::Fuse::FrustumViewport__typeof()),
        ::uNewField("_pixelSize", NULL, offsetof(FixedViewport, _pixelSize), ::app::Uno::Float2__typeof()),
        ::uNewField("_pointDensity", NULL, offsetof(FixedViewport, _pointDensity), ::app::Uno::Float__typeof()));

    type->SetFunctions(13,
        ::uNewFunction("get_PixelSize", FixedViewport__get_PixelSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_PointDensity", FixedViewport__get_PointDensity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ProjectionTransform", FixedViewport__get_ProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ProjectionTransformInverse", FixedViewport__get_ProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Size", FixedViewport__get_Size, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ViewOrigin", FixedViewport__get_ViewOrigin, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_ViewProjectionTransform", FixedViewport__get_ViewProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewProjectionTransformInverse", FixedViewport__get_ViewProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewRange", FixedViewport__get_ViewRange, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ViewTransform", FixedViewport__get_ViewTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewTransformInverse", FixedViewport__get_ViewTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", FixedViewport__New_1, 0, true, FixedViewport__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::IFrustum__typeof()),
        ::uNewFunction("PointToWorldRay", FixedViewport__PointToWorldRay, 0, false, ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void FixedViewport___ObjInit(FixedViewport* __this, ::app::Uno::Int2 pixelSize, float pointDensity, ::uObject* frustum)
{
    __this->_frustumViewport = ::app::Fuse::FrustumViewport__New_1(NULL);
    __this->_frustum = frustum;
    __this->_pixelSize = ::app::Uno::Float2__New_2(NULL, (float)pixelSize.X, (float)pixelSize.Y);
    __this->_pointDensity = pointDensity;
    ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->Update((::uObject*)__this, frustum);
}

::app::Uno::Float2 FixedViewport__get_PixelSize(FixedViewport* __this)
{
    return __this->_pixelSize;
}

float FixedViewport__get_PointDensity(FixedViewport* __this)
{
    return __this->_pointDensity;
}

::app::Uno::Float4x4 FixedViewport__get_ProjectionTransform(FixedViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ProjectionTransform;
}

::app::Uno::Float4x4 FixedViewport__get_ProjectionTransformInverse(FixedViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ProjectionTransformInverse;
}

::app::Uno::Float2 FixedViewport__get_Size(FixedViewport* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, __this->PixelSize(), __this->PointDensity());
}

::app::Uno::Float3 FixedViewport__get_ViewOrigin(FixedViewport* __this)
{
    return ::app::Fuse::IFrustum::GetWorldPosition(::uPtr< ::uObject*>(__this->_frustum), (::uObject*)__this);
}

::app::Uno::Float4x4 FixedViewport__get_ViewProjectionTransform(FixedViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransform;
}

::app::Uno::Float4x4 FixedViewport__get_ViewProjectionTransformInverse(FixedViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransformInverse;
}

::app::Uno::Float2 FixedViewport__get_ViewRange(FixedViewport* __this)
{
    return ::app::Fuse::IFrustum::GetDepthRange(::uPtr< ::uObject*>(__this->_frustum), (::uObject*)__this);
}

::app::Uno::Float4x4 FixedViewport__get_ViewTransform(FixedViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewTransform;
}

::app::Uno::Float4x4 FixedViewport__get_ViewTransformInverse(FixedViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewTransformInverse;
}

FixedViewport* FixedViewport__New_1(::uStatic* __this, ::app::Uno::Int2 pixelSize, float pointDensity, ::uObject* frustum)
{
    FixedViewport* inst = (FixedViewport*)::uAllocObject(sizeof(FixedViewport), FixedViewport__typeof());
    inst->_ObjInit(pixelSize, pointDensity, frustum);
    return inst;
}

::app::Uno::Geometry::Ray FixedViewport__PointToWorldRay(FixedViewport* __this, ::app::Uno::Float2 pointPos)
{
    return ::app::Fuse::FrustumViewport__PointToWorldRay(NULL, (::uObject*)__this, pointPos);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*> Font___fontFaces;

Font__uType* Font__typeof()
{
    static ::uStaticStrong<Font__uType*> type;
    if (type != NULL) return type;

    type = (Font__uType*)::uAllocClassType(sizeof(Font__uType), "Fuse.Font", false, 0, 2, 0);

    type->SetStrongRefs(
        "_file", offsetof(Font, _file),
        "_fontFace", offsetof(Font, _fontFace));

    type->SetFields(3,
        ::uNewField("_file", NULL, offsetof(Font, _file), ::app::Uno::UX::FileSource__typeof()),
        ::uNewField("_fontFace", NULL, offsetof(Font, _fontFace), ::app::Uno::Content::Fonts::FontFace__typeof()),
        ::uNewField("_fontFaces", &Font___fontFaces, 0, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_File", Font__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_FontFace", Font__get_FontFace, 0, false, ::app::Uno::Content::Fonts::FontFace__typeof()),
        ::uNewFunction("Load", Font__Load, 0, false, ::app::Uno::Content::Fonts::FontFace__typeof()),
        ::uNewFunction(".ctor", Font__New_1, 0, true, Font__typeof(), ::app::Uno::UX::FileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void Font___ObjInit(Font* __this, ::app::Uno::UX::FileSource* file)
{
    __this->_file = file;
}

void Font___TypeInit(::uStatic* __this)
{
    Font___fontFaces = ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(NULL);
}

::app::Uno::UX::FileSource* Font__get_File(Font* __this)
{
    return __this->_file;
}

::app::Uno::Content::Fonts::FontFace* Font__get_FontFace(Font* __this)
{
    if (__this->_fontFace == NULL)
    {
        ::app::Uno::Content::Fonts::FontFace* ff;

        if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(Font___fontFaces)->TryGetValue(__this->_file, &ff))
        {
            __this->_fontFace = __this->Load();
            ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*>(Font___fontFaces)->Add(__this->_file, __this->_fontFace);
        }
        else
        {
            __this->_fontFace = ff;
        }
    }

    return __this->_fontFace;
}

::app::Uno::Content::Fonts::FontFace* Font__Load(Font* __this)
{
    ::app::Uno::UX::BundleFileSource* bfs = ::uAs< ::app::Uno::UX::BundleFileSource*>(__this->File(), ::app::Uno::UX::BundleFileSource__typeof());

    if (bfs != NULL)
    {
        return ::app::Uno::Content::Fonts::FontFace__Load(NULL, ::uPtr< ::app::Uno::UX::BundleFileSource*>(bfs)->BundleFile);
    }
    else
    {
        ::uArray* data = ::uPtr< ::app::Uno::UX::FileSource*>(__this->File())->ReadAllBytes();
        return ::app::Uno::Content::Fonts::FontFace__Load_1(NULL, ::uPtr< ::app::Uno::UX::FileSource*>(__this->File())->Name, data, 0, ::uPtr< ::uArray*>(data)->Length());
    }
}

Font* Font__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* file)
{
    Font* inst = (Font*)::uAllocObject(sizeof(Font), Font__typeof());
    inst->_ObjInit(file);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Font*> Fonts___fallback;

Fonts__uType* Fonts__typeof()
{
    static ::uStaticStrong<Fonts__uType*> type;
    if (type != NULL) return type;

    type = (Fonts__uType*)::uAllocClassType(sizeof(Fonts__uType), "Fuse.Fonts");

    type->SetFields(1,
        ::uNewField("_fallback", &Fonts___fallback, 0, ::app::Fuse::Font__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Fallback", Fonts__get_Fallback, 0, true, ::app::Fuse::Font__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Font* Fonts__get_Fallback(::uStatic* __this)
{
    if (Fonts___fallback == NULL)
    {
        Fonts___fallback = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 3), ::app::Uno::BundleFile__typeof())));
    }

    return Fonts___fallback;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::FramebufferPoolImpl*> FramebufferPool__framebufferPool;

FramebufferPool__uType* FramebufferPool__typeof()
{
    static ::uStaticStrong<FramebufferPool__uType*> type;
    if (type != NULL) return type;

    type = (FramebufferPool__uType*)::uAllocClassType(sizeof(FramebufferPool__uType), "Fuse.FramebufferPool");

    type->SetFields(1,
        ::uNewField("framebufferPool", &FramebufferPool__framebufferPool, 0, ::app::Fuse::FramebufferPoolImpl__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("EnsurePool", FramebufferPool__EnsurePool, 0, true),
        ::uNewFunction("get_Frame", FramebufferPool__get_Frame, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("Lock", FramebufferPool__Lock, 0, true, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("Lock", FramebufferPool__Lock_1, 0, true, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Register", FramebufferPool__Register, 0, true, ::app::Fuse::CacheFramebuffer__typeof()),
        ::uNewFunctionVoid("Release", FramebufferPool__Release, 0, true, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunctionVoid("UnRegister", FramebufferPool__UnRegister, 0, true, ::app::Fuse::CacheFramebuffer__typeof()));

    ::uRegisterType(type);
    return type;
}

void FramebufferPool__EnsurePool(::uStatic* __this)
{
    if (FramebufferPool__framebufferPool == NULL)
    {
        FramebufferPool__framebufferPool = ::app::Fuse::FramebufferPoolImpl__New_1(NULL);
    }
}

int FramebufferPool__get_Frame(::uStatic* __this)
{
    FramebufferPool__EnsurePool(NULL);
    return ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->frame;
}

::app::Uno::Graphics::Framebuffer* FramebufferPool__Lock(::uStatic* __this, int width, int height, int format, bool depth)
{
    FramebufferPool__EnsurePool(NULL);
    return ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->Lock(width, height, format, depth);
}

::app::Uno::Graphics::Framebuffer* FramebufferPool__Lock_1(::uStatic* __this, ::app::Uno::Int2 size, int format, bool depth)
{
    return FramebufferPool__Lock(NULL, size.X, size.Y, format, depth);
}

void FramebufferPool__Register(::uStatic* __this, ::app::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool__EnsurePool(NULL);
    ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->Register(cfb);
}

void FramebufferPool__Release(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool__EnsurePool(NULL);
    ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->Release(fb);
}

void FramebufferPool__UnRegister(::uStatic* __this, ::app::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool__EnsurePool(NULL);
    ::uPtr< ::app::Fuse::FramebufferPoolImpl*>(FramebufferPool__framebufferPool)->UnRegister(cfb);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FramebufferPoolImpl__uType* FramebufferPoolImpl__typeof()
{
    static ::uStaticStrong<FramebufferPoolImpl__uType*> type;
    if (type != NULL) return type;

    type = (FramebufferPoolImpl__uType*)::uAllocClassType(sizeof(FramebufferPoolImpl__uType), "Fuse.FramebufferPoolImpl", false, 1, 4, 0);

    type->__interface_0.__fp_SoftDispose = (void(*)(void*))FramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Resources::ISoftDisposable__typeof(), offsetof(FramebufferPoolImpl__uType, __interface_0));

    type->SetStrongRefs(
        "cacheFramebuffers", offsetof(FramebufferPoolImpl, cacheFramebuffers),
        "framebufferPool", offsetof(FramebufferPoolImpl, framebufferPool),
        "lastFrameUsed", offsetof(FramebufferPoolImpl, lastFrameUsed),
        "lockedFramebuffers", offsetof(FramebufferPoolImpl, lockedFramebuffers));

    type->SetFields(7,
        ::uNewField("cacheFramebuffers", NULL, offsetof(FramebufferPoolImpl, cacheFramebuffers), ::app::Uno::Collections::List__Fuse_CacheFramebuffer__typeof()),
        ::uNewField("frame", NULL, offsetof(FramebufferPoolImpl, frame), ::app::Uno::Int__typeof()),
        ::uNewField("framebufferPool", NULL, offsetof(FramebufferPoolImpl, framebufferPool), ::app::Uno::Collections::List__framebuffer__typeof()),
        ::uNewField("framebuffersProvidedSinceLastCollect", NULL, offsetof(FramebufferPoolImpl, framebuffersProvidedSinceLastCollect), ::app::Uno::Int__typeof()),
        ::uNewField("lastFrameUsed", NULL, offsetof(FramebufferPoolImpl, lastFrameUsed), ::app::Uno::Collections::Dictionary__framebuffer__int__typeof()),
        ::uNewField("lockedFramebuffers", NULL, offsetof(FramebufferPoolImpl, lockedFramebuffers), ::app::Uno::Collections::HashSet__framebuffer__typeof()),
        ::uNewField("pixelsProvidedSinceLastCollect", NULL, offsetof(FramebufferPoolImpl, pixelsProvidedSinceLastCollect), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("CollectCacheFramebuffers", FramebufferPoolImpl__CollectCacheFramebuffers, 0, false),
        ::uNewFunction("FindBuffer", FramebufferPoolImpl__FindBuffer, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Graphics::FramebufferFlags__typeof()),
        ::uNewFunctionVoid("Fuse.Resources.ISoftDisposable.SoftDispose", FramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose, 0, false),
        ::uNewFunction("Lock", FramebufferPoolImpl__Lock, 0, false, ::app::Uno::Graphics::Framebuffer__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Graphics::Format__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", FramebufferPoolImpl__New_1, 0, true, FramebufferPoolImpl__typeof()),
        ::uNewFunctionVoid("Register", FramebufferPoolImpl__Register, 0, false, ::app::Fuse::CacheFramebuffer__typeof()),
        ::uNewFunctionVoid("Release", FramebufferPoolImpl__Release, 0, false, ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunctionVoid("UnRegister", FramebufferPoolImpl__UnRegister, 0, false, ::app::Fuse::CacheFramebuffer__typeof()),
        ::uNewFunctionVoid("Update", FramebufferPoolImpl__Update, 0, false));

    ::uRegisterType(type);
    return type;
}

void FramebufferPoolImpl___ObjInit(FramebufferPoolImpl* __this)
{
    __this->framebufferPool = ::app::Uno::Collections::List__framebuffer__New_1(NULL);
    __this->lastFrameUsed = ::app::Uno::Collections::Dictionary__framebuffer__int__New_1(NULL);
    __this->lockedFramebuffers = ::app::Uno::Collections::HashSet__framebuffer__New_1(NULL);
    __this->cacheFramebuffers = ::app::Uno::Collections::List__Fuse_CacheFramebuffer__New_1(NULL);
    ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)FramebufferPoolImpl__Update, __this), 0);
    ::app::Fuse::Resources::DisposalManager__Add_1(NULL, (::uObject*)__this);
}

void FramebufferPoolImpl__CollectCacheFramebuffers(FramebufferPoolImpl* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Count() < 3)
    {
        return;
    }

    int sum = 0;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::CacheFramebuffer* cfb = enum_123.Current();
        sum = sum + ::uPtr< ::app::Fuse::CacheFramebuffer*>(cfb)->FramesSinceLastUse();
    }

    int avg = sum / ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Count();
    int limit = avg + 3;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Count(); i++)
    {
        ::app::Fuse::CacheFramebuffer* c = ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Item(i);

        if (!::uPtr< ::app::Fuse::CacheFramebuffer*>(c)->IsPinned() && (::uPtr< ::app::Fuse::CacheFramebuffer*>(c)->FramesSinceLastUse() >= limit))
        {
            ::uPtr< ::app::Fuse::CacheFramebuffer*>(c)->Collect();
            ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->RemoveAt(i--);
        }
    }

    __this->framebuffersProvidedSinceLastCollect = 0;
    __this->pixelsProvidedSinceLastCollect = 0;
}

::app::Uno::Graphics::Framebuffer* FramebufferPoolImpl__FindBuffer(FramebufferPoolImpl* __this, int width, int height, int format, int flags)
{
    width = ::app::Uno::Math__Max_8(NULL, 1, width);
    height = ::app::Uno::Math__Max_8(NULL, 1, height);

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Count(); i++)
    {
        ::app::Uno::Graphics::Framebuffer* fb = ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Item(i);

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size().X != width)
        {
            continue;
        }

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size().Y != height)
        {
            continue;
        }

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Format() != format)
        {
            continue;
        }

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->HasDepth() != ((flags & 1) == 1))
        {
            continue;
        }

        if (::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->SupportsMipmap() != ((flags & 2) == 2))
        {
            continue;
        }

        ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->RemoveAt(i);
        ::uPtr< ::app::Uno::Collections::HashSet__framebuffer*>(__this->lockedFramebuffers)->Add(fb);
        ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Item(fb, __this->frame);
        return fb;
    }

    int maxSize = ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL);

    if ((width > maxSize) || (height > maxSize))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Attempted to allocate "), ::uBox< int>(::app::Uno::Int__typeof(), width)), ::uGetConstString("x")), ::uBox< int>(::app::Uno::Int__typeof(), height)), ::uGetConstString(" framebuffer, max is ")), ::uBox< int>(::app::Uno::Int__typeof(), maxSize)), ::uGetConstString("x")), ::uBox< int>(::app::Uno::Int__typeof(), maxSize))));
    }

    double t = double();
    ::app::Uno::Graphics::Framebuffer* buffer = ::app::Uno::Graphics::Framebuffer__New_1(NULL, ::app::Uno::Int2__New_2(NULL, width, height), format, flags);
    return buffer;
}

void FramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose(FramebufferPoolImpl* __this)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Count(); i++)
    {
        ::app::Fuse::CacheFramebuffer* c = ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Item(i);

        if (::uPtr< ::app::Fuse::CacheFramebuffer*>(c)->IsPinned())
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("framebuffer pinned while app going into the background")));
        }

        ::uPtr< ::app::Fuse::CacheFramebuffer*>(c)->Collect();
        ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->RemoveAt(i--);
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Count(); i++)
    {
        ::app::Uno::Graphics::Framebuffer* fb = ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Item(i);
        ::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Dispose();
        ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->RemoveAt(i--);
        ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Remove(fb);
    }
}

::app::Uno::Graphics::Framebuffer* FramebufferPoolImpl__Lock(FramebufferPoolImpl* __this, int width, int height, int format, bool depth)
{
    ::app::Uno::Graphics::Framebuffer* fb = __this->FindBuffer(width, height, format, depth ? 1 : 0);
    ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Item(fb, __this->frame);
    ::uPtr< ::app::Uno::Collections::HashSet__framebuffer*>(__this->lockedFramebuffers)->Add(fb);
    return fb;
}

FramebufferPoolImpl* FramebufferPoolImpl__New_1(::uStatic* __this)
{
    FramebufferPoolImpl* inst = (FramebufferPoolImpl*)::uAllocObject(sizeof(FramebufferPoolImpl), FramebufferPoolImpl__typeof());
    inst->_ObjInit();
    return inst;
}

void FramebufferPoolImpl__Register(FramebufferPoolImpl* __this, ::app::Fuse::CacheFramebuffer* cfb)
{
    __this->framebuffersProvidedSinceLastCollect = __this->framebuffersProvidedSinceLastCollect + 1;
    __this->pixelsProvidedSinceLastCollect = __this->pixelsProvidedSinceLastCollect + (::uPtr< ::app::Fuse::CacheFramebuffer*>(cfb)->Width() * ::uPtr< ::app::Fuse::CacheFramebuffer*>(cfb)->Height());
    ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Add(cfb);

    if (__this->pixelsProvidedSinceLastCollect > 1000000)
    {
        __this->CollectCacheFramebuffers();
    }
    else if (__this->framebuffersProvidedSinceLastCollect > 50)
    {
        __this->CollectCacheFramebuffers();
    }
}

void FramebufferPoolImpl__Release(FramebufferPoolImpl* __this, ::app::Uno::Graphics::Framebuffer* fb)
{
    if (::uPtr< ::app::Uno::Collections::HashSet__framebuffer*>(__this->lockedFramebuffers)->Contains(fb))
    {
        ::uPtr< ::app::Uno::Collections::HashSet__framebuffer*>(__this->lockedFramebuffers)->Remove(fb);
        ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Item(fb, __this->frame);
        ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Add(fb);
    }
}

void FramebufferPoolImpl__UnRegister(FramebufferPoolImpl* __this, ::app::Fuse::CacheFramebuffer* cfb)
{
    __this->framebuffersProvidedSinceLastCollect = 0;
    ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->cacheFramebuffers)->Remove(cfb);
}

void FramebufferPoolImpl__Update(FramebufferPoolImpl* __this)
{
    __this->frame++;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Count(); i++)
    {
        ::app::Uno::Graphics::Framebuffer* fb = ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->Item(i);
        int framesSinceUse = int();
        ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->TryGetValue(fb, &framesSinceUse);
        framesSinceUse = __this->frame - framesSinceUse;

        if (framesSinceUse < 0)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Pool is leaking")));
        }

        if (framesSinceUse > 1)
        {
            ::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Dispose();
            ::uPtr< ::app::Uno::Collections::List__framebuffer*>(__this->framebufferPool)->RemoveAt(i--);
            ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__int*>(__this->lastFrameUsed)->Remove(fb);
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FrustumViewport__uType* FrustumViewport__typeof()
{
    static ::uStaticStrong<FrustumViewport__uType*> type;
    if (type != NULL) return type;

    type = (FrustumViewport__uType*)::uAllocClassType(sizeof(FrustumViewport__uType), "Fuse.FrustumViewport", false, 0, 0, 0);

    type->SetFields(6,
        ::uNewField("ProjectionTransform", NULL, offsetof(FrustumViewport, ProjectionTransform), ::app::Uno::Float4x4__typeof()),
        ::uNewField("ProjectionTransformInverse", NULL, offsetof(FrustumViewport, ProjectionTransformInverse), ::app::Uno::Float4x4__typeof()),
        ::uNewField("ViewProjectionTransform", NULL, offsetof(FrustumViewport, ViewProjectionTransform), ::app::Uno::Float4x4__typeof()),
        ::uNewField("ViewProjectionTransformInverse", NULL, offsetof(FrustumViewport, ViewProjectionTransformInverse), ::app::Uno::Float4x4__typeof()),
        ::uNewField("ViewTransform", NULL, offsetof(FrustumViewport, ViewTransform), ::app::Uno::Float4x4__typeof()),
        ::uNewField("ViewTransformInverse", NULL, offsetof(FrustumViewport, ViewTransformInverse), ::app::Uno::Float4x4__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", FrustumViewport__New_1, 0, true, FrustumViewport__typeof()),
        ::uNewFunction("PointToWorldRay", FrustumViewport__PointToWorldRay, 0, true, ::app::Uno::Geometry::Ray__typeof(), ::app::Fuse::IViewport__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Update", FrustumViewport__Update, 0, false, ::app::Fuse::IViewport__typeof(), ::app::Fuse::IFrustum__typeof()),
        ::uNewFunction("WorldToLocalRay", FrustumViewport__WorldToLocalRay, 0, true, ::app::Uno::Geometry::Ray__typeof(), ::app::Fuse::IViewport__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Geometry::Ray__typeof()));

    ::uRegisterType(type);
    return type;
}

void FrustumViewport___ObjInit(FrustumViewport* __this)
{
}

FrustumViewport* FrustumViewport__New_1(::uStatic* __this)
{
    FrustumViewport* inst = (FrustumViewport*)::uAllocObject(sizeof(FrustumViewport), FrustumViewport__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Uno::Geometry::Ray FrustumViewport__PointToWorldRay(::uStatic* __this, ::uObject* viewport, ::app::Uno::Float2 pointPos)
{
    ::app::Uno::Float2 p = ::app::Uno::Float2__New_2(NULL, ((pointPos.X / ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)).X) * 2.0f) - 1.0f, ((pointPos.Y / ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)).Y) * -2.0f) + 1.0f);
    ::app::Uno::Float4x4 vpi = ::app::Fuse::IViewport::ViewProjectionTransformInverse(viewport);
    ::app::Uno::Float3 r0 = ::app::Uno::Vector__TransformCoordinate_1(NULL, ::app::Uno::Float3__New_4(NULL, p, -1.0f), vpi);
    ::app::Uno::Float3 r1 = ::app::Uno::Vector__TransformCoordinate_1(NULL, ::app::Uno::Float3__New_4(NULL, p, 1.0f), vpi);
    return ::app::Uno::Geometry::Ray__New_1(NULL, r0, ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, r1, r0)));
}

void FrustumViewport__Update(FrustumViewport* __this, ::uObject* viewport, ::uObject* frustum)
{
    __this->ProjectionTransform = ::app::Fuse::IFrustum::GetProjectionTransform(::uPtr< ::uObject*>(frustum), viewport);
    __this->ProjectionTransformInverse = ::app::Fuse::IFrustum::GetProjectionTransformInverse(frustum, viewport);
    __this->ViewTransform = ::app::Fuse::IFrustum::GetViewTransform(frustum, viewport);
    __this->ViewTransformInverse = ::app::Fuse::IFrustum::GetViewTransformInverse(frustum, viewport);
    __this->ViewProjectionTransform = ::app::Uno::Matrix__Mul_8(NULL, __this->ViewTransform, __this->ProjectionTransform);
    __this->ViewProjectionTransformInverse = ::app::Uno::Matrix__Mul_8(NULL, __this->ProjectionTransformInverse, __this->ViewTransformInverse);
}

::app::Uno::Geometry::Ray FrustumViewport__WorldToLocalRay(::uStatic* __this, ::uObject* viewport, ::app::Fuse::Node* where, ::app::Uno::Geometry::Ray world)
{
    ::app::Uno::Float4x4 wi = ::uPtr< ::app::Fuse::Node*>(where)->WorldTransformInverse();
    ::app::Uno::Float3 r0 = ::app::Uno::Vector__TransformCoordinate_1(NULL, world.Position, wi);
    ::app::Uno::Float3 r1 = ::app::Uno::Vector__TransformCoordinate_1(NULL, ::app::Uno::Float3__op_Addition_2(NULL, world.Position, world.Direction), wi);
    return ::app::Uno::Geometry::Ray__New_1(NULL, r0, ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, r1, r0)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Theme*> GraphicsTheme___singleton;

GraphicsTheme__uType* GraphicsTheme__typeof()
{
    static ::uStaticStrong<GraphicsTheme__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsTheme__uType*)::uAllocClassType(sizeof(GraphicsTheme__uType), "Fuse.GraphicsTheme", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Theme__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsTheme__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_singleton", &GraphicsTheme___singleton, 0, ::app::Fuse::Theme__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Singleton", GraphicsTheme__get_Singleton, 0, true, ::app::Fuse::Theme__typeof()),
        ::uNewFunction(".ctor", GraphicsTheme__New_2, 0, true, GraphicsTheme__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsTheme___ObjInit_3(GraphicsTheme* __this)
{
    ::app::Fuse::Theme___ObjInit_1(__this);
}

::app::Fuse::Theme* GraphicsTheme__get_Singleton(::uStatic* __this)
{
    if (GraphicsTheme___singleton == NULL)
    {
        GraphicsTheme___singleton = (::app::Fuse::Theme*)GraphicsTheme__New_2(NULL);
    }

    return GraphicsTheme___singleton;
}

GraphicsTheme* GraphicsTheme__New_2(::uStatic* __this)
{
    GraphicsTheme* inst = (GraphicsTheme*)::uAllocObject(sizeof(GraphicsTheme), GraphicsTheme__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* HitTestCallback__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.HitTestCallback", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::HitTestResult__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HitTestContext__uType* HitTestContext__typeof()
{
    static ::uStaticStrong<HitTestContext__uType*> type;
    if (type != NULL) return type;

    type = (HitTestContext__uType*)::uAllocClassType(sizeof(HitTestContext__uType), "Fuse.HitTestContext", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(HitTestContext, _callback));

    type->SetFields(3,
        ::uNewField("_callback", NULL, offsetof(HitTestContext, _callback), ::app::Fuse::HitTestCallback__typeof()),
        ::uNewField("_localPoint", NULL, offsetof(HitTestContext, _localPoint), ::app::Uno::Float2__typeof()),
        ::uNewField("_worldRay", NULL, offsetof(HitTestContext, _worldRay), ::app::Uno::Geometry::Ray__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("Dispose", HitTestContext__Dispose, 0, false),
        ::uNewFunction("get_Callback", HitTestContext__get_Callback, 0, false, ::app::Fuse::HitTestCallback__typeof()),
        ::uNewFunction("get_LocalPoint", HitTestContext__get_LocalPoint, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_WindowPoint", HitTestContext__get_WindowPoint, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_WorldRay", HitTestContext__get_WorldRay, 0, false, ::app::Uno::Geometry::Ray__typeof()),
        ::uNewFunctionVoid("Hit", HitTestContext__Hit, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Hit", HitTestContext__Hit_1, 0, false, ::app::Fuse::Node__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", HitTestContext__New_1, 0, true, HitTestContext__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::HitTestCallback__typeof()),
        ::uNewFunctionVoid("PopLocalPoint", HitTestContext__PopLocalPoint, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("PopWorldRay", HitTestContext__PopWorldRay, 0, false, ::app::Uno::Geometry::Ray__typeof()),
        ::uNewFunction("PushLocalPoint", HitTestContext__PushLocalPoint, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("PushWorldRay", HitTestContext__PushWorldRay, 0, false, ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Geometry::Ray__typeof()),
        ::uNewFunctionVoid("set_WindowPoint", HitTestContext__set_WindowPoint, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void HitTestContext___ObjInit(HitTestContext* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback)
{
    __this->WindowPoint(windowPoint);
    __this->_localPoint = windowPoint;
    __this->_callback = callback;
}

void HitTestContext__Dispose(HitTestContext* __this)
{
    __this->_callback = NULL;
}

::uDelegate* HitTestContext__get_Callback(HitTestContext* __this)
{
    return __this->_callback;
}

::app::Uno::Float2 HitTestContext__get_LocalPoint(HitTestContext* __this)
{
    return __this->_localPoint;
}

::app::Uno::Float2 HitTestContext__get_WindowPoint(HitTestContext* __this)
{
    return __this->_WindowPoint;
}

::app::Uno::Geometry::Ray HitTestContext__get_WorldRay(HitTestContext* __this)
{
    return __this->_worldRay;
}

void HitTestContext__Hit(HitTestContext* __this, ::app::Fuse::Node* obj)
{
    ::app::Fuse::HitTestResult* collection_123;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Callback(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Callback())->InvokeVoid< ::app::Fuse::HitTestResult*>((collection_123 = ::app::Fuse::HitTestResult__New_1(NULL), ::uPtr< ::app::Fuse::HitTestResult*>(collection_123)->HitObject(obj), obj, collection_123));
    }
}

void HitTestContext__Hit_1(HitTestContext* __this, ::app::Fuse::Node* obj, float hitDistance)
{
    ::app::Fuse::HitTestResult* collection_124;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Callback(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Callback())->InvokeVoid< ::app::Fuse::HitTestResult*>((collection_124 = ::app::Fuse::HitTestResult__New_1(NULL), ::uPtr< ::app::Fuse::HitTestResult*>(collection_124)->HitObject(obj), obj, ::uPtr< ::app::Fuse::HitTestResult*>(collection_124)->HasHitDistance(true), true, ::uPtr< ::app::Fuse::HitTestResult*>(collection_124)->HitDistance(hitDistance), hitDistance, collection_124));
    }
}

HitTestContext* HitTestContext__New_1(::uStatic* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback)
{
    HitTestContext* inst = (HitTestContext*)::uAllocObject(sizeof(HitTestContext), HitTestContext__typeof());
    inst->_ObjInit(windowPoint, callback);
    return inst;
}

void HitTestContext__PopLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp)
{
    __this->_localPoint = lp;
}

void HitTestContext__PopWorldRay(HitTestContext* __this, ::app::Uno::Geometry::Ray o)
{
    __this->_worldRay = o;
}

::app::Uno::Float2 HitTestContext__PushLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp)
{
    ::app::Uno::Float2 r = __this->_localPoint;
    __this->_localPoint = lp;
    return r;
}

::app::Uno::Geometry::Ray HitTestContext__PushWorldRay(HitTestContext* __this, ::app::Uno::Geometry::Ray n)
{
    ::app::Uno::Geometry::Ray r = __this->_worldRay;
    __this->_worldRay = n;
    return r;
}

void HitTestContext__set_WindowPoint(HitTestContext* __this, ::app::Uno::Float2 value)
{
    __this->_WindowPoint = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* HitTestHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.HitTestHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::HitTestContext__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HitTestResult__uType* HitTestResult__typeof()
{
    static ::uStaticStrong<HitTestResult__uType*> type;
    if (type != NULL) return type;

    type = (HitTestResult__uType*)::uAllocClassType(sizeof(HitTestResult__uType), "Fuse.HitTestResult", false, 0, 1, 0);

    type->SetStrongRefs(
        "_HitObject", offsetof(HitTestResult, _HitObject));

    type->SetFunctions(7,
        ::uNewFunction("get_HasHitDistance", HitTestResult__get_HasHitDistance, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HitDistance", HitTestResult__get_HitDistance, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_HitObject", HitTestResult__get_HitObject, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", HitTestResult__New_1, 0, true, HitTestResult__typeof()),
        ::uNewFunctionVoid("set_HasHitDistance", HitTestResult__set_HasHitDistance, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_HitDistance", HitTestResult__set_HitDistance, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_HitObject", HitTestResult__set_HitObject, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void HitTestResult___ObjInit(HitTestResult* __this)
{
}

bool HitTestResult__get_HasHitDistance(HitTestResult* __this)
{
    return __this->_HasHitDistance;
}

float HitTestResult__get_HitDistance(HitTestResult* __this)
{
    return __this->_HitDistance;
}

::app::Fuse::Node* HitTestResult__get_HitObject(HitTestResult* __this)
{
    return __this->_HitObject;
}

HitTestResult* HitTestResult__New_1(::uStatic* __this)
{
    HitTestResult* inst = (HitTestResult*)::uAllocObject(sizeof(HitTestResult), HitTestResult__typeof());
    inst->_ObjInit();
    return inst;
}

void HitTestResult__set_HasHitDistance(HitTestResult* __this, bool value)
{
    __this->_HasHitDistance = value;
}

void HitTestResult__set_HitDistance(HitTestResult* __this, float value)
{
    __this->_HitDistance = value;
}

void HitTestResult__set_HitObject(HitTestResult* __this, ::app::Fuse::Node* value)
{
    __this->_HitObject = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IActualPlacement__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.IActualPlacement");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IFlush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.IFlush");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IFrustum__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.IFrustum");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* InvalidateLayoutReason__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.InvalidateLayoutReason", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "NothingChanged", 0LL,
        "ChildChanged", 1LL,
        "MarginBoxChanged", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Processing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IOutput__Fuse_Drawing_Polygon__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.IOutput<Fuse.Drawing.Polygon>");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ITranslationMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.ITranslationMode");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IViewport__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.IViewport");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyboardBootstrapper__uType* KeyboardBootstrapper__typeof()
{
    static ::uStaticStrong<KeyboardBootstrapper__uType*> type;
    if (type != NULL) return type;

    type = (KeyboardBootstrapper__uType*)::uAllocClassType(sizeof(KeyboardBootstrapper__uType), "Fuse.KeyboardBootstrapper", false, 0, 0, 0);

    type->SetFunctions(4,
        ::uNewFunction(".ctor", KeyboardBootstrapper__New_1, 0, true, KeyboardBootstrapper__typeof()),
        ::uNewFunctionVoid("OnKeyPressed", KeyboardBootstrapper__OnKeyPressed, 0, true, ::uObject__typeof(), ::app::Uno::Platform::KeyEventArgs__typeof()),
        ::uNewFunctionVoid("OnKeyReleased", KeyboardBootstrapper__OnKeyReleased, 0, true, ::uObject__typeof(), ::app::Uno::Platform::KeyEventArgs__typeof()),
        ::uNewFunctionVoid("OnTextInput", KeyboardBootstrapper__OnTextInput, 0, true, ::uObject__typeof(), ::app::Uno::Platform::TextInputEventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeyboardBootstrapper___ObjInit(KeyboardBootstrapper* __this)
{
}

KeyboardBootstrapper* KeyboardBootstrapper__New_1(::uStatic* __this)
{
    KeyboardBootstrapper* inst = (KeyboardBootstrapper*)::uAllocObject(sizeof(KeyboardBootstrapper), KeyboardBootstrapper__typeof());
    inst->_ObjInit();
    return inst;
}

void KeyboardBootstrapper__OnKeyPressed(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args)
{
    try
    {
        if (!::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled() && (::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Key() == 9))
        {
            ::app::Fuse::Input::Focus__Move(NULL, ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsShiftKeyPressed() ? 0 : 1);
        }

        ::app::Fuse::Input::Keyboard__RaiseKeyPressed(NULL, ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Key(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsMetaKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsControlKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsShiftKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsAltKeyPressed());
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void KeyboardBootstrapper__OnKeyReleased(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args)
{
    try
    {
        ::app::Fuse::Input::Keyboard__RaiseKeyReleased(NULL, ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Key(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsMetaKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsControlKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsShiftKeyPressed(), ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->IsAltKeyPressed());
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void KeyboardBootstrapper__OnTextInput(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::TextInputEventArgs* args)
{
    try
    {
        ::uPtr< ::app::Uno::Platform::TextInputEventArgs*>(args)->Handled(::app::Fuse::Input::TextService__RaiseTextEntered(NULL, ::uPtr< ::app::Uno::Platform::TextInputEventArgs*>(args)->Text()));
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Launcher\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Launcher__uType* Launcher__typeof()
{
    static ::uStaticStrong<Launcher__uType*> type;
    if (type != NULL) return type;

    type = (Launcher__uType*)::uAllocClassType(sizeof(Launcher__uType), "Fuse.Launcher");

    type->SetFunctions(7,
        ::uNewFunctionVoid("_launchMaps", Launcher___launchMaps, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("LaunchCall", Launcher__LaunchCall, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("LaunchEmail", Launcher__LaunchEmail, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("LaunchMaps", Launcher__LaunchMaps, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("LaunchMaps", Launcher__LaunchMaps_1, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("LaunchMaps", Launcher__LaunchMaps_2, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("LaunchUri", Launcher__LaunchUri, 0, true, ::app::Uno::Net::Http::Uri__typeof()));

    ::uRegisterType(type);
    return type;
}

void Launcher___launchMaps(::uStatic* __this, ::uString* uri)
{
    {
        ::app::Android::android::content::Intent* mapIntent = ::app::Android::android::content::Intent__New_8(NULL, ::app::Android::android::content::Intent__get_ACTION_VIEW(NULL));
        ::uPtr< ::app::Android::android::content::Intent*>(mapIntent)->setData(::app::Android::android::net::Uri__parse(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, uri)));
        mapIntent->setClassName_1(::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString("com.google.android.apps.maps")), ::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString("com.google.android.maps.MapsActivity")));
        ::uPtr< ::app::Android::android::app::Activity*>(::app::Android::android::app::Activity__GetAppActivity(NULL))->startActivity(mapIntent);
    }
}

void Launcher__LaunchCall(::uStatic* __this, ::uString* callString)
{
    ::app::Uno::Text::StringBuilder* builder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString("tel:"));
    builder->Append_1(callString);
    {
        ::app::Android::Base::Permissions__RequestPermission(NULL, ::app::Android::Base::Permissions__get_CALL_PHONE(NULL));
        ::app::Android::android::content::Intent* callIntent = ::app::Android::android::content::Intent__New_8(NULL, ::app::Android::android::content::Intent__get_ACTION_CALL(NULL));
        ::uPtr< ::app::Android::android::content::Intent*>(callIntent)->setData(::app::Android::android::net::Uri__parse(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->ToString())));
        ::app::Android::android::app::Activity* a = ::app::Android::android::app::Activity__GetAppActivity(NULL);
        ::uPtr< ::app::Android::android::app::Activity*>(a)->startActivity(callIntent);
    }
}

void Launcher__LaunchEmail(::uStatic* __this, ::uString* to, ::uString* carbonCopy, ::uString* blindCarbonCopy, ::uString* subject, ::uString* message)
{
    ::app::Uno::Text::StringBuilder* builder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString("mailto:"));
    builder->Append_1(to);
    builder->Append_1(::uGetConstString("?"));

    if (!::app::Uno::String__IsNullOrEmpty(NULL, carbonCopy))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString("cc="));
        builder->Append_1(carbonCopy);
    }

    if (!::app::Uno::String__IsNullOrEmpty(NULL, blindCarbonCopy))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString("&"));
        builder->Append_1(::uGetConstString("bcc="));
        builder->Append_1(blindCarbonCopy);
    }

    if (!::app::Uno::String__IsNullOrEmpty(NULL, subject))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString("&"));
        builder->Append_1(::uGetConstString("subject="));
        builder->Append_1(::app::Uno::String::Replace_1(::uPtr< ::uString*>(subject), ::uGetConstString(" "), ::uGetConstString("%20")));
    }

    if (!::app::Uno::String__IsNullOrEmpty(NULL, message))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uGetConstString("&"));
        builder->Append_1(::uGetConstString("body="));
        builder->Append_1(::app::Uno::String::Replace_1(::uPtr< ::uString*>(message), ::uGetConstString(" "), ::uGetConstString("%20")));
    }

    {
        ::app::Android::Base::Permissions__RequestPermission(NULL, ::app::Android::Base::Permissions__get_INTERNET(NULL));
        ::app::Android::android::content::Intent* mailIntent = ::app::Android::android::content::Intent__New_8(NULL, ::app::Android::android::content::Intent__get_ACTION_SENDTO(NULL));
        ::uPtr< ::app::Android::android::content::Intent*>(mailIntent)->setData(::app::Android::android::net::Uri__parse(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->ToString())));
        ::app::Android::android::app::Activity* a = ::app::Android::android::app::Activity__GetAppActivity(NULL);
        ::uPtr< ::app::Android::android::app::Activity*>(a)->startActivity(mailIntent);
    }
}

void Launcher__LaunchMaps(::uStatic* __this, double latitude, double longitude)
{
    ::uString* latlon = ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::Double::ToString(latitude), ::uGetConstString(",")), ::app::Uno::Double::ToString(longitude));
    {
        Launcher___launchMaps(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("geo:"), latlon), ::uGetConstString("?q=")), latlon));
    }
}

void Launcher__LaunchMaps_1(::uStatic* __this, double latitude, double longitude, ::uString* query)
{
    ::uString* latlon = ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::Double::ToString(latitude), ::uGetConstString(",")), ::app::Uno::Double::ToString(longitude));
    {
        Launcher___launchMaps(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("geo:"), latlon), ::uGetConstString("?q=")), query));
    }
}

void Launcher__LaunchMaps_2(::uStatic* __this, ::uString* query)
{
    {
        Launcher___launchMaps(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("geo:0,0?q="), query));
    }
}

void Launcher__LaunchUri(::uStatic* __this, ::app::Uno::Net::Http::Uri* uri)
{
    ::app::Uno::Text::StringBuilder* builder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uPtr< ::app::Uno::Net::Http::Uri*>(uri)->AbsoluteUri());
    {
        ::app::Android::Base::Permissions__RequestPermission(NULL, ::app::Android::Base::Permissions__get_INTERNET(NULL));
        ::app::Android::android::content::Intent* callIntent = ::app::Android::android::content::Intent__New_8(NULL, ::app::Android::android::content::Intent__get_ACTION_VIEW(NULL));
        ::uPtr< ::app::Android::android::content::Intent*>(callIntent)->setData(::app::Android::android::net::Uri__parse(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->ToString())));
        ::app::Android::android::app::Activity* a = ::app::Android::android::app::Activity__GetAppActivity(NULL);
        ::uPtr< ::app::Android::android::app::Activity*>(a)->startActivity(callIntent);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* LayoutDependent__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.LayoutDependent", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "No", 0LL,
        "Maybe", 1LL,
        "Yes", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

bool MobileBootstrapping___isInited;

MobileBootstrapping__uType* MobileBootstrapping__typeof()
{
    static ::uStaticStrong<MobileBootstrapping__uType*> type;
    if (type != NULL) return type;

    type = (MobileBootstrapping__uType*)::uAllocClassType(sizeof(MobileBootstrapping__uType), "Fuse.MobileBootstrapping", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("_isInited", &MobileBootstrapping___isInited, 0, ::app::Uno::Bool__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Init", MobileBootstrapping__Init, 0, true),
        ::uNewFunction(".ctor", MobileBootstrapping__New_1, 0, true, MobileBootstrapping__typeof()),
        ::uNewFunctionVoid("OnEnterBackground", MobileBootstrapping__OnEnterBackground, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnEnterForeground", MobileBootstrapping__OnEnterForeground, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnEnterInteractive", MobileBootstrapping__OnEnterInteractive, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnExitInteractive", MobileBootstrapping__OnExitInteractive, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnKeyPressed", MobileBootstrapping__OnKeyPressed, 0, true, ::uObject__typeof(), ::app::Uno::Platform::KeyEventArgs__typeof()),
        ::uNewFunctionVoid("OnKeyReleased", MobileBootstrapping__OnKeyReleased, 0, true, ::uObject__typeof(), ::app::Uno::Platform::KeyEventArgs__typeof()),
        ::uNewFunctionVoid("OnReceivedLowMemoryWarning", MobileBootstrapping__OnReceivedLowMemoryWarning, 0, true, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnStarted", MobileBootstrapping__OnStarted, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()),
        ::uNewFunctionVoid("OnTerminating", MobileBootstrapping__OnTerminating, 0, true, ::app::Uno::Platform2::ApplicationState__typeof()));

    ::uRegisterType(type);
    return type;
}

void MobileBootstrapping___ObjInit(MobileBootstrapping* __this)
{
}

void MobileBootstrapping__Init(::uStatic* __this)
{
    if (MobileBootstrapping___isInited)
    {
        return;
    }

    MobileBootstrapping___isInited = true;
    ::app::Uno::Platform2::Application__add_Started(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnStarted));
    ::app::Uno::Platform2::Application__add_EnteringForeground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnEnterForeground));
    ::app::Uno::Platform2::Application__add_EnteringInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnEnterInteractive));
    ::app::Uno::Platform2::Application__add_ExitedInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnExitInteractive));
    ::app::Uno::Platform2::Application__add_EnteringBackground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnEnterBackground));
    ::app::Uno::Platform2::Application__add_ReceivedLowMemoryWarning(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)MobileBootstrapping__OnReceivedLowMemoryWarning));
    ::app::Uno::Platform2::Application__add_Terminating(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnTerminating));
    ::app::Uno::Platform2::Application__add_KeyDown(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Fuse::KeyboardBootstrapper__OnKeyPressed));
    ::app::Uno::Platform2::Application__add_KeyDown(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)MobileBootstrapping__OnKeyPressed));
    ::app::Uno::Platform2::Application__add_KeyUp(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)::app::Fuse::KeyboardBootstrapper__OnKeyReleased));
    ::app::Uno::Platform2::Application__add_KeyUp(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_KeyEventArgs__typeof(), (const void*)MobileBootstrapping__OnKeyReleased));
}

MobileBootstrapping* MobileBootstrapping__New_1(::uStatic* __this)
{
    MobileBootstrapping* inst = (MobileBootstrapping*)::uAllocObject(sizeof(MobileBootstrapping), MobileBootstrapping__typeof());
    inst->_ObjInit();
    return inst;
}

void MobileBootstrapping__OnEnterBackground(::uStatic* __this, int state)
{
}

void MobileBootstrapping__OnEnterForeground(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->FramesPerSecond(20u);
}

void MobileBootstrapping__OnEnterInteractive(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->FramesPerSecond(60u);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->OnGotFocus(::app::Uno::EventArgs__Empty);
}

void MobileBootstrapping__OnExitInteractive(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->FramesPerSecond(20u);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->OnLostFocus(::app::Uno::EventArgs__Empty);
}

void MobileBootstrapping__OnKeyPressed(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->OnKeyPressed(args);
}

void MobileBootstrapping__OnKeyReleased(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args)
{
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->OnKeyReleased(args);
}

void MobileBootstrapping__OnReceivedLowMemoryWarning(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
}

void MobileBootstrapping__OnStarted(::uStatic* __this, int state)
{
    ::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Load();
}

void MobileBootstrapping__OnTerminating(::uStatic* __this, int state)
{
    ::app::Uno::Platform2::Application__remove_Started(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnStarted));
    ::app::Uno::Platform2::Application__remove_EnteringForeground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnEnterForeground));
    ::app::Uno::Platform2::Application__remove_EnteringInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnEnterInteractive));
    ::app::Uno::Platform2::Application__remove_ExitedInteractive(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnExitInteractive));
    ::app::Uno::Platform2::Application__remove_EnteringBackground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnEnterBackground));
    ::app::Uno::Platform2::Application__remove_ReceivedLowMemoryWarning(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)MobileBootstrapping__OnReceivedLowMemoryWarning));
    ::app::Uno::Platform2::Application__remove_Terminating(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MobileBootstrapping__OnTerminating));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Theme*> NativeTheme___singleton;

NativeTheme__uType* NativeTheme__typeof()
{
    static ::uStaticStrong<NativeTheme__uType*> type;
    if (type != NULL) return type;

    type = (NativeTheme__uType*)::uAllocClassType(sizeof(NativeTheme__uType), "Fuse.NativeTheme", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Theme__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeTheme__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_singleton", &NativeTheme___singleton, 0, ::app::Fuse::Theme__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Singleton", NativeTheme__get_Singleton, 0, true, ::app::Fuse::Theme__typeof()),
        ::uNewFunction(".ctor", NativeTheme__New_2, 0, true, NativeTheme__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeTheme___ObjInit_3(NativeTheme* __this)
{
    ::app::Fuse::Theme___ObjInit_1(__this);
}

::app::Fuse::Theme* NativeTheme__get_Singleton(::uStatic* __this)
{
    if (NativeTheme___singleton == NULL)
    {
        NativeTheme___singleton = (::app::Fuse::Theme*)NativeTheme__New_2(NULL);
    }

    return NativeTheme___singleton;
}

NativeTheme* NativeTheme__New_2(::uStatic* __this)
{
    NativeTheme* inst = (NativeTheme*)::uAllocObject(sizeof(NativeTheme), NativeTheme__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Theme*> NativeWithFallbackTheme___singleton;
::uStaticStrong< ::uDelegate*> NativeWithFallbackTheme___ThemeFactory;

NativeWithFallbackTheme__uType* NativeWithFallbackTheme__typeof()
{
    static ::uStaticStrong<NativeWithFallbackTheme__uType*> type;
    if (type != NULL) return type;

    type = (NativeWithFallbackTheme__uType*)::uAllocClassType(sizeof(NativeWithFallbackTheme__uType), "Fuse.NativeWithFallbackTheme", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("_singleton", &NativeWithFallbackTheme___singleton, 0, ::app::Fuse::Theme__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Singleton", NativeWithFallbackTheme__get_Singleton, 0, true, ::app::Fuse::Theme__typeof()),
        ::uNewFunction("get_ThemeFactory", NativeWithFallbackTheme__get_ThemeFactory, 0, true, ::app::Fuse::NativeWithFallbackTheme_CreateTheme__typeof()),
        ::uNewFunction(".ctor", NativeWithFallbackTheme__New_1, 0, true, NativeWithFallbackTheme__typeof()),
        ::uNewFunctionVoid("set_ThemeFactory", NativeWithFallbackTheme__set_ThemeFactory, 0, true, ::app::Fuse::NativeWithFallbackTheme_CreateTheme__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeWithFallbackTheme___ObjInit(NativeWithFallbackTheme* __this)
{
}

::app::Fuse::Theme* NativeWithFallbackTheme__get_Singleton(::uStatic* __this)
{
    if (NativeWithFallbackTheme___singleton == NULL)
    {
        if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)NativeWithFallbackTheme__get_ThemeFactory(NULL), NULL))
        {
            NativeWithFallbackTheme___singleton = (::app::Fuse::Theme*)::app::Fuse::NativeTheme__New_2(NULL);
        }
        else
        {
            NativeWithFallbackTheme___singleton = ::uPtr< ::uDelegate*>(NativeWithFallbackTheme__get_ThemeFactory(NULL))->Invoke< ::app::Fuse::Theme*>();
        }
    }

    return NativeWithFallbackTheme___singleton;
}

::uDelegate* NativeWithFallbackTheme__get_ThemeFactory(::uStatic* __this)
{
    return NativeWithFallbackTheme___ThemeFactory;
}

NativeWithFallbackTheme* NativeWithFallbackTheme__New_1(::uStatic* __this)
{
    NativeWithFallbackTheme* inst = (NativeWithFallbackTheme*)::uAllocObject(sizeof(NativeWithFallbackTheme), NativeWithFallbackTheme__typeof());
    inst->_ObjInit();
    return inst;
}

void NativeWithFallbackTheme__set_ThemeFactory(::uStatic* __this, ::uDelegate* value)
{
    NativeWithFallbackTheme___ThemeFactory = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* NativeWithFallbackTheme_CreateTheme__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.NativeWithFallbackTheme.CreateTheme", 0);

    type->SetSignature(::app::Fuse::Theme__typeof());

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___addedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___isEnabledChangedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___isVisibleChangedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___nameHandle;
::uStaticStrong< ::app::Uno::Collections::HashSet__Fuse_Node*> Node___needsStyling;
bool Node___performingLayout;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___removedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___resourcesHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___rootedHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___styleHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Node___unrootedHandle;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__bool*> Node__IsEnabledProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__string*> Node__NameProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__bool*> Node__SnapToPixelsProperty;

Node__uType* Node__typeof()
{
    static ::uStaticStrong<Node__uType*> type;
    if (type != NULL) return type;

    type = (Node__uType*)::uAllocClassType(sizeof(Node__uType), "Fuse.Node", false, 1, 15, 0);

    type->__fp_Draw = Node__Draw;
    type->__fp_DrawSelection = Node__DrawSelection;
    type->__fp_get_AbsoluteViewportOrigin = Node__get_AbsoluteViewportOrigin;
    type->__fp_get_HitTestBounds = Node__get_HitTestBounds;
    type->__fp_get_HitTestChildrenBounds = Node__get_HitTestChildrenBounds;
    type->__fp_get_HitTestLocalBounds = Node__get_HitTestLocalBounds;
    type->__fp_get_IsLocalVisible = Node__get_IsLocalVisible;
    type->__fp_get_LocalBounds = Node__get_LocalBounds;
    type->__fp_get_LocalDrawCount = Node__get_LocalDrawCount;
    type->__fp_get_LocalRenderBounds = Node__get_LocalRenderBounds;
    type->__fp_get_SubNodeCount = Node__get_SubNodeCount;
    type->__fp_GetMarginSize = Node__GetMarginSize;
    type->__fp_GetSubNode = Node__GetSubNode;
    type->__fp_InvalidateLocalTransform = Node__InvalidateLocalTransform;
    type->__fp_InvalidateVisual = Node__InvalidateVisual;
    type->__fp_IsMarginBoxDependent = Node__IsMarginBoxDependent;
    type->__fp_OnApplyStyle = Node__OnApplyStyle;
    type->__fp_OnArrangeMarginBox = Node__OnArrangeMarginBox;
    type->__fp_OnHitTest = Node__OnHitTest;
    type->__fp_OnInvalidateLayout = Node__OnInvalidateLayout;
    type->__fp_OnInvalidateRenderBounds = Node__OnInvalidateRenderBounds;
    type->__fp_OnIsEnabledChanged = Node__OnIsEnabledChanged;
    type->__fp_OnResetStyle = Node__OnResetStyle;
    type->__fp_OnRooted = Node__OnRooted;
    type->__fp_OnSaveLayoutState = Node__OnSaveLayoutState;
    type->__fp_OnUnrooted = Node__OnUnrooted;
    type->__fp_PrependImplicitTransform = Node__PrependImplicitTransform;
    type->__fp_PrependInverseTransformOrigin = Node__PrependInverseTransformOrigin;
    type->__fp_PrependTransformOrigin = Node__PrependTransformOrigin;
    type->__fp_SoftDispose = Node__SoftDispose;
    type->__fp_WindowToWorldRay = Node__WindowToWorldRay;
    type->__interface_0.__fp_FindObjectByName = (::uObject*(*)(void*, ::uString*, ::uDelegate*))Node__FindObjectByName;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Node__uType, __interface_0));

    type->SetStrongRefs(
        "_behaviors", offsetof(Node, _behaviors),
        "_dataContext", offsetof(Node, _dataContext),
        "_hitTestBoundsCache", offsetof(Node, _hitTestBoundsCache),
        "_localTransform", offsetof(Node, _localTransform),
        "_localTransformInverse", offsetof(Node, _localTransformInverse),
        "_parent", offsetof(Node, _parent),
        "_properties", offsetof(Node, _properties),
        "_transforms", offsetof(Node, _transforms),
        "_updateListeners", offsetof(Node, _updateListeners),
        "_worldTransform", offsetof(Node, _worldTransform),
        "_worldTransformInverse", offsetof(Node, _worldTransformInverse),
        "BeginRemove", offsetof(Node, BeginRemove),
        "DataContextChanged", offsetof(Node, DataContextChanged),
        "RequestBringIntoView", offsetof(Node, RequestBringIntoView),
        "TransformsChanged", offsetof(Node, TransformsChanged));

    type->SetFields(63,
        ::uNewField("_addedHandle", &Node___addedHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_ambAvailSet", NULL, offsetof(Node, _ambAvailSet), ::app::Fuse::SizeFlags__typeof()),
        ::uNewField("_ambMargin", NULL, offsetof(Node, _ambMargin), ::app::Uno::Float2__typeof()),
        ::uNewField("_ambPosition", NULL, offsetof(Node, _ambPosition), ::app::Uno::Float2__typeof()),
        ::uNewField("_ambSize", NULL, offsetof(Node, _ambSize), ::app::Uno::Float2__typeof()),
        ::uNewField("_b0", NULL, offsetof(Node, _b0), ::app::Uno::UInt__typeof()),
        ::uNewField("_b1", NULL, offsetof(Node, _b1), ::app::Uno::UInt__typeof()),
        ::uNewField("_b2", NULL, offsetof(Node, _b2), ::app::Uno::UInt__typeof()),
        ::uNewField("_b3", NULL, offsetof(Node, _b3), ::app::Uno::UInt__typeof()),
        ::uNewField("_b4", NULL, offsetof(Node, _b4), ::app::Uno::UInt__typeof()),
        ::uNewField("_b5", NULL, offsetof(Node, _b5), ::app::Uno::UInt__typeof()),
        ::uNewField("_behaviors", NULL, offsetof(Node, _behaviors), ::app::Uno::Collections::ObservableList__Fuse_Behavior__typeof()),
        ::uNewField("_cachedRenderTargetSize", NULL, offsetof(Node, _cachedRenderTargetSize), ::app::Uno::Float2__typeof()),
        ::uNewField("_dataContext", NULL, offsetof(Node, _dataContext), ::uObject__typeof()),
        ::uNewField("_drawCost", NULL, offsetof(Node, _drawCost), ::app::Uno::Double__typeof()),
        ::uNewField("_drawCount", NULL, offsetof(Node, _drawCount), ::app::Fuse::SumDrawCount__typeof()),
        ::uNewField("_hasListenerAction", NULL, offsetof(Node, _hasListenerAction), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasMarginBox", NULL, offsetof(Node, _hasMarginBox), ::app::Uno::Bool__typeof()),
        ::uNewField("_hitTestBoundsCache", NULL, offsetof(Node, _hitTestBoundsCache), ::app::Fuse::NodeBounds__typeof()),
        ::uNewField("_ignoreStyle", NULL, offsetof(Node, _ignoreStyle), ::app::Uno::Bool__typeof()),
        ::uNewField("_isAddedUpdate", NULL, offsetof(Node, _isAddedUpdate), ::app::Uno::Bool__typeof()),
        ::uNewField("_isDrawCount", NULL, offsetof(Node, _isDrawCount), ::app::Uno::Bool__typeof()),
        ::uNewField("_isEnabledCache", NULL, offsetof(Node, _isEnabledCache), ::app::Uno::Bool__typeof()),
        ::uNewField("_isEnabledChangedHandle", &Node___isEnabledChangedHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_isFlat", NULL, offsetof(Node, _isFlat), ::app::Uno::Bool__typeof()),
        ::uNewField("_isFlatCached", NULL, offsetof(Node, _isFlatCached), ::app::Uno::Bool__typeof()),
        ::uNewField("_isHitTestBoundsCacheValid", NULL, offsetof(Node, _isHitTestBoundsCacheValid), ::app::Uno::Bool__typeof()),
        ::uNewField("_isLocalFlat", NULL, offsetof(Node, _isLocalFlat), ::app::Uno::Bool__typeof()),
        ::uNewField("_isLocalFlatCached", NULL, offsetof(Node, _isLocalFlatCached), ::app::Uno::Bool__typeof()),
        ::uNewField("_isVisibleCached", NULL, offsetof(Node, _isVisibleCached), ::app::Uno::Bool__typeof()),
        ::uNewField("_isVisibleChangedHandle", &Node___isVisibleChangedHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_lastInvalidate", NULL, offsetof(Node, _lastInvalidate), ::app::Uno::Int__typeof()),
        ::uNewField("_layoutDirty", NULL, offsetof(Node, _layoutDirty), ::app::Fuse::InvalidateLayoutReason__typeof()),
        ::uNewField("_localTransform", NULL, offsetof(Node, _localTransform), ::app::Fuse::FastMatrix__typeof()),
        ::uNewField("_localTransformInverse", NULL, offsetof(Node, _localTransformInverse), ::app::Fuse::FastMatrix__typeof()),
        ::uNewField("_nameHandle", &Node___nameHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_needsStyling", &Node___needsStyling, 0, ::app::Uno::Collections::HashSet__Fuse_Node__typeof()),
        ::uNewField("_nodebits", NULL, offsetof(Node, _nodebits), ::app::Uno::Int__typeof()),
        ::uNewField("_parent", NULL, offsetof(Node, _parent), Node__typeof()),
        ::uNewField("_performingLayout", &Node___performingLayout, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_ppPendLayoutChange", NULL, offsetof(Node, _ppPendLayoutChange), ::app::Uno::Int__typeof()),
        ::uNewField("_properties", NULL, offsetof(Node, _properties), ::app::Fuse::Properties__typeof()),
        ::uNewField("_removedHandle", &Node___removedHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_resourcesHandle", &Node___resourcesHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_rootedHandle", &Node___rootedHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_rootStage", NULL, offsetof(Node, _rootStage), ::app::Fuse::Node_RootStage__typeof()),
        ::uNewField("_styleHandle", &Node___styleHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_transforms", NULL, offsetof(Node, _transforms), ::app::Uno::Collections::ObservableList__Fuse_Transform__typeof()),
        ::uNewField("_unrootedHandle", &Node___unrootedHandle, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_updateListeners", NULL, offsetof(Node, _updateListeners), ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler__typeof()),
        ::uNewField("_visualDirty", NULL, offsetof(Node, _visualDirty), ::app::Uno::Bool__typeof()),
        ::uNewField("_worldTransform", NULL, offsetof(Node, _worldTransform), ::app::Fuse::FastMatrix__typeof()),
        ::uNewField("_worldTransformCacheVersion", NULL, offsetof(Node, _worldTransformCacheVersion), ::app::Uno::Int__typeof()),
        ::uNewField("_worldTransformInverse", NULL, offsetof(Node, _worldTransformInverse), ::app::Fuse::FastMatrix__typeof()),
        ::uNewField("_worldTransformInverseCacheVersion", NULL, offsetof(Node, _worldTransformInverseCacheVersion), ::app::Uno::Int__typeof()),
        ::uNewField("_worldTransformParentCacheVersion", NULL, offsetof(Node, _worldTransformParentCacheVersion), ::app::Uno::Int__typeof()),
        ::uNewField("_worldTransformVersion", NULL, offsetof(Node, _worldTransformVersion), ::app::Uno::Int__typeof()),
        ::uNewField("IsEnabledProperty", &Node__IsEnabledProperty, 0, ::app::Fuse::StyleProperty__Fuse_Node__bool__typeof()),
        ::uNewField("NameProperty", &Node__NameProperty, 0, ::app::Fuse::StyleProperty__Fuse_Node__string__typeof()),
        ::uNewField("SnapToPixelsProperty", &Node__SnapToPixelsProperty, 0, ::app::Fuse::StyleProperty__Fuse_Node__bool__typeof()),
        ::uNewField("ZLayer", NULL, offsetof(Node, ZLayer), ::app::Uno::Int__typeof()),
        ::uNewField("ZOffset", NULL, offsetof(Node, ZOffset), ::app::Uno::Int__typeof()),
        ::uNewField("ZOffsetFixed", NULL, offsetof(Node, ZOffsetFixed), ::app::Uno::Bool__typeof()));

    type->SetFunctions(183,
        ::uNewFunctionVoid("add_Added", Node__add_Added, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_BeginRemove", Node__add_BeginRemove, 0, false, ::app::Fuse::BeginRemoveHandler__typeof()),
        ::uNewFunctionVoid("add_DataContextChanged", Node__add_DataContextChanged, 0, false, ::app::Fuse::DataContextChangedHandler__typeof()),
        ::uNewFunctionVoid("add_IsEnabledChanged", Node__add_IsEnabledChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_IsVisibleChanged", Node__add_IsVisibleChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_Removed", Node__add_Removed, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_RequestBringIntoView", Node__add_RequestBringIntoView, 0, false, ::app::Fuse::RequestBringIntoViewHandler__typeof()),
        ::uNewFunctionVoid("add_Rooted", Node__add_Rooted, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_TransformsChanged", Node__add_TransformsChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_Unrooted", Node__add_Unrooted, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_Update", Node__add_Update, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("AddDrawCost", Node__AddDrawCost, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("AddEventHandler", Node__AddEventHandler, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::app::Fuse::Node_NodeBits__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("AddStyleBehavior", Node__AddStyleBehavior, 0, false, ::app::Fuse::Behavior__typeof()),
        ::uNewFunctionVoid("AddStyleStyle", Node__AddStyleStyle, 0, false, ::app::Fuse::Style__typeof()),
        ::uNewFunctionVoid("AddStyleTransform", Node__AddStyleTransform, 0, false, ::app::Fuse::Transform__typeof()),
        ::uNewFunctionVoid("ApplyStyle", Node__ApplyStyle, 0, false),
        ::uNewFunctionVoid("ApplyStyle", Node__ApplyStyle_1, 0, false, ::uObject__typeof()),
        ::uNewFunction("ArrangeMarginBox", Node__ArrangeMarginBox, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunctionVoid("BringIntoView", Node__BringIntoView, 0, false),
        ::uNewFunction("CalcRenderBoundsInParentSpace", Node__CalcRenderBoundsInParentSpace, 0, false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("CalcWorldTransform", Node__CalcWorldTransform, 0, false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunctionVoid("CheckUpdateListening", Node__CheckUpdateListening, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("ClearBit", Node__ClearBit, 0, false, ::app::Fuse::Node_NodeBits__typeof()),
        ::uNewFunctionVoid("DoUpdate", Node__DoUpdate, 0, false),
        ::uNewFunctionVoid("Draw", type->__fp_Draw, offsetof(Node__uType, __fp_Draw), false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("DrawLocalRect", Node__DrawLocalRect, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Rect__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("DrawLocalSelectionRect", Node__DrawLocalSelectionRect, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Rect__typeof()),
        ::uNewFunctionVoid("DrawSelection", type->__fp_DrawSelection, offsetof(Node__uType, __fp_DrawSelection), false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunction("FindAlgorithm", Node__FindAlgorithm, 0, false, Node__typeof(), ::app::Uno::String__typeof(), Node__typeof()),
        ::uNewFunction("FindNodeByName", Node__FindNodeByName, 0, false, Node__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("FindObjectByName", Node__FindObjectByName, 0, false, ::uObject__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Predicate__object__typeof()),
        ::uNewFunction("get_AbsoluteViewportOrigin", type->__fp_get_AbsoluteViewportOrigin, offsetof(Node__uType, __fp_get_AbsoluteViewportOrigin), false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_AbsoluteZoom", Node__get_AbsoluteZoom, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_AddedByStyle", Node__get_AddedByStyle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Behaviors", Node__get_Behaviors, 0, false, ::app::Uno::Collections::IList__Fuse_Behavior__typeof()),
        ::uNewFunction("get_DataContext", Node__get_DataContext, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_DrawCost", Node__get_DrawCost, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_DrawCount", Node__get_DrawCount, 0, false, ::app::Fuse::SumDrawCount__typeof()),
        ::uNewFunction("get_HasExplicitTransforms", Node__get_HasExplicitTransforms, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HasResources", Node__get_HasResources, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HasSavedLayoutChange", Node__get_HasSavedLayoutChange, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HitTestBounds", type->__fp_get_HitTestBounds, offsetof(Node__uType, __fp_get_HitTestBounds), false, ::app::Fuse::NodeBounds__typeof()),
        ::uNewFunction("get_HitTestChildrenBounds", type->__fp_get_HitTestChildrenBounds, offsetof(Node__uType, __fp_get_HitTestChildrenBounds), false, ::app::Fuse::NodeBounds__typeof()),
        ::uNewFunction("get_HitTestLocalBounds", type->__fp_get_HitTestLocalBounds, offsetof(Node__uType, __fp_get_HitTestLocalBounds), false, ::app::Fuse::NodeBounds__typeof()),
        ::uNewFunction("get_IgnoreStyle", Node__get_IgnoreStyle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_InternLocalTransformInternal", Node__get_InternLocalTransformInternal, 0, false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunction("get_IsEnabled", Node__get_IsEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsFlat", Node__get_IsFlat, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsLocalFlat", Node__get_IsLocalFlat, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsLocalRooted", Node__get_IsLocalRooted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsLocalTransformTranslationOnly", Node__get_IsLocalTransformTranslationOnly, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsLocalVisible", type->__fp_get_IsLocalVisible, offsetof(Node__uType, __fp_get_IsLocalVisible), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsRooted", Node__get_IsRooted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsVisible", Node__get_IsVisible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsVisualInvalid", Node__get_IsVisualInvalid, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_LocalBounds", type->__fp_get_LocalBounds, offsetof(Node__uType, __fp_get_LocalBounds), false, ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("get_LocalDrawCount", type->__fp_get_LocalDrawCount, offsetof(Node__uType, __fp_get_LocalDrawCount), false, ::app::Fuse::NodeDrawCount__typeof()),
        ::uNewFunction("get_LocalRenderBounds", type->__fp_get_LocalRenderBounds, offsetof(Node__uType, __fp_get_LocalRenderBounds), false, ::app::Uno::Rect__typeof()),
        ::uNewFunction("get_LocalTransform", Node__get_LocalTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_LocalTransformInternal", Node__get_LocalTransformInternal, 0, false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunction("get_LocalTransformInverse", Node__get_LocalTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Name", Node__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Parent", Node__get_Parent, 0, false, Node__typeof()),
        ::uNewFunction("get_PointDensity", Node__get_PointDensity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Properties", Node__get_Properties, 0, false, ::app::Fuse::Properties__typeof()),
        ::uNewFunction("get_Resources", Node__get_Resources, 0, false, ::app::Uno::Collections::IList__Uno_UX_Resource__typeof()),
        ::uNewFunction("get_SnapToPixels", Node__get_SnapToPixels, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Styles", Node__get_Styles, 0, false, ::app::Uno::Collections::IList__Fuse_Style__typeof()),
        ::uNewFunction("get_SubNodeCount", type->__fp_get_SubNodeCount, offsetof(Node__uType, __fp_get_SubNodeCount), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Transforms", Node__get_Transforms, 0, false, ::app::Uno::Collections::IList__Fuse_Transform__typeof()),
        ::uNewFunction("get_ValidFrameCount", Node__get_ValidFrameCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Viewport", Node__get_Viewport, 0, false, ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("get_WorldPosition", Node__get_WorldPosition, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_WorldTransform", Node__get_WorldTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_WorldTransformInternal", Node__get_WorldTransformInternal, 0, false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunction("get_WorldTransformInverse", Node__get_WorldTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("GetHitWindowPoint", Node__GetHitWindowPoint, 0, false, Node__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("GetMarginSize", type->__fp_GetMarginSize, offsetof(Node__uType, __fp_GetMarginSize), false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunction("GetPropertyState", Node__GetPropertyState, 0, false, ::app::Fuse::PropertyState__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetSubNode", type->__fp_GetSubNode, offsetof(Node__uType, __fp_GetSubNode), false, Node__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetTransformTo", Node__GetTransformTo, 0, false, ::app::Uno::Float4x4__typeof(), Node__typeof()),
        ::uNewFunction("GetTransformToAncestor", Node__GetTransformToAncestor, 0, false, ::app::Uno::Float4x4__typeof(), Node__typeof()),
        ::uNewFunction("HasBit", Node__HasBit, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node_NodeBits__typeof()),
        ::uNewFunctionVoid("HitTest", Node__HitTest, 0, false, ::app::Fuse::HitTestContext__typeof()),
        ::uNewFunction("InternSnap", Node__InternSnap, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("InternSnapUp", Node__InternSnapUp, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("InvalidateDrawCount", Node__InvalidateDrawCount, 0, false),
        ::uNewFunctionVoid("InvalidateFlat", Node__InvalidateFlat, 0, false),
        ::uNewFunctionVoid("InvalidateHitTestBounds", Node__InvalidateHitTestBounds, 0, false),
        ::uNewFunctionVoid("InvalidateLayout", Node__InvalidateLayout, 0, false, ::app::Fuse::InvalidateLayoutReason__typeof()),
        ::uNewFunctionVoid("InvalidateLayout", Node__InvalidateLayout_1, 0, true, Node__typeof()),
        ::uNewFunctionVoid("InvalidateLocalTransform", type->__fp_InvalidateLocalTransform, offsetof(Node__uType, __fp_InvalidateLocalTransform), false),
        ::uNewFunctionVoid("InvalidateRenderBounds", Node__InvalidateRenderBounds, 0, false),
        ::uNewFunctionVoid("InvalidateVisual", type->__fp_InvalidateVisual, offsetof(Node__uType, __fp_InvalidateVisual), false),
        ::uNewFunctionVoid("InvokeEventHandler", Node__InvokeEventHandler, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunction("IsMarginBoxDependent", type->__fp_IsMarginBoxDependent, offsetof(Node__uType, __fp_IsMarginBoxDependent), false, ::app::Fuse::LayoutDependent__typeof(), Node__typeof()),
        ::uNewFunction("IsRootStage", Node__IsRootStage, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node_RootStage__typeof()),
        ::uNewFunction("IsWorldMatrixValid", Node__IsWorldMatrixValid, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("LocalToParent", Node__LocalToParent, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("MarkRooted", Node__MarkRooted, 0, false),
        ::uNewFunctionVoid("MarkUnrooted", Node__MarkUnrooted, 0, false),
        ::uNewFunctionVoid("OnAdded", Node__OnAdded, 0, false, Node__typeof()),
        ::uNewFunctionVoid("OnApplyStyle", type->__fp_OnApplyStyle, offsetof(Node__uType, __fp_OnApplyStyle), false, ::uObject__typeof()),
        ::uNewFunction("OnArrangeMarginBox", type->__fp_OnArrangeMarginBox, offsetof(Node__uType, __fp_OnArrangeMarginBox), false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::SizeFlags__typeof()),
        ::uNewFunctionVoid("OnBeginRemove", Node__OnBeginRemove, 0, false, ::app::Fuse::BeginRemoveArgs__typeof()),
        ::uNewFunctionVoid("OnBehaviorAdded", Node__OnBehaviorAdded, 0, false, ::app::Fuse::Behavior__typeof()),
        ::uNewFunctionVoid("OnBehaviorRemoved", Node__OnBehaviorRemoved, 0, false, ::app::Fuse::Behavior__typeof()),
        ::uNewFunctionVoid("OnBringIntoView", Node__OnBringIntoView, 0, false, Node__typeof()),
        ::uNewFunctionVoid("OnDataContextChanged", Node__OnDataContextChanged, 0, false, ::app::Fuse::DataContextChangedArgs__typeof()),
        ::uNewFunctionVoid("OnHitTest", type->__fp_OnHitTest, offsetof(Node__uType, __fp_OnHitTest), false, ::app::Fuse::HitTestContext__typeof()),
        ::uNewFunctionVoid("OnInvalidateLayout", type->__fp_OnInvalidateLayout, offsetof(Node__uType, __fp_OnInvalidateLayout), false),
        ::uNewFunction("OnInvalidateRenderBounds", type->__fp_OnInvalidateRenderBounds, offsetof(Node__uType, __fp_OnInvalidateRenderBounds), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnIsEnabledChanged", type->__fp_OnIsEnabledChanged, offsetof(Node__uType, __fp_OnIsEnabledChanged), false),
        ::uNewFunctionVoid("OnIsEnabledChangedInternal", Node__OnIsEnabledChangedInternal, 0, true, Node__typeof()),
        ::uNewFunctionVoid("OnIsSelectedChanged", Node__OnIsSelectedChanged, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnIsVisibleChanged", Node__OnIsVisibleChanged, 0, false),
        ::uNewFunctionVoid("OnLocalVisibleChanged", Node__OnLocalVisibleChanged, 0, false),
        ::uNewFunctionVoid("OnMatrixChanged", Node__OnMatrixChanged, 0, false, ::app::Fuse::Transform__typeof()),
        ::uNewFunctionVoid("OnNameChanged", Node__OnNameChanged, 0, true, Node__typeof()),
        ::uNewFunctionVoid("OnRemoved", Node__OnRemoved, 0, false, Node__typeof()),
        ::uNewFunctionVoid("OnResetStyle", type->__fp_OnResetStyle, offsetof(Node__uType, __fp_OnResetStyle), false),
        ::uNewFunctionVoid("OnResourceChanged", Node__OnResourceChanged, 0, false, ::app::Uno::UX::Resource__typeof()),
        ::uNewFunctionVoid("OnRooted", type->__fp_OnRooted, offsetof(Node__uType, __fp_OnRooted), false),
        ::uNewFunctionVoid("OnSaveLayoutState", type->__fp_OnSaveLayoutState, offsetof(Node__uType, __fp_OnSaveLayoutState), false),
        ::uNewFunctionVoid("OnTransformAdded", Node__OnTransformAdded, 0, false, ::app::Fuse::Transform__typeof()),
        ::uNewFunctionVoid("OnTransformRemoved", Node__OnTransformRemoved, 0, false, ::app::Fuse::Transform__typeof()),
        ::uNewFunctionVoid("OnTransformsChanged", Node__OnTransformsChanged, 0, false),
        ::uNewFunctionVoid("OnUnrooted", type->__fp_OnUnrooted, offsetof(Node__uType, __fp_OnUnrooted), false),
        ::uNewFunctionVoid("OnWorldTransformValidated", Node__OnWorldTransformValidated, 0, false),
        ::uNewFunction("ParentToLocal", Node__ParentToLocal, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("PerformLayout", Node__PerformLayout, 0, false),
        ::uNewFunctionVoid("PerformLayout", Node__PerformLayout_1, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("PrepareLayoutChange", Node__PrepareLayoutChange, 0, false),
        ::uNewFunctionVoid("PrependExplicitTransforms", Node__PrependExplicitTransforms, 0, false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunctionVoid("PrependImplicitTransform", type->__fp_PrependImplicitTransform, offsetof(Node__uType, __fp_PrependImplicitTransform), false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunctionVoid("PrependInverseTransformOrigin", type->__fp_PrependInverseTransformOrigin, offsetof(Node__uType, __fp_PrependInverseTransformOrigin), false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunctionVoid("PrependLocalTransform", Node__PrependLocalTransform, 0, false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunctionVoid("PrependTransformOrigin", type->__fp_PrependTransformOrigin, offsetof(Node__uType, __fp_PrependTransformOrigin), false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunctionVoid("ProcessNeedsStyling", Node__ProcessNeedsStyling, 0, true),
        ::uNewFunctionVoid("RaiseEvent", Node__RaiseEvent, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::app::Fuse::Node_NodeBits__typeof()),
        ::uNewFunctionVoid("RearrangeMarginBox", Node__RearrangeMarginBox, 0, false),
        ::uNewFunctionVoid("remove_Added", Node__remove_Added, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_BeginRemove", Node__remove_BeginRemove, 0, false, ::app::Fuse::BeginRemoveHandler__typeof()),
        ::uNewFunctionVoid("remove_DataContextChanged", Node__remove_DataContextChanged, 0, false, ::app::Fuse::DataContextChangedHandler__typeof()),
        ::uNewFunctionVoid("remove_IsEnabledChanged", Node__remove_IsEnabledChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_IsVisibleChanged", Node__remove_IsVisibleChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_Removed", Node__remove_Removed, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_RequestBringIntoView", Node__remove_RequestBringIntoView, 0, false, ::app::Fuse::RequestBringIntoViewHandler__typeof()),
        ::uNewFunctionVoid("remove_Rooted", Node__remove_Rooted, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_TransformsChanged", Node__remove_TransformsChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_Unrooted", Node__remove_Unrooted, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_Update", Node__remove_Update, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("RemoveDrawCost", Node__RemoveDrawCost, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("RemoveEventHandler", Node__RemoveEventHandler, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::app::Fuse::Node_NodeBits__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("ResetStyle", Node__ResetStyle, 0, false),
        ::uNewFunctionVoid("ResetSubtreeStyle", Node__ResetSubtreeStyle, 0, false),
        ::uNewFunctionVoid("RootBehaviors", Node__RootBehaviors, 0, false),
        ::uNewFunctionVoid("SaveLayoutState", Node__SaveLayoutState, 0, false),
        ::uNewFunctionVoid("ScheduleForStyling", Node__ScheduleForStyling, 0, true, Node__typeof()),
        ::uNewFunctionVoid("set_AddedByStyle", Node__set_AddedByStyle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_DataContext", Node__set_DataContext, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_IgnoreStyle", Node__set_IgnoreStyle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsEnabled", Node__set_IsEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Name", Node__set_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_SnapToPixels", Node__set_SnapToPixels, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetBit", Node__SetBit, 0, false, ::app::Fuse::Node_NodeBits__typeof()),
        ::uNewFunctionVoid("SetPropertyState", Node__SetPropertyState, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::PropertyState__typeof()),
        ::uNewFunctionVoid("SetResource", Node__SetResource, 0, false, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunction("Snap", Node__Snap, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("SnapUp", Node__SnapUp, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("SoftDispose", type->__fp_SoftDispose, offsetof(Node__uType, __fp_SoftDispose), false),
        ::uNewFunctionVoid("StyleAdded", Node__StyleAdded, 0, false, ::app::Fuse::Style__typeof()),
        ::uNewFunctionVoid("StyleRemoved", Node__StyleRemoved, 0, false, ::app::Fuse::Style__typeof()),
        ::uNewFunction("TryGetResource", Node__TryGetResource, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Predicate__object__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("UnrootBehaviors", Node__UnrootBehaviors, 0, false),
        ::uNewFunctionVoid("UpdateIsEnabledCache", Node__UpdateIsEnabledCache, 0, false),
        ::uNewFunctionVoid("UpdateIsVisibleCache", Node__UpdateIsVisibleCache, 0, false),
        ::uNewFunctionVoid("UpdateLayout", Node__UpdateLayout, 0, false),
        ::uNewFunctionVoid("ValidateVisual", Node__ValidateVisual, 0, false),
        ::uNewFunctionVoid("VisitSubtree", Node__VisitSubtree, 0, false, ::app::Uno::Action__Fuse_Node__typeof()),
        ::uNewFunction("WindowToLocal", Node__WindowToLocal, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("WindowToWorldRay", type->__fp_WindowToWorldRay, offsetof(Node__uType, __fp_WindowToWorldRay), false, ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Node___ObjInit(Node* __this)
{
    __this->_isEnabledCache = true;
    __this->_isVisibleCached = true;
    __this->_worldTransformInverseCacheVersion = -1;
    __this->_worldTransformCacheVersion = -1;
    __this->_worldTransformParentCacheVersion = -1;
}

void Node___TypeInit(::uStatic* __this)
{
    Node___nameHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node__NameProperty = ::app::Fuse::StyleProperty__Fuse_Node__string__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Node__OnNameChanged));
    Node___isEnabledChangedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node__IsEnabledProperty = ::app::Fuse::StyleProperty__Fuse_Node__bool__New_2(NULL, true, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Node__OnIsEnabledChangedInternal), NULL, NULL);
    Node___isVisibleChangedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node__SnapToPixelsProperty = ::app::Fuse::StyleProperty__Fuse_Node__bool__New_1(NULL, true, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Node__InvalidateLayout_1));
    Node___resourcesHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___styleHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___addedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___removedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___rootedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Node___unrootedHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Node__add_Added(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___addedHandle, 6, (::uObject*)value);
}

void Node__add_BeginRemove(Node* __this, ::uDelegate* value)
{
    __this->BeginRemove = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->BeginRemove, (::uDelegate*)value), ::app::Fuse::BeginRemoveHandler__typeof());
}

void Node__add_DataContextChanged(Node* __this, ::uDelegate* value)
{
    __this->DataContextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->DataContextChanged, (::uDelegate*)value), ::app::Fuse::DataContextChangedHandler__typeof());
}

void Node__add_IsEnabledChanged(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___isEnabledChangedHandle, 4, (::uObject*)value);
}

void Node__add_IsVisibleChanged(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___isVisibleChangedHandle, 5, (::uObject*)value);
}

void Node__add_Removed(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___removedHandle, 7, (::uObject*)value);
}

void Node__add_RequestBringIntoView(Node* __this, ::uDelegate* value)
{
    __this->RequestBringIntoView = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->RequestBringIntoView, (::uDelegate*)value), ::app::Fuse::RequestBringIntoViewHandler__typeof());
}

void Node__add_Rooted(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___rootedHandle, 8, (::uObject*)value);
}

void Node__add_TransformsChanged(Node* __this, ::uDelegate* value)
{
    __this->TransformsChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TransformsChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Node__add_Unrooted(Node* __this, ::uDelegate* value)
{
    __this->AddEventHandler(Node___unrootedHandle, 9, (::uObject*)value);
}

void Node__add_Update(Node* __this, ::uDelegate* value)
{
    if (__this->_updateListeners == NULL)
    {
        __this->_updateListeners = ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*>(__this->_updateListeners)->Add(value);
    __this->CheckUpdateListening(false);
}

void Node__AddDrawCost(Node* __this, double cost)
{
    Node* p = __this;

    while (p != NULL)
    {
        ::uPtr< Node*>(p)->_drawCost = ::uPtr< Node*>(p)->_drawCost + cost;
        p = ::uPtr< Node*>(p)->Parent();
    }
}

void Node__AddEventHandler(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->AddToList(ph, handler);
    __this->SetBit(ne);
}

void Node__AddStyleBehavior(Node* __this, ::app::Fuse::Behavior* b)
{
    ::uPtr< ::app::Fuse::Behavior*>(b)->AddedByStyle = true;
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), b);
}

void Node__AddStyleStyle(Node* __this, ::app::Fuse::Style* style)
{
    ::uPtr< ::app::Fuse::Style*>(style)->AddedByStyle = true;
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(__this->Styles()), style);
}

void Node__AddStyleTransform(Node* __this, ::app::Fuse::Transform* t)
{
    ::uPtr< ::app::Fuse::Transform*>(t)->AddedByStyle = true;
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(__this->Transforms()), t);
}

void Node__ApplyStyle(Node* __this)
{
    if (!__this->IsRootStage(2))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Should not have styling applied if not rooted")));
    }

    if (!__this->HasBit(0))
    {
        __this->SetBit(0);

        if (!__this->IgnoreStyle())
        {
            __this->ApplyStyle_1((::uObject*)__this);
        }
    }
}

void Node__ApplyStyle_1(Node* __this, ::uObject* target)
{
    __this->OnApplyStyle(target);
}

::app::Uno::Float2 Node__ArrangeMarginBox(Node* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    if ((((__this->_hasMarginBox && (__this->_layoutDirty == 0)) && ::app::Uno::Float2__op_Equality(NULL, position, __this->_ambPosition)) && ::app::Uno::Float2__op_Equality(NULL, availableSize, __this->_ambSize)) && (availSet == __this->_ambAvailSet))
    {
        return __this->_ambMargin;
    }

    ::app::Uno::Float2 marginBox = __this->OnArrangeMarginBox(position, availableSize, availSet);
    __this->_layoutDirty = 0;
    __this->InvalidateDrawCount();
    __this->_ambMargin = marginBox;
    __this->_ambPosition = position;
    __this->_ambSize = availableSize;
    __this->_ambAvailSet = availSet;
    __this->_hasMarginBox = true;
    return marginBox;
}

void Node__BringIntoView(Node* __this)
{
    __this->OnBringIntoView(__this);
}

::app::Uno::Rect Node__CalcRenderBoundsInParentSpace(Node* __this)
{
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Rect childRect = __this->LocalRenderBounds();
    ::app::Fuse::FastMatrix* fastMatrix = __this->LocalTransformInternal();
    ::app::Uno::Rect childRectInParentSpace = ::app::Uno::Rect();

    if (::uPtr< ::app::Fuse::FastMatrix*>(fastMatrix)->_hasNonTranslation)
    {
        childRectInParentSpace = ::app::Uno::Rect__Transform(NULL, childRect, __this->LocalTransform());
    }
    else
    {
        childRectInParentSpace = ::app::Uno::Rect__Translate(NULL, childRect, (ind_127 = __this->LocalTransform().Item(3), ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y)));
    }

    return childRectInParentSpace;
}

::app::Fuse::FastMatrix* Node__CalcWorldTransform(Node* __this)
{
    ::app::Fuse::FastMatrix* m = __this->LocalTransformInternal();

    if (__this->Parent() != NULL)
    {
        m = ::uPtr< ::app::Fuse::FastMatrix*>(m)->Mul(::uPtr< Node*>(__this->Parent())->WorldTransformInternal());
    }

    return m;
}

void Node__CheckUpdateListening(Node* __this, bool forceOff)
{
    bool shouldListen = (__this->IsRooted() && (__this->_updateListeners != NULL)) && (::uPtr< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*>(__this->_updateListeners)->Count() > 0);

    if (forceOff)
    {
        shouldListen = false;
    }

    if (__this->_hasListenerAction == shouldListen)
    {
        return;
    }

    if (shouldListen)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Node__DoUpdate, __this), 0);
    }
    else
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Node__DoUpdate, __this), 0);
    }

    __this->_hasListenerAction = shouldListen;
}

void Node__ClearBit(Node* __this, int nb)
{
    __this->_nodebits = __this->_nodebits & ~(1 << nb);
}

void Node__DoUpdate(Node* __this)
{
    if (__this->_updateListeners == NULL)
    {
        return;
    }

    {
        ::uObject* lk = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*>(__this->_updateListeners)->DeferLock();

        try
        {
            {
                int c = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*>(__this->_updateListeners)->Count();

                for (int i = 0; i < c; ++i)
                {
                    ::uPtr< ::uDelegate*>(::uPtr< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*>(__this->_updateListeners)->Item(i))->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
                }
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(lk));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(lk));
        }
    }
}

void Node__Draw(Node* __this, ::app::Fuse::DrawContext* dc)
{
}

void Node__DrawLocalRect(Node* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect, float lineWidth, ::app::Uno::Float4 color)
{
    ::app::Uno::Float4x4 localToClipTransform = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform(__this);
    ::uPtr< ::app::Fuse::DrawHelpers*>(::app::Fuse::DrawHelpers__get_Singelton(NULL))->DrawLocalRect(dc, rect, localToClipTransform, lineWidth, color);
}

void Node__DrawLocalSelectionRect(Node* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect)
{
    ::app::Uno::Float4x4 localToClipTransform = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform(__this);
    double phase = ::app::Fuse::Time__get_FrameTime(NULL) * 4.0;
    float pulse = (float)(0.667 + (0.333 * ::app::Uno::Math__Sin(NULL, phase * 3.1415926535897931)));
    ::app::Uno::Float4 color = ::app::Uno::Float4__New_2(NULL, 0.25f, 0.5f, 0.75f, pulse);
    __this->DrawLocalRect(dc, rect, 4.0f, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    __this->DrawLocalRect(dc, rect, 2.0f, color);
}

void Node__DrawSelection(Node* __this, ::app::Fuse::DrawContext* dc)
{
    __this->DrawLocalSelectionRect(dc, __this->LocalRenderBounds());
}

Node* Node__FindAlgorithm(Node* __this, ::uString* name, Node* origin)
{
    if (origin == __this)
    {
        return NULL;
    }

    if (::app::Uno::String__op_Equality(NULL, __this->Name(), name))
    {
        return __this;
    }

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        Node* n = ::uPtr< Node*>(__this->GetSubNode(i))->FindAlgorithm(name, __this);

        if (n != NULL)
        {
            return n;
        }
    }

    if (__this->Parent() != NULL)
    {
        return ::uPtr< Node*>(__this->Parent())->FindAlgorithm(name, origin);
    }

    return NULL;
}

Node* Node__FindNodeByName(Node* __this, ::uString* name)
{
    return __this->FindAlgorithm(name, NULL);
}

::uObject* Node__FindObjectByName(Node* __this, ::uString* name, ::uDelegate* acceptor)
{
    if (::app::Uno::String__op_Equality(NULL, __this->Name(), name) && ::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>((::uObject*)__this))
    {
        return (::uObject*)__this;
    }

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(__this->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));
        ::uObject* hs = ::uAs< ::uObject*>(b, ::app::Fuse::Scripting::INameScope__typeof());

        if (hs == NULL)
        {
            continue;
        }

        ::uObject* res = ::app::Fuse::Scripting::INameScope::FindObjectByName(::uPtr< ::uObject*>(hs), name, acceptor);

        if (res == NULL)
        {
            continue;
        }

        if (::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>(res))
        {
            return res;
        }
    }

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        Node* n = __this->GetSubNode(i);
        ::uObject* res = ::uPtr< Node*>(n)->FindObjectByName(name, acceptor);

        if (res != NULL)
        {
            return res;
        }
    }

    return NULL;
}

::app::Uno::Float2 Node__get_AbsoluteViewportOrigin(Node* __this)
{
    if (__this->Parent() != NULL)
    {
        return ::uPtr< Node*>(__this->Parent())->AbsoluteViewportOrigin();
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

float Node__get_AbsoluteZoom(Node* __this)
{
    return __this->PointDensity();
}

bool Node__get_AddedByStyle(Node* __this)
{
    return __this->_AddedByStyle;
}

::uObject* Node__get_Behaviors(Node* __this)
{
    if (__this->_behaviors == NULL)
    {
        __this->_behaviors = ::app::Uno::Collections::ObservableList__Fuse_Behavior__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Behavior__typeof(), (const void*)Node__OnBehaviorAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Behavior__typeof(), (const void*)Node__OnBehaviorRemoved, __this));
    }

    return (::uObject*)__this->_behaviors;
}

::uObject* Node__get_DataContext(Node* __this)
{
    if (__this->_dataContext != NULL)
    {
        return __this->_dataContext;
    }

    if (__this->Parent() != NULL)
    {
        return ::uPtr< Node*>(__this->Parent())->DataContext();
    }

    return NULL;
}

double Node__get_DrawCost(Node* __this)
{
    return __this->_drawCost;
}

::app::Fuse::SumDrawCount Node__get_DrawCount(Node* __this)
{
    if (__this->_isDrawCount)
    {
        return __this->_drawCount;
    }

    ::app::Fuse::NodeDrawCount ldc = __this->LocalDrawCount();
    ::app::Fuse::SumDrawCount sdc = ::app::Fuse::SumDrawCount();
    sdc.LocalDraw = ldc.Draw;
    sdc.Draw = ldc.Draw;
    sdc.Pixels = ldc.Pixels;

    for (int i = __this->SubNodeCount() - 1; i >= 0; --i)
    {
        ::app::Fuse::SumDrawCount ndc = ::uPtr< Node*>(__this->GetSubNode(i))->DrawCount();
        sdc.Draw = sdc.Draw + ndc.Draw;
        sdc.Pixels = sdc.Pixels + ndc.Pixels;
    }

    __this->_isDrawCount = true;
    __this->_drawCount = sdc;
    return __this->_drawCount;
}

bool Node__get_HasExplicitTransforms(Node* __this)
{
    return (__this->_transforms != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Count() > 0);
}

bool Node__get_HasResources(Node* __this)
{
    return __this->HasBit(1);
}

bool Node__get_HasSavedLayoutChange(Node* __this)
{
    return __this->_ppPendLayoutChange >= ::app::Fuse::UpdateManager__get_FrameIndex(NULL);
}

::app::Fuse::NodeBounds* Node__get_HitTestBounds(Node* __this)
{
    if (__this->_isHitTestBoundsCacheValid)
    {
        return __this->_hitTestBoundsCache;
    }

    ::app::Fuse::NodeBounds* nb = ::app::Fuse::NodeBounds__get_Empty(NULL);

    if (__this->IsEnabled() && __this->IsVisible())
    {
        nb = ::uPtr< ::app::Fuse::NodeBounds*>(nb)->Merge(__this->HitTestLocalBounds(), NULL);
        nb = ::uPtr< ::app::Fuse::NodeBounds*>(nb)->Merge(__this->HitTestChildrenBounds(), NULL);
    }

    __this->_hitTestBoundsCache = nb;
    __this->_isHitTestBoundsCacheValid = true;
    return nb;
}

::app::Fuse::NodeBounds* Node__get_HitTestChildrenBounds(Node* __this)
{
    ::app::Fuse::NodeBounds* nb = ::app::Fuse::NodeBounds__get_Empty(NULL);

    for (int i = 0; i < __this->SubNodeCount(); ++i)
    {
        Node* n = __this->GetSubNode(i);
        nb = ::uPtr< ::app::Fuse::NodeBounds*>(nb)->MergeChild(n, ::uPtr< Node*>(n)->HitTestBounds());
    }

    return nb;
}

::app::Fuse::NodeBounds* Node__get_HitTestLocalBounds(Node* __this)
{
    return ::app::Fuse::NodeBounds__get_Empty(NULL);
}

bool Node__get_IgnoreStyle(Node* __this)
{
    return __this->_ignoreStyle;
}

::app::Fuse::FastMatrix* Node__get_InternLocalTransformInternal(Node* __this)
{
    return __this->LocalTransformInternal();
}

bool Node__get_IsEnabled(Node* __this)
{
    return __this->_isEnabledCache;
}

bool Node__get_IsFlat(Node* __this)
{
    if (__this->_isFlatCached)
    {
        return __this->_isFlat;
    }

    bool flat = true;

    for (int i = 0; i < __this->SubNodeCount(); ++i)
    {
        if (!::uPtr< Node*>(__this->GetSubNode(i))->IsFlat() || !::uPtr< Node*>(__this->GetSubNode(i))->IsLocalFlat())
        {
            flat = false;
            break;
        }
    }

    __this->_isFlat = flat;
    __this->_isFlatCached = true;
    return flat;
}

bool Node__get_IsLocalFlat(Node* __this)
{
    if (__this->_isLocalFlatCached)
    {
        return __this->_isLocalFlat;
    }

    bool v = true;

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Transform::GetEnumerator(::uPtr< ::uObject*>(__this->Transforms())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Transform* t = ::app::Uno::Collections::IEnumerator__Fuse_Transform::Current(::uPtr< ::uObject*>(enum_124));
        v = v && ::uPtr< ::app::Fuse::Transform*>(t)->IsFlat();
    }

    __this->_isLocalFlat = v;
    __this->_isLocalFlatCached = true;
    return v;
}

bool Node__get_IsLocalRooted(Node* __this)
{
    return __this->_rootStage >= 6;
}

bool Node__get_IsLocalTransformTranslationOnly(Node* __this)
{
    return !__this->HasExplicitTransforms();
}

bool Node__get_IsLocalVisible(Node* __this)
{
    return true;
}

bool Node__get_IsRooted(Node* __this)
{
    return __this->IsLocalRooted();
}

bool Node__get_IsVisible(Node* __this)
{
    return __this->_isVisibleCached;
}

bool Node__get_IsVisualInvalid(Node* __this)
{
    return __this->_visualDirty;
}

::app::Uno::Geometry::Box Node__get_LocalBounds(Node* __this)
{
    return ::app::Uno::Geometry::Box__New_1(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), ::app::Uno::Float3__New_1(NULL, 0.0f));
}

::app::Fuse::NodeDrawCount Node__get_LocalDrawCount(Node* __this)
{
    return ::uDefault< ::app::Fuse::NodeDrawCount>();
}

::app::Uno::Rect Node__get_LocalRenderBounds(Node* __this)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, -FLT_INF), ::app::Uno::Float2__New_1(NULL, FLT_INF));
}

::app::Uno::Float4x4 Node__get_LocalTransform(Node* __this)
{
    return ::uPtr< ::app::Fuse::FastMatrix*>(__this->LocalTransformInternal())->Matrix();
}

::app::Fuse::FastMatrix* Node__get_LocalTransformInternal(Node* __this)
{
    if (__this->_localTransform == NULL)
    {
        __this->_localTransform = ::app::Fuse::FastMatrix__Identity(NULL);
        __this->PrependLocalTransform(__this->_localTransform);
    }

    return __this->_localTransform;
}

::app::Uno::Float4x4 Node__get_LocalTransformInverse(Node* __this)
{
    if (__this->_localTransformInverse == NULL)
    {
        __this->_localTransformInverse = ::app::Fuse::FastMatrix__FromFloat4x4(NULL, __this->LocalTransform());
        ::uPtr< ::app::Fuse::FastMatrix*>(__this->_localTransformInverse)->Invert();
    }

    return ::uPtr< ::app::Fuse::FastMatrix*>(__this->_localTransformInverse)->Matrix();
}

::uString* Node__get_Name(Node* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__string*>(Node__NameProperty)->Get(__this);
}

Node* Node__get_Parent(Node* __this)
{
    return __this->_parent;
}

float Node__get_PointDensity(Node* __this)
{
    ::uObject* w = __this->Viewport();

    if (w == NULL)
    {
        return 1.0f;
    }

    return ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(w));
}

::app::Fuse::Properties* Node__get_Properties(Node* __this)
{
    if (__this->_properties == NULL)
    {
        __this->_properties = ::app::Fuse::Properties__New_1(NULL);
    }

    return __this->_properties;
}

::uObject* Node__get_Resources(Node* __this)
{
    if (!__this->HasResources())
    {
        __this->SetBit(1);
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Node___resourcesHandle, (::uObject*)::app::Uno::Collections::ObservableList__Uno_UX_Resource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_Resource__typeof(), (const void*)Node__OnResourceChanged, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_Resource__typeof(), (const void*)Node__OnResourceChanged, __this)));
    }

    return (::uObject*)::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Get(Node___resourcesHandle);
}

bool Node__get_SnapToPixels(Node* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Node__SnapToPixelsProperty)->Get(__this);
}

::uObject* Node__get_Styles(Node* __this)
{
    ::uObject* listobj;

    if (!::uPtr< ::app::Fuse::Properties*>(__this->Properties())->TryGet(Node___styleHandle, &listobj))
    {
        listobj = (::uObject*)::app::Uno::Collections::ObservableList__Fuse_Style__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Style__typeof(), (const void*)Node__StyleAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Style__typeof(), (const void*)Node__StyleRemoved, __this));
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Set(Node___styleHandle, listobj);
    }

    return (::uObject*)listobj;
}

int Node__get_SubNodeCount(Node* __this)
{
    return 0;
}

::uObject* Node__get_Transforms(Node* __this)
{
    if (__this->_transforms == NULL)
    {
        __this->_transforms = ::app::Uno::Collections::ObservableList__Fuse_Transform__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)Node__OnTransformAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)Node__OnTransformRemoved, __this));
    }

    return (::uObject*)__this->_transforms;
}

int Node__get_ValidFrameCount(Node* __this)
{
    return ::app::Fuse::UpdateManager__get_FrameIndex(NULL) - __this->_lastInvalidate;
}

::uObject* Node__get_Viewport(Node* __this)
{
    Node* p = __this;

    while (p != NULL)
    {
        ::uObject* vp = ::uAs< ::uObject*>(p, ::app::Fuse::IViewport__typeof());

        if (vp != NULL)
        {
            return vp;
        }

        p = ::uPtr< Node*>(p)->Parent();
    }

    return NULL;
}

::app::Uno::Float3 Node__get_WorldPosition(Node* __this)
{
    ::app::Uno::Float4x4 ind_128 = ::uPtr< ::app::Fuse::FastMatrix*>(__this->WorldTransformInternal())->Matrix();
    return ::app::Uno::Float3__New_2(NULL, ind_128.M41, ind_128.M42, ind_128.M43);
}

::app::Uno::Float4x4 Node__get_WorldTransform(Node* __this)
{
    return ::uPtr< ::app::Fuse::FastMatrix*>(__this->WorldTransformInternal())->Matrix();
}

::app::Fuse::FastMatrix* Node__get_WorldTransformInternal(Node* __this)
{
    if (!__this->IsWorldMatrixValid())
    {
        __this->_worldTransform = __this->CalcWorldTransform();
        __this->_worldTransformCacheVersion = ++__this->_worldTransformVersion;

        if (__this->Parent() != NULL)
        {
            __this->_worldTransformParentCacheVersion = ::uPtr< Node*>(__this->Parent())->_worldTransformVersion;
        }

        __this->OnWorldTransformValidated();
    }

    return __this->_worldTransform;
}

::app::Uno::Float4x4 Node__get_WorldTransformInverse(Node* __this)
{
    if ((__this->_worldTransformInverseCacheVersion != __this->_worldTransformVersion) || !__this->IsWorldMatrixValid())
    {
        __this->_worldTransformInverse = ::app::Fuse::FastMatrix__FromFloat4x4(NULL, __this->WorldTransform());
        ::uPtr< ::app::Fuse::FastMatrix*>(__this->_worldTransformInverse)->Invert();
        __this->_worldTransformInverseCacheVersion = __this->_worldTransformVersion;
    }

    return ::uPtr< ::app::Fuse::FastMatrix*>(__this->_worldTransformInverse)->Matrix();
}

Node* Node__GetHitWindowPoint(Node* __this, ::app::Uno::Float2 windowPoint)
{
    ::app::Fuse::Node_HitTestRecord* htr = ::app::Fuse::Node_HitTestRecord__New_1(NULL);
    ::app::Fuse::HitTestContext* htc = ::app::Fuse::HitTestContext__New_1(NULL, windowPoint, ::uNewDelegateNonVirt(::app::Fuse::HitTestCallback__typeof(), (const void*)::app::Fuse::Node_HitTestRecord__HitTestCallback, htr));

    if (__this->Parent() != NULL)
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->PushLocalPoint(::uPtr< Node*>(__this->Parent())->WindowToLocal(windowPoint));
    }

    __this->HitTest(htc);
    return ::uPtr< ::app::Fuse::Node_HitTestRecord*>(htr)->Node;
}

::app::Uno::Float2 Node__GetMarginSize(Node* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

int Node__GetPropertyState(Node* __this, int id)
{
    int bits = (id & 15) * 2;
    ::uUInt mask = 3u;

    if (id < 16)
    {
        return (int)((__this->_b0 >> bits) & mask);
    }
    else if (id < 32)
    {
        return (int)((__this->_b1 >> bits) & mask);
    }
    else if (id < 48)
    {
        return (int)((__this->_b2 >> bits) & mask);
    }
    else if (id < 64)
    {
        return (int)((__this->_b3 >> bits) & mask);
    }
    else if (id < 80)
    {
        return (int)((__this->_b4 >> bits) & mask);
    }
    else if (id < 96)
    {
        return (int)((__this->_b5 >> bits) & mask);
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Too many style properties - not enough backing store bits in Node")));
    }
}

Node* Node__GetSubNode(Node* __this, int index)
{
    U_THROW(::app::Uno::Exception__New_1(NULL));
}

::app::Uno::Float4x4 Node__GetTransformTo(Node* __this, Node* other)
{
    ::app::Uno::Collections::HashSet__Fuse_Node* parents = ::app::Uno::Collections::HashSet__Fuse_Node__New_1(NULL);
    Node* q = __this;

    while (q != NULL)
    {
        ::uPtr< ::app::Uno::Collections::HashSet__Fuse_Node*>(parents)->Add(q);
        q = ::uPtr< Node*>(q)->Parent();
    }

    Node* c = other;

    while (c != NULL)
    {
        if (::uPtr< ::app::Uno::Collections::HashSet__Fuse_Node*>(parents)->Contains(c))
        {
            break;
        }

        c = ::uPtr< Node*>(c)->Parent();
    }

    if (c == NULL)
    {
        return ::app::Uno::Float4x4__get_Identity(NULL);
    }

    ::app::Uno::Float4x4 thisTo = __this->GetTransformToAncestor(c);
    ::app::Uno::Float4x4 otherTo = ::uPtr< Node*>(other)->GetTransformToAncestor(c);
    return ::app::Uno::Matrix__Mul_8(NULL, thisTo, ::app::Uno::Matrix__Invert_2(NULL, otherTo));
}

::app::Uno::Float4x4 Node__GetTransformToAncestor(Node* __this, Node* ancestor)
{
    ::app::Fuse::FastMatrix* m = ::app::Fuse::FastMatrix__Identity(NULL);
    Node* n = __this;

    while ((n != NULL) && (n != ancestor))
    {
        m = ::uPtr< ::app::Fuse::FastMatrix*>(m)->Mul(::uPtr< Node*>(n)->LocalTransformInternal());
        n = ::uPtr< Node*>(n)->Parent();
    }

    return ::uPtr< ::app::Fuse::FastMatrix*>(m)->Matrix();
}

bool Node__HasBit(Node* __this, int nb)
{
    return (__this->_nodebits & (1 << nb)) != 0;
}

void Node__HitTest(Node* __this, ::app::Fuse::HitTestContext* htc)
{
    if (!__this->IsVisible())
    {
        return;
    }

    ::app::Fuse::NodeBounds* bounds = __this->HitTestBounds();
    ::app::Uno::Float2 localPoint = ::app::Uno::Float2();
    bool hit = bool();

    if (__this->IsFlat() && __this->IsLocalFlat())
    {
        localPoint = __this->ParentToLocal(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint());
        hit = ::uPtr< ::app::Fuse::NodeBounds*>(bounds)->ContainsPoint(localPoint);
    }
    else
    {
        ::app::Uno::Geometry::Ray world = ::app::Fuse::IViewport::PointToWorldRay(::uPtr< ::uObject*>(__this->Viewport()), ::uPtr< ::app::Fuse::HitTestContext*>(htc)->WindowPoint());
        ::app::Uno::Geometry::Ray local = ::app::Fuse::FrustumViewport__WorldToLocalRay(NULL, __this->Viewport(), __this, world);
        float t = -local.Position.Z / local.Direction.Z;
        ::app::Uno::Float3 plane = ::app::Uno::Float3__op_Addition_2(NULL, local.Position, ::app::Uno::Float3__op_Multiply_1(NULL, local.Direction, t));
        localPoint = ::app::Uno::Float2__New_2(NULL, plane.X, plane.Y);
        hit = ::uPtr< ::app::Fuse::NodeBounds*>(bounds)->IntersectsRay(local);
    }

    if (true && !hit)
    {
        return;
    }

    ::app::Uno::Float2 old = ::uPtr< ::app::Fuse::HitTestContext*>(htc)->PushLocalPoint(localPoint);
    __this->OnHitTest(htc);
    htc->PopLocalPoint(old);
}

::app::Uno::Float2 Node__InternSnap(Node* __this, ::app::Uno::Float2 p)
{
    return __this->Snap(p);
}

::app::Uno::Float2 Node__InternSnapUp(Node* __this, ::app::Uno::Float2 p)
{
    return __this->SnapUp(p);
}

void Node__InvalidateDrawCount(Node* __this)
{
    __this->_isDrawCount = false;
}

void Node__InvalidateFlat(Node* __this)
{
    if (__this->_isLocalFlatCached || __this->_isFlatCached)
    {
        __this->_isLocalFlatCached = false;
        __this->_isFlatCached = false;

        if (__this->Parent() != NULL)
        {
            ::uPtr< Node*>(__this->Parent())->InvalidateFlat();
        }
    }
}

void Node__InvalidateHitTestBounds(Node* __this)
{
    Node* p = __this;

    while ((p != NULL) && p->_isHitTestBoundsCacheValid)
    {
        ::uPtr< Node*>(p)->_isHitTestBoundsCacheValid = false;
        p = ::uPtr< Node*>(p)->Parent();
    }
}

void Node__InvalidateLayout(Node* __this, int reason)
{
    if (Node___performingLayout)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Layout was invalidated while performing layout")));
    }

    if (reason <= __this->_layoutDirty)
    {
        return;
    }

    __this->_layoutDirty = reason;
    __this->OnInvalidateLayout();
    Node* child = __this;
    Node* parent = __this->Parent();
    Node* maybeChild = NULL;

    while (parent != NULL)
    {
        if (reason <= ::uPtr< Node*>(parent)->_layoutDirty)
        {
            break;
        }

        int useReason = reason;

        if (::uPtr< Node*>(child)->_hasMarginBox && (reason > 1))
        {
            int mb = ::uPtr< Node*>(parent)->IsMarginBoxDependent(child);

            if (mb == 0)
            {
                useReason = reason = 1;
            }
            else if (mb == 1)
            {
                useReason = 1;

                if (maybeChild == NULL)
                {
                    maybeChild = parent;
                }
            }
            else
            {
                while ((maybeChild != NULL) && (maybeChild != parent))
                {
                    ::uPtr< Node*>(maybeChild)->_layoutDirty = 2;
                    maybeChild = ::uPtr< Node*>(maybeChild)->Parent();
                }

                maybeChild = NULL;
                reason = useReason = 2;
            }
        }

        ::uPtr< Node*>(parent)->OnInvalidateLayout();

        if (useReason > parent->_layoutDirty)
        {
            parent->_layoutDirty = useReason;
        }

        child = parent;
        parent = ::uPtr< Node*>(parent)->Parent();
    }
}

void Node__InvalidateLayout_1(::uStatic* __this, Node* elm)
{
    ::uPtr< Node*>(elm)->InvalidateLayout(2);
}

void Node__InvalidateLocalTransform(Node* __this)
{
    __this->_localTransform = NULL;
    __this->_localTransformInverse = NULL;
    __this->_worldTransformVersion++;
    __this->InvalidateFlat();
    __this->InvalidateHitTestBounds();
}

void Node__InvalidateRenderBounds(Node* __this)
{
    Node* p = __this;

    while (p != NULL)
    {
        if (::uPtr< Node*>(p)->OnInvalidateRenderBounds())
        {
            break;
        }

        p = ::uPtr< Node*>(p)->Parent();
    }
}

void Node__InvalidateVisual(Node* __this)
{
    __this->_lastInvalidate = ::app::Fuse::UpdateManager__get_FrameIndex(NULL);
    __this->_visualDirty = true;

    if (__this->Parent() != NULL)
    {
        ::uPtr< Node*>(__this->Parent())->InvalidateVisual();
    }
}

void Node__InvokeEventHandler(Node* __this, ::uObject* obj, ::uObject* args)
{
    ::uPtr< ::uDelegate*>(::uCast< ::uDelegate*>(obj, ::app::Uno::EventHandler__typeof()))->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::uCast< ::app::Uno::EventArgs*>(args, ::app::Uno::EventArgs__typeof()));
}

int Node__IsMarginBoxDependent(Node* __this, Node* child)
{
    return 1;
}

bool Node__IsRootStage(Node* __this, int stage)
{
    return __this->_rootStage >= stage;
}

bool Node__IsWorldMatrixValid(Node* __this)
{
    if ((__this->_worldTransformCacheVersion != __this->_worldTransformVersion) || (__this->_worldTransform == NULL))
    {
        return false;
    }

    if (__this->Parent() != NULL)
    {
        return (__this->_worldTransformParentCacheVersion == ::uPtr< Node*>(__this->Parent())->_worldTransformVersion) && ::uPtr< Node*>(__this->Parent())->IsWorldMatrixValid();
    }

    return true;
}

::app::Uno::Float2 Node__LocalToParent(Node* __this, ::app::Uno::Float2 localPoint)
{
    localPoint = ::app::Uno::Vector__TransformCoordinate(NULL, localPoint, __this->LocalTransform());
    return localPoint;
}

void Node__MarkRooted(Node* __this)
{
    if (__this->_rootStage > 0)
    {
        return;
    }

    __this->_rootStage = 1;

    if (::app::Uno::String__op_Inequality(NULL, __this->Name(), NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__SetName(NULL, (::uObject*)__this, __this->Name());
    }

    __this->UpdateIsEnabledCache();
    __this->UpdateIsVisibleCache();
    __this->_rootStage = 2;
    __this->ApplyStyle();
    __this->_rootStage = 3;
    __this->RootBehaviors();
    __this->_rootStage = 4;

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        ::uPtr< Node*>(__this->GetSubNode(i))->MarkRooted();
    }

    __this->_rootStage = 5;
    __this->RaiseEvent(Node___rootedHandle, 8);
    __this->OnRooted();
    __this->_rootStage = 6;
    __this->_hasMarginBox = false;
    __this->CheckUpdateListening(false);

    if (__this->Parent() == NULL)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Node__PerformLayout, __this), 2);
        __this->_isAddedUpdate = true;
    }
}

void Node__MarkUnrooted(Node* __this)
{
    if (__this->_rootStage == 0)
    {
        return;
    }

    __this->_rootStage = 0;
    __this->RaiseEvent(Node___unrootedHandle, 9);
    __this->OnUnrooted();

    if (::app::Uno::String__op_Inequality(NULL, __this->Name(), NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__ClearName(NULL, (::uObject*)__this);
    }

    __this->ResetStyle();
    __this->UnrootBehaviors();

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        ::uPtr< Node*>(__this->GetSubNode(i))->MarkUnrooted();
    }

    __this->CheckUpdateListening(true);

    if (__this->_isAddedUpdate)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Node__PerformLayout, __this), 2);
        __this->_isAddedUpdate = false;
    }

    __this->SoftDispose();
}

void Node__OnAdded(Node* __this, Node* parent)
{
    if (__this->_parent != NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::Object::ToString(__this), ::uGetConstString(" already has a parent")), (parent != __this->_parent) ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString(" ("), ::app::Uno::Object::ToString(::uPtr< Node*>(parent))), ::uGetConstString(")")) : ::uGetConstString(""))));
    }

    __this->RaiseEvent(Node___addedHandle, 6);
    __this->_parent = parent;

    if (::uPtr< Node*>(parent)->IsRootStage(4))
    {
        __this->MarkRooted();
    }

    __this->InvalidateLocalTransform();
    __this->InvalidateLayout(2);
}

void Node__OnApplyStyle(Node* __this, ::uObject* target)
{
    if (__this->HasBit(3) && (target != __this))
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Style::Count(::uPtr< ::uObject*>(__this->Styles())); i++)
        {
            if (!::uPtr< ::app::Fuse::Style*>(::app::Uno::Collections::IList__Fuse_Style::Item(::uPtr< ::uObject*>(__this->Styles()), i))->Apply(target))
            {
                return;
            }
        }
    }

    if (__this->Parent() != NULL)
    {
        ::uPtr< Node*>(__this->Parent())->ApplyStyle_1(target);
    }
}

::app::Uno::Float2 Node__OnArrangeMarginBox(Node* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSizxe, int availSet)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

void Node__OnBeginRemove(Node* __this, ::app::Fuse::BeginRemoveArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->BeginRemove, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->BeginRemove)->InvokeVoid< ::uObject*, ::app::Fuse::BeginRemoveArgs*>((::uObject*)__this, args);
    }
}

void Node__OnBehaviorAdded(Node* __this, ::app::Fuse::Behavior* b)
{
    if (__this->IsRootStage(3))
    {
        ::uPtr< ::app::Fuse::Behavior*>(b)->Rooted(__this);
    }
}

void Node__OnBehaviorRemoved(Node* __this, ::app::Fuse::Behavior* b)
{
    if (::uPtr< ::app::Fuse::Behavior*>(b)->_isRooted)
    {
        ::uPtr< ::app::Fuse::Behavior*>(b)->Unrooted(__this);
        b->AddedByStyle = false;
    }
}

void Node__OnBringIntoView(Node* __this, Node* elm)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->RequestBringIntoView, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->RequestBringIntoView)->InvokeVoid< ::uObject*, ::app::Fuse::RequestBringIntoViewArgs*>((::uObject*)__this, ::app::Fuse::RequestBringIntoViewArgs__New_2(NULL, elm));
    }

    if (__this->Parent() != NULL)
    {
        ::uPtr< Node*>(__this->Parent())->OnBringIntoView(elm);
    }
}

void Node__OnDataContextChanged(Node* __this, ::app::Fuse::DataContextChangedArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->DataContextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->DataContextChanged)->InvokeVoid< ::uObject*, ::app::Fuse::DataContextChangedArgs*>((::uObject*)__this, args);
    }

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        Node* c = __this->GetSubNode(i);

        if (::uPtr< Node*>(c)->_dataContext == NULL)
        {
            ::uPtr< Node*>(c)->OnDataContextChanged(args);
        }
    }
}

void Node__OnHitTest(Node* __this, ::app::Fuse::HitTestContext* htc)
{
}

void Node__OnInvalidateLayout(Node* __this)
{
    __this->InvalidateHitTestBounds();
}

bool Node__OnInvalidateRenderBounds(Node* __this)
{
    return false;
}

void Node__OnIsEnabledChanged(Node* __this)
{
    __this->RaiseEvent(Node___isEnabledChangedHandle, 4);
    __this->InvalidateHitTestBounds();
}

void Node__OnIsEnabledChangedInternal(::uStatic* __this, Node* n)
{
    ::uPtr< Node*>(n)->UpdateIsEnabledCache();
}

void Node__OnIsSelectedChanged(Node* __this, bool isSelected)
{
}

void Node__OnIsVisibleChanged(Node* __this)
{
    __this->RaiseEvent(Node___isVisibleChangedHandle, 5);
    __this->InvalidateHitTestBounds();
}

void Node__OnLocalVisibleChanged(Node* __this)
{
    __this->UpdateIsVisibleCache();
}

void Node__OnMatrixChanged(Node* __this, ::app::Fuse::Transform* t)
{
    __this->OnTransformsChanged();
    __this->InvalidateLocalTransform();
}

void Node__OnNameChanged(::uStatic* __this, Node* n)
{
    if (::uPtr< Node*>(n)->IsRootStage(1))
    {
        if (::app::Uno::String__op_Equality(NULL, ::uPtr< Node*>(n)->Name(), NULL))
        {
            ::app::Fuse::Scripting::NameRegistry__ClearName(NULL, (::uObject*)n);
        }
        else
        {
            ::app::Fuse::Scripting::NameRegistry__SetName(NULL, (::uObject*)n, ::uPtr< Node*>(n)->Name());
        }
    }
}

void Node__OnRemoved(Node* __this, Node* parent)
{
    if (__this->_parent == parent)
    {
        __this->RaiseEvent(Node___removedHandle, 7);
        __this->MarkUnrooted();
        __this->_parent = NULL;
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }
}

void Node__OnResetStyle(Node* __this)
{
    if (__this->_behaviors != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Count(); i++)
        {
            if (::uPtr< ::app::Fuse::Behavior*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Item(i))->AddedByStyle)
            {
                ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->RemoveAt(i--);
            }
        }
    }

    if (__this->_transforms != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Count(); i++)
        {
            if (::uPtr< ::app::Fuse::Transform*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Item(i))->AddedByStyle)
            {
                ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->RemoveAt(i--);
            }
        }
    }

    ::app::Fuse::StyleProperty__ResetAllStyle(NULL, __this);
}

void Node__OnResourceChanged(Node* __this, ::app::Uno::UX::Resource* res)
{
    ::app::Fuse::Resources::ResourceRegistry__NotifyResourceChanged(NULL, ::uPtr< ::app::Uno::UX::Resource*>(res)->Key());
}

void Node__OnRooted(Node* __this)
{
}

void Node__OnSaveLayoutState(Node* __this)
{
}

void Node__OnTransformAdded(Node* __this, ::app::Fuse::Transform* t)
{
    ::uPtr< ::app::Fuse::Transform*>(t)->Added(__this);
    t->add_MatrixChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)Node__OnMatrixChanged, __this));
    __this->OnMatrixChanged(t);
}

void Node__OnTransformRemoved(Node* __this, ::app::Fuse::Transform* t)
{
    ::uPtr< ::app::Fuse::Transform*>(t)->Removed(__this);
    t->remove_MatrixChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Transform__typeof(), (const void*)Node__OnMatrixChanged, __this));
    __this->OnMatrixChanged(t);
    t->AddedByStyle = false;
}

void Node__OnTransformsChanged(Node* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TransformsChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TransformsChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Node__OnUnrooted(Node* __this)
{
}

void Node__OnWorldTransformValidated(Node* __this)
{
}

::app::Uno::Float2 Node__ParentToLocal(Node* __this, ::app::Uno::Float2 parentPoint)
{
    return ::app::Uno::Vector__TransformCoordinate(NULL, parentPoint, __this->LocalTransformInverse());
}

void Node__PerformLayout(Node* __this)
{
    __this->PerformLayout_1(::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(__this->Viewport())));
}

void Node__PerformLayout_1(Node* __this, ::app::Uno::Float2 clientSize)
{
    Node__ProcessNeedsStyling(NULL);

    if ((__this->_cachedRenderTargetSize.X != clientSize.X) || (__this->_cachedRenderTargetSize.Y != clientSize.Y))
    {
        __this->_cachedRenderTargetSize = clientSize;
        __this->InvalidateLayout(2);
    }

    if (__this->_layoutDirty != 0)
    {
        Node___performingLayout = true;

        try
        {
            if (__this->_layoutDirty == 2)
            {
                __this->SaveLayoutState();
                ::app::Uno::Float2 availableSize = clientSize;
                ::app::Uno::Float2 offset = ::app::Uno::Float2__New_1(NULL, 0.0f);
                __this->ArrangeMarginBox(offset, availableSize, 3);
            }
            else
            {
                __this->UpdateLayout();
            }
        }
        catch (const ::uThrowable& __t)
        {
            Node___performingLayout = false;
            throw __t;
        }
        // finally
        {
            Node___performingLayout = false;
        }
    }
}

void Node__PrepareLayoutChange(Node* __this)
{
    Node* p = __this;

    while (p->Parent() != NULL)
    {
        p = ::uPtr< Node*>(p)->Parent();
    }

    p->SaveLayoutState();
}

void Node__PrependExplicitTransforms(Node* __this, ::app::Fuse::FastMatrix* m)
{
    if (__this->HasExplicitTransforms())
    {
        __this->PrependTransformOrigin(m);

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Count(); i++)
        {
            ::uPtr< ::app::Fuse::Transform*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Transform*>(__this->_transforms)->Item(i))->PrependTo(m);
        }

        __this->PrependInverseTransformOrigin(m);
    }
}

void Node__PrependImplicitTransform(Node* __this, ::app::Fuse::FastMatrix* m)
{
}

void Node__PrependInverseTransformOrigin(Node* __this, ::app::Fuse::FastMatrix* m)
{
}

void Node__PrependLocalTransform(Node* __this, ::app::Fuse::FastMatrix* m)
{
    __this->PrependImplicitTransform(m);
    __this->PrependExplicitTransforms(m);
}

void Node__PrependTransformOrigin(Node* __this, ::app::Fuse::FastMatrix* m)
{
}

void Node__ProcessNeedsStyling(::uStatic* __this)
{
    int iterations = 0;

    while (Node___needsStyling != NULL)
    {
        ::app::Uno::Collections::HashSet__Fuse_Node* list = Node___needsStyling;
        Node___needsStyling = NULL;

        if (list != NULL)
        {
            for (::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node enum_125 = ::uPtr< ::app::Uno::Collections::HashSet__Fuse_Node*>(list)->GetEnumerator(); enum_125.MoveNext(); )
            {
                Node* n = enum_125.Current();

                if (::uPtr< Node*>(n)->IsRootStage(2))
                {
                    ::uPtr< Node*>(n)->ApplyStyle();
                }
            }
        }

        iterations++;

        if (iterations > 100)
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Styling contains cycles or is too complex")));
        }
    }
}

void Node__RaiseEvent(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne)
{
    if (__this->HasBit(ne))
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->ForeachInList(ph, ::uNewDelegateNonVirt(::app::Uno::Action__object__object__typeof(), (const void*)Node__InvokeEventHandler, __this), (::uObject*)::app::Uno::EventArgs__Empty);
    }
}

void Node__RearrangeMarginBox(Node* __this)
{
    __this->ArrangeMarginBox(__this->_ambPosition, __this->_ambSize, __this->_ambAvailSet);
}

void Node__remove_Added(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___addedHandle, 6, (::uObject*)value);
}

void Node__remove_BeginRemove(Node* __this, ::uDelegate* value)
{
    __this->BeginRemove = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->BeginRemove, (::uDelegate*)value), ::app::Fuse::BeginRemoveHandler__typeof());
}

void Node__remove_DataContextChanged(Node* __this, ::uDelegate* value)
{
    __this->DataContextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->DataContextChanged, (::uDelegate*)value), ::app::Fuse::DataContextChangedHandler__typeof());
}

void Node__remove_IsEnabledChanged(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___isEnabledChangedHandle, 4, (::uObject*)value);
}

void Node__remove_IsVisibleChanged(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___isVisibleChangedHandle, 5, (::uObject*)value);
}

void Node__remove_Removed(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___removedHandle, 7, (::uObject*)value);
}

void Node__remove_RequestBringIntoView(Node* __this, ::uDelegate* value)
{
    __this->RequestBringIntoView = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->RequestBringIntoView, (::uDelegate*)value), ::app::Fuse::RequestBringIntoViewHandler__typeof());
}

void Node__remove_Rooted(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___rootedHandle, 8, (::uObject*)value);
}

void Node__remove_TransformsChanged(Node* __this, ::uDelegate* value)
{
    __this->TransformsChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TransformsChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Node__remove_Unrooted(Node* __this, ::uDelegate* value)
{
    __this->RemoveEventHandler(Node___unrootedHandle, 9, (::uObject*)value);
}

void Node__remove_Update(Node* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler*>(__this->_updateListeners)->Remove(value);
    __this->CheckUpdateListening(false);
}

void Node__RemoveDrawCost(Node* __this, double cost)
{
    Node* p = __this;

    while (p != NULL)
    {
        ::uPtr< Node*>(p)->_drawCost = ::uPtr< Node*>(p)->_drawCost - cost;
        p = ::uPtr< Node*>(p)->Parent();
    }
}

void Node__RemoveEventHandler(Node* __this, ::app::Fuse::PropertyHandle* ph, int ne, ::uObject* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->RemoveFromList(ph, handler);
    ::uObject* foo;

    if (!::uPtr< ::app::Fuse::Properties*>(__this->Properties())->TryGet(ph, &foo))
    {
        __this->ClearBit(ne);
    }
}

void Node__ResetStyle(Node* __this)
{
    if (__this->HasBit(0))
    {
        __this->OnResetStyle();
        __this->ClearBit(0);
        Node__ScheduleForStyling(NULL, __this);
    }

    ::uObject* listobj;

    if (::uPtr< ::app::Fuse::Properties*>(__this->Properties())->TryGet(Node___styleHandle, &listobj))
    {
        ::uObject* s = (::uObject*)listobj;

        for (int i = ::app::Uno::Collections::ICollection__Fuse_Style::Count(::uPtr< ::uObject*>(s)) - 1; i >= 0; --i)
        {
            if (::uPtr< ::app::Fuse::Style*>(::app::Uno::Collections::IList__Fuse_Style::Item(::uPtr< ::uObject*>(s), i))->AddedByStyle)
            {
                ::app::Uno::Collections::IList__Fuse_Style::RemoveAt(::uPtr< ::uObject*>(s), i);
            }
        }
    }
}

void Node__ResetSubtreeStyle(Node* __this)
{
    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        Node* n = __this->GetSubNode(i);
        ::uPtr< Node*>(n)->ResetStyle();
        n->ResetSubtreeStyle();
    }
}

void Node__RootBehaviors(Node* __this)
{
    if (__this->_behaviors != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Count(); i++)
        {
            if (!::uPtr< ::app::Fuse::Behavior*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Item(i))->_isRooted)
            {
                ::uPtr< ::app::Fuse::Behavior*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Item(i))->Rooted(__this);
            }
        }
    }
}

void Node__SaveLayoutState(Node* __this)
{
    if (::app::Fuse::UpdateManager__get_FrameIndex(NULL) <= __this->_ppPendLayoutChange)
    {
        return;
    }

    __this->OnSaveLayoutState();
    __this->_ppPendLayoutChange = ::app::Fuse::UpdateManager__get_FrameIndex(NULL);

    for (int i = 0; i < __this->SubNodeCount(); ++i)
    {
        ::uPtr< Node*>(__this->GetSubNode(i))->SaveLayoutState();
    }
}

void Node__ScheduleForStyling(::uStatic* __this, Node* n)
{
    if (Node___needsStyling == NULL)
    {
        Node___needsStyling = ::app::Uno::Collections::HashSet__Fuse_Node__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::HashSet__Fuse_Node*>(Node___needsStyling)->Add(n);
}

void Node__set_AddedByStyle(Node* __this, bool value)
{
    __this->_AddedByStyle = value;
}

void Node__set_DataContext(Node* __this, ::uObject* value)
{
    if (__this->_dataContext != value)
    {
        ::app::Fuse::DataContextChangedArgs* args = ::app::Fuse::DataContextChangedArgs__New_2(NULL, __this, __this->_dataContext, value);
        __this->_dataContext = value;
        __this->OnDataContextChanged(args);
    }
}

void Node__set_IgnoreStyle(Node* __this, bool value)
{
    if (__this->_ignoreStyle != value)
    {
        __this->_ignoreStyle = value;
        __this->ResetStyle();
    }
}

void Node__set_IsEnabled(Node* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Node__IsEnabledProperty)->Set(__this, value);
}

void Node__set_Name(Node* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__string*>(Node__NameProperty)->Set(__this, value);
}

void Node__set_SnapToPixels(Node* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Node__SnapToPixelsProperty)->Set(__this, value);
}

void Node__SetBit(Node* __this, int nb)
{
    __this->_nodebits = __this->_nodebits | (1 << nb);
}

void Node__SetPropertyState(Node* __this, int id, int state)
{
    int bits = (id & 15) * 2;
    ::uUInt mask = ~(3u << bits);

    if (id < 16)
    {
        __this->_b0 = (__this->_b0 & mask) | ((::uUInt)state << bits);
    }
    else if (id < 32)
    {
        __this->_b1 = (__this->_b1 & mask) | ((::uUInt)state << bits);
    }
    else if (id < 48)
    {
        __this->_b2 = (__this->_b2 & mask) | ((::uUInt)state << bits);
    }
    else if (id < 64)
    {
        __this->_b3 = (__this->_b3 & mask) | ((::uUInt)state << bits);
    }
    else if (id < 80)
    {
        __this->_b4 = (__this->_b4 & mask) | ((::uUInt)state << bits);
    }
    else if (id < 96)
    {
        __this->_b5 = (__this->_b5 & mask) | ((::uUInt)state << bits);
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Too many style properties - not enough backing store bits in Node")));
    }
}

void Node__SetResource(Node* __this, ::uString* key, ::uObject* value)
{
    ::uObject* resources = __this->Resources();

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(resources)); ++i)
    {
        ::app::Uno::UX::Resource* r = ::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(resources), i);

        if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::UX::Resource*>(r)->Key(), key))
        {
            ::app::Uno::Collections::IList__Uno_UX_Resource::RemoveAt(::uPtr< ::uObject*>(resources), i);
            break;
        }
    }

    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(resources), ::app::Uno::UX::Resource__New_1(NULL, key, value));
}

::app::Uno::Float2 Node__Snap(Node* __this, ::app::Uno::Float2 p)
{
    ::app::Uno::Float2 s = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Round_4(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, p, __this->AbsoluteZoom())), __this->AbsoluteZoom());
    return s;
}

::app::Uno::Float2 Node__SnapUp(Node* __this, ::app::Uno::Float2 p)
{
    ::app::Uno::Float2 s = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, p, __this->AbsoluteZoom())), __this->AbsoluteZoom());
    return s;
}

void Node__SoftDispose(Node* __this)
{
}

void Node__StyleAdded(Node* __this, ::app::Fuse::Style* s)
{
    ::uPtr< ::app::Fuse::Style*>(s)->add_TemplatesChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Node__ResetSubtreeStyle, __this));
    __this->SetBit(3);
    __this->ResetSubtreeStyle();
}

void Node__StyleRemoved(Node* __this, ::app::Fuse::Style* s)
{
    ::uPtr< ::app::Fuse::Style*>(s)->remove_TemplatesChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Node__ResetSubtreeStyle, __this));

    if (::app::Uno::Collections::ICollection__Fuse_Style::Count(::uPtr< ::uObject*>(__this->Styles())) == 0)
    {
        ::uPtr< ::app::Fuse::Properties*>(__this->Properties())->Clear(Node___styleHandle);
        __this->ClearBit(3);
    }

    __this->ResetSubtreeStyle();
}

bool Node__TryGetResource(Node* __this, ::uString* key, ::uDelegate* acceptor, ::uObject** resource)
{
    if (__this->HasResources())
    {
        ::uObject* resources = __this->Resources();

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(resources)); i++)
        {
            ::app::Uno::UX::Resource* r = ::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(resources), i);

            if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::UX::Resource*>(r)->Key(), key) && (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)acceptor, NULL) || ::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>(::uPtr< ::app::Uno::UX::Resource*>(r)->Value())))
            {
                *resource = ::uPtr< ::app::Uno::UX::Resource*>(r)->Value();
                return true;
            }
        }
    }

    if (__this->HasBit(3))
    {
        for (int si = 0; si < ::app::Uno::Collections::ICollection__Fuse_Style::Count(::uPtr< ::uObject*>(__this->Styles())); si++)
        {
            if (::uPtr< ::app::Fuse::Style*>(::app::Uno::Collections::IList__Fuse_Style::Item(::uPtr< ::uObject*>(__this->Styles()), si))->TryGetResource(key, acceptor, resource))
            {
                return true;
            }
        }
    }

    if (__this->Parent() != NULL)
    {
        return ::uPtr< Node*>(__this->Parent())->TryGetResource(key, acceptor, resource);
    }

    *resource = NULL;
    return false;
}

void Node__UnrootBehaviors(Node* __this)
{
    if (__this->_behaviors != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Count(); i++)
        {
            if (::uPtr< ::app::Fuse::Behavior*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Item(i))->_isRooted)
            {
                ::uPtr< ::app::Fuse::Behavior*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Behavior*>(__this->_behaviors)->Item(i))->Unrooted(__this);
            }
        }
    }
}

void Node__UpdateIsEnabledCache(Node* __this)
{
    bool newValue = ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Node__IsEnabledProperty)->Get(__this) && ((__this->Parent() == NULL) || ::uPtr< Node*>(__this->Parent())->_isEnabledCache);

    if (__this->_isEnabledCache != newValue)
    {
        __this->_isEnabledCache = newValue;
        __this->OnIsEnabledChanged();

        for (int i = 0; i < __this->SubNodeCount(); i++)
        {
            ::uPtr< Node*>(__this->GetSubNode(i))->UpdateIsEnabledCache();
        }
    }
}

void Node__UpdateIsVisibleCache(Node* __this)
{
    bool newValue = __this->IsLocalVisible() && ((__this->Parent() == NULL) || ::uPtr< Node*>(__this->Parent())->IsVisible());

    if (__this->_isVisibleCached != newValue)
    {
        __this->_isVisibleCached = newValue;
        __this->OnIsVisibleChanged();

        for (int i = 0; i < __this->SubNodeCount(); i++)
        {
            ::uPtr< Node*>(__this->GetSubNode(i))->UpdateIsVisibleCache();
        }
    }
}

void Node__UpdateLayout(Node* __this)
{
    switch (__this->_layoutDirty)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            for (int i = 0; i < __this->SubNodeCount(); ++i)
            {
                ::uPtr< Node*>(__this->GetSubNode(i))->UpdateLayout();
            }

            break;
        }
        case 2:
        {
            __this->SaveLayoutState();
            __this->RearrangeMarginBox();
            break;
        }
    }

    __this->_layoutDirty = 0;
}

void Node__ValidateVisual(Node* __this)
{
    __this->_visualDirty = false;
}

void Node__VisitSubtree(Node* __this, ::uDelegate* action)
{
    ::uPtr< ::uDelegate*>(action)->InvokeVoid< Node*>(__this);

    for (int i = 0; i < __this->SubNodeCount(); i++)
    {
        ::uPtr< Node*>(__this->GetSubNode(i))->VisitSubtree(action);
    }
}

::app::Uno::Float2 Node__WindowToLocal(Node* __this, ::app::Uno::Float2 windowCoord)
{
    ::app::Uno::Float2 parentCoord = (__this->Parent() == NULL) ? windowCoord : ::uPtr< Node*>(__this->Parent())->WindowToLocal(windowCoord);
    return ::app::Uno::Vector__TransformCoordinate(NULL, parentCoord, __this->LocalTransformInverse());
}

::app::Uno::Geometry::Ray Node__WindowToWorldRay(Node* __this, ::app::Uno::Float2 windowCoord)
{
    ::app::Uno::Geometry::Ray collection_126 = ::app::Uno::Geometry::Ray();

    if (__this->Parent() != NULL)
    {
        return ::uPtr< Node*>(__this->Parent())->WindowToWorldRay(windowCoord);
    }

    collection_126 = ::uDefault< ::app::Uno::Geometry::Ray>();
    collection_126.Position = ::app::Uno::Float3__New_4(NULL, windowCoord, 0.0f);
    collection_126.Direction = ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, -1.0f);
    return collection_126;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Node_HitTestRecord__uType* Node_HitTestRecord__typeof()
{
    static ::uStaticStrong<Node_HitTestRecord__uType*> type;
    if (type != NULL) return type;

    type = (Node_HitTestRecord__uType*)::uAllocClassType(sizeof(Node_HitTestRecord__uType), "Fuse.Node.HitTestRecord", false, 0, 1, 0);

    type->SetStrongRefs(
        "Node", offsetof(Node_HitTestRecord, Node));

    return type;
}

void Node_HitTestRecord___ObjInit(Node_HitTestRecord* __this)
{
}

void Node_HitTestRecord__HitTestCallback(Node_HitTestRecord* __this, ::app::Fuse::HitTestResult* result)
{
    if (__this->Node == NULL)
    {
        __this->Node = ::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject();
    }
}

Node_HitTestRecord* Node_HitTestRecord__New_1(::uStatic* __this)
{
    Node_HitTestRecord* inst = (Node_HitTestRecord*)::uAllocObject(sizeof(Node_HitTestRecord), Node_HitTestRecord__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Node_NodeBits__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Node.NodeBits", ::app::Uno::Int__typeof(), 10);

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

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Node_RootStage__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Node.RootStage", ::app::Uno::Int__typeof(), 7);

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

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< NodeBounds*> NodeBounds___empty;
::uStaticStrong< NodeBounds*> NodeBounds___infinite;

NodeBounds__uType* NodeBounds__typeof()
{
    static ::uStaticStrong<NodeBounds__uType*> type;
    if (type != NULL) return type;

    type = (NodeBounds__uType*)::uAllocClassType(sizeof(NodeBounds__uType), "Fuse.NodeBounds", false, 0, 0, 0);

    type->SetFields(5,
        ::uNewField("_box", NULL, offsetof(NodeBounds, _box), ::app::Uno::Geometry::Box__typeof()),
        ::uNewField("_empty", &NodeBounds___empty, 0, NodeBounds__typeof()),
        ::uNewField("_infinite", &NodeBounds___infinite, 0, NodeBounds__typeof()),
        ::uNewField("_isEmpty", NULL, offsetof(NodeBounds, _isEmpty), ::app::Uno::Bool__typeof()),
        ::uNewField("_isInfinite", NULL, offsetof(NodeBounds, _isInfinite), ::app::Uno::Bool__typeof()));

    type->SetFunctions(19,
        ::uNewFunction("AddPoint", NodeBounds__AddPoint, 0, false, NodeBounds__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("AddPoint", NodeBounds__AddPoint_1, 0, false, NodeBounds__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("AddRect", NodeBounds__AddRect, 0, false, NodeBounds__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("Box", NodeBounds__Box, 0, true, NodeBounds__typeof(), ::app::Uno::Geometry::Box__typeof()),
        ::uNewFunction("ContainsPoint", NodeBounds__ContainsPoint, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("Format", NodeBounds__Format, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_AxisMax", NodeBounds__get_AxisMax, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_AxisMin", NodeBounds__get_AxisMin, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_Empty", NodeBounds__get_Empty, 0, true, NodeBounds__typeof()),
        ::uNewFunction("get_Infinite", NodeBounds__get_Infinite, 0, true, NodeBounds__typeof()),
        ::uNewFunction("get_IsEmpty", NodeBounds__get_IsEmpty, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsFlat", NodeBounds__get_IsFlat, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsInfinite", NodeBounds__get_IsInfinite, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("IntersectsRay", NodeBounds__IntersectsRay, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Geometry::Ray__typeof()),
        ::uNewFunction("Merge", NodeBounds__Merge, 0, false, NodeBounds__typeof(), NodeBounds__typeof(), ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunction("MergeChild", NodeBounds__MergeChild, 0, false, NodeBounds__typeof(), ::app::Fuse::Node__typeof(), NodeBounds__typeof()),
        ::uNewFunction("Point", NodeBounds__Point, 0, true, NodeBounds__typeof(), ::app::Uno::Float3__typeof()),
        ::uNewFunction("Rect", NodeBounds__Rect, 0, true, NodeBounds__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("Rect", NodeBounds__Rect_1, 0, true, NodeBounds__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void NodeBounds___ObjInit(NodeBounds* __this)
{
    __this->_isEmpty = true;
}

void NodeBounds___TypeInit(::uStatic* __this)
{
    NodeBounds* collection_123;
    NodeBounds___empty = NodeBounds__New_1(NULL);
    NodeBounds___infinite = (collection_123 = NodeBounds__New_1(NULL), ::uPtr< NodeBounds*>(collection_123)->_isInfinite = true, ::uPtr< NodeBounds*>(collection_123)->_isEmpty = false, collection_123);
}

NodeBounds* NodeBounds__AddPoint(NodeBounds* __this, ::app::Uno::Float2 pt)
{
    return __this->Merge(NodeBounds__Point(NULL, ::app::Uno::Float3__New_4(NULL, pt, 0.0f)), NULL);
}

NodeBounds* NodeBounds__AddPoint_1(NodeBounds* __this, ::app::Uno::Float3 pt)
{
    return __this->Merge(NodeBounds__Point(NULL, pt), NULL);
}

NodeBounds* NodeBounds__AddRect(NodeBounds* __this, ::app::Uno::Float2 mn, ::app::Uno::Float2 mx)
{
    return __this->Merge(NodeBounds__Rect_1(NULL, ::app::Uno::Float3__New_4(NULL, mn, 0.0f), ::app::Uno::Float3__New_4(NULL, mx, 0.0f)), NULL);
}

NodeBounds* NodeBounds__Box(::uStatic* __this, ::app::Uno::Geometry::Box a)
{
    NodeBounds* nb = NodeBounds__New_1(NULL);
    ::uPtr< NodeBounds*>(nb)->_box = a;
    nb->_isEmpty = false;
    return nb;
}

bool NodeBounds__ContainsPoint(NodeBounds* __this, ::app::Uno::Float2 pt)
{
    if (__this->IsEmpty())
    {
        return false;
    }

    if (__this->IsInfinite())
    {
        return true;
    }

    return (((((__this->_box.Minimum.X <= pt.X) && (__this->_box.Minimum.Y <= pt.Y)) && (__this->_box.Maximum.X >= pt.X)) && (__this->_box.Maximum.Y >= pt.Y)) && (__this->_box.Minimum.Z <= 0.0f)) && (__this->_box.Maximum.Z >= 0.0f);
}

::uString* NodeBounds__Format(NodeBounds* __this)
{
    if (__this->IsEmpty())
    {
        return ::uGetConstString("empty");
    }

    if (__this->IsInfinite())
    {
        return ::uGetConstString("infinite");
    }

    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString(""), ::uBox(::app::Uno::Float3__typeof(), __this->_box.Minimum)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float3__typeof(), __this->_box.Maximum));
}

::app::Uno::Float3 NodeBounds__get_AxisMax(NodeBounds* __this)
{
    return __this->_box.Maximum;
}

::app::Uno::Float3 NodeBounds__get_AxisMin(NodeBounds* __this)
{
    return __this->_box.Minimum;
}

NodeBounds* NodeBounds__get_Empty(::uStatic* __this)
{
    return NodeBounds___empty;
}

NodeBounds* NodeBounds__get_Infinite(::uStatic* __this)
{
    return NodeBounds___infinite;
}

bool NodeBounds__get_IsEmpty(NodeBounds* __this)
{
    return __this->_isEmpty;
}

bool NodeBounds__get_IsFlat(NodeBounds* __this)
{
    return __this->_isEmpty || ((__this->_box.Minimum.Z == 0.0f) && (__this->_box.Minimum.Z == 0.0f));
}

bool NodeBounds__get_IsInfinite(NodeBounds* __this)
{
    return __this->_isInfinite;
}

bool NodeBounds__IntersectsRay(NodeBounds* __this, ::app::Uno::Geometry::Ray ray)
{
    if (__this->IsEmpty())
    {
        return false;
    }

    if (__this->IsInfinite())
    {
        return true;
    }

    float distance = float();
    return ::app::Uno::Geometry::Collision__RayIntersectsBox(NULL, ray, __this->_box, &distance);
}

NodeBounds* NodeBounds__Merge(NodeBounds* __this, NodeBounds* nb, ::app::Fuse::FastMatrix* trans)
{
    if (::uPtr< NodeBounds*>(nb)->IsEmpty())
    {
        return __this;
    }

    if (::uPtr< NodeBounds*>(nb)->IsInfinite() || __this->IsInfinite())
    {
        return NodeBounds___infinite;
    }

    ::app::Uno::Geometry::Box add = (trans != NULL) ? ::app::Uno::Geometry::Box__Transform(NULL, ::uPtr< NodeBounds*>(nb)->_box, ::uPtr< ::app::Fuse::FastMatrix*>(trans)->Matrix()) : ::uPtr< NodeBounds*>(nb)->_box;

    if (!__this->IsEmpty())
    {
        add.Minimum = ::app::Uno::Math__Min_5(NULL, __this->_box.Minimum, add.Minimum);
        add.Maximum = ::app::Uno::Math__Max_5(NULL, __this->_box.Maximum, add.Maximum);
    }

    return NodeBounds__Box(NULL, add);
}

NodeBounds* NodeBounds__MergeChild(NodeBounds* __this, ::app::Fuse::Node* child, NodeBounds* nb)
{
    return __this->Merge(nb, ::uPtr< ::app::Fuse::Node*>(child)->InternLocalTransformInternal());
}

NodeBounds* NodeBounds__New_1(::uStatic* __this)
{
    NodeBounds* inst = (NodeBounds*)::uAllocObject(sizeof(NodeBounds), NodeBounds__typeof());
    inst->_ObjInit();
    return inst;
}

NodeBounds* NodeBounds__Point(::uStatic* __this, ::app::Uno::Float3 pt)
{
    NodeBounds* nb = NodeBounds__New_1(NULL);
    ::uPtr< NodeBounds*>(nb)->_box.Minimum = pt;
    nb->_box.Maximum = pt;
    nb->_isEmpty = false;
    return nb;
}

NodeBounds* NodeBounds__Rect(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return NodeBounds__Rect_1(NULL, ::app::Uno::Float3__New_4(NULL, a, 0.0f), ::app::Uno::Float3__New_4(NULL, b, 0.0f));
}

NodeBounds* NodeBounds__Rect_1(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b)
{
    NodeBounds* nb = NodeBounds__New_1(NULL);
    ::uPtr< NodeBounds*>(nb)->_box.Minimum = ::app::Uno::Math__Min_5(NULL, a, b);
    nb->_box.Maximum = ::app::Uno::Math__Max_5(NULL, a, b);
    nb->_isEmpty = false;
    return nb;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeDrawCount__uType* NodeDrawCount__typeof()
{
    static ::uStaticStrong<NodeDrawCount__uType*> type;
    if (type != NULL) return type;

    type = (NodeDrawCount__uType*)::uAllocStructType(sizeof(NodeDrawCount__uType), "Fuse.NodeDrawCount", sizeof(NodeDrawCount), 0, 0, 0);

    type->SetFields(2,
        ::uNewField("Draw", NULL, offsetof(NodeDrawCount, Draw), ::app::Uno::Int__typeof()),
        ::uNewField("Pixels", NULL, offsetof(NodeDrawCount, Pixels), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEventArgs__uType* NodeEventArgs__typeof()
{
    static ::uStaticStrong<NodeEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEventArgs__uType*)::uAllocClassType(sizeof(NodeEventArgs__uType), "Fuse.NodeEventArgs", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());
    type->__interface_0.__fp_Serialize = (void(*)(void*, ::uObject*))NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(NodeEventArgs__uType, __interface_0));

    type->SetStrongRefs(
        "_Node", offsetof(NodeEventArgs, _Node));

    type->SetFunctions(6,
        ::uNewFunctionVoid("Fuse.Scripting.IScriptEvent.Serialize", NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize, 0, false, ::app::Fuse::Scripting::IEventSerializer__typeof()),
        ::uNewFunction("get_IsHandled", NodeEventArgs__get_IsHandled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Node", NodeEventArgs__get_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", NodeEventArgs__New_2, 0, true, NodeEventArgs__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_IsHandled", NodeEventArgs__set_IsHandled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Node", NodeEventArgs__set_Node, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void NodeEventArgs___ObjInit_1(NodeEventArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Node(node);
}

void NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize(NodeEventArgs* __this, ::uObject* s)
{
}

bool NodeEventArgs__get_IsHandled(NodeEventArgs* __this)
{
    return __this->_IsHandled;
}

::app::Fuse::Node* NodeEventArgs__get_Node(NodeEventArgs* __this)
{
    return __this->_Node;
}

NodeEventArgs* NodeEventArgs__New_2(::uStatic* __this, ::app::Fuse::Node* node)
{
    NodeEventArgs* inst = (NodeEventArgs*)::uAllocObject(sizeof(NodeEventArgs), NodeEventArgs__typeof());
    inst->_ObjInit_1(node);
    return inst;
}

void NodeEventArgs__set_IsHandled(NodeEventArgs* __this, bool value)
{
    __this->_IsHandled = value;
}

void NodeEventArgs__set_Node(NodeEventArgs* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* NodeEventHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.NodeEventHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::NodeEventArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NodeEventMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.NodeEventMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Normal", 0LL,
        "Enabled", 1LL,
        "Force", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OrthographicFrustum__uType* OrthographicFrustum__typeof()
{
    static ::uStaticStrong<OrthographicFrustum__uType*> type;
    if (type != NULL) return type;

    type = (OrthographicFrustum__uType*)::uAllocClassType(sizeof(OrthographicFrustum__uType), "Fuse.OrthographicFrustum", false, 1, 0, 0);

    type->__interface_0.__fp_GetProjectionTransform = (::app::Uno::Float4x4(*)(void*, ::uObject*))OrthographicFrustum__GetProjectionTransform;
    type->__interface_0.__fp_GetProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*, ::uObject*))OrthographicFrustum__GetProjectionTransformInverse;
    type->__interface_0.__fp_GetViewTransform = (::app::Uno::Float4x4(*)(void*, ::uObject*))OrthographicFrustum__GetViewTransform;
    type->__interface_0.__fp_GetViewTransformInverse = (::app::Uno::Float4x4(*)(void*, ::uObject*))OrthographicFrustum__GetViewTransformInverse;
    type->__interface_0.__fp_GetDepthRange = (::app::Uno::Float2(*)(void*, ::uObject*))OrthographicFrustum__GetDepthRange;
    type->__interface_0.__fp_GetWorldPosition = (::app::Uno::Float3(*)(void*, ::uObject*))OrthographicFrustum__GetWorldPosition;

    type->SetInterfaces(
        ::app::Fuse::IFrustum__typeof(), offsetof(OrthographicFrustum__uType, __interface_0));

    type->SetFields(6,
        ::uNewField("_hasLocalFromWorld", NULL, offsetof(OrthographicFrustum, _hasLocalFromWorld), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasOrigin", NULL, offsetof(OrthographicFrustum, _hasOrigin), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasSize", NULL, offsetof(OrthographicFrustum, _hasSize), ::app::Uno::Bool__typeof()),
        ::uNewField("_localFromWorld", NULL, offsetof(OrthographicFrustum, _localFromWorld), ::app::Uno::Float4x4__typeof()),
        ::uNewField("_origin", NULL, offsetof(OrthographicFrustum, _origin), ::app::Uno::Float2__typeof()),
        ::uNewField("_size", NULL, offsetof(OrthographicFrustum, _size), ::app::Uno::Float2__typeof()));

    type->SetFunctions(17,
        ::uNewFunction("get_LocalFromWorld", OrthographicFrustum__get_LocalFromWorld, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Origin", OrthographicFrustum__get_Origin, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Size", OrthographicFrustum__get_Size, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("GetDepthRange", OrthographicFrustum__GetDepthRange, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetProjectionTransform", OrthographicFrustum__GetProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetProjectionTransformInverse", OrthographicFrustum__GetProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetViewTransform", OrthographicFrustum__GetViewTransform, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetViewTransformInverse", OrthographicFrustum__GetViewTransformInverse, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetWorldPosition", OrthographicFrustum__GetWorldPosition, 0, false, ::app::Uno::Float3__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("MatrixProjection", OrthographicFrustum__MatrixProjection, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("MatrixProjectionInverse", OrthographicFrustum__MatrixProjectionInverse, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("MatrixView", OrthographicFrustum__MatrixView, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("MatrixViewInverse", OrthographicFrustum__MatrixViewInverse, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", OrthographicFrustum__New_1, 0, true, OrthographicFrustum__typeof()),
        ::uNewFunctionVoid("set_LocalFromWorld", OrthographicFrustum__set_LocalFromWorld, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunctionVoid("set_Origin", OrthographicFrustum__set_Origin, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Size", OrthographicFrustum__set_Size, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void OrthographicFrustum___ObjInit(OrthographicFrustum* __this)
{
    __this->_localFromWorld = ::app::Uno::Float4x4__get_Identity(NULL);
}

::app::Uno::Float4x4 OrthographicFrustum__get_LocalFromWorld(OrthographicFrustum* __this)
{
    return __this->_localFromWorld;
}

::app::Uno::Float2 OrthographicFrustum__get_Origin(OrthographicFrustum* __this)
{
    return __this->_origin;
}

::app::Uno::Float2 OrthographicFrustum__get_Size(OrthographicFrustum* __this)
{
    return __this->_size;
}

::app::Uno::Float2 OrthographicFrustum__GetDepthRange(OrthographicFrustum* __this, ::uObject* viewport)
{
    return ::app::Uno::Float2__New_2(NULL, 1.0f, 1000.0f);
}

::app::Uno::Float4x4 OrthographicFrustum__GetProjectionTransform(OrthographicFrustum* __this, ::uObject* viewport)
{
    return __this->MatrixProjection(__this->_hasSize ? __this->Size() : ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)));
}

::app::Uno::Float4x4 OrthographicFrustum__GetProjectionTransformInverse(OrthographicFrustum* __this, ::uObject* viewport)
{
    return __this->MatrixProjectionInverse(__this->_hasSize ? __this->Size() : ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)));
}

::app::Uno::Float4x4 OrthographicFrustum__GetViewTransform(OrthographicFrustum* __this, ::uObject* viewport)
{
    ::app::Uno::Float4x4 ts = __this->MatrixView(__this->_hasOrigin ? __this->Origin() : ::app::Uno::Float2__New_1(NULL, 0.0f), __this->_hasSize ? __this->Size() : ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)));

    if (__this->_hasLocalFromWorld)
    {
        ts = ::app::Uno::Matrix__Mul_8(NULL, __this->LocalFromWorld(), ts);
    }

    return ts;
}

::app::Uno::Float4x4 OrthographicFrustum__GetViewTransformInverse(OrthographicFrustum* __this, ::uObject* viewport)
{
    ::app::Uno::Float4x4 ts = __this->MatrixViewInverse(__this->_hasOrigin ? __this->Origin() : ::app::Uno::Float2__New_1(NULL, 0.0f), __this->_hasSize ? __this->Size() : ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)));

    if (__this->_hasLocalFromWorld)
    {
        ts = ::app::Uno::Matrix__Mul_8(NULL, ts, ::app::Uno::Matrix__Invert_2(NULL, __this->LocalFromWorld()));
    }

    return ts;
}

::app::Uno::Float3 OrthographicFrustum__GetWorldPosition(OrthographicFrustum* __this, ::uObject* viewport)
{
    return ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Division_1(NULL, __this->_hasSize ? __this->Size() : ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)), 2.0f), 2.0f);
}

::app::Uno::Float4x4 OrthographicFrustum__MatrixProjection(OrthographicFrustum* __this, ::app::Uno::Float2 viewSize)
{
    return ::app::Fuse::Internal::FrustumMatrix__OrthoRH(NULL, viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

::app::Uno::Float4x4 OrthographicFrustum__MatrixProjectionInverse(OrthographicFrustum* __this, ::app::Uno::Float2 viewSize)
{
    return ::app::Fuse::Internal::FrustumMatrix__OrthoRHInverse(NULL, viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

::app::Uno::Float4x4 OrthographicFrustum__MatrixView(OrthographicFrustum* __this, ::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize)
{
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation(NULL, (-viewSize.X / 2.0f) - origin.X, (-viewSize.Y / 2.0f) - origin.Y, -2.0f);
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling_1(NULL, 1.0f, -1.0f, 1.0f);
    return ::app::Uno::Matrix__Mul_8(NULL, t, s);
}

::app::Uno::Float4x4 OrthographicFrustum__MatrixViewInverse(OrthographicFrustum* __this, ::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize)
{
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling_1(NULL, 1.0f, -1.0f, 1.0f);
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation(NULL, (viewSize.X / 2.0f) + origin.X, (viewSize.Y / 2.0f) + origin.Y, 2.0f);
    return ::app::Uno::Matrix__Mul_8(NULL, s, t);
}

OrthographicFrustum* OrthographicFrustum__New_1(::uStatic* __this)
{
    OrthographicFrustum* inst = (OrthographicFrustum*)::uAllocObject(sizeof(OrthographicFrustum), OrthographicFrustum__typeof());
    inst->_ObjInit();
    return inst;
}

void OrthographicFrustum__set_LocalFromWorld(OrthographicFrustum* __this, ::app::Uno::Float4x4 value)
{
    __this->_localFromWorld = value;
    __this->_hasLocalFromWorld = true;
}

void OrthographicFrustum__set_Origin(OrthographicFrustum* __this, ::app::Uno::Float2 value)
{
    __this->_origin = value;
    __this->_hasOrigin = true;
}

void OrthographicFrustum__set_Size(OrthographicFrustum* __this, ::app::Uno::Float2 value)
{
    __this->_size = value;
    __this->_hasSize = true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PerspectiveFrustum__uType* PerspectiveFrustum__typeof()
{
    static ::uStaticStrong<PerspectiveFrustum__uType*> type;
    if (type != NULL) return type;

    type = (PerspectiveFrustum__uType*)::uAllocClassType(sizeof(PerspectiveFrustum__uType), "Fuse.PerspectiveFrustum", false, 1, 0, 0);

    type->__interface_0.__fp_GetProjectionTransform = (::app::Uno::Float4x4(*)(void*, ::uObject*))PerspectiveFrustum__GetProjectionTransform;
    type->__interface_0.__fp_GetProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*, ::uObject*))PerspectiveFrustum__GetProjectionTransformInverse;
    type->__interface_0.__fp_GetViewTransform = (::app::Uno::Float4x4(*)(void*, ::uObject*))PerspectiveFrustum__GetViewTransform;
    type->__interface_0.__fp_GetViewTransformInverse = (::app::Uno::Float4x4(*)(void*, ::uObject*))PerspectiveFrustum__GetViewTransformInverse;
    type->__interface_0.__fp_GetDepthRange = (::app::Uno::Float2(*)(void*, ::uObject*))PerspectiveFrustum__GetDepthRange;
    type->__interface_0.__fp_GetWorldPosition = (::app::Uno::Float3(*)(void*, ::uObject*))PerspectiveFrustum__GetWorldPosition;

    type->SetInterfaces(
        ::app::Fuse::IFrustum__typeof(), offsetof(PerspectiveFrustum__uType, __interface_0));

    type->SetFunctions(9,
        ::uNewFunction("get_Distance", PerspectiveFrustum__get_Distance, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("GetDepthRange", PerspectiveFrustum__GetDepthRange, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetProjectionTransform", PerspectiveFrustum__GetProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetProjectionTransformInverse", PerspectiveFrustum__GetProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetViewTransform", PerspectiveFrustum__GetViewTransform, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetViewTransformInverse", PerspectiveFrustum__GetViewTransformInverse, 0, false, ::app::Uno::Float4x4__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction("GetWorldPosition", PerspectiveFrustum__GetWorldPosition, 0, false, ::app::Uno::Float3__typeof(), ::app::Fuse::IViewport__typeof()),
        ::uNewFunction(".ctor", PerspectiveFrustum__New_1, 0, true, PerspectiveFrustum__typeof()),
        ::uNewFunctionVoid("set_Distance", PerspectiveFrustum__set_Distance, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void PerspectiveFrustum___ObjInit(PerspectiveFrustum* __this)
{
}

float PerspectiveFrustum__get_Distance(PerspectiveFrustum* __this)
{
    return __this->_Distance;
}

::app::Uno::Float2 PerspectiveFrustum__GetDepthRange(PerspectiveFrustum* __this, ::uObject* viewport)
{
    return ::app::Uno::Float2__New_2(NULL, 10.0f, 1000.0f + __this->Distance());
}

::app::Uno::Float4x4 PerspectiveFrustum__GetProjectionTransform(PerspectiveFrustum* __this, ::uObject* viewport)
{
    return ::app::Fuse::Internal::FrustumMatrix__PerspectiveProjection(NULL, ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)), 10.0f, 1000.0f + __this->Distance(), __this->Distance());
}

::app::Uno::Float4x4 PerspectiveFrustum__GetProjectionTransformInverse(PerspectiveFrustum* __this, ::uObject* viewport)
{
    ::app::Uno::Float4x4 pi = ::app::Fuse::Internal::FrustumMatrix__PerspectiveProjectionInverse(NULL, ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)), 10.0f, 1000.0f + __this->Distance(), __this->Distance());
    return pi;
}

::app::Uno::Float4x4 PerspectiveFrustum__GetViewTransform(PerspectiveFrustum* __this, ::uObject* viewport)
{
    return ::app::Fuse::Internal::FrustumMatrix__PerspectiveView(NULL, ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)), __this->Distance(), ::app::Uno::Float2__New_2(NULL, 0.5f, 0.5f));
}

::app::Uno::Float4x4 PerspectiveFrustum__GetViewTransformInverse(PerspectiveFrustum* __this, ::uObject* viewport)
{
    return ::app::Fuse::Internal::FrustumMatrix__PerspectiveViewInverse(NULL, ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)), __this->Distance(), ::app::Uno::Float2__New_2(NULL, 0.5f, 0.5f));
}

::app::Uno::Float3 PerspectiveFrustum__GetWorldPosition(PerspectiveFrustum* __this, ::uObject* viewport)
{
    return ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Fuse::IViewport::Size(::uPtr< ::uObject*>(viewport)), 2.0f), -__this->Distance());
}

PerspectiveFrustum* PerspectiveFrustum__New_1(::uStatic* __this)
{
    PerspectiveFrustum* inst = (PerspectiveFrustum*)::uAllocObject(sizeof(PerspectiveFrustum), PerspectiveFrustum__typeof());
    inst->_ObjInit();
    return inst;
}

void PerspectiveFrustum__set_Distance(PerspectiveFrustum* __this, float value)
{
    __this->_Distance = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlacedArgs__uType* PlacedArgs__typeof()
{
    static ::uStaticStrong<PlacedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PlacedArgs__uType*)::uAllocClassType(sizeof(PlacedArgs__uType), "Fuse.PlacedArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFunctions(8,
        ::uNewFunction("get_DefaultValue", PlacedArgs__get_DefaultValue, 0, false, ::uObject__typeof()),
        ::uNewFunction("get_HasPrev", PlacedArgs__get_HasPrev, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_PrevPosition", PlacedArgs__get_PrevPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_PrevSize", PlacedArgs__get_PrevSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Serialize", PlacedArgs__Serialize, 0, false, ::app::Fuse::Scripting::IEventSerializer__typeof()),
        ::uNewFunctionVoid("set_HasPrev", PlacedArgs__set_HasPrev, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_PrevPosition", PlacedArgs__set_PrevPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_PrevSize", PlacedArgs__set_PrevSize, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void PlacedArgs___ObjInit_1(PlacedArgs* __this, bool hasPrev, ::app::Uno::Float2 prevPosition, ::app::Uno::Float2 prevSize)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->HasPrev(hasPrev);
    __this->PrevPosition(prevPosition);
    __this->PrevSize(prevSize);
}

::uObject* PlacedArgs__get_DefaultValue(PlacedArgs* __this)
{
    return NULL;
}

bool PlacedArgs__get_HasPrev(PlacedArgs* __this)
{
    return __this->_HasPrev;
}

::app::Uno::Float2 PlacedArgs__get_PrevPosition(PlacedArgs* __this)
{
    return __this->_PrevPosition;
}

::app::Uno::Float2 PlacedArgs__get_PrevSize(PlacedArgs* __this)
{
    return __this->_PrevSize;
}

PlacedArgs* PlacedArgs__New_2(::uStatic* __this, bool hasPrev, ::app::Uno::Float2 prevPosition, ::app::Uno::Float2 prevSize)
{
    PlacedArgs* inst = (PlacedArgs*)::uAllocObject(sizeof(PlacedArgs), PlacedArgs__typeof());
    inst->_ObjInit_1(hasPrev, prevPosition, prevSize);
    return inst;
}

void PlacedArgs__Serialize(PlacedArgs* __this, ::uObject* serializer)
{
}

void PlacedArgs__set_HasPrev(PlacedArgs* __this, bool value)
{
    __this->_HasPrev = value;
}

void PlacedArgs__set_PrevPosition(PlacedArgs* __this, ::app::Uno::Float2 value)
{
    __this->_PrevPosition = value;
}

void PlacedArgs__set_PrevSize(PlacedArgs* __this, ::app::Uno::Float2 value)
{
    __this->_PrevSize = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PlacedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.PlacedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::PlacedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> Properties__NoValue;

Properties__uType* Properties__typeof()
{
    static ::uStaticStrong<Properties__uType*> type;
    if (type != NULL) return type;

    type = (Properties__uType*)::uAllocClassType(sizeof(Properties__uType), "Fuse.Properties", false, 0, 3, 0);

    type->SetStrongRefs(
        "_handle", offsetof(Properties, _handle),
        "_next", offsetof(Properties, _next),
        "_value", offsetof(Properties, _value));

    type->SetFields(4,
        ::uNewField("_handle", NULL, offsetof(Properties, _handle), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_next", NULL, offsetof(Properties, _next), Properties__typeof()),
        ::uNewField("_value", NULL, offsetof(Properties, _value), ::uObject__typeof()),
        ::uNewField("NoValue", &Properties__NoValue, 0, ::uObject__typeof()));

    type->SetFunctions(14,
        ::uNewFunctionVoid("AddToList", Properties__AddToList, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("Clear", Properties__Clear, 0, false, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewFunctionVoid("Clear", Properties__Clear_1, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::uObject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("CreateHandle", Properties__CreateHandle, 0, true, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewFunctionVoid("ForeachInList", Properties__ForeachInList, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::app::Uno::Action__object__object__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("ForeachInList", Properties__ForeachInList_1, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::app::Uno::Action__object__object____typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Get", Properties__Get, 0, false, ::uObject__typeof(), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewFunction("Has", Properties__Has, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewFunction(".ctor", Properties__New_1, 0, true, Properties__typeof()),
        ::uNewFunctionVoid("RemoveAllFromList", Properties__RemoveAllFromList, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("RemoveFromList", Properties__RemoveFromList, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("Set", Properties__Set, 0, false, ::app::Fuse::PropertyHandle__typeof(), ::uObject__typeof()),
        ::uNewFunction("ToArray", Properties__ToArray, 0, false, ::uGetArrayType(::uObject__typeof()), ::app::Fuse::PropertyHandle__typeof()),
        ::uNewFunction("TryGet", Properties__TryGet, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::PropertyHandle__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Properties___ObjInit(Properties* __this)
{
}

void Properties___TypeInit(::uStatic* __this)
{
    Properties__NoValue = ::app::Uno::Object__New(NULL);
}

void Properties__AddToList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val)
{
    if (__this->_handle == NULL)
    {
        __this->_handle = handle;
        __this->_value = val;
    }
    else if (__this->_next == NULL)
    {
        __this->_next = Properties__New_1(NULL);
        ::uPtr< Properties*>(__this->_next)->AddToList(handle, val);
    }
    else
    {
        ::uPtr< Properties*>(__this->_next)->AddToList(handle, val);
    }
}

void Properties__Clear(Properties* __this, ::app::Fuse::PropertyHandle* handle)
{
    __this->Clear_1(handle, Properties__NoValue, true);
}

void Properties__Clear_1(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val, bool all)
{
    if (__this->_handle == NULL)
    {
        return;
    }

    Properties* p = __this;
    Properties* previous = NULL;

    while (p != NULL)
    {
        if ((::uPtr< Properties*>(p)->_handle == handle) && ((val == Properties__NoValue) || ::app::Uno::Object::Equals(::uPtr< ::uObject*>(val), ::uPtr< Properties*>(p)->_value)))
        {
            if (previous == NULL)
            {
                if (::uPtr< Properties*>(p)->_next == NULL)
                {
                    ::uPtr< Properties*>(p)->_handle = NULL;
                    p->_value = NULL;
                    break;
                }
                else
                {
                    ::uPtr< Properties*>(p)->_handle = ::uPtr< Properties*>(::uPtr< Properties*>(p)->_next)->_handle;
                    p->_value = ::uPtr< Properties*>(p->_next)->_value;
                    p->_next = ::uPtr< Properties*>(p->_next)->_next;

                    if (all)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                ::uPtr< Properties*>(previous)->_next = ::uPtr< Properties*>(p)->_next;
                p = ::uPtr< Properties*>(p)->_next;

                if (all)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            previous = p;
            p = ::uPtr< Properties*>(p)->_next;
        }
    }
}

::app::Fuse::PropertyHandle* Properties__CreateHandle(::uStatic* __this)
{
    return ::app::Fuse::PropertyHandle__New_1(NULL);
}

void Properties__ForeachInList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uDelegate* action, ::uObject* state)
{
    if (__this->_handle == NULL)
    {
        return;
    }

    Properties* p = __this;

    while (p != NULL)
    {
        if (::uPtr< Properties*>(p)->_handle == handle)
        {
            ::uPtr< ::uDelegate*>(action)->InvokeVoid< ::uObject*, ::uObject*>(::uPtr< Properties*>(p)->_value, state);
        }

        p = ::uPtr< Properties*>(p)->_next;
    }
}

void Properties__ForeachInList_1(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uDelegate* action, ::uArray* state)
{
    if (__this->_handle == NULL)
    {
        return;
    }

    Properties* p = __this;

    while (p != NULL)
    {
        if (::uPtr< Properties*>(p)->_handle == handle)
        {
            ::uPtr< ::uDelegate*>(action)->InvokeVoid< ::uObject*, ::uArray*>(::uPtr< Properties*>(p)->_value, state);
        }

        p = ::uPtr< Properties*>(p)->_next;
    }
}

::uObject* Properties__Get(Properties* __this, ::app::Fuse::PropertyHandle* handle)
{
    if (__this->_handle == handle)
    {
        return __this->_value;
    }

    if (__this->_next != NULL)
    {
        return ::uPtr< Properties*>(__this->_next)->Get(handle);
    }

    return NULL;
}

bool Properties__Has(Properties* __this, ::app::Fuse::PropertyHandle* handle)
{
    if (__this->_handle == handle)
    {
        return true;
    }

    if (__this->_next != NULL)
    {
        return ::uPtr< Properties*>(__this->_next)->Has(handle);
    }

    return false;
}

Properties* Properties__New_1(::uStatic* __this)
{
    Properties* inst = (Properties*)::uAllocObject(sizeof(Properties), Properties__typeof());
    inst->_ObjInit();
    return inst;
}

void Properties__RemoveAllFromList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val)
{
    __this->Clear_1(handle, val, true);
}

void Properties__RemoveFromList(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val)
{
    __this->Clear_1(handle, val, false);
}

void Properties__Set(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject* val)
{
    if (__this->_handle == NULL)
    {
        __this->_handle = handle;
        __this->_value = val;
    }
    else if (__this->_handle == handle)
    {
        __this->_value = val;
    }
    else
    {
        if (__this->_next == NULL)
        {
            __this->_next = Properties__New_1(NULL);
        }

        ::uPtr< Properties*>(__this->_next)->Set(handle, val);
    }
}

::uArray* Properties__ToArray(Properties* __this, ::app::Fuse::PropertyHandle* handle)
{
    if (__this->_handle == NULL)
    {
        return ::uNewArray(::uObject__typeof(), 0);
    }

    ::app::Uno::Collections::List__object* list = ::app::Uno::Collections::List__object__New_1(NULL);
    Properties* p = __this;

    while (p != NULL)
    {
        if (::uPtr< Properties*>(p)->_handle == handle)
        {
            ::uPtr< ::app::Uno::Collections::List__object*>(list)->Add(::uPtr< Properties*>(p)->_value);
        }

        p = ::uPtr< Properties*>(p)->_next;
    }

    return ::uPtr< ::app::Uno::Collections::List__object*>(list)->ToArray();
}

bool Properties__TryGet(Properties* __this, ::app::Fuse::PropertyHandle* handle, ::uObject** val)
{
    if (__this->_handle == handle)
    {
        *val = __this->_value;
        return true;
    }

    if (__this->_next != NULL)
    {
        return ::uPtr< Properties*>(__this->_next)->TryGet(handle, val);
    }

    *val = NULL;
    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PropertyHandle__uType* PropertyHandle__typeof()
{
    static ::uStaticStrong<PropertyHandle__uType*> type;
    if (type != NULL) return type;

    type = (PropertyHandle__uType*)::uAllocClassType(sizeof(PropertyHandle__uType), "Fuse.PropertyHandle", false, 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

void PropertyHandle___ObjInit(PropertyHandle* __this)
{
}

PropertyHandle* PropertyHandle__New_1(::uStatic* __this)
{
    PropertyHandle* inst = (PropertyHandle*)::uAllocObject(sizeof(PropertyHandle), PropertyHandle__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PropertyState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.PropertyState", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "NoValue", 0LL,
        "StyleValue", 1LL,
        "LocalValue", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RenderTargetEntry__uType* RenderTargetEntry__typeof()
{
    static ::uStaticStrong<RenderTargetEntry__uType*> type;
    if (type != NULL) return type;

    type = (RenderTargetEntry__uType*)::uAllocClassType(sizeof(RenderTargetEntry__uType), "Fuse.RenderTargetEntry", false, 0, 1, 0);

    type->SetStrongRefs(
        "RenderTarget", offsetof(RenderTargetEntry, RenderTarget));

    type->SetFields(4,
        ::uNewField("GLFramebuffer", NULL, offsetof(RenderTargetEntry, GLFramebuffer), ::app::OpenGL::GLFramebufferHandle__typeof()),
        ::uNewField("GLScissor", NULL, offsetof(RenderTargetEntry, GLScissor), ::app::Uno::Int4__typeof()),
        ::uNewField("GLViewportPixelSize", NULL, offsetof(RenderTargetEntry, GLViewportPixelSize), ::app::Uno::Int2__typeof()),
        ::uNewField("RenderTarget", NULL, offsetof(RenderTargetEntry, RenderTarget), ::app::Uno::Graphics::RenderTarget__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RenderTargetEntry__New_1, 0, true, RenderTargetEntry__typeof(), ::app::Uno::Graphics::RenderTarget__typeof(), ::app::Uno::Int2__typeof(), ::app::Uno::Int4__typeof(), ::app::OpenGL::GLFramebufferHandle__typeof()));

    ::uRegisterType(type);
    return type;
}

void RenderTargetEntry___ObjInit(RenderTargetEntry* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glScissor, ::uUInt handle)
{
    __this->RenderTarget = rt;
    __this->GLViewportPixelSize = viewportPixelSize;
    __this->GLScissor = glScissor;
    __this->GLFramebuffer = handle;
}

RenderTargetEntry* RenderTargetEntry__New_1(::uStatic* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Int4 glScissor, ::uUInt handle)
{
    RenderTargetEntry* inst = (RenderTargetEntry*)::uAllocObject(sizeof(RenderTargetEntry), RenderTargetEntry__typeof());
    inst->_ObjInit(rt, viewportPixelSize, glScissor, handle);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RequestBringIntoViewArgs__uType* RequestBringIntoViewArgs__typeof()
{
    static ::uStaticStrong<RequestBringIntoViewArgs__uType*> type;
    if (type != NULL) return type;

    type = (RequestBringIntoViewArgs__uType*)::uAllocClassType(sizeof(RequestBringIntoViewArgs__uType), "Fuse.RequestBringIntoViewArgs", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Node", offsetof(RequestBringIntoViewArgs, _Node));

    type->SetFunctions(3,
        ::uNewFunction("get_Node", RequestBringIntoViewArgs__get_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", RequestBringIntoViewArgs__New_2, 0, true, RequestBringIntoViewArgs__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Node", RequestBringIntoViewArgs__set_Node, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void RequestBringIntoViewArgs___ObjInit_1(RequestBringIntoViewArgs* __this, ::app::Fuse::Node* elm)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Node(elm);
}

::app::Fuse::Node* RequestBringIntoViewArgs__get_Node(RequestBringIntoViewArgs* __this)
{
    return __this->_Node;
}

RequestBringIntoViewArgs* RequestBringIntoViewArgs__New_2(::uStatic* __this, ::app::Fuse::Node* elm)
{
    RequestBringIntoViewArgs* inst = (RequestBringIntoViewArgs*)::uAllocObject(sizeof(RequestBringIntoViewArgs), RequestBringIntoViewArgs__typeof());
    inst->_ObjInit_1(elm);
    return inst;
}

void RequestBringIntoViewArgs__set_Node(RequestBringIntoViewArgs* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* RequestBringIntoViewHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.RequestBringIntoViewHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::RequestBringIntoViewArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RequiresRootedException__uType* RequiresRootedException__typeof()
{
    static ::uStaticStrong<RequiresRootedException__uType*> type;
    if (type != NULL) return type;

    type = (RequiresRootedException__uType*)::uAllocClassType(sizeof(RequiresRootedException__uType), "Fuse.RequiresRootedException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RequiresRootedException__New_3, 0, true, RequiresRootedException__typeof()));

    ::uRegisterType(type);
    return type;
}

void RequiresRootedException___ObjInit_2(RequiresRootedException* __this)
{
    ::app::Uno::Exception___ObjInit(__this);
}

RequiresRootedException* RequiresRootedException__New_3(::uStatic* __this)
{
    RequiresRootedException* inst = (RequiresRootedException*)::uAllocObject(sizeof(RequiresRootedException), RequiresRootedException__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

float RootViewport___defaultDensity;

RootViewport__uType* RootViewport__typeof()
{
    static ::uStaticStrong<RootViewport__uType*> type;
    if (type != NULL) return type;

    type = (RootViewport__uType*)::uAllocClassType(sizeof(RootViewport__uType), "Fuse.RootViewport", false, 2, 4, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))RootViewport__get_SubNodeCount;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))RootViewport__GetSubNode;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))RootViewport__OnArrangeMarginBox;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))RootViewport__OnHitTest;
    type->__interface_1.__fp_PointToWorldRay = (::app::Uno::Geometry::Ray(*)(void*, ::app::Uno::Float2))RootViewport__PointToWorldRay;
    type->__interface_1.__fp_get_PointDensity = (float(*)(void*))RootViewport__get_PointDensity_1;
    type->__interface_1.__fp_get_Size = (::app::Uno::Float2(*)(void*))RootViewport__get_Size;
    type->__interface_1.__fp_get_PixelSize = (::app::Uno::Float2(*)(void*))RootViewport__get_PixelSize;
    type->__interface_1.__fp_get_ProjectionTransform = (::app::Uno::Float4x4(*)(void*))RootViewport__get_ProjectionTransform;
    type->__interface_1.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))RootViewport__get_ViewProjectionTransform;
    type->__interface_1.__fp_get_ViewProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*))RootViewport__get_ViewProjectionTransformInverse;
    type->__interface_1.__fp_get_ViewTransform = (::app::Uno::Float4x4(*)(void*))RootViewport__get_ViewTransform;
    type->__interface_1.__fp_get_ViewOrigin = (::app::Uno::Float3(*)(void*))RootViewport__get_ViewOrigin;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RootViewport__uType, __interface_0),
        ::app::Fuse::IViewport__typeof(), offsetof(RootViewport__uType, __interface_1));

    type->SetStrongRefs(
        "_frustumViewport", offsetof(RootViewport, _frustumViewport),
        "_root", offsetof(RootViewport, _root),
        "Frustum", offsetof(RootViewport, Frustum),
        "Window", offsetof(RootViewport, Window));

    type->SetFields(6,
        ::uNewField("_defaultDensity", &RootViewport___defaultDensity, 0, ::app::Uno::Float__typeof()),
        ::uNewField("_frustumViewport", NULL, offsetof(RootViewport, _frustumViewport), ::app::Fuse::FrustumViewport__typeof()),
        ::uNewField("_pointDensity", NULL, offsetof(RootViewport, _pointDensity), ::app::Uno::Float__typeof()),
        ::uNewField("_root", NULL, offsetof(RootViewport, _root), ::app::Fuse::Node__typeof()),
        ::uNewField("Frustum", NULL, offsetof(RootViewport, Frustum), ::app::Fuse::IFrustum__typeof()),
        ::uNewField("Window", NULL, offsetof(RootViewport, Window), ::app::Uno::Platform::Window__typeof()));

    type->SetFunctions(19,
        ::uNewFunction("get_Content", RootViewport__get_Content, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_DefaultDensity", RootViewport__get_DefaultDensity, 0, true, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_PixelSize", RootViewport__get_PixelSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_PointDensity", RootViewport__get_PointDensity_1, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ProjectionTransform", RootViewport__get_ProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ProjectionTransformInverse", RootViewport__get_ProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Size", RootViewport__get_Size, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ViewOrigin", RootViewport__get_ViewOrigin, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_ViewProjectionTransform", RootViewport__get_ViewProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewProjectionTransformInverse", RootViewport__get_ViewProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewRange", RootViewport__get_ViewRange, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ViewTransform", RootViewport__get_ViewTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewTransformInverse", RootViewport__get_ViewTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", RootViewport__New_1, 0, true, RootViewport__typeof(), ::app::Uno::Platform::Window__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("OnGotFocus", RootViewport__OnGotFocus, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnLostFocus", RootViewport__OnLostFocus, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnResized", RootViewport__OnResized, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunction("PointToWorldRay", RootViewport__PointToWorldRay, 0, false, ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Content", RootViewport__set_Content, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void RootViewport___ObjInit_1(RootViewport* __this, ::app::Uno::Platform::Window* window, float pointDensity)
{
    __this->Frustum = (::uObject*)::app::Fuse::OrthographicFrustum__New_1(NULL);
    __this->_frustumViewport = ::app::Fuse::FrustumViewport__New_1(NULL);
    ::app::Fuse::Node___ObjInit(__this);
    __this->_pointDensity = pointDensity;
    __this->Window = window;
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_GotFocus(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)RootViewport__OnGotFocus, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_LostFocus(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)RootViewport__OnLostFocus, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->add_Resized(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)RootViewport__OnResized, __this));
    ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->Update((::uObject*)__this, __this->Frustum);
    __this->MarkRooted();
}

void RootViewport___TypeInit_1(::uStatic* __this)
{
    RootViewport___defaultDensity = -1.0f;
}

::app::Fuse::Node* RootViewport__get_Content(RootViewport* __this)
{
    return __this->_root;
}

float RootViewport__get_DefaultDensity(::uStatic* __this)
{
    if (RootViewport___defaultDensity < 0.0f)
    {
        ::Xli::Window* wnd = ::app::Uno::Runtime::Implementation::Internal::WindowHelpers__GetPlatformWindowHandle(NULL, ::uPtr< ::app::Fuse::AppBase*>(::app::Fuse::AppBase__get_Current_1(NULL))->Window());
        RootViewport___defaultDensity = ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetDensity(NULL, wnd);
    }

    return RootViewport___defaultDensity;
}

::app::Uno::Float2 RootViewport__get_PixelSize(RootViewport* __this)
{
    return ::app::Uno::Float2__op_Implicit_1(NULL, ::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->ClientSize());
}

float RootViewport__get_PointDensity_1(RootViewport* __this)
{
    return (__this->_pointDensity != -1.0f) ? __this->_pointDensity : RootViewport__get_DefaultDensity(NULL);
}

::app::Uno::Float4x4 RootViewport__get_ProjectionTransform(RootViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ProjectionTransform;
}

::app::Uno::Float4x4 RootViewport__get_ProjectionTransformInverse(RootViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ProjectionTransformInverse;
}

::app::Uno::Float2 RootViewport__get_Size(RootViewport* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->ClientSize().X, (float)::uPtr< ::app::Uno::Platform::Window*>(__this->Window)->ClientSize().Y), __this->PointDensity_1());
}

int RootViewport__get_SubNodeCount(RootViewport* __this)
{
    return (__this->Content() != NULL) ? 1 : 0;
}

::app::Uno::Float3 RootViewport__get_ViewOrigin(RootViewport* __this)
{
    return ::app::Fuse::IFrustum::GetWorldPosition(::uPtr< ::uObject*>(__this->Frustum), (::uObject*)__this);
}

::app::Uno::Float4x4 RootViewport__get_ViewProjectionTransform(RootViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransform;
}

::app::Uno::Float4x4 RootViewport__get_ViewProjectionTransformInverse(RootViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransformInverse;
}

::app::Uno::Float2 RootViewport__get_ViewRange(RootViewport* __this)
{
    return ::app::Fuse::IFrustum::GetDepthRange(::uPtr< ::uObject*>(__this->Frustum), (::uObject*)__this);
}

::app::Uno::Float4x4 RootViewport__get_ViewTransform(RootViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewTransform;
}

::app::Uno::Float4x4 RootViewport__get_ViewTransformInverse(RootViewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewTransformInverse;
}

::app::Fuse::Node* RootViewport__GetSubNode(RootViewport* __this, int i)
{
    return __this->Content();
}

RootViewport* RootViewport__New_1(::uStatic* __this, ::app::Uno::Platform::Window* window, float pointDensity)
{
    RootViewport* inst = (RootViewport*)::uAllocObject(sizeof(RootViewport), RootViewport__typeof());
    inst->_ObjInit_1(window, pointDensity);
    return inst;
}

::app::Uno::Float2 RootViewport__OnArrangeMarginBox(RootViewport* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    if (__this->Content() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    return ::uPtr< ::app::Fuse::Node*>(__this->Content())->ArrangeMarginBox(position, availableSize, availSet);
}

void RootViewport__OnGotFocus(RootViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    try
    {
        ::app::Fuse::Input::Focus__OnWindowGotFocus(NULL, sender, args);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void RootViewport__OnHitTest(RootViewport* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->Content() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Content())->HitTest(htc);
    }
}

void RootViewport__OnLostFocus(RootViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    try
    {
        ::app::Fuse::Input::Focus__OnWindowLostFocus(NULL, sender, args);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void RootViewport__OnResized(RootViewport* __this, ::uObject* s, ::uObject* a)
{
    ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->Update((::uObject*)__this, __this->Frustum);
}

::app::Uno::Geometry::Ray RootViewport__PointToWorldRay(RootViewport* __this, ::app::Uno::Float2 pixelPos)
{
    return ::app::Fuse::FrustumViewport__PointToWorldRay(NULL, (::uObject*)__this, pixelPos);
}

void RootViewport__set_Content(RootViewport* __this, ::app::Fuse::Node* value)
{
    if (__this->_root != value)
    {
        if (__this->_root != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_root)->OnRemoved((::app::Fuse::Node*)__this);
        }

        __this->_root = value;

        if (__this->_root != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_root)->OnAdded((::app::Fuse::Node*)__this);
        }

        __this->InvalidateLayout(2);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Rotation__uType* Rotation__typeof()
{
    static ::uStaticStrong<Rotation__uType*> type;
    if (type != NULL) return type;

    type = (Rotation__uType*)::uAllocClassType(sizeof(Rotation__uType), "Fuse.Rotation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Transform__typeof());
    type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Rotation__AppendTo;
    type->__fp_get_IsFlat = (bool(*)(::app::Fuse::Transform*))Rotation__get_IsFlat;
    type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Rotation__PrependTo;

    type->SetFields(1,
        ::uNewField("_euler", NULL, offsetof(Rotation, _euler), ::app::Uno::Float3__typeof()));

    type->SetFunctions(14,
        ::uNewFunction("get_Degrees", Rotation__get_Degrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesX", Rotation__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesY", Rotation__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesZ", Rotation__get_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_EulerAngle", Rotation__get_EulerAngle, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_EulerAngleDegrees", Rotation__get_EulerAngleDegrees, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_HasRotation", Rotation__get_HasRotation, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", Rotation__New_1, 0, true, Rotation__typeof()),
        ::uNewFunctionVoid("set_Degrees", Rotation__set_Degrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Rotation__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Rotation__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesZ", Rotation__set_DegreesZ, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_EulerAngle", Rotation__set_EulerAngle, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_EulerAngleDegrees", Rotation__set_EulerAngleDegrees, 0, false, ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void Rotation___ObjInit_1(Rotation* __this)
{
    ::app::Fuse::Transform___ObjInit(__this);
}

void Rotation__AppendTo(Rotation* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    if (__this->HasRotation())
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendRotationQuaternion(::app::Uno::Quaternion__FromEulerAngle_1(NULL, ::app::Uno::Float3__op_Multiply_1(NULL, __this->_euler, weight)));
    }
}

float Rotation__get_Degrees(Rotation* __this)
{
    return __this->DegreesZ();
}

float Rotation__get_DegreesX(Rotation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_euler.X);
}

float Rotation__get_DegreesY(Rotation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_euler.Y);
}

float Rotation__get_DegreesZ(Rotation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_euler.Z);
}

::app::Uno::Float3 Rotation__get_EulerAngle(Rotation* __this)
{
    return __this->_euler;
}

::app::Uno::Float3 Rotation__get_EulerAngleDegrees(Rotation* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_3(NULL, __this->_euler);
}

bool Rotation__get_HasRotation(Rotation* __this)
{
    return ((::app::Uno::Math__Abs_1(NULL, __this->_euler.X) + ::app::Uno::Math__Abs_1(NULL, __this->_euler.Y)) + ::app::Uno::Math__Abs_1(NULL, __this->_euler.Z)) > 1e-05f;
}

bool Rotation__get_IsFlat(Rotation* __this)
{
    return (::app::Uno::Math__Abs_1(NULL, __this->_euler.X) < 1e-05f) && (::app::Uno::Math__Abs_1(NULL, __this->_euler.Y) < 1e-05f);
}

Rotation* Rotation__New_1(::uStatic* __this)
{
    Rotation* inst = (Rotation*)::uAllocObject(sizeof(Rotation), Rotation__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Rotation__PrependTo(Rotation* __this, ::app::Fuse::FastMatrix* m)
{
    if (__this->HasRotation())
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependRotationQuaternion(::app::Uno::Quaternion__FromEulerAngle_1(NULL, __this->_euler));
    }
}

void Rotation__set_Degrees(Rotation* __this, float value)
{
    __this->DegreesZ(value);
}

void Rotation__set_DegreesX(Rotation* __this, float value)
{
    float r = ::app::Uno::Math__DegreesToRadians_1(NULL, value);

    if (__this->_euler.X != r)
    {
        __this->_euler.X = r;
        __this->OnMatrixChanged();
    }
}

void Rotation__set_DegreesY(Rotation* __this, float value)
{
    float r = ::app::Uno::Math__DegreesToRadians_1(NULL, value);

    if (__this->_euler.Y != r)
    {
        __this->_euler.Y = r;
        __this->OnMatrixChanged();
    }
}

void Rotation__set_DegreesZ(Rotation* __this, float value)
{
    float r = ::app::Uno::Math__DegreesToRadians_1(NULL, value);

    if (__this->_euler.Z != r)
    {
        __this->_euler.Z = r;
        __this->OnMatrixChanged();
    }
}

void Rotation__set_EulerAngle(Rotation* __this, ::app::Uno::Float3 value)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->_euler, value))
    {
        __this->_euler = value;
        __this->OnMatrixChanged();
    }
}

void Rotation__set_EulerAngleDegrees(Rotation* __this, ::app::Uno::Float3 value)
{
    ::app::Uno::Float3 r = ::app::Uno::Math__DegreesToRadians_3(NULL, value);

    if (::app::Uno::Float3__op_Inequality(NULL, __this->_euler, r))
    {
        __this->_euler = r;
        __this->OnMatrixChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Scaling__uType* Scaling__typeof()
{
    static ::uStaticStrong<Scaling__uType*> type;
    if (type != NULL) return type;

    type = (Scaling__uType*)::uAllocClassType(sizeof(Scaling__uType), "Fuse.Scaling", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Transform__typeof());
    type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Scaling__AppendTo;
    type->__fp_get_IsFlat = (bool(*)(::app::Fuse::Transform*))Scaling__get_IsFlat;
    type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Scaling__PrependTo;

    type->SetFields(1,
        ::uNewField("_vector", NULL, offsetof(Scaling, _vector), ::app::Uno::Float3__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("get_Factor", Scaling__get_Factor, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsIdentity", Scaling__get_IsIdentity, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Vector", Scaling__get_Vector, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction(".ctor", Scaling__New_1, 0, true, Scaling__typeof()),
        ::uNewFunctionVoid("set_Factor", Scaling__set_Factor, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Vector", Scaling__set_Vector, 0, false, ::app::Uno::Float3__typeof()));

    ::uRegisterType(type);
    return type;
}

void Scaling___ObjInit_1(Scaling* __this)
{
    __this->_vector = ::app::Uno::Float3__New_1(NULL, 1.0f);
    ::app::Fuse::Transform___ObjInit(__this);
}

void Scaling__AppendTo(Scaling* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    if (!__this->IsIdentity())
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendScale_1(::app::Uno::Math__Lerp_4(NULL, ::app::Uno::Float3__New_1(NULL, 1.0f), __this->Vector(), weight));
    }
}

float Scaling__get_Factor(Scaling* __this)
{
    return __this->_vector.X;
}

bool Scaling__get_IsFlat(Scaling* __this)
{
    return true;
}

bool Scaling__get_IsIdentity(Scaling* __this)
{
    return ((::app::Uno::Math__Abs_1(NULL, __this->_vector.X - 1.0f) < 1e-05f) && (::app::Uno::Math__Abs_1(NULL, __this->_vector.Y - 1.0f) < 1e-05f)) && (::app::Uno::Math__Abs_1(NULL, __this->_vector.Z - 1.0f) < 1e-05f);
}

::app::Uno::Float3 Scaling__get_Vector(Scaling* __this)
{
    return __this->_vector;
}

Scaling* Scaling__New_1(::uStatic* __this)
{
    Scaling* inst = (Scaling*)::uAllocObject(sizeof(Scaling), Scaling__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Scaling__PrependTo(Scaling* __this, ::app::Fuse::FastMatrix* m)
{
    if (!__this->IsIdentity())
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependScale_1(__this->Vector());
    }
}

void Scaling__set_Factor(Scaling* __this, float value)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->_vector, ::app::Uno::Float3__New_1(NULL, value)))
    {
        __this->_vector = ::app::Uno::Float3__New_1(NULL, value);
        __this->OnMatrixChanged();
    }
}

void Scaling__set_Vector(Scaling* __this, ::app::Uno::Float3 value)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->_vector, value))
    {
        __this->_vector = value;
        __this->OnMatrixChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Shear__uType* Shear__typeof()
{
    static ::uStaticStrong<Shear__uType*> type;
    if (type != NULL) return type;

    type = (Shear__uType*)::uAllocClassType(sizeof(Shear__uType), "Fuse.Shear", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Transform__typeof());
    type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Shear__AppendTo;
    type->__fp_get_IsFlat = (bool(*)(::app::Fuse::Transform*))Shear__get_IsFlat;
    type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Shear__PrependTo;

    type->SetFields(1,
        ::uNewField("_vector", NULL, offsetof(Shear, _vector), ::app::Uno::Float2__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("get_Degrees", Shear__get_Degrees, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DegreesX", Shear__get_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_DegreesY", Shear__get_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Vector", Shear__get_Vector, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", Shear__New_1, 0, true, Shear__typeof()),
        ::uNewFunctionVoid("set_Degrees", Shear__set_Degrees, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_DegreesX", Shear__set_DegreesX, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_DegreesY", Shear__set_DegreesY, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Vector", Shear__set_Vector, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Shear___ObjInit_1(Shear* __this)
{
    ::app::Fuse::Transform___ObjInit(__this);
}

void Shear__AppendTo(Shear* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    ::app::Uno::Float2 v = ::app::Uno::Float2__op_Multiply_1(NULL, __this->Vector(), weight);
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendShear(v.X, v.Y);
}

::app::Uno::Float2 Shear__get_Degrees(Shear* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->DegreesX(), __this->DegreesY());
}

float Shear__get_DegreesX(Shear* __this)
{
    return __this->_vector.X;
}

float Shear__get_DegreesY(Shear* __this)
{
    return __this->_vector.Y;
}

bool Shear__get_IsFlat(Shear* __this)
{
    return true;
}

::app::Uno::Float2 Shear__get_Vector(Shear* __this)
{
    return __this->_vector;
}

Shear* Shear__New_1(::uStatic* __this)
{
    Shear* inst = (Shear*)::uAllocObject(sizeof(Shear), Shear__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Shear__PrependTo(Shear* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Uno::Float2 v = __this->Vector();
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependShear(v.X, v.Y);
}

void Shear__set_Degrees(Shear* __this, ::app::Uno::Float2 value)
{
    __this->Vector(::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, value.X), ::app::Uno::Math__DegreesToRadians_1(NULL, value.Y)));
}

void Shear__set_DegreesX(Shear* __this, float value)
{
    float r = ::app::Uno::Math__DegreesToRadians_1(NULL, value);

    if (__this->_vector.X != r)
    {
        __this->_vector.X = r;
        __this->OnMatrixChanged();
    }
}

void Shear__set_DegreesY(Shear* __this, float value)
{
    float r = ::app::Uno::Math__DegreesToRadians_1(NULL, value);

    if (__this->_vector.Y != r)
    {
        __this->_vector.Y = r;
        __this->OnMatrixChanged();
    }
}

void Shear__set_Vector(Shear* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_vector, value))
    {
        __this->_vector = value;
        __this->OnMatrixChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SizeFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.SizeFlags", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "None", 0LL,
        "X", 1LL,
        "Y", 2LL,
        "Both", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Stage__uType* Stage__typeof()
{
    static ::uStaticStrong<Stage__uType*> type;
    if (type != NULL) return type;

    type = (Stage__uType*)::uAllocClassType(sizeof(Stage__uType), "Fuse.Stage", false, 0, 3, 0);

    type->SetStrongRefs(
        "Listeners", offsetof(Stage, Listeners),
        "Onces", offsetof(Stage, Onces),
        "OncesPending", offsetof(Stage, OncesPending));

    type->SetFields(4,
        ::uNewField("HasListenersRemoved", NULL, offsetof(Stage, HasListenersRemoved), ::app::Uno::Bool__typeof()),
        ::uNewField("Listeners", NULL, offsetof(Stage, Listeners), ::app::Uno::Collections::List__Fuse_UpdateListener__typeof()),
        ::uNewField("Onces", NULL, offsetof(Stage, Onces), ::app::Uno::Collections::List__Fuse_UpdateListener__typeof()),
        ::uNewField("OncesPending", NULL, offsetof(Stage, OncesPending), ::app::Uno::Collections::List__Fuse_UpdateListener__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Insert", Stage__Insert, 0, false, ::app::Uno::Collections::List__Fuse_UpdateListener__typeof(), ::app::Fuse::UpdateListener__typeof()),
        ::uNewFunction(".ctor", Stage__New_1, 0, true, Stage__typeof()));

    ::uRegisterType(type);
    return type;
}

void Stage___ObjInit(Stage* __this)
{
    __this->Listeners = ::app::Uno::Collections::List__Fuse_UpdateListener__New_1(NULL);
    __this->Onces = ::app::Uno::Collections::List__Fuse_UpdateListener__New_1(NULL);
    __this->OncesPending = ::app::Uno::Collections::List__Fuse_UpdateListener__New_1(NULL);
}

void Stage__Insert(Stage* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* list, ::app::Fuse::UpdateListener* us)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Count(); i > 0; --i)
    {
        if (::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Item(i - 1))->sequence <= ::uPtr< ::app::Fuse::UpdateListener*>(us)->sequence)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Insert(i, us);
            return;
        }
    }

    list->Insert(0, us);
}

Stage* Stage__New_1(::uStatic* __this)
{
    Stage* inst = (Stage*)::uAllocObject(sizeof(Stage), Stage__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Style__uType* Style__typeof()
{
    static ::uStaticStrong<Style__uType*> type;
    if (type != NULL) return type;

    type = (Style__uType*)::uAllocClassType(sizeof(Style__uType), "Fuse.Style", false, 1, 4, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))Style__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Style__uType, __interface_0));

    type->SetStrongRefs(
        "_resources", offsetof(Style, _resources),
        "_styles", offsetof(Style, _styles),
        "_templates", offsetof(Style, _templates),
        "TemplatesChanged", offsetof(Style, TemplatesChanged));

    type->SetFields(4,
        ::uNewField("_resources", NULL, offsetof(Style, _resources), ::app::Uno::Collections::IList__Uno_UX_Resource__typeof()),
        ::uNewField("_styles", NULL, offsetof(Style, _styles), ::app::Uno::Collections::IList__Fuse_Style__typeof()),
        ::uNewField("_templates", NULL, offsetof(Style, _templates), ::app::Uno::Collections::IList__Uno_UX_ITemplate__typeof()),
        ::uNewField("AddedByStyle", NULL, offsetof(Style, AddedByStyle), ::app::Uno::Bool__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("add_TemplatesChanged", Style__add_TemplatesChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("Apply", Style__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("get_HasResources", Style__get_HasResources, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Resources", Style__get_Resources, 0, false, ::app::Uno::Collections::IList__Uno_UX_Resource__typeof()),
        ::uNewFunction("get_Styles", Style__get_Styles, 0, false, ::app::Uno::Collections::IList__Fuse_Style__typeof()),
        ::uNewFunction("get_Templates", Style__get_Templates, 0, false, ::app::Uno::Collections::IList__Uno_UX_ITemplate__typeof()),
        ::uNewFunction(".ctor", Style__New_1, 0, true, Style__typeof()),
        ::uNewFunctionVoid("OnResourceChanged", Style__OnResourceChanged, 0, false, ::app::Uno::UX::Resource__typeof()),
        ::uNewFunctionVoid("OnTemplateAdded", Style__OnTemplateAdded, 0, false, ::app::Uno::UX::ITemplate__typeof()),
        ::uNewFunctionVoid("OnTemplateRemoved", Style__OnTemplateRemoved, 0, false, ::app::Uno::UX::ITemplate__typeof()),
        ::uNewFunctionVoid("OnTemplatesChanged", Style__OnTemplatesChanged, 0, false),
        ::uNewFunctionVoid("remove_TemplatesChanged", Style__remove_TemplatesChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction("TryGetResource", Style__TryGetResource, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Predicate__object__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Style___ObjInit(Style* __this)
{
}

void Style__add_TemplatesChanged(Style* __this, ::uDelegate* value)
{
    __this->TemplatesChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TemplatesChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

bool Style__Apply(Style* __this, ::uObject* target)
{
    if (__this->_templates != NULL)
    {
        for (int i = ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Count(::uPtr< ::uObject*>(__this->_templates)); (i--) > 0; )
        {
            if (!::app::Uno::UX::ITemplate::Apply(::uPtr< ::uObject*>(::app::Uno::Collections::IList__Uno_UX_ITemplate::Item(::uPtr< ::uObject*>(__this->_templates), i)), target))
            {
                return false;
            }
        }
    }

    return true;
}

bool Style__get_HasResources(Style* __this)
{
    return (__this->_resources != NULL) && (::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(__this->_resources)) > 0);
}

::uObject* Style__get_Resources(Style* __this)
{
    if (__this->_resources == NULL)
    {
        __this->_resources = (::uObject*)::app::Uno::Collections::ObservableList__Uno_UX_Resource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_Resource__typeof(), (const void*)Style__OnResourceChanged, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_Resource__typeof(), (const void*)Style__OnResourceChanged, __this));
    }

    return __this->_resources;
}

::uObject* Style__get_Styles(Style* __this)
{
    ::uObject* ind_125 = __this->_styles;
    return (ind_125 != NULL) ? ind_125 : (__this->_styles = (::uObject*)::app::Uno::Collections::List__Fuse_Style__New_1(NULL));
}

::uObject* Style__get_Templates(Style* __this)
{
    ::uObject* ind_124 = __this->_templates;
    return (ind_124 != NULL) ? ind_124 : (__this->_templates = (::uObject*)::app::Uno::Collections::ObservableList__Uno_UX_ITemplate__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_ITemplate__typeof(), (const void*)Style__OnTemplateAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_ITemplate__typeof(), (const void*)Style__OnTemplateRemoved, __this)));
}

Style* Style__New_1(::uStatic* __this)
{
    Style* inst = (Style*)::uAllocObject(sizeof(Style), Style__typeof());
    inst->_ObjInit();
    return inst;
}

void Style__OnResourceChanged(Style* __this, ::app::Uno::UX::Resource* r)
{
    ::app::Fuse::Resources::ResourceRegistry__NotifyResourceChanged(NULL, ::uPtr< ::app::Uno::UX::Resource*>(r)->Key());
}

void Style__OnTemplateAdded(Style* __this, ::uObject* tpl)
{
    Style* s = ::uAs< Style*>(tpl, Style__typeof());

    if (s != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(__this->Styles()), s);
    }

    __this->OnTemplatesChanged();
}

void Style__OnTemplateRemoved(Style* __this, ::uObject* tpl)
{
    Style* s = ::uAs< Style*>(tpl, Style__typeof());

    if (s != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Style::Remove(::uPtr< ::uObject*>(__this->Styles()), s);
    }
}

void Style__OnTemplatesChanged(Style* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TemplatesChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TemplatesChanged)->InvokeVoid();
    }
}

void Style__remove_TemplatesChanged(Style* __this, ::uDelegate* value)
{
    __this->TemplatesChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TemplatesChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

bool Style__TryGetResource(Style* __this, ::uString* key, ::uDelegate* acceptor, ::uObject** resource)
{
    if (__this->HasResources())
    {
        ::uObject* resources = __this->Resources();

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(resources)); i++)
        {
            ::app::Uno::UX::Resource* r = ::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(resources), i);

            if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::UX::Resource*>(r)->Key(), key) && (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)acceptor, NULL) || ::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>(::uPtr< ::app::Uno::UX::Resource*>(r)->Value())))
            {
                *resource = ::uPtr< ::app::Uno::UX::Resource*>(r)->Value();
                return true;
            }
        }
    }

    if (__this->_styles != NULL)
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Style::GetEnumerator(::uPtr< ::uObject*>(__this->_styles)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            Style* s = ::app::Uno::Collections::IEnumerator__Fuse_Style::Current(::uPtr< ::uObject*>(enum_123));

            if (::uPtr< Style*>(s)->TryGetResource(key, acceptor, resource))
            {
                return true;
            }
        }
    }

    *resource = NULL;
    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int StyleProperty___propertyEnum;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_StyleProperty*> StyleProperty__All;

StyleProperty__uType* StyleProperty__typeof()
{
    static ::uStaticStrong<StyleProperty__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__uType*)::uAllocClassType(sizeof(StyleProperty__uType), "Fuse.StyleProperty", false, 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_propertyEnum", &StyleProperty___propertyEnum, 0, ::app::Uno::Int__typeof()),
        ::uNewField("All", &StyleProperty__All, 0, ::app::Uno::Collections::List__Fuse_StyleProperty__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("HasValueFor", type->__fp_HasValueFor, offsetof(StyleProperty__uType, __fp_HasValueFor), false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("ResetAll", StyleProperty__ResetAll, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetAllStyle", StyleProperty__ResetAllStyle, 0, true, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetFor", type->__fp_ResetFor, offsetof(StyleProperty__uType, __fp_ResetFor), false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ResetStyleFor", type->__fp_ResetStyleFor, offsetof(StyleProperty__uType, __fp_ResetStyleFor), false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void StyleProperty___ObjInit(StyleProperty* __this)
{
    if (StyleProperty__All == NULL)
    {
        StyleProperty__All = ::app::Uno::Collections::List__Fuse_StyleProperty__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(StyleProperty__All)->Add(__this);
}

void StyleProperty__ResetAll(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (StyleProperty__All != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(StyleProperty__All)->Count(); i++)
        {
            ::uPtr< StyleProperty*>(::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(StyleProperty__All)->Item(i))->ResetFor(n);
        }
    }
}

void StyleProperty__ResetAllStyle(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (StyleProperty__All != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(StyleProperty__All)->Count(); i++)
        {
            ::uPtr< StyleProperty*>(::uPtr< ::app::Uno::Collections::List__Fuse_StyleProperty*>(StyleProperty__All)->Item(i))->ResetStyleFor(n);
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SumDrawCount__uType* SumDrawCount__typeof()
{
    static ::uStaticStrong<SumDrawCount__uType*> type;
    if (type != NULL) return type;

    type = (SumDrawCount__uType*)::uAllocStructType(sizeof(SumDrawCount__uType), "Fuse.SumDrawCount", sizeof(SumDrawCount), 0, 0, 0);

    type->SetFields(3,
        ::uNewField("Draw", NULL, offsetof(SumDrawCount, Draw), ::app::Uno::Int__typeof()),
        ::uNewField("LocalDraw", NULL, offsetof(SumDrawCount, LocalDraw), ::app::Uno::Int__typeof()),
        ::uNewField("Pixels", NULL, offsetof(SumDrawCount, Pixels), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Theme__uType* Theme__typeof()
{
    static ::uStaticStrong<Theme__uType*> type;
    if (type != NULL) return type;

    type = (Theme__uType*)::uAllocClassType(sizeof(Theme__uType), "Fuse.Theme", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Style__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(Theme__uType, __interface_0));

    type->SetStrongRefs(
        "RootMediator", offsetof(Theme, RootMediator));

    type->SetFields(1,
        ::uNewField("RootMediator", NULL, offsetof(Theme, RootMediator), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void Theme___ObjInit_1(Theme* __this)
{
    ::app::Fuse::Style___ObjInit(__this);
}

void Theme___ObjInit_2(Theme* __this, ::app::Fuse::Node* rootMediator)
{
    ::app::Fuse::Style___ObjInit(__this);
    __this->RootMediator = rootMediator;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

double Time___delta;
double Time___elapsed;

Time__uType* Time__typeof()
{
    static ::uStaticStrong<Time__uType*> type;
    if (type != NULL) return type;

    type = (Time__uType*)::uAllocClassType(sizeof(Time__uType), "Fuse.Time");

    type->SetFields(2,
        ::uNewField("_delta", &Time___delta, 0, ::app::Uno::Double__typeof()),
        ::uNewField("_elapsed", &Time___elapsed, 0, ::app::Uno::Double__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_FrameInterval", Time__get_FrameInterval, 0, true, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_FrameIntervalFloat", Time__get_FrameIntervalFloat, 0, true, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_FrameTime", Time__get_FrameTime, 0, true, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Set", Time__Set, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

double Time__get_FrameInterval(::uStatic* __this)
{
    return Time___delta;
}

float Time__get_FrameIntervalFloat(::uStatic* __this)
{
    return (float)Time___delta;
}

double Time__get_FrameTime(::uStatic* __this)
{
    return Time___elapsed;
}

void Time__Set(::uStatic* __this, double elapsed, double delta)
{
    Time___elapsed = elapsed;
    Time___delta = delta;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Timer__uType* Timer__typeof()
{
    static ::uStaticStrong<Timer__uType*> type;
    if (type != NULL) return type;

    type = (Timer__uType*)::uAllocClassType(sizeof(Timer__uType), "Fuse.Timer", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(Timer, _callback));

    type->SetFields(5,
        ::uNewField("_callback", NULL, offsetof(Timer, _callback), ::app::Uno::Action__typeof()),
        ::uNewField("_interval", NULL, offsetof(Timer, _interval), ::app::Uno::Double__typeof()),
        ::uNewField("_once", NULL, offsetof(Timer, _once), ::app::Uno::Bool__typeof()),
        ::uNewField("_running", NULL, offsetof(Timer, _running), ::app::Uno::Bool__typeof()),
        ::uNewField("_startTime", NULL, offsetof(Timer, _startTime), ::app::Uno::Double__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("Start", Timer__Start, 0, false),
        ::uNewFunctionVoid("Stop", Timer__Stop, 0, false),
        ::uNewFunctionVoid("Update", Timer__Update, 0, false),
        ::uNewFunctionVoid("Wait", Timer__Wait, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Action__typeof()));

    ::uRegisterType(type);
    return type;
}

void Timer___ObjInit(Timer* __this, double interval, ::uDelegate* callback)
{
    __this->_callback = callback;
    __this->_startTime = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    __this->_interval = interval;
    __this->_once = true;
}

Timer* Timer__New_1(::uStatic* __this, double interval, ::uDelegate* callback)
{
    Timer* inst = (Timer*)::uAllocObject(sizeof(Timer), Timer__typeof());
    inst->_ObjInit(interval, callback);
    return inst;
}

void Timer__Start(Timer* __this)
{
    __this->_startTime = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Timer__Update, __this), 0);
    __this->_running = true;
}

void Timer__Stop(Timer* __this)
{
    __this->_running = false;
    ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Timer__Update, __this), 0);
}

void Timer__Update(Timer* __this)
{
    double now = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    double time = now - __this->_startTime;

    if (time > __this->_interval)
    {
        ::uPtr< ::uDelegate*>(__this->_callback)->InvokeVoid();

        if (__this->_once)
        {
            __this->Stop();
        }
        else
        {
            __this->_startTime = now;
        }
    }
}

void Timer__Wait(::uStatic* __this, double duration, ::uDelegate* callback)
{
    Timer* t = Timer__New_1(NULL, duration, callback);
    ::uPtr< Timer*>(t)->Start();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Transform__uType* Transform__typeof()
{
    static ::uStaticStrong<Transform__uType*> type;
    if (type != NULL) return type;

    type = (Transform__uType*)::uAllocClassType(sizeof(Transform__uType), "Fuse.Transform", false, 0, 1, 0);

    type->__fp_OnAdded = Transform__OnAdded;
    type->__fp_OnRemoved = Transform__OnRemoved;

    type->SetStrongRefs(
        "MatrixChanged", offsetof(Transform, MatrixChanged));

    type->SetFields(1,
        ::uNewField("AddedByStyle", NULL, offsetof(Transform, AddedByStyle), ::app::Uno::Bool__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("add_MatrixChanged", Transform__add_MatrixChanged, 0, false, ::app::Uno::Action__Fuse_Transform__typeof()),
        ::uNewFunctionVoid("Added", Transform__Added, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("AppendTo", type->__fp_AppendTo, offsetof(Transform__uType, __fp_AppendTo), false, ::app::Fuse::FastMatrix__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsFlat", type->__fp_get_IsFlat, offsetof(Transform__uType, __fp_get_IsFlat), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnAdded", type->__fp_OnAdded, offsetof(Transform__uType, __fp_OnAdded), false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnMatrixChanged", Transform__OnMatrixChanged, 0, false),
        ::uNewFunctionVoid("OnRemoved", type->__fp_OnRemoved, offsetof(Transform__uType, __fp_OnRemoved), false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("PrependTo", type->__fp_PrependTo, offsetof(Transform__uType, __fp_PrependTo), false, ::app::Fuse::FastMatrix__typeof()),
        ::uNewFunctionVoid("remove_MatrixChanged", Transform__remove_MatrixChanged, 0, false, ::app::Uno::Action__Fuse_Transform__typeof()),
        ::uNewFunctionVoid("Removed", Transform__Removed, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void Transform___ObjInit(Transform* __this)
{
}

void Transform__add_MatrixChanged(Transform* __this, ::uDelegate* value)
{
    __this->MatrixChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->MatrixChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Transform__typeof());
}

void Transform__Added(Transform* __this, ::app::Fuse::Node* n)
{
    __this->OnAdded(n);
}

void Transform__OnAdded(Transform* __this, ::app::Fuse::Node* n)
{
}

void Transform__OnMatrixChanged(Transform* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->MatrixChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->MatrixChanged)->InvokeVoid< Transform*>(__this);
    }
}

void Transform__OnRemoved(Transform* __this, ::app::Fuse::Node* n)
{
}

void Transform__remove_MatrixChanged(Transform* __this, ::uDelegate* value)
{
    __this->MatrixChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->MatrixChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Transform__typeof());
}

void Transform__Removed(Transform* __this, ::app::Fuse::Node* n)
{
    __this->OnRemoved(n);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Translation__uType* Translation__typeof()
{
    static ::uStaticStrong<Translation__uType*> type;
    if (type != NULL) return type;

    type = (Translation__uType*)::uAllocClassType(sizeof(Translation__uType), "Fuse.Translation", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Transform__typeof());
    type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Translation__AppendTo;
    type->__fp_get_IsFlat = (bool(*)(::app::Fuse::Transform*))Translation__get_IsFlat;
    type->__fp_OnAdded = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Translation__OnAdded;
    type->__fp_OnRemoved = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Translation__OnRemoved;
    type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Translation__PrependTo;

    type->SetStrongRefs(
        "_added", offsetof(Translation, _added),
        "_relativeNode", offsetof(Translation, _relativeNode),
        "_relativeTo", offsetof(Translation, _relativeTo),
        "_rootedSubscribed", offsetof(Translation, _rootedSubscribed),
        "_subscribed", offsetof(Translation, _subscribed));

    type->SetFields(8,
        ::uNewField("_added", NULL, offsetof(Translation, _added), ::app::Fuse::Node__typeof()),
        ::uNewField("_relativeNode", NULL, offsetof(Translation, _relativeNode), ::app::Fuse::Node__typeof()),
        ::uNewField("_relativeTo", NULL, offsetof(Translation, _relativeTo), ::app::Fuse::ITranslationMode__typeof()),
        ::uNewField("_rootedSubscribed", NULL, offsetof(Translation, _rootedSubscribed), ::app::Fuse::Node__typeof()),
        ::uNewField("_subscribed", NULL, offsetof(Translation, _subscribed), ::app::Fuse::IActualPlacement__typeof()),
        ::uNewField("_x", NULL, offsetof(Translation, _x), ::app::Uno::Float__typeof()),
        ::uNewField("_y", NULL, offsetof(Translation, _y), ::app::Uno::Float__typeof()),
        ::uNewField("_z", NULL, offsetof(Translation, _z), ::app::Uno::Float__typeof()));

    type->SetFunctions(18,
        ::uNewFunctionVoid("CheckSubscription", Translation__CheckSubscription, 0, false),
        ::uNewFunction("get_RelativeNode", Translation__get_RelativeNode, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_RelativeTo", Translation__get_RelativeTo, 0, false, ::app::Fuse::ITranslationMode__typeof()),
        ::uNewFunction("get_Vector", Translation__get_Vector, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_X", Translation__get_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_XY", Translation__get_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Y", Translation__get_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Z", Translation__get_Z, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Translation__New_1, 0, true, Translation__typeof()),
        ::uNewFunctionVoid("OnPlaced", Translation__OnPlaced, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnRooted", Translation__OnRooted, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_RelativeNode", Translation__set_RelativeNode, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_RelativeTo", Translation__set_RelativeTo, 0, false, ::app::Fuse::ITranslationMode__typeof()),
        ::uNewFunctionVoid("set_Vector", Translation__set_Vector, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("set_X", Translation__set_X, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_XY", Translation__set_XY, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Y", Translation__set_Y, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Z", Translation__set_Z, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Translation___ObjInit_1(Translation* __this)
{
    __this->_relativeTo = ::app::Fuse::TranslationModes__Local;
    ::app::Fuse::Transform___ObjInit(__this);
}

void Translation__AppendTo(Translation* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    ::app::Uno::Float3 v = ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Fuse::ITranslationMode::GetAbsVector(::uPtr< ::uObject*>(__this->RelativeTo()), __this), weight);
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendTranslation(v.X, v.Y, v.Z);
}

void Translation__CheckSubscription(Translation* __this)
{
    ::app::Fuse::Node* root = NULL;
    ::app::Fuse::Node* ind_123 = __this->RelativeNode();
    ::app::Fuse::Node* node = (ind_123 != NULL) ? ind_123 : __this->_added;

    if (__this->RelativeTo() == ::app::Fuse::TranslationModes__Size)
    {
    }
    else if ((__this->RelativeTo() == ::app::Fuse::TranslationModes__ParentSize) && (node != NULL))
    {
        root = node;
        node = ::uAs< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Node*>(node)->Parent(), ::app::Fuse::Node__typeof());
    }
    else
    {
        node = NULL;
    }

    ::uObject* act = ::uAs< ::uObject*>(node, ::app::Fuse::IActualPlacement__typeof());

    if (__this->_subscribed != act)
    {
        if (__this->_subscribed != NULL)
        {
            ::app::Fuse::IActualPlacement::remove_Placed(::uPtr< ::uObject*>(__this->_subscribed), ::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)Translation__OnPlaced, __this));
            __this->_subscribed = NULL;
        }

        if (act != NULL)
        {
            ::app::Fuse::IActualPlacement::add_Placed(::uPtr< ::uObject*>(act), ::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)Translation__OnPlaced, __this));
            __this->_subscribed = act;
        }
    }

    if (root != __this->_rootedSubscribed)
    {
        if (__this->_rootedSubscribed != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_rootedSubscribed)->remove_Rooted(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Translation__OnRooted, __this));
            __this->_rootedSubscribed = NULL;
        }

        if (root != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(root)->add_Rooted(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Translation__OnRooted, __this));
            __this->_rootedSubscribed = root;
        }
    }
}

bool Translation__get_IsFlat(Translation* __this)
{
    return ::app::Uno::Math__Abs_1(NULL, __this->Z()) < 1e-05f;
}

::app::Fuse::Node* Translation__get_RelativeNode(Translation* __this)
{
    ::app::Fuse::Node* ind_124 = __this->_relativeNode;
    return (ind_124 != NULL) ? ind_124 : __this->_added;
}

::uObject* Translation__get_RelativeTo(Translation* __this)
{
    return __this->_relativeTo;
}

::app::Uno::Float3 Translation__get_Vector(Translation* __this)
{
    return ::app::Uno::Float3__New_2(NULL, __this->X(), __this->Y(), __this->Z());
}

float Translation__get_X(Translation* __this)
{
    return __this->_x;
}

::app::Uno::Float2 Translation__get_XY(Translation* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->_x, __this->_y);
}

float Translation__get_Y(Translation* __this)
{
    return __this->_y;
}

float Translation__get_Z(Translation* __this)
{
    return __this->_z;
}

Translation* Translation__New_1(::uStatic* __this)
{
    Translation* inst = (Translation*)::uAllocObject(sizeof(Translation), Translation__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Translation__OnAdded(Translation* __this, ::app::Fuse::Node* n)
{
    __this->_added = n;
    __this->CheckSubscription();
}

void Translation__OnPlaced(Translation* __this, ::uObject* sender, ::uObject* args)
{
    __this->OnMatrixChanged();
}

void Translation__OnRemoved(Translation* __this, ::app::Fuse::Node* n)
{
    __this->_added = NULL;
    __this->CheckSubscription();
}

void Translation__OnRooted(Translation* __this, ::uObject* sender, ::uObject* args)
{
    __this->CheckSubscription();
    __this->OnMatrixChanged();
}

void Translation__PrependTo(Translation* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Uno::Float3 v = ::app::Fuse::ITranslationMode::GetAbsVector(::uPtr< ::uObject*>(__this->RelativeTo()), __this);
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(v.X, v.Y, v.Z);
}

void Translation__set_RelativeNode(Translation* __this, ::app::Fuse::Node* value)
{
    if (__this->_relativeNode == value)
    {
        return;
    }

    __this->_relativeNode = value;
    __this->CheckSubscription();
}

void Translation__set_RelativeTo(Translation* __this, ::uObject* value)
{
    if (__this->_relativeTo == value)
    {
        return;
    }

    __this->_relativeTo = value;
    __this->CheckSubscription();
}

void Translation__set_Vector(Translation* __this, ::app::Uno::Float3 value)
{
    if (((__this->_x != value.X) || (__this->_y != value.Y)) || (__this->_z != value.Z))
    {
        __this->_x = value.X;
        __this->_y = value.Y;
        __this->_z = value.Z;
        __this->OnMatrixChanged();
    }
}

void Translation__set_X(Translation* __this, float value)
{
    if (__this->_x != value)
    {
        __this->_x = value;
        __this->OnMatrixChanged();
    }
}

void Translation__set_XY(Translation* __this, ::app::Uno::Float2 value)
{
    if ((__this->_x != value.X) || (__this->_y != value.Y))
    {
        __this->_x = value.X;
        __this->_y = value.Y;
        __this->OnMatrixChanged();
    }
}

void Translation__set_Y(Translation* __this, float value)
{
    if (__this->_y != value)
    {
        __this->_y = value;
        __this->OnMatrixChanged();
    }
}

void Translation__set_Z(Translation* __this, float value)
{
    if (__this->_z != value)
    {
        __this->_z = value;
        __this->OnMatrixChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> TranslationModes__Local;
::uStaticStrong< ::uObject*> TranslationModes__ParentSize;
::uStaticStrong< ::uObject*> TranslationModes__Size;

TranslationModes__uType* TranslationModes__typeof()
{
    static ::uStaticStrong<TranslationModes__uType*> type;
    if (type != NULL) return type;

    type = (TranslationModes__uType*)::uAllocClassType(sizeof(TranslationModes__uType), "Fuse.TranslationModes");

    type->SetFields(3,
        ::uNewField("Local", &TranslationModes__Local, 0, ::app::Fuse::ITranslationMode__typeof()),
        ::uNewField("ParentSize", &TranslationModes__ParentSize, 0, ::app::Fuse::ITranslationMode__typeof()),
        ::uNewField("Size", &TranslationModes__Size, 0, ::app::Fuse::ITranslationMode__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("RelativeToSize", TranslationModes__RelativeToSize, 0, true, ::app::Uno::Float3__typeof(), ::app::Uno::Float3__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void TranslationModes___TypeInit(::uStatic* __this)
{
    TranslationModes__Local = (::uObject*)::app::Fuse::TranslationModes_LocalMode__New_1(NULL);
    TranslationModes__Size = (::uObject*)::app::Fuse::TranslationModes_SizeMode__New_1(NULL);
    TranslationModes__ParentSize = (::uObject*)::app::Fuse::TranslationModes_ParentSizeMode__New_1(NULL);
}

::app::Uno::Float3 TranslationModes__RelativeToSize(::uStatic* __this, ::app::Uno::Float3 v, ::app::Fuse::Node* node)
{
    ::uObject* isz = ::uAs< ::uObject*>(node, ::app::Fuse::IActualPlacement__typeof());

    if (isz == NULL)
    {
        return v;
    }

    return ::app::Uno::Float3__op_Multiply_2(NULL, v, ::app::Fuse::IActualPlacement::ActualSize(::uPtr< ::uObject*>(isz)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TranslationModes_LocalMode__uType* TranslationModes_LocalMode__typeof()
{
    static ::uStaticStrong<TranslationModes_LocalMode__uType*> type;
    if (type != NULL) return type;

    type = (TranslationModes_LocalMode__uType*)::uAllocClassType(sizeof(TranslationModes_LocalMode__uType), "Fuse.TranslationModes.LocalMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetAbsVector = (::app::Uno::Float3(*)(void*, ::app::Fuse::Translation*))TranslationModes_LocalMode__GetAbsVector;

    type->SetInterfaces(
        ::app::Fuse::ITranslationMode__typeof(), offsetof(TranslationModes_LocalMode__uType, __interface_0));

    return type;
}

void TranslationModes_LocalMode___ObjInit(TranslationModes_LocalMode* __this)
{
}

::app::Uno::Float3 TranslationModes_LocalMode__GetAbsVector(TranslationModes_LocalMode* __this, ::app::Fuse::Translation* t)
{
    return ::uPtr< ::app::Fuse::Translation*>(t)->Vector();
}

TranslationModes_LocalMode* TranslationModes_LocalMode__New_1(::uStatic* __this)
{
    TranslationModes_LocalMode* inst = (TranslationModes_LocalMode*)::uAllocObject(sizeof(TranslationModes_LocalMode), TranslationModes_LocalMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TranslationModes_ParentSizeMode__uType* TranslationModes_ParentSizeMode__typeof()
{
    static ::uStaticStrong<TranslationModes_ParentSizeMode__uType*> type;
    if (type != NULL) return type;

    type = (TranslationModes_ParentSizeMode__uType*)::uAllocClassType(sizeof(TranslationModes_ParentSizeMode__uType), "Fuse.TranslationModes.ParentSizeMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetAbsVector = (::app::Uno::Float3(*)(void*, ::app::Fuse::Translation*))TranslationModes_ParentSizeMode__GetAbsVector;

    type->SetInterfaces(
        ::app::Fuse::ITranslationMode__typeof(), offsetof(TranslationModes_ParentSizeMode__uType, __interface_0));

    return type;
}

void TranslationModes_ParentSizeMode___ObjInit(TranslationModes_ParentSizeMode* __this)
{
}

::app::Uno::Float3 TranslationModes_ParentSizeMode__GetAbsVector(TranslationModes_ParentSizeMode* __this, ::app::Fuse::Translation* t)
{
    return ::app::Fuse::TranslationModes__RelativeToSize(NULL, ::uPtr< ::app::Fuse::Translation*>(t)->Vector(), ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Translation*>(t)->RelativeNode())->Parent());
}

TranslationModes_ParentSizeMode* TranslationModes_ParentSizeMode__New_1(::uStatic* __this)
{
    TranslationModes_ParentSizeMode* inst = (TranslationModes_ParentSizeMode*)::uAllocObject(sizeof(TranslationModes_ParentSizeMode), TranslationModes_ParentSizeMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TranslationModes_SizeMode__uType* TranslationModes_SizeMode__typeof()
{
    static ::uStaticStrong<TranslationModes_SizeMode__uType*> type;
    if (type != NULL) return type;

    type = (TranslationModes_SizeMode__uType*)::uAllocClassType(sizeof(TranslationModes_SizeMode__uType), "Fuse.TranslationModes.SizeMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetAbsVector = (::app::Uno::Float3(*)(void*, ::app::Fuse::Translation*))TranslationModes_SizeMode__GetAbsVector;

    type->SetInterfaces(
        ::app::Fuse::ITranslationMode__typeof(), offsetof(TranslationModes_SizeMode__uType, __interface_0));

    return type;
}

void TranslationModes_SizeMode___ObjInit(TranslationModes_SizeMode* __this)
{
}

::app::Uno::Float3 TranslationModes_SizeMode__GetAbsVector(TranslationModes_SizeMode* __this, ::app::Fuse::Translation* t)
{
    return ::app::Fuse::TranslationModes__RelativeToSize(NULL, ::uPtr< ::app::Fuse::Translation*>(t)->Vector(), ::uPtr< ::app::Fuse::Translation*>(t)->RelativeNode());
}

TranslationModes_SizeMode* TranslationModes_SizeMode__New_1(::uStatic* __this)
{
    TranslationModes_SizeMode* inst = (TranslationModes_SizeMode*)::uAllocObject(sizeof(TranslationModes_SizeMode), TranslationModes_SizeMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnhandledExceptionArgs__uType* UnhandledExceptionArgs__typeof()
{
    static ::uStaticStrong<UnhandledExceptionArgs__uType*> type;
    if (type != NULL) return type;

    type = (UnhandledExceptionArgs__uType*)::uAllocClassType(sizeof(UnhandledExceptionArgs__uType), "Fuse.UnhandledExceptionArgs", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Exception", offsetof(UnhandledExceptionArgs, _Exception));

    type->SetFunctions(5,
        ::uNewFunction("get_Exception", UnhandledExceptionArgs__get_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_IsHandled", UnhandledExceptionArgs__get_IsHandled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", UnhandledExceptionArgs__New_2, 0, true, UnhandledExceptionArgs__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("set_Exception", UnhandledExceptionArgs__set_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("set_IsHandled", UnhandledExceptionArgs__set_IsHandled, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void UnhandledExceptionArgs___ObjInit_1(UnhandledExceptionArgs* __this, ::app::Uno::Exception* e)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Exception(e);
}

::app::Uno::Exception* UnhandledExceptionArgs__get_Exception(UnhandledExceptionArgs* __this)
{
    return __this->_Exception;
}

bool UnhandledExceptionArgs__get_IsHandled(UnhandledExceptionArgs* __this)
{
    return __this->_IsHandled;
}

UnhandledExceptionArgs* UnhandledExceptionArgs__New_2(::uStatic* __this, ::app::Uno::Exception* e)
{
    UnhandledExceptionArgs* inst = (UnhandledExceptionArgs*)::uAllocObject(sizeof(UnhandledExceptionArgs), UnhandledExceptionArgs__typeof());
    inst->_ObjInit_1(e);
    return inst;
}

void UnhandledExceptionArgs__set_Exception(UnhandledExceptionArgs* __this, ::app::Uno::Exception* value)
{
    __this->_Exception = value;
}

void UnhandledExceptionArgs__set_IsHandled(UnhandledExceptionArgs* __this, bool value)
{
    __this->_IsHandled = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* UnhandledExceptionHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.UnhandledExceptionHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::UnhandledExceptionArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UpdateDispatcher__uType* UpdateDispatcher__typeof()
{
    static ::uStaticStrong<UpdateDispatcher__uType*> type;
    if (type != NULL) return type;

    type = (UpdateDispatcher__uType*)::uAllocClassType(sizeof(UpdateDispatcher__uType), "Fuse.UpdateDispatcher", false, 1, 0, 0);

    type->__interface_0.__fp_Invoke = (void(*)(void*, ::uDelegate*))UpdateDispatcher__Invoke;

    type->SetInterfaces(
        ::app::Uno::Threading::IDispatcher__typeof(), offsetof(UpdateDispatcher__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_stage", NULL, offsetof(UpdateDispatcher, _stage), ::app::Fuse::UpdateStage__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Invoke", UpdateDispatcher__Invoke, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunction(".ctor", UpdateDispatcher__New_1, 0, true, UpdateDispatcher__typeof(), ::app::Fuse::UpdateStage__typeof()));

    ::uRegisterType(type);
    return type;
}

void UpdateDispatcher___ObjInit(UpdateDispatcher* __this, int stage)
{
    __this->_stage = stage;
}

void UpdateDispatcher__Invoke(UpdateDispatcher* __this, ::uDelegate* action)
{
    ::app::Fuse::UpdateManager__AddOnceAction(NULL, action, __this->_stage);
}

UpdateDispatcher* UpdateDispatcher__New_1(::uStatic* __this, int stage)
{
    UpdateDispatcher* inst = (UpdateDispatcher*)::uAllocObject(sizeof(UpdateDispatcher), UpdateDispatcher__typeof());
    inst->_ObjInit(stage);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UpdateListener__uType* UpdateListener__typeof()
{
    static ::uStaticStrong<UpdateListener__uType*> type;
    if (type != NULL) return type;

    type = (UpdateListener__uType*)::uAllocClassType(sizeof(UpdateListener__uType), "Fuse.UpdateListener", false, 0, 1, 0);

    type->SetStrongRefs(
        "action", offsetof(UpdateListener, action));

    type->SetFields(4,
        ::uNewField("action", NULL, offsetof(UpdateListener, action), ::app::Uno::Action__typeof()),
        ::uNewField("defer", NULL, offsetof(UpdateListener, defer), ::app::Uno::Bool__typeof()),
        ::uNewField("removed", NULL, offsetof(UpdateListener, removed), ::app::Uno::Bool__typeof()),
        ::uNewField("sequence", NULL, offsetof(UpdateListener, sequence), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Invoke", UpdateListener__Invoke, 0, false),
        ::uNewFunction(".ctor", UpdateListener__New_1, 0, true, UpdateListener__typeof()));

    ::uRegisterType(type);
    return type;
}

void UpdateListener___ObjInit(UpdateListener* __this)
{
}

void UpdateListener__Invoke(UpdateListener* __this)
{
    if (__this->removed)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->action, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->action)->InvokeVoid();
    }
}

UpdateListener* UpdateListener__New_1(::uStatic* __this)
{
    UpdateListener* inst = (UpdateListener*)::uAllocObject(sizeof(UpdateListener), UpdateListener__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__Uno_Action*> UpdateManager___deferredActions;
int UpdateManager___frameIndex;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_Stage*> UpdateManager___stages;
::uStaticStrong< ::app::Fuse::UpdateDispatcher*> UpdateManager__PrimaryDispatcher;

UpdateManager__uType* UpdateManager__typeof()
{
    static ::uStaticStrong<UpdateManager__uType*> type;
    if (type != NULL) return type;

    type = (UpdateManager__uType*)::uAllocClassType(sizeof(UpdateManager__uType), "Fuse.UpdateManager");

    type->SetFields(4,
        ::uNewField("_deferredActions", &UpdateManager___deferredActions, 0, ::app::Uno::Collections::List__Uno_Action__typeof()),
        ::uNewField("_frameIndex", &UpdateManager___frameIndex, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_stages", &UpdateManager___stages, 0, ::app::Uno::Collections::List__Fuse_Stage__typeof()),
        ::uNewField("PrimaryDispatcher", &UpdateManager__PrimaryDispatcher, 0, ::app::Fuse::UpdateDispatcher__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("AddAction", UpdateManager__AddAction, 0, true, ::app::Uno::Action__typeof(), ::app::Fuse::UpdateStage__typeof()),
        ::uNewFunctionVoid("AddDeferredAction", UpdateManager__AddDeferredAction, 0, true, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("AddOnceAction", UpdateManager__AddOnceAction, 0, true, ::app::Uno::Action__typeof(), ::app::Fuse::UpdateStage__typeof()),
        ::uNewFunction("get_FrameIndex", UpdateManager__get_FrameIndex, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("IncreaseFrameIndex", UpdateManager__IncreaseFrameIndex, 0, true),
        ::uNewFunctionVoid("PerformNextFrame", UpdateManager__PerformNextFrame, 0, true, ::app::Uno::Action__typeof(), ::app::Fuse::UpdateStage__typeof()),
        ::uNewFunctionVoid("RemoveAction", UpdateManager__RemoveAction, 0, true, ::app::Uno::Action__typeof(), ::app::Fuse::UpdateStage__typeof()),
        ::uNewFunction("RemoveFrom", UpdateManager__RemoveFrom, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Collections::List__Fuse_UpdateListener__typeof(), ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("RemoveOnceAction", UpdateManager__RemoveOnceAction, 0, true, ::app::Uno::Action__typeof(), ::app::Fuse::UpdateStage__typeof()),
        ::uNewFunctionVoid("Update", UpdateManager__Update, 0, true),
        ::uNewFunctionVoid("Update", UpdateManager__Update_1, 0, true, ::app::Fuse::Stage__typeof()));

    ::uRegisterType(type);
    return type;
}

void UpdateManager___TypeInit(::uStatic* __this)
{
    UpdateManager___stages = ::app::Uno::Collections::List__Fuse_Stage__New_1(NULL);
    UpdateManager___deferredActions = ::app::Uno::Collections::List__Uno_Action__New_1(NULL);
    UpdateManager__PrimaryDispatcher = ::app::Fuse::UpdateDispatcher__New_1(NULL, 0);

    for (int i = 0; i <= 4; ++i)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(UpdateManager___stages)->Add(::app::Fuse::Stage__New_1(NULL));
    }
}

void UpdateManager__AddAction(::uStatic* __this, ::uDelegate* pu, int stage)
{
    ::app::Fuse::UpdateListener* us = ::app::Fuse::UpdateListener__New_1(NULL);
    ::uPtr< ::app::Fuse::UpdateListener*>(us)->action = pu;
    ::app::Fuse::Stage* s = ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(UpdateManager___stages)->Item(stage);
    ::uPtr< ::app::Fuse::Stage*>(s)->Insert(::uPtr< ::app::Fuse::Stage*>(s)->Listeners, us);
}

void UpdateManager__AddDeferredAction(::uStatic* __this, ::uDelegate* pu)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(UpdateManager___deferredActions)->Add(pu);
}

void UpdateManager__AddOnceAction(::uStatic* __this, ::uDelegate* pu, int stage)
{
    ::app::Fuse::UpdateListener* us = ::app::Fuse::UpdateListener__New_1(NULL);
    ::uPtr< ::app::Fuse::UpdateListener*>(us)->action = pu;
    ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(UpdateManager___stages)->Item(stage))->OncesPending)->Add(us);
}

int UpdateManager__get_FrameIndex(::uStatic* __this)
{
    return UpdateManager___frameIndex;
}

void UpdateManager__IncreaseFrameIndex(::uStatic* __this)
{
    UpdateManager___frameIndex++;
}

void UpdateManager__PerformNextFrame(::uStatic* __this, ::uDelegate* pu, int stage)
{
    ::app::Fuse::UpdateListener* us = ::app::Fuse::UpdateListener__New_1(NULL);
    ::uPtr< ::app::Fuse::UpdateListener*>(us)->action = pu;
    us->defer = true;
    ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(UpdateManager___stages)->Item(stage))->OncesPending)->Add(us);
}

void UpdateManager__RemoveAction(::uStatic* __this, ::uDelegate* pu, int stage)
{
    ::app::Fuse::Stage* s = ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(UpdateManager___stages)->Item(stage);

    if (!UpdateManager__RemoveFrom(NULL, ::uPtr< ::app::Fuse::Stage*>(s)->Listeners, pu))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("no Action found to remove")));
    }

    ::uPtr< ::app::Fuse::Stage*>(s)->HasListenersRemoved = true;
}

bool UpdateManager__RemoveFrom(::uStatic* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* list, ::uDelegate* action)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Count(); ++i)
    {
        if (::app::Uno::Object__Equals_1(NULL, (::uObject*)action, (::uObject*)::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Item(i))->action) && !::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Item(i))->removed)
        {
            ::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Item(i))->removed = true;
            return true;
        }
    }

    return false;
}

void UpdateManager__RemoveOnceAction(::uStatic* __this, ::uDelegate* pu, int stage)
{
    ::app::Fuse::Stage* s = ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(UpdateManager___stages)->Item(stage);

    if (UpdateManager__RemoveFrom(NULL, ::uPtr< ::app::Fuse::Stage*>(s)->OncesPending, pu))
    {
        return;
    }

    if (!UpdateManager__RemoveFrom(NULL, ::uPtr< ::app::Fuse::Stage*>(s)->Onces, pu))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("no OnceAction found to remove")));
    }
}

void UpdateManager__Update(::uStatic* __this)
{
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(UpdateManager___stages)->Count();

    for (int i = 0; i < c; ++i)
    {
        UpdateManager__Update_1(NULL, ::uPtr< ::app::Uno::Collections::List__Fuse_Stage*>(UpdateManager___stages)->Item(i));
    }
}

void UpdateManager__Update_1(::uStatic* __this, ::app::Fuse::Stage* stage)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(stage)->OncesPending)->Count() > 0)
    {
        ::app::Uno::Collections::List__Fuse_UpdateListener* t = ::uPtr< ::app::Fuse::Stage*>(stage)->Onces;
        stage->Onces = stage->OncesPending;
        stage->OncesPending = t;
        ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(stage->OncesPending)->Clear();
        int c = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(stage->Onces)->Count();

        for (int i = 0; i < c; ++i)
        {
            ::app::Fuse::UpdateListener* ul = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(stage)->Onces)->Item(i);

            if (::uPtr< ::app::Fuse::UpdateListener*>(ul)->defer)
            {
                ::uPtr< ::app::Fuse::UpdateListener*>(ul)->defer = false;
                ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(stage)->OncesPending)->Add(ul);
            }
            else
            {
                ::uPtr< ::app::Fuse::UpdateListener*>(ul)->Invoke();
            }
        }
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(stage)->Listeners)->Count(); ++i)
    {
        ::app::Fuse::UpdateListener* ul = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(stage)->Listeners)->Item(i);
        ::uPtr< ::app::Fuse::UpdateListener*>(ul)->Invoke();
    }

    if (::uPtr< ::app::Fuse::Stage*>(stage)->HasListenersRemoved)
    {
        for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(stage)->Listeners)->Count() - 1; i >= 0; --i)
        {
            if (::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(stage)->Listeners)->Item(i))->removed)
            {
                ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(::uPtr< ::app::Fuse::Stage*>(stage)->Listeners)->RemoveAt(i);
            }
        }
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(UpdateManager___deferredActions)->Count(); ++i)
    {
        ::uPtr< ::uDelegate*>(::uPtr< ::app::Uno::Collections::List__Uno_Action*>(UpdateManager___deferredActions)->Item(i))->InvokeVoid();
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(UpdateManager___deferredActions)->Clear();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UpdateStage__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.UpdateStage", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Primary", 0LL,
        "Mixers", 1LL,
        "Layout", 2LL,
        "PostLayoutMixers", 3LL,
        "Draw", 4LL);

    ::uRegisterType(type);
    return type;
}

}}
