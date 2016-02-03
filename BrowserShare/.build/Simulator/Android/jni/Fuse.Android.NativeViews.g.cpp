// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.graphics.Color.h>
#include <Android.android.graphics.SurfaceTexture.h>
#include <Android.android.view.Surface.h>
#include <Android.android.view.SurfaceHolder.h>
#include <Android.android.view.SurfaceHolderDLRCallback.h>
#include <Android.android.view.SurfaceView.h>
#include <Android.android.view.TextureView.h>
#include <Android.android.view.TextureViewDLRSurfaceTextureListener.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.widget.FrameLayout.h>
#include <Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <Android.android.widget.RelativeLayout.h>
#include <Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_view_SurfaceHolder.h>
#include <Android.java.lang.Object.h>
#include <Fuse.Android.Controls.Element.h>
#include <Fuse.Android.InputDispatch.h>
#include <Fuse.Android.NativeViews.ContentControl.h>
#include <Fuse.Android.NativeViews.GLSurfaceTextureListener.h>
#include <Fuse.Android.NativeViews.GraphicsView.h>
#include <Fuse.Android.NativeViews.HorizontalScrollView.h>
#include <Fuse.Android.NativeViews.LeafNativeView.h>
#include <Fuse.Android.NativeViews.NativeView.h>
#include <Fuse.Android.NativeViews.NativeViewHost.h>
#include <Fuse.Android.NativeViews.Panel.h>
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Android.NativeViews.ScrollView.h>
#include <Fuse.Android.NativeViews.SurfaceCallback.h>
#include <Fuse.Android.NativeViews.SurfaceView.h>
#include <Fuse.Android.NativeViews.TextureView.h>
#include <Fuse.Android.NativeViews.VerticalScrollView.h>
#include <Fuse.Android.RootView.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.ScrollPropertyChangedArgs.h>
#include <Fuse.Controls.ScrollPropertyChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RootViewport.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Quaternion.h>
#include <Uno.Recti.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.Vector.h>
//~
JNFUN(jboolean,Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener__onSurfaceTextureDestroyed22644,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::graphics::SurfaceTexture*,((::g::Android::android::graphics::SurfaceTexture*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::graphics::SurfaceTexture_typeof(), false, true, true)));
    JTRY
    return (jboolean)::g::Android::android::view::TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed(uInterface(uPtr, ::g::Android::android::view::TextureViewDLRSurfaceTextureListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener__onSurfaceTextureAvailable22642,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::android::graphics::SurfaceTexture*,((::g::Android::android::graphics::SurfaceTexture*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::graphics::SurfaceTexture_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::view::TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable(uInterface(uPtr, ::g::Android::android::view::TextureViewDLRSurfaceTextureListener_typeof()), tmparg3, ((int)arg1), ((int)arg2));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener__onSurfaceTextureSizeChanged22643,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::android::graphics::SurfaceTexture*,((::g::Android::android::graphics::SurfaceTexture*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::graphics::SurfaceTexture_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::view::TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged(uInterface(uPtr, ::g::Android::android::view::TextureViewDLRSurfaceTextureListener_typeof()), tmparg3, ((int)arg1), ((int)arg2));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener__onSurfaceTextureUpdated22645,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::graphics::SurfaceTexture*,((::g::Android::android::graphics::SurfaceTexture*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::graphics::SurfaceTexture_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::view::TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated(uInterface(uPtr, ::g::Android::android::view::TextureViewDLRSurfaceTextureListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_HorizontalScrollView__onScrollChanged22996,jlong ujPtr, jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,::g::Android::android::view::View*);
    JTRY
    uPtr->onScrollChanged(((int)arg0), ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_SurfaceCallback__surfaceChanged22607,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg4,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_android_view_SurfaceHolder_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::view::SurfaceHolderDLRCallback::surfaceChanged(uInterface(uPtr, ::g::Android::android::view::SurfaceHolderDLRCallback_typeof()), tmparg4, ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_SurfaceCallback__surfaceCreated22606,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_android_view_SurfaceHolder_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::view::SurfaceHolderDLRCallback::surfaceCreated(uInterface(uPtr, ::g::Android::android::view::SurfaceHolderDLRCallback_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_SurfaceCallback__surfaceDestroyed22608,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_android_view_SurfaceHolder_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::view::SurfaceHolderDLRCallback::surfaceDestroyed(uInterface(uPtr, ::g::Android::android::view::SurfaceHolderDLRCallback_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_SurfaceCallback__surfaceRedrawNeeded22609,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_android_view_SurfaceHolder_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::view::SurfaceHolderDLRCallback2::surfaceRedrawNeeded(uInterface(uPtr, ::g::Android::android::view::SurfaceHolderDLRCallback2_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_NativeViews_VerticalScrollView__onScrollChanged22996,jlong ujPtr, jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,::g::Android::android::view::View*);
    JTRY
    uPtr->onScrollChanged(((int)arg0), ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
static uString* STRINGS[9];
static uType* TYPES[42];

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(22)
// ---------------------------------------------------------------------

// internal sealed extern class ContentControl :22
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* ContentControl_typeof()
{
    static uSStrong< ::g::Fuse::Android::NativeViews::ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(ContentControl);
    options.TypeSize = sizeof(::g::Fuse::Android::NativeViews::ParentNativeView_type);
    type = (::g::Fuse::Android::NativeViews::ParentNativeView_type*)uClassType::New("Fuse.Android.NativeViews.ContentControl", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ContentControl_typeof()));
    type->fp_ctor_ = (void*)ContentControl__New1_fn;
    type->fp_ChildRooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))ContentControl__ChildRooted_fn;
    type->fp_ChildUnrooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))ContentControl__ChildUnrooted_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Android::android::view::View**))ContentControl__CreateInternal_fn;
    type->fp_NotifyNewSize = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))ContentControl__NotifyNewSize_fn;
    ::TYPES[0] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    ::TYPES[2] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[3] = ::g::Android::android::view::View_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    type->SetFields(11,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::NativeViews::ContentControl, _relativeLayout), 0);
    return type;
}

// public generated ContentControl() :22
void ContentControl__ctor_3_fn(ContentControl* __this)
{
    __this->ctor_3();
}

// protected override sealed void ChildRooted(Fuse.Android.NativeViews.NativeView child) :33
void ContentControl__ChildRooted_fn(ContentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    __this->NotifyNewSize(child);
    uPtr(__this->_relativeLayout)->addView2(uPtr(child)->Handle(), 0);
}

// protected override sealed void ChildUnrooted(Fuse.Android.NativeViews.NativeView child) :40
void ContentControl__ChildUnrooted_fn(ContentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    uPtr(__this->_relativeLayout)->removeView(uPtr(child)->Handle());
}

// internal override sealed Android.android.view.View CreateInternal() :26
void ContentControl__CreateInternal_fn(ContentControl* __this, ::g::Android::android::view::View** __retval)
{
    __this->_relativeLayout = ::g::Android::android::widget::RelativeLayout::New9(::g::Android::android::app::Activity::GetAppActivity());
    uPtr(__this->_relativeLayout)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(-1, -1));
    return *__retval = __this->_relativeLayout, void();
}

// public generated ContentControl New() :22
void ContentControl__New1_fn(ContentControl** __retval)
{
    *__retval = ContentControl::New1();
}

// internal override sealed void NotifyNewSize(Fuse.Android.NativeViews.NativeView child) :45
void ContentControl__NotifyNewSize_fn(ContentControl* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    if ((__this->Node() == NULL) || !uPtr(__this->Node())->IsLocalRooted())
        return;

    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(__this->Node())->Viewport()), ::TYPES[6/*Fuse.IViewport*/]));
    int w = (int)(uPtr(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::g::Android::android::widget::RelativeLayoutDLRLayoutParams* layoutParams = ::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(w, h);
    uPtr(child->Handle())->setLayoutParams(layoutParams);
    uPtr(child->Handle())->invalidate();
}

// public generated ContentControl() [instance] :22
void ContentControl::ctor_3()
{
    ctor_2();
}

// public generated ContentControl New() [static] :22
ContentControl* ContentControl::New1()
{
    ContentControl* obj1 = (ContentControl*)uNew(ContentControl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(995)
// ----------------------------------------------------------------------

// internal sealed extern class GLSurfaceTextureListener :995
// {
GLSurfaceTextureListener_type* GLSurfaceTextureListener_typeof()
{
    static uSStrong<GLSurfaceTextureListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(GLSurfaceTextureListener);
    options.TypeSize = sizeof(GLSurfaceTextureListener_type);
    type = (GLSurfaceTextureListener_type*)uClassType::New("Fuse.Android.NativeViews.GLSurfaceTextureListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onSurfaceTextureAvailable = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, int*, int*))GLSurfaceTextureListener__onSurfaceTextureAvailable_fn;
    type->interface2.fp_onSurfaceTextureSizeChanged = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, int*, int*))GLSurfaceTextureListener__onSurfaceTextureSizeChanged_fn;
    type->interface2.fp_onSurfaceTextureDestroyed = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*, bool*))GLSurfaceTextureListener__onSurfaceTextureDestroyed_fn;
    type->interface2.fp_onSurfaceTextureUpdated = (void(*)(uObject*, ::g::Android::android::graphics::SurfaceTexture*))GLSurfaceTextureListener__onSurfaceTextureUpdated_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[0] = uString::Const("com.Bindings.Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[11] = ::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(GLSurfaceTextureListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(GLSurfaceTextureListener_type, interface1),
        ::g::Android::android::view::TextureViewDLRSurfaceTextureListener_typeof(), offsetof(GLSurfaceTextureListener_type, interface2));
    type->SetFields(5,
        ::g::Android::android::graphics::SurfaceTexture_typeof(), offsetof(::g::Fuse::Android::NativeViews::GLSurfaceTextureListener, _texture), 0,
        ::g::Fuse::Android::NativeViews::TextureView_typeof(), offsetof(::g::Fuse::Android::NativeViews::GLSurfaceTextureListener, _tv), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::NativeViews::GLSurfaceTextureListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public GLSurfaceTextureListener(Fuse.Android.NativeViews.TextureView tv) :1002
void GLSurfaceTextureListener__ctor_4_fn(GLSurfaceTextureListener* __this, ::g::Fuse::Android::NativeViews::TextureView* tv)
{
    __this->ctor_4(tv);
}

// public GLSurfaceTextureListener New(Fuse.Android.NativeViews.TextureView tv) :1002
void GLSurfaceTextureListener__New5_fn(::g::Fuse::Android::NativeViews::TextureView* tv, GLSurfaceTextureListener** __retval)
{
    *__retval = GLSurfaceTextureListener::New5(tv);
}

// public void onSurfaceTextureAvailable(Android.android.graphics.SurfaceTexture texture, int width, int height) :1008
void GLSurfaceTextureListener__onSurfaceTextureAvailable_fn(GLSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* texture, int* width, int* height)
{
    __this->onSurfaceTextureAvailable(texture, *width, *height);
}

// public bool onSurfaceTextureDestroyed(Android.android.graphics.SurfaceTexture surface) :1016
void GLSurfaceTextureListener__onSurfaceTextureDestroyed_fn(GLSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* surface, bool* __retval)
{
    *__retval = __this->onSurfaceTextureDestroyed(surface);
}

// public void onSurfaceTextureSizeChanged(Android.android.graphics.SurfaceTexture texture, int width, int height) :1023
void GLSurfaceTextureListener__onSurfaceTextureSizeChanged_fn(GLSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* texture, int* width, int* height)
{
    __this->onSurfaceTextureSizeChanged(texture, *width, *height);
}

// public void onSurfaceTextureUpdated(Android.android.graphics.SurfaceTexture surface) :1028
void GLSurfaceTextureListener__onSurfaceTextureUpdated_fn(GLSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* surface)
{
    __this->onSurfaceTextureUpdated(surface);
}

jclass GLSurfaceTextureListener::_javaClass2_;

// public GLSurfaceTextureListener(Fuse.Android.NativeViews.TextureView tv) [instance] :1002
void GLSurfaceTextureListener::ctor_4(::g::Fuse::Android::NativeViews::TextureView* tv)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[0/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(GLSurfaceTextureListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        GLSurfaceTextureListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(4);
        REG_MTD(0,"__n_onSurfaceTextureAvailable","(JLandroid/graphics/SurfaceTexture;IIJJJ)V",Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener__onSurfaceTextureAvailable22642);
        REG_MTD(1,"__n_onSurfaceTextureSizeChanged","(JLandroid/graphics/SurfaceTexture;IIJJJ)V",Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener__onSurfaceTextureSizeChanged22643);
        REG_MTD(2,"__n_onSurfaceTextureDestroyed","(JLandroid/graphics/SurfaceTexture;J)Z",Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener__onSurfaceTextureDestroyed22644);
        REG_MTD(3,"__n_onSurfaceTextureUpdated","(JLandroid/graphics/SurfaceTexture;J)V",Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener__onSurfaceTextureUpdated22645);
        COMMIT_REG_MTD(GLSurfaceTextureListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _tv = tv;
}

// public void onSurfaceTextureAvailable(Android.android.graphics.SurfaceTexture texture, int width, int height) [instance] :1008
void GLSurfaceTextureListener::onSurfaceTextureAvailable(::g::Android::android::graphics::SurfaceTexture* texture, int width, int height)
{
    _texture = texture;
    uPtr(_tv)->OnSurfaceCreated(::g::Android::android::view::Surface::New5(texture));
    uPtr((::g::Fuse::Controls::GraphicsView*)uPtr(_tv)->Control())->InvalidateVisual();
}

// public bool onSurfaceTextureDestroyed(Android.android.graphics.SurfaceTexture surface) [instance] :1016
bool GLSurfaceTextureListener::onSurfaceTextureDestroyed(::g::Android::android::graphics::SurfaceTexture* surface)
{
    uPtr(_tv)->OnSurfaceDestroyed();
    _texture = NULL;
    return false;
}

// public void onSurfaceTextureSizeChanged(Android.android.graphics.SurfaceTexture texture, int width, int height) [instance] :1023
void GLSurfaceTextureListener::onSurfaceTextureSizeChanged(::g::Android::android::graphics::SurfaceTexture* texture, int width, int height)
{
    uPtr((::g::Fuse::Controls::GraphicsView*)uPtr(_tv)->Control())->InvalidateVisual();
}

// public void onSurfaceTextureUpdated(Android.android.graphics.SurfaceTexture surface) [instance] :1028
void GLSurfaceTextureListener::onSurfaceTextureUpdated(::g::Android::android::graphics::SurfaceTexture* surface)
{
}

// public GLSurfaceTextureListener New(Fuse.Android.NativeViews.TextureView tv) [static] :1002
GLSurfaceTextureListener* GLSurfaceTextureListener::New5(::g::Fuse::Android::NativeViews::TextureView* tv)
{
    GLSurfaceTextureListener* obj1 = (GLSurfaceTextureListener*)uNew(GLSurfaceTextureListener_typeof());
    obj1->ctor_4(tv);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(75)
// ---------------------------------------------------------------------

// public abstract extern class GraphicsView :75
// {
GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Android.NativeViews.GraphicsView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_Attach = (void(*)(::g::Fuse::Android::NativeViews::ParentNativeView*))GraphicsView__Attach_fn;
    type->fp_ChildRooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))GraphicsView__ChildRooted_fn;
    type->fp_ChildUnrooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))GraphicsView__ChildUnrooted_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Android::android::view::View**))GraphicsView__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::NativeViews::ParentNativeView*))GraphicsView__Detach_fn;
    type->fp_NotifyNewSize = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))GraphicsView__NotifyNewSize_fn;
    ::TYPES[12] = ::g::Uno::IntPtr_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[11] = ::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    ::TYPES[13] = ::g::Fuse::Controls::GraphicsView_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[0] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    ::TYPES[2] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[3] = ::g::Android::android::view::View_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[16] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetFields(11,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::Android::NativeViews::GraphicsView, _dc), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Android::NativeViews::GraphicsView, _eglSurface), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Android::NativeViews::GraphicsView, _nativeWindow), 0,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::NativeViews::GraphicsView, _relativeLayout), 0,
        ::g::Android::android::view::Surface_typeof(), offsetof(::g::Fuse::Android::NativeViews::GraphicsView, _surface), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Android::NativeViews::GraphicsView, rotationHackRedrawCount), 0);
    return type;
}

// protected generated GraphicsView() :75
void GraphicsView__ctor_3_fn(GraphicsView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :79
void GraphicsView__Attach_fn(GraphicsView* __this)
{
    __this->_dc = ::g::Fuse::DrawContext::New1((uObject*)((::g::Fuse::Controls::GraphicsView*)__this->Control()));
    uPtr((::g::Fuse::Controls::GraphicsView*)__this->Control())->add_Redraw(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)GraphicsView__DrawFrame_fn, __this));
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_FrameChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)GraphicsView__OnResized_fn, __this));
    ::g::Fuse::Android::NativeViews::ParentNativeView__Attach_fn(__this);
}

// protected override sealed void ChildRooted(Fuse.Android.NativeViews.NativeView child) :109
void GraphicsView__ChildRooted_fn(GraphicsView* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    __this->NotifyNewSize(child);
    uPtr(__this->_relativeLayout)->addView2(uPtr(child)->Handle(), 0);
    uPtr(child->Handle())->bringToFront();
}

// protected override sealed void ChildUnrooted(Fuse.Android.NativeViews.NativeView child) :117
void GraphicsView__ChildUnrooted_fn(GraphicsView* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    uPtr(__this->_relativeLayout)->removeView(uPtr(child)->Handle());
}

// internal override sealed Android.android.view.View CreateInternal() :97
void GraphicsView__CreateInternal_fn(GraphicsView* __this, ::g::Android::android::view::View** __retval)
{
    __this->_relativeLayout = ::g::Android::android::widget::RelativeLayout::New9(::g::Android::android::app::Activity::GetAppActivity());
    uPtr(__this->_relativeLayout)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(-1, -1));
    ::g::Android::android::view::View* graphicsView = __this->CreateGraphicsView();
    uPtr(graphicsView)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(-1, -1));
    uPtr(__this->_relativeLayout)->addView2(graphicsView, 0);
    return *__retval = __this->_relativeLayout, void();
}

// protected override sealed void Detach() :87
void GraphicsView__Detach_fn(GraphicsView* __this)
{
    ::g::Fuse::Android::NativeViews::ParentNativeView__Detach_fn(__this);
    uPtr((::g::Fuse::Controls::GraphicsView*)__this->Control())->remove_Redraw(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)GraphicsView__DrawFrame_fn, __this));
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->remove_FrameChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)GraphicsView__OnResized_fn, __this));
    __this->_dc = NULL;
}

// private void DrawFrame(object sender, Uno.EventArgs args) :149
void GraphicsView__DrawFrame_fn(GraphicsView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->DrawFrame(sender, args);
}

// internal static Fuse.Android.NativeViews.GraphicsView Find(Fuse.Node node) :220
void GraphicsView__Find_fn(::g::Fuse::Node* node, GraphicsView** __retval)
{
    *__retval = GraphicsView::Find(node);
}

// internal override sealed void NotifyNewSize(Fuse.Android.NativeViews.NativeView child) :122
void GraphicsView__NotifyNewSize_fn(GraphicsView* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    if ((__this->Node() == NULL) || !uPtr(__this->Node())->IsLocalRooted())
        return;

    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(__this->Node())->Viewport()), ::TYPES[6/*Fuse.IViewport*/]));
    int w = (int)(uPtr(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::g::Android::android::widget::RelativeLayoutDLRLayoutParams* layoutParams = ::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(w, h);
    uPtr(child->Handle())->setLayoutParams(layoutParams);
    uPtr(child->Handle())->invalidate();
}

// private void OnResized(object sender, Uno.EventArgs args) :143
void GraphicsView__OnResized_fn(GraphicsView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnResized(sender, args);
}

// internal void OnSurfaceCreated(Android.android.view.Surface s) :203
void GraphicsView__OnSurfaceCreated_fn(GraphicsView* __this, ::g::Android::android::view::Surface* s)
{
    __this->OnSurfaceCreated(s);
}

// internal void OnSurfaceDestroyed() :212
void GraphicsView__OnSurfaceDestroyed_fn(GraphicsView* __this)
{
    __this->OnSurfaceDestroyed();
}

// protected generated GraphicsView() [instance] :75
void GraphicsView::ctor_3()
{
    _eglSurface = ::g::Uno::IntPtr::Zero();
    _nativeWindow = ::g::Uno::IntPtr::Zero();
    ctor_2();
}

// private void DrawFrame(object sender, Uno.EventArgs args) [instance] :149
void GraphicsView::DrawFrame(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::IntPtr::op_Equality(_eglSurface, ::g::Uno::IntPtr::Zero()))
        return;

    GLHelper::MakeCurrent(GLHelper::GetSurfaceContext(), (EGLSurface)_eglSurface);
    int width = (int)(uPtr((::g::Fuse::Controls::GraphicsView*)Control())->ActualSize().X * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::GraphicsView*)Control())->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
    int height = (int)(uPtr((::g::Fuse::Controls::GraphicsView*)Control())->ActualSize().Y * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::GraphicsView*)Control())->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
    ::g::OpenGL::GL::Viewport(0, 0, width, height);
    uPtr(_dc)->CaptureRootbuffer();
    uPtr(_dc)->PushViewport((uObject*)((::g::Fuse::Controls::GraphicsView*)Control()));
    uPtr(_dc)->PushScissor(::g::Uno::Recti__New1(0, 0, width, height));
    uPtr(_dc)->Clear(uPtr((::g::Fuse::Controls::GraphicsView*)Control())->Background1(), 1.0f);
    double startTime;
    uPtr((::g::Fuse::Controls::GraphicsView*)Control())->Draw(_dc);
    uPtr(_dc)->PopScissor();
    uPtr(_dc)->PopViewport();
    double swapBuffersStart;
    uPtr(_dc)->ReleaseRootbuffer();
    GLHelper::SwapBuffers(_eglSurface);

    if (rotationHackRedrawCount > 0)
    {
        rotationHackRedrawCount = (rotationHackRedrawCount - 1);
        uPtr((::g::Fuse::Controls::GraphicsView*)Control())->InvalidateVisual();
    }
}

// private void OnResized(object sender, Uno.EventArgs args) [instance] :143
void GraphicsView::OnResized(uObject* sender, ::g::Uno::EventArgs* args)
{
    rotationHackRedrawCount = 5;
}

// internal void OnSurfaceCreated(Android.android.view.Surface s) [instance] :203
void GraphicsView::OnSurfaceCreated(::g::Android::android::view::Surface* s)
{
    _surface = s;
    _nativeWindow = GLHelper::GetANativeWindowFromSurface(uPtr(s)->_javaObject);
    EGLSurface tmpS;
    GLHelper::CreateNewSurfaceAndMakeCurrent((ANativeWindow*)_nativeWindow, tmpS);
    _eglSurface = tmpS;
}

// internal void OnSurfaceDestroyed() [instance] :212
void GraphicsView::OnSurfaceDestroyed()
{
    GLHelper::SwapBackToBackgroundSurface((EGLSurface)_eglSurface);
    _eglSurface = ::g::Uno::IntPtr::Zero();
    ANativeWindow_release((ANativeWindow*)_nativeWindow);
    _surface = NULL;
}

// internal static Fuse.Android.NativeViews.GraphicsView Find(Fuse.Node node) [static] :220
GraphicsView* GraphicsView::Find(::g::Fuse::Node* node)
{
    GraphicsView* ind1;
    return (node != NULL) ? (ind1 = uAs<GraphicsView*>(::g::Fuse::Android::NativeViews::NativeView::GetFrom(node), GraphicsView_typeof()), (ind1 != NULL) ? ind1 : (GraphicsView*)GraphicsView::Find(uPtr(node)->Parent())) : NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(908)
// ----------------------------------------------------------------------

// internal sealed extern class HorizontalScrollView :908
// {
::g::Android::android::view::ViewGroup_type* HorizontalScrollView_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(HorizontalScrollView);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Fuse.Android.NativeViews.HorizontalScrollView", options);
    type->SetBase(::g::Android::android::widget::HorizontalScrollView_typeof());
    type->fp_onScrollChanged = (void(*)(::g::Android::android::view::View*, int*, int*, int*, int*))HorizontalScrollView__onScrollChanged_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))::g::Android::android::widget::HorizontalScrollView__requestChildFocus_fn;
    type->interface2.fp_recomputeViewAttributes = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__recomputeViewAttributes_fn;
    type->interface2.fp_clearChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__clearChildFocus_fn;
    type->interface2.fp_getChildVisibleRect = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, ::g::Android::android::graphics::Point*, bool*))::g::Android::android::view::ViewGroup__getChildVisibleRect_fn;
    type->interface2.fp_focusSearch = (void(*)(uObject*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::View**))::g::Android::android::view::ViewGroup__focusSearch1_fn;
    type->interface2.fp_bringChildToFront = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__bringChildToFront_fn;
    type->interface2.fp_focusableViewAvailable = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__focusableViewAvailable_fn;
    type->interface2.fp_showContextMenuForChild = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))::g::Android::android::view::ViewGroup__showContextMenuForChild_fn;
    type->interface2.fp_createContextMenu = (void(*)(uObject*, uObject*))::g::Android::android::view::View__createContextMenu_fn;
    type->interface2.fp_startActionModeForChild = (void(*)(uObject*, ::g::Android::android::view::View*, uObject*, ::g::Android::android::view::ActionMode**))::g::Android::android::view::ViewGroup__startActionModeForChild_fn;
    type->interface2.fp_childDrawableStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__childDrawableStateChanged_fn;
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))::g::Android::android::widget::HorizontalScrollView__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))::g::Android::android::widget::HorizontalScrollView__requestChildRectangleOnScreen_fn;
    type->interface2.fp_requestSendAccessibilityEvent = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*, bool*))::g::Android::android::view::ViewGroup__requestSendAccessibilityEvent_fn;
    type->interface2.fp_childHasTransientStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))::g::Android::android::view::ViewGroup__childHasTransientStateChanged_fn;
    type->interface2.fp_requestFitSystemWindows = (void(*)(uObject*))::g::Android::android::view::View__requestFitSystemWindows_fn;
    type->interface2.fp_getParentForAccessibility = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParentForAccessibility_fn;
    type->interface2.fp_notifySubtreeAccessibilityStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*, int*))::g::Android::android::view::ViewGroup__notifySubtreeAccessibilityStateChanged_fn;
    type->interface2.fp_canResolveLayoutDirection = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveLayoutDirection_fn;
    type->interface2.fp_isLayoutDirectionResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutDirectionResolved_fn;
    type->interface2.fp_getLayoutDirection = (void(*)(uObject*, int*))::g::Android::android::view::View__getLayoutDirection_fn;
    type->interface2.fp_canResolveTextDirection = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveTextDirection_fn;
    type->interface2.fp_isTextDirectionResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isTextDirectionResolved_fn;
    type->interface2.fp_getTextDirection = (void(*)(uObject*, int*))::g::Android::android::view::View__getTextDirection_fn;
    type->interface2.fp_canResolveTextAlignment = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveTextAlignment_fn;
    type->interface2.fp_isTextAlignmentResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isTextAlignmentResolved_fn;
    type->interface2.fp_getTextAlignment = (void(*)(uObject*, int*))::g::Android::android::view::View__getTextAlignment_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[3] = uString::Const("com.Bindings.Binding_Fuse_Android_NativeViews_HorizontalScrollView");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[4] = uString::Const("(JLandroid/content/Context;)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::NativeViews::ScrollView_typeof(), offsetof(::g::Fuse::Android::NativeViews::HorizontalScrollView, _sv), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::NativeViews::HorizontalScrollView::_javaClass6_, uFieldFlagsStatic);
    return type;
}

// public HorizontalScrollView(Fuse.Android.NativeViews.ScrollView sv) :912
void HorizontalScrollView__ctor_20_fn(HorizontalScrollView* __this, ::g::Fuse::Android::NativeViews::ScrollView* sv)
{
    __this->ctor_20(sv);
}

// public HorizontalScrollView New(Fuse.Android.NativeViews.ScrollView sv) :912
void HorizontalScrollView__New17_fn(::g::Fuse::Android::NativeViews::ScrollView* sv, HorizontalScrollView** __retval)
{
    *__retval = HorizontalScrollView::New17(sv);
}

// protected override sealed void onScrollChanged(int x, int y, int oldx, int oldy) :917
void HorizontalScrollView__onScrollChanged_fn(HorizontalScrollView* __this, int* x, int* y, int* oldx, int* oldy)
{
    int x_ = *x;
    int y_ = *y;
    int oldx_ = *oldx;
    int oldy_ = *oldy;
    uPtr(__this->_sv)->OnScrollChanged(x_, y_);
    ::g::Android::android::view::View__onScrollChanged_fn(__this, uCRef<int>(x_), uCRef<int>(y_), uCRef<int>(oldx_), uCRef<int>(oldy_));
}

jclass HorizontalScrollView::_javaClass6_;

// public HorizontalScrollView(Fuse.Android.NativeViews.ScrollView sv) [instance] :912
void HorizontalScrollView::ctor_20(::g::Fuse::Android::NativeViews::ScrollView* sv)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[3/*"com.Binding...*/];
    }

    ctor_19(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(HorizontalScrollView::_javaClass6(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        HorizontalScrollView::_javaClass6() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[3/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onScrollChanged","(JIIIIJJJJ)V",Binding_Fuse_Android_NativeViews_HorizontalScrollView__onScrollChanged22996);
        COMMIT_REG_MTD(HorizontalScrollView::_javaClass6());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[4/*"(JLandroid/...*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject2(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak), ::g::Android::Base::Primitives::ujvalue::op_Implicit8(uPtr(::g::Android::android::app::Activity::GetAppActivity())->_GetJavaObject()));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _sv = sv;
}

// public HorizontalScrollView New(Fuse.Android.NativeViews.ScrollView sv) [static] :912
HorizontalScrollView* HorizontalScrollView::New17(::g::Fuse::Android::NativeViews::ScrollView* sv)
{
    HorizontalScrollView* obj1 = (HorizontalScrollView*)uNew(HorizontalScrollView_typeof());
    obj1->ctor_20(sv);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(234)
// ----------------------------------------------------------------------

// internal sealed extern class LeafNativeView :234
// {
::g::Fuse::Android::NativeViews::NativeView_type* LeafNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Android::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(LeafNativeView);
    options.TypeSize = sizeof(::g::Fuse::Android::NativeViews::NativeView_type);
    type = (::g::Fuse::Android::NativeViews::NativeView_type*)uClassType::New("Fuse.Android.NativeViews.LeafNativeView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::NativeView_typeof());
    type->fp_ctor_ = (void*)LeafNativeView__New1_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Android::android::view::View**))LeafNativeView__CreateInternal_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Uno::Float2*))LeafNativeView__get_Size_fn;
    ::TYPES[17] = ::g::Fuse::Android::Controls::Element_typeof();
    ::TYPES[0] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    type->SetFields(11);
    return type;
}

// public generated LeafNativeView() :234
void LeafNativeView__ctor_2_fn(LeafNativeView* __this)
{
    __this->ctor_2();
}

// internal override sealed Android.android.view.View CreateInternal() :238
void LeafNativeView__CreateInternal_fn(LeafNativeView* __this, ::g::Android::android::view::View** __retval)
{
    return *__retval = uPtr(__this->LeafElement())->Create(), void();
}

// private Fuse.Android.Controls.Element get_LeafElement() :236
void LeafNativeView__get_LeafElement_fn(LeafNativeView* __this, ::g::Fuse::Android::Controls::Element** __retval)
{
    *__retval = __this->LeafElement();
}

// public generated LeafNativeView New() :234
void LeafNativeView__New1_fn(LeafNativeView** __retval)
{
    *__retval = LeafNativeView::New1();
}

// protected override sealed float2 get_Size() :243
void LeafNativeView__get_Size_fn(LeafNativeView* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->LeafElement())->ActualSize(), void();
}

// public generated LeafNativeView() [instance] :234
void LeafNativeView::ctor_2()
{
    ctor_1();
}

// private Fuse.Android.Controls.Element get_LeafElement() [instance] :236
::g::Fuse::Android::Controls::Element* LeafNativeView::LeafElement()
{
    return uAs< ::g::Fuse::Android::Controls::Element*>(Node(), ::TYPES[17/*Fuse.Android.Controls.Element*/]);
}

// public generated LeafNativeView New() [static] :234
LeafNativeView* LeafNativeView::New1()
{
    LeafNativeView* obj1 = (LeafNativeView*)uNew(LeafNativeView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(275)
// ----------------------------------------------------------------------

// public abstract extern class NativeView :275
// {
// static NativeView() :275
static void NativeView__cctor__fn(uType* __type)
{
    NativeView::_viewHandle_ = ::g::Fuse::Properties::CreateHandle();
}

NativeView_type* NativeView_typeof()
{
    static uSStrong<NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(NativeView);
    options.TypeSize = sizeof(NativeView_type);
    type = (NativeView_type*)uClassType::New("Fuse.Android.NativeViews.NativeView", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_cctor_ = NativeView__cctor__fn;
    type->fp_ChildRooted = NativeView__ChildRooted_fn;
    type->fp_ChildUnrooted = NativeView__ChildUnrooted_fn;
    type->fp_NotifyNewSize = NativeView__NotifyNewSize_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NativeView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NativeView__OnUnrooted_fn;
    type->fp_get_Parent = NativeView__get_Parent_fn;
    type->fp_get_Transform = NativeView__get_Transform_fn;
    ::STRINGS[5] = uString::Const(" does not support child views");
    ::STRINGS[6] = uString::Const(" must have a native parent view. Theme provides no native view for parent type ");
    ::TYPES[18] = ::g::Uno::Action_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[16] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[20] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Android::android::view::View_typeof();
    ::TYPES[21] = ::g::Android::android::view::ViewGroup_typeof();
    ::TYPES[22] = ::g::Fuse::Behavior_typeof();
    ::TYPES[23] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[24] = ::g::Uno::Float3_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[25] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    type->SetFields(3,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeView, _node), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeView, _oldPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeView, _oldScale), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeView, _oldSize), 0,
        NativeView_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeView, _parentCache), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeView, _rotation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeView, _updatingTransform), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeView, _view), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Android::NativeViews::NativeView::_viewHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("GetFrom", NULL, (void*)NativeView__GetFrom_fn, 0, true, NativeView_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// protected generated NativeView() :275
void NativeView__ctor_1_fn(NativeView* __this)
{
    __this->ctor_1();
}

// internal void CancelNotifyNewTransform() :458
void NativeView__CancelNotifyNewTransform_fn(NativeView* __this)
{
    __this->CancelNotifyNewTransform();
}

// protected virtual void ChildRooted(Fuse.Android.NativeViews.NativeView child) :427
void NativeView__ChildRooted_fn(NativeView* __this, NativeView* child)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(__this, ::STRINGS[5/*" does not s...*/])));
}

// protected virtual void ChildUnrooted(Fuse.Android.NativeViews.NativeView child) :432
void NativeView__ChildUnrooted_fn(NativeView* __this, NativeView* child)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(__this, ::STRINGS[5/*" does not s...*/])));
}

// internal Android.android.view.View Create() :323
void NativeView__Create_fn(NativeView* __this, ::g::Android::android::view::View** __retval)
{
    *__retval = __this->Create();
}

// public static Fuse.Android.NativeViews.NativeView GetFrom(Fuse.Node node) :279
void NativeView__GetFrom_fn(::g::Fuse::Node* node, NativeView** __retval)
{
    *__retval = NativeView::GetFrom(node);
}

// internal Android.android.view.View get_Handle() :303
void NativeView__get_Handle_fn(NativeView* __this, ::g::Android::android::view::View** __retval)
{
    *__retval = __this->Handle();
}

// internal void set_Handle(Android.android.view.View value) :304
void NativeView__set_Handle_fn(NativeView* __this, ::g::Android::android::view::View* value)
{
    __this->Handle(value);
}

// private void HookEvents() :376
void NativeView__HookEvents_fn(NativeView* __this)
{
    __this->HookEvents();
}

// internal Fuse.Node get_Node() :287
void NativeView__get_Node_fn(NativeView* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private void set_Node(Fuse.Node value) :288
void NativeView__set_Node_fn(NativeView* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// internal virtual void NotifyNewSize(Fuse.Android.NativeViews.NativeView child) :540
void NativeView__NotifyNewSize_fn(NativeView* __this, NativeView* child)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(__this, ::STRINGS[5/*" does not s...*/])));
}

// internal void NotifyNewTransform() :449
void NativeView__NotifyNewTransform_fn(NativeView* __this)
{
    __this->NotifyNewTransform();
}

// private void OnIsEnabledChanged(object s, object a) :416
void NativeView__OnIsEnabledChanged_fn(NativeView* __this, uObject* s, uObject* a)
{
    __this->OnIsEnabledChanged(s, a);
}

// private void OnIsVisibleChanged(object s, object a) :421
void NativeView__OnIsVisibleChanged_fn(NativeView* __this, uObject* s, uObject* a)
{
    __this->OnIsVisibleChanged(s, a);
}

// internal void OnPlaced(object sender, Uno.EventArgs args) :442
void NativeView__OnPlaced_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPropertyChanged(object sender, Uno.EventArgs args) :405
void NativeView__OnPropertyChanged_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPropertyChanged(sender, args);
}

// protected override void OnRooted(Fuse.Node parentNode) :330
void NativeView__OnRooted_fn(NativeView* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->Node(__this->ParentNode());
    __this->Handle(__this->Create());
    __this->HookEvents();
    __this->RootNativeView();
    __this->NotifyNewTransform();
    ::g::Fuse::Android::InputDispatch::AddListener(__this);
}

// private void OnTransformsChanged(object sender, Uno.EventArgs args) :437
void NativeView__OnTransformsChanged_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTransformsChanged(sender, args);
}

// protected override void OnUnrooted(Fuse.Node parentNode) :342
void NativeView__OnUnrooted_fn(NativeView* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Android::InputDispatch::RemoveListener(__this);
    __this->CancelNotifyNewTransform();
    __this->UnrootNativeView();
    __this->UnhookEvents();
    __this->Node(NULL);
    __this->Handle(NULL);
    __this->_parentCache = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// internal virtual Fuse.Android.NativeViews.NativeView get_Parent() :310
void NativeView__get_Parent_fn(NativeView* __this, NativeView** __retval)
{
    NativeView* p = NativeView::GetFrom(uPtr(__this->_node)->Parent());

    if (p != NULL)
        __this->_parentCache = p;

    return *__retval = (p != NULL) ? p : (NativeView*)__this->_parentCache, void();
}

// private void RootNativeView() :355
void NativeView__RootNativeView_fn(NativeView* __this)
{
    __this->RootNativeView();
}

// protected virtual float4x4 get_Transform() :469
void NativeView__get_Transform_fn(NativeView* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = uPtr(__this->Node())->LocalTransform(), void();
}

// private void UnhookEvents() :393
void NativeView__UnhookEvents_fn(NativeView* __this)
{
    __this->UnhookEvents();
}

// private void UnrootNativeView() :367
void NativeView__UnrootNativeView_fn(NativeView* __this)
{
    __this->UnrootNativeView();
}

// private void UpdateTransform() :475
void NativeView__UpdateTransform_fn(NativeView* __this)
{
    __this->UpdateTransform();
}

uSStrong< ::g::Fuse::PropertyHandle*> NativeView::_viewHandle_;

// protected generated NativeView() [instance] :275
void NativeView::ctor_1()
{
    ctor_();
}

// internal void CancelNotifyNewTransform() [instance] :458
void NativeView::CancelNotifyNewTransform()
{
    if (_updatingTransform)
    {
        ::g::Fuse::UpdateManager::RemoveOnceAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativeView__UpdateTransform_fn, this), 4);
        _updatingTransform = false;
    }
}

// internal Android.android.view.View Create() [instance] :323
::g::Android::android::view::View* NativeView::Create()
{
    return CreateInternal();
}

// internal Android.android.view.View get_Handle() [instance] :303
::g::Android::android::view::View* NativeView::Handle()
{
    return _view;
}

// internal void set_Handle(Android.android.view.View value) [instance] :304
void NativeView::Handle(::g::Android::android::view::View* value)
{
    _view = value;
}

// private void HookEvents() [instance] :376
void NativeView::HookEvents()
{
    if (uIs(Node(), ::TYPES[16/*Fuse.Elements.Element*/]))
    {
        uPtr(uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[16/*Fuse.Elements.Element*/]))->add_Placed(uDelegate::New(::TYPES[20/*Fuse.PlacedHandler*/], (void*)NativeView__OnPlaced_fn, this));
        uPtr(uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[16/*Fuse.Elements.Element*/]))->add_PropertyChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)NativeView__OnPropertyChanged_fn, this));
        OnPropertyChanged(NULL, NULL);
    }

    uPtr(Node())->add_IsEnabledChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)NativeView__OnIsEnabledChanged_fn, this));
    uPtr(Node())->add_IsVisibleChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)NativeView__OnIsVisibleChanged_fn, this));
    uPtr(Node())->add_TransformsChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)NativeView__OnTransformsChanged_fn, this));
    OnIsEnabledChanged(NULL, NULL);
    OnIsVisibleChanged(NULL, NULL);
}

// internal Fuse.Node get_Node() [instance] :287
::g::Fuse::Node* NativeView::Node()
{
    return _node;
}

// private void set_Node(Fuse.Node value) [instance] :288
void NativeView::Node(::g::Fuse::Node* value)
{
    if (_node != NULL)
        uPtr(uPtr(_node)->Properties())->Clear(NativeView::_viewHandle());

    _node = value;

    if (_node != NULL)
        uPtr(uPtr(_node)->Properties())->Set(NativeView::_viewHandle(), this);
}

// internal void NotifyNewTransform() [instance] :449
void NativeView::NotifyNewTransform()
{
    if (!_updatingTransform)
    {
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativeView__UpdateTransform_fn, this), 4);
        _updatingTransform = true;
    }
}

// private void OnIsEnabledChanged(object s, object a) [instance] :416
void NativeView::OnIsEnabledChanged(uObject* s, uObject* a)
{
    uPtr(Handle())->setEnabled(uPtr(Node())->IsEnabled());
}

// private void OnIsVisibleChanged(object s, object a) [instance] :421
void NativeView::OnIsVisibleChanged(uObject* s, uObject* a)
{
    uPtr(Handle())->setVisibility(uPtr(Node())->IsVisible() ? ::g::Android::android::view::View::VISIBLE() : ::g::Android::android::view::View::INVISIBLE());
}

// internal void OnPlaced(object sender, Uno.EventArgs args) [instance] :442
void NativeView::OnPlaced(uObject* sender, ::g::Uno::EventArgs* args)
{
    NotifyNewTransform();
}

// private void OnPropertyChanged(object sender, Uno.EventArgs args) [instance] :405
void NativeView::OnPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Elements::Element* elm = uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[16/*Fuse.Elements.Element*/]);
    uPtr(Handle())->setAlpha(uPtr(elm)->Opacity());

    if (uIs(Handle(), ::TYPES[21/*Android.android.view.ViewGroup*/]))
        uPtr(uCast< ::g::Android::android::view::ViewGroup*>(Handle(), ::TYPES[21/*Android.android.view.ViewGroup*/]))->setClipChildren(elm->ClipToBounds());
}

// private void OnTransformsChanged(object sender, Uno.EventArgs args) [instance] :437
void NativeView::OnTransformsChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    NotifyNewTransform();
}

// private void RootNativeView() [instance] :355
void NativeView::RootNativeView()
{
    if (uIs(uPtr(Node())->Parent(), ::TYPES[23/*Fuse.RootViewport*/]))
        ::g::Fuse::Android::RootView::SetRoot(this);
    else if (Parent() == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(Node(), ::STRINGS[6/*" must have ...*/]), uPtr(Node())->Parent())));
    else
        uPtr(Parent())->ChildRooted(this);
}

// private void UnhookEvents() [instance] :393
void NativeView::UnhookEvents()
{
    if (uIs(Node(), ::TYPES[16/*Fuse.Elements.Element*/]))
    {
        uPtr(uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[16/*Fuse.Elements.Element*/]))->remove_Placed(uDelegate::New(::TYPES[20/*Fuse.PlacedHandler*/], (void*)NativeView__OnPlaced_fn, this));
        uPtr(uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[16/*Fuse.Elements.Element*/]))->remove_PropertyChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)NativeView__OnPropertyChanged_fn, this));
    }

    uPtr(Node())->remove_IsEnabledChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)NativeView__OnIsEnabledChanged_fn, this));
    uPtr(Node())->remove_IsVisibleChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)NativeView__OnIsVisibleChanged_fn, this));
    uPtr(Node())->remove_TransformsChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)NativeView__OnTransformsChanged_fn, this));
}

// private void UnrootNativeView() [instance] :367
void NativeView::UnrootNativeView()
{
    if (uIs(uPtr(Node())->Parent(), ::TYPES[23/*Fuse.RootViewport*/]))
        ::g::Fuse::Android::RootView::ClearRoot();
    else if (Parent() != NULL)
        uPtr(Parent())->ChildUnrooted(this);
}

// private void UpdateTransform() [instance] :475
void NativeView::UpdateTransform()
{
    if (Node() == NULL)
        return;

    _updatingTransform = false;
    ::g::Uno::Float4x4 t = Transform();
    ::g::Uno::Float3 scale;
    ::g::Uno::Float4 rotation;
    ::g::Uno::Float3 translation;
    ::g::Uno::Matrix::Decompose(t, &scale, &rotation, &translation);

    if (::g::Uno::Float2::op_Inequality(::g::Uno::Float2__New2(scale.X, scale.Y), _oldScale))
    {
        uPtr(_view)->setPivotX(0.0f);
        uPtr(_view)->setPivotY(0.0f);
        uPtr(_view)->setScaleX(scale.X);
        uPtr(_view)->setScaleY(scale.Y);
        _oldScale = ::g::Uno::Float2__New2(scale.X, scale.Y);
    }

    ::g::Uno::Float3 r = ::g::Uno::Quaternion::ToEulerAngleDegrees(rotation);

    if (_rotation != r.Z)
    {
        _rotation = r.Z;
        uPtr(_view)->setRotation(_rotation);
    }

    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(Node())->Viewport()), ::TYPES[6/*Fuse.IViewport*/]));
    float x = translation.X;
    float y = translation.Y;
    ::g::Fuse::Controls::ScrollView* sv = uAs< ::g::Fuse::Controls::ScrollView*>(uPtr(Node())->Parent(), ::TYPES[25/*Fuse.Controls.ScrollView*/]);

    if (sv != NULL)
    {
        x = x + uPtr(sv)->ScrollPosition().X;
        y = y + sv->ScrollPosition().Y;
    }

    ::g::Uno::Float2 pos = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__New2(x, y), density);

    if (::g::Uno::Vector::Distance(pos, _oldPos) > 0.1f)
    {
        uPtr(_view)->setTranslationX(pos.X);
        uPtr(_view)->setTranslationY(pos.Y);
        _oldPos = pos;
    }

    if (::g::Uno::Float2::op_Inequality(Size(), _oldSize))
    {
        if (Parent() != NULL)
            uPtr(Parent())->NotifyNewSize(this);
        else if (::g::Fuse::Android::RootView::IsRoot(this))
            ::g::Fuse::Android::RootView::UpdateSize(Size());

        _oldSize = Size();
    }
}

// public static Fuse.Android.NativeViews.NativeView GetFrom(Fuse.Node node) [static] :279
NativeView* NativeView::GetFrom(::g::Fuse::Node* node)
{
    NativeView_typeof()->Init();
    return (node != NULL) ? uAs<NativeView*>(uPtr(uPtr(node)->Properties())->Get(NativeView::_viewHandle()), NativeView_typeof()) : NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(570)
// ----------------------------------------------------------------------

// public sealed extern class NativeViewHost :570
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* NativeViewHost_typeof()
{
    static uSStrong< ::g::Fuse::Android::NativeViews::ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(NativeViewHost);
    options.TypeSize = sizeof(::g::Fuse::Android::NativeViews::ParentNativeView_type);
    type = (::g::Fuse::Android::NativeViews::ParentNativeView_type*)uClassType::New("Fuse.Android.NativeViews.NativeViewHost", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::NativeViewHost_typeof()));
    type->fp_ctor_ = (void*)NativeViewHost__New1_fn;
    type->fp_ChildRooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))NativeViewHost__ChildRooted_fn;
    type->fp_ChildUnrooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))NativeViewHost__ChildUnrooted_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Android::android::view::View**))NativeViewHost__CreateInternal_fn;
    type->fp_NotifyNewSize = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))NativeViewHost__NotifyNewSize_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NativeViewHost__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NativeViewHost__OnUnrooted_fn;
    type->fp_get_Parent = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView**))NativeViewHost__get_Parent_fn;
    type->fp_get_Transform = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Uno::Float4x4*))NativeViewHost__get_Transform_fn;
    ::TYPES[0] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[26] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    ::TYPES[2] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[3] = ::g::Android::android::view::View_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = ::g::Uno::Action_typeof();
    type->SetFields(11,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeViewHost, _relativeLayout), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Android::NativeViews::NativeViewHost, _updateWorldTransformVersion), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeViewHost__New1_fn, 0, true, NativeViewHost_typeof(), 0));
    return type;
}

// public generated NativeViewHost() :570
void NativeViewHost__ctor_3_fn(NativeViewHost* __this)
{
    __this->ctor_3();
}

// protected override sealed void ChildRooted(Fuse.Android.NativeViews.NativeView child) :628
void NativeViewHost__ChildRooted_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    __this->NotifyNewSize(child);
    uPtr(__this->_relativeLayout)->addView2(uPtr(child)->Handle(), 0);
}

// protected override sealed void ChildUnrooted(Fuse.Android.NativeViews.NativeView child) :635
void NativeViewHost__ChildUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    uPtr(__this->_relativeLayout)->removeView(uPtr(child)->Handle());
}

// internal override sealed Android.android.view.View CreateInternal() :574
void NativeViewHost__CreateInternal_fn(NativeViewHost* __this, ::g::Android::android::view::View** __retval)
{
    if (::g::Android::java::lang::Object::op_Equality1(__this->_relativeLayout, NULL))
    {
        __this->_relativeLayout = ::g::Android::android::widget::RelativeLayout::New9(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_relativeLayout)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(-1, -1));
    }

    return *__retval = __this->_relativeLayout, void();
}

// public generated NativeViewHost New() :570
void NativeViewHost__New1_fn(NativeViewHost** __retval)
{
    *__retval = NativeViewHost::New1();
}

// internal override sealed void NotifyNewSize(Fuse.Android.NativeViews.NativeView child) :640
void NativeViewHost__NotifyNewSize_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    if ((__this->Node() == NULL) || !uPtr(__this->Node())->IsLocalRooted())
        return;

    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(__this->Node())->Viewport()), ::TYPES[6/*Fuse.IViewport*/]));
    int w = (int)(uPtr(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::g::Android::android::widget::RelativeLayoutDLRLayoutParams* layoutParams = ::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(w, h);
    uPtr(child->Handle())->setLayoutParams(layoutParams);
    uPtr(child->Handle())->invalidate();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :599
void NativeViewHost__OnRooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Android::NativeViews::ParentNativeView__OnRooted_fn(__this, parentNode);
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativeViewHost__Update_fn, __this), 0);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :605
void NativeViewHost__OnUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativeViewHost__Update_fn, __this), 0);
    ::g::Fuse::Android::NativeViews::ParentNativeView__OnUnrooted_fn(__this, parentNode);
}

// internal override sealed Fuse.Android.NativeViews.NativeView get_Parent() :586
void NativeViewHost__get_Parent_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval)
{
    return *__retval = (__this->Node() != NULL) ? (::g::Fuse::Android::NativeViews::GraphicsView*)::g::Fuse::Android::NativeViews::GraphicsView::Find(uPtr(__this->Node())->Parent()) : NULL, void();
}

// protected override sealed float4x4 get_Transform() :591
void NativeViewHost__get_Transform_fn(NativeViewHost* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Invert2(uPtr(uPtr(__this->Parent())->Node())->LocalTransform()), uPtr(__this->Node())->WorldTransform()), void();
}

// private void Update() :616
void NativeViewHost__Update_fn(NativeViewHost* __this)
{
    __this->Update();
}

// public generated NativeViewHost() [instance] :570
void NativeViewHost::ctor_3()
{
    ctor_2();
}

// private void Update() [instance] :616
void NativeViewHost::Update()
{
    if ((uPtr(Node())->_worldTransformVersion > _updateWorldTransformVersion) || !uPtr(Node())->IsWorldMatrixValid())
    {
        NotifyNewTransform();
        uPtr(_relativeLayout)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(-1, -1));
        uPtr(_relativeLayout)->invalidate();
        _updateWorldTransformVersion = uPtr(Node())->_worldTransformVersion;
    }
}

// public generated NativeViewHost New() [static] :570
NativeViewHost* NativeViewHost::New1()
{
    NativeViewHost* obj1 = (NativeViewHost*)uNew(NativeViewHost_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(678)
// ----------------------------------------------------------------------

// internal sealed extern class Panel :678
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* Panel_typeof()
{
    static uSStrong< ::g::Fuse::Android::NativeViews::ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(Panel);
    options.TypeSize = sizeof(::g::Fuse::Android::NativeViews::ParentNativeView_type);
    type = (::g::Fuse::Android::NativeViews::ParentNativeView_type*)uClassType::New("Fuse.Android.NativeViews.Panel", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::Panel_typeof()));
    type->fp_ctor_ = (void*)Panel__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::NativeViews::ParentNativeView*))Panel__Attach_fn;
    type->fp_ChildRooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))Panel__ChildRooted_fn;
    type->fp_ChildUnrooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))Panel__ChildUnrooted_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Android::android::view::View**))Panel__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::NativeViews::ParentNativeView*))Panel__Detach_fn;
    type->fp_NotifyNewSize = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))Panel__NotifyNewSize_fn;
    ::TYPES[27] = ::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::Panel_typeof());
    ::TYPES[28] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[29] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[0] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    ::TYPES[2] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[3] = ::g::Android::android::view::View_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    type->SetFields(11,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::NativeViews::Panel, _relativeLayout), 0);
    return type;
}

// public generated Panel() :678
void Panel__ctor_3_fn(Panel* __this)
{
    __this->ctor_3();
}

// private void ApplyZOrder() :706
void Panel__ApplyZOrder_fn(Panel* __this)
{
    __this->ApplyZOrder();
}

// protected override sealed void Attach() :689
void Panel__Attach_fn(Panel* __this)
{
    ::g::Fuse::Android::NativeViews::ParentNativeView__Attach_fn(__this);
    uPtr((::g::Fuse::Controls::Panel*)__this->Control())->add_ZOrderChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)Panel__OnZOrderChanged_fn, __this));
}

// protected override sealed void ChildRooted(Fuse.Android.NativeViews.NativeView child) :719
void Panel__ChildRooted_fn(Panel* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    __this->NotifyNewSize(child);
    uPtr(__this->_relativeLayout)->addView2(uPtr(child)->Handle(), 0);
    __this->ApplyZOrder();
}

// protected override sealed void ChildUnrooted(Fuse.Android.NativeViews.NativeView child) :726
void Panel__ChildUnrooted_fn(Panel* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    uPtr(__this->_relativeLayout)->removeView(uPtr(child)->Handle());
}

// internal override sealed Android.android.view.View CreateInternal() :682
void Panel__CreateInternal_fn(Panel* __this, ::g::Android::android::view::View** __retval)
{
    __this->_relativeLayout = ::g::Android::android::widget::RelativeLayout::New9(::g::Android::android::app::Activity::GetAppActivity());
    uPtr(__this->_relativeLayout)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(-1, -1));
    return *__retval = __this->_relativeLayout, void();
}

// protected override sealed void Detach() :695
void Panel__Detach_fn(Panel* __this)
{
    uPtr((::g::Fuse::Controls::Panel*)__this->Control())->remove_ZOrderChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)Panel__OnZOrderChanged_fn, __this));
    ::g::Fuse::Android::NativeViews::ParentNativeView__Detach_fn(__this);
}

// public generated Panel New() :678
void Panel__New1_fn(Panel** __retval)
{
    *__retval = Panel::New1();
}

// internal override sealed void NotifyNewSize(Fuse.Android.NativeViews.NativeView child) :731
void Panel__NotifyNewSize_fn(Panel* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    if ((__this->Node() == NULL) || !uPtr(__this->Node())->IsLocalRooted())
        return;

    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(__this->Node())->Viewport()), ::TYPES[6/*Fuse.IViewport*/]));
    int w = (int)(uPtr(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::g::Android::android::widget::RelativeLayoutDLRLayoutParams* layoutParams = ::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(w, h);
    uPtr(child->Handle())->setLayoutParams(layoutParams);
    uPtr(child->Handle())->invalidate();
}

// private void OnZOrderChanged(object s, object a) :701
void Panel__OnZOrderChanged_fn(Panel* __this, uObject* s, uObject* a)
{
    __this->OnZOrderChanged(s, a);
}

// public generated Panel() [instance] :678
void Panel::ctor_3()
{
    ctor_2();
}

// private void ApplyZOrder() [instance] :706
void Panel::ApplyZOrder()
{
    if (((::g::Fuse::Controls::Panel*)Control()) == NULL)
        return;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr((::g::Fuse::Controls::Panel*)Control())->Children()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        ::g::Fuse::Android::NativeViews::NativeView* child = ::g::Fuse::Android::NativeViews::NativeView::GetFrom(uPtr((::g::Fuse::Controls::Panel*)Control())->GetZOrderChild(i));

        if (child != NULL)
            uPtr(_relativeLayout)->bringChildToFront(uPtr(child)->Handle());
    }
}

// private void OnZOrderChanged(object s, object a) [instance] :701
void Panel::OnZOrderChanged(uObject* s, uObject* a)
{
    ApplyZOrder();
}

// public generated Panel New() [static] :678
Panel* Panel::New1()
{
    Panel* obj1 = (Panel*)uNew(Panel_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(755)
// ----------------------------------------------------------------------

// internal abstract extern class ParentNativeView<T> :755
// {
ParentNativeView_type* ParentNativeView_typeof()
{
    static uSStrong<ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ParentNativeView);
    options.TypeSize = sizeof(ParentNativeView_type);
    type = (ParentNativeView_type*)uClassType::New("Fuse.Android.NativeViews.ParentNativeView`1", options);
    type->SetBase(::g::Fuse::Android::NativeViews::NativeView_typeof());
    type->fp_Attach = ParentNativeView__Attach_fn;
    type->fp_Detach = ParentNativeView__Detach_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ParentNativeView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ParentNativeView__OnUnrooted_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Uno::Float2*))ParentNativeView__get_Size_fn;
    ::TYPES[30] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[31] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[32] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[33] = ::g::Uno::Float4_typeof();
    ::TYPES[0] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[16] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(11);
    return type;
}

// protected generated ParentNativeView() :755
void ParentNativeView__ctor_2_fn(ParentNativeView* __this)
{
    __this->ctor_2();
}

// protected virtual void Attach() :786
void ParentNativeView__Attach_fn(ParentNativeView* __this)
{
}

// public T get_Control() :757
void ParentNativeView__get_Control_fn(ParentNativeView* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->Control();
}

// protected virtual void Detach() :787
void ParentNativeView__Detach_fn(ParentNativeView* __this)
{
}

// protected override void OnRooted(Fuse.Node parentNode) :759
void ParentNativeView__OnRooted_fn(ParentNativeView* __this, ::g::Fuse::Node* parentNode)
{
    bool ret1;
    ::g::Fuse::Android::NativeViews::NativeView__OnRooted_fn(__this, parentNode);
    __this->Attach();

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::Control::BackgroundProperty()), __this->Control(), &ret1), ret1))
    {
        ::g::Fuse::Drawing::Brush* b = uPtr(__this->Control())->Background();
        ::g::Fuse::Drawing::SolidColor* solid = uAs< ::g::Fuse::Drawing::SolidColor*>(b, ::TYPES[31/*Fuse.Drawing.SolidColor*/]);
        ::g::Fuse::Drawing::StaticSolidColor* ssolid = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(b, ::TYPES[32/*Fuse.Drawing.StaticSolidColor*/]);

        if ((solid != NULL) || (ssolid != NULL))
        {
            ::g::Uno::Float4 v = (solid == NULL) ? uPtr(ssolid)->Color() : uPtr(solid)->Color();
            int c = ::g::Android::android::graphics::Color::argb((int)(v.W * 255.0f), (int)(v.X * 255.0f), (int)(v.Y * 255.0f), (int)(v.Z * 255.0f));
            uPtr(__this->Handle())->setBackgroundColor(c);
        }
    }
}

// protected override void OnUnrooted(Fuse.Node parentNode) :780
void ParentNativeView__OnUnrooted_fn(ParentNativeView* __this, ::g::Fuse::Node* parentNode)
{
    __this->Detach();
    ::g::Fuse::Android::NativeViews::NativeView__OnUnrooted_fn(__this, parentNode);
}

// protected override sealed float2 get_Size() :789
void ParentNativeView__get_Size_fn(ParentNativeView* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->Control())->ActualSize(), void();
}

// protected generated ParentNativeView() [instance] :755
void ParentNativeView::ctor_2()
{
    ctor_1();
}

// public T get_Control() [instance] :757
::g::Fuse::Controls::Control* ParentNativeView::Control()
{
    uType* __types[] = {
        __type->GetBase(ParentNativeView_typeof())->T(0),
    };
    return uCast< ::g::Fuse::Controls::Control*>(Node(), __types[0]);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(815)
// ----------------------------------------------------------------------

// internal sealed extern class ScrollView :815
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* ScrollView_typeof()
{
    static uSStrong< ::g::Fuse::Android::NativeViews::ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Fuse::Android::NativeViews::ParentNativeView_type);
    type = (::g::Fuse::Android::NativeViews::ParentNativeView_type*)uClassType::New("Fuse.Android.NativeViews.ScrollView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof()));
    type->fp_ctor_ = (void*)ScrollView__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::NativeViews::ParentNativeView*))ScrollView__Attach_fn;
    type->fp_ChildRooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))ScrollView__ChildRooted_fn;
    type->fp_ChildUnrooted = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))ScrollView__ChildUnrooted_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Android::android::view::View**))ScrollView__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::NativeViews::ParentNativeView*))ScrollView__Detach_fn;
    type->fp_NotifyNewSize = (void(*)(::g::Fuse::Android::NativeViews::NativeView*, ::g::Fuse::Android::NativeViews::NativeView*))ScrollView__NotifyNewSize_fn;
    ::TYPES[25] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[34] = ::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof());
    ::TYPES[35] = ::g::Fuse::Controls::ScrollPropertyChangedHandler_typeof();
    ::TYPES[0] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[36] = ::g::Android::android::widget::FrameLayout_typeof();
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    ::TYPES[3] = ::g::Android::android::view::View_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Uno::Float2_typeof();
    ::TYPES[2] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[37] = ::g::Uno::Float_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[38] = ::g::Uno::Int2_typeof();
    ::TYPES[39] = ::g::Fuse::Controls::ScrollPropertyChangedArgs_typeof();
    type->SetFields(11,
        ::g::Android::android::widget::FrameLayout_typeof(), offsetof(::g::Fuse::Android::NativeViews::ScrollView, _scrollView), 0);
    return type;
}

// public generated ScrollView() :815
void ScrollView__ctor_3_fn(ScrollView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :837
void ScrollView__Attach_fn(ScrollView* __this)
{
    uPtr((::g::Fuse::Controls::ScrollView*)__this->Control())->add_ScrollPropertyChanged(uDelegate::New(::TYPES[35/*Fuse.Controls.ScrollPropertyChangedHandler*/], (void*)ScrollView__OnScrollPropertyChanged1_fn, __this));
    __this->OnScrollPropertyChanged();
}

// protected override sealed void ChildRooted(Fuse.Android.NativeViews.NativeView child) :868
void ScrollView__ChildRooted_fn(ScrollView* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    __this->NotifyNewSize(child);
    uPtr(__this->_scrollView)->addView(uPtr(child)->Handle());
}

// protected override sealed void ChildUnrooted(Fuse.Android.NativeViews.NativeView child) :874
void ScrollView__ChildUnrooted_fn(ScrollView* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    uPtr(__this->_scrollView)->removeView(uPtr(child)->Handle());
}

// internal override sealed Android.android.view.View CreateInternal() :819
void ScrollView__CreateInternal_fn(ScrollView* __this, ::g::Android::android::view::View** __retval)
{
    if (uPtr((::g::Fuse::Controls::ScrollView*)__this->Control())->AllowedScrollDirections() == 12)
        __this->_scrollView = ::g::Fuse::Android::NativeViews::VerticalScrollView::New17(__this);
    else if (uPtr((::g::Fuse::Controls::ScrollView*)__this->Control())->AllowedScrollDirections() == 3)
        __this->_scrollView = ::g::Fuse::Android::NativeViews::HorizontalScrollView::New17(__this);
    else
        __this->_scrollView = ::g::Android::android::widget::FrameLayout::New9(::g::Android::android::app::Activity::GetAppActivity());

    return *__retval = __this->_scrollView, void();
}

// protected override sealed void Detach() :843
void ScrollView__Detach_fn(ScrollView* __this)
{
    uPtr((::g::Fuse::Controls::ScrollView*)__this->Control())->remove_ScrollPropertyChanged(uDelegate::New(::TYPES[35/*Fuse.Controls.ScrollPropertyChangedHandler*/], (void*)ScrollView__OnScrollPropertyChanged1_fn, __this));
}

// public generated ScrollView New() :815
void ScrollView__New1_fn(ScrollView** __retval)
{
    *__retval = ScrollView::New1();
}

// internal override sealed void NotifyNewSize(Fuse.Android.NativeViews.NativeView child) :879
void ScrollView__NotifyNewSize_fn(ScrollView* __this, ::g::Fuse::Android::NativeViews::NativeView* child)
{
    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(__this->Node())->Viewport()), ::TYPES[6/*Fuse.IViewport*/]));
    int w = (int)(uPtr(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::g::Android::android::widget::FrameLayoutDLRLayoutParams* layoutParams = ::g::Android::android::widget::FrameLayoutDLRLayoutParams::New19(w, h);
    uPtr(child->Handle())->setLayoutParams(layoutParams);
    uPtr(child->Handle())->invalidate();
}

// internal void OnScrollChanged(int x, int y) :862
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y)
{
    __this->OnScrollChanged(*x, *y);
}

// private void OnScrollPropertyChanged() :854
void ScrollView__OnScrollPropertyChanged_fn(ScrollView* __this)
{
    __this->OnScrollPropertyChanged();
}

// private void OnScrollPropertyChanged(object sender, Fuse.Controls.ScrollPropertyChangedArgs args) :848
void ScrollView__OnScrollPropertyChanged1_fn(ScrollView* __this, uObject* sender, ::g::Fuse::Controls::ScrollPropertyChangedArgs* args)
{
    __this->OnScrollPropertyChanged1(sender, args);
}

// public generated ScrollView() [instance] :815
void ScrollView::ctor_3()
{
    ctor_2();
}

// internal void OnScrollChanged(int x, int y) [instance] :862
void ScrollView::OnScrollChanged(int x, int y)
{
    ::g::Uno::Float2 p = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)x, (float)y), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::ScrollView*)Control())->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
    uPtr((::g::Fuse::Controls::ScrollView*)Control())->SetScrollPosition(p, this);
}

// private void OnScrollPropertyChanged() [instance] :854
void ScrollView::OnScrollPropertyChanged()
{
    ::g::Uno::Int2 p = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(uPtr((::g::Fuse::Controls::ScrollView*)Control())->ScrollPosition(), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::ScrollView*)Control())->Viewport()), ::TYPES[6/*Fuse.IViewport*/]))));
    uPtr(_scrollView)->setScrollX(p.X);
    uPtr(_scrollView)->setScrollY(p.Y);
}

// private void OnScrollPropertyChanged(object sender, Fuse.Controls.ScrollPropertyChangedArgs args) [instance] :848
void ScrollView::OnScrollPropertyChanged1(uObject* sender, ::g::Fuse::Controls::ScrollPropertyChangedArgs* args)
{
    if (uPtr(args)->Origin() == this)
        return;

    OnScrollPropertyChanged();
}

// public generated ScrollView New() [static] :815
ScrollView* ScrollView::New1()
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(934)
// ----------------------------------------------------------------------

// internal sealed extern class SurfaceCallback :934
// {
SurfaceCallback_type* SurfaceCallback_typeof()
{
    static uSStrong<SurfaceCallback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SurfaceCallback);
    options.TypeSize = sizeof(SurfaceCallback_type);
    type = (SurfaceCallback_type*)uClassType::New("Fuse.Android.NativeViews.SurfaceCallback", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_surfaceRedrawNeeded = (void(*)(uObject*, uObject*))SurfaceCallback__surfaceRedrawNeeded_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface3.fp_surfaceCreated = (void(*)(uObject*, uObject*))SurfaceCallback__surfaceCreated_fn;
    type->interface3.fp_surfaceChanged = (void(*)(uObject*, uObject*, int*, int*, int*))SurfaceCallback__surfaceChanged_fn;
    type->interface3.fp_surfaceDestroyed = (void(*)(uObject*, uObject*))SurfaceCallback__surfaceDestroyed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[7] = uString::Const("com.Bindings.Binding_Fuse_Android_NativeViews_SurfaceCallback");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[11] = ::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(SurfaceCallback_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SurfaceCallback_type, interface1),
        ::g::Android::android::view::SurfaceHolderDLRCallback2_typeof(), offsetof(SurfaceCallback_type, interface2),
        ::g::Android::android::view::SurfaceHolderDLRCallback_typeof(), offsetof(SurfaceCallback_type, interface3));
    type->SetFields(5,
        ::g::Fuse::Android::NativeViews::SurfaceView_typeof(), offsetof(::g::Fuse::Android::NativeViews::SurfaceCallback, _sv), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::NativeViews::SurfaceCallback::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public SurfaceCallback(Fuse.Android.NativeViews.SurfaceView sv) :940
void SurfaceCallback__ctor_4_fn(SurfaceCallback* __this, ::g::Fuse::Android::NativeViews::SurfaceView* sv)
{
    __this->ctor_4(sv);
}

// public SurfaceCallback New(Fuse.Android.NativeViews.SurfaceView sv) :940
void SurfaceCallback__New5_fn(::g::Fuse::Android::NativeViews::SurfaceView* sv, SurfaceCallback** __retval)
{
    *__retval = SurfaceCallback::New5(sv);
}

// public void surfaceChanged(Android.android.view.SurfaceHolder holder, int format, int width, int height) :957
void SurfaceCallback__surfaceChanged_fn(SurfaceCallback* __this, uObject* holder, int* format, int* width, int* height)
{
    __this->surfaceChanged(holder, *format, *width, *height);
}

// public void surfaceCreated(Android.android.view.SurfaceHolder holder) :946
void SurfaceCallback__surfaceCreated_fn(SurfaceCallback* __this, uObject* holder)
{
    __this->surfaceCreated(holder);
}

// public void surfaceDestroyed(Android.android.view.SurfaceHolder holder) :963
void SurfaceCallback__surfaceDestroyed_fn(SurfaceCallback* __this, uObject* holder)
{
    __this->surfaceDestroyed(holder);
}

// public void surfaceRedrawNeeded(Android.android.view.SurfaceHolder holder) :952
void SurfaceCallback__surfaceRedrawNeeded_fn(SurfaceCallback* __this, uObject* holder)
{
    __this->surfaceRedrawNeeded(holder);
}

jclass SurfaceCallback::_javaClass2_;

// public SurfaceCallback(Fuse.Android.NativeViews.SurfaceView sv) [instance] :940
void SurfaceCallback::ctor_4(::g::Fuse::Android::NativeViews::SurfaceView* sv)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[7/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(SurfaceCallback::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        SurfaceCallback::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[7/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(4);
        REG_MTD(0,"__n_surfaceRedrawNeeded","(JLandroid/view/SurfaceHolder;J)V",Binding_Fuse_Android_NativeViews_SurfaceCallback__surfaceRedrawNeeded22609);
        REG_MTD(1,"__n_surfaceCreated","(JLandroid/view/SurfaceHolder;J)V",Binding_Fuse_Android_NativeViews_SurfaceCallback__surfaceCreated22606);
        REG_MTD(2,"__n_surfaceChanged","(JLandroid/view/SurfaceHolder;IIIJJJJ)V",Binding_Fuse_Android_NativeViews_SurfaceCallback__surfaceChanged22607);
        REG_MTD(3,"__n_surfaceDestroyed","(JLandroid/view/SurfaceHolder;J)V",Binding_Fuse_Android_NativeViews_SurfaceCallback__surfaceDestroyed22608);
        COMMIT_REG_MTD(SurfaceCallback::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _sv = sv;
}

// public void surfaceChanged(Android.android.view.SurfaceHolder holder, int format, int width, int height) [instance] :957
void SurfaceCallback::surfaceChanged(uObject* holder, int format, int width, int height)
{
    uPtr((::g::Fuse::Controls::GraphicsView*)uPtr(_sv)->Control())->InvalidateVisual();
}

// public void surfaceCreated(Android.android.view.SurfaceHolder holder) [instance] :946
void SurfaceCallback::surfaceCreated(uObject* holder)
{
    uPtr(_sv)->OnSurfaceCreated(::g::Android::android::view::SurfaceHolder::getSurface(uInterface(uPtr(holder), ::g::Android::android::view::SurfaceHolder_typeof())));
    uPtr((::g::Fuse::Controls::GraphicsView*)uPtr(_sv)->Control())->InvalidateVisual();
}

// public void surfaceDestroyed(Android.android.view.SurfaceHolder holder) [instance] :963
void SurfaceCallback::surfaceDestroyed(uObject* holder)
{
    uPtr(_sv)->OnSurfaceDestroyed();
}

// public void surfaceRedrawNeeded(Android.android.view.SurfaceHolder holder) [instance] :952
void SurfaceCallback::surfaceRedrawNeeded(uObject* holder)
{
    uPtr((::g::Fuse::Controls::GraphicsView*)uPtr(_sv)->Control())->InvalidateVisual();
}

// public SurfaceCallback New(Fuse.Android.NativeViews.SurfaceView sv) [static] :940
SurfaceCallback* SurfaceCallback::New5(::g::Fuse::Android::NativeViews::SurfaceView* sv)
{
    SurfaceCallback* obj1 = (SurfaceCallback*)uNew(SurfaceCallback_typeof());
    obj1->ctor_4(sv);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(969)
// ----------------------------------------------------------------------

// public sealed extern class SurfaceView :969
// {
::g::Fuse::Android::NativeViews::GraphicsView_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Android::NativeViews::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Android::NativeViews::GraphicsView_type);
    type = (::g::Fuse::Android::NativeViews::GraphicsView_type*)uClassType::New("Fuse.Android.NativeViews.SurfaceView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::GraphicsView_typeof());
    type->fp_ctor_ = (void*)SurfaceView__New1_fn;
    type->fp_CreateGraphicsView = (void(*)(::g::Fuse::Android::NativeViews::GraphicsView*, ::g::Android::android::view::View**))SurfaceView__CreateGraphicsView_fn;
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    ::TYPES[40] = ::g::Android::android::view::SurfaceHolderDLRCallback_typeof();
    ::TYPES[3] = ::g::Android::android::view::View_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SurfaceView__New1_fn, 0, true, SurfaceView_typeof(), 0));
    return type;
}

// public generated SurfaceView() :969
void SurfaceView__ctor_4_fn(SurfaceView* __this)
{
    __this->ctor_4();
}

// protected override sealed Android.android.view.View CreateGraphicsView() :972
void SurfaceView__CreateGraphicsView_fn(SurfaceView* __this, ::g::Android::android::view::View** __retval)
{
    ::g::Android::android::view::SurfaceView* surfaceView = ::g::Android::android::view::SurfaceView::New9(::g::Android::android::app::Activity::GetAppActivity());
    ::g::Android::android::view::SurfaceHolder::addCallback(uInterface(uPtr(surfaceView->getHolder()), ::g::Android::android::view::SurfaceHolder_typeof()), (uObject*)::g::Fuse::Android::NativeViews::SurfaceCallback::New5(__this));
    surfaceView->setBackgroundColor(0);
    return *__retval = surfaceView, void();
}

// public generated SurfaceView New() :969
void SurfaceView__New1_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New1();
}

// public generated SurfaceView() [instance] :969
void SurfaceView::ctor_4()
{
    ctor_3();
}

// public generated SurfaceView New() [static] :969
SurfaceView* SurfaceView::New1()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(1032)
// -----------------------------------------------------------------------

// public sealed extern class TextureView :1032
// {
::g::Fuse::Android::NativeViews::GraphicsView_type* TextureView_typeof()
{
    static uSStrong< ::g::Fuse::Android::NativeViews::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(::g::Fuse::Android::NativeViews::GraphicsView_type);
    type = (::g::Fuse::Android::NativeViews::GraphicsView_type*)uClassType::New("Fuse.Android.NativeViews.TextureView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::GraphicsView_typeof());
    type->fp_ctor_ = (void*)TextureView__New1_fn;
    type->fp_CreateGraphicsView = (void(*)(::g::Fuse::Android::NativeViews::GraphicsView*, ::g::Android::android::view::View**))TextureView__CreateGraphicsView_fn;
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    ::TYPES[41] = ::g::Android::android::view::TextureViewDLRSurfaceTextureListener_typeof();
    ::TYPES[3] = ::g::Android::android::view::View_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextureView__New1_fn, 0, true, TextureView_typeof(), 0));
    return type;
}

// public generated TextureView() :1032
void TextureView__ctor_4_fn(TextureView* __this)
{
    __this->ctor_4();
}

// protected override sealed Android.android.view.View CreateGraphicsView() :1034
void TextureView__CreateGraphicsView_fn(TextureView* __this, ::g::Android::android::view::View** __retval)
{
    ::g::Android::android::view::TextureView* textureView = ::g::Android::android::view::TextureView::New9(::g::Android::android::app::Activity::GetAppActivity());
    textureView->setSurfaceTextureListener((uObject*)::g::Fuse::Android::NativeViews::GLSurfaceTextureListener::New5(__this));
    textureView->setOpaque(false);
    return *__retval = textureView, void();
}

// public generated TextureView New() :1032
void TextureView__New1_fn(TextureView** __retval)
{
    *__retval = TextureView::New1();
}

// public generated TextureView() [instance] :1032
void TextureView::ctor_4()
{
    ctor_3();
}

// public generated TextureView New() [static] :1032
TextureView* TextureView::New1()
{
    TextureView* obj1 = (TextureView*)uNew(TextureView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\NativeViews\$.uno(892)
// ----------------------------------------------------------------------

// internal sealed extern class VerticalScrollView :892
// {
::g::Android::android::view::ViewGroup_type* VerticalScrollView_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(VerticalScrollView);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Fuse.Android.NativeViews.VerticalScrollView", options);
    type->SetBase(::g::Android::android::widget::ScrollView_typeof());
    type->fp_onScrollChanged = (void(*)(::g::Android::android::view::View*, int*, int*, int*, int*))VerticalScrollView__onScrollChanged_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))::g::Android::android::widget::ScrollView__requestChildFocus_fn;
    type->interface2.fp_recomputeViewAttributes = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__recomputeViewAttributes_fn;
    type->interface2.fp_clearChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__clearChildFocus_fn;
    type->interface2.fp_getChildVisibleRect = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, ::g::Android::android::graphics::Point*, bool*))::g::Android::android::view::ViewGroup__getChildVisibleRect_fn;
    type->interface2.fp_focusSearch = (void(*)(uObject*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::View**))::g::Android::android::view::ViewGroup__focusSearch1_fn;
    type->interface2.fp_bringChildToFront = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__bringChildToFront_fn;
    type->interface2.fp_focusableViewAvailable = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__focusableViewAvailable_fn;
    type->interface2.fp_showContextMenuForChild = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))::g::Android::android::view::ViewGroup__showContextMenuForChild_fn;
    type->interface2.fp_createContextMenu = (void(*)(uObject*, uObject*))::g::Android::android::view::View__createContextMenu_fn;
    type->interface2.fp_startActionModeForChild = (void(*)(uObject*, ::g::Android::android::view::View*, uObject*, ::g::Android::android::view::ActionMode**))::g::Android::android::view::ViewGroup__startActionModeForChild_fn;
    type->interface2.fp_childDrawableStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__childDrawableStateChanged_fn;
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))::g::Android::android::widget::ScrollView__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))::g::Android::android::widget::ScrollView__requestChildRectangleOnScreen_fn;
    type->interface2.fp_requestSendAccessibilityEvent = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*, bool*))::g::Android::android::view::ViewGroup__requestSendAccessibilityEvent_fn;
    type->interface2.fp_childHasTransientStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))::g::Android::android::view::ViewGroup__childHasTransientStateChanged_fn;
    type->interface2.fp_requestFitSystemWindows = (void(*)(uObject*))::g::Android::android::view::View__requestFitSystemWindows_fn;
    type->interface2.fp_getParentForAccessibility = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParentForAccessibility_fn;
    type->interface2.fp_notifySubtreeAccessibilityStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*, int*))::g::Android::android::view::ViewGroup__notifySubtreeAccessibilityStateChanged_fn;
    type->interface2.fp_canResolveLayoutDirection = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveLayoutDirection_fn;
    type->interface2.fp_isLayoutDirectionResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutDirectionResolved_fn;
    type->interface2.fp_getLayoutDirection = (void(*)(uObject*, int*))::g::Android::android::view::View__getLayoutDirection_fn;
    type->interface2.fp_canResolveTextDirection = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveTextDirection_fn;
    type->interface2.fp_isTextDirectionResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isTextDirectionResolved_fn;
    type->interface2.fp_getTextDirection = (void(*)(uObject*, int*))::g::Android::android::view::View__getTextDirection_fn;
    type->interface2.fp_canResolveTextAlignment = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveTextAlignment_fn;
    type->interface2.fp_isTextAlignmentResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isTextAlignmentResolved_fn;
    type->interface2.fp_getTextAlignment = (void(*)(uObject*, int*))::g::Android::android::view::View__getTextAlignment_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[8] = uString::Const("com.Bindings.Binding_Fuse_Android_NativeViews_VerticalScrollView");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[4] = uString::Const("(JLandroid/content/Context;)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[1] = ::g::Android::android::content::Context_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::NativeViews::ScrollView_typeof(), offsetof(::g::Fuse::Android::NativeViews::VerticalScrollView, _sv), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::NativeViews::VerticalScrollView::_javaClass6_, uFieldFlagsStatic);
    return type;
}

// public VerticalScrollView(Fuse.Android.NativeViews.ScrollView sv) :896
void VerticalScrollView__ctor_20_fn(VerticalScrollView* __this, ::g::Fuse::Android::NativeViews::ScrollView* sv)
{
    __this->ctor_20(sv);
}

// public VerticalScrollView New(Fuse.Android.NativeViews.ScrollView sv) :896
void VerticalScrollView__New17_fn(::g::Fuse::Android::NativeViews::ScrollView* sv, VerticalScrollView** __retval)
{
    *__retval = VerticalScrollView::New17(sv);
}

// protected override sealed void onScrollChanged(int x, int y, int oldx, int oldy) :901
void VerticalScrollView__onScrollChanged_fn(VerticalScrollView* __this, int* x, int* y, int* oldx, int* oldy)
{
    int x_ = *x;
    int y_ = *y;
    int oldx_ = *oldx;
    int oldy_ = *oldy;
    uPtr(__this->_sv)->OnScrollChanged(x_, y_);
    ::g::Android::android::view::View__onScrollChanged_fn(__this, uCRef<int>(x_), uCRef<int>(y_), uCRef<int>(oldx_), uCRef<int>(oldy_));
}

jclass VerticalScrollView::_javaClass6_;

// public VerticalScrollView(Fuse.Android.NativeViews.ScrollView sv) [instance] :896
void VerticalScrollView::ctor_20(::g::Fuse::Android::NativeViews::ScrollView* sv)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[8/*"com.Binding...*/];
    }

    ctor_19(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(VerticalScrollView::_javaClass6(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        VerticalScrollView::_javaClass6() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[8/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onScrollChanged","(JIIIIJJJJ)V",Binding_Fuse_Android_NativeViews_VerticalScrollView__onScrollChanged22996);
        COMMIT_REG_MTD(VerticalScrollView::_javaClass6());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[4/*"(JLandroid/...*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject2(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak), ::g::Android::Base::Primitives::ujvalue::op_Implicit8(uPtr(::g::Android::android::app::Activity::GetAppActivity())->_GetJavaObject()));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _sv = sv;
}

// public VerticalScrollView New(Fuse.Android.NativeViews.ScrollView sv) [static] :896
VerticalScrollView* VerticalScrollView::New17(::g::Fuse::Android::NativeViews::ScrollView* sv)
{
    VerticalScrollView* obj1 = (VerticalScrollView*)uNew(VerticalScrollView_typeof());
    obj1->ctor_20(sv);
    return obj1;
}
// }

}}}} // ::g::Fuse::Android::NativeViews
